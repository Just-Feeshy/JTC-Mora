#ifndef INCLUDED_flixel_addons_ui_FlxMultiGamepadAnalogStick
#define INCLUDED_flixel_addons_ui_FlxMultiGamepadAnalogStick

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxMultiGamepad
#include <flixel/addons/ui/FlxMultiGamepad.h>
#endif
HX_DECLARE_CLASS3(flixel,addons,ui,FlxBaseMultiInput)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxMultiGamepad)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxMultiGamepadAnalogStick)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepad)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxMultiGamepadAnalogStick_obj : public  ::flixel::addons::ui::FlxMultiGamepad_obj
{
	public:
		typedef  ::flixel::addons::ui::FlxMultiGamepad_obj super;
		typedef FlxMultiGamepadAnalogStick_obj OBJ_;
		FlxMultiGamepadAnalogStick_obj();

	public:
		enum { _hx_ClassId = 0x017b2705 };

		void __construct( ::flixel::input::gamepad::FlxGamepad Gamepad, ::Dynamic Input,::Array< int > Combos,::Array< int > Forbiddens);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxMultiGamepadAnalogStick")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxMultiGamepadAnalogStick"); }
		static ::hx::ObjectPtr< FlxMultiGamepadAnalogStick_obj > __new( ::flixel::input::gamepad::FlxGamepad Gamepad, ::Dynamic Input,::Array< int > Combos,::Array< int > Forbiddens);
		static ::hx::ObjectPtr< FlxMultiGamepadAnalogStick_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepad Gamepad, ::Dynamic Input,::Array< int > Combos,::Array< int > Forbiddens);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxMultiGamepadAnalogStick_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxMultiGamepadAnalogStick",86,c4,44,8e); }

		static  ::Dynamic getStickInput(::String str);
		static ::Dynamic getStickInput_dyn();

		 ::Dynamic sInput;
		void destroy();

		bool checkJustPressed();

		bool checkJustReleased();

		bool checkPressed();

		bool checkCombos(bool value);

		bool checkForbiddens(bool value);

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxMultiGamepadAnalogStick */ 
