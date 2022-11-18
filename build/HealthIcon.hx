package;

import flixel.FlxG;
import flixel.FlxSprite;

#if sys
import sys.FileSystem;
import sys.io.File;
#end

import openfl.utils.Assets;
import json2object.JsonParser;

import SaveData.SaveType;
import ModInitialize;

class HealthIcon extends FlxSprite
{
	/**
	 * Used for FreeplayState! If you use it elsewhere, prob gonna annoying
	 */
	public var sprTracker:FlxSprite;

	public var iconCharacters:Array<String>;
	public var iconAnimInfo:Array<Int>;

	public var character:String = "";
	public var bpm(default, set):UInt = 0;

	public var isPlayer(default, null):Bool = false;

	private var iconSway:Float = 0;
	private var updatePref:Float = 1;

	public function new(character:String = 'bf', isPlayer:Bool = false)
	{
		super();

		this.iconCharacters = [];
		this.iconAnimInfo = [];

		this.isPlayer = isPlayer;
		this.character = character;

		updatePref = (FlxG.save.data.showAntialiasing ? 1 : 0.5);

		loadGraphic(Paths.image('iconGrid'), true, 150, 150);

		antialiasing = SaveData.getData(SaveType.GRAPHICS);
		scrollFactor.set();
	}

	public function loadNewIcons(file:String) {
		loadGraphic(Paths.image(file), true, 150, 150);
	}

	public function createAnim(character:String, iconAnimInfo:Array<Int>, isPlayer:Bool = false):Void {
		if(!iconCharacters.contains(character)) {
			iconCharacters.push(character);
		}else {
			animation.remove(character);
		}

		if(this.character == character) {
			this.iconAnimInfo = iconAnimInfo;
			animation.add(character, iconAnimInfo, 0, false, isPlayer);
			animation.play(this.character);
		}
	}

	public function getIconJSON(character:String):Array<Int> {
		var parser:JsonParser<ConfigCharacters> = new JsonParser<ConfigCharacters>();
		var jsonPath:String = Paths.getPreloadPath('characters/$character.json');

		return parser.fromJson(Assets.getText(jsonPath), '$character.json').icon;
	}

	/*
	* Developer purpose only.
	*/
	#if sys
	public function loadAllAnims(isPlayer:Bool):Void {
		for(i in 0...FileSystem.readDirectory("assets/characters").length) {
			var funnyJson:ConfigCharacters = cast loadJSON("assets", "characters/" + FileSystem.readDirectory("assets/characters")[i].split(".")[0]);
			createAnim(FileSystem.readDirectory("assets/characters")[i].split(".")[0], funnyJson.icon, isPlayer);
		}

		for(i in 0...FileSystem.readDirectory("mod_assets/characters").length) {
			var funnyJson:ConfigCharacters = cast loadJSON("mod_assets", "characters/" + FileSystem.readDirectory("mod_assets/characters")[i].split(".")[0]);
			createAnim(FileSystem.readDirectory("mod_assets/characters")[i].split(".")[0], funnyJson.icon, isPlayer);
		}
	}

	function loadJSON(file:String, character:String):ConfigCharacters {
		var parser:JsonParser<ConfigCharacters> = new JsonParser<ConfigCharacters>();

		return parser.fromJson(File.getContent(file + '/$character.json'), '${character.split('/')[1]}.json');
	}
	#end

	function set_bpm(value:UInt):UInt {
		if(value == 0 || SaveData.getData(SaveType.GRAPHICS)) {
			updatePref = 0.5;
		}else {
			updatePref = 1;
		}

		return bpm = value;
	}

	override function update(elapsed:Float):Void {
		super.update(elapsed * updatePref);

		if (sprTracker != null) {
			setPosition(sprTracker.x + sprTracker.width + 10, sprTracker.y - 30);
		}

		if(bpm >= 1) {
			var currentSway:Float = iconSway*(bpm/120);
			iconSway += 0.004;

			angle = 15 * Math.sin(currentSway * Math.PI);
		}
	}
}