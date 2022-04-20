#ifndef INCLUDED_openfl_events_FullScreenEvent
#define INCLUDED_openfl_events_FullScreenEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_ActivityEvent
#include <openfl/events/ActivityEvent.h>
#endif
HX_DECLARE_CLASS2(openfl,events,ActivityEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,FullScreenEvent)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES FullScreenEvent_obj : public  ::openfl::events::ActivityEvent_obj
{
	public:
		typedef  ::openfl::events::ActivityEvent_obj super;
		typedef FullScreenEvent_obj OBJ_;
		FullScreenEvent_obj();

	public:
		enum { _hx_ClassId = 0x7e1cc696 };

		void __construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< bool >  __o_fullScreen,::hx::Null< bool >  __o_interactive);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.FullScreenEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.events.FullScreenEvent"); }
		static ::hx::ObjectPtr< FullScreenEvent_obj > __new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< bool >  __o_fullScreen,::hx::Null< bool >  __o_interactive);
		static ::hx::ObjectPtr< FullScreenEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< bool >  __o_fullScreen,::hx::Null< bool >  __o_interactive);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FullScreenEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FullScreenEvent",9f,a7,78,f1); }

		static void __boot();
		static ::String FULL_SCREEN;
		static ::String FULL_SCREEN_INTERACTIVE_ACCEPTED;
		bool fullScreen;
		bool interactive;
		 ::openfl::events::Event clone();

		virtual ::String toString();

		void _hx___init();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_FullScreenEvent */ 
