#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#define INCLUDED_flixel_system_ui_FlxSystemButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS3(flixel,_hx_system,ui,FlxSystemButton)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)

namespace flixel{
namespace _hx_system{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxSystemButton_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef FlxSystemButton_obj OBJ_;
		FlxSystemButton_obj();

	public:
		enum { _hx_ClassId = 0x295254ec };

		void __construct( ::openfl::display::BitmapData Icon, ::Dynamic UpHandler,::hx::Null< bool >  __o_ToggleMode);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.ui.FlxSystemButton")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.ui.FlxSystemButton"); }
		static ::hx::ObjectPtr< FlxSystemButton_obj > __new( ::openfl::display::BitmapData Icon, ::Dynamic UpHandler,::hx::Null< bool >  __o_ToggleMode);
		static ::hx::ObjectPtr< FlxSystemButton_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::BitmapData Icon, ::Dynamic UpHandler,::hx::Null< bool >  __o_ToggleMode);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxSystemButton_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxSystemButton",b3,c5,2f,15); }

		 ::Dynamic upHandler;
		Dynamic upHandler_dyn() { return upHandler;}
		bool enabled;
		bool toggleMode;
		bool toggled;
		 ::openfl::display::Bitmap _icon;
		bool _mouseDown;
		void changeIcon( ::openfl::display::BitmapData Icon);
		::Dynamic changeIcon_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		void onMouseUp( ::openfl::events::MouseEvent _);
		::Dynamic onMouseUp_dyn();

		void onMouseDown( ::openfl::events::MouseEvent _);
		::Dynamic onMouseDown_dyn();

		void onMouseOver( ::openfl::events::MouseEvent _);
		::Dynamic onMouseOver_dyn();

		void onMouseOut( ::openfl::events::MouseEvent _);
		::Dynamic onMouseOut_dyn();

		bool set_toggled(bool Value);
		::Dynamic set_toggled_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace ui

#endif /* INCLUDED_flixel_system_ui_FlxSystemButton */ 
