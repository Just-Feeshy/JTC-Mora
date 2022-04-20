#ifndef INCLUDED_flixel_addons_transition_TransitionFade
#define INCLUDED_flixel_addons_transition_TransitionFade

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_transition_TransitionEffect
#include <flixel/addons/transition/TransitionEffect.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionEffect)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionFade)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace addons{
namespace transition{


class HXCPP_CLASS_ATTRIBUTES TransitionFade_obj : public  ::flixel::addons::transition::TransitionEffect_obj
{
	public:
		typedef  ::flixel::addons::transition::TransitionEffect_obj super;
		typedef TransitionFade_obj OBJ_;
		TransitionFade_obj();

	public:
		enum { _hx_ClassId = 0x5b6c5e35 };

		void __construct( ::flixel::addons::transition::TransitionData data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.transition.TransitionFade")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.transition.TransitionFade"); }
		static ::hx::ObjectPtr< TransitionFade_obj > __new( ::flixel::addons::transition::TransitionData data);
		static ::hx::ObjectPtr< TransitionFade_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TransitionFade_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TransitionFade",d1,f1,92,ff); }

		 ::flixel::FlxSprite back;
		::String tweenStr;
		::String tweenStr2;
		Float tweenValStart;
		Float tweenValStart2;
		Float tweenValEnd;
		Float tweenValEnd2;
		void destroy();

		void start(int NewStatus);

		void setTweenValues(int NewStatus,Float DirX,Float DirY);
		::Dynamic setTweenValues_dyn();

		 ::flixel::FlxSprite makeSprite(Float DirX,Float DirY);
		::Dynamic makeSprite_dyn();

		 ::openfl::display::BitmapData getGradient();
		::Dynamic getGradient_dyn();

		void finishTween( ::flixel::tweens::FlxTween f);
		::Dynamic finishTween_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace transition

#endif /* INCLUDED_flixel_addons_transition_TransitionFade */ 
