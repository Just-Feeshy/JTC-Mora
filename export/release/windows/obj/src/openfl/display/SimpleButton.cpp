#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
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
#ifndef INCLUDED_openfl_display_SimpleButton
#include <openfl/display/SimpleButton.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_10b8a2091f17fcad_164_new,"openfl.display.SimpleButton","new",0x26b2c720,"openfl.display.SimpleButton.new","openfl/display/SimpleButton.hx",164,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_195___getBounds,"openfl.display.SimpleButton","__getBounds",0xf4f40f4b,"openfl.display.SimpleButton.__getBounds","openfl/display/SimpleButton.hx",195,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_208___getRenderBounds,"openfl.display.SimpleButton","__getRenderBounds",0x52d157c1,"openfl.display.SimpleButton.__getRenderBounds","openfl/display/SimpleButton.hx",208,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_230___getCursor,"openfl.display.SimpleButton","__getCursor",0xcdbf17ac,"openfl.display.SimpleButton.__getCursor","openfl/display/SimpleButton.hx",230,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_235___hitTest,"openfl.display.SimpleButton","__hitTest",0x74e237e5,"openfl.display.SimpleButton.__hitTest","openfl/display/SimpleButton.hx",235,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_284___hitTestMask,"openfl.display.SimpleButton","__hitTestMask",0xa5bbfb71,"openfl.display.SimpleButton.__hitTestMask","openfl/display/SimpleButton.hx",284,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_296___setStageReference,"openfl.display.SimpleButton","__setStageReference",0xb9ee5c0f,"openfl.display.SimpleButton.__setStageReference","openfl/display/SimpleButton.hx",296,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_311___setTransformDirty,"openfl.display.SimpleButton","__setTransformDirty",0x5e2c91e8,"openfl.display.SimpleButton.__setTransformDirty","openfl/display/SimpleButton.hx",311,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_326___update,"openfl.display.SimpleButton","__update",0xc35f8269,"openfl.display.SimpleButton.__update","openfl/display/SimpleButton.hx",326,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_344___updateTransforms,"openfl.display.SimpleButton","__updateTransforms",0xafb59550,"openfl.display.SimpleButton.__updateTransforms","openfl/display/SimpleButton.hx",344,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_361_get_downState,"openfl.display.SimpleButton","get_downState",0xc54404e6,"openfl.display.SimpleButton.get_downState","openfl/display/SimpleButton.hx",361,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_365_set_downState,"openfl.display.SimpleButton","set_downState",0x0a49e6f2,"openfl.display.SimpleButton.set_downState","openfl/display/SimpleButton.hx",365,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_376_get_hitTestState,"openfl.display.SimpleButton","get_hitTestState",0xed3a2955,"openfl.display.SimpleButton.get_hitTestState","openfl/display/SimpleButton.hx",376,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_380_set_hitTestState,"openfl.display.SimpleButton","set_hitTestState",0x437c16c9,"openfl.display.SimpleButton.set_hitTestState","openfl/display/SimpleButton.hx",380,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_400_get_overState,"openfl.display.SimpleButton","get_overState",0x12efbeb4,"openfl.display.SimpleButton.get_overState","openfl/display/SimpleButton.hx",400,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_404_set_overState,"openfl.display.SimpleButton","set_overState",0x57f5a0c0,"openfl.display.SimpleButton.set_overState","openfl/display/SimpleButton.hx",404,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_414_get_soundTransform,"openfl.display.SimpleButton","get_soundTransform",0x1d7d70a6,"openfl.display.SimpleButton.get_soundTransform","openfl/display/SimpleButton.hx",414,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_424_set_soundTransform,"openfl.display.SimpleButton","set_soundTransform",0xfa2ca31a,"openfl.display.SimpleButton.set_soundTransform","openfl/display/SimpleButton.hx",424,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_431_get_upState,"openfl.display.SimpleButton","get_upState",0x4aceac8d,"openfl.display.SimpleButton.get_upState","openfl/display/SimpleButton.hx",431,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_435_set_upState,"openfl.display.SimpleButton","set_upState",0x553bb399,"openfl.display.SimpleButton.set_upState","openfl/display/SimpleButton.hx",435,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_445_set___currentState,"openfl.display.SimpleButton","set___currentState",0xc32592b5,"openfl.display.SimpleButton.set___currentState","openfl/display/SimpleButton.hx",445,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_502___this_onMouseDown,"openfl.display.SimpleButton","__this_onMouseDown",0x383f91c7,"openfl.display.SimpleButton.__this_onMouseDown","openfl/display/SimpleButton.hx",502,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_509___this_onMouseOut,"openfl.display.SimpleButton","__this_onMouseOut",0x6c31fac9,"openfl.display.SimpleButton.__this_onMouseOut","openfl/display/SimpleButton.hx",509,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_519___this_onMouseOver,"openfl.display.SimpleButton","__this_onMouseOver",0x3f8a2ab9,"openfl.display.SimpleButton.__this_onMouseOver","openfl/display/SimpleButton.hx",519,0x4b6b858e)
HX_LOCAL_STACK_FRAME(_hx_pos_10b8a2091f17fcad_532___this_onMouseUp,"openfl.display.SimpleButton","__this_onMouseUp",0xd7286c80,"openfl.display.SimpleButton.__this_onMouseUp","openfl/display/SimpleButton.hx",532,0x4b6b858e)
namespace openfl{
namespace display{

void SimpleButton_obj::__construct( ::openfl::display::DisplayObject upState, ::openfl::display::DisplayObject overState, ::openfl::display::DisplayObject downState, ::openfl::display::DisplayObject hitTestState){
            	HX_GC_STACKFRAME(&_hx_pos_10b8a2091f17fcad_164_new)
HXLINE( 165)		super::__construct();
HXLINE( 167)		this->_hx___drawableType = 6;
HXLINE( 168)		this->enabled = true;
HXLINE( 169)		this->trackAsMenu = false;
HXLINE( 170)		this->useHandCursor = true;
HXLINE( 172)		 ::openfl::display::DisplayObject _hx_tmp;
HXDLIN( 172)		if (::hx::IsNotNull( upState )) {
HXLINE( 172)			_hx_tmp = upState;
            		}
            		else {
HXLINE( 172)			_hx_tmp =  ::openfl::display::DisplayObject_obj::__alloc( HX_CTX );
            		}
HXDLIN( 172)		this->_hx___upState = _hx_tmp;
HXLINE( 173)		this->_hx___overState = overState;
HXLINE( 174)		this->_hx___downState = downState;
HXLINE( 175)		 ::openfl::display::DisplayObject _hx_tmp1;
HXDLIN( 175)		if (::hx::IsNotNull( hitTestState )) {
HXLINE( 175)			_hx_tmp1 = hitTestState;
            		}
            		else {
HXLINE( 175)			_hx_tmp1 =  ::openfl::display::DisplayObject_obj::__alloc( HX_CTX );
            		}
HXDLIN( 175)		this->set_hitTestState(_hx_tmp1);
HXLINE( 177)		this->addEventListener(HX_("mouseDown",27,b1,c2,ee),this->_hx___this_onMouseDown_dyn(),null(),null(),null());
HXLINE( 178)		this->addEventListener(HX_("mouseOut",69,e7,1d,a4),this->_hx___this_onMouseOut_dyn(),null(),null(),null());
HXLINE( 179)		this->addEventListener(HX_("mouseOver",19,4a,0d,f6),this->_hx___this_onMouseOver_dyn(),null(),null(),null());
HXLINE( 180)		this->addEventListener(HX_("mouseUp",e0,f3,72,c0),this->_hx___this_onMouseUp_dyn(),null(),null(),null());
HXLINE( 182)		this->_hx___tabEnabled = true;
HXLINE( 183)		this->set___currentState(this->_hx___upState);
HXLINE( 185)		if (::hx::IsNotNull( ::openfl::display::SimpleButton_obj::_hx___constructor )) {
HXLINE( 187)			 ::Dynamic method = ::openfl::display::SimpleButton_obj::_hx___constructor;
HXLINE( 188)			::openfl::display::SimpleButton_obj::_hx___constructor = null();
HXLINE( 190)			method(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}

Dynamic SimpleButton_obj::__CreateEmpty() { return new SimpleButton_obj; }

void *SimpleButton_obj::_hx_vtable = 0;

Dynamic SimpleButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SimpleButton_obj > _hx_result = new SimpleButton_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool SimpleButton_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0a9c7d56) {
		if (inClassId<=(int)0x0330636f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
		} else {
			return inClassId==(int)0x0a9c7d56;
		}
	} else {
		return inClassId==(int)0x0c89e854 || inClassId==(int)0x6b353933;
	}
}

void SimpleButton_obj::_hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_195___getBounds)
HXLINE( 196)		this->super::_hx___getBounds(rect,matrix);
HXLINE( 198)		 ::openfl::geom::Matrix childWorldTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 200)		{
HXLINE( 200)			 ::openfl::geom::Matrix local = this->_hx___currentState->_hx___transform;
HXDLIN( 200)			childWorldTransform->a = ((local->a * matrix->a) + (local->b * matrix->c));
HXDLIN( 200)			childWorldTransform->b = ((local->a * matrix->b) + (local->b * matrix->d));
HXDLIN( 200)			childWorldTransform->c = ((local->c * matrix->a) + (local->d * matrix->c));
HXDLIN( 200)			childWorldTransform->d = ((local->c * matrix->b) + (local->d * matrix->d));
HXDLIN( 200)			childWorldTransform->tx = (((local->tx * matrix->a) + (local->ty * matrix->c)) + matrix->tx);
HXDLIN( 200)			childWorldTransform->ty = (((local->tx * matrix->b) + (local->ty * matrix->d)) + matrix->ty);
            		}
HXLINE( 202)		this->_hx___currentState->_hx___getBounds(rect,childWorldTransform);
HXLINE( 204)		::openfl::geom::Matrix_obj::_hx___pool->release(childWorldTransform);
            	}


void SimpleButton_obj::_hx___getRenderBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_208___getRenderBounds)
HXLINE( 209)		if (::hx::IsNotNull( this->_hx___scrollRect )) {
HXLINE( 211)			this->super::_hx___getRenderBounds(rect,matrix);
HXLINE( 212)			return;
            		}
            		else {
HXLINE( 216)			this->super::_hx___getBounds(rect,matrix);
            		}
HXLINE( 219)		 ::openfl::geom::Matrix childWorldTransform = ::openfl::geom::Matrix_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Matrix >();
HXLINE( 221)		{
HXLINE( 221)			 ::openfl::geom::Matrix local = this->_hx___currentState->_hx___transform;
HXDLIN( 221)			childWorldTransform->a = ((local->a * matrix->a) + (local->b * matrix->c));
HXDLIN( 221)			childWorldTransform->b = ((local->a * matrix->b) + (local->b * matrix->d));
HXDLIN( 221)			childWorldTransform->c = ((local->c * matrix->a) + (local->d * matrix->c));
HXDLIN( 221)			childWorldTransform->d = ((local->c * matrix->b) + (local->d * matrix->d));
HXDLIN( 221)			childWorldTransform->tx = (((local->tx * matrix->a) + (local->ty * matrix->c)) + matrix->tx);
HXDLIN( 221)			childWorldTransform->ty = (((local->tx * matrix->b) + (local->ty * matrix->d)) + matrix->ty);
            		}
HXLINE( 223)		this->_hx___currentState->_hx___getRenderBounds(rect,childWorldTransform);
HXLINE( 225)		::openfl::geom::Matrix_obj::_hx___pool->release(childWorldTransform);
            	}


::String SimpleButton_obj::_hx___getCursor(){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_230___getCursor)
HXDLIN( 230)		bool _hx_tmp;
HXDLIN( 230)		bool _hx_tmp1;
HXDLIN( 230)		if (this->useHandCursor) {
HXDLIN( 230)			_hx_tmp1 = !(this->_hx___ignoreEvent);
            		}
            		else {
HXDLIN( 230)			_hx_tmp1 = false;
            		}
HXDLIN( 230)		if (_hx_tmp1) {
HXDLIN( 230)			_hx_tmp = this->enabled;
            		}
            		else {
HXDLIN( 230)			_hx_tmp = false;
            		}
HXDLIN( 230)		if (_hx_tmp) {
HXDLIN( 230)			return HX_("button",f2,61,e0,d9);
            		}
            		else {
HXDLIN( 230)			return null();
            		}
HXDLIN( 230)		return null();
            	}


bool SimpleButton_obj::_hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_235___hitTest)
HXLINE( 236)		bool hitTest = false;
HXLINE( 238)		if (::hx::IsNotNull( this->get_hitTestState() )) {
HXLINE( 240)			if (this->get_hitTestState()->_hx___hitTest(x,y,shapeFlag,stack,interactiveOnly,hitObject)) {
HXLINE( 242)				if (::hx::IsNotNull( stack )) {
HXLINE( 244)					if ((stack->length == 0)) {
HXLINE( 246)						stack[0] = hitObject;
            					}
            					else {
HXLINE( 250)						stack[(stack->length - 1)] = hitObject;
            					}
            				}
HXLINE( 254)				if (interactiveOnly) {
HXLINE( 254)					hitTest = this->mouseEnabled;
            				}
            				else {
HXLINE( 254)					hitTest = true;
            				}
            			}
            		}
            		else {
HXLINE( 257)			if (::hx::IsNotNull( this->_hx___currentState )) {
HXLINE( 259)				bool _hx_tmp;
HXDLIN( 259)				bool _hx_tmp1;
HXDLIN( 259)				bool _hx_tmp2;
HXDLIN( 259)				if (hitObject->get_visible()) {
HXLINE( 259)					_hx_tmp2 = this->_hx___isMask;
            				}
            				else {
HXLINE( 259)					_hx_tmp2 = true;
            				}
HXDLIN( 259)				if (!(_hx_tmp2)) {
HXLINE( 259)					if (interactiveOnly) {
HXLINE( 259)						_hx_tmp1 = !(this->mouseEnabled);
            					}
            					else {
HXLINE( 259)						_hx_tmp1 = false;
            					}
            				}
            				else {
HXLINE( 259)					_hx_tmp1 = true;
            				}
HXDLIN( 259)				if (!(_hx_tmp1)) {
HXLINE( 259)					if (::hx::IsNotNull( this->get_mask() )) {
HXLINE( 259)						_hx_tmp = !(this->get_mask()->_hx___hitTestMask(x,y));
            					}
            					else {
HXLINE( 259)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 259)					_hx_tmp = true;
            				}
HXDLIN( 259)				if (_hx_tmp) {
HXLINE( 261)					hitTest = false;
            				}
            				else {
HXLINE( 263)					if (this->_hx___currentState->_hx___hitTest(x,y,shapeFlag,stack,interactiveOnly,hitObject)) {
HXLINE( 265)						hitTest = interactiveOnly;
            					}
            				}
            			}
            		}
HXLINE( 272)		if (::hx::IsNotNull( stack )) {
HXLINE( 274)			while(true){
HXLINE( 274)				bool _hx_tmp;
HXDLIN( 274)				if ((stack->length > 1)) {
HXLINE( 274)					_hx_tmp = ::hx::IsInstanceEq( stack->__get((stack->length - 1)).StaticCast<  ::openfl::display::DisplayObject >(),stack->__get((stack->length - 2)).StaticCast<  ::openfl::display::DisplayObject >() );
            				}
            				else {
HXLINE( 274)					_hx_tmp = false;
            				}
HXDLIN( 274)				if (!(_hx_tmp)) {
HXLINE( 274)					goto _hx_goto_4;
            				}
HXLINE( 276)				stack->pop().StaticCast<  ::openfl::display::DisplayObject >();
            			}
            			_hx_goto_4:;
            		}
HXLINE( 280)		return hitTest;
            	}


bool SimpleButton_obj::_hx___hitTestMask(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_284___hitTestMask)
HXLINE( 285)		bool hitTest = false;
HXLINE( 287)		if (this->_hx___currentState->_hx___hitTestMask(x,y)) {
HXLINE( 289)			hitTest = true;
            		}
HXLINE( 292)		return hitTest;
            	}


void SimpleButton_obj::_hx___setStageReference( ::openfl::display::Stage stage){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_296___setStageReference)
HXLINE( 297)		this->super::_hx___setStageReference(stage);
HXLINE( 299)		if (::hx::IsNotNull( this->_hx___currentState )) {
HXLINE( 301)			this->_hx___currentState->_hx___setStageReference(stage);
            		}
HXLINE( 304)		bool _hx_tmp;
HXDLIN( 304)		if (::hx::IsNotNull( this->get_hitTestState() )) {
HXLINE( 304)			 ::openfl::display::DisplayObject _hx_tmp1 = this->get_hitTestState();
HXDLIN( 304)			_hx_tmp = ::hx::IsInstanceNotEq( _hx_tmp1,this->_hx___currentState );
            		}
            		else {
HXLINE( 304)			_hx_tmp = false;
            		}
HXDLIN( 304)		if (_hx_tmp) {
HXLINE( 306)			this->get_hitTestState()->_hx___setStageReference(stage);
            		}
            	}


void SimpleButton_obj::_hx___setTransformDirty(){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_311___setTransformDirty)
HXLINE( 312)		this->super::_hx___setTransformDirty();
HXLINE( 314)		if (::hx::IsNotNull( this->_hx___currentState )) {
HXLINE( 316)			this->_hx___currentState->_hx___setTransformDirty();
            		}
HXLINE( 319)		bool _hx_tmp;
HXDLIN( 319)		if (::hx::IsNotNull( this->get_hitTestState() )) {
HXLINE( 319)			 ::openfl::display::DisplayObject _hx_tmp1 = this->get_hitTestState();
HXDLIN( 319)			_hx_tmp = ::hx::IsInstanceNotEq( _hx_tmp1,this->_hx___currentState );
            		}
            		else {
HXLINE( 319)			_hx_tmp = false;
            		}
HXDLIN( 319)		if (_hx_tmp) {
HXLINE( 321)			this->get_hitTestState()->_hx___setTransformDirty();
            		}
            	}


void SimpleButton_obj::_hx___update(bool transformOnly,bool updateChildren){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_326___update)
HXLINE( 327)		this->super::_hx___update(transformOnly,updateChildren);
HXLINE( 329)		if (updateChildren) {
HXLINE( 331)			if (::hx::IsNotNull( this->_hx___currentState )) {
HXLINE( 333)				this->_hx___currentState->_hx___update(transformOnly,true);
            			}
HXLINE( 336)			bool _hx_tmp;
HXDLIN( 336)			if (::hx::IsNotNull( this->get_hitTestState() )) {
HXLINE( 336)				 ::openfl::display::DisplayObject _hx_tmp1 = this->get_hitTestState();
HXDLIN( 336)				_hx_tmp = ::hx::IsInstanceNotEq( _hx_tmp1,this->_hx___currentState );
            			}
            			else {
HXLINE( 336)				_hx_tmp = false;
            			}
HXDLIN( 336)			if (_hx_tmp) {
HXLINE( 338)				this->get_hitTestState()->_hx___update(transformOnly,true);
            			}
            		}
            	}


void SimpleButton_obj::_hx___updateTransforms( ::openfl::geom::Matrix overrideTransform){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_344___updateTransforms)
HXLINE( 345)		this->super::_hx___updateTransforms(overrideTransform);
HXLINE( 347)		if (::hx::IsNotNull( this->_hx___currentState )) {
HXLINE( 349)			this->_hx___currentState->_hx___updateTransforms(null());
            		}
HXLINE( 352)		bool _hx_tmp;
HXDLIN( 352)		if (::hx::IsNotNull( this->get_hitTestState() )) {
HXLINE( 352)			 ::openfl::display::DisplayObject _hx_tmp1 = this->get_hitTestState();
HXDLIN( 352)			_hx_tmp = ::hx::IsInstanceNotEq( _hx_tmp1,this->_hx___currentState );
            		}
            		else {
HXLINE( 352)			_hx_tmp = false;
            		}
HXDLIN( 352)		if (_hx_tmp) {
HXLINE( 354)			this->get_hitTestState()->_hx___updateTransforms(null());
            		}
            	}


 ::openfl::display::DisplayObject SimpleButton_obj::get_downState(){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_361_get_downState)
HXDLIN( 361)		return this->_hx___downState;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleButton_obj,get_downState,return )

 ::openfl::display::DisplayObject SimpleButton_obj::set_downState( ::openfl::display::DisplayObject downState){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_365_set_downState)
HXLINE( 366)		bool _hx_tmp;
HXDLIN( 366)		if (::hx::IsNotNull( this->_hx___downState )) {
HXLINE( 366)			_hx_tmp = ::hx::IsInstanceEq( this->_hx___currentState,this->_hx___downState );
            		}
            		else {
HXLINE( 366)			_hx_tmp = false;
            		}
HXDLIN( 366)		if (_hx_tmp) {
HXLINE( 368)			this->set___currentState(this->_hx___downState);
            		}
HXLINE( 371)		return (this->_hx___downState = downState);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,set_downState,return )

 ::openfl::display::DisplayObject SimpleButton_obj::get_hitTestState(){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_376_get_hitTestState)
HXDLIN( 376)		return this->_hx___hitTestState;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleButton_obj,get_hitTestState,return )

 ::openfl::display::DisplayObject SimpleButton_obj::set_hitTestState( ::openfl::display::DisplayObject hitTestState){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_380_set_hitTestState)
HXLINE( 381)		bool _hx_tmp;
HXDLIN( 381)		if (::hx::IsNotNull( this->_hx___hitTestState )) {
HXLINE( 381)			_hx_tmp = ::hx::IsInstanceNotEq( this->_hx___hitTestState,hitTestState );
            		}
            		else {
HXLINE( 381)			_hx_tmp = false;
            		}
HXDLIN( 381)		if (_hx_tmp) {
HXLINE( 383)			bool _hx_tmp;
HXDLIN( 383)			bool _hx_tmp1;
HXDLIN( 383)			 ::openfl::display::DisplayObject _hx_tmp2 = this->_hx___hitTestState;
HXDLIN( 383)			if (::hx::IsInstanceNotEq( _hx_tmp2,this->get_downState() )) {
HXLINE( 383)				 ::openfl::display::DisplayObject _hx_tmp = this->_hx___hitTestState;
HXDLIN( 383)				_hx_tmp1 = ::hx::IsInstanceNotEq( _hx_tmp,this->get_upState() );
            			}
            			else {
HXLINE( 383)				_hx_tmp1 = false;
            			}
HXDLIN( 383)			if (_hx_tmp1) {
HXLINE( 383)				 ::openfl::display::DisplayObject _hx_tmp1 = this->_hx___hitTestState;
HXDLIN( 383)				_hx_tmp = ::hx::IsInstanceNotEq( _hx_tmp1,this->get_overState() );
            			}
            			else {
HXLINE( 383)				_hx_tmp = false;
            			}
HXDLIN( 383)			if (_hx_tmp) {
HXLINE( 385)				this->_hx___hitTestState->_hx___renderParent = null();
            			}
            		}
HXLINE( 389)		if (::hx::IsNotNull( hitTestState )) {
HXLINE( 391)			hitTestState->_hx___renderParent = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 392)			if (!(hitTestState->_hx___renderDirty)) {
HXLINE( 392)				hitTestState->_hx___renderDirty = true;
HXDLIN( 392)				hitTestState->_hx___setParentRenderDirty();
            			}
            		}
HXLINE( 395)		return (this->_hx___hitTestState = hitTestState);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,set_hitTestState,return )

 ::openfl::display::DisplayObject SimpleButton_obj::get_overState(){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_400_get_overState)
HXDLIN( 400)		return this->_hx___overState;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleButton_obj,get_overState,return )

 ::openfl::display::DisplayObject SimpleButton_obj::set_overState( ::openfl::display::DisplayObject overState){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_404_set_overState)
HXLINE( 405)		bool _hx_tmp;
HXDLIN( 405)		if (::hx::IsNotNull( this->_hx___overState )) {
HXLINE( 405)			_hx_tmp = ::hx::IsInstanceEq( this->_hx___currentState,this->_hx___overState );
            		}
            		else {
HXLINE( 405)			_hx_tmp = false;
            		}
HXDLIN( 405)		if (_hx_tmp) {
HXLINE( 407)			this->set___currentState(overState);
            		}
HXLINE( 410)		return (this->_hx___overState = overState);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,set_overState,return )

 ::openfl::media::SoundTransform SimpleButton_obj::get_soundTransform(){
            	HX_GC_STACKFRAME(&_hx_pos_10b8a2091f17fcad_414_get_soundTransform)
HXLINE( 415)		if (::hx::IsNull( this->_hx___soundTransform )) {
HXLINE( 417)			this->_hx___soundTransform =  ::openfl::media::SoundTransform_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE( 420)		return  ::openfl::media::SoundTransform_obj::__alloc( HX_CTX ,this->_hx___soundTransform->volume,this->_hx___soundTransform->pan);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleButton_obj,get_soundTransform,return )

 ::openfl::media::SoundTransform SimpleButton_obj::set_soundTransform( ::openfl::media::SoundTransform value){
            	HX_GC_STACKFRAME(&_hx_pos_10b8a2091f17fcad_424_set_soundTransform)
HXLINE( 425)		this->_hx___soundTransform =  ::openfl::media::SoundTransform_obj::__alloc( HX_CTX ,value->volume,value->pan);
HXLINE( 426)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,set_soundTransform,return )

 ::openfl::display::DisplayObject SimpleButton_obj::get_upState(){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_431_get_upState)
HXDLIN( 431)		return this->_hx___upState;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SimpleButton_obj,get_upState,return )

 ::openfl::display::DisplayObject SimpleButton_obj::set_upState( ::openfl::display::DisplayObject upState){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_435_set_upState)
HXLINE( 436)		bool _hx_tmp;
HXDLIN( 436)		if (::hx::IsNotNull( this->_hx___upState )) {
HXLINE( 436)			_hx_tmp = ::hx::IsInstanceEq( this->_hx___currentState,this->_hx___upState );
            		}
            		else {
HXLINE( 436)			_hx_tmp = false;
            		}
HXDLIN( 436)		if (_hx_tmp) {
HXLINE( 438)			this->set___currentState(upState);
            		}
HXLINE( 441)		return (this->_hx___upState = upState);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,set_upState,return )

 ::openfl::display::DisplayObject SimpleButton_obj::set___currentState( ::openfl::display::DisplayObject value){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_445_set___currentState)
HXLINE( 446)		bool _hx_tmp;
HXDLIN( 446)		if (::hx::IsNotNull( this->_hx___currentState )) {
HXLINE( 446)			 ::openfl::display::DisplayObject _hx_tmp1 = this->_hx___currentState;
HXDLIN( 446)			_hx_tmp = ::hx::IsInstanceNotEq( _hx_tmp1,this->get_hitTestState() );
            		}
            		else {
HXLINE( 446)			_hx_tmp = false;
            		}
HXDLIN( 446)		if (_hx_tmp) {
HXLINE( 448)			this->_hx___currentState->_hx___renderParent = null();
            		}
HXLINE( 451)		bool _hx_tmp1;
HXDLIN( 451)		if (::hx::IsNotNull( value )) {
HXLINE( 451)			_hx_tmp1 = ::hx::IsNotNull( value->parent );
            		}
            		else {
HXLINE( 451)			_hx_tmp1 = false;
            		}
HXDLIN( 451)		if (_hx_tmp1) {
HXLINE( 453)			value->parent->removeChild(value);
            		}
HXLINE( 464)		if (::hx::IsInstanceNotEq( value,this->_hx___currentState )) {
HXLINE( 485)			if (::hx::IsNotNull( value )) {
HXLINE( 487)				value->_hx___renderParent = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 488)				if (!(value->_hx___renderDirty)) {
HXLINE( 488)					value->_hx___renderDirty = true;
HXDLIN( 488)					value->_hx___setParentRenderDirty();
            				}
            			}
HXLINE( 491)			if (!(this->_hx___renderDirty)) {
HXLINE( 491)				this->_hx___renderDirty = true;
HXDLIN( 491)				this->_hx___setParentRenderDirty();
            			}
            		}
HXLINE( 494)		this->_hx___currentState = value;
HXLINE( 496)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,set___currentState,return )

void SimpleButton_obj::_hx___this_onMouseDown( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_502___this_onMouseDown)
HXDLIN( 502)		if (this->enabled) {
HXLINE( 504)			this->set___currentState(this->get_downState());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,_hx___this_onMouseDown,(void))

void SimpleButton_obj::_hx___this_onMouseOut( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_509___this_onMouseOut)
HXLINE( 510)		this->_hx___ignoreEvent = false;
HXLINE( 512)		 ::openfl::display::DisplayObject _hx_tmp = this->get_upState();
HXDLIN( 512)		if (::hx::IsInstanceNotEq( _hx_tmp,this->_hx___currentState )) {
HXLINE( 514)			this->set___currentState(this->get_upState());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,_hx___this_onMouseOut,(void))

void SimpleButton_obj::_hx___this_onMouseOver( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_519___this_onMouseOver)
HXLINE( 520)		if (event->buttonDown) {
HXLINE( 522)			this->_hx___ignoreEvent = true;
            		}
HXLINE( 525)		bool _hx_tmp;
HXDLIN( 525)		bool _hx_tmp1;
HXDLIN( 525)		bool _hx_tmp2;
HXDLIN( 525)		 ::openfl::display::DisplayObject _hx_tmp3 = this->get_overState();
HXDLIN( 525)		if (::hx::IsInstanceNotEq( _hx_tmp3,this->_hx___currentState )) {
HXLINE( 525)			_hx_tmp2 = ::hx::IsNotNull( this->get_overState() );
            		}
            		else {
HXLINE( 525)			_hx_tmp2 = false;
            		}
HXDLIN( 525)		if (_hx_tmp2) {
HXLINE( 525)			_hx_tmp1 = !(this->_hx___ignoreEvent);
            		}
            		else {
HXLINE( 525)			_hx_tmp1 = false;
            		}
HXDLIN( 525)		if (_hx_tmp1) {
HXLINE( 525)			_hx_tmp = this->enabled;
            		}
            		else {
HXLINE( 525)			_hx_tmp = false;
            		}
HXDLIN( 525)		if (_hx_tmp) {
HXLINE( 527)			this->set___currentState(this->get_overState());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,_hx___this_onMouseOver,(void))

void SimpleButton_obj::_hx___this_onMouseUp( ::openfl::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_10b8a2091f17fcad_532___this_onMouseUp)
HXLINE( 533)		this->_hx___ignoreEvent = false;
HXLINE( 535)		bool _hx_tmp;
HXDLIN( 535)		if (this->enabled) {
HXLINE( 535)			_hx_tmp = ::hx::IsNotNull( this->get_overState() );
            		}
            		else {
HXLINE( 535)			_hx_tmp = false;
            		}
HXDLIN( 535)		if (_hx_tmp) {
HXLINE( 537)			this->set___currentState(this->get_overState());
            		}
            		else {
HXLINE( 541)			this->set___currentState(this->get_upState());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,_hx___this_onMouseUp,(void))

 ::Dynamic SimpleButton_obj::_hx___constructor;


::hx::ObjectPtr< SimpleButton_obj > SimpleButton_obj::__new( ::openfl::display::DisplayObject upState, ::openfl::display::DisplayObject overState, ::openfl::display::DisplayObject downState, ::openfl::display::DisplayObject hitTestState) {
	::hx::ObjectPtr< SimpleButton_obj > __this = new SimpleButton_obj();
	__this->__construct(upState,overState,downState,hitTestState);
	return __this;
}

::hx::ObjectPtr< SimpleButton_obj > SimpleButton_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::DisplayObject upState, ::openfl::display::DisplayObject overState, ::openfl::display::DisplayObject downState, ::openfl::display::DisplayObject hitTestState) {
	SimpleButton_obj *__this = (SimpleButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SimpleButton_obj), true, "openfl.display.SimpleButton"));
	*(void **)__this = SimpleButton_obj::_hx_vtable;
	__this->__construct(upState,overState,downState,hitTestState);
	return __this;
}

SimpleButton_obj::SimpleButton_obj()
{
}

void SimpleButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimpleButton);
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(trackAsMenu,"trackAsMenu");
	HX_MARK_MEMBER_NAME(useHandCursor,"useHandCursor");
	HX_MARK_MEMBER_NAME(_hx___currentState,"__currentState");
	HX_MARK_MEMBER_NAME(_hx___downState,"__downState");
	HX_MARK_MEMBER_NAME(_hx___hitTestState,"__hitTestState");
	HX_MARK_MEMBER_NAME(_hx___ignoreEvent,"__ignoreEvent");
	HX_MARK_MEMBER_NAME(_hx___overState,"__overState");
	HX_MARK_MEMBER_NAME(_hx___previousStates,"__previousStates");
	HX_MARK_MEMBER_NAME(_hx___soundTransform,"__soundTransform");
	HX_MARK_MEMBER_NAME(_hx___upState,"__upState");
	 ::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SimpleButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(trackAsMenu,"trackAsMenu");
	HX_VISIT_MEMBER_NAME(useHandCursor,"useHandCursor");
	HX_VISIT_MEMBER_NAME(_hx___currentState,"__currentState");
	HX_VISIT_MEMBER_NAME(_hx___downState,"__downState");
	HX_VISIT_MEMBER_NAME(_hx___hitTestState,"__hitTestState");
	HX_VISIT_MEMBER_NAME(_hx___ignoreEvent,"__ignoreEvent");
	HX_VISIT_MEMBER_NAME(_hx___overState,"__overState");
	HX_VISIT_MEMBER_NAME(_hx___previousStates,"__previousStates");
	HX_VISIT_MEMBER_NAME(_hx___soundTransform,"__soundTransform");
	HX_VISIT_MEMBER_NAME(_hx___upState,"__upState");
	 ::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SimpleButton_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return ::hx::Val( enabled ); }
		if (HX_FIELD_EQ(inName,"upState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_upState() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__update") ) { return ::hx::Val( _hx___update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"downState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_downState() ); }
		if (HX_FIELD_EQ(inName,"overState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_overState() ); }
		if (HX_FIELD_EQ(inName,"__upState") ) { return ::hx::Val( _hx___upState ); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return ::hx::Val( _hx___hitTest_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"trackAsMenu") ) { return ::hx::Val( trackAsMenu ); }
		if (HX_FIELD_EQ(inName,"__downState") ) { return ::hx::Val( _hx___downState ); }
		if (HX_FIELD_EQ(inName,"__overState") ) { return ::hx::Val( _hx___overState ); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return ::hx::Val( _hx___getBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return ::hx::Val( _hx___getCursor_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_upState") ) { return ::hx::Val( get_upState_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_upState") ) { return ::hx::Val( set_upState_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hitTestState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hitTestState() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { return ::hx::Val( useHandCursor ); }
		if (HX_FIELD_EQ(inName,"__ignoreEvent") ) { return ::hx::Val( _hx___ignoreEvent ); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return ::hx::Val( _hx___hitTestMask_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_downState") ) { return ::hx::Val( get_downState_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_downState") ) { return ::hx::Val( set_downState_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_overState") ) { return ::hx::Val( get_overState_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_overState") ) { return ::hx::Val( set_overState_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_soundTransform() ); }
		if (HX_FIELD_EQ(inName,"__currentState") ) { return ::hx::Val( _hx___currentState ); }
		if (HX_FIELD_EQ(inName,"__hitTestState") ) { return ::hx::Val( _hx___hitTestState ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__previousStates") ) { return ::hx::Val( _hx___previousStates ); }
		if (HX_FIELD_EQ(inName,"__soundTransform") ) { return ::hx::Val( _hx___soundTransform ); }
		if (HX_FIELD_EQ(inName,"get_hitTestState") ) { return ::hx::Val( get_hitTestState_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_hitTestState") ) { return ::hx::Val( set_hitTestState_dyn() ); }
		if (HX_FIELD_EQ(inName,"__this_onMouseUp") ) { return ::hx::Val( _hx___this_onMouseUp_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__getRenderBounds") ) { return ::hx::Val( _hx___getRenderBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"__this_onMouseOut") ) { return ::hx::Val( _hx___this_onMouseOut_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__updateTransforms") ) { return ::hx::Val( _hx___updateTransforms_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_soundTransform") ) { return ::hx::Val( get_soundTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_soundTransform") ) { return ::hx::Val( set_soundTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"set___currentState") ) { return ::hx::Val( set___currentState_dyn() ); }
		if (HX_FIELD_EQ(inName,"__this_onMouseDown") ) { return ::hx::Val( _hx___this_onMouseDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"__this_onMouseOver") ) { return ::hx::Val( _hx___this_onMouseOver_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return ::hx::Val( _hx___setStageReference_dyn() ); }
		if (HX_FIELD_EQ(inName,"__setTransformDirty") ) { return ::hx::Val( _hx___setTransformDirty_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SimpleButton_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"__constructor") ) { outValue = ( _hx___constructor ); return true; }
	}
	return false;
}

::hx::Val SimpleButton_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"upState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_upState(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"downState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_downState(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		if (HX_FIELD_EQ(inName,"overState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_overState(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		if (HX_FIELD_EQ(inName,"__upState") ) { _hx___upState=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"trackAsMenu") ) { trackAsMenu=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__downState") ) { _hx___downState=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__overState") ) { _hx___overState=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hitTestState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hitTestState(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { useHandCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__ignoreEvent") ) { _hx___ignoreEvent=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_soundTransform(inValue.Cast<  ::openfl::media::SoundTransform >()) ); }
		if (HX_FIELD_EQ(inName,"__currentState") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set___currentState(inValue.Cast<  ::openfl::display::DisplayObject >()) );_hx___currentState=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hitTestState") ) { _hx___hitTestState=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__previousStates") ) { _hx___previousStates=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__soundTransform") ) { _hx___soundTransform=inValue.Cast<  ::openfl::media::SoundTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SimpleButton_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"__constructor") ) { _hx___constructor=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void SimpleButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("downState",4f,4a,21,9a));
	outFields->push(HX_("enabled",81,04,31,7e));
	outFields->push(HX_("hitTestState",8c,6b,9d,a1));
	outFields->push(HX_("overState",1d,04,cd,e7));
	outFields->push(HX_("soundTransform",9d,ee,de,22));
	outFields->push(HX_("trackAsMenu",9c,24,df,da));
	outFields->push(HX_("upState",b6,95,80,e0));
	outFields->push(HX_("useHandCursor",cc,da,ae,89));
	outFields->push(HX_("__currentState",38,de,d7,eb));
	outFields->push(HX_("__downState",2f,93,4d,c8));
	outFields->push(HX_("__hitTestState",ac,ee,5d,c2));
	outFields->push(HX_("__ignoreEvent",88,9e,cf,e1));
	outFields->push(HX_("__overState",fd,4c,f9,15));
	outFields->push(HX_("__previousStates",f9,17,d2,28));
	outFields->push(HX_("__soundTransform",bd,79,1e,57));
	outFields->push(HX_("__upState",96,e6,ce,61));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SimpleButton_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(SimpleButton_obj,enabled),HX_("enabled",81,04,31,7e)},
	{::hx::fsBool,(int)offsetof(SimpleButton_obj,trackAsMenu),HX_("trackAsMenu",9c,24,df,da)},
	{::hx::fsBool,(int)offsetof(SimpleButton_obj,useHandCursor),HX_("useHandCursor",cc,da,ae,89)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(SimpleButton_obj,_hx___currentState),HX_("__currentState",38,de,d7,eb)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(SimpleButton_obj,_hx___downState),HX_("__downState",2f,93,4d,c8)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(SimpleButton_obj,_hx___hitTestState),HX_("__hitTestState",ac,ee,5d,c2)},
	{::hx::fsBool,(int)offsetof(SimpleButton_obj,_hx___ignoreEvent),HX_("__ignoreEvent",88,9e,cf,e1)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(SimpleButton_obj,_hx___overState),HX_("__overState",fd,4c,f9,15)},
	{::hx::fsObject /*  ::openfl::_Vector::ObjectVector */ ,(int)offsetof(SimpleButton_obj,_hx___previousStates),HX_("__previousStates",f9,17,d2,28)},
	{::hx::fsObject /*  ::openfl::media::SoundTransform */ ,(int)offsetof(SimpleButton_obj,_hx___soundTransform),HX_("__soundTransform",bd,79,1e,57)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(SimpleButton_obj,_hx___upState),HX_("__upState",96,e6,ce,61)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo SimpleButton_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &SimpleButton_obj::_hx___constructor,HX_("__constructor",da,6d,3d,e0)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String SimpleButton_obj_sMemberFields[] = {
	HX_("enabled",81,04,31,7e),
	HX_("trackAsMenu",9c,24,df,da),
	HX_("useHandCursor",cc,da,ae,89),
	HX_("__currentState",38,de,d7,eb),
	HX_("__downState",2f,93,4d,c8),
	HX_("__hitTestState",ac,ee,5d,c2),
	HX_("__ignoreEvent",88,9e,cf,e1),
	HX_("__overState",fd,4c,f9,15),
	HX_("__previousStates",f9,17,d2,28),
	HX_("__soundTransform",bd,79,1e,57),
	HX_("__upState",96,e6,ce,61),
	HX_("__getBounds",8b,58,a0,10),
	HX_("__getRenderBounds",01,11,b8,7b),
	HX_("__getCursor",ec,60,6b,e9),
	HX_("__hitTest",25,b1,cd,63),
	HX_("__hitTestMask",b1,14,fd,3b),
	HX_("__setStageReference",4f,e5,e5,f4),
	HX_("__setTransformDirty",28,1b,24,99),
	HX_("__update",29,f1,34,2f),
	HX_("__updateTransforms",10,f4,b0,50),
	HX_("get_downState",26,1e,85,5b),
	HX_("set_downState",32,00,8b,a0),
	HX_("get_hitTestState",15,58,3c,a6),
	HX_("set_hitTestState",89,45,7e,fc),
	HX_("get_overState",f4,d7,30,a9),
	HX_("set_overState",00,ba,36,ee),
	HX_("get_soundTransform",66,cf,78,be),
	HX_("set_soundTransform",da,01,28,9b),
	HX_("get_upState",cd,f5,7a,66),
	HX_("set_upState",d9,fc,e7,70),
	HX_("set___currentState",75,f1,20,64),
	HX_("__this_onMouseDown",87,f0,3a,d9),
	HX_("__this_onMouseOut",09,b4,18,95),
	HX_("__this_onMouseOver",79,89,85,e0),
	HX_("__this_onMouseUp",40,9b,2a,90),
	::String(null()) };

static void SimpleButton_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SimpleButton_obj::_hx___constructor,"__constructor");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SimpleButton_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SimpleButton_obj::_hx___constructor,"__constructor");
};

#endif

::hx::Class SimpleButton_obj::__mClass;

static ::String SimpleButton_obj_sStaticFields[] = {
	HX_("__constructor",da,6d,3d,e0),
	::String(null())
};

void SimpleButton_obj::__register()
{
	SimpleButton_obj _hx_dummy;
	SimpleButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.SimpleButton",2e,f7,40,72);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SimpleButton_obj::__GetStatic;
	__mClass->mSetStaticField = &SimpleButton_obj::__SetStatic;
	__mClass->mMarkFunc = SimpleButton_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SimpleButton_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SimpleButton_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SimpleButton_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SimpleButton_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SimpleButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SimpleButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
