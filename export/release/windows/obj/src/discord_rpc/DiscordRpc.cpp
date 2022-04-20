#include <hxcpp.h>

#ifndef INCLUDED_0f6f533a2f6f9a23
#define INCLUDED_0f6f533a2f6f9a23
#include "linc_discord_rpc.h"
#endif
#ifndef INCLUDED_discord_rpc_DiscordRpc
#include <discord_rpc/DiscordRpc.h>
#endif
#ifndef INCLUDED_discord_rpc__DiscordRpc_DiscordRpc_Impl_
#include <discord_rpc/_DiscordRpc/DiscordRpc_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e073bb56c51b4de4_53_start,"discord_rpc.DiscordRpc","start",0xbad70749,"discord_rpc.DiscordRpc.start","discord_rpc/DiscordRpc.hx",53,0x60965528)
HX_LOCAL_STACK_FRAME(_hx_pos_e073bb56c51b4de4_68_process,"discord_rpc.DiscordRpc","process",0x204dfd16,"discord_rpc.DiscordRpc.process","discord_rpc/DiscordRpc.hx",68,0x60965528)
HX_LOCAL_STACK_FRAME(_hx_pos_e073bb56c51b4de4_78_respond,"discord_rpc.DiscordRpc","respond",0x970ee3fc,"discord_rpc.DiscordRpc.respond","discord_rpc/DiscordRpc.hx",78,0x60965528)
HX_LOCAL_STACK_FRAME(_hx_pos_e073bb56c51b4de4_87_presence,"discord_rpc.DiscordRpc","presence",0x5ac349b4,"discord_rpc.DiscordRpc.presence","discord_rpc/DiscordRpc.hx",87,0x60965528)
HX_LOCAL_STACK_FRAME(_hx_pos_e073bb56c51b4de4_102_shutdown,"discord_rpc.DiscordRpc","shutdown",0x5ef7f40f,"discord_rpc.DiscordRpc.shutdown","discord_rpc/DiscordRpc.hx",102,0x60965528)
namespace discord_rpc{

void DiscordRpc_obj::__construct() { }

Dynamic DiscordRpc_obj::__CreateEmpty() { return new DiscordRpc_obj; }

void *DiscordRpc_obj::_hx_vtable = 0;

Dynamic DiscordRpc_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DiscordRpc_obj > _hx_result = new DiscordRpc_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DiscordRpc_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x33678667;
}

 ::Dynamic DiscordRpc_obj::onReady;

 ::Dynamic DiscordRpc_obj::onDisconnected;

 ::Dynamic DiscordRpc_obj::onError;

 ::Dynamic DiscordRpc_obj::onJoin;

 ::Dynamic DiscordRpc_obj::onSpectate;

 ::Dynamic DiscordRpc_obj::onRequest;

void DiscordRpc_obj::start( ::Dynamic _options){
            	HX_STACKFRAME(&_hx_pos_e073bb56c51b4de4_53_start)
HXLINE(  54)		::discord_rpc::DiscordRpc_obj::onReady = _options->__Field(HX_("onReady",c4,3e,f8,7c),::hx::paccDynamic);
HXLINE(  55)		::discord_rpc::DiscordRpc_obj::onDisconnected = _options->__Field(HX_("onDisconnected",7a,eb,5a,b8),::hx::paccDynamic);
HXLINE(  56)		::discord_rpc::DiscordRpc_obj::onError = _options->__Field(HX_("onError",29,6a,67,09),::hx::paccDynamic);
HXLINE(  57)		::discord_rpc::DiscordRpc_obj::onJoin = _options->__Field(HX_("onJoin",a9,3c,ef,e8),::hx::paccDynamic);
HXLINE(  58)		::discord_rpc::DiscordRpc_obj::onSpectate = _options->__Field(HX_("onSpectate",18,ac,71,70),::hx::paccDynamic);
HXLINE(  59)		::discord_rpc::DiscordRpc_obj::onRequest = _options->__Field(HX_("onRequest",f0,97,2f,1c),::hx::paccDynamic);
HXLINE(  60)		{
HXLINE(  60)			::String _clientID = ( (::String)(_options->__Field(HX_("clientID",e6,72,8f,15),::hx::paccDynamic)) );
HXDLIN(  60)			::String _steamAppID = ( (::String)(_options->__Field(HX_("steamAppID",0c,9e,af,95),::hx::paccDynamic)) );
HXDLIN(  60)			::cpp::Function< void  () > _hx_tmp = ::cpp::Function< void ()>(::hx::AnyCast(&::discord_rpc::_DiscordRpc::DiscordRpc_Impl__obj::_onReady ));
HXDLIN(  60)			::cpp::Function< void  (int,const char*) > _hx_tmp1 = ::cpp::Function< void (int,const char*)>(::hx::AnyCast(&::discord_rpc::_DiscordRpc::DiscordRpc_Impl__obj::_onDisconnected ));
HXDLIN(  60)			::cpp::Function< void  (int,const char*) > _hx_tmp2 = ::cpp::Function< void (int,const char*)>(::hx::AnyCast(&::discord_rpc::_DiscordRpc::DiscordRpc_Impl__obj::_onError ));
HXDLIN(  60)			::cpp::Function< void  (const char*) > _hx_tmp3 = ::cpp::Function< void (const char*)>(::hx::AnyCast(&::discord_rpc::_DiscordRpc::DiscordRpc_Impl__obj::_onJoin ));
HXDLIN(  60)			::cpp::Function< void  (const char*) > _hx_tmp4 = ::cpp::Function< void (const char*)>(::hx::AnyCast(&::discord_rpc::_DiscordRpc::DiscordRpc_Impl__obj::_onSpectate ));
HXDLIN(  60)			linc::discord_rpc::init(_clientID,_steamAppID,_hx_tmp,_hx_tmp1,_hx_tmp2,_hx_tmp3,_hx_tmp4,::cpp::Function< void (const  DiscordJoinRequest*)>(::hx::AnyCast(&::discord_rpc::_DiscordRpc::DiscordRpc_Impl__obj::_onRequest )));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DiscordRpc_obj,start,(void))

void DiscordRpc_obj::process(){
            	HX_STACKFRAME(&_hx_pos_e073bb56c51b4de4_68_process)
HXDLIN(  68)		linc::discord_rpc::process();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DiscordRpc_obj,process,(void))

void DiscordRpc_obj::respond(::String _userID,int _response){
            	HX_STACKFRAME(&_hx_pos_e073bb56c51b4de4_78_respond)
HXDLIN(  78)		linc::discord_rpc::respond(_userID,_response);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DiscordRpc_obj,respond,(void))

void DiscordRpc_obj::presence( ::Dynamic _options){
            	HX_STACKFRAME(&_hx_pos_e073bb56c51b4de4_87_presence)
HXDLIN(  87)		linc::discord_rpc::update_presence(( (::String)(_options->__Field(HX_("state",11,76,0b,84),::hx::paccDynamic)) ),( (::String)(_options->__Field(HX_("details",c2,dc,56,ab),::hx::paccDynamic)) ),( (::cpp::Int64)(_options->__Field(HX_("startTimestamp",14,a4,09,c5),::hx::paccDynamic)) ),( (::cpp::Int64)(_options->__Field(HX_("endTimestamp",7b,dd,d0,b4),::hx::paccDynamic)) ),( (::String)(_options->__Field(HX_("largeImageKey",df,8f,e3,ae),::hx::paccDynamic)) ),( (::String)(_options->__Field(HX_("largeImageText",6d,3e,2d,5e),::hx::paccDynamic)) ),( (::String)(_options->__Field(HX_("smallImageKey",eb,38,69,a3),::hx::paccDynamic)) ),( (::String)(_options->__Field(HX_("smallImageText",e1,7f,9b,5e),::hx::paccDynamic)) ),( (::String)(_options->__Field(HX_("partyID",81,e6,b8,ea),::hx::paccDynamic)) ),( (int)(_options->__Field(HX_("partySize",07,e9,58,be),::hx::paccDynamic)) ),( (int)(_options->__Field(HX_("partyMax",1e,ed,13,77),::hx::paccDynamic)) ),( (::String)(_options->__Field(HX_("matchSecret",95,8d,67,ec),::hx::paccDynamic)) ),( (::String)(_options->__Field(HX_("joinSecret",fa,81,4a,02),::hx::paccDynamic)) ),( (::String)(_options->__Field(HX_("spectateSecret",29,43,86,b9),::hx::paccDynamic)) ),( (signed char)(_options->__Field(HX_("instance",95,1f,e1,59),::hx::paccDynamic)) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DiscordRpc_obj,presence,(void))

void DiscordRpc_obj::shutdown(){
            	HX_STACKFRAME(&_hx_pos_e073bb56c51b4de4_102_shutdown)
HXDLIN( 102)		linc::discord_rpc::shutdown();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DiscordRpc_obj,shutdown,(void))


DiscordRpc_obj::DiscordRpc_obj()
{
}

bool DiscordRpc_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { outValue = start_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onJoin") ) { outValue = ( onJoin ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onReady") ) { outValue = ( onReady ); return true; }
		if (HX_FIELD_EQ(inName,"onError") ) { outValue = ( onError ); return true; }
		if (HX_FIELD_EQ(inName,"process") ) { outValue = process_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"respond") ) { outValue = respond_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"presence") ) { outValue = presence_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"shutdown") ) { outValue = shutdown_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onSpectate") ) { outValue = ( onSpectate ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onDisconnected") ) { outValue = ( onDisconnected ); return true; }
	}
	return false;
}

bool DiscordRpc_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onJoin") ) { onJoin=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onReady") ) { onReady=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"onError") ) { onError=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onSpectate") ) { onSpectate=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onDisconnected") ) { onDisconnected=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DiscordRpc_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo DiscordRpc_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &DiscordRpc_obj::onReady,HX_("onReady",c4,3e,f8,7c)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &DiscordRpc_obj::onDisconnected,HX_("onDisconnected",7a,eb,5a,b8)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &DiscordRpc_obj::onError,HX_("onError",29,6a,67,09)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &DiscordRpc_obj::onJoin,HX_("onJoin",a9,3c,ef,e8)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &DiscordRpc_obj::onSpectate,HX_("onSpectate",18,ac,71,70)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &DiscordRpc_obj::onRequest,HX_("onRequest",f0,97,2f,1c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void DiscordRpc_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DiscordRpc_obj::onReady,"onReady");
	HX_MARK_MEMBER_NAME(DiscordRpc_obj::onDisconnected,"onDisconnected");
	HX_MARK_MEMBER_NAME(DiscordRpc_obj::onError,"onError");
	HX_MARK_MEMBER_NAME(DiscordRpc_obj::onJoin,"onJoin");
	HX_MARK_MEMBER_NAME(DiscordRpc_obj::onSpectate,"onSpectate");
	HX_MARK_MEMBER_NAME(DiscordRpc_obj::onRequest,"onRequest");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DiscordRpc_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DiscordRpc_obj::onReady,"onReady");
	HX_VISIT_MEMBER_NAME(DiscordRpc_obj::onDisconnected,"onDisconnected");
	HX_VISIT_MEMBER_NAME(DiscordRpc_obj::onError,"onError");
	HX_VISIT_MEMBER_NAME(DiscordRpc_obj::onJoin,"onJoin");
	HX_VISIT_MEMBER_NAME(DiscordRpc_obj::onSpectate,"onSpectate");
	HX_VISIT_MEMBER_NAME(DiscordRpc_obj::onRequest,"onRequest");
};

#endif

::hx::Class DiscordRpc_obj::__mClass;

static ::String DiscordRpc_obj_sStaticFields[] = {
	HX_("onReady",c4,3e,f8,7c),
	HX_("onDisconnected",7a,eb,5a,b8),
	HX_("onError",29,6a,67,09),
	HX_("onJoin",a9,3c,ef,e8),
	HX_("onSpectate",18,ac,71,70),
	HX_("start",62,74,0b,84),
	HX_("process",6f,a2,4a,f1),
	HX_("respond",55,89,0b,68),
	HX_("presence",3b,52,d7,66),
	HX_("shutdown",96,fc,0b,6b),
	::String(null())
};

void DiscordRpc_obj::__register()
{
	DiscordRpc_obj _hx_dummy;
	DiscordRpc_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("discord_rpc.DiscordRpc",15,3c,89,d4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DiscordRpc_obj::__GetStatic;
	__mClass->mSetStaticField = &DiscordRpc_obj::__SetStatic;
	__mClass->mMarkFunc = DiscordRpc_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DiscordRpc_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DiscordRpc_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DiscordRpc_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DiscordRpc_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DiscordRpc_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace discord_rpc
