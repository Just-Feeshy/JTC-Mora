#ifndef INCLUDED_lime_graphics_opengl_ext_NV_fbo_color_attachments
#define INCLUDED_lime_graphics_opengl_ext_NV_fbo_color_attachments

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_a70c78690b87ad78_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,NV_fbo_color_attachments)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES NV_fbo_color_attachments_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NV_fbo_color_attachments_obj OBJ_;
		NV_fbo_color_attachments_obj();

	public:
		enum { _hx_ClassId = 0x4f7617c3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.NV_fbo_color_attachments")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.NV_fbo_color_attachments"); }

		inline static ::hx::ObjectPtr< NV_fbo_color_attachments_obj > __new() {
			::hx::ObjectPtr< NV_fbo_color_attachments_obj > __this = new NV_fbo_color_attachments_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< NV_fbo_color_attachments_obj > __alloc(::hx::Ctx *_hx_ctx) {
			NV_fbo_color_attachments_obj *__this = (NV_fbo_color_attachments_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NV_fbo_color_attachments_obj), false, "lime.graphics.opengl.ext.NV_fbo_color_attachments"));
			*(void **)__this = NV_fbo_color_attachments_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_a70c78690b87ad78_4_new)
HXLINE(  22)		( ( ::lime::graphics::opengl::ext::NV_fbo_color_attachments)(__this) )->COLOR_ATTACHMENT15_NV = 36079;
HXLINE(  21)		( ( ::lime::graphics::opengl::ext::NV_fbo_color_attachments)(__this) )->COLOR_ATTACHMENT14_NV = 36078;
HXLINE(  20)		( ( ::lime::graphics::opengl::ext::NV_fbo_color_attachments)(__this) )->COLOR_ATTACHMENT13_NV = 36077;
HXLINE(  19)		( ( ::lime::graphics::opengl::ext::NV_fbo_color_attachments)(__this) )->COLOR_ATTACHMENT12_NV = 36076;
HXLINE(  18)		( ( ::lime::graphics::opengl::ext::NV_fbo_color_attachments)(__this) )->COLOR_ATTACHMENT11_NV = 36075;
HXLINE(  17)		( ( ::lime::graphics::opengl::ext::NV_fbo_color_attachments)(__this) )->COLOR_ATTACHMENT10_NV = 36074;
HXLINE(  16)		( ( ::lime::graphics::opengl::ext::NV_fbo_color_attachments)(__this) )->COLOR_ATTACHMENT9_NV = 36073;
HXLINE(  15)		( ( ::lime::graphics::opengl::ext::NV_fbo_color_attachments)(__this) )->COLOR_ATTACHMENT8_NV = 36072;
HXLINE(  14)		( ( ::lime::graphics::opengl::ext::NV_fbo_color_attachments)(__this) )->COLOR_ATTACHMENT7_NV = 36071;
HXLINE(  13)		( ( ::lime::graphics::opengl::ext::NV_fbo_color_attachments)(__this) )->COLOR_ATTACHMENT6_NV = 36070;
HXLINE(  12)		( ( ::lime::graphics::opengl::ext::NV_fbo_color_attachments)(__this) )->COLOR_ATTACHMENT5_NV = 36069;
HXLINE(  11)		( ( ::lime::graphics::opengl::ext::NV_fbo_color_attachments)(__this) )->COLOR_ATTACHMENT4_NV = 36068;
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::NV_fbo_color_attachments)(__this) )->COLOR_ATTACHMENT3_NV = 36067;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::NV_fbo_color_attachments)(__this) )->COLOR_ATTACHMENT2_NV = 36066;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::NV_fbo_color_attachments)(__this) )->COLOR_ATTACHMENT1_NV = 36065;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::NV_fbo_color_attachments)(__this) )->COLOR_ATTACHMENT0_NV = 36064;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::NV_fbo_color_attachments)(__this) )->MAX_COLOR_ATTACHMENTS_NV = 36063;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NV_fbo_color_attachments_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NV_fbo_color_attachments",d1,a3,ac,87); }

		int MAX_COLOR_ATTACHMENTS_NV;
		int COLOR_ATTACHMENT0_NV;
		int COLOR_ATTACHMENT1_NV;
		int COLOR_ATTACHMENT2_NV;
		int COLOR_ATTACHMENT3_NV;
		int COLOR_ATTACHMENT4_NV;
		int COLOR_ATTACHMENT5_NV;
		int COLOR_ATTACHMENT6_NV;
		int COLOR_ATTACHMENT7_NV;
		int COLOR_ATTACHMENT8_NV;
		int COLOR_ATTACHMENT9_NV;
		int COLOR_ATTACHMENT10_NV;
		int COLOR_ATTACHMENT11_NV;
		int COLOR_ATTACHMENT12_NV;
		int COLOR_ATTACHMENT13_NV;
		int COLOR_ATTACHMENT14_NV;
		int COLOR_ATTACHMENT15_NV;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_NV_fbo_color_attachments */ 
