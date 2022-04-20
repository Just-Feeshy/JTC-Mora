#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_XInputID
#include <flixel/input/gamepad/id/XInputID.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_XInputMapping
#include <flixel/input/gamepad/mappings/XInputMapping.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_84c975cfdc90262d_6_new,"flixel.input.gamepad.mappings.XInputMapping","new",0x0bf6dd68,"flixel.input.gamepad.mappings.XInputMapping.new","flixel/input/gamepad/mappings/XInputMapping.hx",6,0x442329e6)
HX_LOCAL_STACK_FRAME(_hx_pos_84c975cfdc90262d_20_initValues,"flixel.input.gamepad.mappings.XInputMapping","initValues",0xac18830a,"flixel.input.gamepad.mappings.XInputMapping.initValues","flixel/input/gamepad/mappings/XInputMapping.hx",20,0x442329e6)
HX_LOCAL_STACK_FRAME(_hx_pos_84c975cfdc90262d_27_getID,"flixel.input.gamepad.mappings.XInputMapping","getID",0x15a6f0f9,"flixel.input.gamepad.mappings.XInputMapping.getID","flixel/input/gamepad/mappings/XInputMapping.hx",27,0x442329e6)
HX_LOCAL_STACK_FRAME(_hx_pos_84c975cfdc90262d_65_getRawID,"flixel.input.gamepad.mappings.XInputMapping","getRawID",0x00062545,"flixel.input.gamepad.mappings.XInputMapping.getRawID","flixel/input/gamepad/mappings/XInputMapping.hx",65,0x442329e6)
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

void XInputMapping_obj::__construct( ::flixel::input::gamepad::FlxGamepadAttachment attachment){
            	HX_STACKFRAME(&_hx_pos_84c975cfdc90262d_6_new)
HXDLIN(   6)		super::__construct(attachment);
            	}

Dynamic XInputMapping_obj::__CreateEmpty() { return new XInputMapping_obj; }

void *XInputMapping_obj::_hx_vtable = 0;

Dynamic XInputMapping_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< XInputMapping_obj > _hx_result = new XInputMapping_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool XInputMapping_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x21e2b607) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x21e2b607;
	} else {
		return inClassId==(int)0x73724244;
	}
}

void XInputMapping_obj::initValues(){
            	HX_STACKFRAME(&_hx_pos_84c975cfdc90262d_20_initValues)
HXLINE(  21)		this->leftStick = ::flixel::input::gamepad::id::XInputID_obj::LEFT_ANALOG_STICK;
HXLINE(  22)		this->rightStick = ::flixel::input::gamepad::id::XInputID_obj::RIGHT_ANALOG_STICK;
            	}


int XInputMapping_obj::getID(int rawID){
            	HX_STACKFRAME(&_hx_pos_84c975cfdc90262d_27_getID)
HXDLIN(  27)		switch((int)(rawID)){
            			case (int)-1: {
HXLINE(  34)				return 10;
            			}
            			break;
            			case (int)4: {
HXLINE(  44)				return 17;
            			}
            			break;
            			case (int)5: {
HXLINE(  45)				return 18;
            			}
            			break;
            			case (int)6: {
HXLINE(  29)				return 0;
            			}
            			break;
            			case (int)7: {
HXLINE(  30)				return 1;
            			}
            			break;
            			case (int)8: {
HXLINE(  31)				return 2;
            			}
            			break;
            			case (int)9: {
HXLINE(  32)				return 3;
            			}
            			break;
            			case (int)10: {
HXLINE(  33)				return 6;
            			}
            			break;
            			case (int)12: {
HXLINE(  35)				return 7;
            			}
            			break;
            			case (int)13: {
HXLINE(  36)				return 8;
            			}
            			break;
            			case (int)14: {
HXLINE(  37)				return 9;
            			}
            			break;
            			case (int)15: {
HXLINE(  38)				return 4;
            			}
            			break;
            			case (int)16: {
HXLINE(  39)				return 5;
            			}
            			break;
            			case (int)17: {
HXLINE(  47)				return 11;
            			}
            			break;
            			case (int)18: {
HXLINE(  48)				return 12;
            			}
            			break;
            			case (int)19: {
HXLINE(  49)				return 13;
            			}
            			break;
            			case (int)20: {
HXLINE(  50)				return 14;
            			}
            			break;
            			default:{
HXLINE(  51)				int id = rawID;
HXDLIN(  51)				if ((id == this->leftStick->rawUp)) {
HXLINE(  51)					return 34;
            				}
            				else {
HXLINE(  52)					int id = rawID;
HXDLIN(  52)					if ((id == this->leftStick->rawDown)) {
HXLINE(  52)						return 36;
            					}
            					else {
HXLINE(  53)						int id = rawID;
HXDLIN(  53)						if ((id == this->leftStick->rawLeft)) {
HXLINE(  53)							return 37;
            						}
            						else {
HXLINE(  54)							int id = rawID;
HXDLIN(  54)							if ((id == this->leftStick->rawRight)) {
HXLINE(  54)								return 35;
            							}
            							else {
HXLINE(  55)								int id = rawID;
HXDLIN(  55)								if ((id == this->rightStick->rawUp)) {
HXLINE(  55)									return 38;
            								}
            								else {
HXLINE(  56)									int id = rawID;
HXDLIN(  56)									if ((id == this->rightStick->rawDown)) {
HXLINE(  56)										return 40;
            									}
            									else {
HXLINE(  57)										int id = rawID;
HXDLIN(  57)										if ((id == this->rightStick->rawLeft)) {
HXLINE(  57)											return 41;
            										}
            										else {
HXLINE(  58)											int id = rawID;
HXDLIN(  58)											if ((id == this->rightStick->rawRight)) {
HXLINE(  58)												return 39;
            											}
            											else {
HXLINE(  59)												return -1;
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  27)		return null();
            	}


int XInputMapping_obj::getRawID(int ID){
            	HX_STACKFRAME(&_hx_pos_84c975cfdc90262d_65_getRawID)
HXDLIN(  65)		switch((int)(ID)){
            			case (int)0: {
HXLINE(  67)				return 6;
            			}
            			break;
            			case (int)1: {
HXLINE(  68)				return 7;
            			}
            			break;
            			case (int)2: {
HXLINE(  69)				return 8;
            			}
            			break;
            			case (int)3: {
HXLINE(  70)				return 9;
            			}
            			break;
            			case (int)4: {
HXLINE(  76)				return 15;
            			}
            			break;
            			case (int)5: {
HXLINE(  77)				return 16;
            			}
            			break;
            			case (int)6: {
HXLINE(  71)				return 10;
            			}
            			break;
            			case (int)7: {
HXLINE(  73)				return 12;
            			}
            			break;
            			case (int)8: {
HXLINE(  74)				return 13;
            			}
            			break;
            			case (int)9: {
HXLINE(  75)				return 14;
            			}
            			break;
            			case (int)10: {
HXLINE(  72)				return -1;
            			}
            			break;
            			case (int)11: {
HXLINE(  78)				return 17;
            			}
            			break;
            			case (int)12: {
HXLINE(  79)				return 18;
            			}
            			break;
            			case (int)13: {
HXLINE(  80)				return 19;
            			}
            			break;
            			case (int)14: {
HXLINE(  81)				return 20;
            			}
            			break;
            			case (int)17: {
HXLINE(  82)				return 4;
            			}
            			break;
            			case (int)18: {
HXLINE(  83)				return 5;
            			}
            			break;
            			case (int)34: {
HXLINE(  88)				return ::flixel::input::gamepad::id::XInputID_obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE(  91)				return ::flixel::input::gamepad::id::XInputID_obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE(  89)				return ::flixel::input::gamepad::id::XInputID_obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE(  90)				return ::flixel::input::gamepad::id::XInputID_obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			case (int)38: {
HXLINE(  92)				return ::flixel::input::gamepad::id::XInputID_obj::RIGHT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)39: {
HXLINE(  95)				return ::flixel::input::gamepad::id::XInputID_obj::RIGHT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)40: {
HXLINE(  93)				return ::flixel::input::gamepad::id::XInputID_obj::RIGHT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)41: {
HXLINE(  94)				return ::flixel::input::gamepad::id::XInputID_obj::RIGHT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE(  96)				return -1;
            			}
            		}
HXLINE(  65)		return 0;
            	}



::hx::ObjectPtr< XInputMapping_obj > XInputMapping_obj::__new( ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	::hx::ObjectPtr< XInputMapping_obj > __this = new XInputMapping_obj();
	__this->__construct(attachment);
	return __this;
}

::hx::ObjectPtr< XInputMapping_obj > XInputMapping_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	XInputMapping_obj *__this = (XInputMapping_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(XInputMapping_obj), true, "flixel.input.gamepad.mappings.XInputMapping"));
	*(void **)__this = XInputMapping_obj::_hx_vtable;
	__this->__construct(attachment);
	return __this;
}

XInputMapping_obj::XInputMapping_obj()
{
}

::hx::Val XInputMapping_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return ::hx::Val( getID_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRawID") ) { return ::hx::Val( getRawID_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initValues") ) { return ::hx::Val( initValues_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *XInputMapping_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *XInputMapping_obj_sStaticStorageInfo = 0;
#endif

static ::String XInputMapping_obj_sMemberFields[] = {
	HX_("initValues",12,5f,fc,53),
	HX_("getID",f1,91,60,91),
	HX_("getRawID",4d,6f,fd,43),
	::String(null()) };

::hx::Class XInputMapping_obj::__mClass;

void XInputMapping_obj::__register()
{
	XInputMapping_obj _hx_dummy;
	XInputMapping_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.mappings.XInputMapping",76,49,9a,66);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(XInputMapping_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< XInputMapping_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = XInputMapping_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = XInputMapping_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
