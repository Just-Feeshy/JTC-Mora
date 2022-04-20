#ifndef INCLUDED_polymod_backends_NMEBackend
#define INCLUDED_polymod_backends_NMEBackend

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_polymod_backends_StubBackend
#include <polymod/backends/StubBackend.h>
#endif
HX_DECLARE_CLASS2(polymod,backends,IBackend)
HX_DECLARE_CLASS2(polymod,backends,NMEBackend)
HX_DECLARE_CLASS2(polymod,backends,StubBackend)

namespace polymod{
namespace backends{


class HXCPP_CLASS_ATTRIBUTES NMEBackend_obj : public  ::polymod::backends::StubBackend_obj
{
	public:
		typedef  ::polymod::backends::StubBackend_obj super;
		typedef NMEBackend_obj OBJ_;
		NMEBackend_obj();

	public:
		enum { _hx_ClassId = 0x7f44c37b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="polymod.backends.NMEBackend")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"polymod.backends.NMEBackend"); }
		static ::hx::ObjectPtr< NMEBackend_obj > __new();
		static ::hx::ObjectPtr< NMEBackend_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NMEBackend_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NMEBackend",8e,c1,be,3c); }

};

} // end namespace polymod
} // end namespace backends

#endif /* INCLUDED_polymod_backends_NMEBackend */ 
