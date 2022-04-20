#ifndef INCLUDED_polymod_backends_HEAPSBackend
#define INCLUDED_polymod_backends_HEAPSBackend

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_polymod_backends_StubBackend
#include <polymod/backends/StubBackend.h>
#endif
HX_DECLARE_CLASS2(polymod,backends,HEAPSBackend)
HX_DECLARE_CLASS2(polymod,backends,IBackend)
HX_DECLARE_CLASS2(polymod,backends,StubBackend)

namespace polymod{
namespace backends{


class HXCPP_CLASS_ATTRIBUTES HEAPSBackend_obj : public  ::polymod::backends::StubBackend_obj
{
	public:
		typedef  ::polymod::backends::StubBackend_obj super;
		typedef HEAPSBackend_obj OBJ_;
		HEAPSBackend_obj();

	public:
		enum { _hx_ClassId = 0x264edc02 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="polymod.backends.HEAPSBackend")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"polymod.backends.HEAPSBackend"); }
		static ::hx::ObjectPtr< HEAPSBackend_obj > __new();
		static ::hx::ObjectPtr< HEAPSBackend_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HEAPSBackend_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HEAPSBackend",2d,e1,56,4c); }

};

} // end namespace polymod
} // end namespace backends

#endif /* INCLUDED_polymod_backends_HEAPSBackend */ 
