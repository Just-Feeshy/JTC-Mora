#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_transition__TransitionFade_GraphicDiagonalGradient
#include <flixel/addons/transition/_TransitionFade/GraphicDiagonalGradient.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fbc9ba3aeda490f1_47_new,"flixel.addons.transition._TransitionFade.GraphicDiagonalGradient","new",0x12576751,"flixel.addons.transition._TransitionFade.GraphicDiagonalGradient.new","openfl/utils/_internal/AssetsMacro.hx",47,0xfdd54705)
HX_LOCAL_STACK_FRAME(_hx_pos_6b0a2037e268ad27_16_boot,"flixel.addons.transition._TransitionFade.GraphicDiagonalGradient","boot",0xf23c0021,"flixel.addons.transition._TransitionFade.GraphicDiagonalGradient.boot","flixel/addons/transition/TransitionFade.hx",16,0x307a6abc)
namespace flixel{
namespace addons{
namespace transition{
namespace _TransitionFade{

void GraphicDiagonalGradient_obj::__construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
            		 ::Dynamic transparent = __o_transparent;
            		if (::hx::IsNull(__o_transparent)) transparent = true;
            		 ::Dynamic fillRGBA = __o_fillRGBA;
            		if (::hx::IsNull(__o_fillRGBA)) fillRGBA = -1;
            	HX_STACKFRAME(&_hx_pos_fbc9ba3aeda490f1_47_new)
HXLINE(  71)		super::__construct(0,0,transparent,fillRGBA);
HXLINE(  73)		 ::openfl::utils::ByteArrayData byteArray = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::addons::transition::_TransitionFade::GraphicDiagonalGradient_obj::resourceName));
HXLINE(  74)		{
HXLINE(  74)			 ::openfl::utils::ByteArrayData rawAlpha = null();
HXDLIN(  74)			 ::lime::graphics::Image image = ::lime::graphics::Image_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(byteArray));
HXDLIN(  74)			this->_hx___fromImage(image);
HXDLIN(  74)			if (::hx::IsNotNull( rawAlpha )) {
HXLINE(  74)				this->_hx___applyAlpha(rawAlpha);
            			}
            		}
            	}

Dynamic GraphicDiagonalGradient_obj::__CreateEmpty() { return new GraphicDiagonalGradient_obj; }

void *GraphicDiagonalGradient_obj::_hx_vtable = 0;

Dynamic GraphicDiagonalGradient_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicDiagonalGradient_obj > _hx_result = new GraphicDiagonalGradient_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicDiagonalGradient_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x19bc7ce1;
	}
}

::String GraphicDiagonalGradient_obj::resourceName;


::hx::ObjectPtr< GraphicDiagonalGradient_obj > GraphicDiagonalGradient_obj::__new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	::hx::ObjectPtr< GraphicDiagonalGradient_obj > __this = new GraphicDiagonalGradient_obj();
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

::hx::ObjectPtr< GraphicDiagonalGradient_obj > GraphicDiagonalGradient_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	GraphicDiagonalGradient_obj *__this = (GraphicDiagonalGradient_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicDiagonalGradient_obj), true, "flixel.addons.transition._TransitionFade.GraphicDiagonalGradient"));
	*(void **)__this = GraphicDiagonalGradient_obj::_hx_vtable;
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

GraphicDiagonalGradient_obj::GraphicDiagonalGradient_obj()
{
}

bool GraphicDiagonalGradient_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool GraphicDiagonalGradient_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicDiagonalGradient_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GraphicDiagonalGradient_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &GraphicDiagonalGradient_obj::resourceName,HX_("resourceName",39,7a,62,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GraphicDiagonalGradient_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicDiagonalGradient_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicDiagonalGradient_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicDiagonalGradient_obj::resourceName,"resourceName");
};

#endif

::hx::Class GraphicDiagonalGradient_obj::__mClass;

static ::String GraphicDiagonalGradient_obj_sStaticFields[] = {
	HX_("resourceName",39,7a,62,90),
	::String(null())
};

void GraphicDiagonalGradient_obj::__register()
{
	GraphicDiagonalGradient_obj _hx_dummy;
	GraphicDiagonalGradient_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.transition._TransitionFade.GraphicDiagonalGradient",df,6a,43,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicDiagonalGradient_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicDiagonalGradient_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicDiagonalGradient_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GraphicDiagonalGradient_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicDiagonalGradient_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicDiagonalGradient_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicDiagonalGradient_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicDiagonalGradient_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicDiagonalGradient_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6b0a2037e268ad27_16_boot)
HXDLIN(  16)		resourceName = HX_("__ASSET__:bitmap_flixel_addons_transition__TransitionFade_GraphicDiagonalGradient",43,3b,8c,88);
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace transition
} // end namespace _TransitionFade
