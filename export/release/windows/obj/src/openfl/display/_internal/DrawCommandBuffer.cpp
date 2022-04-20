#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandType
#include <openfl/display/_internal/DrawCommandType.h>
#endif
#ifndef INCLUDED_openfl_display__internal_ShaderBuffer
#include <openfl/display/_internal/ShaderBuffer.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fae278bbae08f83e_38_new,"openfl.display._internal.DrawCommandBuffer","new",0xbf07e5fd,"openfl.display._internal.DrawCommandBuffer.new","openfl/display/_internal/DrawCommandBuffer.hx",38,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_58_append,"openfl.display._internal.DrawCommandBuffer","append",0x42e16c5d,"openfl.display._internal.DrawCommandBuffer.append","openfl/display/_internal/DrawCommandBuffer.hx",58,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_151_beginBitmapFill,"openfl.display._internal.DrawCommandBuffer","beginBitmapFill",0xf81456b8,"openfl.display._internal.DrawCommandBuffer.beginBitmapFill","openfl/display/_internal/DrawCommandBuffer.hx",151,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_162_beginFill,"openfl.display._internal.DrawCommandBuffer","beginFill",0x0db156a9,"openfl.display._internal.DrawCommandBuffer.beginFill","openfl/display/_internal/DrawCommandBuffer.hx",162,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_172_beginGradientFill,"openfl.display._internal.DrawCommandBuffer","beginGradientFill",0xc2230ab9,"openfl.display._internal.DrawCommandBuffer.beginGradientFill","openfl/display/_internal/DrawCommandBuffer.hx",172,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_187_beginShaderFill,"openfl.display._internal.DrawCommandBuffer","beginShaderFill",0xf54fd8ee,"openfl.display._internal.DrawCommandBuffer.beginShaderFill","openfl/display/_internal/DrawCommandBuffer.hx",187,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_195_clear,"openfl.display._internal.DrawCommandBuffer","clear",0x2c75e86a,"openfl.display._internal.DrawCommandBuffer.clear","openfl/display/_internal/DrawCommandBuffer.hx",195,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_209_copy,"openfl.display._internal.DrawCommandBuffer","copy",0x60a38f78,"openfl.display._internal.DrawCommandBuffer.copy","openfl/display/_internal/DrawCommandBuffer.hx",209,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_216_cubicCurveTo,"openfl.display._internal.DrawCommandBuffer","cubicCurveTo",0x02dcd6a3,"openfl.display._internal.DrawCommandBuffer.cubicCurveTo","openfl/display/_internal/DrawCommandBuffer.hx",216,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_229_curveTo,"openfl.display._internal.DrawCommandBuffer","curveTo",0xc7540827,"openfl.display._internal.DrawCommandBuffer.curveTo","openfl/display/_internal/DrawCommandBuffer.hx",229,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_240_destroy,"openfl.display._internal.DrawCommandBuffer","destroy",0x1d51d517,"openfl.display._internal.DrawCommandBuffer.destroy","openfl/display/_internal/DrawCommandBuffer.hx",240,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_254_drawCircle,"openfl.display._internal.DrawCommandBuffer","drawCircle",0x0ee97537,"openfl.display._internal.DrawCommandBuffer.drawCircle","openfl/display/_internal/DrawCommandBuffer.hx",254,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_264_drawEllipse,"openfl.display._internal.DrawCommandBuffer","drawEllipse",0x132cffd7,"openfl.display._internal.DrawCommandBuffer.drawEllipse","openfl/display/_internal/DrawCommandBuffer.hx",264,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_275_drawQuads,"openfl.display._internal.DrawCommandBuffer","drawQuads",0xa70e5485,"openfl.display._internal.DrawCommandBuffer.drawQuads","openfl/display/_internal/DrawCommandBuffer.hx",275,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_285_drawRect,"openfl.display._internal.DrawCommandBuffer","drawRect",0x1978688b,"openfl.display._internal.DrawCommandBuffer.drawRect","openfl/display/_internal/DrawCommandBuffer.hx",285,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_296_drawRoundRect,"openfl.display._internal.DrawCommandBuffer","drawRoundRect",0xd192dfcb,"openfl.display._internal.DrawCommandBuffer.drawRoundRect","openfl/display/_internal/DrawCommandBuffer.hx",296,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_309_drawTriangles,"openfl.display._internal.DrawCommandBuffer","drawTriangles",0xcd505fe4,"openfl.display._internal.DrawCommandBuffer.drawTriangles","openfl/display/_internal/DrawCommandBuffer.hx",309,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_320_endFill,"openfl.display._internal.DrawCommandBuffer","endFill",0x1eac301b,"openfl.display._internal.DrawCommandBuffer.endFill","openfl/display/_internal/DrawCommandBuffer.hx",320,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_327_lineBitmapStyle,"openfl.display._internal.DrawCommandBuffer","lineBitmapStyle",0xd32dcc4b,"openfl.display._internal.DrawCommandBuffer.lineBitmapStyle","openfl/display/_internal/DrawCommandBuffer.hx",327,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_339_lineGradientStyle,"openfl.display._internal.DrawCommandBuffer","lineGradientStyle",0x5611f2ea,"openfl.display._internal.DrawCommandBuffer.lineGradientStyle","openfl/display/_internal/DrawCommandBuffer.hx",339,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_355_lineStyle,"openfl.display._internal.DrawCommandBuffer","lineStyle",0x4c3451fa,"openfl.display._internal.DrawCommandBuffer.lineStyle","openfl/display/_internal/DrawCommandBuffer.hx",355,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_370_lineTo,"openfl.display._internal.DrawCommandBuffer","lineTo",0x9fadd112,"openfl.display._internal.DrawCommandBuffer.lineTo","openfl/display/_internal/DrawCommandBuffer.hx",370,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_379_moveTo,"openfl.display._internal.DrawCommandBuffer","moveTo",0x7fba5d6f,"openfl.display._internal.DrawCommandBuffer.moveTo","openfl/display/_internal/DrawCommandBuffer.hx",379,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_389_prepareWrite,"openfl.display._internal.DrawCommandBuffer","prepareWrite",0x1856309b,"openfl.display._internal.DrawCommandBuffer.prepareWrite","openfl/display/_internal/DrawCommandBuffer.hx",389,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_404_overrideBlendMode,"openfl.display._internal.DrawCommandBuffer","overrideBlendMode",0x8e09c6c5,"openfl.display._internal.DrawCommandBuffer.overrideBlendMode","openfl/display/_internal/DrawCommandBuffer.hx",404,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_412_overrideMatrix,"openfl.display._internal.DrawCommandBuffer","overrideMatrix",0xd5d9d330,"openfl.display._internal.DrawCommandBuffer.overrideMatrix","openfl/display/_internal/DrawCommandBuffer.hx",412,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_420_windingEvenOdd,"openfl.display._internal.DrawCommandBuffer","windingEvenOdd",0x273aa23e,"openfl.display._internal.DrawCommandBuffer.windingEvenOdd","openfl/display/_internal/DrawCommandBuffer.hx",420,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_427_windingNonZero,"openfl.display._internal.DrawCommandBuffer","windingNonZero",0xf26ffa5e,"openfl.display._internal.DrawCommandBuffer.windingNonZero","openfl/display/_internal/DrawCommandBuffer.hx",427,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_436_get_length,"openfl.display._internal.DrawCommandBuffer","get_length",0x06a78cb2,"openfl.display._internal.DrawCommandBuffer.get_length","openfl/display/_internal/DrawCommandBuffer.hx",436,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_21_boot,"openfl.display._internal.DrawCommandBuffer","boot",0x5ffa57f5,"openfl.display._internal.DrawCommandBuffer.boot","openfl/display/_internal/DrawCommandBuffer.hx",21,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_23_boot,"openfl.display._internal.DrawCommandBuffer","boot",0x5ffa57f5,"openfl.display._internal.DrawCommandBuffer.boot","openfl/display/_internal/DrawCommandBuffer.hx",23,0x2aaa1b16)
namespace openfl{
namespace display{
namespace _internal{

void DrawCommandBuffer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_38_new)
HXDLIN(  38)		if (::hx::IsNull( ::openfl::display::_internal::DrawCommandBuffer_obj::empty )) {
HXLINE(  40)			this->types = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  42)			this->b = ::Array_obj< bool >::__new(0);
HXLINE(  43)			this->i = ::Array_obj< int >::__new(0);
HXLINE(  44)			this->f = ::Array_obj< Float >::__new(0);
HXLINE(  45)			this->o = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  46)			this->ff = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  47)			this->ii = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  49)			this->copyOnWrite = true;
            		}
            		else {
HXLINE(  53)			this->clear();
            		}
            	}

Dynamic DrawCommandBuffer_obj::__CreateEmpty() { return new DrawCommandBuffer_obj; }

void *DrawCommandBuffer_obj::_hx_vtable = 0;

Dynamic DrawCommandBuffer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DrawCommandBuffer_obj > _hx_result = new DrawCommandBuffer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DrawCommandBuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x04a7ef7d;
}

 ::openfl::display::_internal::DrawCommandBuffer DrawCommandBuffer_obj::append( ::openfl::display::_internal::DrawCommandBuffer other){
            	HX_GC_STACKFRAME(&_hx_pos_fae278bbae08f83e_58_append)
HXLINE(  59)		if ((this->get_length() == 0)) {
HXLINE(  61)			this->types = other->types;
HXLINE(  62)			this->b = other->b;
HXLINE(  63)			this->i = other->i;
HXLINE(  64)			this->f = other->f;
HXLINE(  65)			this->o = other->o;
HXLINE(  66)			this->ff = other->ff;
HXLINE(  67)			this->ii = other->ii;
HXLINE(  68)			this->copyOnWrite = (other->copyOnWrite = true);
HXLINE(  70)			return other;
            		}
HXLINE(  73)		 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,other);
HXLINE(  75)		{
HXLINE(  75)			int _g = 0;
HXDLIN(  75)			::Array< ::Dynamic> _g1 = other->types;
HXDLIN(  75)			while((_g < _g1->length)){
HXLINE(  75)				 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN(  75)				_g = (_g + 1);
HXLINE(  77)				switch((int)(type->_hx_getIndex())){
            					case (int)0: {
HXLINE(  80)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(  80)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  80)								data1->oPos = (data1->oPos + 2);
HXDLIN(  80)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  80)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(  80)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  80)								data1->iPos = (data1->iPos + 1);
HXDLIN(  80)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  80)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(  80)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  80)								data1->oPos = (data1->oPos + 4);
HXDLIN(  80)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  80)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  80)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  80)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  80)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  80)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(  80)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  80)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(  80)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  80)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(  80)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  80)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(  80)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  80)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(  80)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  80)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(  80)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  80)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(  80)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  80)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(  80)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  80)								data1->fPos = (data1->fPos + 5);
HXDLIN(  80)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  80)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(  80)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  80)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(  80)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  80)								data1->oPos = (data1->oPos + 2);
HXDLIN(  80)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  80)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(  80)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  80)								data1->oPos = (data1->oPos + 4);
HXDLIN(  80)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  80)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  80)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  80)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  80)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  80)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(  80)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  80)								data1->oPos = (data1->oPos + 4);
HXDLIN(  80)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  80)								data2->iPos = (data2->iPos + 1);
HXDLIN(  80)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  80)								data3->fPos = (data3->fPos + 2);
HXDLIN(  80)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  80)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(  80)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  80)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(  80)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  80)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(  80)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  80)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(  80)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  80)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(  80)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN(  80)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  80)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(  81)						this->beginBitmapFill(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
            					}
            					break;
            					case (int)1: {
HXLINE(  83)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(  83)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  83)								data1->oPos = (data1->oPos + 2);
HXDLIN(  83)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  83)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(  83)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  83)								data1->iPos = (data1->iPos + 1);
HXDLIN(  83)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  83)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(  83)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  83)								data1->oPos = (data1->oPos + 4);
HXDLIN(  83)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  83)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  83)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  83)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  83)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  83)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(  83)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  83)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(  83)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  83)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(  83)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  83)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(  83)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  83)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(  83)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  83)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(  83)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  83)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(  83)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  83)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(  83)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  83)								data1->fPos = (data1->fPos + 5);
HXDLIN(  83)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  83)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(  83)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  83)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(  83)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  83)								data1->oPos = (data1->oPos + 2);
HXDLIN(  83)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  83)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(  83)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  83)								data1->oPos = (data1->oPos + 4);
HXDLIN(  83)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  83)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  83)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  83)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  83)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  83)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(  83)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  83)								data1->oPos = (data1->oPos + 4);
HXDLIN(  83)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  83)								data2->iPos = (data2->iPos + 1);
HXDLIN(  83)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  83)								data3->fPos = (data3->fPos + 2);
HXDLIN(  83)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  83)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(  83)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  83)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(  83)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  83)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(  83)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  83)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(  83)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  83)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(  83)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn();
HXDLIN(  83)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  83)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(  84)						this->beginFill(c->buffer->i->__get(c->iPos),c->buffer->f->__get(c->fPos));
            					}
            					break;
            					case (int)2: {
HXLINE(  86)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(  86)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  86)								data1->oPos = (data1->oPos + 2);
HXDLIN(  86)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  86)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(  86)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  86)								data1->iPos = (data1->iPos + 1);
HXDLIN(  86)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  86)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(  86)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  86)								data1->oPos = (data1->oPos + 4);
HXDLIN(  86)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  86)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  86)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  86)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  86)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  86)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(  86)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  86)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(  86)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  86)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(  86)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  86)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(  86)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  86)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(  86)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  86)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(  86)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  86)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(  86)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  86)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(  86)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  86)								data1->fPos = (data1->fPos + 5);
HXDLIN(  86)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  86)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(  86)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  86)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(  86)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  86)								data1->oPos = (data1->oPos + 2);
HXDLIN(  86)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  86)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(  86)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  86)								data1->oPos = (data1->oPos + 4);
HXDLIN(  86)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  86)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  86)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  86)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  86)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  86)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(  86)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  86)								data1->oPos = (data1->oPos + 4);
HXDLIN(  86)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  86)								data2->iPos = (data2->iPos + 1);
HXDLIN(  86)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  86)								data3->fPos = (data3->fPos + 2);
HXDLIN(  86)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  86)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(  86)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  86)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(  86)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  86)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(  86)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  86)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(  86)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  86)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(  86)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn();
HXDLIN(  86)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  86)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(  87)						this->beginGradientFill(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
            					}
            					break;
            					case (int)3: {
HXLINE(  89)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(  89)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  89)								data1->oPos = (data1->oPos + 2);
HXDLIN(  89)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  89)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(  89)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  89)								data1->iPos = (data1->iPos + 1);
HXDLIN(  89)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  89)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(  89)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  89)								data1->oPos = (data1->oPos + 4);
HXDLIN(  89)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  89)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  89)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  89)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  89)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  89)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(  89)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  89)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(  89)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  89)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(  89)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  89)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(  89)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  89)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(  89)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  89)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(  89)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  89)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(  89)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  89)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(  89)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  89)								data1->fPos = (data1->fPos + 5);
HXDLIN(  89)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  89)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(  89)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  89)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(  89)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  89)								data1->oPos = (data1->oPos + 2);
HXDLIN(  89)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  89)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(  89)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  89)								data1->oPos = (data1->oPos + 4);
HXDLIN(  89)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  89)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  89)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  89)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  89)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  89)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(  89)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  89)								data1->oPos = (data1->oPos + 4);
HXDLIN(  89)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  89)								data2->iPos = (data2->iPos + 1);
HXDLIN(  89)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  89)								data3->fPos = (data3->fPos + 2);
HXDLIN(  89)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  89)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(  89)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  89)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(  89)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  89)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(  89)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  89)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(  89)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  89)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(  89)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXDLIN(  89)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  89)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(  90)						this->beginShaderFill(( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) ));
            					}
            					break;
            					case (int)4: {
HXLINE(  92)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(  92)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)								data1->oPos = (data1->oPos + 2);
HXDLIN(  92)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  92)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(  92)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)								data1->iPos = (data1->iPos + 1);
HXDLIN(  92)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  92)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(  92)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)								data1->oPos = (data1->oPos + 4);
HXDLIN(  92)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  92)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  92)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  92)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  92)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  92)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(  92)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(  92)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(  92)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(  92)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(  92)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(  92)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(  92)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(  92)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)								data1->fPos = (data1->fPos + 5);
HXDLIN(  92)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  92)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(  92)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(  92)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)								data1->oPos = (data1->oPos + 2);
HXDLIN(  92)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  92)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(  92)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)								data1->oPos = (data1->oPos + 4);
HXDLIN(  92)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  92)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  92)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  92)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  92)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  92)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(  92)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)								data1->oPos = (data1->oPos + 4);
HXDLIN(  92)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  92)								data2->iPos = (data2->iPos + 1);
HXDLIN(  92)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  92)								data3->fPos = (data3->fPos + 2);
HXDLIN(  92)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  92)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(  92)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(  92)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(  92)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(  92)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  92)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(  92)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn();
HXDLIN(  92)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  92)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(  93)						this->cubicCurveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->f->__get((c->fPos + 5)));
            					}
            					break;
            					case (int)5: {
HXLINE(  95)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(  95)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  95)								data1->oPos = (data1->oPos + 2);
HXDLIN(  95)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  95)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(  95)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  95)								data1->iPos = (data1->iPos + 1);
HXDLIN(  95)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  95)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(  95)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  95)								data1->oPos = (data1->oPos + 4);
HXDLIN(  95)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  95)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  95)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  95)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  95)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  95)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(  95)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  95)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(  95)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  95)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(  95)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  95)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(  95)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  95)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(  95)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  95)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(  95)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  95)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(  95)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  95)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(  95)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  95)								data1->fPos = (data1->fPos + 5);
HXDLIN(  95)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  95)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(  95)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  95)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(  95)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  95)								data1->oPos = (data1->oPos + 2);
HXDLIN(  95)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  95)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(  95)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  95)								data1->oPos = (data1->oPos + 4);
HXDLIN(  95)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  95)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  95)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  95)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  95)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  95)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(  95)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  95)								data1->oPos = (data1->oPos + 4);
HXDLIN(  95)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  95)								data2->iPos = (data2->iPos + 1);
HXDLIN(  95)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  95)								data3->fPos = (data3->fPos + 2);
HXDLIN(  95)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  95)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(  95)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  95)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(  95)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  95)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(  95)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  95)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(  95)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  95)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(  95)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn();
HXDLIN(  95)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  95)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(  96)						this->curveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            					}
            					break;
            					case (int)6: {
HXLINE(  98)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(  98)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  98)								data1->oPos = (data1->oPos + 2);
HXDLIN(  98)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  98)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(  98)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  98)								data1->iPos = (data1->iPos + 1);
HXDLIN(  98)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  98)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(  98)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  98)								data1->oPos = (data1->oPos + 4);
HXDLIN(  98)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  98)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  98)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  98)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  98)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  98)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(  98)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  98)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(  98)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  98)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(  98)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  98)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(  98)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  98)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(  98)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  98)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(  98)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  98)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(  98)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  98)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(  98)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  98)								data1->fPos = (data1->fPos + 5);
HXDLIN(  98)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  98)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(  98)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  98)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(  98)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  98)								data1->oPos = (data1->oPos + 2);
HXDLIN(  98)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  98)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(  98)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  98)								data1->oPos = (data1->oPos + 4);
HXDLIN(  98)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  98)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  98)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  98)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  98)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  98)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(  98)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  98)								data1->oPos = (data1->oPos + 4);
HXDLIN(  98)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  98)								data2->iPos = (data2->iPos + 1);
HXDLIN(  98)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  98)								data3->fPos = (data3->fPos + 2);
HXDLIN(  98)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  98)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(  98)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  98)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(  98)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  98)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(  98)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  98)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(  98)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  98)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(  98)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn();
HXDLIN(  98)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  98)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(  99)						this->drawCircle(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)));
            					}
            					break;
            					case (int)7: {
HXLINE( 101)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 101)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 101)								data1->oPos = (data1->oPos + 2);
HXDLIN( 101)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 101)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 101)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 101)								data1->iPos = (data1->iPos + 1);
HXDLIN( 101)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 101)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 101)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 101)								data1->oPos = (data1->oPos + 4);
HXDLIN( 101)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 101)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 101)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 101)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 101)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 101)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 101)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 101)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 101)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 101)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 101)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 101)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 101)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 101)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 101)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 101)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 101)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 101)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 101)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 101)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 101)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 101)								data1->fPos = (data1->fPos + 5);
HXDLIN( 101)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 101)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 101)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 101)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 101)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 101)								data1->oPos = (data1->oPos + 2);
HXDLIN( 101)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 101)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 101)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 101)								data1->oPos = (data1->oPos + 4);
HXDLIN( 101)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 101)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 101)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 101)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 101)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 101)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 101)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 101)								data1->oPos = (data1->oPos + 4);
HXDLIN( 101)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 101)								data2->iPos = (data2->iPos + 1);
HXDLIN( 101)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 101)								data3->fPos = (data3->fPos + 2);
HXDLIN( 101)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 101)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 101)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 101)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 101)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 101)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 101)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 101)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 101)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 101)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 101)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn();
HXDLIN( 101)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 101)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 102)						this->drawEllipse(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            					}
            					break;
            					case (int)8: {
HXLINE( 104)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 104)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 104)								data1->oPos = (data1->oPos + 2);
HXDLIN( 104)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 104)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 104)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 104)								data1->iPos = (data1->iPos + 1);
HXDLIN( 104)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 104)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 104)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 104)								data1->oPos = (data1->oPos + 4);
HXDLIN( 104)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 104)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 104)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 104)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 104)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 104)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 104)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 104)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 104)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 104)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 104)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 104)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 104)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 104)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 104)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 104)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 104)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 104)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 104)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 104)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 104)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 104)								data1->fPos = (data1->fPos + 5);
HXDLIN( 104)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 104)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 104)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 104)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 104)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 104)								data1->oPos = (data1->oPos + 2);
HXDLIN( 104)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 104)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 104)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 104)								data1->oPos = (data1->oPos + 4);
HXDLIN( 104)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 104)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 104)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 104)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 104)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 104)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 104)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 104)								data1->oPos = (data1->oPos + 4);
HXDLIN( 104)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 104)								data2->iPos = (data2->iPos + 1);
HXDLIN( 104)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 104)								data3->fPos = (data3->fPos + 2);
HXDLIN( 104)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 104)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 104)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 104)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 104)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 104)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 104)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 104)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 104)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 104)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 104)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_QUADS_dyn();
HXDLIN( 104)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 104)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 105)						this->drawQuads(( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) ),( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) ));
            					}
            					break;
            					case (int)9: {
HXLINE( 107)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 107)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 107)								data1->oPos = (data1->oPos + 2);
HXDLIN( 107)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 107)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 107)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 107)								data1->iPos = (data1->iPos + 1);
HXDLIN( 107)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 107)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 107)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 107)								data1->oPos = (data1->oPos + 4);
HXDLIN( 107)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 107)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 107)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 107)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 107)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 107)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 107)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 107)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 107)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 107)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 107)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 107)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 107)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 107)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 107)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 107)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 107)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 107)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 107)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 107)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 107)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 107)								data1->fPos = (data1->fPos + 5);
HXDLIN( 107)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 107)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 107)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 107)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 107)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 107)								data1->oPos = (data1->oPos + 2);
HXDLIN( 107)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 107)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 107)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 107)								data1->oPos = (data1->oPos + 4);
HXDLIN( 107)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 107)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 107)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 107)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 107)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 107)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 107)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 107)								data1->oPos = (data1->oPos + 4);
HXDLIN( 107)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 107)								data2->iPos = (data2->iPos + 1);
HXDLIN( 107)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 107)								data3->fPos = (data3->fPos + 2);
HXDLIN( 107)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 107)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 107)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 107)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 107)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 107)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 107)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 107)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 107)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 107)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 107)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN( 107)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 107)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 108)						this->drawRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            					}
            					break;
            					case (int)10: {
HXLINE( 110)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 110)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 110)								data1->oPos = (data1->oPos + 2);
HXDLIN( 110)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 110)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 110)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 110)								data1->iPos = (data1->iPos + 1);
HXDLIN( 110)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 110)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 110)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 110)								data1->oPos = (data1->oPos + 4);
HXDLIN( 110)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 110)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 110)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 110)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 110)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 110)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 110)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 110)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 110)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 110)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 110)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 110)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 110)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 110)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 110)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 110)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 110)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 110)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 110)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 110)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 110)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 110)								data1->fPos = (data1->fPos + 5);
HXDLIN( 110)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 110)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 110)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 110)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 110)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 110)								data1->oPos = (data1->oPos + 2);
HXDLIN( 110)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 110)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 110)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 110)								data1->oPos = (data1->oPos + 4);
HXDLIN( 110)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 110)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 110)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 110)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 110)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 110)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 110)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 110)								data1->oPos = (data1->oPos + 4);
HXDLIN( 110)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 110)								data2->iPos = (data2->iPos + 1);
HXDLIN( 110)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 110)								data3->fPos = (data3->fPos + 2);
HXDLIN( 110)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 110)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 110)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 110)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 110)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 110)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 110)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 110)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 110)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 110)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 110)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn();
HXDLIN( 110)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 110)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 111)						this->drawRoundRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
            					}
            					break;
            					case (int)12: {
HXLINE( 113)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 113)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 113)								data1->oPos = (data1->oPos + 2);
HXDLIN( 113)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 113)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 113)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 113)								data1->iPos = (data1->iPos + 1);
HXDLIN( 113)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 113)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 113)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 113)								data1->oPos = (data1->oPos + 4);
HXDLIN( 113)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 113)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 113)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 113)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 113)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 113)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 113)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 113)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 113)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 113)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 113)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 113)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 113)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 113)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 113)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 113)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 113)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 113)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 113)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 113)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 113)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 113)								data1->fPos = (data1->fPos + 5);
HXDLIN( 113)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 113)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 113)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 113)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 113)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 113)								data1->oPos = (data1->oPos + 2);
HXDLIN( 113)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 113)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 113)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 113)								data1->oPos = (data1->oPos + 4);
HXDLIN( 113)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 113)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 113)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 113)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 113)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 113)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 113)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 113)								data1->oPos = (data1->oPos + 4);
HXDLIN( 113)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 113)								data2->iPos = (data2->iPos + 1);
HXDLIN( 113)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 113)								data3->fPos = (data3->fPos + 2);
HXDLIN( 113)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 113)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 113)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 113)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 113)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 113)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 113)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 113)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 113)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 113)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 113)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_TRIANGLES_dyn();
HXDLIN( 113)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 113)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 114)						this->drawTriangles(( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) ),( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) ),c->buffer->o->__get((c->oPos + 3)));
            					}
            					break;
            					case (int)13: {
HXLINE( 116)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 116)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 116)								data1->oPos = (data1->oPos + 2);
HXDLIN( 116)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 116)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 116)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 116)								data1->iPos = (data1->iPos + 1);
HXDLIN( 116)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 116)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 116)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 116)								data1->oPos = (data1->oPos + 4);
HXDLIN( 116)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 116)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 116)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 116)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 116)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 116)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 116)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 116)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 116)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 116)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 116)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 116)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 116)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 116)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 116)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 116)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 116)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 116)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 116)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 116)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 116)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 116)								data1->fPos = (data1->fPos + 5);
HXDLIN( 116)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 116)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 116)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 116)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 116)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 116)								data1->oPos = (data1->oPos + 2);
HXDLIN( 116)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 116)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 116)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 116)								data1->oPos = (data1->oPos + 4);
HXDLIN( 116)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 116)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 116)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 116)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 116)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 116)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 116)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 116)								data1->oPos = (data1->oPos + 4);
HXDLIN( 116)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 116)								data2->iPos = (data2->iPos + 1);
HXDLIN( 116)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 116)								data3->fPos = (data3->fPos + 2);
HXDLIN( 116)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 116)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 116)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 116)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 116)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 116)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 116)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 116)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 116)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 116)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 116)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::END_FILL_dyn();
HXDLIN( 116)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 116)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 117)						this->endFill();
            					}
            					break;
            					case (int)14: {
HXLINE( 119)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 119)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 119)								data1->oPos = (data1->oPos + 2);
HXDLIN( 119)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 119)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 119)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 119)								data1->iPos = (data1->iPos + 1);
HXDLIN( 119)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 119)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 119)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 119)								data1->oPos = (data1->oPos + 4);
HXDLIN( 119)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 119)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 119)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 119)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 119)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 119)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 119)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 119)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 119)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 119)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 119)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 119)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 119)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 119)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 119)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 119)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 119)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 119)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 119)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 119)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 119)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 119)								data1->fPos = (data1->fPos + 5);
HXDLIN( 119)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 119)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 119)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 119)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 119)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 119)								data1->oPos = (data1->oPos + 2);
HXDLIN( 119)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 119)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 119)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 119)								data1->oPos = (data1->oPos + 4);
HXDLIN( 119)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 119)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 119)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 119)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 119)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 119)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 119)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 119)								data1->oPos = (data1->oPos + 4);
HXDLIN( 119)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 119)								data2->iPos = (data2->iPos + 1);
HXDLIN( 119)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 119)								data3->fPos = (data3->fPos + 2);
HXDLIN( 119)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 119)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 119)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 119)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 119)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 119)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 119)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 119)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 119)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 119)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 119)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_BITMAP_STYLE_dyn();
HXDLIN( 119)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 119)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 120)						this->lineBitmapStyle(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
            					}
            					break;
            					case (int)15: {
HXLINE( 122)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 122)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 122)								data1->oPos = (data1->oPos + 2);
HXDLIN( 122)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 122)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 122)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 122)								data1->iPos = (data1->iPos + 1);
HXDLIN( 122)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 122)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 122)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 122)								data1->oPos = (data1->oPos + 4);
HXDLIN( 122)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 122)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 122)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 122)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 122)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 122)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 122)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 122)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 122)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 122)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 122)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 122)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 122)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 122)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 122)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 122)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 122)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 122)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 122)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 122)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 122)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 122)								data1->fPos = (data1->fPos + 5);
HXDLIN( 122)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 122)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 122)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 122)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 122)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 122)								data1->oPos = (data1->oPos + 2);
HXDLIN( 122)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 122)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 122)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 122)								data1->oPos = (data1->oPos + 4);
HXDLIN( 122)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 122)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 122)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 122)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 122)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 122)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 122)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 122)								data1->oPos = (data1->oPos + 4);
HXDLIN( 122)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 122)								data2->iPos = (data2->iPos + 1);
HXDLIN( 122)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 122)								data3->fPos = (data3->fPos + 2);
HXDLIN( 122)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 122)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 122)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 122)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 122)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 122)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 122)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 122)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 122)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 122)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 122)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_GRADIENT_STYLE_dyn();
HXDLIN( 122)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 122)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 123)						this->lineGradientStyle(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
            					}
            					break;
            					case (int)16: {
HXLINE( 125)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 125)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 125)								data1->oPos = (data1->oPos + 2);
HXDLIN( 125)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 125)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 125)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 125)								data1->iPos = (data1->iPos + 1);
HXDLIN( 125)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 125)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 125)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 125)								data1->oPos = (data1->oPos + 4);
HXDLIN( 125)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 125)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 125)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 125)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 125)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 125)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 125)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 125)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 125)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 125)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 125)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 125)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 125)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 125)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 125)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 125)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 125)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 125)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 125)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 125)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 125)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 125)								data1->fPos = (data1->fPos + 5);
HXDLIN( 125)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 125)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 125)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 125)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 125)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 125)								data1->oPos = (data1->oPos + 2);
HXDLIN( 125)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 125)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 125)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 125)								data1->oPos = (data1->oPos + 4);
HXDLIN( 125)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 125)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 125)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 125)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 125)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 125)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 125)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 125)								data1->oPos = (data1->oPos + 4);
HXDLIN( 125)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 125)								data2->iPos = (data2->iPos + 1);
HXDLIN( 125)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 125)								data3->fPos = (data3->fPos + 2);
HXDLIN( 125)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 125)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 125)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 125)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 125)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 125)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 125)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 125)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 125)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 125)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 125)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_STYLE_dyn();
HXDLIN( 125)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 125)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 126)						this->lineStyle(c->buffer->o->__get(c->oPos),c->buffer->i->__get(c->iPos),c->buffer->f->__get(c->fPos),c->buffer->b->__get(c->bPos),c->buffer->o->__get((c->oPos + 1)),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get((c->fPos + 1)));
            					}
            					break;
            					case (int)17: {
HXLINE( 128)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 128)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 128)								data1->oPos = (data1->oPos + 2);
HXDLIN( 128)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 128)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 128)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 128)								data1->iPos = (data1->iPos + 1);
HXDLIN( 128)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 128)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 128)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 128)								data1->oPos = (data1->oPos + 4);
HXDLIN( 128)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 128)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 128)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 128)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 128)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 128)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 128)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 128)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 128)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 128)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 128)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 128)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 128)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 128)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 128)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 128)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 128)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 128)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 128)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 128)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 128)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 128)								data1->fPos = (data1->fPos + 5);
HXDLIN( 128)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 128)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 128)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 128)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 128)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 128)								data1->oPos = (data1->oPos + 2);
HXDLIN( 128)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 128)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 128)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 128)								data1->oPos = (data1->oPos + 4);
HXDLIN( 128)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 128)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 128)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 128)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 128)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 128)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 128)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 128)								data1->oPos = (data1->oPos + 4);
HXDLIN( 128)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 128)								data2->iPos = (data2->iPos + 1);
HXDLIN( 128)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 128)								data3->fPos = (data3->fPos + 2);
HXDLIN( 128)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 128)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 128)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 128)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 128)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 128)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 128)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 128)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 128)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 128)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 128)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn();
HXDLIN( 128)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 128)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 129)						this->lineTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            					}
            					break;
            					case (int)18: {
HXLINE( 131)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 131)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 131)								data1->oPos = (data1->oPos + 2);
HXDLIN( 131)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 131)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 131)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 131)								data1->iPos = (data1->iPos + 1);
HXDLIN( 131)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 131)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 131)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 131)								data1->oPos = (data1->oPos + 4);
HXDLIN( 131)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 131)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 131)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 131)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 131)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 131)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 131)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 131)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 131)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 131)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 131)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 131)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 131)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 131)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 131)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 131)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 131)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 131)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 131)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 131)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 131)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 131)								data1->fPos = (data1->fPos + 5);
HXDLIN( 131)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 131)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 131)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 131)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 131)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 131)								data1->oPos = (data1->oPos + 2);
HXDLIN( 131)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 131)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 131)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 131)								data1->oPos = (data1->oPos + 4);
HXDLIN( 131)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 131)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 131)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 131)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 131)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 131)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 131)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 131)								data1->oPos = (data1->oPos + 4);
HXDLIN( 131)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 131)								data2->iPos = (data2->iPos + 1);
HXDLIN( 131)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 131)								data3->fPos = (data3->fPos + 2);
HXDLIN( 131)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 131)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 131)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 131)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 131)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 131)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 131)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 131)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 131)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 131)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 131)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN( 131)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 131)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 132)						this->moveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            					}
            					break;
            					case (int)20: {
HXLINE( 134)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 134)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 134)								data1->oPos = (data1->oPos + 2);
HXDLIN( 134)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 134)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 134)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 134)								data1->iPos = (data1->iPos + 1);
HXDLIN( 134)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 134)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 134)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 134)								data1->oPos = (data1->oPos + 4);
HXDLIN( 134)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 134)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 134)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 134)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 134)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 134)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 134)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 134)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 134)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 134)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 134)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 134)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 134)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 134)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 134)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 134)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 134)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 134)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 134)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 134)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 134)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 134)								data1->fPos = (data1->fPos + 5);
HXDLIN( 134)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 134)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 134)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 134)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 134)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 134)								data1->oPos = (data1->oPos + 2);
HXDLIN( 134)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 134)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 134)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 134)								data1->oPos = (data1->oPos + 4);
HXDLIN( 134)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 134)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 134)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 134)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 134)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 134)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 134)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 134)								data1->oPos = (data1->oPos + 4);
HXDLIN( 134)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 134)								data2->iPos = (data2->iPos + 1);
HXDLIN( 134)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 134)								data3->fPos = (data3->fPos + 2);
HXDLIN( 134)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 134)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 134)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 134)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 134)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 134)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 134)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 134)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 134)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 134)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 134)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::OVERRIDE_MATRIX_dyn();
HXDLIN( 134)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 134)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 135)						this->overrideMatrix(( ( ::openfl::geom::Matrix)(c->buffer->o->__get(c->oPos)) ));
            					}
            					break;
            					case (int)21: {
HXLINE( 137)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 137)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 137)								data1->oPos = (data1->oPos + 2);
HXDLIN( 137)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 137)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 137)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 137)								data1->iPos = (data1->iPos + 1);
HXDLIN( 137)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 137)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 137)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 137)								data1->oPos = (data1->oPos + 4);
HXDLIN( 137)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 137)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 137)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 137)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 137)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 137)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 137)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 137)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 137)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 137)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 137)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 137)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 137)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 137)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 137)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 137)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 137)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 137)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 137)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 137)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 137)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 137)								data1->fPos = (data1->fPos + 5);
HXDLIN( 137)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 137)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 137)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 137)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 137)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 137)								data1->oPos = (data1->oPos + 2);
HXDLIN( 137)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 137)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 137)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 137)								data1->oPos = (data1->oPos + 4);
HXDLIN( 137)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 137)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 137)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 137)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 137)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 137)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 137)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 137)								data1->oPos = (data1->oPos + 4);
HXDLIN( 137)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 137)								data2->iPos = (data2->iPos + 1);
HXDLIN( 137)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 137)								data3->fPos = (data3->fPos + 2);
HXDLIN( 137)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 137)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 137)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 137)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 137)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 137)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 137)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 137)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 137)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 137)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 137)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_EVEN_ODD_dyn();
HXDLIN( 137)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 137)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 138)						this->windingEvenOdd();
            					}
            					break;
            					case (int)22: {
HXLINE( 140)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 140)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 140)								data1->oPos = (data1->oPos + 2);
HXDLIN( 140)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 140)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 140)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 140)								data1->iPos = (data1->iPos + 1);
HXDLIN( 140)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 140)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 140)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 140)								data1->oPos = (data1->oPos + 4);
HXDLIN( 140)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 140)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 140)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 140)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 140)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 140)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 140)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 140)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 140)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 140)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 140)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 140)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 140)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 140)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 140)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 140)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 140)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 140)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 140)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 140)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 140)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 140)								data1->fPos = (data1->fPos + 5);
HXDLIN( 140)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 140)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 140)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 140)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 140)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 140)								data1->oPos = (data1->oPos + 2);
HXDLIN( 140)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 140)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 140)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 140)								data1->oPos = (data1->oPos + 4);
HXDLIN( 140)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 140)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 140)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 140)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 140)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 140)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 140)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 140)								data1->oPos = (data1->oPos + 4);
HXDLIN( 140)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 140)								data2->iPos = (data2->iPos + 1);
HXDLIN( 140)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 140)								data3->fPos = (data3->fPos + 2);
HXDLIN( 140)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 140)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 140)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 140)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 140)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 140)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 140)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 140)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 140)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 140)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 140)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_NON_ZERO_dyn();
HXDLIN( 140)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 140)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 141)						this->windingNonZero();
            					}
            					break;
            					default:{
            					}
            				}
            			}
            		}
HXLINE( 146)		data->destroy();
HXLINE( 147)		return other;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandBuffer_obj,append,return )

void DrawCommandBuffer_obj::beginBitmapFill( ::openfl::display::BitmapData bitmap, ::openfl::geom::Matrix matrix,bool repeat,bool smooth){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_151_beginBitmapFill)
HXLINE( 152)		this->prepareWrite();
HXLINE( 154)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn());
HXLINE( 155)		this->o->push(bitmap);
HXLINE( 156)		this->o->push(matrix);
HXLINE( 157)		this->b->push(repeat);
HXLINE( 158)		this->b->push(smooth);
            	}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,beginBitmapFill,(void))

void DrawCommandBuffer_obj::beginFill(int color,Float alpha){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_162_beginFill)
HXLINE( 163)		this->prepareWrite();
HXLINE( 165)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn());
HXLINE( 166)		this->i->push(color);
HXLINE( 167)		this->f->push(alpha);
            	}


HX_DEFINE_DYNAMIC_FUNC2(DrawCommandBuffer_obj,beginFill,(void))

void DrawCommandBuffer_obj::beginGradientFill( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,Float focalPointRatio){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_172_beginGradientFill)
HXLINE( 173)		this->prepareWrite();
HXLINE( 175)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn());
HXLINE( 176)		this->o->push(type);
HXLINE( 177)		this->ii->push(colors);
HXLINE( 178)		this->ff->push(alphas);
HXLINE( 179)		this->ii->push(ratios);
HXLINE( 180)		this->o->push(matrix);
HXLINE( 181)		this->o->push(spreadMethod);
HXLINE( 182)		this->o->push(interpolationMethod);
HXLINE( 183)		this->f->push(focalPointRatio);
            	}


HX_DEFINE_DYNAMIC_FUNC8(DrawCommandBuffer_obj,beginGradientFill,(void))

void DrawCommandBuffer_obj::beginShaderFill( ::openfl::display::_internal::ShaderBuffer shaderBuffer){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_187_beginShaderFill)
HXLINE( 188)		this->prepareWrite();
HXLINE( 190)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn());
HXLINE( 191)		this->o->push(shaderBuffer);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandBuffer_obj,beginShaderFill,(void))

void DrawCommandBuffer_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_195_clear)
HXLINE( 196)		this->types = ::openfl::display::_internal::DrawCommandBuffer_obj::empty->types;
HXLINE( 198)		this->b = ::openfl::display::_internal::DrawCommandBuffer_obj::empty->b;
HXLINE( 199)		this->i = ::openfl::display::_internal::DrawCommandBuffer_obj::empty->i;
HXLINE( 200)		this->f = ::openfl::display::_internal::DrawCommandBuffer_obj::empty->f;
HXLINE( 201)		this->o = ::openfl::display::_internal::DrawCommandBuffer_obj::empty->o;
HXLINE( 202)		this->ff = ::openfl::display::_internal::DrawCommandBuffer_obj::empty->ff;
HXLINE( 203)		this->ii = ::openfl::display::_internal::DrawCommandBuffer_obj::empty->ii;
HXLINE( 205)		this->copyOnWrite = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,clear,(void))

 ::openfl::display::_internal::DrawCommandBuffer DrawCommandBuffer_obj::copy(){
            	HX_GC_STACKFRAME(&_hx_pos_fae278bbae08f83e_209_copy)
HXLINE( 210)		 ::openfl::display::_internal::DrawCommandBuffer copy =  ::openfl::display::_internal::DrawCommandBuffer_obj::__alloc( HX_CTX );
HXLINE( 211)		copy->append(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 212)		return copy;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,copy,return )

void DrawCommandBuffer_obj::cubicCurveTo(Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_216_cubicCurveTo)
HXLINE( 217)		this->prepareWrite();
HXLINE( 219)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn());
HXLINE( 220)		this->f->push(controlX1);
HXLINE( 221)		this->f->push(controlY1);
HXLINE( 222)		this->f->push(controlX2);
HXLINE( 223)		this->f->push(controlY2);
HXLINE( 224)		this->f->push(anchorX);
HXLINE( 225)		this->f->push(anchorY);
            	}


HX_DEFINE_DYNAMIC_FUNC6(DrawCommandBuffer_obj,cubicCurveTo,(void))

void DrawCommandBuffer_obj::curveTo(Float controlX,Float controlY,Float anchorX,Float anchorY){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_229_curveTo)
HXLINE( 230)		this->prepareWrite();
HXLINE( 232)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn());
HXLINE( 233)		this->f->push(controlX);
HXLINE( 234)		this->f->push(controlY);
HXLINE( 235)		this->f->push(anchorX);
HXLINE( 236)		this->f->push(anchorY);
            	}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,curveTo,(void))

void DrawCommandBuffer_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_240_destroy)
HXLINE( 241)		this->clear();
HXLINE( 243)		this->types = null();
HXLINE( 245)		this->b = null();
HXLINE( 246)		this->i = null();
HXLINE( 247)		this->f = null();
HXLINE( 248)		this->o = null();
HXLINE( 249)		this->ff = null();
HXLINE( 250)		this->ii = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,destroy,(void))

void DrawCommandBuffer_obj::drawCircle(Float x,Float y,Float radius){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_254_drawCircle)
HXLINE( 255)		this->prepareWrite();
HXLINE( 257)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn());
HXLINE( 258)		this->f->push(x);
HXLINE( 259)		this->f->push(y);
HXLINE( 260)		this->f->push(radius);
            	}


HX_DEFINE_DYNAMIC_FUNC3(DrawCommandBuffer_obj,drawCircle,(void))

void DrawCommandBuffer_obj::drawEllipse(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_264_drawEllipse)
HXLINE( 265)		this->prepareWrite();
HXLINE( 267)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn());
HXLINE( 268)		this->f->push(x);
HXLINE( 269)		this->f->push(y);
HXLINE( 270)		this->f->push(width);
HXLINE( 271)		this->f->push(height);
            	}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,drawEllipse,(void))

void DrawCommandBuffer_obj::drawQuads( ::openfl::_Vector::FloatVector rects, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector transforms){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_275_drawQuads)
HXLINE( 276)		this->prepareWrite();
HXLINE( 278)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::DRAW_QUADS_dyn());
HXLINE( 279)		this->o->push(rects);
HXLINE( 280)		this->o->push(indices);
HXLINE( 281)		this->o->push(transforms);
            	}


HX_DEFINE_DYNAMIC_FUNC3(DrawCommandBuffer_obj,drawQuads,(void))

void DrawCommandBuffer_obj::drawRect(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_285_drawRect)
HXLINE( 286)		this->prepareWrite();
HXLINE( 288)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn());
HXLINE( 289)		this->f->push(x);
HXLINE( 290)		this->f->push(y);
HXLINE( 291)		this->f->push(width);
HXLINE( 292)		this->f->push(height);
            	}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,drawRect,(void))

void DrawCommandBuffer_obj::drawRoundRect(Float x,Float y,Float width,Float height,Float ellipseWidth, ::Dynamic ellipseHeight){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_296_drawRoundRect)
HXLINE( 297)		this->prepareWrite();
HXLINE( 299)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn());
HXLINE( 300)		this->f->push(x);
HXLINE( 301)		this->f->push(y);
HXLINE( 302)		this->f->push(width);
HXLINE( 303)		this->f->push(height);
HXLINE( 304)		this->f->push(ellipseWidth);
HXLINE( 305)		this->o->push(ellipseHeight);
            	}


HX_DEFINE_DYNAMIC_FUNC6(DrawCommandBuffer_obj,drawRoundRect,(void))

void DrawCommandBuffer_obj::drawTriangles( ::openfl::_Vector::FloatVector vertices, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector uvtData, ::Dynamic culling){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_309_drawTriangles)
HXLINE( 310)		this->prepareWrite();
HXLINE( 312)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::DRAW_TRIANGLES_dyn());
HXLINE( 313)		this->o->push(vertices);
HXLINE( 314)		this->o->push(indices);
HXLINE( 315)		this->o->push(uvtData);
HXLINE( 316)		this->o->push(culling);
            	}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,drawTriangles,(void))

void DrawCommandBuffer_obj::endFill(){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_320_endFill)
HXLINE( 321)		this->prepareWrite();
HXLINE( 323)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::END_FILL_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,endFill,(void))

void DrawCommandBuffer_obj::lineBitmapStyle( ::openfl::display::BitmapData bitmap, ::openfl::geom::Matrix matrix,bool repeat,bool smooth){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_327_lineBitmapStyle)
HXLINE( 328)		this->prepareWrite();
HXLINE( 330)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::LINE_BITMAP_STYLE_dyn());
HXLINE( 331)		this->o->push(bitmap);
HXLINE( 332)		this->o->push(matrix);
HXLINE( 333)		this->b->push(repeat);
HXLINE( 334)		this->b->push(smooth);
            	}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,lineBitmapStyle,(void))

void DrawCommandBuffer_obj::lineGradientStyle( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,Float focalPointRatio){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_339_lineGradientStyle)
HXLINE( 340)		this->prepareWrite();
HXLINE( 342)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::LINE_GRADIENT_STYLE_dyn());
HXLINE( 343)		this->o->push(type);
HXLINE( 344)		this->ii->push(colors);
HXLINE( 345)		this->ff->push(alphas);
HXLINE( 346)		this->ii->push(ratios);
HXLINE( 347)		this->o->push(matrix);
HXLINE( 348)		this->o->push(spreadMethod);
HXLINE( 349)		this->o->push(interpolationMethod);
HXLINE( 350)		this->f->push(focalPointRatio);
            	}


HX_DEFINE_DYNAMIC_FUNC8(DrawCommandBuffer_obj,lineGradientStyle,(void))

void DrawCommandBuffer_obj::lineStyle( ::Dynamic thickness,int color,Float alpha,bool pixelHinting, ::Dynamic scaleMode, ::Dynamic caps, ::Dynamic joints,Float miterLimit){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_355_lineStyle)
HXLINE( 356)		this->prepareWrite();
HXLINE( 358)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::LINE_STYLE_dyn());
HXLINE( 359)		this->o->push(thickness);
HXLINE( 360)		this->i->push(color);
HXLINE( 361)		this->f->push(alpha);
HXLINE( 362)		this->b->push(pixelHinting);
HXLINE( 363)		this->o->push(scaleMode);
HXLINE( 364)		this->o->push(caps);
HXLINE( 365)		this->o->push(joints);
HXLINE( 366)		this->f->push(miterLimit);
            	}


HX_DEFINE_DYNAMIC_FUNC8(DrawCommandBuffer_obj,lineStyle,(void))

void DrawCommandBuffer_obj::lineTo(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_370_lineTo)
HXLINE( 371)		this->prepareWrite();
HXLINE( 373)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn());
HXLINE( 374)		this->f->push(x);
HXLINE( 375)		this->f->push(y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(DrawCommandBuffer_obj,lineTo,(void))

void DrawCommandBuffer_obj::moveTo(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_379_moveTo)
HXLINE( 380)		this->prepareWrite();
HXLINE( 382)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn());
HXLINE( 383)		this->f->push(x);
HXLINE( 384)		this->f->push(y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(DrawCommandBuffer_obj,moveTo,(void))

void DrawCommandBuffer_obj::prepareWrite(){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_389_prepareWrite)
HXDLIN( 389)		if (this->copyOnWrite) {
HXLINE( 391)			this->types = this->types->copy();
HXLINE( 392)			this->b = this->b->copy();
HXLINE( 393)			this->i = this->i->copy();
HXLINE( 394)			this->f = this->f->copy();
HXLINE( 395)			this->o = this->o->copy();
HXLINE( 396)			this->ff = this->ff->copy();
HXLINE( 397)			this->ii = this->ii->copy();
HXLINE( 399)			this->copyOnWrite = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,prepareWrite,(void))

void DrawCommandBuffer_obj::overrideBlendMode( ::Dynamic blendMode){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_404_overrideBlendMode)
HXLINE( 405)		this->prepareWrite();
HXLINE( 407)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::OVERRIDE_BLEND_MODE_dyn());
HXLINE( 408)		this->o->push(blendMode);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandBuffer_obj,overrideBlendMode,(void))

void DrawCommandBuffer_obj::overrideMatrix( ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_412_overrideMatrix)
HXLINE( 413)		this->prepareWrite();
HXLINE( 415)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::OVERRIDE_MATRIX_dyn());
HXLINE( 416)		this->o->push(matrix);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandBuffer_obj,overrideMatrix,(void))

void DrawCommandBuffer_obj::windingEvenOdd(){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_420_windingEvenOdd)
HXLINE( 421)		this->prepareWrite();
HXLINE( 423)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::WINDING_EVEN_ODD_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,windingEvenOdd,(void))

void DrawCommandBuffer_obj::windingNonZero(){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_427_windingNonZero)
HXLINE( 428)		this->prepareWrite();
HXLINE( 430)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::WINDING_NON_ZERO_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,windingNonZero,(void))

int DrawCommandBuffer_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_436_get_length)
HXDLIN( 436)		return this->types->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,get_length,return )

 ::openfl::display::_internal::DrawCommandBuffer DrawCommandBuffer_obj::empty;


::hx::ObjectPtr< DrawCommandBuffer_obj > DrawCommandBuffer_obj::__new() {
	::hx::ObjectPtr< DrawCommandBuffer_obj > __this = new DrawCommandBuffer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DrawCommandBuffer_obj > DrawCommandBuffer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DrawCommandBuffer_obj *__this = (DrawCommandBuffer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DrawCommandBuffer_obj), true, "openfl.display._internal.DrawCommandBuffer"));
	*(void **)__this = DrawCommandBuffer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DrawCommandBuffer_obj::DrawCommandBuffer_obj()
{
}

void DrawCommandBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DrawCommandBuffer);
	HX_MARK_MEMBER_NAME(types,"types");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(copyOnWrite,"copyOnWrite");
	HX_MARK_MEMBER_NAME(f,"f");
	HX_MARK_MEMBER_NAME(ff,"ff");
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(ii,"ii");
	HX_MARK_MEMBER_NAME(o,"o");
	HX_MARK_END_CLASS();
}

void DrawCommandBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(types,"types");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(copyOnWrite,"copyOnWrite");
	HX_VISIT_MEMBER_NAME(f,"f");
	HX_VISIT_MEMBER_NAME(ff,"ff");
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(ii,"ii");
	HX_VISIT_MEMBER_NAME(o,"o");
}

::hx::Val DrawCommandBuffer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		if (HX_FIELD_EQ(inName,"f") ) { return ::hx::Val( f ); }
		if (HX_FIELD_EQ(inName,"i") ) { return ::hx::Val( i ); }
		if (HX_FIELD_EQ(inName,"o") ) { return ::hx::Val( o ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ff") ) { return ::hx::Val( ff ); }
		if (HX_FIELD_EQ(inName,"ii") ) { return ::hx::Val( ii ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return ::hx::Val( copy_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { return ::hx::Val( types ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"append") ) { return ::hx::Val( append_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return ::hx::Val( lineTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return ::hx::Val( moveTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curveTo") ) { return ::hx::Val( curveTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"endFill") ) { return ::hx::Val( endFill_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawRect") ) { return ::hx::Val( drawRect_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"beginFill") ) { return ::hx::Val( beginFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawQuads") ) { return ::hx::Val( drawQuads_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return ::hx::Val( lineStyle_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return ::hx::Val( drawCircle_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyOnWrite") ) { return ::hx::Val( copyOnWrite ); }
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return ::hx::Val( drawEllipse_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return ::hx::Val( cubicCurveTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"prepareWrite") ) { return ::hx::Val( prepareWrite_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return ::hx::Val( drawRoundRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return ::hx::Val( drawTriangles_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"overrideMatrix") ) { return ::hx::Val( overrideMatrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"windingEvenOdd") ) { return ::hx::Val( windingEvenOdd_dyn() ); }
		if (HX_FIELD_EQ(inName,"windingNonZero") ) { return ::hx::Val( windingNonZero_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"beginBitmapFill") ) { return ::hx::Val( beginBitmapFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"beginShaderFill") ) { return ::hx::Val( beginShaderFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineBitmapStyle") ) { return ::hx::Val( lineBitmapStyle_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return ::hx::Val( beginGradientFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineGradientStyle") ) { return ::hx::Val( lineGradientStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"overrideBlendMode") ) { return ::hx::Val( overrideBlendMode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DrawCommandBuffer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { outValue = ( empty ); return true; }
	}
	return false;
}

::hx::Val DrawCommandBuffer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ff") ) { ff=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ii") ) { ii=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { types=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyOnWrite") ) { copyOnWrite=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DrawCommandBuffer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { empty=ioValue.Cast<  ::openfl::display::_internal::DrawCommandBuffer >(); return true; }
	}
	return false;
}

void DrawCommandBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("types",79,70,cb,1a));
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("copyOnWrite",0b,88,ab,bc));
	outFields->push(HX_("f",66,00,00,00));
	outFields->push(HX_("ff",40,59,00,00));
	outFields->push(HX_("i",69,00,00,00));
	outFields->push(HX_("ii",e0,5b,00,00));
	outFields->push(HX_("o",6f,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DrawCommandBuffer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(DrawCommandBuffer_obj,types),HX_("types",79,70,cb,1a)},
	{::hx::fsObject /* ::Array< bool > */ ,(int)offsetof(DrawCommandBuffer_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsBool,(int)offsetof(DrawCommandBuffer_obj,copyOnWrite),HX_("copyOnWrite",0b,88,ab,bc)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(DrawCommandBuffer_obj,f),HX_("f",66,00,00,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(DrawCommandBuffer_obj,ff),HX_("ff",40,59,00,00)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(DrawCommandBuffer_obj,i),HX_("i",69,00,00,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(DrawCommandBuffer_obj,ii),HX_("ii",e0,5b,00,00)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(DrawCommandBuffer_obj,o),HX_("o",6f,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DrawCommandBuffer_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::_internal::DrawCommandBuffer */ ,(void *) &DrawCommandBuffer_obj::empty,HX_("empty",8d,3a,da,6f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DrawCommandBuffer_obj_sMemberFields[] = {
	HX_("types",79,70,cb,1a),
	HX_("b",62,00,00,00),
	HX_("copyOnWrite",0b,88,ab,bc),
	HX_("f",66,00,00,00),
	HX_("ff",40,59,00,00),
	HX_("i",69,00,00,00),
	HX_("ii",e0,5b,00,00),
	HX_("o",6f,00,00,00),
	HX_("append",da,e1,d3,8f),
	HX_("beginBitmapFill",9b,c9,07,6a),
	HX_("beginFill",4c,ad,95,8c),
	HX_("beginGradientFill",5c,3c,03,2e),
	HX_("beginShaderFill",d1,4b,43,67),
	HX_("clear",8d,71,5b,48),
	HX_("copy",b5,bb,c4,41),
	HX_("cubicCurveTo",e0,07,90,2e),
	HX_("curveTo",0a,60,88,ce),
	HX_("destroy",fa,2c,86,24),
	HX_("drawCircle",34,ed,d0,97),
	HX_("drawEllipse",3a,85,ce,54),
	HX_("drawQuads",28,ab,f2,25),
	HX_("drawRect",48,f7,10,60),
	HX_("drawRoundRect",ee,c3,aa,e2),
	HX_("drawTriangles",07,44,68,de),
	HX_("endFill",fe,87,e0,25),
	HX_("lineBitmapStyle",2e,3f,21,45),
	HX_("lineGradientStyle",8d,24,f2,c1),
	HX_("lineStyle",9d,a8,18,cb),
	HX_("lineTo",8f,46,a0,ec),
	HX_("moveTo",ec,d2,ac,cc),
	HX_("prepareWrite",d8,61,09,44),
	HX_("overrideBlendMode",68,f8,e9,f9),
	HX_("overrideMatrix",ad,8d,a9,b9),
	HX_("windingEvenOdd",bb,5c,0a,0b),
	HX_("windingNonZero",db,b4,3f,d6),
	HX_("get_length",af,04,8f,8f),
	::String(null()) };

static void DrawCommandBuffer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawCommandBuffer_obj::empty,"empty");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DrawCommandBuffer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawCommandBuffer_obj::empty,"empty");
};

#endif

::hx::Class DrawCommandBuffer_obj::__mClass;

static ::String DrawCommandBuffer_obj_sStaticFields[] = {
	HX_("empty",8d,3a,da,6f),
	::String(null())
};

void DrawCommandBuffer_obj::__register()
{
	DrawCommandBuffer_obj _hx_dummy;
	DrawCommandBuffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.DrawCommandBuffer",8b,23,4c,fb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DrawCommandBuffer_obj::__GetStatic;
	__mClass->mSetStaticField = &DrawCommandBuffer_obj::__SetStatic;
	__mClass->mMarkFunc = DrawCommandBuffer_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DrawCommandBuffer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DrawCommandBuffer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DrawCommandBuffer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DrawCommandBuffer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DrawCommandBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DrawCommandBuffer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DrawCommandBuffer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_21_boot)
HXDLIN(  21)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("o",6f,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))))
            			->setFixed(1,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_fae278bbae08f83e_23_boot)
HXDLIN(  23)		empty =  ::openfl::display::_internal::DrawCommandBuffer_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
