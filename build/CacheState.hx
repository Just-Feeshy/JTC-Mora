package;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.FlxState;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;

import sys.thread.Thread;
import sys.FileSystem;
import sys.io.File;

import lime.utils.Assets;
import haxe.Json;

import ModInitialize;

class CacheState extends MusicBeatState {
    var target:FlxState;
	var stopMusic = false;

    var menuBG:FlxSprite;
    var loading:Alphabet;

    var colorSway:Float = 0;

    var timer:Float = 0;

    public function new(target:FlxState, stopMusic:Bool) {
        super();

        this.target = target;
        this.stopMusic = stopMusic;
    }

    override function create() {
        menuBG = new FlxSprite();
		menuBG.loadGraphic(Paths.image(Paths.modJSON.background_images[FlxG.random.int(0, Paths.modJSON.background_images.length - 1)]));
        menuBG.scrollFactor.set();
        menuBG.screenCenter();
		add(menuBG);

        loading = new Alphabet(0, 0, "Loading", true, false, 30);
        loading.y = (FlxG.height - loading.height) - 30;
        add(loading);

		Thread.create(() -> {
			cacheStuff();
		});

        super.create();
    }

    override function update(elapsed:Float) {
        if(loading != null) {
            loading.forEach(function(spr:FlxSprite) {
                spr.color = FlxColor.fromRGBFloat(0.6 + Math.sin(colorSway * Math.PI) * 0.4,
                0.6 + Math.sin(colorSway * Math.PI) * 0.4, 0.6 + Math.sin(colorSway * Math.PI) * 0.4);
            });

            colorSway += elapsed;
        }
        
        super.update(elapsed);
    }

    function cacheStuff() {
        Cache.clear();

        var cacheList:Array<String> = cast Json.parse(Assets.getText(Paths.getPath('data/${PlayState.SONG.song.toLowerCase()}/cache.json', TEXT, "")));

        for(i in 0...cacheList.length) {
            Cache.cacheAsset(cacheList[i], "");
        }

        LoadingState.loadAndSwitchState(target, stopMusic);
	}

    function wait():Void {
        timer = 0;
    }

    function switchStateLoad():Void {
        LoadingState.loadAndSwitchState(target, stopMusic);
    }

    static public function loadAndSwitchState(target:FlxState, ?stopMusic:Bool = true) {
        if(PlayState.SONG.video != null) {
            if(Assets.exists(Paths.getPath('data/${PlayState.SONG.song.toLowerCase()}/cache.json', TEXT, ""))) {
                FlxG.switchState(new VideoState(new CacheState(new PlayState(), true), PlayState.SONG.video));
            }else {
                LoadingState.loadAndSwitchState(new VideoState(new PlayState(), PlayState.SONG.video));
            }

            return;
        }

        if(Assets.exists(Paths.getPath('data/${PlayState.SONG.song.toLowerCase()}/cache.json', TEXT, ""))) {
            FlxG.switchState(new CacheState(new PlayState(), true));
        }else {
            LoadingState.loadAndSwitchState(new PlayState());
        }
    }
}