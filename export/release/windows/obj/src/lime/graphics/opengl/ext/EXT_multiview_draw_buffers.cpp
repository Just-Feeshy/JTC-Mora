#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_multiview_draw_buffers
#include <lime/graphics/opengl/ext/EXT_multiview_draw_buffers.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_36278e956d66cc9e_4_new,"lime.graphics.opengl.ext.EXT_multiview_draw_buffers","new",0xf0c5318b,"lime.graphics.opengl.ext.EXT_multiview_draw_buffers.new","lime/graphics/opengl/ext/EXT_multiview_draw_buffers.hx",4,0x15797e63)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_multiview_draw_buffers_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_36278e956d66cc9e_4_new)
HXLINE(  10)		this->MAX_MULTIVIEW_BUFFERS_EXT = 37106;
HXLINE(   9)		this->READ_BUFFER_EXT = 3074;
HXLINE(   8)		this->DRAW_BUFFER_EXT = 3073;
HXLINE(   7)		this->MULTIVIEW_EXT = 37105;
HXLINE(   6)		this->COLOR_ATTACHMENT_EXT = 37104;
            	}

Dynamic EXT_multiview_draw_buffers_obj::__CreateEmpty() { return new EXT_multiview_draw_buffers_obj; }

void *EXT_multiview_draw_buffers_obj::_hx_vtable = 0;

Dynamic EXT_multiview_draw_buffers_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EXT_multiview_draw_buffers_obj > _hx_result = new EXT_multiview_draw_buffers_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_multiview_draw_buffers_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x29e98b69;
}


EXT_multiview_draw_buffers_obj::EXT_multiview_draw_buffers_obj()
{
}

::hx::Val EXT_multiview_draw_buffers_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"MULTIVIEW_EXT") ) { return ::hx::Val( MULTIVIEW_EXT ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER_EXT") ) { return ::hx::Val( DRAW_BUFFER_EXT ); }
		if (HX_FIELD_EQ(inName,"READ_BUFFER_EXT") ) { return ::hx::Val( READ_BUFFER_EXT ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT_EXT") ) { return ::hx::Val( COLOR_ATTACHMENT_EXT ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"MAX_MULTIVIEW_BUFFERS_EXT") ) { return ::hx::Val( MAX_MULTIVIEW_BUFFERS_EXT ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EXT_multiview_draw_buffers_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"MULTIVIEW_EXT") ) { MULTIVIEW_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"DRAW_BUFFER_EXT") ) { DRAW_BUFFER_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"READ_BUFFER_EXT") ) { READ_BUFFER_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT_EXT") ) { COLOR_ATTACHMENT_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"MAX_MULTIVIEW_BUFFERS_EXT") ) { MAX_MULTIVIEW_BUFFERS_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_multiview_draw_buffers_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("COLOR_ATTACHMENT_EXT",a1,19,e2,ca));
	outFields->push(HX_("MULTIVIEW_EXT",c0,c1,d0,50));
	outFields->push(HX_("DRAW_BUFFER_EXT",1d,e6,52,7b));
	outFields->push(HX_("READ_BUFFER_EXT",0b,44,13,dd));
	outFields->push(HX_("MAX_MULTIVIEW_BUFFERS_EXT",59,3d,18,12));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EXT_multiview_draw_buffers_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(EXT_multiview_draw_buffers_obj,COLOR_ATTACHMENT_EXT),HX_("COLOR_ATTACHMENT_EXT",a1,19,e2,ca)},
	{::hx::fsInt,(int)offsetof(EXT_multiview_draw_buffers_obj,MULTIVIEW_EXT),HX_("MULTIVIEW_EXT",c0,c1,d0,50)},
	{::hx::fsInt,(int)offsetof(EXT_multiview_draw_buffers_obj,DRAW_BUFFER_EXT),HX_("DRAW_BUFFER_EXT",1d,e6,52,7b)},
	{::hx::fsInt,(int)offsetof(EXT_multiview_draw_buffers_obj,READ_BUFFER_EXT),HX_("READ_BUFFER_EXT",0b,44,13,dd)},
	{::hx::fsInt,(int)offsetof(EXT_multiview_draw_buffers_obj,MAX_MULTIVIEW_BUFFERS_EXT),HX_("MAX_MULTIVIEW_BUFFERS_EXT",59,3d,18,12)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EXT_multiview_draw_buffers_obj_sStaticStorageInfo = 0;
#endif

static ::String EXT_multiview_draw_buffers_obj_sMemberFields[] = {
	HX_("COLOR_ATTACHMENT_EXT",a1,19,e2,ca),
	HX_("MULTIVIEW_EXT",c0,c1,d0,50),
	HX_("DRAW_BUFFER_EXT",1d,e6,52,7b),
	HX_("READ_BUFFER_EXT",0b,44,13,dd),
	HX_("MAX_MULTIVIEW_BUFFERS_EXT",59,3d,18,12),
	::String(null()) };

::hx::Class EXT_multiview_draw_buffers_obj::__mClass;

void EXT_multiview_draw_buffers_obj::__register()
{
	EXT_multiview_draw_buffers_obj _hx_dummy;
	EXT_multiview_draw_buffers_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.EXT_multiview_draw_buffers",19,10,3d,21);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EXT_multiview_draw_buffers_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EXT_multiview_draw_buffers_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_multiview_draw_buffers_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_multiview_draw_buffers_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
