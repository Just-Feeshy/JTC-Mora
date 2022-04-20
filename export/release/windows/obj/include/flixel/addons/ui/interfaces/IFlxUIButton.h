#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#define INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES IFlxUIButton_obj {
	public:
		typedef  ::flixel::util::IFlxDestroyable_obj super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_destroy)(); 
		static inline void destroy( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIButton_obj *>(_hx_.mPtr->_hx_getInterface(0x2772d80c)))->_hx_destroy)();
		}
		bool (::hx::Object :: *_hx_set_toggled)(bool value); 
		static inline bool set_toggled( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIButton_obj *>(_hx_.mPtr->_hx_getInterface(0x2772d80c)))->_hx_set_toggled)(value);
		}
		 ::flixel::FlxSprite (::hx::Object :: *_hx_set_toggle_label)( ::flixel::FlxSprite value); 
		static inline  ::flixel::FlxSprite set_toggle_label( ::Dynamic _hx_, ::flixel::FlxSprite value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIButton_obj *>(_hx_.mPtr->_hx_getInterface(0x2772d80c)))->_hx_set_toggle_label)(value);
		}
		bool (::hx::Object :: *_hx_get_justMousedOver)(); 
		static inline bool get_justMousedOver( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIButton_obj *>(_hx_.mPtr->_hx_getInterface(0x2772d80c)))->_hx_get_justMousedOver)();
		}
		bool (::hx::Object :: *_hx_get_mouseIsOver)(); 
		static inline bool get_mouseIsOver( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIButton_obj *>(_hx_.mPtr->_hx_getInterface(0x2772d80c)))->_hx_get_mouseIsOver)();
		}
		bool (::hx::Object :: *_hx_get_mouseIsOut)(); 
		static inline bool get_mouseIsOut( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIButton_obj *>(_hx_.mPtr->_hx_getInterface(0x2772d80c)))->_hx_get_mouseIsOut)();
		}
		bool (::hx::Object :: *_hx_get_justMousedOut)(); 
		static inline bool get_justMousedOut( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIButton_obj *>(_hx_.mPtr->_hx_getInterface(0x2772d80c)))->_hx_get_justMousedOut)();
		}
		int (::hx::Object :: *_hx_set_status)(int value); 
		static inline int set_status( ::Dynamic _hx_,int value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIButton_obj *>(_hx_.mPtr->_hx_getInterface(0x2772d80c)))->_hx_set_status)(value);
		}
		void (::hx::Object :: *_hx_autoCenterLabel)(); 
		static inline void autoCenterLabel( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIButton_obj *>(_hx_.mPtr->_hx_getInterface(0x2772d80c)))->_hx_autoCenterLabel)();
		}
		void (::hx::Object :: *_hx_loadGraphicSlice9)(::cpp::VirtualArray assets,::hx::Null< int >  W,::hx::Null< int >  H,::Array< ::Dynamic> slice9,::hx::Null< int >  Tile,::hx::Null< Float >  Resize_Ratio,::hx::Null< bool >  isToggle,::hx::Null< int >  src_w,::hx::Null< int >  src_h,::Array< int > frame_indeces); 
		static inline void loadGraphicSlice9( ::Dynamic _hx_,::cpp::VirtualArray assets,::hx::Null< int >  W,::hx::Null< int >  H,::Array< ::Dynamic> slice9,::hx::Null< int >  Tile,::hx::Null< Float >  Resize_Ratio,::hx::Null< bool >  isToggle,::hx::Null< int >  src_w,::hx::Null< int >  src_h,::Array< int > frame_indeces) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIButton_obj *>(_hx_.mPtr->_hx_getInterface(0x2772d80c)))->_hx_loadGraphicSlice9)(assets,W,H,slice9,Tile,Resize_Ratio,isToggle,src_w,src_h,frame_indeces);
		}
		void (::hx::Object :: *_hx_loadGraphicsMultiple)(::cpp::VirtualArray assets,::String Key); 
		static inline void loadGraphicsMultiple( ::Dynamic _hx_,::cpp::VirtualArray assets,::String Key) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIButton_obj *>(_hx_.mPtr->_hx_getInterface(0x2772d80c)))->_hx_loadGraphicsMultiple)(assets,Key);
		}
		void (::hx::Object :: *_hx_loadGraphicsUpOverDown)( ::Dynamic asset,::hx::Null< bool >  for_toggle,::String key); 
		static inline void loadGraphicsUpOverDown( ::Dynamic _hx_, ::Dynamic asset,::hx::Null< bool >  for_toggle,::String key) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIButton_obj *>(_hx_.mPtr->_hx_getInterface(0x2772d80c)))->_hx_loadGraphicsUpOverDown)(asset,for_toggle,key);
		}
		void (::hx::Object :: *_hx_forceStateHandler)(::String event); 
		static inline void forceStateHandler( ::Dynamic _hx_,::String event) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIButton_obj *>(_hx_.mPtr->_hx_getInterface(0x2772d80c)))->_hx_forceStateHandler)(event);
		}
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces

#endif /* INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton */ 
