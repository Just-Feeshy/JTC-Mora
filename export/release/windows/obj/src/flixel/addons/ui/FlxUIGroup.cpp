#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_774c2f74f08363c0_13_new,"flixel.addons.ui.FlxUIGroup","new",0x7ddf049c,"flixel.addons.ui.FlxUIGroup.new","flixel/addons/ui/FlxUIGroup.hx",13,0xd49587d3)
HX_LOCAL_STACK_FRAME(_hx_pos_774c2f74f08363c0_33_destroy,"flixel.addons.ui.FlxUIGroup","destroy",0x25c62f36,"flixel.addons.ui.FlxUIGroup.destroy","flixel/addons/ui/FlxUIGroup.hx",33,0xd49587d3)
HX_LOCAL_STACK_FRAME(_hx_pos_774c2f74f08363c0_37_add,"flixel.addons.ui.FlxUIGroup","add",0x7dd5265d,"flixel.addons.ui.FlxUIGroup.add","flixel/addons/ui/FlxUIGroup.hx",37,0xd49587d3)
HX_LOCAL_STACK_FRAME(_hx_pos_774c2f74f08363c0_47_remove,"flixel.addons.ui.FlxUIGroup","remove",0xd69eb588,"flixel.addons.ui.FlxUIGroup.remove","flixel/addons/ui/FlxUIGroup.hx",47,0xd49587d3)
HX_LOCAL_STACK_FRAME(_hx_pos_774c2f74f08363c0_58_setScrollFactor,"flixel.addons.ui.FlxUIGroup","setScrollFactor",0xef2c5dba,"flixel.addons.ui.FlxUIGroup.setScrollFactor","flixel/addons/ui/FlxUIGroup.hx",58,0xd49587d3)
HX_LOCAL_STACK_FRAME(_hx_pos_774c2f74f08363c0_68_hasThis,"flixel.addons.ui.FlxUIGroup","hasThis",0x1d802914,"flixel.addons.ui.FlxUIGroup.hasThis","flixel/addons/ui/FlxUIGroup.hx",68,0xd49587d3)
HX_LOCAL_STACK_FRAME(_hx_pos_774c2f74f08363c0_85_calcBounds,"flixel.addons.ui.FlxUIGroup","calcBounds",0xdbe23c2e,"flixel.addons.ui.FlxUIGroup.calcBounds","flixel/addons/ui/FlxUIGroup.hx",85,0xd49587d3)
HX_LOCAL_STACK_FRAME(_hx_pos_774c2f74f08363c0_157_floorAll,"flixel.addons.ui.FlxUIGroup","floorAll",0x028cf8f9,"flixel.addons.ui.FlxUIGroup.floorAll","flixel/addons/ui/FlxUIGroup.hx",157,0xd49587d3)
namespace flixel{
namespace addons{
namespace ui{

void FlxUIGroup_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_774c2f74f08363c0_13_new)
HXLINE(  23)		this->autoBounds = true;
HXLINE(  19)		this->broadcastToFlxUI = true;
HXLINE(  28)		super::__construct(X,Y,null());
            	}

Dynamic FlxUIGroup_obj::__CreateEmpty() { return new FlxUIGroup_obj; }

void *FlxUIGroup_obj::_hx_vtable = 0;

Dynamic FlxUIGroup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUIGroup_obj > _hx_result = new FlxUIGroup_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxUIGroup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x398eb8dc) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x398eb8dc;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

static ::flixel::IFlxSprite_obj _hx_flixel_addons_ui_FlxUIGroup__hx_flixel_IFlxSprite= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIGroup_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIGroup_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIGroup_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIGroup_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIGroup_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIGroup_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIGroup_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIGroup_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIGroup_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUIGroup_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIGroup_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIGroup_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIGroup_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIGroup_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxUIGroup_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIGroup_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIGroup_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUIGroup_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::addons::ui::FlxUIGroup_obj::setPosition,
};

static ::flixel::IFlxBasic_obj _hx_flixel_addons_ui_FlxUIGroup__hx_flixel_IFlxBasic= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIGroup_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIGroup_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIGroup_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIGroup_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIGroup_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIGroup_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIGroup_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIGroup_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIGroup_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUIGroup_obj::toString,
};

static ::flixel::addons::ui::interfaces::IFlxUIWidget_obj _hx_flixel_addons_ui_FlxUIGroup__hx_flixel_addons_ui_interfaces_IFlxUIWidget= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIGroup_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIGroup_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIGroup_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIGroup_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIGroup_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIGroup_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIGroup_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIGroup_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUIGroup_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUIGroup_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIGroup_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIGroup_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIGroup_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIGroup_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxUIGroup_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIGroup_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUIGroup_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUIGroup_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::addons::ui::FlxUIGroup_obj::setPosition,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUIGroup_obj::get_width,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIGroup_obj::set_width,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUIGroup_obj::get_height,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUIGroup_obj::set_height,
};

void *FlxUIGroup_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x897c83aa: return &_hx_flixel_addons_ui_FlxUIGroup__hx_flixel_IFlxSprite;
		case (int)0x284cfea9: return &_hx_flixel_addons_ui_FlxUIGroup__hx_flixel_IFlxBasic;
		case (int)0x998525de: return &_hx_flixel_addons_ui_FlxUIGroup__hx_flixel_addons_ui_interfaces_IFlxUIWidget;
	}
	return super::_hx_getInterface(inHash);
}

void FlxUIGroup_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_774c2f74f08363c0_33_destroy)
HXDLIN(  33)		this->super::destroy();
            	}


 ::Dynamic FlxUIGroup_obj::add( ::Dynamic _tmp_Object){
            	HX_STACKFRAME(&_hx_pos_774c2f74f08363c0_37_add)
HXLINE(  38)		 ::flixel::FlxSprite Object = ( ( ::flixel::FlxSprite)(_tmp_Object) );
HXDLIN(  38)		 ::flixel::FlxSprite obj = ( ( ::flixel::FlxSprite)(this->super::add(Object)) );
HXLINE(  39)		if (this->autoBounds) {
HXLINE(  41)			this->calcBounds(null());
            		}
HXLINE(  43)		return obj;
            	}


 ::Dynamic FlxUIGroup_obj::remove( ::Dynamic _tmp_Object,::hx::Null< bool >  __o_Splice){
            		bool Splice = __o_Splice.Default(false);
            	HX_STACKFRAME(&_hx_pos_774c2f74f08363c0_47_remove)
HXLINE(  48)		 ::flixel::FlxSprite Object = ( ( ::flixel::FlxSprite)(_tmp_Object) );
HXDLIN(  48)		 ::flixel::FlxSprite obj = ( ( ::flixel::FlxSprite)(this->super::remove(Object,Splice)) );
HXLINE(  49)		if (this->autoBounds) {
HXLINE(  51)			this->calcBounds(null());
            		}
HXLINE(  53)		return obj;
            	}


void FlxUIGroup_obj::setScrollFactor(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_774c2f74f08363c0_58_setScrollFactor)
HXDLIN(  58)		int _g = 0;
HXDLIN(  58)		::Array< ::Dynamic> _g1 = this->group->members;
HXDLIN(  58)		while((_g < _g1->length)){
HXDLIN(  58)			 ::flixel::FlxSprite obj = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN(  58)			_g = (_g + 1);
HXLINE(  60)			if (::hx::IsNotNull( obj )) {
HXLINE(  62)				obj->scrollFactor->set(X,Y);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIGroup_obj,setScrollFactor,(void))

bool FlxUIGroup_obj::hasThis( ::flixel::FlxSprite Object){
            	HX_STACKFRAME(&_hx_pos_774c2f74f08363c0_68_hasThis)
HXLINE(  69)		{
HXLINE(  69)			int _g = 0;
HXDLIN(  69)			::Array< ::Dynamic> _g1 = this->group->members;
HXDLIN(  69)			while((_g < _g1->length)){
HXLINE(  69)				 ::flixel::FlxSprite obj = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN(  69)				_g = (_g + 1);
HXLINE(  71)				if (::hx::IsInstanceEq( obj,Object )) {
HXLINE(  73)					return true;
            				}
            			}
            		}
HXLINE(  76)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIGroup_obj,hasThis,return )

void FlxUIGroup_obj::calcBounds( ::flixel::math::FlxRect rect){
            	HX_STACKFRAME(&_hx_pos_774c2f74f08363c0_85_calcBounds)
HXDLIN(  85)		bool _hx_tmp;
HXDLIN(  85)		if (::hx::IsNotNull( this->group->members )) {
HXDLIN(  85)			_hx_tmp = (this->group->members->get_length() > 0);
            		}
            		else {
HXDLIN(  85)			_hx_tmp = false;
            		}
HXDLIN(  85)		if (_hx_tmp) {
HXLINE(  87)			Float left = ::Math_obj::POSITIVE_INFINITY;
HXLINE(  88)			Float right = ::Math_obj::NEGATIVE_INFINITY;
HXLINE(  89)			Float top = ::Math_obj::POSITIVE_INFINITY;
HXLINE(  90)			Float bottom = ::Math_obj::NEGATIVE_INFINITY;
HXLINE(  91)			{
HXLINE(  91)				int _g = 0;
HXDLIN(  91)				::Array< ::Dynamic> _g1 = this->group->members;
HXDLIN(  91)				while((_g < _g1->length)){
HXLINE(  91)					 ::flixel::FlxSprite fb = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN(  91)					_g = (_g + 1);
HXLINE(  93)					if (::hx::IsNotNull( fb )) {
HXLINE(  95)						if (::Std_obj::isOfType(fb,::hx::ClassOf< ::flixel::addons::ui::interfaces::IFlxUIWidget >())) {
HXLINE(  97)							 ::flixel::FlxSprite flui = fb;
HXLINE(  98)							if ((flui->x < left)) {
HXLINE( 100)								left = flui->x;
            							}
HXLINE( 102)							Float flui1 = flui->x;
HXDLIN( 102)							if (((flui1 + flui->get_width()) > right)) {
HXLINE( 104)								Float flui1 = flui->x;
HXDLIN( 104)								right = (flui1 + flui->get_width());
            							}
HXLINE( 106)							if ((flui->y < top)) {
HXLINE( 108)								top = flui->y;
            							}
HXLINE( 110)							Float flui2 = flui->y;
HXDLIN( 110)							if (((flui2 + flui->get_height()) > bottom)) {
HXLINE( 112)								Float flui1 = flui->y;
HXDLIN( 112)								bottom = (flui1 + flui->get_height());
            							}
            						}
            						else {
HXLINE( 115)							if (::Std_obj::isOfType(fb,::hx::ClassOf< ::flixel::FlxSprite >())) {
HXLINE( 117)								 ::flixel::FlxSprite flxi = fb;
HXLINE( 118)								if ((flxi->x < left)) {
HXLINE( 120)									left = flxi->x;
            								}
HXLINE( 122)								if ((flxi->x > right)) {
HXLINE( 124)									right = flxi->x;
            								}
HXLINE( 126)								if ((flxi->y < top)) {
HXLINE( 128)									top = flxi->y;
            								}
HXLINE( 130)								if ((flxi->y > bottom)) {
HXLINE( 132)									bottom = flxi->y;
            								}
            							}
            						}
            					}
            				}
            			}
HXLINE( 137)			this->set_width((right - left));
HXLINE( 138)			this->set_height((bottom - top));
HXLINE( 139)			if (::hx::IsNotNull( rect )) {
HXLINE( 141)				rect->x = left;
HXLINE( 142)				rect->y = top;
HXLINE( 143)				rect->width = this->get_width();
HXLINE( 144)				rect->height = this->get_height();
            			}
            		}
            		else {
HXLINE( 149)			this->set_width(this->set_height(( (Float)(0) )));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIGroup_obj,calcBounds,(void))

void FlxUIGroup_obj::floorAll(){
            	HX_STACKFRAME(&_hx_pos_774c2f74f08363c0_157_floorAll)
HXLINE( 158)		 ::flixel::FlxSprite fs = null();
HXLINE( 159)		{
HXLINE( 159)			int _g = 0;
HXDLIN( 159)			::Array< ::Dynamic> _g1 = this->group->members;
HXDLIN( 159)			while((_g < _g1->length)){
HXLINE( 159)				 ::flixel::FlxSprite fb = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 159)				_g = (_g + 1);
HXLINE( 161)				fs = fb;
HXLINE( 162)				fs->set_x(( (Float)(::Math_obj::floor(fs->x)) ));
HXLINE( 163)				fs->set_y(( (Float)(::Math_obj::floor(fs->y)) ));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIGroup_obj,floorAll,(void))


::hx::ObjectPtr< FlxUIGroup_obj > FlxUIGroup_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y) {
	::hx::ObjectPtr< FlxUIGroup_obj > __this = new FlxUIGroup_obj();
	__this->__construct(__o_X,__o_Y);
	return __this;
}

::hx::ObjectPtr< FlxUIGroup_obj > FlxUIGroup_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y) {
	FlxUIGroup_obj *__this = (FlxUIGroup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUIGroup_obj), true, "flixel.addons.ui.FlxUIGroup"));
	*(void **)__this = FlxUIGroup_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y);
	return __this;
}

FlxUIGroup_obj::FlxUIGroup_obj()
{
}

void FlxUIGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIGroup);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_MARK_MEMBER_NAME(autoBounds,"autoBounds");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_VISIT_MEMBER_NAME(autoBounds,"autoBounds");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxUIGroup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasThis") ) { return ::hx::Val( hasThis_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"floorAll") ) { return ::hx::Val( floorAll_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoBounds") ) { return ::hx::Val( autoBounds ); }
		if (HX_FIELD_EQ(inName,"calcBounds") ) { return ::hx::Val( calcBounds_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setScrollFactor") ) { return ::hx::Val( setScrollFactor_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { return ::hx::Val( broadcastToFlxUI ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxUIGroup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoBounds") ) { autoBounds=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { broadcastToFlxUI=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("broadcastToFlxUI",ca,32,56,1a));
	outFields->push(HX_("autoBounds",44,97,e8,d1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxUIGroup_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FlxUIGroup_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsBool,(int)offsetof(FlxUIGroup_obj,broadcastToFlxUI),HX_("broadcastToFlxUI",ca,32,56,1a)},
	{::hx::fsBool,(int)offsetof(FlxUIGroup_obj,autoBounds),HX_("autoBounds",44,97,e8,d1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxUIGroup_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxUIGroup_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("broadcastToFlxUI",ca,32,56,1a),
	HX_("autoBounds",44,97,e8,d1),
	HX_("destroy",fa,2c,86,24),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("setScrollFactor",7e,bf,85,5a),
	HX_("hasThis",d8,26,40,1c),
	HX_("calcBounds",ea,30,0c,1b),
	HX_("floorAll",b5,06,cb,eb),
	::String(null()) };

::hx::Class FlxUIGroup_obj::__mClass;

void FlxUIGroup_obj::__register()
{
	FlxUIGroup_obj _hx_dummy;
	FlxUIGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxUIGroup",aa,c6,a9,9d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxUIGroup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxUIGroup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUIGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUIGroup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
