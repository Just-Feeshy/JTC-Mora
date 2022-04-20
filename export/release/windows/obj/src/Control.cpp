#include <hxcpp.h>

#ifndef INCLUDED_Control
#include <Control.h>
#endif

::Control Control_obj::ACCEPT;

::Control Control_obj::BACK;

::Control Control_obj::CHEAT;

::Control Control_obj::DOWN;

::Control Control_obj::LEFT;

::Control Control_obj::PAUSE;

::Control Control_obj::RESET;

::Control Control_obj::RIGHT;

::Control Control_obj::SPACE;

::Control Control_obj::UP;

bool Control_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ACCEPT",08,3f,89,bd)) { outValue = Control_obj::ACCEPT; return true; }
	if (inName==HX_("BACK",27,a2,d1,2b)) { outValue = Control_obj::BACK; return true; }
	if (inName==HX_("CHEAT",f3,ce,a4,c3)) { outValue = Control_obj::CHEAT; return true; }
	if (inName==HX_("DOWN",62,c0,2e,2d)) { outValue = Control_obj::DOWN; return true; }
	if (inName==HX_("LEFT",07,d0,70,32)) { outValue = Control_obj::LEFT; return true; }
	if (inName==HX_("PAUSE",d6,0e,46,3b)) { outValue = Control_obj::PAUSE; return true; }
	if (inName==HX_("RESET",af,81,b6,64)) { outValue = Control_obj::RESET; return true; }
	if (inName==HX_("RIGHT",bc,43,52,67)) { outValue = Control_obj::RIGHT; return true; }
	if (inName==HX_("SPACE",a6,c4,54,ff)) { outValue = Control_obj::SPACE; return true; }
	if (inName==HX_("UP",5b,4a,00,00)) { outValue = Control_obj::UP; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Control_obj)

int Control_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ACCEPT",08,3f,89,bd)) return 6;
	if (inName==HX_("BACK",27,a2,d1,2b)) return 7;
	if (inName==HX_("CHEAT",f3,ce,a4,c3)) return 9;
	if (inName==HX_("DOWN",62,c0,2e,2d)) return 3;
	if (inName==HX_("LEFT",07,d0,70,32)) return 1;
	if (inName==HX_("PAUSE",d6,0e,46,3b)) return 8;
	if (inName==HX_("RESET",af,81,b6,64)) return 5;
	if (inName==HX_("RIGHT",bc,43,52,67)) return 2;
	if (inName==HX_("SPACE",a6,c4,54,ff)) return 4;
	if (inName==HX_("UP",5b,4a,00,00)) return 0;
	return super::__FindIndex(inName);
}

int Control_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ACCEPT",08,3f,89,bd)) return 0;
	if (inName==HX_("BACK",27,a2,d1,2b)) return 0;
	if (inName==HX_("CHEAT",f3,ce,a4,c3)) return 0;
	if (inName==HX_("DOWN",62,c0,2e,2d)) return 0;
	if (inName==HX_("LEFT",07,d0,70,32)) return 0;
	if (inName==HX_("PAUSE",d6,0e,46,3b)) return 0;
	if (inName==HX_("RESET",af,81,b6,64)) return 0;
	if (inName==HX_("RIGHT",bc,43,52,67)) return 0;
	if (inName==HX_("SPACE",a6,c4,54,ff)) return 0;
	if (inName==HX_("UP",5b,4a,00,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Control_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ACCEPT",08,3f,89,bd)) return ACCEPT;
	if (inName==HX_("BACK",27,a2,d1,2b)) return BACK;
	if (inName==HX_("CHEAT",f3,ce,a4,c3)) return CHEAT;
	if (inName==HX_("DOWN",62,c0,2e,2d)) return DOWN;
	if (inName==HX_("LEFT",07,d0,70,32)) return LEFT;
	if (inName==HX_("PAUSE",d6,0e,46,3b)) return PAUSE;
	if (inName==HX_("RESET",af,81,b6,64)) return RESET;
	if (inName==HX_("RIGHT",bc,43,52,67)) return RIGHT;
	if (inName==HX_("SPACE",a6,c4,54,ff)) return SPACE;
	if (inName==HX_("UP",5b,4a,00,00)) return UP;
	return super::__Field(inName,inCallProp);
}

static ::String Control_obj_sStaticFields[] = {
	HX_("UP",5b,4a,00,00),
	HX_("LEFT",07,d0,70,32),
	HX_("RIGHT",bc,43,52,67),
	HX_("DOWN",62,c0,2e,2d),
	HX_("SPACE",a6,c4,54,ff),
	HX_("RESET",af,81,b6,64),
	HX_("ACCEPT",08,3f,89,bd),
	HX_("BACK",27,a2,d1,2b),
	HX_("PAUSE",d6,0e,46,3b),
	HX_("CHEAT",f3,ce,a4,c3),
	::String(null())
};

::hx::Class Control_obj::__mClass;

Dynamic __Create_Control_obj() { return new Control_obj; }

void Control_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("Control",3d,93,d2,e6), ::hx::TCanCast< Control_obj >,Control_obj_sStaticFields,0,
	&__Create_Control_obj, &__Create,
	&super::__SGetClass(), &CreateControl_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Control_obj::__GetStatic;
}

void Control_obj::__boot()
{
ACCEPT = ::hx::CreateConstEnum< Control_obj >(HX_("ACCEPT",08,3f,89,bd),6);
BACK = ::hx::CreateConstEnum< Control_obj >(HX_("BACK",27,a2,d1,2b),7);
CHEAT = ::hx::CreateConstEnum< Control_obj >(HX_("CHEAT",f3,ce,a4,c3),9);
DOWN = ::hx::CreateConstEnum< Control_obj >(HX_("DOWN",62,c0,2e,2d),3);
LEFT = ::hx::CreateConstEnum< Control_obj >(HX_("LEFT",07,d0,70,32),1);
PAUSE = ::hx::CreateConstEnum< Control_obj >(HX_("PAUSE",d6,0e,46,3b),8);
RESET = ::hx::CreateConstEnum< Control_obj >(HX_("RESET",af,81,b6,64),5);
RIGHT = ::hx::CreateConstEnum< Control_obj >(HX_("RIGHT",bc,43,52,67),2);
SPACE = ::hx::CreateConstEnum< Control_obj >(HX_("SPACE",a6,c4,54,ff),4);
UP = ::hx::CreateConstEnum< Control_obj >(HX_("UP",5b,4a,00,00),0);
}


