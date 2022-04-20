#include <hxcpp.h>

#ifndef INCLUDED_polymod_PolymodErrorType
#include <polymod/PolymodErrorType.h>
#endif
namespace polymod{

::polymod::PolymodErrorType PolymodErrorType_obj::ERROR;

::polymod::PolymodErrorType PolymodErrorType_obj::NOTICE;

::polymod::PolymodErrorType PolymodErrorType_obj::WARNING;

bool PolymodErrorType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ERROR",a8,03,18,f1)) { outValue = PolymodErrorType_obj::ERROR; return true; }
	if (inName==HX_("NOTICE",18,84,3b,e4)) { outValue = PolymodErrorType_obj::NOTICE; return true; }
	if (inName==HX_("WARNING",3c,ae,9f,89)) { outValue = PolymodErrorType_obj::WARNING; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(PolymodErrorType_obj)

int PolymodErrorType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ERROR",a8,03,18,f1)) return 2;
	if (inName==HX_("NOTICE",18,84,3b,e4)) return 0;
	if (inName==HX_("WARNING",3c,ae,9f,89)) return 1;
	return super::__FindIndex(inName);
}

int PolymodErrorType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ERROR",a8,03,18,f1)) return 0;
	if (inName==HX_("NOTICE",18,84,3b,e4)) return 0;
	if (inName==HX_("WARNING",3c,ae,9f,89)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val PolymodErrorType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ERROR",a8,03,18,f1)) return ERROR;
	if (inName==HX_("NOTICE",18,84,3b,e4)) return NOTICE;
	if (inName==HX_("WARNING",3c,ae,9f,89)) return WARNING;
	return super::__Field(inName,inCallProp);
}

static ::String PolymodErrorType_obj_sStaticFields[] = {
	HX_("NOTICE",18,84,3b,e4),
	HX_("WARNING",3c,ae,9f,89),
	HX_("ERROR",a8,03,18,f1),
	::String(null())
};

::hx::Class PolymodErrorType_obj::__mClass;

Dynamic __Create_PolymodErrorType_obj() { return new PolymodErrorType_obj; }

void PolymodErrorType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("polymod.PolymodErrorType",64,c3,9f,be), ::hx::TCanCast< PolymodErrorType_obj >,PolymodErrorType_obj_sStaticFields,0,
	&__Create_PolymodErrorType_obj, &__Create,
	&super::__SGetClass(), &CreatePolymodErrorType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &PolymodErrorType_obj::__GetStatic;
}

void PolymodErrorType_obj::__boot()
{
ERROR = ::hx::CreateConstEnum< PolymodErrorType_obj >(HX_("ERROR",a8,03,18,f1),2);
NOTICE = ::hx::CreateConstEnum< PolymodErrorType_obj >(HX_("NOTICE",18,84,3b,e4),0);
WARNING = ::hx::CreateConstEnum< PolymodErrorType_obj >(HX_("WARNING",3c,ae,9f,89),1);
}


} // end namespace polymod
