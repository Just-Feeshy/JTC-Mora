#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI9SliceSprite
#include <flixel/addons/ui/FlxUI9SliceSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_U
#include <flixel/addons/ui/U.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_20_new,"flixel.addons.ui.FlxUI9SliceSprite","new",0x6ddf7885,"flixel.addons.ui.FlxUI9SliceSprite.new","flixel/addons/ui/FlxUI9SliceSprite.hx",20,0x728ef6ec)
HX_LOCAL_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_134_destroy,"flixel.addons.ui.FlxUI9SliceSprite","destroy",0x52d94b9f,"flixel.addons.ui.FlxUI9SliceSprite.destroy","flixel/addons/ui/FlxUI9SliceSprite.hx",134,0x728ef6ec)
HX_LOCAL_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_140_resize,"flixel.addons.ui.FlxUI9SliceSprite","resize",0x881d96ef,"flixel.addons.ui.FlxUI9SliceSprite.resize","flixel/addons/ui/FlxUI9SliceSprite.hx",140,0x728ef6ec)
static const int _hx_array_data_7a35d213_3[] = {
	(int)4,(int)4,(int)7,(int)7,
};
HX_LOCAL_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_220_noLongerUsingCachedID,"flixel.addons.ui.FlxUI9SliceSprite","noLongerUsingCachedID",0x94bbc89c,"flixel.addons.ui.FlxUI9SliceSprite.noLongerUsingCachedID","flixel/addons/ui/FlxUI9SliceSprite.hx",220,0x728ef6ec)
HX_LOCAL_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_235_purgeSections,"flixel.addons.ui.FlxUI9SliceSprite","purgeSections",0xa3a6749e,"flixel.addons.ui.FlxUI9SliceSprite.purgeSections","flixel/addons/ui/FlxUI9SliceSprite.hx",235,0x728ef6ec)
HX_LOCAL_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_255_getRectFromString,"flixel.addons.ui.FlxUI9SliceSprite","getRectFromString",0x5989423a,"flixel.addons.ui.FlxUI9SliceSprite.getRectFromString","flixel/addons/ui/FlxUI9SliceSprite.hx",255,0x728ef6ec)
HX_LOCAL_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_270_getRectIntsFromString,"flixel.addons.ui.FlxUI9SliceSprite","getRectIntsFromString",0x35da5b7e,"flixel.addons.ui.FlxUI9SliceSprite.getRectIntsFromString","flixel/addons/ui/FlxUI9SliceSprite.hx",270,0x728ef6ec)
HX_LOCAL_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_299_paintScale9,"flixel.addons.ui.FlxUI9SliceSprite","paintScale9",0xf90375d2,"flixel.addons.ui.FlxUI9SliceSprite.paintScale9","flixel/addons/ui/FlxUI9SliceSprite.hx",299,0x728ef6ec)
HX_LOCAL_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_403_makePaintScale9Id,"flixel.addons.ui.FlxUI9SliceSprite","makePaintScale9Id",0x83e4ddff,"flixel.addons.ui.FlxUI9SliceSprite.makePaintScale9Id","flixel/addons/ui/FlxUI9SliceSprite.hx",403,0x728ef6ec)
HX_LOCAL_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_408_paintCompoundBitmap,"flixel.addons.ui.FlxUI9SliceSprite","paintCompoundBitmap",0xb0d9501d,"flixel.addons.ui.FlxUI9SliceSprite.paintCompoundBitmap","flixel/addons/ui/FlxUI9SliceSprite.hx",408,0x728ef6ec)
HX_LOCAL_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_483_paintBitmapSection,"flixel.addons.ui.FlxUI9SliceSprite","paintBitmapSection",0xd9a180b3,"flixel.addons.ui.FlxUI9SliceSprite.paintBitmapSection","flixel/addons/ui/FlxUI9SliceSprite.hx",483,0x728ef6ec)
HX_LOCAL_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_549_bitmapFillRect,"flixel.addons.ui.FlxUI9SliceSprite","bitmapFillRect",0x90ef4851,"flixel.addons.ui.FlxUI9SliceSprite.bitmapFillRect","flixel/addons/ui/FlxUI9SliceSprite.hx",549,0x728ef6ec)
HX_LOCAL_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_22_boot,"flixel.addons.ui.FlxUI9SliceSprite","boot",0xadc2fc6d,"flixel.addons.ui.FlxUI9SliceSprite.boot","flixel/addons/ui/FlxUI9SliceSprite.hx",22,0x728ef6ec)
HX_LOCAL_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_26_boot,"flixel.addons.ui.FlxUI9SliceSprite","boot",0xadc2fc6d,"flixel.addons.ui.FlxUI9SliceSprite.boot","flixel/addons/ui/FlxUI9SliceSprite.hx",26,0x728ef6ec)
HX_LOCAL_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_47_boot,"flixel.addons.ui.FlxUI9SliceSprite","boot",0xadc2fc6d,"flixel.addons.ui.FlxUI9SliceSprite.boot","flixel/addons/ui/FlxUI9SliceSprite.hx",47,0x728ef6ec)
HX_LOCAL_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_48_boot,"flixel.addons.ui.FlxUI9SliceSprite","boot",0xadc2fc6d,"flixel.addons.ui.FlxUI9SliceSprite.boot","flixel/addons/ui/FlxUI9SliceSprite.hx",48,0x728ef6ec)
HX_LOCAL_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_49_boot,"flixel.addons.ui.FlxUI9SliceSprite","boot",0xadc2fc6d,"flixel.addons.ui.FlxUI9SliceSprite.boot","flixel/addons/ui/FlxUI9SliceSprite.hx",49,0x728ef6ec)
HX_LOCAL_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_51_boot,"flixel.addons.ui.FlxUI9SliceSprite","boot",0xadc2fc6d,"flixel.addons.ui.FlxUI9SliceSprite.boot","flixel/addons/ui/FlxUI9SliceSprite.hx",51,0x728ef6ec)
HX_LOCAL_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_52_boot,"flixel.addons.ui.FlxUI9SliceSprite","boot",0xadc2fc6d,"flixel.addons.ui.FlxUI9SliceSprite.boot","flixel/addons/ui/FlxUI9SliceSprite.hx",52,0x728ef6ec)
HX_LOCAL_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_54_boot,"flixel.addons.ui.FlxUI9SliceSprite","boot",0xadc2fc6d,"flixel.addons.ui.FlxUI9SliceSprite.boot","flixel/addons/ui/FlxUI9SliceSprite.hx",54,0x728ef6ec)
HX_LOCAL_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_55_boot,"flixel.addons.ui.FlxUI9SliceSprite","boot",0xadc2fc6d,"flixel.addons.ui.FlxUI9SliceSprite.boot","flixel/addons/ui/FlxUI9SliceSprite.hx",55,0x728ef6ec)
HX_LOCAL_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_58_boot,"flixel.addons.ui.FlxUI9SliceSprite","boot",0xadc2fc6d,"flixel.addons.ui.FlxUI9SliceSprite.boot","flixel/addons/ui/FlxUI9SliceSprite.hx",58,0x728ef6ec)
HX_LOCAL_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_59_boot,"flixel.addons.ui.FlxUI9SliceSprite","boot",0xadc2fc6d,"flixel.addons.ui.FlxUI9SliceSprite.boot","flixel/addons/ui/FlxUI9SliceSprite.hx",59,0x728ef6ec)
HX_LOCAL_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_60_boot,"flixel.addons.ui.FlxUI9SliceSprite","boot",0xadc2fc6d,"flixel.addons.ui.FlxUI9SliceSprite.boot","flixel/addons/ui/FlxUI9SliceSprite.hx",60,0x728ef6ec)
HX_LOCAL_STACK_FRAME(_hx_pos_99c1e4be2c673cd2_61_boot,"flixel.addons.ui.FlxUI9SliceSprite","boot",0xadc2fc6d,"flixel.addons.ui.FlxUI9SliceSprite.boot","flixel/addons/ui/FlxUI9SliceSprite.hx",61,0x728ef6ec)
namespace flixel{
namespace addons{
namespace ui{

void FlxUI9SliceSprite_obj::__construct(Float X,Float Y, ::Dynamic Graphic, ::openfl::geom::Rectangle Rect,::Array< int > Slice9,::hx::Null< int >  __o_Tile,::hx::Null< bool >  __o_Smooth,::String __o_Id,::hx::Null< Float >  __o_Ratio, ::flixel::math::FlxPoint Resize_point,::hx::Null< int >  __o_Resize_axis,::hx::Null< bool >  __o_DeferResize,::hx::Null< int >  __o_Color){
            		int Tile = __o_Tile.Default(0);
            		bool Smooth = __o_Smooth.Default(false);
            		::String Id = __o_Id;
            		if (::hx::IsNull(__o_Id)) Id = HX_("",00,00,00,00);
            		Float Ratio = __o_Ratio.Default(-1);
            		int Resize_axis = __o_Resize_axis.Default(1);
            		bool DeferResize = __o_DeferResize.Default(false);
            		int Color = __o_Color.Default(-1);
            	HX_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_20_new)
HXLINE(  42)		this->_asset_id = HX_("",00,00,00,00);
HXLINE(  40)		this->_smooth = false;
HXLINE(  39)		this->_tile = 0;
HXLINE(  37)		this->_slice9 = null();
HXLINE(  35)		this->paintScale9_id = HX_("",00,00,00,00);
HXLINE(  84)		super::__construct(X,Y,null());
HXLINE(  85)		this->set_color(Color);
HXLINE(  86)		this->_slice9 = Slice9;
HXLINE(  87)		this->_tile = Tile;
HXLINE(  88)		this->_smooth = Smooth;
HXLINE(  90)		this->_asset_id = HX_("",00,00,00,00);
HXLINE(  92)		if (::hx::IsNull( Graphic )) {
HXLINE(  94)			Graphic = HX_("flixel/flixel-ui/img/chrome.png",fe,fb,12,55);
            		}
HXLINE(  97)		if (::Std_obj::isOfType(Graphic,::hx::ClassOf< ::String >())) {
HXLINE(  99)			this->_asset_id = ( (::String)(Graphic) );
HXLINE( 100)			this->_raw_pixels = null();
            		}
            		else {
HXLINE( 102)			if (::Std_obj::isOfType(Graphic,::hx::ClassOf< ::openfl::display::BitmapData >())) {
HXLINE( 104)				this->_asset_id = Id;
HXLINE( 105)				this->_raw_pixels = ( ( ::openfl::display::BitmapData)(Graphic) );
            			}
            			else {
HXLINE( 107)				if (::Std_obj::isOfType(Graphic,::hx::ClassOf< ::flixel::graphics::FlxGraphic >())) {
HXLINE( 109)					 ::flixel::graphics::FlxGraphic fg = ( ( ::flixel::graphics::FlxGraphic)(Graphic) );
HXLINE( 110)					this->_asset_id = fg->key;
HXLINE( 111)					this->_raw_pixels = fg->bitmap;
            				}
            			}
            		}
HXLINE( 114)		this->set_resize_ratio(Ratio);
HXLINE( 115)		this->resize_ratio_axis = Resize_axis;
HXLINE( 116)		if (::hx::IsNotNull( Resize_point )) {
HXLINE( 118)			this->set_resize_point(Resize_point);
            		}
HXLINE( 121)		if (DeferResize) {
HXLINE( 123)			 ::flixel::math::FlxPoint pt = ::flixel::addons::ui::U_obj::applyResize(this->resize_ratio,this->resize_ratio_axis,Rect->width,Rect->height,null());
HXLINE( 124)			this->set_width(pt->x);
HXLINE( 125)			this->set_height(pt->y);
            		}
            		else {
HXLINE( 129)			this->resize(Rect->width,Rect->height);
            		}
            	}

Dynamic FlxUI9SliceSprite_obj::__CreateEmpty() { return new FlxUI9SliceSprite_obj; }

void *FlxUI9SliceSprite_obj::_hx_vtable = 0;

Dynamic FlxUI9SliceSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUI9SliceSprite_obj > _hx_result = new FlxUI9SliceSprite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12]);
	return _hx_result;
}

bool FlxUI9SliceSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x1d227259) {
			if (inClassId<=(int)0x0dc54e00) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0dc54e00;
			} else {
				return inClassId==(int)0x1d227259;
			}
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

static ::flixel::IFlxSprite_obj _hx_flixel_addons_ui_FlxUI9SliceSprite__hx_flixel_IFlxSprite= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUI9SliceSprite_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUI9SliceSprite_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUI9SliceSprite_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUI9SliceSprite_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUI9SliceSprite_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUI9SliceSprite_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUI9SliceSprite_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::addons::ui::FlxUI9SliceSprite_obj::setPosition,
};

static ::flixel::IFlxBasic_obj _hx_flixel_addons_ui_FlxUI9SliceSprite__hx_flixel_IFlxBasic= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUI9SliceSprite_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUI9SliceSprite_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUI9SliceSprite_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUI9SliceSprite_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUI9SliceSprite_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUI9SliceSprite_obj::toString,
};

static ::flixel::addons::ui::interfaces::IFlxUIWidget_obj _hx_flixel_addons_ui_FlxUI9SliceSprite__hx_flixel_addons_ui_interfaces_IFlxUIWidget= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUI9SliceSprite_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUI9SliceSprite_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUI9SliceSprite_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUI9SliceSprite_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUI9SliceSprite_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUI9SliceSprite_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUI9SliceSprite_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::addons::ui::FlxUI9SliceSprite_obj::setPosition,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUI9SliceSprite_obj::get_width,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_width,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUI9SliceSprite_obj::get_height,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_height,
};

static ::flixel::addons::ui::interfaces::IResizable_obj _hx_flixel_addons_ui_FlxUI9SliceSprite__hx_flixel_addons_ui_interfaces_IResizable= {
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUI9SliceSprite_obj::get_width,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_width,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUI9SliceSprite_obj::get_height,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUI9SliceSprite_obj::set_height,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUI9SliceSprite_obj::resize,
};

void *FlxUI9SliceSprite_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x897c83aa: return &_hx_flixel_addons_ui_FlxUI9SliceSprite__hx_flixel_IFlxSprite;
		case (int)0x284cfea9: return &_hx_flixel_addons_ui_FlxUI9SliceSprite__hx_flixel_IFlxBasic;
		case (int)0x998525de: return &_hx_flixel_addons_ui_FlxUI9SliceSprite__hx_flixel_addons_ui_interfaces_IFlxUIWidget;
		case (int)0x194a3c9f: return &_hx_flixel_addons_ui_FlxUI9SliceSprite__hx_flixel_addons_ui_interfaces_IResizable;
	}
	return super::_hx_getInterface(inHash);
}

void FlxUI9SliceSprite_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_134_destroy)
HXLINE( 135)		this->noLongerUsingCachedID(this->paintScale9_id);
HXLINE( 136)		this->super::destroy();
            	}


void FlxUI9SliceSprite_obj::resize(Float w,Float h){
            	HX_GC_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_140_resize)
HXLINE( 141)		if ((::Std_obj::_hx_int(w) < 1)) {
HXLINE( 143)			w = ( (Float)(1) );
            		}
HXLINE( 145)		if ((::Std_obj::_hx_int(h) < 1)) {
HXLINE( 147)			h = ( (Float)(1) );
            		}
HXLINE( 150)		Float old_width = this->get_width();
HXLINE( 151)		Float old_height = this->get_height();
HXLINE( 153)		 ::flixel::math::FlxPoint pt = ::flixel::addons::ui::U_obj::applyResize(this->resize_ratio,this->resize_ratio_axis,w,h,null());
HXLINE( 155)		w = pt->x;
HXLINE( 156)		h = pt->y;
HXLINE( 158)		int iw = ::Std_obj::_hx_int(pt->x);
HXLINE( 159)		int ih = ::Std_obj::_hx_int(pt->y);
HXLINE( 161)		bool _hx_tmp;
HXDLIN( 161)		if (::hx::IsNotNull( this->_slice9 )) {
HXLINE( 161)			_hx_tmp = ::hx::IsPointerEq( this->_slice9,::Array_obj< int >::__new(0) );
            		}
            		else {
HXLINE( 161)			_hx_tmp = true;
            		}
HXDLIN( 161)		if (_hx_tmp) {
HXLINE( 163)			this->_slice9 = ::Array_obj< int >::fromData( _hx_array_data_7a35d213_3,4);
            		}
HXLINE( 167)		::String key = (this->_asset_id + HX_("_",5f,00,00,00));
HXDLIN( 167)		::String key1 = ((((((key + this->_slice9->join(HX_(",",2c,00,00,00))) + HX_("_",5f,00,00,00)) + iw) + HX_("x",78,00,00,00)) + ih) + HX_("_",5f,00,00,00));
HXDLIN( 167)		::String key2 = ((key1 + this->_tile) + HX_("_",5f,00,00,00));
HXDLIN( 167)		::String key3 = (key2 + ::Std_obj::string(this->_smooth));
HXLINE( 170)		if (::hx::IsNotNull( ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key3)) ) )) {
HXLINE( 173)			this->loadGraphic(key3,false,iw,ih,null(),null());
            		}
            		else {
HXLINE( 178)			int bmpCanvas = ::Std_obj::_hx_int(w);
HXDLIN( 178)			 ::openfl::display::BitmapData bmpCanvas1 =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bmpCanvas,::Std_obj::_hx_int(h),null(),null());
HXLINE( 179)			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect->x = ( (Float)(0) );
HXLINE( 180)			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect->y = ( (Float)(0) );
HXLINE( 181)			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect->width = w;
HXLINE( 182)			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect->height = h;
HXLINE( 184)			::String oldID = this->paintScale9_id;
HXLINE( 187)			::String newID = ::flixel::addons::ui::FlxUI9SliceSprite_obj::makePaintScale9Id(this->_asset_id,this->_slice9,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect);
HXLINE( 190)			if ((newID != oldID)) {
HXLINE( 193)				this->paintScale9_id = ::flixel::addons::ui::FlxUI9SliceSprite_obj::paintScale9(bmpCanvas1,this->_asset_id,this->_slice9,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect,this->_tile,this->_smooth,this->_raw_pixels);
HXLINE( 196)				 ::Dynamic sectionCounter = ::flixel::addons::ui::FlxUI9SliceSprite_obj::cacheCounter->get(this->paintScale9_id);
HXLINE( 197)				::hx::FieldRef((sectionCounter).mPtr,HX_("useCount",08,a7,ce,11))++;
HXLINE( 199)				this->noLongerUsingCachedID(oldID);
            			}
HXLINE( 202)			this->loadGraphic(bmpCanvas1,false,bmpCanvas1->width,bmpCanvas1->height,false,key3);
            		}
HXLINE( 205)		Float diff_w = (this->get_width() - old_width);
HXLINE( 206)		Float diff_h = (this->get_height() - old_height);
HXLINE( 208)		if (::hx::IsNotNull( this->resize_point )) {
HXLINE( 210)			Float delta_x = (diff_w * this->resize_point->x);
HXLINE( 211)			Float delta_y = (diff_h * this->resize_point->y);
HXLINE( 212)			this->set_x((this->x - delta_x));
HXLINE( 213)			this->set_y((this->y - delta_y));
            		}
            	}


void FlxUI9SliceSprite_obj::noLongerUsingCachedID(::String id){
            	HX_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_220_noLongerUsingCachedID)
HXDLIN( 220)		if (::flixel::addons::ui::FlxUI9SliceSprite_obj::cacheCounter->exists(id)) {
HXLINE( 223)			 ::Dynamic oldCounter = ::flixel::addons::ui::FlxUI9SliceSprite_obj::cacheCounter->get(id);
HXLINE( 224)			::hx::FieldRef((oldCounter).mPtr,HX_("useCount",08,a7,ce,11))--;
HXLINE( 227)			if (::hx::IsLessEq( oldCounter->__Field(HX_("useCount",08,a7,ce,11),::hx::paccDynamic),0 )) {
HXLINE( 229)				this->purgeSections(id);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI9SliceSprite_obj,noLongerUsingCachedID,(void))

void FlxUI9SliceSprite_obj::purgeSections(::String id){
            	HX_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_235_purgeSections)
HXLINE( 237)		 ::Dynamic counter = ::flixel::addons::ui::FlxUI9SliceSprite_obj::cacheCounter->get(id);
HXLINE( 239)		if (::hx::IsNotNull( counter )) {
HXLINE( 243)			{
HXLINE( 243)				int _g = 0;
HXDLIN( 243)				::Array< ::String > _g1 = ( (::Array< ::String >)(counter->__Field(HX_("subKeys",94,77,0a,15),::hx::paccDynamic)) );
HXDLIN( 243)				while((_g < _g1->length)){
HXLINE( 243)					::String key = _g1->__get(_g);
HXDLIN( 243)					_g = (_g + 1);
HXLINE( 245)					::flixel::addons::ui::FlxUI9SliceSprite_obj::sectionCache->remove(key);
            				}
            			}
HXLINE( 249)			counter->__SetField(HX_("subKeys",94,77,0a,15),null(),::hx::paccDynamic);
HXLINE( 250)			::flixel::addons::ui::FlxUI9SliceSprite_obj::cacheCounter->remove(id);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI9SliceSprite_obj,purgeSections,(void))

int FlxUI9SliceSprite_obj::bitmapsCreated;

bool FlxUI9SliceSprite_obj::useSectionCache;

 ::haxe::ds::StringMap FlxUI9SliceSprite_obj::sectionCache;

 ::haxe::ds::StringMap FlxUI9SliceSprite_obj::cacheCounter;

 ::openfl::geom::Point FlxUI9SliceSprite_obj::_staticPoint;

 ::openfl::geom::Rectangle FlxUI9SliceSprite_obj::_staticRect;

 ::openfl::geom::Rectangle FlxUI9SliceSprite_obj::_staticRect2;

 ::openfl::geom::Point FlxUI9SliceSprite_obj::_staticPointZero;

 ::openfl::geom::Matrix FlxUI9SliceSprite_obj::_staticMatrix;

 ::flixel::math::FlxRect FlxUI9SliceSprite_obj::_staticFlxRect;

 ::flixel::math::FlxRect FlxUI9SliceSprite_obj::_staticFlxRect2;

int FlxUI9SliceSprite_obj::TILE_NONE;

int FlxUI9SliceSprite_obj::TILE_BOTH;

int FlxUI9SliceSprite_obj::TILE_H;

int FlxUI9SliceSprite_obj::TILE_V;

 ::haxe::ds::StringMap FlxUI9SliceSprite_obj::_staticRects;

 ::openfl::geom::Rectangle FlxUI9SliceSprite_obj::getRectFromString(::String str){
            	HX_GC_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_255_getRectFromString)
HXLINE( 256)		::Array< ::String > coords = str.split(HX_(",",2c,00,00,00));
HXLINE( 257)		 ::openfl::geom::Rectangle rect = null();
HXLINE( 258)		bool _hx_tmp;
HXDLIN( 258)		if (::hx::IsNotNull( coords )) {
HXLINE( 258)			_hx_tmp = (coords->length == 4);
            		}
            		else {
HXLINE( 258)			_hx_tmp = false;
            		}
HXDLIN( 258)		if (_hx_tmp) {
HXLINE( 260)			int x_ = ( (int)(::Std_obj::parseInt(coords->__get(0))) );
HXLINE( 261)			int y_ = ( (int)(::Std_obj::parseInt(coords->__get(1))) );
HXLINE( 262)			int w_ = ( (int)(::Std_obj::parseInt(coords->__get(2))) );
HXLINE( 263)			int h_ = ( (int)(::Std_obj::parseInt(coords->__get(3))) );
HXLINE( 264)			rect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,x_,y_,w_,h_);
            		}
HXLINE( 266)		return rect;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxUI9SliceSprite_obj,getRectFromString,return )

::Array< int > FlxUI9SliceSprite_obj::getRectIntsFromString(::String str){
            	HX_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_270_getRectIntsFromString)
HXLINE( 271)		::Array< ::String > coords = str.split(HX_(",",2c,00,00,00));
HXLINE( 272)		bool _hx_tmp;
HXDLIN( 272)		if (::hx::IsNotNull( coords )) {
HXLINE( 272)			_hx_tmp = (coords->length == 4);
            		}
            		else {
HXLINE( 272)			_hx_tmp = false;
            		}
HXDLIN( 272)		if (_hx_tmp) {
HXLINE( 274)			int x1 = ( (int)(::Std_obj::parseInt(coords->__get(0))) );
HXLINE( 275)			int y1 = ( (int)(::Std_obj::parseInt(coords->__get(1))) );
HXLINE( 276)			int x2 = ( (int)(::Std_obj::parseInt(coords->__get(2))) );
HXLINE( 277)			int y2 = ( (int)(::Std_obj::parseInt(coords->__get(3))) );
HXLINE( 278)			return ::Array_obj< int >::__new(4)->init(0,x1)->init(1,y1)->init(2,x2)->init(3,y2);
            		}
HXLINE( 280)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxUI9SliceSprite_obj,getRectIntsFromString,return )

::String FlxUI9SliceSprite_obj::paintScale9( ::openfl::display::BitmapData g,::String assetID,::Array< int > scale9, ::flixel::math::FlxRect rc,::hx::Null< int >  __o_tile,::hx::Null< bool >  __o_smooth, ::openfl::display::BitmapData raw){
            		int tile = __o_tile.Default(0);
            		bool smooth = __o_smooth.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_299_paintScale9)
HXLINE( 300)		if (::hx::IsNotNull( scale9 )) {
HXLINE( 303)			int w;
HXLINE( 304)			int h;
HXLINE( 305)			if (::hx::IsNull( raw )) {
HXLINE( 307)				 ::openfl::display::BitmapData assetBmp = ::flixel::addons::ui::U_obj::getBmp(assetID);
HXLINE( 308)				if (::hx::IsNotNull( assetBmp )) {
HXLINE( 310)					w = assetBmp->width;
HXLINE( 311)					h = assetBmp->height;
            				}
            				else {
HXLINE( 315)					 ::flixel::graphics::FlxGraphic assetFlx = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(assetID)) );
HXLINE( 316)					w = assetFlx->width;
HXLINE( 317)					h = assetFlx->height;
            				}
            			}
            			else {
HXLINE( 322)				w = raw->width;
HXLINE( 323)				h = raw->height;
            			}
HXLINE( 326)			int x1 = scale9->__get(0);
HXLINE( 327)			int y1 = scale9->__get(1);
HXLINE( 328)			int x2 = scale9->__get(2);
HXLINE( 329)			int y2 = scale9->__get(3);
HXLINE( 331)			if (::hx::IsNull( ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects )) {
HXLINE( 333)				::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 334)				{
HXLINE( 334)					::Dynamic this1 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;
HXDLIN( 334)					 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 334)					_this->x = ( (Float)(0) );
HXDLIN( 334)					_this->y = ( (Float)(0) );
HXDLIN( 334)					_this->width = ( (Float)(0) );
HXDLIN( 334)					_this->height = ( (Float)(0) );
HXDLIN( 334)					 ::flixel::math::FlxRect rect = _this;
HXDLIN( 334)					rect->_inPool = false;
HXDLIN( 334)					( ( ::haxe::ds::StringMap)(this1) )->set(HX_("top.left",80,54,c1,7e),rect);
            				}
HXLINE( 335)				{
HXLINE( 335)					::Dynamic this2 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;
HXDLIN( 335)					 ::flixel::math::FlxRect _this1 = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 335)					_this1->x = ( (Float)(0) );
HXDLIN( 335)					_this1->y = ( (Float)(0) );
HXDLIN( 335)					_this1->width = ( (Float)(0) );
HXDLIN( 335)					_this1->height = ( (Float)(0) );
HXDLIN( 335)					 ::flixel::math::FlxRect rect1 = _this1;
HXDLIN( 335)					rect1->_inPool = false;
HXDLIN( 335)					( ( ::haxe::ds::StringMap)(this2) )->set(HX_("top",95,66,58,00),rect1);
            				}
HXLINE( 336)				{
HXLINE( 336)					::Dynamic this3 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;
HXDLIN( 336)					 ::flixel::math::FlxRect _this2 = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 336)					_this2->x = ( (Float)(0) );
HXDLIN( 336)					_this2->y = ( (Float)(0) );
HXDLIN( 336)					_this2->width = ( (Float)(0) );
HXDLIN( 336)					_this2->height = ( (Float)(0) );
HXDLIN( 336)					 ::flixel::math::FlxRect rect2 = _this2;
HXDLIN( 336)					rect2->_inPool = false;
HXDLIN( 336)					( ( ::haxe::ds::StringMap)(this3) )->set(HX_("top.right",43,a9,75,e1),rect2);
            				}
HXLINE( 337)				{
HXLINE( 337)					::Dynamic this4 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;
HXDLIN( 337)					 ::flixel::math::FlxRect _this3 = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 337)					_this3->x = ( (Float)(0) );
HXDLIN( 337)					_this3->y = ( (Float)(0) );
HXDLIN( 337)					_this3->width = ( (Float)(0) );
HXDLIN( 337)					_this3->height = ( (Float)(0) );
HXDLIN( 337)					 ::flixel::math::FlxRect rect3 = _this3;
HXDLIN( 337)					rect3->_inPool = false;
HXDLIN( 337)					( ( ::haxe::ds::StringMap)(this4) )->set(HX_("left",07,08,b0,47),rect3);
            				}
HXLINE( 338)				{
HXLINE( 338)					::Dynamic this5 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;
HXDLIN( 338)					 ::flixel::math::FlxRect _this4 = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 338)					_this4->x = ( (Float)(0) );
HXDLIN( 338)					_this4->y = ( (Float)(0) );
HXDLIN( 338)					_this4->width = ( (Float)(0) );
HXDLIN( 338)					_this4->height = ( (Float)(0) );
HXDLIN( 338)					 ::flixel::math::FlxRect rect4 = _this4;
HXDLIN( 338)					rect4->_inPool = false;
HXDLIN( 338)					( ( ::haxe::ds::StringMap)(this5) )->set(HX_("middle",55,d3,5e,4c),rect4);
            				}
HXLINE( 339)				{
HXLINE( 339)					::Dynamic this6 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;
HXDLIN( 339)					 ::flixel::math::FlxRect _this5 = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 339)					_this5->x = ( (Float)(0) );
HXDLIN( 339)					_this5->y = ( (Float)(0) );
HXDLIN( 339)					_this5->width = ( (Float)(0) );
HXDLIN( 339)					_this5->height = ( (Float)(0) );
HXDLIN( 339)					 ::flixel::math::FlxRect rect5 = _this5;
HXDLIN( 339)					rect5->_inPool = false;
HXDLIN( 339)					( ( ::haxe::ds::StringMap)(this6) )->set(HX_("right",dc,0b,64,e9),rect5);
            				}
HXLINE( 340)				{
HXLINE( 340)					::Dynamic this7 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;
HXDLIN( 340)					 ::flixel::math::FlxRect _this6 = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 340)					_this6->x = ( (Float)(0) );
HXDLIN( 340)					_this6->y = ( (Float)(0) );
HXDLIN( 340)					_this6->width = ( (Float)(0) );
HXDLIN( 340)					_this6->height = ( (Float)(0) );
HXDLIN( 340)					 ::flixel::math::FlxRect rect6 = _this6;
HXDLIN( 340)					rect6->_inPool = false;
HXDLIN( 340)					( ( ::haxe::ds::StringMap)(this7) )->set(HX_("bottom.left",6a,dc,81,96),rect6);
            				}
HXLINE( 341)				{
HXLINE( 341)					::Dynamic this8 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;
HXDLIN( 341)					 ::flixel::math::FlxRect _this7 = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 341)					_this7->x = ( (Float)(0) );
HXDLIN( 341)					_this7->y = ( (Float)(0) );
HXDLIN( 341)					_this7->width = ( (Float)(0) );
HXDLIN( 341)					_this7->height = ( (Float)(0) );
HXDLIN( 341)					 ::flixel::math::FlxRect rect7 = _this7;
HXDLIN( 341)					rect7->_inPool = false;
HXDLIN( 341)					( ( ::haxe::ds::StringMap)(this8) )->set(HX_("bottom",eb,e6,78,65),rect7);
            				}
HXLINE( 342)				{
HXLINE( 342)					::Dynamic this9 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;
HXDLIN( 342)					 ::flixel::math::FlxRect _this8 = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 342)					_this8->x = ( (Float)(0) );
HXDLIN( 342)					_this8->y = ( (Float)(0) );
HXDLIN( 342)					_this8->width = ( (Float)(0) );
HXDLIN( 342)					_this8->height = ( (Float)(0) );
HXDLIN( 342)					 ::flixel::math::FlxRect rect8 = _this8;
HXDLIN( 342)					rect8->_inPool = false;
HXDLIN( 342)					( ( ::haxe::ds::StringMap)(this9) )->set(HX_("bottom.right",19,0e,2c,92),rect8);
            				}
            			}
HXLINE( 345)			{
HXLINE( 345)				 ::flixel::math::FlxRect _this = ( ( ::flixel::math::FlxRect)(::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_("top.left",80,54,c1,7e))) );
HXDLIN( 345)				_this->x = ( (Float)(0) );
HXDLIN( 345)				_this->y = ( (Float)(0) );
HXDLIN( 345)				_this->width = ( (Float)(x1) );
HXDLIN( 345)				_this->height = ( (Float)(y1) );
            			}
HXLINE( 346)			{
HXLINE( 346)				 ::flixel::math::FlxRect _this1 = ( ( ::flixel::math::FlxRect)(::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_("top",95,66,58,00))) );
HXDLIN( 346)				_this1->x = ( (Float)(x1) );
HXDLIN( 346)				_this1->y = ( (Float)(0) );
HXDLIN( 346)				_this1->width = ( (Float)((x2 - x1)) );
HXDLIN( 346)				_this1->height = ( (Float)(y1) );
            			}
HXLINE( 347)			{
HXLINE( 347)				 ::flixel::math::FlxRect _this2 = ( ( ::flixel::math::FlxRect)(::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_("top.right",43,a9,75,e1))) );
HXDLIN( 347)				_this2->x = ( (Float)(x2) );
HXDLIN( 347)				_this2->y = ( (Float)(0) );
HXDLIN( 347)				_this2->width = ( (Float)((w - x2)) );
HXDLIN( 347)				_this2->height = ( (Float)(y1) );
            			}
HXLINE( 349)			{
HXLINE( 349)				 ::flixel::math::FlxRect _this3 = ( ( ::flixel::math::FlxRect)(::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_("left",07,08,b0,47))) );
HXDLIN( 349)				_this3->x = ( (Float)(0) );
HXDLIN( 349)				_this3->y = ( (Float)(y1) );
HXDLIN( 349)				_this3->width = ( (Float)(x1) );
HXDLIN( 349)				_this3->height = ( (Float)((y2 - y1)) );
            			}
HXLINE( 350)			{
HXLINE( 350)				 ::flixel::math::FlxRect _this4 = ( ( ::flixel::math::FlxRect)(::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_("middle",55,d3,5e,4c))) );
HXDLIN( 350)				_this4->x = ( (Float)(x1) );
HXDLIN( 350)				_this4->y = ( (Float)(y1) );
HXDLIN( 350)				_this4->width = ( (Float)((x2 - x1)) );
HXDLIN( 350)				_this4->height = ( (Float)((y2 - y1)) );
            			}
HXLINE( 351)			{
HXLINE( 351)				 ::flixel::math::FlxRect _this5 = ( ( ::flixel::math::FlxRect)(::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_("right",dc,0b,64,e9))) );
HXDLIN( 351)				_this5->x = ( (Float)(x2) );
HXDLIN( 351)				_this5->y = ( (Float)(y1) );
HXDLIN( 351)				_this5->width = ( (Float)((w - x2)) );
HXDLIN( 351)				_this5->height = ( (Float)((y2 - y1)) );
            			}
HXLINE( 353)			{
HXLINE( 353)				 ::flixel::math::FlxRect _this6 = ( ( ::flixel::math::FlxRect)(::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_("bottom.left",6a,dc,81,96))) );
HXDLIN( 353)				_this6->x = ( (Float)(0) );
HXDLIN( 353)				_this6->y = ( (Float)(y2) );
HXDLIN( 353)				_this6->width = ( (Float)(x1) );
HXDLIN( 353)				_this6->height = ( (Float)((h - y2)) );
            			}
HXLINE( 354)			{
HXLINE( 354)				 ::flixel::math::FlxRect _this7 = ( ( ::flixel::math::FlxRect)(::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_("bottom",eb,e6,78,65))) );
HXDLIN( 354)				_this7->x = ( (Float)(x1) );
HXDLIN( 354)				_this7->y = ( (Float)(y2) );
HXDLIN( 354)				_this7->width = ( (Float)((x2 - x1)) );
HXDLIN( 354)				_this7->height = ( (Float)((h - y2)) );
            			}
HXLINE( 355)			{
HXLINE( 355)				 ::flixel::math::FlxRect _this8 = ( ( ::flixel::math::FlxRect)(::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_("bottom.right",19,0e,2c,92))) );
HXDLIN( 355)				_this8->x = ( (Float)(x2) );
HXDLIN( 355)				_this8->y = ( (Float)(y2) );
HXDLIN( 355)				_this8->width = ( (Float)((w - x2)) );
HXDLIN( 355)				_this8->height = ( (Float)((h - y2)) );
            			}
HXLINE( 357)			if (::hx::IsNull( ::flixel::addons::ui::FlxUI9SliceSprite_obj::cacheCounter )) {
HXLINE( 359)				::flixel::addons::ui::FlxUI9SliceSprite_obj::cacheCounter =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            			}
HXLINE( 363)			::String uniqueID = ::flixel::addons::ui::FlxUI9SliceSprite_obj::makePaintScale9Id(assetID,scale9,rc);
HXLINE( 366)			 ::Dynamic sectionCounter = ::flixel::addons::ui::FlxUI9SliceSprite_obj::cacheCounter->get(uniqueID);
HXLINE( 368)			if (::hx::IsNull( sectionCounter )) {
HXLINE( 371)				sectionCounter =  ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("useCount",08,a7,ce,11),0)
            					->setFixed(1,HX_("subKeys",94,77,0a,15),::Array_obj< ::String >::__new(0)));
HXLINE( 373)				{
HXLINE( 373)					int _g = 0;
HXDLIN( 373)					while((_g < 9)){
HXLINE( 373)						_g = (_g + 1);
HXDLIN( 373)						int i = (_g - 1);
HXLINE( 375)						 ::flixel::math::FlxRect rect;
HXDLIN( 375)						switch((int)(i)){
            							case (int)0: {
HXLINE( 375)								rect = ( ( ::flixel::math::FlxRect)(::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_("top.left",80,54,c1,7e))) );
            							}
            							break;
            							case (int)1: {
HXLINE( 375)								rect = ( ( ::flixel::math::FlxRect)(::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_("top",95,66,58,00))) );
            							}
            							break;
            							case (int)2: {
HXLINE( 375)								rect = ( ( ::flixel::math::FlxRect)(::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_("top.right",43,a9,75,e1))) );
            							}
            							break;
            							case (int)3: {
HXLINE( 375)								rect = ( ( ::flixel::math::FlxRect)(::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_("left",07,08,b0,47))) );
            							}
            							break;
            							case (int)4: {
HXLINE( 375)								rect = ( ( ::flixel::math::FlxRect)(::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_("middle",55,d3,5e,4c))) );
            							}
            							break;
            							case (int)5: {
HXLINE( 375)								rect = ( ( ::flixel::math::FlxRect)(::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_("right",dc,0b,64,e9))) );
            							}
            							break;
            							case (int)6: {
HXLINE( 375)								rect = ( ( ::flixel::math::FlxRect)(::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_("bottom.left",6a,dc,81,96))) );
            							}
            							break;
            							case (int)7: {
HXLINE( 375)								rect = ( ( ::flixel::math::FlxRect)(::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_("bottom",eb,e6,78,65))) );
            							}
            							break;
            							case (int)8: {
HXLINE( 375)								rect = ( ( ::flixel::math::FlxRect)(::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_("bottom.right",19,0e,2c,92))) );
            							}
            							break;
            							default:{
HXLINE( 375)								rect = ( ( ::flixel::math::FlxRect)(::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_("top.left",80,54,c1,7e))) );
            							}
            						}
HXLINE( 388)						::String cacheId = (((((((((assetID + HX_("_",5f,00,00,00)) + rect->x) + HX_("_",5f,00,00,00)) + rect->y) + HX_("_",5f,00,00,00)) + rect->width) + HX_("_",5f,00,00,00)) + rect->height) + HX_("_",5f,00,00,00));
HXLINE( 389)						( (::Array< ::String >)(sectionCounter->__Field(HX_("subKeys",94,77,0a,15),::hx::paccDynamic)) )->push(cacheId);
            					}
            				}
HXLINE( 391)				::flixel::addons::ui::FlxUI9SliceSprite_obj::cacheCounter->set(uniqueID,sectionCounter);
            			}
HXLINE( 394)			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintCompoundBitmap(g,assetID,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects,rc,tile,smooth,raw);
HXLINE( 396)			return uniqueID;
            		}
HXLINE( 398)		return HX_("",00,00,00,00);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxUI9SliceSprite_obj,paintScale9,return )

::String FlxUI9SliceSprite_obj::makePaintScale9Id(::String assetId,::Array< int > slice9, ::flixel::math::FlxRect rect){
            	HX_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_403_makePaintScale9Id)
HXDLIN( 403)		::String _hx_tmp = (((assetId + HX_("_",5f,00,00,00)) + slice9->join(HX_(",",2c,00,00,00))) + HX_("_",5f,00,00,00));
HXDLIN( 403)		 ::Dynamic value = rect->x;
HXDLIN( 403)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 403)		_this->label = HX_("x",78,00,00,00);
HXDLIN( 403)		_this->value = value;
HXDLIN( 403)		 ::Dynamic value1 = rect->y;
HXDLIN( 403)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 403)		_this1->label = HX_("y",79,00,00,00);
HXDLIN( 403)		_this1->value = value1;
HXDLIN( 403)		 ::Dynamic value2 = rect->width;
HXDLIN( 403)		 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 403)		_this2->label = HX_("w",77,00,00,00);
HXDLIN( 403)		_this2->value = value2;
HXDLIN( 403)		 ::Dynamic value3 = rect->height;
HXDLIN( 403)		 ::flixel::util::LabelValuePair _this3 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 403)		_this3->label = HX_("h",68,00,00,00);
HXDLIN( 403)		_this3->value = value3;
HXDLIN( 403)		return (_hx_tmp + ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(4)->init(0,_this)->init(1,_this1)->init(2,_this2)->init(3,_this3)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxUI9SliceSprite_obj,makePaintScale9Id,return )

void FlxUI9SliceSprite_obj::paintCompoundBitmap( ::openfl::display::BitmapData g,::String assetID, ::haxe::ds::StringMap sourceRects, ::flixel::math::FlxRect targetRect,::hx::Null< int >  __o_tile,::hx::Null< bool >  __o_smooth, ::openfl::display::BitmapData raw){
            		int tile = __o_tile.Default(0);
            		bool smooth = __o_smooth.Default(false);
            	HX_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_408_paintCompoundBitmap)
HXLINE( 409)		targetRect->x = ( (Float)(::Std_obj::_hx_int(targetRect->x)) );
HXLINE( 410)		targetRect->y = ( (Float)(::Std_obj::_hx_int(targetRect->y)) );
HXLINE( 411)		targetRect->width = ( (Float)(::Std_obj::_hx_int(targetRect->width)) );
HXLINE( 412)		targetRect->height = ( (Float)(::Std_obj::_hx_int(targetRect->height)) );
HXLINE( 415)		 ::flixel::math::FlxRect tl = ( ( ::flixel::math::FlxRect)(sourceRects->get(HX_("top.left",80,54,c1,7e))) );
HXLINE( 416)		if (::hx::IsNotNull( tl )) {
HXLINE( 418)			{
HXLINE( 418)				 ::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;
HXDLIN( 418)				_this->x = ( (Float)(0) );
HXDLIN( 418)				_this->y = ( (Float)(0) );
HXDLIN( 418)				_this->width = tl->width;
HXDLIN( 418)				_this->height = tl->height;
            			}
HXLINE( 419)			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,tl,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),0,smooth,raw);
            		}
HXLINE( 422)		 ::flixel::math::FlxRect tr = ( ( ::flixel::math::FlxRect)(sourceRects->get(HX_("top.right",43,a9,75,e1))) );
HXLINE( 423)		if (::hx::IsNotNull( tr )) {
HXLINE( 425)			{
HXLINE( 425)				 ::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;
HXDLIN( 425)				_this->x = (targetRect->width - tr->width);
HXDLIN( 425)				_this->y = ( (Float)(0) );
HXDLIN( 425)				_this->width = tr->width;
HXDLIN( 425)				_this->height = tr->height;
            			}
HXLINE( 426)			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,tr,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),0,smooth,raw);
            		}
HXLINE( 429)		 ::flixel::math::FlxRect t = ( ( ::flixel::math::FlxRect)(sourceRects->get(HX_("top",95,66,58,00))) );
HXLINE( 430)		if (::hx::IsNotNull( t )) {
HXLINE( 432)			{
HXLINE( 432)				 ::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;
HXDLIN( 432)				_this->x = tl->width;
HXDLIN( 432)				_this->y = ( (Float)(0) );
HXDLIN( 432)				_this->width = ((targetRect->width - tl->width) - tr->width);
HXDLIN( 432)				_this->height = t->height;
            			}
HXLINE( 433)			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,t,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),(tile & 16),smooth,raw);
            		}
HXLINE( 437)		 ::flixel::math::FlxRect bl = ( ( ::flixel::math::FlxRect)(sourceRects->get(HX_("bottom.left",6a,dc,81,96))) );
HXLINE( 438)		if (::hx::IsNotNull( bl )) {
HXLINE( 440)			{
HXLINE( 440)				 ::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;
HXDLIN( 440)				_this->x = ( (Float)(0) );
HXDLIN( 440)				_this->y = (targetRect->height - bl->height);
HXDLIN( 440)				_this->width = bl->width;
HXDLIN( 440)				_this->height = bl->height;
            			}
HXLINE( 441)			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,bl,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),0,smooth,raw);
            		}
HXLINE( 444)		 ::flixel::math::FlxRect br = ( ( ::flixel::math::FlxRect)(sourceRects->get(HX_("bottom.right",19,0e,2c,92))) );
HXLINE( 445)		if (::hx::IsNotNull( br )) {
HXLINE( 447)			{
HXLINE( 447)				 ::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;
HXDLIN( 447)				_this->x = (targetRect->width - br->width);
HXDLIN( 447)				_this->y = (targetRect->height - br->height);
HXDLIN( 447)				_this->width = br->width;
HXDLIN( 447)				_this->height = br->height;
            			}
HXLINE( 448)			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,br,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),0,smooth,raw);
            		}
HXLINE( 451)		 ::flixel::math::FlxRect b = ( ( ::flixel::math::FlxRect)(sourceRects->get(HX_("bottom",eb,e6,78,65))) );
HXLINE( 452)		if (::hx::IsNotNull( b )) {
HXLINE( 454)			{
HXLINE( 454)				 ::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;
HXDLIN( 454)				_this->x = bl->width;
HXDLIN( 454)				_this->y = (targetRect->height - b->height);
HXDLIN( 454)				_this->width = ((targetRect->width - bl->width) - br->width);
HXDLIN( 454)				_this->height = b->height;
            			}
HXLINE( 455)			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,b,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),(tile & 16),smooth,raw);
            		}
HXLINE( 459)		 ::flixel::math::FlxRect l = ( ( ::flixel::math::FlxRect)(sourceRects->get(HX_("left",07,08,b0,47))) );
HXLINE( 460)		if (::hx::IsNotNull( l )) {
HXLINE( 462)			{
HXLINE( 462)				 ::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;
HXDLIN( 462)				_this->x = ( (Float)(0) );
HXDLIN( 462)				_this->y = tl->height;
HXDLIN( 462)				_this->width = l->width;
HXDLIN( 462)				_this->height = ((targetRect->height - tl->height) - bl->height);
            			}
HXLINE( 463)			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,l,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),(tile & 1),smooth,raw);
            		}
HXLINE( 466)		 ::flixel::math::FlxRect r = ( ( ::flixel::math::FlxRect)(sourceRects->get(HX_("right",dc,0b,64,e9))) );
HXLINE( 467)		if (::hx::IsNotNull( r )) {
HXLINE( 469)			{
HXLINE( 469)				 ::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;
HXDLIN( 469)				_this->x = (targetRect->width - r->width);
HXDLIN( 469)				_this->y = tr->height;
HXDLIN( 469)				_this->width = r->width;
HXDLIN( 469)				_this->height = ((targetRect->height - tl->height) - bl->height);
            			}
HXLINE( 470)			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,r,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),(tile & 1),smooth,raw);
            		}
HXLINE( 473)		 ::flixel::math::FlxRect m = ( ( ::flixel::math::FlxRect)(sourceRects->get(HX_("middle",55,d3,5e,4c))) );
HXLINE( 474)		if (::hx::IsNotNull( m )) {
HXLINE( 476)			{
HXLINE( 476)				 ::flixel::math::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;
HXDLIN( 476)				_this->x = l->width;
HXDLIN( 476)				_this->y = t->height;
HXDLIN( 476)				_this->width = ((targetRect->width - l->width) - r->width);
HXDLIN( 476)				_this->height = ((targetRect->height - t->height) - b->height);
            			}
HXLINE( 477)			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,m,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),tile,smooth,raw);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxUI9SliceSprite_obj,paintCompoundBitmap,(void))

void FlxUI9SliceSprite_obj::paintBitmapSection( ::openfl::display::BitmapData g,::String assetId, ::flixel::math::FlxRect src, ::flixel::math::FlxRect dst, ::openfl::display::BitmapData srcData,::hx::Null< int >  __o_tile,::hx::Null< bool >  __o_smooth, ::openfl::display::BitmapData raw){
            		int tile = __o_tile.Default(0);
            		bool smooth = __o_smooth.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_483_paintBitmapSection)
HXLINE( 484)		if (::hx::IsNull( srcData )) {
HXLINE( 486)			if (::hx::IsNotNull( raw )) {
HXLINE( 488)				srcData = raw;
            			}
            			else {
HXLINE( 492)				srcData = ::flixel::addons::ui::U_obj::getBmp(assetId);
            			}
            		}
HXLINE( 496)		src->x = ( (Float)(::Std_obj::_hx_int(src->x)) );
HXLINE( 497)		src->y = ( (Float)(::Std_obj::_hx_int(src->y)) );
HXLINE( 498)		src->width = ( (Float)(::Std_obj::_hx_int(src->width)) );
HXLINE( 499)		src->height = ( (Float)(::Std_obj::_hx_int(src->height)) );
HXLINE( 501)		dst->x = ( (Float)(::Std_obj::_hx_int(dst->x)) );
HXLINE( 502)		dst->y = ( (Float)(::Std_obj::_hx_int(dst->y)) );
HXLINE( 503)		dst->width = ( (Float)(::Std_obj::_hx_int(dst->width)) );
HXLINE( 504)		dst->height = ( (Float)(::Std_obj::_hx_int(dst->height)) );
HXLINE( 506)		 ::openfl::display::BitmapData section = null();
HXLINE( 507)		::String cacheId = null();
HXLINE( 508)		bool _hx_tmp;
HXDLIN( 508)		if ((::flixel::addons::ui::FlxUI9SliceSprite_obj::useSectionCache == true)) {
HXLINE( 508)			_hx_tmp = ::hx::IsNotNull( assetId );
            		}
            		else {
HXLINE( 508)			_hx_tmp = false;
            		}
HXDLIN( 508)		if (_hx_tmp) {
HXLINE( 510)			if (::hx::IsNull( ::flixel::addons::ui::FlxUI9SliceSprite_obj::sectionCache )) {
HXLINE( 512)				::flixel::addons::ui::FlxUI9SliceSprite_obj::sectionCache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            			}
HXLINE( 514)			cacheId = (((((((((assetId + HX_("_",5f,00,00,00)) + src->x) + HX_("_",5f,00,00,00)) + src->y) + HX_("_",5f,00,00,00)) + src->width) + HX_("_",5f,00,00,00)) + src->height) + HX_("_",5f,00,00,00));
HXLINE( 515)			section = ( ( ::openfl::display::BitmapData)(::flixel::addons::ui::FlxUI9SliceSprite_obj::sectionCache->get(cacheId)) );
            		}
HXLINE( 518)		if (::hx::IsNull( section )) {
HXLINE( 520)			int fillcolor = 16777215;
HXLINE( 521)			int section1 = ::Std_obj::_hx_int(src->width);
HXDLIN( 521)			section =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,section1,::Std_obj::_hx_int(src->height),true,fillcolor);
HXLINE( 523)			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2->x = src->x;
HXLINE( 524)			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2->y = src->y;
HXLINE( 525)			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2->width = src->width;
HXLINE( 526)			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2->height = src->height;
HXLINE( 528)			section->copyPixels(srcData,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPointZero,null(),null(),null());
HXLINE( 530)			bool _hx_tmp;
HXDLIN( 530)			if ((::flixel::addons::ui::FlxUI9SliceSprite_obj::useSectionCache == true)) {
HXLINE( 530)				_hx_tmp = ::hx::IsNotNull( cacheId );
            			}
            			else {
HXLINE( 530)				_hx_tmp = false;
            			}
HXDLIN( 530)			if (_hx_tmp) {
HXLINE( 532)				::flixel::addons::ui::FlxUI9SliceSprite_obj::sectionCache->set(cacheId,section);
            			}
HXLINE( 534)			::flixel::addons::ui::FlxUI9SliceSprite_obj::bitmapsCreated++;
            		}
HXLINE( 537)		bool _hx_tmp1;
HXDLIN( 537)		if ((dst->width > 0)) {
HXLINE( 537)			_hx_tmp1 = (dst->height > 0);
            		}
            		else {
HXLINE( 537)			_hx_tmp1 = false;
            		}
HXDLIN( 537)		if (_hx_tmp1) {
HXLINE( 539)			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2->x = dst->x;
HXLINE( 540)			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2->y = dst->y;
HXLINE( 541)			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2->width = dst->width;
HXLINE( 542)			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2->height = dst->height;
HXLINE( 544)			::flixel::addons::ui::FlxUI9SliceSprite_obj::bitmapFillRect(g,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2,section,tile,smooth);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxUI9SliceSprite_obj,paintBitmapSection,(void))

void FlxUI9SliceSprite_obj::bitmapFillRect( ::openfl::display::BitmapData g, ::openfl::geom::Rectangle dst, ::openfl::display::BitmapData section,::hx::Null< int >  __o_tile,::hx::Null< bool >  __o_smooth_){
            		int tile = __o_tile.Default(0);
            		bool smooth_ = __o_smooth_.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_549_bitmapFillRect)
HXLINE( 555)		int final_pixels = ::Std_obj::_hx_int(dst->width);
HXDLIN( 555)		 ::openfl::display::BitmapData final_pixels1 =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,final_pixels,::Std_obj::_hx_int(dst->height),true,0);
HXLINE( 557)		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticMatrix->identity();
HXLINE( 560)		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->x = ( (Float)(0) );
HXLINE( 561)		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->y = ( (Float)(0) );
HXLINE( 562)		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->width = ( (Float)(section->width) );
HXLINE( 563)		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->height = ( (Float)(section->height) );
HXLINE( 565)		if (((tile & 16) == 0)) {
HXLINE( 567)			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticMatrix->scale((dst->width / ( (Float)(section->width) )),((Float)1.0));
HXLINE( 568)			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->width = dst->width;
            		}
HXLINE( 570)		if (((tile & 1) == 0)) {
HXLINE( 572)			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticMatrix->scale(((Float)1.0),(dst->height / ( (Float)(section->height) )));
HXLINE( 573)			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->height = dst->height;
            		}
HXLINE( 581)		bool _hx_tmp;
HXDLIN( 581)		if ((section->width == dst->width)) {
HXLINE( 581)			_hx_tmp = (section->height == dst->height);
            		}
            		else {
HXLINE( 581)			_hx_tmp = false;
            		}
HXDLIN( 581)		if (_hx_tmp) {
HXLINE( 583)			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->x = ( (Float)(0) );
HXLINE( 584)			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->y = ( (Float)(0) );
HXLINE( 585)			final_pixels1->copyPixels(section,section->rect,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint,null(),null(),null());
            		}
            		else {
HXLINE( 589)			if (smooth_) {
HXLINE( 591)				final_pixels1->draw(section,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticMatrix,null(),null(),null(),true);
            			}
            			else {
HXLINE( 595)				final_pixels1->draw(section,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticMatrix,null(),null(),null(),false);
            			}
            		}
HXLINE( 600)		if ((tile != 0)) {
HXLINE( 604)			if (((tile & 16) == 16)) {
HXLINE( 607)				::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->x = ( (Float)(0) );
HXLINE( 608)				::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->y = ( (Float)(0) );
HXLINE( 610)				while((::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->x < dst->width)){
HXLINE( 612)					 ::openfl::geom::Point fh = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint;
HXDLIN( 612)					fh->x = (fh->x + ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->width);
HXLINE( 615)					final_pixels1->copyPixels(final_pixels1,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint,null(),null(),null());
            				}
            			}
HXLINE( 625)			if (((tile & 1) == 1)) {
HXLINE( 628)				::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->x = ( (Float)(0) );
HXLINE( 629)				::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->y = ( (Float)(0) );
HXLINE( 632)				::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->width = ( (Float)(final_pixels1->width) );
HXLINE( 634)				while((::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->y < dst->height)){
HXLINE( 636)					 ::openfl::geom::Point fh = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint;
HXDLIN( 636)					fh->y = (fh->y + ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->height);
HXLINE( 640)					final_pixels1->copyPixels(final_pixels1,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint,null(),null(),null());
            				}
            			}
            		}
HXLINE( 649)		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->x = dst->x;
HXLINE( 650)		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->y = dst->y;
HXLINE( 653)		g->copyPixels(final_pixels1,final_pixels1->rect,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint,null(),null(),null());
HXLINE( 656)		final_pixels1 = ::flixel::util::FlxDestroyUtil_obj::dispose(final_pixels1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxUI9SliceSprite_obj,bitmapFillRect,(void))


::hx::ObjectPtr< FlxUI9SliceSprite_obj > FlxUI9SliceSprite_obj::__new(Float X,Float Y, ::Dynamic Graphic, ::openfl::geom::Rectangle Rect,::Array< int > Slice9,::hx::Null< int >  __o_Tile,::hx::Null< bool >  __o_Smooth,::String __o_Id,::hx::Null< Float >  __o_Ratio, ::flixel::math::FlxPoint Resize_point,::hx::Null< int >  __o_Resize_axis,::hx::Null< bool >  __o_DeferResize,::hx::Null< int >  __o_Color) {
	::hx::ObjectPtr< FlxUI9SliceSprite_obj > __this = new FlxUI9SliceSprite_obj();
	__this->__construct(X,Y,Graphic,Rect,Slice9,__o_Tile,__o_Smooth,__o_Id,__o_Ratio,Resize_point,__o_Resize_axis,__o_DeferResize,__o_Color);
	return __this;
}

::hx::ObjectPtr< FlxUI9SliceSprite_obj > FlxUI9SliceSprite_obj::__alloc(::hx::Ctx *_hx_ctx,Float X,Float Y, ::Dynamic Graphic, ::openfl::geom::Rectangle Rect,::Array< int > Slice9,::hx::Null< int >  __o_Tile,::hx::Null< bool >  __o_Smooth,::String __o_Id,::hx::Null< Float >  __o_Ratio, ::flixel::math::FlxPoint Resize_point,::hx::Null< int >  __o_Resize_axis,::hx::Null< bool >  __o_DeferResize,::hx::Null< int >  __o_Color) {
	FlxUI9SliceSprite_obj *__this = (FlxUI9SliceSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUI9SliceSprite_obj), true, "flixel.addons.ui.FlxUI9SliceSprite"));
	*(void **)__this = FlxUI9SliceSprite_obj::_hx_vtable;
	__this->__construct(X,Y,Graphic,Rect,Slice9,__o_Tile,__o_Smooth,__o_Id,__o_Ratio,Resize_point,__o_Resize_axis,__o_DeferResize,__o_Color);
	return __this;
}

FlxUI9SliceSprite_obj::FlxUI9SliceSprite_obj()
{
}

void FlxUI9SliceSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUI9SliceSprite);
	HX_MARK_MEMBER_NAME(_bmpCanvas,"_bmpCanvas");
	HX_MARK_MEMBER_NAME(paintScale9_id,"paintScale9_id");
	HX_MARK_MEMBER_NAME(_slice9,"_slice9");
	HX_MARK_MEMBER_NAME(_tile,"_tile");
	HX_MARK_MEMBER_NAME(_smooth,"_smooth");
	HX_MARK_MEMBER_NAME(_asset_id,"_asset_id");
	HX_MARK_MEMBER_NAME(_raw_pixels,"_raw_pixels");
	 ::flixel::addons::ui::FlxUISprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUI9SliceSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_bmpCanvas,"_bmpCanvas");
	HX_VISIT_MEMBER_NAME(paintScale9_id,"paintScale9_id");
	HX_VISIT_MEMBER_NAME(_slice9,"_slice9");
	HX_VISIT_MEMBER_NAME(_tile,"_tile");
	HX_VISIT_MEMBER_NAME(_smooth,"_smooth");
	HX_VISIT_MEMBER_NAME(_asset_id,"_asset_id");
	HX_VISIT_MEMBER_NAME(_raw_pixels,"_raw_pixels");
	 ::flixel::addons::ui::FlxUISprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxUI9SliceSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_tile") ) { return ::hx::Val( _tile ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_slice9") ) { return ::hx::Val( _slice9 ); }
		if (HX_FIELD_EQ(inName,"_smooth") ) { return ::hx::Val( _smooth ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_asset_id") ) { return ::hx::Val( _asset_id ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_bmpCanvas") ) { return ::hx::Val( _bmpCanvas ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_raw_pixels") ) { return ::hx::Val( _raw_pixels ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"purgeSections") ) { return ::hx::Val( purgeSections_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"paintScale9_id") ) { return ::hx::Val( paintScale9_id ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"noLongerUsingCachedID") ) { return ::hx::Val( noLongerUsingCachedID_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxUI9SliceSprite_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_staticRect") ) { outValue = ( _staticRect ); return true; }
		if (HX_FIELD_EQ(inName,"paintScale9") ) { outValue = paintScale9_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sectionCache") ) { outValue = ( sectionCache ); return true; }
		if (HX_FIELD_EQ(inName,"cacheCounter") ) { outValue = ( cacheCounter ); return true; }
		if (HX_FIELD_EQ(inName,"_staticPoint") ) { outValue = ( _staticPoint ); return true; }
		if (HX_FIELD_EQ(inName,"_staticRect2") ) { outValue = ( _staticRect2 ); return true; }
		if (HX_FIELD_EQ(inName,"_staticRects") ) { outValue = ( _staticRects ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_staticMatrix") ) { outValue = ( _staticMatrix ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bitmapsCreated") ) { outValue = ( bitmapsCreated ); return true; }
		if (HX_FIELD_EQ(inName,"_staticFlxRect") ) { outValue = ( _staticFlxRect ); return true; }
		if (HX_FIELD_EQ(inName,"bitmapFillRect") ) { outValue = bitmapFillRect_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"useSectionCache") ) { outValue = ( useSectionCache ); return true; }
		if (HX_FIELD_EQ(inName,"_staticFlxRect2") ) { outValue = ( _staticFlxRect2 ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_staticPointZero") ) { outValue = ( _staticPointZero ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getRectFromString") ) { outValue = getRectFromString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"makePaintScale9Id") ) { outValue = makePaintScale9Id_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"paintBitmapSection") ) { outValue = paintBitmapSection_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"paintCompoundBitmap") ) { outValue = paintCompoundBitmap_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getRectIntsFromString") ) { outValue = getRectIntsFromString_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxUI9SliceSprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_tile") ) { _tile=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_slice9") ) { _slice9=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_smooth") ) { _smooth=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_asset_id") ) { _asset_id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_bmpCanvas") ) { _bmpCanvas=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_raw_pixels") ) { _raw_pixels=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"paintScale9_id") ) { paintScale9_id=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxUI9SliceSprite_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_staticRect") ) { _staticRect=ioValue.Cast<  ::openfl::geom::Rectangle >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sectionCache") ) { sectionCache=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"cacheCounter") ) { cacheCounter=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"_staticPoint") ) { _staticPoint=ioValue.Cast<  ::openfl::geom::Point >(); return true; }
		if (HX_FIELD_EQ(inName,"_staticRect2") ) { _staticRect2=ioValue.Cast<  ::openfl::geom::Rectangle >(); return true; }
		if (HX_FIELD_EQ(inName,"_staticRects") ) { _staticRects=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_staticMatrix") ) { _staticMatrix=ioValue.Cast<  ::openfl::geom::Matrix >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bitmapsCreated") ) { bitmapsCreated=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"_staticFlxRect") ) { _staticFlxRect=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"useSectionCache") ) { useSectionCache=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"_staticFlxRect2") ) { _staticFlxRect2=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_staticPointZero") ) { _staticPointZero=ioValue.Cast<  ::openfl::geom::Point >(); return true; }
	}
	return false;
}

void FlxUI9SliceSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_bmpCanvas",be,02,c2,94));
	outFields->push(HX_("paintScale9_id",6d,bb,fa,d2));
	outFields->push(HX_("_slice9",46,15,7b,de));
	outFields->push(HX_("_tile",0d,e7,0d,00));
	outFields->push(HX_("_smooth",cd,19,e2,75));
	outFields->push(HX_("_asset_id",69,d5,4f,11));
	outFields->push(HX_("_raw_pixels",03,05,c0,f2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxUI9SliceSprite_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxUI9SliceSprite_obj,_bmpCanvas),HX_("_bmpCanvas",be,02,c2,94)},
	{::hx::fsString,(int)offsetof(FlxUI9SliceSprite_obj,paintScale9_id),HX_("paintScale9_id",6d,bb,fa,d2)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxUI9SliceSprite_obj,_slice9),HX_("_slice9",46,15,7b,de)},
	{::hx::fsInt,(int)offsetof(FlxUI9SliceSprite_obj,_tile),HX_("_tile",0d,e7,0d,00)},
	{::hx::fsBool,(int)offsetof(FlxUI9SliceSprite_obj,_smooth),HX_("_smooth",cd,19,e2,75)},
	{::hx::fsString,(int)offsetof(FlxUI9SliceSprite_obj,_asset_id),HX_("_asset_id",69,d5,4f,11)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxUI9SliceSprite_obj,_raw_pixels),HX_("_raw_pixels",03,05,c0,f2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxUI9SliceSprite_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxUI9SliceSprite_obj::bitmapsCreated,HX_("bitmapsCreated",a4,38,f9,81)},
	{::hx::fsBool,(void *) &FlxUI9SliceSprite_obj::useSectionCache,HX_("useSectionCache",04,cd,d1,77)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &FlxUI9SliceSprite_obj::sectionCache,HX_("sectionCache",1d,86,f1,9f)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &FlxUI9SliceSprite_obj::cacheCounter,HX_("cacheCounter",da,e8,be,cb)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(void *) &FlxUI9SliceSprite_obj::_staticPoint,HX_("_staticPoint",c3,3e,66,41)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(void *) &FlxUI9SliceSprite_obj::_staticRect,HX_("_staticRect",11,12,dd,7f)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(void *) &FlxUI9SliceSprite_obj::_staticRect2,HX_("_staticRect2",01,bd,92,61)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(void *) &FlxUI9SliceSprite_obj::_staticPointZero,HX_("_staticPointZero",8b,97,4a,47)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(void *) &FlxUI9SliceSprite_obj::_staticMatrix,HX_("_staticMatrix",6e,d0,aa,bc)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(void *) &FlxUI9SliceSprite_obj::_staticFlxRect,HX_("_staticFlxRect",e9,ab,12,d4)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(void *) &FlxUI9SliceSprite_obj::_staticFlxRect2,HX_("_staticFlxRect2",29,c0,43,bc)},
	{::hx::fsInt,(void *) &FlxUI9SliceSprite_obj::TILE_NONE,HX_("TILE_NONE",a9,1c,74,5c)},
	{::hx::fsInt,(void *) &FlxUI9SliceSprite_obj::TILE_BOTH,HX_("TILE_BOTH",72,92,85,54)},
	{::hx::fsInt,(void *) &FlxUI9SliceSprite_obj::TILE_H,HX_("TILE_H",b7,8d,ab,d0)},
	{::hx::fsInt,(void *) &FlxUI9SliceSprite_obj::TILE_V,HX_("TILE_V",c5,8d,ab,d0)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &FlxUI9SliceSprite_obj::_staticRects,HX_("_staticRects",42,bd,92,61)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxUI9SliceSprite_obj_sMemberFields[] = {
	HX_("_bmpCanvas",be,02,c2,94),
	HX_("paintScale9_id",6d,bb,fa,d2),
	HX_("_slice9",46,15,7b,de),
	HX_("_tile",0d,e7,0d,00),
	HX_("_smooth",cd,19,e2,75),
	HX_("_asset_id",69,d5,4f,11),
	HX_("_raw_pixels",03,05,c0,f2),
	HX_("destroy",fa,2c,86,24),
	HX_("resize",f4,59,7b,08),
	HX_("noLongerUsingCachedID",37,33,42,98),
	HX_("purgeSections",39,4c,d3,23),
	::String(null()) };

static void FlxUI9SliceSprite_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::bitmapsCreated,"bitmapsCreated");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::useSectionCache,"useSectionCache");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::sectionCache,"sectionCache");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::cacheCounter,"cacheCounter");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticPoint,"_staticPoint");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticRect,"_staticRect");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticRect2,"_staticRect2");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticPointZero,"_staticPointZero");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticMatrix,"_staticMatrix");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticFlxRect,"_staticFlxRect");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticFlxRect2,"_staticFlxRect2");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_NONE,"TILE_NONE");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_BOTH,"TILE_BOTH");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_H,"TILE_H");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_V,"TILE_V");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticRects,"_staticRects");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxUI9SliceSprite_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::bitmapsCreated,"bitmapsCreated");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::useSectionCache,"useSectionCache");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::sectionCache,"sectionCache");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::cacheCounter,"cacheCounter");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticPoint,"_staticPoint");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticRect,"_staticRect");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticRect2,"_staticRect2");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticPointZero,"_staticPointZero");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticMatrix,"_staticMatrix");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticFlxRect,"_staticFlxRect");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticFlxRect2,"_staticFlxRect2");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_NONE,"TILE_NONE");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_BOTH,"TILE_BOTH");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_H,"TILE_H");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_V,"TILE_V");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticRects,"_staticRects");
};

#endif

::hx::Class FlxUI9SliceSprite_obj::__mClass;

static ::String FlxUI9SliceSprite_obj_sStaticFields[] = {
	HX_("bitmapsCreated",a4,38,f9,81),
	HX_("useSectionCache",04,cd,d1,77),
	HX_("sectionCache",1d,86,f1,9f),
	HX_("cacheCounter",da,e8,be,cb),
	HX_("_staticPoint",c3,3e,66,41),
	HX_("_staticRect",11,12,dd,7f),
	HX_("_staticRect2",01,bd,92,61),
	HX_("_staticPointZero",8b,97,4a,47),
	HX_("_staticMatrix",6e,d0,aa,bc),
	HX_("_staticFlxRect",e9,ab,12,d4),
	HX_("_staticFlxRect2",29,c0,43,bc),
	HX_("TILE_NONE",a9,1c,74,5c),
	HX_("TILE_BOTH",72,92,85,54),
	HX_("TILE_H",b7,8d,ab,d0),
	HX_("TILE_V",c5,8d,ab,d0),
	HX_("_staticRects",42,bd,92,61),
	HX_("getRectFromString",55,83,89,c5),
	HX_("getRectIntsFromString",19,c6,60,39),
	HX_("paintScale9",ad,a0,ab,9e),
	HX_("makePaintScale9Id",1a,1f,e5,ef),
	HX_("paintCompoundBitmap",f8,4d,40,4e),
	HX_("paintBitmapSection",38,37,da,ed),
	HX_("bitmapFillRect",56,18,ff,37),
	::String(null())
};

void FlxUI9SliceSprite_obj::__register()
{
	FlxUI9SliceSprite_obj _hx_dummy;
	FlxUI9SliceSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxUI9SliceSprite",13,d2,35,7a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxUI9SliceSprite_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxUI9SliceSprite_obj::__SetStatic;
	__mClass->mMarkFunc = FlxUI9SliceSprite_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxUI9SliceSprite_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxUI9SliceSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxUI9SliceSprite_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxUI9SliceSprite_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUI9SliceSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUI9SliceSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxUI9SliceSprite_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_22_boot)
HXDLIN(  22)		bitmapsCreated = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_26_boot)
HXDLIN(  26)		useSectionCache = true;
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_47_boot)
HXDLIN(  47)		_staticPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_48_boot)
HXDLIN(  48)		_staticRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_49_boot)
HXDLIN(  49)		_staticRect2 =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_51_boot)
HXDLIN(  51)		_staticPointZero =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,0);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_52_boot)
HXDLIN(  52)		_staticMatrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxRect _hx_run(){
            			HX_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_54_boot)
HXDLIN(  54)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(  54)			_this->x = ( (Float)(0) );
HXDLIN(  54)			_this->y = ( (Float)(0) );
HXDLIN(  54)			_this->width = ( (Float)(0) );
HXDLIN(  54)			_this->height = ( (Float)(0) );
HXDLIN(  54)			 ::flixel::math::FlxRect rect = _this;
HXDLIN(  54)			rect->_inPool = false;
HXDLIN(  54)			return rect;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_54_boot)
HXDLIN(  54)		_staticFlxRect = ( ( ::flixel::math::FlxRect)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxRect _hx_run(){
            			HX_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_55_boot)
HXDLIN(  55)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(  55)			_this->x = ( (Float)(0) );
HXDLIN(  55)			_this->y = ( (Float)(0) );
HXDLIN(  55)			_this->width = ( (Float)(0) );
HXDLIN(  55)			_this->height = ( (Float)(0) );
HXDLIN(  55)			 ::flixel::math::FlxRect rect = _this;
HXDLIN(  55)			rect->_inPool = false;
HXDLIN(  55)			return rect;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_55_boot)
HXDLIN(  55)		_staticFlxRect2 = ( ( ::flixel::math::FlxRect)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            	HX_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_58_boot)
HXDLIN(  58)		TILE_NONE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_59_boot)
HXDLIN(  59)		TILE_BOTH = 17;
            	}
{
            	HX_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_60_boot)
HXDLIN(  60)		TILE_H = 16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_99c1e4be2c673cd2_61_boot)
HXDLIN(  61)		TILE_V = 1;
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
