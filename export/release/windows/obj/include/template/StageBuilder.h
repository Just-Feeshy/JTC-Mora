#ifndef INCLUDED_template_StageBuilder
#define INCLUDED_template_StageBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(_hx_template,StageBuilder)

namespace _hx_template{


class HXCPP_CLASS_ATTRIBUTES StageBuilder_obj : public  ::flixel::FlxBasic_obj
{
	public:
		typedef  ::flixel::FlxBasic_obj super;
		typedef StageBuilder_obj OBJ_;
		StageBuilder_obj();

	public:
		enum { _hx_ClassId = 0x0b48a01f };

		void __construct(::String song);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="template.StageBuilder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"template.StageBuilder"); }

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StageBuilder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StageBuilder",1d,d8,24,3f); }

		 ::haxe::ds::StringMap sprites;
		::String song;
		::String directory;
		void addToStageAndMap(::String name, ::flixel::FlxBasic thing);
		::Dynamic addToStageAndMap_dyn();

		void addToStage( ::flixel::FlxBasic thing);
		::Dynamic addToStage_dyn();

		void setDefaultCameraZoom(Float zoom);
		::Dynamic setDefaultCameraZoom_dyn();

		virtual void destroy();

};

} // end namespace template

#endif /* INCLUDED_template_StageBuilder */ 
