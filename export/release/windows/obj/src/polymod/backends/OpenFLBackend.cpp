#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetCache
#include <openfl/utils/AssetCache.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif
#ifndef INCLUDED_polymod_backends_IBackend
#include <polymod/backends/IBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_LimeBackend
#include <polymod/backends/LimeBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_OpenFLBackend
#include <polymod/backends/OpenFLBackend.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0a4b69038e11ecd5_14_new,"polymod.backends.OpenFLBackend","new",0x0f63945f,"polymod.backends.OpenFLBackend.new","polymod/backends/OpenFLBackend.hx",14,0x281193d1)
HX_LOCAL_STACK_FRAME(_hx_pos_0a4b69038e11ecd5_17_clearCache,"polymod.backends.OpenFLBackend","clearCache",0xfd1d2356,"polymod.backends.OpenFLBackend.clearCache","polymod/backends/OpenFLBackend.hx",17,0x281193d1)
HX_LOCAL_STACK_FRAME(_hx_pos_0a4b69038e11ecd5_30_clearBitmapCache,"polymod.backends.OpenFLBackend","clearBitmapCache",0x2fad67e7,"polymod.backends.OpenFLBackend.clearBitmapCache","polymod/backends/OpenFLBackend.hx",30,0x281193d1)
HX_LOCAL_STACK_FRAME(_hx_pos_0a4b69038e11ecd5_43_clearFontCache,"polymod.backends.OpenFLBackend","clearFontCache",0xb674e107,"polymod.backends.OpenFLBackend.clearFontCache","polymod/backends/OpenFLBackend.hx",43,0x281193d1)
HX_LOCAL_STACK_FRAME(_hx_pos_0a4b69038e11ecd5_56_clearSoundCache,"polymod.backends.OpenFLBackend","clearSoundCache",0x34e3bd5f,"polymod.backends.OpenFLBackend.clearSoundCache","polymod/backends/OpenFLBackend.hx",56,0x281193d1)
namespace polymod{
namespace backends{

void OpenFLBackend_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0a4b69038e11ecd5_14_new)
HXDLIN(  14)		super::__construct();
            	}

Dynamic OpenFLBackend_obj::__CreateEmpty() { return new OpenFLBackend_obj; }

void *OpenFLBackend_obj::_hx_vtable = 0;

Dynamic OpenFLBackend_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OpenFLBackend_obj > _hx_result = new OpenFLBackend_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OpenFLBackend_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12bf7dcf) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x12bf7dcf;
	} else {
		return inClassId==(int)0x7a28a88e;
	}
}

void OpenFLBackend_obj::clearCache(){
            	HX_STACKFRAME(&_hx_pos_0a4b69038e11ecd5_17_clearCache)
HXLINE(  18)		this->super::clearCache();
HXLINE(  20)		::polymod::backends::OpenFLBackend_obj::clearBitmapCache();
HXLINE(  21)		::polymod::backends::OpenFLBackend_obj::clearFontCache();
HXLINE(  22)		::polymod::backends::OpenFLBackend_obj::clearSoundCache();
            	}


void OpenFLBackend_obj::clearBitmapCache(){
            	HX_STACKFRAME(&_hx_pos_0a4b69038e11ecd5_30_clearBitmapCache)
HXLINE(  35)		 ::openfl::utils::AssetCache cache = ( ( ::openfl::utils::AssetCache)(::openfl::utils::Assets_obj::cache) );
HXLINE(  36)		{
HXLINE(  36)			 ::Dynamic key = cache->bitmapData->keys();
HXDLIN(  36)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  36)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  38)				cache->bitmapData->remove(key1);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(OpenFLBackend_obj,clearBitmapCache,(void))

void OpenFLBackend_obj::clearFontCache(){
            	HX_STACKFRAME(&_hx_pos_0a4b69038e11ecd5_43_clearFontCache)
HXLINE(  48)		 ::openfl::utils::AssetCache cache = ( ( ::openfl::utils::AssetCache)(::openfl::utils::Assets_obj::cache) );
HXLINE(  49)		{
HXLINE(  49)			 ::Dynamic key = cache->font->keys();
HXDLIN(  49)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  49)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  51)				cache->font->remove(key1);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(OpenFLBackend_obj,clearFontCache,(void))

void OpenFLBackend_obj::clearSoundCache(){
            	HX_STACKFRAME(&_hx_pos_0a4b69038e11ecd5_56_clearSoundCache)
HXLINE(  61)		 ::openfl::utils::AssetCache cache = ( ( ::openfl::utils::AssetCache)(::openfl::utils::Assets_obj::cache) );
HXLINE(  62)		{
HXLINE(  62)			 ::Dynamic key = cache->sound->keys();
HXDLIN(  62)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  62)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  64)				cache->sound->remove(key1);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(OpenFLBackend_obj,clearSoundCache,(void))


::hx::ObjectPtr< OpenFLBackend_obj > OpenFLBackend_obj::__new() {
	::hx::ObjectPtr< OpenFLBackend_obj > __this = new OpenFLBackend_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< OpenFLBackend_obj > OpenFLBackend_obj::__alloc(::hx::Ctx *_hx_ctx) {
	OpenFLBackend_obj *__this = (OpenFLBackend_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OpenFLBackend_obj), true, "polymod.backends.OpenFLBackend"));
	*(void **)__this = OpenFLBackend_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

OpenFLBackend_obj::OpenFLBackend_obj()
{
}

::hx::Val OpenFLBackend_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"clearCache") ) { return ::hx::Val( clearCache_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool OpenFLBackend_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"clearFontCache") ) { outValue = clearFontCache_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"clearSoundCache") ) { outValue = clearSoundCache_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"clearBitmapCache") ) { outValue = clearBitmapCache_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *OpenFLBackend_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *OpenFLBackend_obj_sStaticStorageInfo = 0;
#endif

static ::String OpenFLBackend_obj_sMemberFields[] = {
	HX_("clearCache",75,d9,1e,16),
	::String(null()) };

::hx::Class OpenFLBackend_obj::__mClass;

static ::String OpenFLBackend_obj_sStaticFields[] = {
	HX_("clearBitmapCache",46,ff,f4,ca),
	HX_("clearFontCache",a6,92,f5,aa),
	HX_("clearSoundCache",e0,76,fe,30),
	::String(null())
};

void OpenFLBackend_obj::__register()
{
	OpenFLBackend_obj _hx_dummy;
	OpenFLBackend_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.backends.OpenFLBackend",ed,78,14,4b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OpenFLBackend_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OpenFLBackend_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OpenFLBackend_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OpenFLBackend_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OpenFLBackend_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OpenFLBackend_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace backends
