#include <hxcpp.h>

#ifndef INCLUDED_polymod_format_CSV
#include <polymod/format/CSV.h>
#endif
#ifndef INCLUDED_polymod_format_TSV
#include <polymod/format/TSV.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8da5906328a743fd_41_new,"polymod.format.TSV","new",0x578097aa,"polymod.format.TSV.new","polymod/format/TSV.hx",41,0xa6a05526)
HX_LOCAL_STACK_FRAME(_hx_pos_8da5906328a743fd_16_parse,"polymod.format.TSV","parse",0xceba3dfd,"polymod.format.TSV.parse","polymod/format/TSV.hx",16,0xa6a05526)
namespace polymod{
namespace format{

void TSV_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8da5906328a743fd_41_new)
HXDLIN(  41)		super::__construct();
            	}

Dynamic TSV_obj::__CreateEmpty() { return new TSV_obj; }

void *TSV_obj::_hx_vtable = 0;

Dynamic TSV_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TSV_obj > _hx_result = new TSV_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TSV_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37ab9499) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x37ab9499;
	} else {
		return inClassId==(int)0x37b87aea;
	}
}

 ::polymod::format::TSV TSV_obj::parse(::String input){
            	HX_GC_STACKFRAME(&_hx_pos_8da5906328a743fd_16_parse)
HXLINE(  17)		::String endline = HX_("\n",0a,00,00,00);
HXLINE(  18)		if ((input.indexOf(HX_("\r\n",5d,0b,00,00),null()) != -1)) {
HXLINE(  19)			endline = HX_("\r\n",5d,0b,00,00);
            		}
HXLINE(  20)		::Array< ::String > lines = input.split(endline);
HXLINE(  21)		::String fieldLine = ( (::String)(lines->shift()) );
HXLINE(  22)		::Array< ::String > fields = fieldLine.split(HX_("\t",09,00,00,00));
HXLINE(  23)		::Array< ::Dynamic> grid = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  24)		{
HXLINE(  24)			int _g = 0;
HXDLIN(  24)			while((_g < lines->length)){
HXLINE(  24)				::String line = lines->__get(_g);
HXDLIN(  24)				_g = (_g + 1);
HXLINE(  26)				while((line.charAt((line.length - 1)) == HX_("\t",09,00,00,00))){
HXLINE(  28)					line = line.substr(0,(line.length - 1));
            				}
HXLINE(  30)				::Array< ::String > cells = line.split(HX_("\t",09,00,00,00));
HXLINE(  31)				grid->push(cells);
            			}
            		}
HXLINE(  33)		 ::polymod::format::TSV tsv =  ::polymod::format::TSV_obj::__alloc( HX_CTX );
HXLINE(  34)		tsv->fields = fields;
HXLINE(  35)		tsv->grid = grid;
HXLINE(  36)		return tsv;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TSV_obj,parse,return )


::hx::ObjectPtr< TSV_obj > TSV_obj::__new() {
	::hx::ObjectPtr< TSV_obj > __this = new TSV_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TSV_obj > TSV_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TSV_obj *__this = (TSV_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TSV_obj), true, "polymod.format.TSV"));
	*(void **)__this = TSV_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TSV_obj::TSV_obj()
{
}

bool TSV_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TSV_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TSV_obj_sStaticStorageInfo = 0;
#endif

::hx::Class TSV_obj::__mClass;

static ::String TSV_obj_sStaticFields[] = {
	HX_("parse",33,90,55,bd),
	::String(null())
};

void TSV_obj::__register()
{
	TSV_obj _hx_dummy;
	TSV_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.format.TSV",b8,3a,e5,32);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TSV_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TSV_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TSV_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TSV_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TSV_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace format
