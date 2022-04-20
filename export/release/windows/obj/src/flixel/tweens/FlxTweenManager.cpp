#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_AngleTween
#include <flixel/tweens/misc/AngleTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CircularMotion
#include <flixel/tweens/motion/CircularMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CubicMotion
#include <flixel/tweens/motion/CubicMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearMotion
#include <flixel/tweens/motion/LinearMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearPath
#include <flixel/tweens/motion/LinearPath.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadMotion
#include <flixel/tweens/motion/QuadMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadPath
#include <flixel/tweens/motion/QuadPath.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5ae747326964aa7c_800_new,"flixel.tweens.FlxTweenManager","new",0x3916c2b2,"flixel.tweens.FlxTweenManager.new","flixel/tweens/FlxTween.hx",800,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1130_add_flixel_tweens_motion_QuadPath,"flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_QuadPath",0xa68abf75,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_QuadPath","flixel/tweens/FlxTween.hx",1130,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1130_add_flixel_tweens_motion_LinearPath,"flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_LinearPath",0x58c1abd3,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_LinearPath","flixel/tweens/FlxTween.hx",1130,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1130_add_flixel_tweens_motion_CircularMotion,"flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_CircularMotion",0xdd77ac1e,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_CircularMotion","flixel/tweens/FlxTween.hx",1130,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1130_add_flixel_tweens_motion_CubicMotion,"flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_CubicMotion",0x3bc2ad57,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_CubicMotion","flixel/tweens/FlxTween.hx",1130,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1130_add_flixel_tweens_motion_QuadMotion,"flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_QuadMotion",0x4adc7406,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_QuadMotion","flixel/tweens/FlxTween.hx",1130,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1130_add_flixel_tweens_motion_LinearMotion,"flixel.tweens.FlxTweenManager","add_flixel_tweens_motion_LinearMotion",0x29edb3e4,"flixel.tweens.FlxTweenManager.add_flixel_tweens_motion_LinearMotion","flixel/tweens/FlxTween.hx",1130,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1130_add_flixel_tweens_misc_ColorTween,"flixel.tweens.FlxTweenManager","add_flixel_tweens_misc_ColorTween",0xd92edebb,"flixel.tweens.FlxTweenManager.add_flixel_tweens_misc_ColorTween","flixel/tweens/FlxTween.hx",1130,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1130_add_flixel_tweens_misc_AngleTween,"flixel.tweens.FlxTweenManager","add_flixel_tweens_misc_AngleTween",0xb848364b,"flixel.tweens.FlxTweenManager.add_flixel_tweens_misc_AngleTween","flixel/tweens/FlxTween.hx",1130,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1130_add_flixel_tweens_misc_NumTween,"flixel.tweens.FlxTweenManager","add_flixel_tweens_misc_NumTween",0xa10a3838,"flixel.tweens.FlxTweenManager.add_flixel_tweens_misc_NumTween","flixel/tweens/FlxTween.hx",1130,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1130_add_flixel_tweens_FlxTween,"flixel.tweens.FlxTweenManager","add_flixel_tweens_FlxTween",0xdb4849d9,"flixel.tweens.FlxTweenManager.add_flixel_tweens_FlxTween","flixel/tweens/FlxTween.hx",1130,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1130_add_flixel_tweens_misc_VarTween,"flixel.tweens.FlxTweenManager","add_flixel_tweens_misc_VarTween",0x2ab94ff7,"flixel.tweens.FlxTweenManager.add_flixel_tweens_misc_VarTween","flixel/tweens/FlxTween.hx",1130,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_829_tween,"flixel.tweens.FlxTweenManager","tween",0x3e92553d,"flixel.tweens.FlxTweenManager.tween","flixel/tweens/FlxTween.hx",829,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_857_num,"flixel.tweens.FlxTweenManager","num",0x3916d098,"flixel.tweens.FlxTweenManager.num","flixel/tweens/FlxTween.hx",857,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_879_angle,"flixel.tweens.FlxTweenManager","angle",0x4803eea5,"flixel.tweens.FlxTweenManager.angle","flixel/tweens/FlxTween.hx",879,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_901_color,"flixel.tweens.FlxTweenManager","color",0x6f7e1c35,"flixel.tweens.FlxTweenManager.color","flixel/tweens/FlxTween.hx",901,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_927_linearMotion,"flixel.tweens.FlxTweenManager","linearMotion",0x3e017969,"flixel.tweens.FlxTweenManager.linearMotion","flixel/tweens/FlxTween.hx",927,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_956_quadMotion,"flixel.tweens.FlxTweenManager","quadMotion",0x792d5e4b,"flixel.tweens.FlxTweenManager.quadMotion","flixel/tweens/FlxTween.hx",956,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_986_cubicMotion,"flixel.tweens.FlxTweenManager","cubicMotion",0x943ebf72,"flixel.tweens.FlxTweenManager.cubicMotion","flixel/tweens/FlxTween.hx",986,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1015_circularMotion,"flixel.tweens.FlxTweenManager","circularMotion",0xf22b9ce3,"flixel.tweens.FlxTweenManager.circularMotion","flixel/tweens/FlxTween.hx",1015,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1038_linearPath,"flixel.tweens.FlxTweenManager","linearPath",0x87129618,"flixel.tweens.FlxTweenManager.linearPath","flixel/tweens/FlxTween.hx",1038,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1070_quadPath,"flixel.tweens.FlxTweenManager","quadPath",0xc1021e7a,"flixel.tweens.FlxTweenManager.quadPath","flixel/tweens/FlxTween.hx",1070,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1087_destroy,"flixel.tweens.FlxTweenManager","destroy",0x1585b04c,"flixel.tweens.FlxTweenManager.destroy","flixel/tweens/FlxTween.hx",1087,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1093_update,"flixel.tweens.FlxTweenManager","update",0xdf5952f7,"flixel.tweens.FlxTweenManager.update","flixel/tweens/FlxTween.hx",1093,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1151_remove,"flixel.tweens.FlxTweenManager","remove",0x5cdc6932,"flixel.tweens.FlxTweenManager.remove","flixel/tweens/FlxTween.hx",1151,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1169_clear,"flixel.tweens.FlxTweenManager","clear",0x6d7d1c5f,"flixel.tweens.FlxTweenManager.clear","flixel/tweens/FlxTween.hx",1169,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1196_cancelTweensOf,"flixel.tweens.FlxTweenManager","cancelTweensOf",0x737d1167,"flixel.tweens.FlxTweenManager.cancelTweensOf","flixel/tweens/FlxTween.hx",1196,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1225_completeTweensOf,"flixel.tweens.FlxTweenManager","completeTweensOf",0x0e281326,"flixel.tweens.FlxTweenManager.completeTweensOf","flixel/tweens/FlxTween.hx",1225,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1222_completeTweensOf,"flixel.tweens.FlxTweenManager","completeTweensOf",0x0e281326,"flixel.tweens.FlxTweenManager.completeTweensOf","flixel/tweens/FlxTween.hx",1222,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1244_forEachTweensOf,"flixel.tweens.FlxTweenManager","forEachTweensOf",0xfe85b7fb,"flixel.tweens.FlxTweenManager.forEachTweensOf","flixel/tweens/FlxTween.hx",1244,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1309_completeAll,"flixel.tweens.FlxTweenManager","completeAll",0x990abe3a,"flixel.tweens.FlxTweenManager.completeAll","flixel/tweens/FlxTween.hx",1309,0x5d58d691)
HX_LOCAL_STACK_FRAME(_hx_pos_5ae747326964aa7c_1322_forEach,"flixel.tweens.FlxTweenManager","forEach",0xb5bdacfc,"flixel.tweens.FlxTweenManager.forEach","flixel/tweens/FlxTween.hx",1322,0x5d58d691)
namespace flixel{
namespace tweens{

void FlxTweenManager_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_800_new)
HXLINE( 805)		this->_tweens = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 809)		super::__construct();
HXLINE( 810)		this->set_visible(false);
HXLINE( 811)		::flixel::FlxG_obj::signals->preStateSwitch->add(this->clear_dyn());
            	}

Dynamic FlxTweenManager_obj::__CreateEmpty() { return new FlxTweenManager_obj; }

void *FlxTweenManager_obj::_hx_vtable = 0;

Dynamic FlxTweenManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTweenManager_obj > _hx_result = new FlxTweenManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxTweenManager_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x75cc77f0) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x75cc77f0;
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

 ::flixel::tweens::motion::QuadPath FlxTweenManager_obj::add_flixel_tweens_motion_QuadPath( ::flixel::tweens::motion::QuadPath Tween,::hx::Null< bool >  __o_Start){
            		bool Start = __o_Start.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1130_add_flixel_tweens_motion_QuadPath)
HXLINE(1132)		if (::hx::IsNull( Tween )) {
HXLINE(1133)			return null();
            		}
HXLINE(1135)		this->_tweens->push(Tween);
HXLINE(1137)		if (Start) {
HXLINE(1138)			Tween->start();
            		}
HXLINE(1139)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_QuadPath,return )

 ::flixel::tweens::motion::LinearPath FlxTweenManager_obj::add_flixel_tweens_motion_LinearPath( ::flixel::tweens::motion::LinearPath Tween,::hx::Null< bool >  __o_Start){
            		bool Start = __o_Start.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1130_add_flixel_tweens_motion_LinearPath)
HXLINE(1132)		if (::hx::IsNull( Tween )) {
HXLINE(1133)			return null();
            		}
HXLINE(1135)		this->_tweens->push(Tween);
HXLINE(1137)		if (Start) {
HXLINE(1138)			Tween->start();
            		}
HXLINE(1139)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_LinearPath,return )

 ::flixel::tweens::motion::CircularMotion FlxTweenManager_obj::add_flixel_tweens_motion_CircularMotion( ::flixel::tweens::motion::CircularMotion Tween,::hx::Null< bool >  __o_Start){
            		bool Start = __o_Start.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1130_add_flixel_tweens_motion_CircularMotion)
HXLINE(1132)		if (::hx::IsNull( Tween )) {
HXLINE(1133)			return null();
            		}
HXLINE(1135)		this->_tweens->push(Tween);
HXLINE(1137)		if (Start) {
HXLINE(1138)			Tween->start();
            		}
HXLINE(1139)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_CircularMotion,return )

 ::flixel::tweens::motion::CubicMotion FlxTweenManager_obj::add_flixel_tweens_motion_CubicMotion( ::flixel::tweens::motion::CubicMotion Tween,::hx::Null< bool >  __o_Start){
            		bool Start = __o_Start.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1130_add_flixel_tweens_motion_CubicMotion)
HXLINE(1132)		if (::hx::IsNull( Tween )) {
HXLINE(1133)			return null();
            		}
HXLINE(1135)		this->_tweens->push(Tween);
HXLINE(1137)		if (Start) {
HXLINE(1138)			Tween->start();
            		}
HXLINE(1139)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_CubicMotion,return )

 ::flixel::tweens::motion::QuadMotion FlxTweenManager_obj::add_flixel_tweens_motion_QuadMotion( ::flixel::tweens::motion::QuadMotion Tween,::hx::Null< bool >  __o_Start){
            		bool Start = __o_Start.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1130_add_flixel_tweens_motion_QuadMotion)
HXLINE(1132)		if (::hx::IsNull( Tween )) {
HXLINE(1133)			return null();
            		}
HXLINE(1135)		this->_tweens->push(Tween);
HXLINE(1137)		if (Start) {
HXLINE(1138)			Tween->start();
            		}
HXLINE(1139)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_QuadMotion,return )

 ::flixel::tweens::motion::LinearMotion FlxTweenManager_obj::add_flixel_tweens_motion_LinearMotion( ::flixel::tweens::motion::LinearMotion Tween,::hx::Null< bool >  __o_Start){
            		bool Start = __o_Start.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1130_add_flixel_tweens_motion_LinearMotion)
HXLINE(1132)		if (::hx::IsNull( Tween )) {
HXLINE(1133)			return null();
            		}
HXLINE(1135)		this->_tweens->push(Tween);
HXLINE(1137)		if (Start) {
HXLINE(1138)			Tween->start();
            		}
HXLINE(1139)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_motion_LinearMotion,return )

 ::flixel::tweens::misc::ColorTween FlxTweenManager_obj::add_flixel_tweens_misc_ColorTween( ::flixel::tweens::misc::ColorTween Tween,::hx::Null< bool >  __o_Start){
            		bool Start = __o_Start.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1130_add_flixel_tweens_misc_ColorTween)
HXLINE(1132)		if (::hx::IsNull( Tween )) {
HXLINE(1133)			return null();
            		}
HXLINE(1135)		this->_tweens->push(Tween);
HXLINE(1137)		if (Start) {
HXLINE(1138)			Tween->start();
            		}
HXLINE(1139)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_misc_ColorTween,return )

 ::flixel::tweens::misc::AngleTween FlxTweenManager_obj::add_flixel_tweens_misc_AngleTween( ::flixel::tweens::misc::AngleTween Tween,::hx::Null< bool >  __o_Start){
            		bool Start = __o_Start.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1130_add_flixel_tweens_misc_AngleTween)
HXLINE(1132)		if (::hx::IsNull( Tween )) {
HXLINE(1133)			return null();
            		}
HXLINE(1135)		this->_tweens->push(Tween);
HXLINE(1137)		if (Start) {
HXLINE(1138)			Tween->start();
            		}
HXLINE(1139)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_misc_AngleTween,return )

 ::flixel::tweens::misc::NumTween FlxTweenManager_obj::add_flixel_tweens_misc_NumTween( ::flixel::tweens::misc::NumTween Tween,::hx::Null< bool >  __o_Start){
            		bool Start = __o_Start.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1130_add_flixel_tweens_misc_NumTween)
HXLINE(1132)		if (::hx::IsNull( Tween )) {
HXLINE(1133)			return null();
            		}
HXLINE(1135)		this->_tweens->push(Tween);
HXLINE(1137)		if (Start) {
HXLINE(1138)			Tween->start();
            		}
HXLINE(1139)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_misc_NumTween,return )

 ::flixel::tweens::FlxTween FlxTweenManager_obj::add_flixel_tweens_FlxTween( ::flixel::tweens::FlxTween Tween,::hx::Null< bool >  __o_Start){
            		bool Start = __o_Start.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1130_add_flixel_tweens_FlxTween)
HXLINE(1132)		if (::hx::IsNull( Tween )) {
HXLINE(1133)			return null();
            		}
HXLINE(1135)		this->_tweens->push(Tween);
HXLINE(1137)		if (Start) {
HXLINE(1138)			Tween->start();
            		}
HXLINE(1139)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_FlxTween,return )

 ::flixel::tweens::misc::VarTween FlxTweenManager_obj::add_flixel_tweens_misc_VarTween( ::flixel::tweens::misc::VarTween Tween,::hx::Null< bool >  __o_Start){
            		bool Start = __o_Start.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1130_add_flixel_tweens_misc_VarTween)
HXLINE(1132)		if (::hx::IsNull( Tween )) {
HXLINE(1133)			return null();
            		}
HXLINE(1135)		this->_tweens->push(Tween);
HXLINE(1137)		if (Start) {
HXLINE(1138)			Tween->start();
            		}
HXLINE(1139)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,add_flixel_tweens_misc_VarTween,return )

 ::flixel::tweens::misc::VarTween FlxTweenManager_obj::tween( ::Dynamic Object, ::Dynamic Values,::hx::Null< Float >  __o_Duration, ::Dynamic Options){
            		Float Duration = __o_Duration.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_5ae747326964aa7c_829_tween)
HXLINE( 830)		 ::flixel::tweens::misc::VarTween tween =  ::flixel::tweens::misc::VarTween_obj::__alloc( HX_CTX ,Options,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 831)		tween->tween(Object,Values,Duration);
HXLINE( 832)		return this->add_flixel_tweens_misc_VarTween(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTweenManager_obj,tween,return )

 ::flixel::tweens::misc::NumTween FlxTweenManager_obj::num(Float FromValue,Float ToValue,::hx::Null< Float >  __o_Duration, ::Dynamic Options, ::Dynamic TweenFunction){
            		Float Duration = __o_Duration.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_5ae747326964aa7c_857_num)
HXLINE( 858)		 ::flixel::tweens::misc::NumTween tween =  ::flixel::tweens::misc::NumTween_obj::__alloc( HX_CTX ,Options,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 859)		tween->tween(FromValue,ToValue,Duration,TweenFunction);
HXLINE( 860)		return this->add_flixel_tweens_misc_NumTween(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxTweenManager_obj,num,return )

 ::flixel::tweens::misc::AngleTween FlxTweenManager_obj::angle( ::flixel::FlxSprite Sprite,Float FromAngle,Float ToAngle,::hx::Null< Float >  __o_Duration, ::Dynamic Options){
            		Float Duration = __o_Duration.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_5ae747326964aa7c_879_angle)
HXLINE( 880)		 ::flixel::tweens::misc::AngleTween tween =  ::flixel::tweens::misc::AngleTween_obj::__alloc( HX_CTX ,Options,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 881)		tween->tween(FromAngle,ToAngle,Duration,Sprite);
HXLINE( 882)		return this->add_flixel_tweens_misc_AngleTween(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxTweenManager_obj,angle,return )

 ::flixel::tweens::misc::ColorTween FlxTweenManager_obj::color( ::flixel::FlxSprite Sprite,::hx::Null< Float >  __o_Duration,int FromColor,int ToColor, ::Dynamic Options){
            		Float Duration = __o_Duration.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_5ae747326964aa7c_901_color)
HXLINE( 902)		 ::flixel::tweens::misc::ColorTween tween =  ::flixel::tweens::misc::ColorTween_obj::__alloc( HX_CTX ,Options,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 903)		tween->tween(Duration,FromColor,ToColor,Sprite);
HXLINE( 904)		return this->add_flixel_tweens_misc_ColorTween(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxTweenManager_obj,color,return )

 ::flixel::tweens::motion::LinearMotion FlxTweenManager_obj::linearMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ToX,Float ToY,::hx::Null< Float >  __o_DurationOrSpeed,::hx::Null< bool >  __o_UseDuration, ::Dynamic Options){
            		Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
            		bool UseDuration = __o_UseDuration.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_5ae747326964aa7c_927_linearMotion)
HXLINE( 928)		 ::flixel::tweens::motion::LinearMotion tween =  ::flixel::tweens::motion::LinearMotion_obj::__alloc( HX_CTX ,Options,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 929)		tween->setObject(Object);
HXLINE( 930)		tween->setMotion(FromX,FromY,ToX,ToY,DurationOrSpeed,UseDuration);
HXLINE( 931)		return this->add_flixel_tweens_motion_LinearMotion(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxTweenManager_obj,linearMotion,return )

 ::flixel::tweens::motion::QuadMotion FlxTweenManager_obj::quadMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ControlX,Float ControlY,Float ToX,Float ToY,::hx::Null< Float >  __o_DurationOrSpeed,::hx::Null< bool >  __o_UseDuration, ::Dynamic Options){
            		Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
            		bool UseDuration = __o_UseDuration.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_5ae747326964aa7c_956_quadMotion)
HXLINE( 957)		 ::flixel::tweens::motion::QuadMotion tween =  ::flixel::tweens::motion::QuadMotion_obj::__alloc( HX_CTX ,Options,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 958)		tween->setObject(Object);
HXLINE( 959)		tween->setMotion(FromX,FromY,ControlX,ControlY,ToX,ToY,DurationOrSpeed,UseDuration);
HXLINE( 960)		return this->add_flixel_tweens_motion_QuadMotion(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC10(FlxTweenManager_obj,quadMotion,return )

 ::flixel::tweens::motion::CubicMotion FlxTweenManager_obj::cubicMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float aX,Float aY,Float bX,Float bY,Float ToX,Float ToY,::hx::Null< Float >  __o_Duration, ::Dynamic Options){
            		Float Duration = __o_Duration.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_5ae747326964aa7c_986_cubicMotion)
HXLINE( 987)		 ::flixel::tweens::motion::CubicMotion tween =  ::flixel::tweens::motion::CubicMotion_obj::__alloc( HX_CTX ,Options,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 988)		tween->setObject(Object);
HXLINE( 989)		tween->setMotion(FromX,FromY,aX,aY,bX,bY,ToX,ToY,Duration);
HXLINE( 990)		return this->add_flixel_tweens_motion_CubicMotion(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC11(FlxTweenManager_obj,cubicMotion,return )

 ::flixel::tweens::motion::CircularMotion FlxTweenManager_obj::circularMotion( ::flixel::FlxObject Object,Float CenterX,Float CenterY,Float Radius,Float Angle,bool Clockwise,::hx::Null< Float >  __o_DurationOrSpeed,::hx::Null< bool >  __o_UseDuration, ::Dynamic Options){
            		Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
            		bool UseDuration = __o_UseDuration.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_5ae747326964aa7c_1015_circularMotion)
HXLINE(1016)		 ::flixel::tweens::motion::CircularMotion tween =  ::flixel::tweens::motion::CircularMotion_obj::__alloc( HX_CTX ,Options,::hx::ObjectPtr<OBJ_>(this));
HXLINE(1017)		tween->setObject(Object);
HXLINE(1018)		tween->setMotion(CenterX,CenterY,Radius,Angle,Clockwise,DurationOrSpeed,UseDuration);
HXLINE(1019)		return this->add_flixel_tweens_motion_CircularMotion(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC9(FlxTweenManager_obj,circularMotion,return )

 ::flixel::tweens::motion::LinearPath FlxTweenManager_obj::linearPath( ::flixel::FlxObject Object,::Array< ::Dynamic> Points,::hx::Null< Float >  __o_DurationOrSpeed,::hx::Null< bool >  __o_UseDuration, ::Dynamic Options){
            		Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
            		bool UseDuration = __o_UseDuration.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_5ae747326964aa7c_1038_linearPath)
HXLINE(1039)		 ::flixel::tweens::motion::LinearPath tween =  ::flixel::tweens::motion::LinearPath_obj::__alloc( HX_CTX ,Options,::hx::ObjectPtr<OBJ_>(this));
HXLINE(1041)		if (::hx::IsNotNull( Points )) {
HXLINE(1043)			int _g = 0;
HXDLIN(1043)			while((_g < Points->length)){
HXLINE(1043)				 ::flixel::math::FlxPoint point = Points->__get(_g).StaticCast<  ::flixel::math::FlxPoint >();
HXDLIN(1043)				_g = (_g + 1);
HXLINE(1045)				tween->addPoint(point->x,point->y);
            			}
            		}
HXLINE(1049)		tween->setObject(Object);
HXLINE(1050)		tween->setMotion(DurationOrSpeed,UseDuration);
HXLINE(1051)		return this->add_flixel_tweens_motion_LinearPath(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxTweenManager_obj,linearPath,return )

 ::flixel::tweens::motion::QuadPath FlxTweenManager_obj::quadPath( ::flixel::FlxObject Object,::Array< ::Dynamic> Points,::hx::Null< Float >  __o_DurationOrSpeed,::hx::Null< bool >  __o_UseDuration, ::Dynamic Options){
            		Float DurationOrSpeed = __o_DurationOrSpeed.Default(1);
            		bool UseDuration = __o_UseDuration.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_5ae747326964aa7c_1070_quadPath)
HXLINE(1071)		 ::flixel::tweens::motion::QuadPath tween =  ::flixel::tweens::motion::QuadPath_obj::__alloc( HX_CTX ,Options,::hx::ObjectPtr<OBJ_>(this));
HXLINE(1073)		if (::hx::IsNotNull( Points )) {
HXLINE(1075)			int _g = 0;
HXDLIN(1075)			while((_g < Points->length)){
HXLINE(1075)				 ::flixel::math::FlxPoint point = Points->__get(_g).StaticCast<  ::flixel::math::FlxPoint >();
HXDLIN(1075)				_g = (_g + 1);
HXLINE(1077)				tween->addPoint(point->x,point->y);
            			}
            		}
HXLINE(1081)		tween->setObject(Object);
HXLINE(1082)		tween->setMotion(DurationOrSpeed,UseDuration);
HXLINE(1083)		return this->add_flixel_tweens_motion_QuadPath(tween,null());
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxTweenManager_obj,quadPath,return )

void FlxTweenManager_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1087_destroy)
HXLINE(1088)		this->super::destroy();
HXLINE(1089)		::flixel::FlxG_obj::signals->preStateSwitch->remove(this->clear_dyn());
            	}


void FlxTweenManager_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1093_update)
HXLINE(1095)		::Array< ::Dynamic> finishedTweens = null();
HXLINE(1097)		{
HXLINE(1097)			int _g = 0;
HXDLIN(1097)			::Array< ::Dynamic> _g1 = this->_tweens;
HXDLIN(1097)			while((_g < _g1->length)){
HXLINE(1097)				 ::flixel::tweens::FlxTween tween = _g1->__get(_g).StaticCast<  ::flixel::tweens::FlxTween >();
HXDLIN(1097)				_g = (_g + 1);
HXLINE(1099)				if (!(tween->active)) {
HXLINE(1100)					continue;
            				}
HXLINE(1102)				tween->update(elapsed);
HXLINE(1103)				if (tween->finished) {
HXLINE(1105)					if (::hx::IsNull( finishedTweens )) {
HXLINE(1106)						finishedTweens = ::Array_obj< ::Dynamic>::__new(0);
            					}
HXLINE(1107)					finishedTweens->push(tween);
            				}
            			}
            		}
HXLINE(1111)		if (::hx::IsNotNull( finishedTweens )) {
HXLINE(1113)			while((finishedTweens->length > 0)){
HXLINE(1115)				finishedTweens->shift().StaticCast<  ::flixel::tweens::FlxTween >()->finish();
            			}
            		}
            	}


 ::flixel::tweens::FlxTween FlxTweenManager_obj::remove( ::flixel::tweens::FlxTween Tween,::hx::Null< bool >  __o_Destroy){
            		bool Destroy = __o_Destroy.Default(true);
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1151_remove)
HXLINE(1152)		if (::hx::IsNull( Tween )) {
HXLINE(1153)			return null();
            		}
HXLINE(1155)		Tween->set_active(false);
HXLINE(1157)		if (Destroy) {
HXLINE(1158)			Tween->destroy();
            		}
HXLINE(1160)		{
HXLINE(1160)			::Array< ::Dynamic> array = this->_tweens;
HXDLIN(1160)			int index = array->indexOf(Tween,null());
HXDLIN(1160)			if ((index != -1)) {
HXLINE(1160)				array[index] = array->__get((array->length - 1)).StaticCast<  ::flixel::tweens::FlxTween >();
HXDLIN(1160)				array->pop().StaticCast<  ::flixel::tweens::FlxTween >();
            			}
            		}
HXLINE(1162)		return Tween;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,remove,return )

void FlxTweenManager_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1169_clear)
HXLINE(1170)		{
HXLINE(1170)			int _g = 0;
HXDLIN(1170)			::Array< ::Dynamic> _g1 = this->_tweens;
HXDLIN(1170)			while((_g < _g1->length)){
HXLINE(1170)				 ::flixel::tweens::FlxTween tween = _g1->__get(_g).StaticCast<  ::flixel::tweens::FlxTween >();
HXDLIN(1170)				_g = (_g + 1);
HXLINE(1172)				if (::hx::IsNotNull( tween )) {
HXLINE(1174)					tween->set_active(false);
HXLINE(1175)					tween->destroy();
            				}
            			}
            		}
HXLINE(1179)		this->_tweens->removeRange(0,this->_tweens->length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTweenManager_obj,clear,(void))

void FlxTweenManager_obj::cancelTweensOf( ::Dynamic Object,::Array< ::String > FieldPaths){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween tween){
            			HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1196_cancelTweensOf)
HXDLIN(1196)			tween->cancel();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1196_cancelTweensOf)
HXDLIN(1196)		this->forEachTweensOf(Object,FieldPaths, ::Dynamic(new _hx_Closure_0()));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,cancelTweensOf,(void))

void FlxTweenManager_obj::completeTweensOf( ::Dynamic Object,::Array< ::String > FieldPaths){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween tween){
            			HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1225_completeTweensOf)
HXLINE(1225)			bool _hx_tmp;
HXDLIN(1225)			bool _hx_tmp1;
HXDLIN(1225)			if (((tween->type & 2) == 0)) {
HXLINE(1225)				_hx_tmp1 = ((tween->type & 4) == 0);
            			}
            			else {
HXLINE(1225)				_hx_tmp1 = false;
            			}
HXDLIN(1225)			if (_hx_tmp1) {
HXLINE(1225)				_hx_tmp = tween->active;
            			}
            			else {
HXLINE(1225)				_hx_tmp = false;
            			}
HXDLIN(1225)			if (_hx_tmp) {
HXLINE(1226)				tween->update(((Float)1.79e+308));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1222_completeTweensOf)
HXDLIN(1222)		this->forEachTweensOf(Object,FieldPaths, ::Dynamic(new _hx_Closure_0()));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTweenManager_obj,completeTweensOf,(void))

void FlxTweenManager_obj::forEachTweensOf( ::Dynamic Object,::Array< ::String > FieldPaths, ::Dynamic Function){
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1244_forEachTweensOf)
HXLINE(1245)		if (::hx::IsNull( Object )) {
HXLINE(1246)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Cannot cancel tween variables of an object that is null.",1a,65,0e,44)));
            		}
HXLINE(1248)		bool _hx_tmp;
HXDLIN(1248)		if (::hx::IsNotNull( FieldPaths )) {
HXLINE(1248)			_hx_tmp = (FieldPaths->length == 0);
            		}
            		else {
HXLINE(1248)			_hx_tmp = true;
            		}
HXDLIN(1248)		if (_hx_tmp) {
HXLINE(1250)			int i = this->_tweens->length;
HXLINE(1251)			while(true){
HXLINE(1251)				i = (i - 1);
HXDLIN(1251)				if (!(((i + 1) > 0))) {
HXLINE(1251)					goto _hx_goto_35;
            				}
HXLINE(1253)				 ::flixel::tweens::FlxTween tween = this->_tweens->__get(i).StaticCast<  ::flixel::tweens::FlxTween >();
HXLINE(1254)				if (tween->isTweenOf(Object,null())) {
HXLINE(1255)					Function(tween);
            				}
            			}
            			_hx_goto_35:;
            		}
            		else {
HXLINE(1261)			::Array< ::Dynamic> propertyInfos = ::Array_obj< ::Dynamic>::__new();
HXLINE(1262)			{
HXLINE(1262)				int _g = 0;
HXDLIN(1262)				while((_g < FieldPaths->length)){
HXLINE(1262)					::String fieldPath = FieldPaths->__get(_g);
HXDLIN(1262)					_g = (_g + 1);
HXLINE(1264)					 ::Dynamic target = Object;
HXLINE(1265)					::Array< ::String > path = fieldPath.split(HX_(".",2e,00,00,00));
HXLINE(1266)					::String field = ( (::String)(path->pop()) );
HXLINE(1267)					{
HXLINE(1267)						int _g1 = 0;
HXDLIN(1267)						while((_g1 < path->length)){
HXLINE(1267)							::String component = path->__get(_g1);
HXDLIN(1267)							_g1 = (_g1 + 1);
HXLINE(1269)							target = ::Reflect_obj::getProperty(target,component);
HXLINE(1270)							if (!(::Reflect_obj::isObject(target))) {
HXLINE(1271)								goto _hx_goto_37;
            							}
            						}
            						_hx_goto_37:;
            					}
HXLINE(1274)					if (::Reflect_obj::isObject(target)) {
HXLINE(1275)						propertyInfos->push( ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("field",ba,94,93,00),field)
            							->setFixed(1,HX_("object",bf,7e,3f,15),target)));
            					}
            				}
            			}
HXLINE(1278)			int i = this->_tweens->length;
HXLINE(1279)			while(true){
HXLINE(1279)				i = (i - 1);
HXDLIN(1279)				if (!(((i + 1) > 0))) {
HXLINE(1279)					goto _hx_goto_38;
            				}
HXLINE(1281)				 ::flixel::tweens::FlxTween tween = this->_tweens->__get(i).StaticCast<  ::flixel::tweens::FlxTween >();
HXLINE(1282)				{
HXLINE(1282)					int _g = 0;
HXDLIN(1282)					while((_g < propertyInfos->length)){
HXLINE(1282)						 ::Dynamic info = propertyInfos->__get(_g);
HXDLIN(1282)						_g = (_g + 1);
HXLINE(1284)						if (tween->isTweenOf( ::Dynamic(info->__Field(HX_("object",bf,7e,3f,15),::hx::paccDynamic)),( (::String)(info->__Field(HX_("field",ba,94,93,00),::hx::paccDynamic)) ))) {
HXLINE(1286)							Function(tween);
HXLINE(1287)							goto _hx_goto_39;
            						}
            					}
            					_hx_goto_39:;
            				}
            			}
            			_hx_goto_38:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxTweenManager_obj,forEachTweensOf,(void))

void FlxTweenManager_obj::completeAll(){
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1309_completeAll)
HXDLIN(1309)		int _g = 0;
HXDLIN(1309)		::Array< ::Dynamic> _g1 = this->_tweens;
HXDLIN(1309)		while((_g < _g1->length)){
HXDLIN(1309)			 ::flixel::tweens::FlxTween tween = _g1->__get(_g).StaticCast<  ::flixel::tweens::FlxTween >();
HXDLIN(1309)			_g = (_g + 1);
HXLINE(1310)			bool _hx_tmp;
HXDLIN(1310)			bool _hx_tmp1;
HXDLIN(1310)			if (((tween->type & 2) == 0)) {
HXLINE(1310)				_hx_tmp1 = ((tween->type & 4) == 0);
            			}
            			else {
HXLINE(1310)				_hx_tmp1 = false;
            			}
HXDLIN(1310)			if (_hx_tmp1) {
HXLINE(1310)				_hx_tmp = tween->active;
            			}
            			else {
HXLINE(1310)				_hx_tmp = false;
            			}
HXDLIN(1310)			if (_hx_tmp) {
HXLINE(1311)				tween->update(((Float)1.79e+308));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTweenManager_obj,completeAll,(void))

void FlxTweenManager_obj::forEach( ::Dynamic Function){
            	HX_STACKFRAME(&_hx_pos_5ae747326964aa7c_1322_forEach)
HXDLIN(1322)		int _g = 0;
HXDLIN(1322)		::Array< ::Dynamic> _g1 = this->_tweens;
HXDLIN(1322)		while((_g < _g1->length)){
HXDLIN(1322)			 ::flixel::tweens::FlxTween tween = _g1->__get(_g).StaticCast<  ::flixel::tweens::FlxTween >();
HXDLIN(1322)			_g = (_g + 1);
HXLINE(1323)			Function(tween);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTweenManager_obj,forEach,(void))


::hx::ObjectPtr< FlxTweenManager_obj > FlxTweenManager_obj::__new() {
	::hx::ObjectPtr< FlxTweenManager_obj > __this = new FlxTweenManager_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxTweenManager_obj > FlxTweenManager_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxTweenManager_obj *__this = (FlxTweenManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTweenManager_obj), true, "flixel.tweens.FlxTweenManager"));
	*(void **)__this = FlxTweenManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxTweenManager_obj::FlxTweenManager_obj()
{
}

void FlxTweenManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTweenManager);
	HX_MARK_MEMBER_NAME(_tweens,"_tweens");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTweenManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tweens,"_tweens");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTweenManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"num") ) { return ::hx::Val( num_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { return ::hx::Val( tween_dyn() ); }
		if (HX_FIELD_EQ(inName,"angle") ) { return ::hx::Val( angle_dyn() ); }
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_tweens") ) { return ::hx::Val( _tweens ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEach") ) { return ::hx::Val( forEach_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quadPath") ) { return ::hx::Val( quadPath_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quadMotion") ) { return ::hx::Val( quadMotion_dyn() ); }
		if (HX_FIELD_EQ(inName,"linearPath") ) { return ::hx::Val( linearPath_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cubicMotion") ) { return ::hx::Val( cubicMotion_dyn() ); }
		if (HX_FIELD_EQ(inName,"completeAll") ) { return ::hx::Val( completeAll_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"linearMotion") ) { return ::hx::Val( linearMotion_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"circularMotion") ) { return ::hx::Val( circularMotion_dyn() ); }
		if (HX_FIELD_EQ(inName,"cancelTweensOf") ) { return ::hx::Val( cancelTweensOf_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"forEachTweensOf") ) { return ::hx::Val( forEachTweensOf_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"completeTweensOf") ) { return ::hx::Val( completeTweensOf_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_FlxTween") ) { return ::hx::Val( add_flixel_tweens_FlxTween_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_NumTween") ) { return ::hx::Val( add_flixel_tweens_misc_NumTween_dyn() ); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_VarTween") ) { return ::hx::Val( add_flixel_tweens_misc_VarTween_dyn() ); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_QuadPath") ) { return ::hx::Val( add_flixel_tweens_motion_QuadPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_ColorTween") ) { return ::hx::Val( add_flixel_tweens_misc_ColorTween_dyn() ); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_misc_AngleTween") ) { return ::hx::Val( add_flixel_tweens_misc_AngleTween_dyn() ); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_LinearPath") ) { return ::hx::Val( add_flixel_tweens_motion_LinearPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_QuadMotion") ) { return ::hx::Val( add_flixel_tweens_motion_QuadMotion_dyn() ); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_CubicMotion") ) { return ::hx::Val( add_flixel_tweens_motion_CubicMotion_dyn() ); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_LinearMotion") ) { return ::hx::Val( add_flixel_tweens_motion_LinearMotion_dyn() ); }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"add_flixel_tweens_motion_CircularMotion") ) { return ::hx::Val( add_flixel_tweens_motion_CircularMotion_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTweenManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_tweens") ) { _tweens=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTweenManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_tweens",47,85,9b,97));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTweenManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxTweenManager_obj,_tweens),HX_("_tweens",47,85,9b,97)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTweenManager_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTweenManager_obj_sMemberFields[] = {
	HX_("add_flixel_tweens_motion_QuadPath",a3,dd,de,e6),
	HX_("add_flixel_tweens_motion_LinearPath",81,31,fc,6c),
	HX_("add_flixel_tweens_motion_CircularMotion",cc,a0,91,11),
	HX_("add_flixel_tweens_motion_CubicMotion",e9,1f,bd,da),
	HX_("add_flixel_tweens_motion_QuadMotion",b4,f9,16,5f),
	HX_("add_flixel_tweens_motion_LinearMotion",12,81,17,a6),
	HX_("add_flixel_tweens_misc_ColorTween",e9,fc,82,19),
	HX_("add_flixel_tweens_misc_AngleTween",79,54,9c,f8),
	HX_("add_flixel_tweens_misc_NumTween",e6,ce,88,53),
	HX_("add_flixel_tweens_FlxTween",eb,31,6d,84),
	HX_("add_flixel_tweens_misc_VarTween",a5,e6,37,dd),
	HX_("_tweens",47,85,9b,97),
	HX_("tween",6b,aa,70,19),
	HX_("num",46,de,53,00),
	HX_("angle",d3,43,e2,22),
	HX_("color",63,71,5c,4a),
	HX_("linearMotion",fb,45,d8,a1),
	HX_("quadMotion",5d,82,a5,33),
	HX_("cubicMotion",20,2b,e6,02),
	HX_("circularMotion",f5,31,bc,12),
	HX_("linearPath",2a,ba,8a,41),
	HX_("quadPath",0c,ba,6e,d2),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("remove",44,9c,88,04),
	HX_("clear",8d,71,5b,48),
	HX_("cancelTweensOf",79,a6,0d,94),
	HX_("completeTweensOf",b8,90,d5,e3),
	HX_("forEachTweensOf",a9,92,77,5c),
	HX_("completeAll",e8,29,b2,07),
	HX_("forEach",aa,29,be,c4),
	::String(null()) };

::hx::Class FlxTweenManager_obj::__mClass;

void FlxTweenManager_obj::__register()
{
	FlxTweenManager_obj _hx_dummy;
	FlxTweenManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tweens.FlxTweenManager",c0,41,37,9a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTweenManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTweenManager_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTweenManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTweenManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tweens
