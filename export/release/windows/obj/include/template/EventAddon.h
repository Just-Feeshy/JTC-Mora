#ifndef INCLUDED_template_EventAddon
#define INCLUDED_template_EventAddon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_b1a65a135ae92e24_107_new)
HX_DECLARE_CLASS1(_hx_template,EventAddon)

namespace _hx_template{


class HXCPP_CLASS_ATTRIBUTES EventAddon_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EventAddon_obj OBJ_;
		EventAddon_obj();

	public:
		enum { _hx_ClassId = 0x1bc577e0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="template.EventAddon")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"template.EventAddon"); }

		inline static ::hx::ObjectPtr< EventAddon_obj > __new() {
			::hx::ObjectPtr< EventAddon_obj > __this = new EventAddon_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EventAddon_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EventAddon_obj *__this = (EventAddon_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EventAddon_obj), false, "template.EventAddon"));
			*(void **)__this = EventAddon_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_b1a65a135ae92e24_107_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EventAddon_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EventAddon",26,eb,4f,8f); }

		void update();
		::Dynamic update_dyn();

};

} // end namespace template

#endif /* INCLUDED_template_EventAddon */ 
