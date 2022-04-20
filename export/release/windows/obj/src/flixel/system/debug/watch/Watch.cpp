#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f3919820c0c3a2ee_15_new,"flixel.system.debug.watch.Watch","new",0xfeaf943a,"flixel.system.debug.watch.Watch.new","flixel/system/debug/watch/Watch.hx",15,0x446c9b58)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace watch{

void Watch_obj::__construct(::String Title, ::openfl::display::BitmapData Icon, ::Dynamic Width, ::Dynamic Height, ::Dynamic Resizable, ::openfl::geom::Rectangle Bounds, ::Dynamic Closable, ::Dynamic AlwaysOnTop){
            	HX_STACKFRAME(&_hx_pos_f3919820c0c3a2ee_15_new)
HXDLIN(  15)		super::__construct(Title,Icon,Width,Height,Resizable,Bounds,Closable,AlwaysOnTop);
            	}

Dynamic Watch_obj::__CreateEmpty() { return new Watch_obj; }

void *Watch_obj::_hx_vtable = 0;

Dynamic Watch_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Watch_obj > _hx_result = new Watch_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool Watch_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x39123ef8) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x39123ef8;
		}
	} else {
		if (inClassId<=(int)0x5ad89704) {
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x5ad89704;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}


::hx::ObjectPtr< Watch_obj > Watch_obj::__new(::String Title, ::openfl::display::BitmapData Icon, ::Dynamic Width, ::Dynamic Height, ::Dynamic Resizable, ::openfl::geom::Rectangle Bounds, ::Dynamic Closable, ::Dynamic AlwaysOnTop) {
	::hx::ObjectPtr< Watch_obj > __this = new Watch_obj();
	__this->__construct(Title,Icon,Width,Height,Resizable,Bounds,Closable,AlwaysOnTop);
	return __this;
}

::hx::ObjectPtr< Watch_obj > Watch_obj::__alloc(::hx::Ctx *_hx_ctx,::String Title, ::openfl::display::BitmapData Icon, ::Dynamic Width, ::Dynamic Height, ::Dynamic Resizable, ::openfl::geom::Rectangle Bounds, ::Dynamic Closable, ::Dynamic AlwaysOnTop) {
	Watch_obj *__this = (Watch_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Watch_obj), true, "flixel.system.debug.watch.Watch"));
	*(void **)__this = Watch_obj::_hx_vtable;
	__this->__construct(Title,Icon,Width,Height,Resizable,Bounds,Closable,AlwaysOnTop);
	return __this;
}

Watch_obj::Watch_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Watch_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Watch_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Watch_obj::__mClass;

void Watch_obj::__register()
{
	Watch_obj _hx_dummy;
	Watch_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.watch.Watch",48,af,96,48);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Watch_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Watch_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Watch_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch
