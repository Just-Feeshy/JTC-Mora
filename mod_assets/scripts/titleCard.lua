function onUpdate(elapsed)
    setCameraZoom("mainCam", lerp(1, getCameraZoom("mainCam"), 0.95))
end

function onBeatHit()
    if getCameraZoom("mainCam") < 1.35 then
        setCameraZoom("mainCam", getCameraZoom("mainCam") + (6 * curElapsed))
    end
end

function onStartIntro()
    decreaseSpriteSizeBy("gfDance", 1.5, 1.5)
    setSpritePosition("gfDance", windowWidth * 0.4, windowHeight * 0.21)
    playAnim("gfDance", "danceRight")

    compileSpriteSheet("logoBl", "JTC logo bumpin")
    playAnimationByPrefix("logoBl", "bump", "JTC logobumpin")
    decreaseSpriteSizeBy("logoBl", 1.2, 1.2)
    setSpritePosition("logoBl", 0, -50)
end

function onSkipIntro() --This shit look like Mag Engine 👌.
    createGradientSprite("tooMuchSpace", windowWidth, windowHeight, "[0xFF000000, 0xFF000000, 0xFF2b08b4]")
    setSpriteY("tooMuchSpace", windowHeight)
    insertSpriteToState(2, "tooMuchSpace")
    doTweenY("tweenGrad", "tooMuchSpace", 0, 2, "quadOut")
end

function lerp(value1, value2, ratio)
    return value1 + ratio * (value2 - value1)
end