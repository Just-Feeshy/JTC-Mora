#ifndef INCLUDED_polymod_format_JsonHelp
#define INCLUDED_polymod_format_JsonHelp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(polymod,format,JsonHelp)

namespace polymod{
namespace format{


class HXCPP_CLASS_ATTRIBUTES JsonHelp_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef JsonHelp_obj OBJ_;
		JsonHelp_obj();

	public:
		enum { _hx_ClassId = 0x626a4b56 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="polymod.format.JsonHelp")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"polymod.format.JsonHelp"); }

		inline static ::hx::ObjectPtr< JsonHelp_obj > __new() {
			::hx::ObjectPtr< JsonHelp_obj > __this = new JsonHelp_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< JsonHelp_obj > __alloc(::hx::Ctx *_hx_ctx) {
			JsonHelp_obj *__this = (JsonHelp_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(JsonHelp_obj), false, "polymod.format.JsonHelp"));
			*(void **)__this = JsonHelp_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~JsonHelp_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("JsonHelp",29,91,4e,1e); }

		static bool _hx_bool( ::Dynamic json,::String field,::hx::Null< bool >  defaultValue);
		static ::Dynamic _hx_bool_dyn();

		static int _hx_int( ::Dynamic json,::String field,::hx::Null< int >  defaultValue);
		static ::Dynamic _hx_int_dyn();

		static Float _hx_float( ::Dynamic json,::String field,::hx::Null< Float >  defaultValue);
		static ::Dynamic _hx_float_dyn();

		static  ::haxe::ds::StringMap mapStr( ::Dynamic json,::String field);
		static ::Dynamic mapStr_dyn();

		static ::String str( ::Dynamic json,::String field,::String defaultValue);
		static ::Dynamic str_dyn();

		static  ::Dynamic type( ::Dynamic json,::String field, ::Dynamic defaultValue);
		static ::Dynamic type_dyn();

		static ::cpp::VirtualArray arrType( ::Dynamic json,::String field,::cpp::VirtualArray defaultValue);
		static ::Dynamic arrType_dyn();

		static ::Array< ::String > arrStr( ::Dynamic json,::String field,::Array< ::String > defaultValue);
		static ::Dynamic arrStr_dyn();

};

} // end namespace polymod
} // end namespace format

#endif /* INCLUDED_polymod_format_JsonHelp */ 
