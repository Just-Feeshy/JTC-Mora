package;

import template.StageBuilder;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxMath;
import flixel.math.FlxPoint;
import flixel.util.FlxDestroyUtil;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import lime.utils.Assets;
import haxe.Json;

using StringTools;

class CheesyStage extends StageBuilder {
	@:final var doubleIconColors:Array<Int> = [
		0xff31b0d1, //Boyfriend
		0xffa5004d //Girlfriend
	];

	@:final var tripleIconColors:Array<Int> = [
		0xff31b0d1, //Boyfriend
		0xffa5004d, //Girlfriend
		0xffe9ff48 //Joul The Cool
	];

	@:final var spinSteps:Array<UInt> = [
		279,
		//303,
		//312,
		336,
		345,
		368,
		401,
		//409,
		435,
		//467,
		//477,
		501,
		509,
		//533,
		//542,
		567,
		575
		//602
	];

	var strumRotate:Array<Bool> = [
		false,
		false,
		false,
		false
	];

	var spinIndex:UInt = 0;
	var tweenIndex:UInt = 0;

	var allTweens:Array<FlxTween>;

	var boyfriend:Character;
	var dad:Character;

	var dadShouldDance:Bool = true;

	/*
	* Variables for lazy modcharts.
	*/
	var strumSpinning:Bool = false;
	var bounceIndex:UInt = 0;
	var bounceHold:Float = 0;

    public function new(stage:String) {
        super(stage);

		var cacheList:Array<String> = [];
		allTweens = new Array<FlxTween>();

		/**
		* WIP
		*
		if(Assets.exists(Paths.getPath('data/frostbeat/cache.json', TEXT, ""))) {
            cacheList = cast Json.parse(Assets.getText(Paths.getPath('data/frostbeat/cache.json', TEXT, "")));

			for(i in 0...cacheList.length) {
				if(!Cache.permanentCache.contains(cacheList[i])) {
					Cache.permanentCache.push(cacheList[i]);
				}
			}
		}
		*/

        switch(stage) {
            case "funkstreet":
                setDefaultCameraZoom(0.75);

				var bg:FlxSprite = new FlxSprite(-600, -200).loadGraphic(Paths.image('stage' + FlxG.random.int(1,3)));
				bg.antialiasing = true;
				bg.scrollFactor.set(0.95, 0.95);
				bg.active = false;
				add(bg);

				var stageCurtains:FlxSprite = new FlxSprite(-500, -300).loadGraphic(Paths.image('funklights'));
				stageCurtains.setGraphicSize(Std.int(stageCurtains.width * 0.9));
				stageCurtains.updateHitbox();
				stageCurtains.antialiasing = true;
				stageCurtains.scrollFactor.set(1.3, 1.3);
				stageCurtains.active = false;

				add(stageCurtains);
			case "funkroad":
				strumSpinning = true;

				setDefaultCameraZoom(0.50);

				var funkroadSky:FlxSprite = new FlxSprite(-900, -500).loadGraphic(Paths.image('funkroadSky'));
				funkroadSky.antialiasing = true;
				funkroadSky.scrollFactor.set(0.7, 0.7);
				funkroadSky.scale.set(1.2,1.2);
				funkroadSky.active = false;
				add(funkroadSky);

				var frostFrames = Paths.getSparrowAtlas('funkroad');

				var frostbiteBG:FlxSprite = new FlxSprite(-1300, -400);
				frostbiteBG.frames = frostFrames;
				frostbiteBG.animation.addByPrefix('move', "funkroad", 24, true);
				frostbiteBG.animation.play('move');
				frostbiteBG.antialiasing = true;
				frostbiteBG.scrollFactor.set(0.9, 0.9);
				frostbiteBG.scale.set(1.2,1.2);
				frostbiteBG.updateHitbox();
				add(frostbiteBG);
        }
    }

	function tweenHealthBar(info:Array<Int>, direction:String, playstate:PlayState):Void { // I didn't expect this to be a recursive method.
		if(direction == "right" || direction == "player") {
			tweenIndex = (tweenIndex + 1) % info.length;
			var prevValue:Int = tweenIndex - 1;

			if(prevValue < 0) {
				prevValue = info.length - 1;
			}

			allTweens.push(FlxTween.color(playstate.healthBar.filledBar, Conductor.bpm/60, info[prevValue], info[tweenIndex], {ease: FlxEase.linear,
				onComplete: function(twn:FlxTween) {
					cleanTween();
					tweenHealthBar(info, direction, playstate);
				}
			}));
		}
	}

	function cleanTween() {
        if (allTweens != null) {
            var index:Int = 0;
            var tween:FlxTween = null;

            while (index < allTweens.length) {
                tween = allTweens[index++];

                if (tween != null) {
                    tween.cancel();
                    tween.destroy();
                }

                allTweens.remove(tween);
            }
        }
    }

	/*
	function lazyModchartSpin(index:Int) {
		FlxTween.tween(PlayState.playerStrums.members[index], {yAngle: PlayState.playerStrums.members[index].yAngle + (Math.PI * 2)}, Conductor.bpm / (60 * bounceStrength), {ease: FlxEase.quadOut});
		FlxTween.tween(PlayState.opponentStrums.members[index], {yAngle: PlayState.opponentStrums.members[index].yAngle + (Math.PI * 2)}, Conductor.bpm / (60 * bounceStrength), {ease: FlxEase.quadOut});
	}
	*/

	function lazySpin(index:Int) {
		var playerStrum:Strum = PlayState.playerStrums.members[index];
		var opponentStrum:Strum = PlayState.opponentStrums.members[index];

		//if(playerStrum.yAngle < Math.PI * 2) {
	
		//}else if(playerStrum.yAngle > Math.PI * 2) {
			//playerStrum.yAngle = Math.PI * 2;
		//}

		/*
		if(opponentStrum.yAngle < Math.PI * 2) {
			opponentStrum.yAngle += FlxG.elapsed * Math.PI;
		}else if(opponentStrum.yAngle > Math.PI * 2) {
			opponentStrum.yAngle = Math.PI * 2;
		}
		*/
	}

	override function configStage():Void {
		boyfriend = Register.getInGameCharacter(BOYFRIEND);
		dad = Register.getInGameCharacter(OPPONENT);

		if(PlayState.SONG.song.toLowerCase() == "frostbeat") {
			boyfriend.shouldPlayDance = false;
			dad.shouldPlayDance = false;
		}
	}

	override function whenCreatingScene():Void {
		if(playstate.iconP1.iconAnimInfo[0] == 28 && playstate.iconP1.iconAnimInfo[1] == 29) {
			playstate.healthBar.filledColor = tripleIconColors[0];
			tweenHealthBar(tripleIconColors, "player", playstate);
		}

		if(PlayState.SONG.song.toLowerCase() != "funk-off" && PlayState.SONG.song.toLowerCase() != "ping-pong") {
			playstate.iconP2.createAnim("joul", [24, 30, 24]);
		}
	}

	override function setCamPos(camPos:FlxPoint):FlxPoint {
		if(stage == "funkroad") {
			return FlxPoint.get(751.5, 458.5);
		}

		return null;
	}

	override function hasGirlfriend():Bool {
		if(stage == "funkroad") {
			return false;
		}

		return true;
	}

	override function update(elapsed:Float):Void {
		if(dad.exists) {
			if(dad.animation.curAnim != null) {
				if (!dad.animation.curAnim.name.startsWith("sing") && !dad.stunned && dadShouldDance) {
					dad.dance();
				}
			}
		}else {
			dad = Register.getInGameCharacter(OPPONENT);
			dad.scale.set(1.1, 1.1);
			dad.updateHitbox();
			dadShouldDance = false;
			dad.shouldPlayDance = true;

			boyfriend.x += 200;
		}

		if(boyfriend.animation.curAnim != null) {
			if (!boyfriend.animation.curAnim.name.startsWith("sing") && !boyfriend.stunned) {
				boyfriend.dance();
			}
		}

		if(strumSpinning) {
			for(strum in playstate.strumLineNotes) {
				strum.yAngle = FlxMath.lerp(0, strum.yAngle, 0.95);
			}
		}

		if(strumSpinning) {
			if(spinSteps[spinIndex] == @:privateAccess playstate.curStep && bounceHold > Conductor.stepCrochet * 0.0011) {
				strumRotate[bounceIndex] = true;

				bounceHold = 0;

				bounceIndex++;

				if(bounceIndex >= Std.int(playstate.strumLineNotes.length * 0.5)) {
					bounceIndex = 0;
					spinIndex++;
				}
			}
			
			if(bounceHold <= Conductor.stepCrochet * 0.0011) {
				bounceHold += elapsed;
			}
		}

		//lazySpin(0);
		//PlayState.playerStrums.members[0].yAngle += elapsed * 3;

		super.update(elapsed);
	}

	override function destroy():Void {
		boyfriend = null;
		dad = null;

		super.destroy();
		cleanTween();
	}
}