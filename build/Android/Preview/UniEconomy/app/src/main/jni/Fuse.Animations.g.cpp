// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.AnimatorState.h>
#include <Fuse.Animations.AnimatorVariant.h>
#include <Fuse.Animations.Attractor-1.h>
#include <Fuse.Animations.AverageMasterProperty-1.h>
#include <Fuse.Animations.AverageMasterTransform.h>
#include <Fuse.Animations.AverageMixer.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.ContinuousTrackChangeState-1.h>
#include <Fuse.Animations.ContinuousTrackProvider.h>
#include <Fuse.Animations.Converter-1.h>
#include <Fuse.Animations.ConverterDouble.h>
#include <Fuse.Animations.ConverterFloat.h>
#include <Fuse.Animations.ConverterFloat2.h>
#include <Fuse.Animations.ConverterFloat3.h>
#include <Fuse.Animations.ConverterFloat4.h>
#include <Fuse.Animations.ConverterSize.h>
#include <Fuse.Animations.ConverterSize2.h>
#include <Fuse.Animations.CreateStateParams.h>
#include <Fuse.Animations.Cycle-1.h>
#include <Fuse.Animations.CycleState-1.h>
#include <Fuse.Animations.CycleWaveform.h>
#include <Fuse.Animations.DiscreteKeyframeTrack.h>
#include <Fuse.Animations.DiscreteMasterProperty-1.h>
#include <Fuse.Animations.DiscreteMasterTransform.h>
#include <Fuse.Animations.DiscreteMixer.h>
#include <Fuse.Animations.DiscreteSingleTrack.h>
#include <Fuse.Animations.DiscreteTrackChangeState-1.h>
#include <Fuse.Animations.DiscreteTrackProvider.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.EasingFunction.h>
#include <Fuse.Animations.EasingFunctions.h>
#include <Fuse.Animations.EasingTrack.h>
#include <Fuse.Animations.FastMatrixTransform.h>
#include <Fuse.Animations.IMixer.h>
#include <Fuse.Animations.IMixerHandle-1.h>
#include <Fuse.Animations.IMixerMaster.h>
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Animations.IResize.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.ITrackProvider.h>
#include <Fuse.Animations.Keyframe.h>
#include <Fuse.Animations.KeyframeInterpolation.h>
#include <Fuse.Animations.KeyframeTrack.h>
#include <Fuse.Animations.MasterBase-1.GFWResult.h>
#include <Fuse.Animations.MasterBase-1.h>
#include <Fuse.Animations.MasterProperty-1.h>
#include <Fuse.Animations.MasterPropertyGet.h>
#include <Fuse.Animations.MasterTransform.h>
#include <Fuse.Animations.Mixer.h>
#include <Fuse.Animations.MixerBase.h>
#include <Fuse.Animations.MixerHandle-1.h>
#include <Fuse.Animations.MixOp.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Nothing.h>
#include <Fuse.Animations.NothingAnimatorState.h>
#include <Fuse.Animations.OpenAnimator.h>
#include <Fuse.Animations.OpenAnimatorState.h>
#include <Fuse.Animations.Player.h>
#include <Fuse.Animations.PlayerPart.h>
#include <Fuse.Animations.PlayMode.h>
#include <Fuse.Animations.RangeAdapter-1.h>
#include <Fuse.Animations.RangeAdapterHelpers.h>
#include <Fuse.Animations.Resize.h>
#include <Fuse.Animations.ResizeAnimatorState.h>
#include <Fuse.Animations.Rotate.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.SeekDirection.h>
#include <Fuse.Animations.SeekResult.h>
#include <Fuse.Animations.Skew.h>
#include <Fuse.Animations.Spin.h>
#include <Fuse.Animations.SpinState.h>
#include <Fuse.Animations.SplineTrack.h>
#include <Fuse.Animations.SplineTrack.PointInterpolater.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TrackAnimatorState.h>
#include <Fuse.Animations.TrackProvider.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Animations.TransformAnimatorState-1.h>
#include <Fuse.Animations.TransformPriority.h>
#include <Fuse.Animations.TriggerAnimation.h>
#include <Fuse.Animations.TriggerAnimationState.h>
#include <Fuse.Animations.TriggerAnimationState.SeekFlags.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Internal.Blender-1.h>
#include <Fuse.Internal.BlenderMap.h>
#include <Fuse.Internal.ScalarBlender-1.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITransformMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Motion.DestinationMotion-1.h>
#include <Fuse.Motion.MotionDestinationType.h>
#include <Fuse.Motion.MotionUnit.h>
#include <Fuse.Motion.Simulation.DestinationSimulation-1.h>
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Fuse.Node.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Rotation.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Time.h>
#include <Fuse.Transform.h>
#include <Fuse.TransformModeFlags.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
static uString* STRINGS[20];
static uType* TYPES[61];

namespace g{
namespace Fuse{
namespace Animations{

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public enum AnimationVariant :3616
uEnumType* AnimationVariant_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.AnimationVariant", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public abstract class Animator :49
// {
static void Animator_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Animations::MixOp_typeof(), offsetof(::g::Fuse::Animations::Animator, _mixOp), 0,
        ::g::Fuse::Animations::IMixer_typeof(), offsetof(::g::Fuse::Animations::Animator, Mixer), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::Animator, _Delay), 0);
    type->Reflection.SetFields(1,
        new uField("Mixer", 2));
    type->Reflection.SetFunctions(4,
        new uFunction("get_Delay", NULL, (void*)Animator__get_Delay_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Delay", NULL, (void*)Animator__set_Delay_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_MixOp", NULL, (void*)Animator__get_MixOp_fn, 0, false, ::g::Fuse::Animations::MixOp_typeof(), 0),
        new uFunction("set_MixOp", NULL, (void*)Animator__set_MixOp_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::MixOp_typeof()));
}

Animator_type* Animator_typeof()
{
    static uSStrong<Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Animator);
    options.TypeSize = sizeof(Animator_type);
    type = (Animator_type*)uClassType::New("Fuse.Animations.Animator", options);
    type->SetBase(::g::Uno::UX::PropertyObject_typeof());
    type->fp_build_ = Animator_build;
    type->fp_get_AnimatorVariant = Animator__get_AnimatorVariant_fn;
    type->fp_GetDurationWithDelay = Animator__GetDurationWithDelay_fn;
    return type;
}

// internal Animator() :79
void Animator__ctor_1_fn(Animator* __this)
{
    __this->ctor_1();
}

// internal virtual Fuse.Animations.AnimatorVariant get_AnimatorVariant() :60
void Animator__get_AnimatorVariant_fn(Animator* __this, int* __retval)
{
    uStackFrame __("Fuse.Animations.Animator", "get_AnimatorVariant()");
    return *__retval = 0, void();
}

// public generated double get_Delay() :58
void Animator__get_Delay_fn(Animator* __this, double* __retval)
{
    *__retval = __this->Delay();
}

// public generated void set_Delay(double value) :58
void Animator__set_Delay_fn(Animator* __this, double* value)
{
    __this->Delay(*value);
}

// internal virtual double GetDurationWithDelay(Fuse.Animations.AnimationVariant dir) :74
void Animator__GetDurationWithDelay_fn(Animator* __this, int* dir, double* __retval)
{
    uStackFrame __("Fuse.Animations.Animator", "GetDurationWithDelay(Fuse.Animations.AnimationVariant)");
    return *__retval = __this->Delay(), void();
}

// public Fuse.Animations.MixOp get_MixOp() :70
void Animator__get_MixOp_fn(Animator* __this, int* __retval)
{
    *__retval = __this->MixOp();
}

// public void set_MixOp(Fuse.Animations.MixOp value) :71
void Animator__set_MixOp_fn(Animator* __this, int* value)
{
    __this->MixOp(*value);
}

// internal Animator() [instance] :79
void Animator::ctor_1()
{
    uStackFrame __("Fuse.Animations.Animator", ".ctor()");
    Mixer = ::g::Fuse::Animations::Mixer::Default();
    ctor_();
}

// public generated double get_Delay() [instance] :58
double Animator::Delay()
{
    uStackFrame __("Fuse.Animations.Animator", "get_Delay()");
    return _Delay;
}

// public generated void set_Delay(double value) [instance] :58
void Animator::Delay(double value)
{
    uStackFrame __("Fuse.Animations.Animator", "set_Delay(double)");
    _Delay = value;
}

// public Fuse.Animations.MixOp get_MixOp() [instance] :70
int Animator::MixOp()
{
    uStackFrame __("Fuse.Animations.Animator", "get_MixOp()");
    return _mixOp;
}

// public void set_MixOp(Fuse.Animations.MixOp value) [instance] :71
void Animator::MixOp(int value)
{
    uStackFrame __("Fuse.Animations.Animator", "set_MixOp(Fuse.Animations.MixOp)");
    _mixOp = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal abstract class AnimatorState :103
// {
static void AnimatorState_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::AnimatorState, TotalDuration), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Animations::AnimatorState, Variant), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::AnimatorState, Visual), 0);
}

AnimatorState_type* AnimatorState_typeof()
{
    static uSStrong<AnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(AnimatorState);
    options.TypeSize = sizeof(AnimatorState_type);
    type = (AnimatorState_type*)uClassType::New("Fuse.Animations.AnimatorState", options);
    type->fp_build_ = AnimatorState_build;
    type->fp_Disable = AnimatorState__Disable_fn;
    type->fp_get_IsOpenEnd = AnimatorState__get_IsOpenEnd_fn;
    return type;
}

// protected AnimatorState(Fuse.Animations.CreateStateParams p, [Fuse.Visual useVisual]) :109
void AnimatorState__ctor__fn(AnimatorState* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual)
{
    __this->ctor_(p, useVisual);
}

// public virtual void Disable() :123
void AnimatorState__Disable_fn(AnimatorState* __this)
{
}

// public virtual bool get_IsOpenEnd() :122
void AnimatorState__get_IsOpenEnd_fn(AnimatorState* __this, bool* __retval)
{
    uStackFrame __("Fuse.Animations.AnimatorState", "get_IsOpenEnd()");
    return *__retval = false, void();
}

// protected AnimatorState(Fuse.Animations.CreateStateParams p, [Fuse.Visual useVisual]) [instance] :109
void AnimatorState::ctor_(::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual)
{
    uStackFrame __("Fuse.Animations.AnimatorState", ".ctor(Fuse.Animations.CreateStateParams,[Fuse.Visual])");
    Variant = uPtr(p)->Variant;
    Visual = ((useVisual != NULL) ? useVisual : (::g::Fuse::Visual*)p->Attached);
    TotalDuration = p->TotalDuration;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal enum AnimatorVariant :8
uEnumType* AnimatorVariant_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.AnimatorVariant", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Allow", 0LL,
        "Disallow", 1LL,
        "HasBackward", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public sealed class Attractor<T> :154
// {
static void Attractor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("target");
    ::STRINGS[1] = uString::Const("Motion should not be changed post-rooting");
    ::STRINGS[2] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno");
    ::STRINGS[3] = uString::Const("set_Motion");
    ::TYPES[0] = ::g::Fuse::Motion::DestinationMotion_typeof();
    ::TYPES[1] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[3] = ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof();
    ::TYPES[4] = ::g::Uno::UX::IPropertyListener_typeof();
    ::TYPES[5] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof();
    ::TYPES[6] = uObject_typeof();
    type->SetPrecalc(
        ::g::Fuse::Motion::DestinationMotion_typeof()->MakeType(type->T(0)),
        ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(type->T(0)),
        ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Attractor_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Attractor_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Attractor_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Attractor_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Attractor_type, interface4));
    type->SetFields(14,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Attractor, _isEnabled), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Attractor, _isUpdate), 0,
        ::g::Fuse::Motion::DestinationMotion_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::Attractor, _motion), 0,
        ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::Attractor, _sim), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::Attractor, _timeMultiplier), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::Attractor, _Target), 0);
    type->Reflection.SetFunctions(22,
        new uFunction("get_Distance", NULL, (void*)Attractor__get_Distance_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Distance", NULL, (void*)Attractor__set_Distance_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Duration", NULL, (void*)Attractor__get_Duration_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Duration", NULL, (void*)Attractor__set_Duration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DurationExp", NULL, (void*)Attractor__get_DurationExp_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DurationExp", NULL, (void*)Attractor__set_DurationExp_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Easing", NULL, (void*)Attractor__get_Easing_fn, 0, false, ::g::Fuse::Animations::Easing_typeof(), 0),
        new uFunction("set_Easing", NULL, (void*)Attractor__set_Easing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction("get_IsEnabled", NULL, (void*)Attractor__get_IsEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsEnabled", NULL, (void*)Attractor__set_IsEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Motion", NULL, (void*)Attractor__get_Motion_fn, 0, false, ::g::Fuse::Motion::DestinationMotion_typeof()->MakeType(type->T(0)), 0),
        new uFunction("set_Motion", NULL, (void*)Attractor__set_Motion_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Motion::DestinationMotion_typeof()->MakeType(type->T(0))),
        new uFunction(".ctor", type, (void*)Attractor__New3_fn, 0, true, type, 1, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0))),
        new uFunction("get_Target", NULL, (void*)Attractor__get_Target_fn, 0, false, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), 0),
        new uFunction("get_TimeMultiplier", NULL, (void*)Attractor__get_TimeMultiplier_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_TimeMultiplier", NULL, (void*)Attractor__set_TimeMultiplier_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Type", NULL, (void*)Attractor__get_Type_fn, 0, false, ::g::Fuse::Motion::MotionDestinationType_typeof(), 0),
        new uFunction("set_Type", NULL, (void*)Attractor__set_Type_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Motion::MotionDestinationType_typeof()),
        new uFunction("get_Unit", NULL, (void*)Attractor__get_Unit_fn, 0, false, ::g::Fuse::Motion::MotionUnit_typeof(), 0),
        new uFunction("set_Unit", NULL, (void*)Attractor__set_Unit_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Motion::MotionUnit_typeof()),
        new uFunction("get_Value", NULL, (void*)Attractor__get_Value_fn, 0, false, type->T(0), 0),
        new uFunction("set_Value", NULL, (void*)Attractor__set_Value_fn, 0, false, uVoid_typeof(), 1, type->T(0)));
}

Attractor_type* Attractor_typeof()
{
    static uSStrong<Attractor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.GenericCount = 1;
    options.InterfaceCount = 5;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(Attractor);
    options.TypeSize = sizeof(Attractor_type);
    type = (Attractor_type*)uClassType::New("Fuse.Animations.Attractor`1", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_build_ = Attractor_build;
    type->fp_ctor_ = (void*)Attractor__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Attractor__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Attractor__OnUnrooted_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Attractor__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal Attractor() :156
void Attractor__ctor_3_fn(Attractor* __this)
{
    __this->ctor_3();
}

// public Attractor(Uno.UX.Property<T> target) :164
void Attractor__ctor_4_fn(Attractor* __this, ::g::Uno::UX::Property1* target)
{
    __this->ctor_4(target);
}

// private void CheckNeedUpdate() :277
void Attractor__CheckNeedUpdate_fn(Attractor* __this)
{
    __this->CheckNeedUpdate();
}

// public float get_Distance() :219
void Attractor__get_Distance_fn(Attractor* __this, float* __retval)
{
    *__retval = __this->Distance();
}

// public void set_Distance(float value) :220
void Attractor__set_Distance_fn(Attractor* __this, float* value)
{
    __this->Distance(*value);
}

// public float get_Duration() :207
void Attractor__get_Duration_fn(Attractor* __this, float* __retval)
{
    *__retval = __this->Duration();
}

// public void set_Duration(float value) :208
void Attractor__set_Duration_fn(Attractor* __this, float* value)
{
    __this->Duration(*value);
}

// public float get_DurationExp() :213
void Attractor__get_DurationExp_fn(Attractor* __this, float* __retval)
{
    *__retval = __this->DurationExp();
}

// public void set_DurationExp(float value) :214
void Attractor__set_DurationExp_fn(Attractor* __this, float* value)
{
    __this->DurationExp(*value);
}

// public Fuse.Animations.Easing get_Easing() :194
void Attractor__get_Easing_fn(Attractor* __this, int* __retval)
{
    *__retval = __this->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) :195
void Attractor__set_Easing_fn(Attractor* __this, int* value)
{
    __this->Easing(*value);
}

// public bool get_IsEnabled() :235
void Attractor__get_IsEnabled_fn(Attractor* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// public void set_IsEnabled(bool value) :236
void Attractor__set_IsEnabled_fn(Attractor* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// public Fuse.Motion.DestinationMotion<T> get_Motion() :174
void Attractor__get_Motion_fn(Attractor* __this, ::g::Fuse::Motion::DestinationMotion** __retval)
{
    *__retval = __this->Motion();
}

// public void set_Motion(Fuse.Motion.DestinationMotion<T> value) :175
void Attractor__set_Motion_fn(Attractor* __this, ::g::Fuse::Motion::DestinationMotion* value)
{
    __this->Motion(value);
}

// internal Attractor New() :156
void Attractor__New2_fn(uType* __type, Attractor** __retval)
{
    *__retval = Attractor::New2(__type);
}

// public Attractor New(Uno.UX.Property<T> target) :164
void Attractor__New3_fn(uType* __type, ::g::Uno::UX::Property1* target, Attractor** __retval)
{
    *__retval = Attractor::New3(__type, target);
}

// protected override sealed void OnRooted() :290
void Attractor__OnRooted_fn(Attractor* __this)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", "OnRooted()");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_sim = ((uObject*)uPtr(__this->Motion())->Create());
    ::g::Fuse::Motion::Simulation::DestinationSimulation::Reset_ex(uInterface(uPtr(__this->_sim), __types[1]), (uPtr(__this->Target())->Get_ex(&ret3), ret3));
    uPtr(__this->Target())->AddListener((uObject*)__this);
}

// protected override sealed void OnUnrooted() :298
void Attractor__OnUnrooted_fn(Attractor* __this)
{
    uStackFrame __("Fuse.Animations.Attractor`1", "OnUnrooted()");
    __this->_sim = NULL;
    __this->CheckNeedUpdate();
    uPtr(__this->Target())->RemoveListener((uObject*)__this);
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public generated Uno.UX.Property<T> get_Target() :161
void Attractor__get_Target_fn(Attractor* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :161
void Attractor__set_Target_fn(Attractor* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// public float get_TimeMultiplier() :250
void Attractor__get_TimeMultiplier_fn(Attractor* __this, float* __retval)
{
    *__retval = __this->TimeMultiplier();
}

// public void set_TimeMultiplier(float value) :251
void Attractor__set_TimeMultiplier_fn(Attractor* __this, float* value)
{
    __this->TimeMultiplier(*value);
}

// public Fuse.Motion.MotionDestinationType get_Type() :187
void Attractor__get_Type_fn(Attractor* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public void set_Type(Fuse.Motion.MotionDestinationType value) :188
void Attractor__set_Type_fn(Attractor* __this, int* value)
{
    __this->Type(*value);
}

// public Fuse.Motion.MotionUnit get_Unit() :225
void Attractor__get_Unit_fn(Attractor* __this, int* __retval)
{
    *__retval = __this->Unit();
}

// public void set_Unit(Fuse.Motion.MotionUnit value) :226
void Attractor__set_Unit_fn(Attractor* __this, int* value)
{
    __this->Unit(*value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :316
void Attractor__UnoUXIPropertyListenerOnPropertyChanged_fn(Attractor* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
        __this->__type->Precalced(2/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT val(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__this->_sim == NULL)
        return;

    val = (uPtr(__this->Target())->Get_ex(&ret4), ret4);

    if (!__this->IsEnabled() || ::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(__this->_sim), ::TYPES[1/*Fuse.Motion.Simulation.Simulation*/])))
        ::g::Fuse::Motion::Simulation::DestinationSimulation::Reset_ex(uInterface(uPtr(__this->_sim), __types[1]), val);
    else
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->_sim), __types[2]), val);

    __this->CheckNeedUpdate();
}

// private void Update() :306
void Attractor__Update_fn(Attractor* __this)
{
    __this->Update();
}

// public T get_Value() :256
void Attractor__get_Value_fn(Attractor* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", "get_Value()");
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__this->IsRootingCompleted())
        return __retval.Store((::g::Fuse::Motion::Simulation::DestinationSimulation::get_Destination_ex(uInterface(uPtr(__this->_sim), __types[1]), &ret7), ret7)), void();

    return __retval.Store((uPtr(__this->Target())->Get_ex(&ret8), ret8)), void();
}

// public void set_Value(T value) :262
void Attractor__set_Value_fn(Attractor* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", "set_Value(T)");

    if (__this->IsRootingCompleted())
    {
        ::g::Fuse::Motion::Simulation::DestinationSimulation::set_Destination_ex(uInterface(uPtr(__this->_sim), __types[1]), value);
        __this->CheckNeedUpdate();
    }
    else
        uPtr(__this->Target())->Set_ex(value, (uObject*)__this);
}

// internal Attractor() [instance] :156
void Attractor::ctor_3()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Motion.DestinationMotion<T>*/),
        __type->T(0),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", ".ctor()");
    _motion = ((::g::Fuse::Motion::DestinationMotion*)::g::Fuse::Motion::DestinationMotion::New1(__types[0]));
    _isEnabled = true;
    _timeMultiplier = 1.0f;
    ctor_2();
}

// public Attractor(Uno.UX.Property<T> target) [instance] :164
void Attractor::ctor_4(::g::Uno::UX::Property1* target)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Motion.DestinationMotion<T>*/),
        __type->T(0),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", ".ctor(Uno.UX.Property<T>)");
    _motion = ((::g::Fuse::Motion::DestinationMotion*)::g::Fuse::Motion::DestinationMotion::New1(__types[0]));
    _isEnabled = true;
    _timeMultiplier = 1.0f;
    ctor_2();

    if (target == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"target"*/]));

    Target(target);
}

// private void CheckNeedUpdate() [instance] :277
void Attractor::CheckNeedUpdate()
{
    uStackFrame __("Fuse.Animations.Attractor`1", "CheckNeedUpdate()");
    bool need = (_sim != NULL) && !::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_sim), ::TYPES[1/*Fuse.Motion.Simulation.Simulation*/]));

    if (need == _isUpdate)
        return;

    if (need)
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Attractor__Update_fn, this), 0);
    else
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Attractor__Update_fn, this), 0);

    _isUpdate = need;
}

// public float get_Distance() [instance] :219
float Attractor::Distance()
{
    uStackFrame __("Fuse.Animations.Attractor`1", "get_Distance()");
    return uPtr(_motion)->Distance();
}

// public void set_Distance(float value) [instance] :220
void Attractor::Distance(float value)
{
    uStackFrame __("Fuse.Animations.Attractor`1", "set_Distance(float)");
    uPtr(_motion)->Distance(value);
}

// public float get_Duration() [instance] :207
float Attractor::Duration()
{
    uStackFrame __("Fuse.Animations.Attractor`1", "get_Duration()");
    return uPtr(_motion)->Duration();
}

// public void set_Duration(float value) [instance] :208
void Attractor::Duration(float value)
{
    uStackFrame __("Fuse.Animations.Attractor`1", "set_Duration(float)");
    uPtr(_motion)->Duration(value);
}

// public float get_DurationExp() [instance] :213
float Attractor::DurationExp()
{
    uStackFrame __("Fuse.Animations.Attractor`1", "get_DurationExp()");
    return uPtr(_motion)->DurationExp();
}

// public void set_DurationExp(float value) [instance] :214
void Attractor::DurationExp(float value)
{
    uStackFrame __("Fuse.Animations.Attractor`1", "set_DurationExp(float)");
    uPtr(_motion)->DurationExp(value);
}

// public Fuse.Animations.Easing get_Easing() [instance] :194
int Attractor::Easing()
{
    uStackFrame __("Fuse.Animations.Attractor`1", "get_Easing()");
    return uPtr(_motion)->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) [instance] :195
void Attractor::Easing(int value)
{
    uStackFrame __("Fuse.Animations.Attractor`1", "set_Easing(Fuse.Animations.Easing)");
    uPtr(_motion)->Easing(value);
}

// public bool get_IsEnabled() [instance] :235
bool Attractor::IsEnabled()
{
    uStackFrame __("Fuse.Animations.Attractor`1", "get_IsEnabled()");
    return _isEnabled;
}

// public void set_IsEnabled(bool value) [instance] :236
void Attractor::IsEnabled(bool value)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(1/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", "set_IsEnabled(bool)");
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (_isEnabled == value)
        return;

    _isEnabled = true;

    if (!_isEnabled && (_sim != NULL))
        ::g::Fuse::Motion::Simulation::DestinationSimulation::Reset_ex(uInterface(uPtr(_sim), __types[1]), (uPtr(Target())->Get_ex(&ret6), ret6));

    CheckNeedUpdate();
}

// public Fuse.Motion.DestinationMotion<T> get_Motion() [instance] :174
::g::Fuse::Motion::DestinationMotion* Attractor::Motion()
{
    uStackFrame __("Fuse.Animations.Attractor`1", "get_Motion()");
    return _motion;
}

// public void set_Motion(Fuse.Motion.DestinationMotion<T> value) [instance] :175
void Attractor::Motion(::g::Fuse::Motion::DestinationMotion* value)
{
    uStackFrame __("Fuse.Animations.Attractor`1", "set_Motion(Fuse.Motion.DestinationMotion<T>)");
    _motion = value;

    if (IsRootingCompleted())
        ::g::Fuse::Diagnostics::UserError(::STRINGS[1/*"Motion shou...*/], this, ::STRINGS[2/*"/usr/local/...*/], 179, ::STRINGS[3/*"set_Motion"*/]);
}

// public generated Uno.UX.Property<T> get_Target() [instance] :161
::g::Uno::UX::Property1* Attractor::Target()
{
    uStackFrame __("Fuse.Animations.Attractor`1", "get_Target()");
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :161
void Attractor::Target(::g::Uno::UX::Property1* value)
{
    uStackFrame __("Fuse.Animations.Attractor`1", "set_Target(Uno.UX.Property<T>)");
    _Target = value;
}

// public float get_TimeMultiplier() [instance] :250
float Attractor::TimeMultiplier()
{
    uStackFrame __("Fuse.Animations.Attractor`1", "get_TimeMultiplier()");
    return _timeMultiplier;
}

// public void set_TimeMultiplier(float value) [instance] :251
void Attractor::TimeMultiplier(float value)
{
    uStackFrame __("Fuse.Animations.Attractor`1", "set_TimeMultiplier(float)");
    _timeMultiplier = value;
}

// public Fuse.Motion.MotionDestinationType get_Type() [instance] :187
int Attractor::Type()
{
    uStackFrame __("Fuse.Animations.Attractor`1", "get_Type()");
    return uPtr(_motion)->Type();
}

// public void set_Type(Fuse.Motion.MotionDestinationType value) [instance] :188
void Attractor::Type(int value)
{
    uStackFrame __("Fuse.Animations.Attractor`1", "set_Type(Fuse.Motion.MotionDestinationType)");
    uPtr(_motion)->Type(value);
}

// public Fuse.Motion.MotionUnit get_Unit() [instance] :225
int Attractor::Unit()
{
    uStackFrame __("Fuse.Animations.Attractor`1", "get_Unit()");
    return uPtr(_motion)->Unit();
}

// public void set_Unit(Fuse.Motion.MotionUnit value) [instance] :226
void Attractor::Unit(int value)
{
    uStackFrame __("Fuse.Animations.Attractor`1", "set_Unit(Fuse.Motion.MotionUnit)");
    uPtr(_motion)->Unit(value);
}

// private void Update() [instance] :306
void Attractor::Update()
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(2/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", "Update()");
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (_sim != NULL)
    {
        ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_sim), ::TYPES[1/*Fuse.Motion.Simulation.Simulation*/]), ::g::Fuse::Time::FrameInterval() * (double)_timeMultiplier);
        uPtr(Target())->Set_ex((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_sim), __types[1]), &ret5), ret5), (uObject*)this);
    }

    CheckNeedUpdate();
}

// internal Attractor New() [static] :156
Attractor* Attractor::New2(uType* __type)
{
    Attractor* obj1 = (Attractor*)uNew(__type);
    obj1->ctor_3();
    return obj1;
}

// public Attractor New(Uno.UX.Property<T> target) [static] :164
Attractor* Attractor::New3(uType* __type, ::g::Uno::UX::Property1* target)
{
    Attractor* obj2 = (Attractor*)uNew(__type);
    obj2->ctor_4(target);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class AverageMasterProperty<T> :351
// {
static void AverageMasterProperty_build(uType* type)
{
    ::TYPES[7] = ::g::Fuse::Internal::BlenderMap_typeof();
    ::TYPES[8] = ::g::Uno::Int_typeof();
    type->SetPrecalc(
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(1, type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface0),
        ::g::Fuse::Animations::MasterPropertyGet_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface2));
    type->SetFields(10,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::AverageMasterProperty, blender), 0);
}

::g::Fuse::Animations::MasterProperty_type* AverageMasterProperty_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(AverageMasterProperty);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterProperty_type);
    type = (::g::Fuse::Animations::MasterProperty_type*)uClassType::New("Fuse.Animations.AverageMasterProperty`1", options);
    type->SetBase(::g::Fuse::Animations::MasterProperty_typeof()->MakeType(type->T(0)));
    type->fp_build_ = AverageMasterProperty_build;
    type->fp_OnActive = (void(*)(::g::Fuse::Animations::MasterBase*))AverageMasterProperty__OnActive_fn;
    type->fp_OnComplete = (void(*)(::g::Fuse::Animations::MasterBase*))AverageMasterProperty__OnComplete_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Animations::MasterProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_GetPropertyObject = (void(*)(uObject*, uObject**))::g::Fuse::Animations::MasterProperty__GetPropertyObject_fn;
    return type;
}

// public AverageMasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :353
void AverageMasterProperty__ctor_2_fn(AverageMasterProperty* __this, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_2(property, mixerBase);
}

// public AverageMasterProperty New(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :353
void AverageMasterProperty__New1_fn(uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase, AverageMasterProperty** __retval)
{
    *__retval = AverageMasterProperty::New1(__type, property, mixerBase);
}

// protected override sealed void OnActive() :357
void AverageMasterProperty__OnActive_fn(AverageMasterProperty* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Internal.BlenderMap.Get<T>*/),
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.AverageMasterProperty`1", "OnActive()");
    ::g::Fuse::Animations::MasterProperty__OnActive_fn(__this);

    if (__this->blender == NULL)
        __this->blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[0]));
}

// public override sealed void OnComplete() :364
void AverageMasterProperty__OnComplete_fn(AverageMasterProperty* __this)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.AverageMasterProperty`1", "OnComplete()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret10(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT nv(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT add(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Fuse::Animations::MixerHandle* ret4;
    ::g::Fuse::Animations::MasterBase__GFWResult weight = __this->GetFullWeight();
    nv = (uPtr(__this->blender)->Weight_ex((__this->get_RestValue_ex(&ret3), ret3), uCRef((double)(weight.Rest / weight.Full)), &ret2), ret2);
    int c = uPtr((::g::Uno::Collections::List*)__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)__this->Handles), uCRef<int>(i), &ret4), ret4);

        if (!uPtr(v)->HasValue())
            continue;

        if (uPtr(v)->MixOp() == 2)
            add = (uPtr(__this->blender)->Weight_ex(uPtr(v)->Value(), uCRef((double)(::g::Uno::Math::Max1(0.0f, uPtr(v)->Strength) / weight.Full)), &ret5), ret5);
        else if (uPtr(v)->MixOp() == 0)
            add = (uPtr(__this->blender)->Weight_ex((uPtr(__this->blender)->Sub_ex(uPtr(v)->Value(), (__this->get_RestValue_ex(&ret8), ret8), &ret7), ret7), uCRef((double)uPtr(v)->Strength), &ret6), ret6);
        else
            add = (uPtr(__this->blender)->Weight_ex(uPtr(v)->Value(), uCRef((double)uPtr(v)->Strength), &ret9), ret9);

        nv = (uPtr(__this->blender)->Add_ex(nv, add, &ret10), ret10);
    }

    ::g::Fuse::Animations::MasterProperty__Set_fn(__this, nv);
}

// public AverageMasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [instance] :353
void AverageMasterProperty::ctor_2(::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    uStackFrame __("Fuse.Animations.AverageMasterProperty`1", ".ctor(Uno.UX.Property<T>,Fuse.Animations.MixerBase)");
    ctor_1(property, mixerBase);
}

// public AverageMasterProperty New(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [static] :353
AverageMasterProperty* AverageMasterProperty::New1(uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    AverageMasterProperty* obj1 = (AverageMasterProperty*)uNew(__type);
    obj1->ctor_2(property, mixerBase);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class AverageMasterTransform :391
// {
static void AverageMasterTransform_build(uType* type)
{
    ::TYPES[8] = ::g::Uno::Int_typeof();
    ::TYPES[9] = ::g::Uno::Float4x4_typeof();
    ::TYPES[6] = uObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterBase_type, interface0));
    type->SetFields(6);
}

::g::Fuse::Animations::MasterBase_type* AverageMasterTransform_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AverageMasterTransform);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterBase_type);
    type = (::g::Fuse::Animations::MasterBase_type*)uClassType::New("Fuse.Animations.AverageMasterTransform", options);
    type->SetBase(::g::Fuse::Animations::MasterTransform_typeof());
    type->fp_build_ = AverageMasterTransform_build;
    type->fp_OnComplete = (void(*)(::g::Fuse::Animations::MasterBase*))AverageMasterTransform__OnComplete_fn;
    return type;
}

// public AverageMasterTransform(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) :393
void AverageMasterTransform__ctor_2_fn(AverageMasterTransform* __this, ::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_2(node, mixerBase);
}

// public AverageMasterTransform New(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) :393
void AverageMasterTransform__New1_fn(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase, AverageMasterTransform** __retval)
{
    *__retval = AverageMasterTransform::New1(node, mixerBase);
}

// public override sealed void OnComplete() :396
void AverageMasterTransform__OnComplete_fn(AverageMasterTransform* __this)
{
    uStackFrame __("Fuse.Animations.AverageMasterTransform", "OnComplete()");
    ::g::Fuse::Animations::MixerHandle* ret2;
    ::g::Fuse::Animations::MasterBase__GFWResult weight = __this->GetFullWeight();
    ::g::Fuse::FastMatrix* nv = ::g::Fuse::FastMatrix::Identity();
    int c = uPtr((::g::Uno::Collections::List*)__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)__this->Handles), uCRef<int>(i), &ret2), ret2);

        if (!uPtr(v)->HasValue())
            continue;

        if (uPtr(v)->MixOp() == 2)
            uPtr(uPtr(v)->Value().Strong< ::g::Fuse::Transform*>())->AppendTo(nv, uPtr(v)->Strength / weight.Full);
        else
            uPtr(uPtr(v)->Value().Strong< ::g::Fuse::Transform*>())->AppendTo(nv, uPtr(v)->Strength);
    }

    if (!uPtr(nv)->Matrix().Equals(::TYPES[9/*float4x4*/], uBox(::TYPES[9/*float4x4*/], uPtr(uPtr(__this->FMT)->Matrix)->Matrix())))
    {
        uPtr(__this->FMT)->Matrix = nv;
        uPtr(__this->FMT)->Changed();
    }
}

// public AverageMasterTransform(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) [instance] :393
void AverageMasterTransform::ctor_2(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    uStackFrame __("Fuse.Animations.AverageMasterTransform", ".ctor(Fuse.Visual,Fuse.Animations.MixerBase)");
    ctor_1(node, mixerBase);
}

// public AverageMasterTransform New(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) [static] :393
AverageMasterTransform* AverageMasterTransform::New1(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    AverageMasterTransform* obj1 = (AverageMasterTransform*)uNew(AverageMasterTransform_typeof());
    obj1->ctor_2(node, mixerBase);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class AverageMixer :341
// {
static void AverageMixer_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Animations::MasterProperty_typeof();
    ::TYPES[11] = ::g::Fuse::Animations::AverageMasterProperty_typeof();
    ::TYPES[12] = ::g::Fuse::Animations::MasterBase_typeof()->MakeType(::g::Fuse::Transform_typeof());
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixer_typeof(), offsetof(::g::Fuse::Animations::MixerBase_type, interface0));
    type->SetFields(2);
}

::g::Fuse::Animations::MixerBase_type* AverageMixer_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MixerBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(AverageMixer);
    options.TypeSize = sizeof(::g::Fuse::Animations::MixerBase_type);
    type = (::g::Fuse::Animations::MixerBase_type*)uClassType::New("Fuse.Animations.AverageMixer", options);
    type->SetBase(::g::Fuse::Animations::MixerBase_typeof());
    type->fp_build_ = AverageMixer_build;
    type->fp_ctor_ = (void*)AverageMixer__New1_fn;
    type->fp_CreateMaster = (void(*)(::g::Fuse::Animations::MixerBase*, uType*, ::g::Uno::UX::Property1*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterProperty**))AverageMixer__CreateMaster_fn;
    type->fp_CreateMasterTransform = (void(*)(::g::Fuse::Animations::MixerBase*, ::g::Fuse::Visual*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterBase**))AverageMixer__CreateMasterTransform_fn;
    type->interface0.fp_Register = (void(*)(uObject*, uType*, ::g::Uno::UX::Property1*, int*, uObject**))::g::Fuse::Animations::MixerBase__Register_fn;
    type->interface0.fp_RegisterTransform = (void(*)(uObject*, ::g::Fuse::Visual*, int*, int*, uObject**))::g::Fuse::Animations::MixerBase__RegisterTransform_fn;
    return type;
}

// public generated AverageMixer() :341
void AverageMixer__ctor_1_fn(AverageMixer* __this)
{
    __this->ctor_1();
}

// protected override sealed Fuse.Animations.MasterProperty<T> CreateMaster<T>(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :343
void AverageMixer__CreateMaster_fn(AverageMixer* __this, uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterProperty** __retval)
{
    __type = AverageMixer_typeof()->GetVirtual(__type);
    uType* __types[] = {
        ::TYPES[10/*Fuse.Animations.MasterProperty`1*/]->MakeType(__type->U(0)),
        __type->U(0),
        ::TYPES[11/*Fuse.Animations.AverageMasterProperty`1*/]->MakeType(__type->U(0)),
    };
    uStackFrame __("Fuse.Animations.AverageMixer", "CreateMaster`1(Uno.UX.Property<T>,Fuse.Animations.MixerBase)");
    return *__retval = (::g::Fuse::Animations::AverageMasterProperty*)::g::Fuse::Animations::AverageMasterProperty::New1(__types[2], property, mixerBase), void();
}

// protected override sealed Fuse.Animations.MasterBase<Fuse.Transform> CreateMasterTransform(Fuse.Visual element, Fuse.Animations.MixerBase mixerBase) :346
void AverageMixer__CreateMasterTransform_fn(AverageMixer* __this, ::g::Fuse::Visual* element, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterBase** __retval)
{
    uStackFrame __("Fuse.Animations.AverageMixer", "CreateMasterTransform(Fuse.Visual,Fuse.Animations.MixerBase)");
    return *__retval = ::g::Fuse::Animations::AverageMasterTransform::New1(element, mixerBase), void();
}

// public generated AverageMixer New() :341
void AverageMixer__New1_fn(AverageMixer** __retval)
{
    *__retval = AverageMixer::New1();
}

// public generated AverageMixer() [instance] :341
void AverageMixer::ctor_1()
{
    uStackFrame __("Fuse.Animations.AverageMixer", ".ctor()");
    ctor_();
}

// public generated AverageMixer New() [static] :341
AverageMixer* AverageMixer::New1()
{
    AverageMixer* obj1 = (AverageMixer*)uNew(AverageMixer_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public sealed class Change<T> :436
// {
static void Change_build(uType* type)
{
    ::STRINGS[0] = uString::Const("target");
    ::STRINGS[4] = uString::Const("Unsupported change type: ");
    ::TYPES[13] = ::g::Uno::Type_typeof();
    ::TYPES[6] = uObject_typeof();
    ::TYPES[14] = ::g::Fuse::Animations::Converter_typeof();
    ::TYPES[15] = ::g::Fuse::Animations::AnimatorState_typeof();
    ::TYPES[16] = ::g::Fuse::Animations::ContinuousTrackChangeState_typeof();
    ::TYPES[17] = ::g::Fuse::Animations::DiscreteTrackChangeState_typeof();
    type->SetPrecalc(
        ::g::Fuse::Animations::Converter_typeof()->MakeType(type->T(0)),
        ::g::Fuse::Animations::ContinuousTrackChangeState_typeof()->MakeType(type->T(0)),
        ::g::Fuse::Animations::DiscreteTrackChangeState_typeof()->MakeType(type->T(0)));
    type->SetFields(19,
        ::g::Fuse::Animations::Converter_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::Change, ContinuousConverter), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::Change, _Target), 0);
    type->Reflection.SetFunctions(20,
        new uFunction("get_DegreesX", NULL, (void*)Change__get_DegreesX_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesX", NULL, (void*)Change__set_DegreesX_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesXY", NULL, (void*)Change__get_DegreesXY_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_DegreesXY", NULL, (void*)Change__set_DegreesXY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_DegreesY", NULL, (void*)Change__get_DegreesY_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesY", NULL, (void*)Change__set_DegreesY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesZ", NULL, (void*)Change__get_DegreesZ_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesZ", NULL, (void*)Change__set_DegreesZ_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", type, (void*)Change__New2_fn, 0, true, type, 1, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0))),
        new uFunction("get_Target", NULL, (void*)Change__get_Target_fn, 0, false, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), 0),
        new uFunction("get_Value", NULL, (void*)Change__get_Value_fn, 0, false, type->T(0), 0),
        new uFunction("set_Value", NULL, (void*)Change__set_Value_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_X", NULL, (void*)Change__get_X_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_X", NULL, (void*)Change__set_X_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_XY", NULL, (void*)Change__get_XY_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_XY", NULL, (void*)Change__set_XY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Y", NULL, (void*)Change__get_Y_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Y", NULL, (void*)Change__set_Y_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Z", NULL, (void*)Change__get_Z_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Z", NULL, (void*)Change__set_Z_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Animations::Animator_type* Change_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.GenericCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(Change);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Change`1", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimator_typeof());
    type->fp_build_ = Change_build;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Change__CreateState_fn;
    return type;
}

// public Change(Uno.UX.Property<T> target) :458
void Change__ctor_3_fn(Change* __this, ::g::Uno::UX::Property1* target)
{
    __this->ctor_3(target);
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :492
void Change__CreateState_fn(Change* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Fuse.Animations.ContinuousTrackChangeState<T>*/),
        __this->__type->T(0),
        __this->__type->Precalced(2/*Fuse.Animations.DiscreteTrackChangeState<T>*/),
    };
    uStackFrame __("Fuse.Animations.Change`1", "CreateState(Fuse.Animations.CreateStateParams)");

    if (__this->IsContinuous())
        return *__retval = (::g::Fuse::Animations::ContinuousTrackChangeState*)::g::Fuse::Animations::ContinuousTrackChangeState::New1(__types[0], __this, p), void();

    return *__retval = (::g::Fuse::Animations::DiscreteTrackChangeState*)::g::Fuse::Animations::DiscreteTrackChangeState::New1(__types[2], __this, p), void();
}

// public float get_DegreesX() :522
void Change__get_DegreesX_fn(Change* __this, float* __retval)
{
    *__retval = __this->DegreesX();
}

// public void set_DegreesX(float value) :523
void Change__set_DegreesX_fn(Change* __this, float* value)
{
    __this->DegreesX(*value);
}

// public float2 get_DegreesXY() :558
void Change__get_DegreesXY_fn(Change* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->DegreesXY();
}

// public void set_DegreesXY(float2 value) :559
void Change__set_DegreesXY_fn(Change* __this, ::g::Uno::Float2* value)
{
    __this->DegreesXY(*value);
}

// public float get_DegreesY() :534
void Change__get_DegreesY_fn(Change* __this, float* __retval)
{
    *__retval = __this->DegreesY();
}

// public void set_DegreesY(float value) :535
void Change__set_DegreesY_fn(Change* __this, float* value)
{
    __this->DegreesY(*value);
}

// public float get_DegreesZ() :546
void Change__get_DegreesZ_fn(Change* __this, float* __retval)
{
    *__retval = __this->DegreesZ();
}

// public void set_DegreesZ(float value) :547
void Change__set_DegreesZ_fn(Change* __this, float* value)
{
    __this->DegreesZ(*value);
}

// private bool get_IsContinuous() :501
void Change__get_IsContinuous_fn(Change* __this, bool* __retval)
{
    *__retval = __this->IsContinuous();
}

// public Change New(Uno.UX.Property<T> target) :458
void Change__New2_fn(uType* __type, ::g::Uno::UX::Property1* target, Change** __retval)
{
    *__retval = Change::New2(__type, target);
}

// public generated Uno.UX.Property<T> get_Target() :438
void Change__get_Target_fn(Change* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :438
void Change__set_Target_fn(Change* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// public T get_Value() :442
void Change__get_Value_fn(Change* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.Change`1", "get_Value()");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store(__types[0], __this->IsContinuous() ? (uPtr(__this->ContinuousConverter)->Out_ex(uCRef(__this->_vectorValue), &ret3), (void*)ret3) : (void*)uUnboxAny(__types[0], __this->_objectValue)), void();
}

// public void set_Value(T value) :446
void Change__set_Value_fn(Change* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.Change`1", "set_Value(T)");
    ::g::Uno::Float4 ret4;

    if (__this->IsContinuous())
        __this->_vectorValue = (uPtr(__this->ContinuousConverter)->In_ex(value, &ret4), ret4);
    else
        __this->_objectValue = uBoxPtr(__types[0], value);
}

// public float get_X() :516
void Change__get_X_fn(Change* __this, float* __retval)
{
    *__retval = __this->X();
}

// public void set_X(float value) :517
void Change__set_X_fn(Change* __this, float* value)
{
    __this->X(*value);
}

// public float2 get_XY() :552
void Change__get_XY_fn(Change* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->XY();
}

// public void set_XY(float2 value) :553
void Change__set_XY_fn(Change* __this, ::g::Uno::Float2* value)
{
    __this->XY(*value);
}

// public float get_Y() :528
void Change__get_Y_fn(Change* __this, float* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(float value) :529
void Change__set_Y_fn(Change* __this, float* value)
{
    __this->Y(*value);
}

// public float get_Z() :540
void Change__get_Z_fn(Change* __this, float* __retval)
{
    *__retval = __this->Z();
}

// public void set_Z(float value) :541
void Change__set_Z_fn(Change* __this, float* value)
{
    __this->Z(*value);
}

// public Change(Uno.UX.Property<T> target) [instance] :458
void Change::ctor_3(::g::Uno::UX::Property1* target)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.Converter<T>*/),
        __type->T(0),
    };
    uStackFrame __("Fuse.Animations.Change`1", ".ctor(Uno.UX.Property<T>)");
    ctor_2();

    if (target == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"target"*/]));

    Target(target);

    if (IsContinuous())
    {
        uObject* v;

        if (::g::Uno::Type::op_Equality(__types[1], ::g::Uno::Float_typeof()))
            v = ::g::Fuse::Animations::ConverterFloat::Singleton();
        else if (::g::Uno::Type::op_Equality(__types[1], ::g::Uno::Float2_typeof()))
            v = ::g::Fuse::Animations::ConverterFloat2::Singleton();
        else if (::g::Uno::Type::op_Equality(__types[1], ::g::Uno::Float3_typeof()))
            v = ::g::Fuse::Animations::ConverterFloat3::Singleton();
        else if (::g::Uno::Type::op_Equality(__types[1], ::g::Uno::Float4_typeof()))
            v = ::g::Fuse::Animations::ConverterFloat4::Singleton();
        else if (::g::Uno::Type::op_Equality(__types[1], ::g::Uno::Double_typeof()))
            v = ::g::Fuse::Animations::ConverterDouble::Singleton();
        else if (::g::Uno::Type::op_Equality(__types[1], ::g::Uno::UX::Size_typeof()))
            v = ::g::Fuse::Animations::ConverterSize::Singleton();
        else if (::g::Uno::Type::op_Equality(__types[1], ::g::Uno::UX::Size2_typeof()))
            v = ::g::Fuse::Animations::ConverterSize2::Singleton();
        else
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[4/*"Unsupported...*/], __types[1])));

        ContinuousConverter = uCast< ::g::Fuse::Animations::Converter*>(v, __types[0]);
    }
    else
    {
        Mixer = ::g::Fuse::Animations::Mixer::DefaultDiscrete();
        MarkDiscrete();
    }
}

// public float get_DegreesX() [instance] :522
float Change::DegreesX()
{
    uStackFrame __("Fuse.Animations.Change`1", "get_DegreesX()");
    return ::g::Uno::Math::RadiansToDegrees1(X());
}

// public void set_DegreesX(float value) [instance] :523
void Change::DegreesX(float value)
{
    uStackFrame __("Fuse.Animations.Change`1", "set_DegreesX(float)");
    X(::g::Uno::Math::DegreesToRadians1(value));
}

// public float2 get_DegreesXY() [instance] :558
::g::Uno::Float2 Change::DegreesXY()
{
    uStackFrame __("Fuse.Animations.Change`1", "get_DegreesXY()");
    return ::g::Uno::Float2__New2(::g::Uno::Math::RadiansToDegrees1(X()), ::g::Uno::Math::RadiansToDegrees1(Y()));
}

// public void set_DegreesXY(float2 value) [instance] :559
void Change::DegreesXY(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Animations.Change`1", "set_DegreesXY(float2)");
    XY(::g::Uno::Float2__New2(::g::Uno::Math::DegreesToRadians1(value.X), ::g::Uno::Math::DegreesToRadians1(value.Y)));
}

// public float get_DegreesY() [instance] :534
float Change::DegreesY()
{
    uStackFrame __("Fuse.Animations.Change`1", "get_DegreesY()");
    return ::g::Uno::Math::RadiansToDegrees1(Y());
}

// public void set_DegreesY(float value) [instance] :535
void Change::DegreesY(float value)
{
    uStackFrame __("Fuse.Animations.Change`1", "set_DegreesY(float)");
    Y(::g::Uno::Math::DegreesToRadians1(value));
}

// public float get_DegreesZ() [instance] :546
float Change::DegreesZ()
{
    uStackFrame __("Fuse.Animations.Change`1", "get_DegreesZ()");
    return ::g::Uno::Math::RadiansToDegrees1(Y());
}

// public void set_DegreesZ(float value) [instance] :547
void Change::DegreesZ(float value)
{
    uStackFrame __("Fuse.Animations.Change`1", "set_DegreesZ(float)");
    Y(::g::Uno::Math::DegreesToRadians1(value));
}

// private bool get_IsContinuous() [instance] :501
bool Change::IsContinuous()
{
    uStackFrame __("Fuse.Animations.Change`1", "get_IsContinuous()");
    return (((((::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Float_typeof()) || ::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Float2_typeof())) || ::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Float3_typeof())) || ::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Float4_typeof())) || ::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Double_typeof())) || ::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::UX::Size_typeof())) || ::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::UX::Size2_typeof());
}

// public generated Uno.UX.Property<T> get_Target() [instance] :438
::g::Uno::UX::Property1* Change::Target()
{
    uStackFrame __("Fuse.Animations.Change`1", "get_Target()");
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :438
void Change::Target(::g::Uno::UX::Property1* value)
{
    uStackFrame __("Fuse.Animations.Change`1", "set_Target(Uno.UX.Property<T>)");
    _Target = value;
}

// public float get_X() [instance] :516
float Change::X()
{
    uStackFrame __("Fuse.Animations.Change`1", "get_X()");
    return _vectorValue.X;
}

// public void set_X(float value) [instance] :517
void Change::X(float value)
{
    uStackFrame __("Fuse.Animations.Change`1", "set_X(float)");
    _vectorValue.X = value;
}

// public float2 get_XY() [instance] :552
::g::Uno::Float2 Change::XY()
{
    uStackFrame __("Fuse.Animations.Change`1", "get_XY()");
    ::g::Uno::Float4 ind1 = _vectorValue;
    return ::g::Uno::Float2__New2(ind1.X, ind1.Y);
}

// public void set_XY(float2 value) [instance] :553
void Change::XY(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Animations.Change`1", "set_XY(float2)");
    _vectorValue = ::g::Uno::Float4__New6(value, _vectorValue.Z, _vectorValue.W);
}

// public float get_Y() [instance] :528
float Change::Y()
{
    uStackFrame __("Fuse.Animations.Change`1", "get_Y()");
    return _vectorValue.Y;
}

// public void set_Y(float value) [instance] :529
void Change::Y(float value)
{
    uStackFrame __("Fuse.Animations.Change`1", "set_Y(float)");
    _vectorValue.Y = value;
}

// public float get_Z() [instance] :540
float Change::Z()
{
    uStackFrame __("Fuse.Animations.Change`1", "get_Z()");
    return _vectorValue.Z;
}

// public void set_Z(float value) [instance] :541
void Change::Z(float value)
{
    uStackFrame __("Fuse.Animations.Change`1", "set_Z(float)");
    _vectorValue.Z = value;
}

// public Change New(Uno.UX.Property<T> target) [static] :458
Change* Change::New2(uType* __type, ::g::Uno::UX::Property1* target)
{
    Change* obj2 = (Change*)uNew(__type);
    obj2->ctor_3(target);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class ContinuousTrackChangeState<T> :596
// {
static void ContinuousTrackChangeState_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Invalid Seek");
    ::STRINGS[2] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno");
    ::TYPES[18] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[19] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[20] = ::g::Fuse::Animations::IMixerHandle_typeof();
    type->SetPrecalc(
        ::g::Fuse::Animations::IMixer_typeof()->MakeMethod(1, type->T(0)),
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0)));
    type->SetFields(6,
        ::g::Fuse::Animations::Change_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::ContinuousTrackChangeState, Animator1), 0,
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::ContinuousTrackChangeState, mixHandle), 0);
}

::g::Fuse::Animations::TrackAnimatorState_type* ContinuousTrackChangeState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(ContinuousTrackChangeState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.ContinuousTrackChangeState`1", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimatorState_typeof());
    type->fp_build_ = ContinuousTrackChangeState_build;
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Disable_fn;
    type->fp_SeekValue = (void(*)(::g::Fuse::Animations::TrackAnimatorState*, ::g::Uno::Float4*, float*))ContinuousTrackChangeState__SeekValue_fn;
    return type;
}

// public ContinuousTrackChangeState(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) :601
void ContinuousTrackChangeState__ctor_2_fn(ContinuousTrackChangeState* __this, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :608
void ContinuousTrackChangeState__Disable_fn(ContinuousTrackChangeState* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Fuse.Animations.IMixerHandle<T>*/),
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.ContinuousTrackChangeState`1", "Disable()");

    if (__this->mixHandle == NULL)
        return;

    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), __types[0]));
    __this->mixHandle = NULL;
}

// public ContinuousTrackChangeState New(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) :601
void ContinuousTrackChangeState__New1_fn(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p, ContinuousTrackChangeState** __retval)
{
    *__retval = ContinuousTrackChangeState::New1(__type, animator, p);
}

// protected override sealed void SeekValue(float4 value, float strength) :617
void ContinuousTrackChangeState__SeekValue_fn(ContinuousTrackChangeState* __this, ::g::Uno::Float4* value, float* strength)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Fuse.Animations.IMixerHandle<T>*/),
    };
    uStackFrame __("Fuse.Animations.ContinuousTrackChangeState`1", "SeekValue(float4,float)");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Uno::Float4 value_ = *value;
    float strength_ = *strength;

    if (__this->mixHandle == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[5/*"Invalid Seek"*/], 1, ::STRINGS[2/*"/usr/local/...*/], 621);
        return;
    }

    ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), __types[1]), (uPtr((::g::Fuse::Animations::Converter*)uPtr(__this->Animator1)->ContinuousConverter)->Out_ex(uCRef(value_), &ret2), ret2), uCRef(strength_));
}

// public ContinuousTrackChangeState(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) [instance] :601
void ContinuousTrackChangeState::ctor_2(::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.IMixer.Register<T>*/),
        __type->T(0),
    };
    uStackFrame __("Fuse.Animations.ContinuousTrackChangeState`1", ".ctor(Fuse.Animations.Change<T>,Fuse.Animations.CreateStateParams)");
    ctor_1(animator, p, NULL);
    Animator1 = animator;
    mixHandle = ((uObject*)::g::Fuse::Animations::IMixer::Register(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[19/*Fuse.Animations.IMixer*/]), __types[0], (::g::Uno::UX::Property1*)uPtr(Animator1)->Target(), uPtr(Animator1)->MixOp()));
}

// public ContinuousTrackChangeState New(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) [static] :601
ContinuousTrackChangeState* ContinuousTrackChangeState::New1(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState* obj1 = (ContinuousTrackChangeState*)uNew(__type);
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal abstract interface ContinuousTrackProvider :2918
// {
uInterfaceType* ContinuousTrackProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.ContinuousTrackProvider", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal abstract class Converter<T> :628
// {
static void Converter_build(uType* type)
{
}

Converter_type* Converter_typeof()
{
    static uSStrong<Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(Converter);
    options.TypeSize = sizeof(Converter_type);
    type = (Converter_type*)uClassType::New("Fuse.Animations.Converter`1", options);
    type->fp_build_ = Converter_build;
    return type;
}

// protected generated Converter() :628
void Converter__ctor__fn(Converter* __this)
{
    __this->ctor_();
}

// protected generated Converter() [instance] :628
void Converter::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class ConverterDouble :677
// {
// static ConverterDouble() :677
static void ConverterDouble__cctor__fn(uType* __type)
{
    ConverterDouble::Singleton_ = ConverterDouble::New1();
}

static void ConverterDouble_build(uType* type)
{
    type->SetFields(0,
        ConverterDouble_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterDouble::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterDouble_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterDouble);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterDouble", options);
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Double_typeof()));
    type->fp_build_ = ConverterDouble_build;
    type->fp_ctor_ = (void*)ConverterDouble__New1_fn;
    type->fp_cctor_ = ConverterDouble__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterDouble__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterDouble__Out_fn;
    return type;
}

// public generated ConverterDouble() :677
void ConverterDouble__ctor_1_fn(ConverterDouble* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(double value) :681
void ConverterDouble__In_fn(ConverterDouble* __this, double* value, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterDouble", "In(double)");
    double value_ = *value;
    return *__retval = ::g::Uno::Float4__New2((float)value_, 0.0f, 0.0f, 0.0f), void();
}

// public generated ConverterDouble New() :677
void ConverterDouble__New1_fn(ConverterDouble** __retval)
{
    *__retval = ConverterDouble::New1();
}

// public override sealed double Out(float4 value) :680
void ConverterDouble__Out_fn(ConverterDouble* __this, ::g::Uno::Float4* value, double* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterDouble", "Out(float4)");
    ::g::Uno::Float4 value_ = *value;
    return *__retval = (double)value_.X, void();
}

uSStrong<ConverterDouble*> ConverterDouble::Singleton_;

// public generated ConverterDouble() [instance] :677
void ConverterDouble::ctor_1()
{
    uStackFrame __("Fuse.Animations.ConverterDouble", ".ctor()");
    ctor_();
}

// public generated ConverterDouble New() [static] :677
ConverterDouble* ConverterDouble::New1()
{
    ConverterDouble* obj1 = (ConverterDouble*)uNew(ConverterDouble_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class ConverterFloat :634
// {
// static ConverterFloat() :634
static void ConverterFloat__cctor__fn(uType* __type)
{
    ConverterFloat::Singleton_ = ConverterFloat::New1();
}

static void ConverterFloat_build(uType* type)
{
    type->SetFields(0,
        ConverterFloat_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterFloat::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterFloat_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterFloat);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterFloat", options);
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_build_ = ConverterFloat_build;
    type->fp_ctor_ = (void*)ConverterFloat__New1_fn;
    type->fp_cctor_ = ConverterFloat__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterFloat__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterFloat__Out_fn;
    return type;
}

// public generated ConverterFloat() :634
void ConverterFloat__ctor_1_fn(ConverterFloat* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(float value) :638
void ConverterFloat__In_fn(ConverterFloat* __this, float* value, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterFloat", "In(float)");
    float value_ = *value;
    return *__retval = ::g::Uno::Float4__New2(value_, 0.0f, 0.0f, 0.0f), void();
}

// public generated ConverterFloat New() :634
void ConverterFloat__New1_fn(ConverterFloat** __retval)
{
    *__retval = ConverterFloat::New1();
}

// public override sealed float Out(float4 value) :637
void ConverterFloat__Out_fn(ConverterFloat* __this, ::g::Uno::Float4* value, float* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterFloat", "Out(float4)");
    ::g::Uno::Float4 value_ = *value;
    return *__retval = value_.X, void();
}

uSStrong<ConverterFloat*> ConverterFloat::Singleton_;

// public generated ConverterFloat() [instance] :634
void ConverterFloat::ctor_1()
{
    uStackFrame __("Fuse.Animations.ConverterFloat", ".ctor()");
    ctor_();
}

// public generated ConverterFloat New() [static] :634
ConverterFloat* ConverterFloat::New1()
{
    ConverterFloat* obj1 = (ConverterFloat*)uNew(ConverterFloat_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class ConverterFloat2 :656
// {
// static ConverterFloat2() :656
static void ConverterFloat2__cctor__fn(uType* __type)
{
    ConverterFloat2::Singleton_ = ConverterFloat2::New1();
}

static void ConverterFloat2_build(uType* type)
{
    type->SetFields(0,
        ConverterFloat2_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterFloat2::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterFloat2_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterFloat2);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterFloat2", options);
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Float2_typeof()));
    type->fp_build_ = ConverterFloat2_build;
    type->fp_ctor_ = (void*)ConverterFloat2__New1_fn;
    type->fp_cctor_ = ConverterFloat2__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterFloat2__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterFloat2__Out_fn;
    return type;
}

// public generated ConverterFloat2() :656
void ConverterFloat2__ctor_1_fn(ConverterFloat2* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(float2 value) :660
void ConverterFloat2__In_fn(ConverterFloat2* __this, ::g::Uno::Float2* value, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterFloat2", "In(float2)");
    ::g::Uno::Float2 value_ = *value;
    return *__retval = ::g::Uno::Float4__New6(value_, 0.0f, 0.0f), void();
}

// public generated ConverterFloat2 New() :656
void ConverterFloat2__New1_fn(ConverterFloat2** __retval)
{
    *__retval = ConverterFloat2::New1();
}

// public override sealed float2 Out(float4 value) :659
void ConverterFloat2__Out_fn(ConverterFloat2* __this, ::g::Uno::Float4* value, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterFloat2", "Out(float4)");
    ::g::Uno::Float4 value_ = *value;
    return *__retval = ::g::Uno::Float2__New2(value_.X, value_.Y), void();
}

uSStrong<ConverterFloat2*> ConverterFloat2::Singleton_;

// public generated ConverterFloat2() [instance] :656
void ConverterFloat2::ctor_1()
{
    uStackFrame __("Fuse.Animations.ConverterFloat2", ".ctor()");
    ctor_();
}

// public generated ConverterFloat2 New() [static] :656
ConverterFloat2* ConverterFloat2::New1()
{
    ConverterFloat2* obj1 = (ConverterFloat2*)uNew(ConverterFloat2_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class ConverterFloat3 :663
// {
// static ConverterFloat3() :663
static void ConverterFloat3__cctor__fn(uType* __type)
{
    ConverterFloat3::Singleton_ = ConverterFloat3::New1();
}

static void ConverterFloat3_build(uType* type)
{
    type->SetFields(0,
        ConverterFloat3_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterFloat3::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterFloat3_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterFloat3);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterFloat3", options);
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Float3_typeof()));
    type->fp_build_ = ConverterFloat3_build;
    type->fp_ctor_ = (void*)ConverterFloat3__New1_fn;
    type->fp_cctor_ = ConverterFloat3__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterFloat3__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterFloat3__Out_fn;
    return type;
}

// public generated ConverterFloat3() :663
void ConverterFloat3__ctor_1_fn(ConverterFloat3* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(float3 value) :667
void ConverterFloat3__In_fn(ConverterFloat3* __this, ::g::Uno::Float3* value, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterFloat3", "In(float3)");
    ::g::Uno::Float3 value_ = *value;
    return *__retval = ::g::Uno::Float4__New8(value_, 0.0f), void();
}

// public generated ConverterFloat3 New() :663
void ConverterFloat3__New1_fn(ConverterFloat3** __retval)
{
    *__retval = ConverterFloat3::New1();
}

// public override sealed float3 Out(float4 value) :666
void ConverterFloat3__Out_fn(ConverterFloat3* __this, ::g::Uno::Float4* value, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterFloat3", "Out(float4)");
    ::g::Uno::Float4 value_ = *value;
    return *__retval = ::g::Uno::Float3__New2(value_.X, value_.Y, value_.Z), void();
}

uSStrong<ConverterFloat3*> ConverterFloat3::Singleton_;

// public generated ConverterFloat3() [instance] :663
void ConverterFloat3::ctor_1()
{
    uStackFrame __("Fuse.Animations.ConverterFloat3", ".ctor()");
    ctor_();
}

// public generated ConverterFloat3 New() [static] :663
ConverterFloat3* ConverterFloat3::New1()
{
    ConverterFloat3* obj1 = (ConverterFloat3*)uNew(ConverterFloat3_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class ConverterFloat4 :670
// {
// static ConverterFloat4() :670
static void ConverterFloat4__cctor__fn(uType* __type)
{
    ConverterFloat4::Singleton_ = ConverterFloat4::New1();
}

static void ConverterFloat4_build(uType* type)
{
    type->SetFields(0,
        ConverterFloat4_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterFloat4::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterFloat4_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterFloat4);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterFloat4", options);
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_build_ = ConverterFloat4_build;
    type->fp_ctor_ = (void*)ConverterFloat4__New1_fn;
    type->fp_cctor_ = ConverterFloat4__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterFloat4__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterFloat4__Out_fn;
    return type;
}

// public generated ConverterFloat4() :670
void ConverterFloat4__ctor_1_fn(ConverterFloat4* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(float4 value) :674
void ConverterFloat4__In_fn(ConverterFloat4* __this, ::g::Uno::Float4* value, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterFloat4", "In(float4)");
    ::g::Uno::Float4 value_ = *value;
    return *__retval = value_, void();
}

// public generated ConverterFloat4 New() :670
void ConverterFloat4__New1_fn(ConverterFloat4** __retval)
{
    *__retval = ConverterFloat4::New1();
}

// public override sealed float4 Out(float4 value) :673
void ConverterFloat4__Out_fn(ConverterFloat4* __this, ::g::Uno::Float4* value, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterFloat4", "Out(float4)");
    ::g::Uno::Float4 value_ = *value;
    return *__retval = value_, void();
}

uSStrong<ConverterFloat4*> ConverterFloat4::Singleton_;

// public generated ConverterFloat4() [instance] :670
void ConverterFloat4::ctor_1()
{
    uStackFrame __("Fuse.Animations.ConverterFloat4", ".ctor()");
    ctor_();
}

// public generated ConverterFloat4 New() [static] :670
ConverterFloat4* ConverterFloat4::New1()
{
    ConverterFloat4* obj1 = (ConverterFloat4*)uNew(ConverterFloat4_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class ConverterSize :641
// {
// static ConverterSize() :641
static void ConverterSize__cctor__fn(uType* __type)
{
    ConverterSize::Singleton_ = ConverterSize::New1();
}

static void ConverterSize_build(uType* type)
{
    type->SetFields(0,
        ConverterSize_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterSize::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterSize_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterSize);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterSize", options);
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::UX::Size_typeof()));
    type->fp_build_ = ConverterSize_build;
    type->fp_ctor_ = (void*)ConverterSize__New1_fn;
    type->fp_cctor_ = ConverterSize__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterSize__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterSize__Out_fn;
    return type;
}

// public generated ConverterSize() :641
void ConverterSize__ctor_1_fn(ConverterSize* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(Uno.UX.Size value) :645
void ConverterSize__In_fn(ConverterSize* __this, ::g::Uno::UX::Size* value, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterSize", "In(Uno.UX.Size)");
    ::g::Uno::UX::Size value_ = *value;
    return *__retval = ::g::Uno::Float4__New2(value_.Value, 0.0f, 0.0f, 0.0f), void();
}

// public generated ConverterSize New() :641
void ConverterSize__New1_fn(ConverterSize** __retval)
{
    *__retval = ConverterSize::New1();
}

// public override sealed Uno.UX.Size Out(float4 value) :644
void ConverterSize__Out_fn(ConverterSize* __this, ::g::Uno::Float4* value, ::g::Uno::UX::Size* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterSize", "Out(float4)");
    ::g::Uno::Float4 value_ = *value;
    return *__retval = ::g::Uno::UX::Size__op_Implicit(value_.X), void();
}

uSStrong<ConverterSize*> ConverterSize::Singleton_;

// public generated ConverterSize() [instance] :641
void ConverterSize::ctor_1()
{
    uStackFrame __("Fuse.Animations.ConverterSize", ".ctor()");
    ctor_();
}

// public generated ConverterSize New() [static] :641
ConverterSize* ConverterSize::New1()
{
    ConverterSize* obj1 = (ConverterSize*)uNew(ConverterSize_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class ConverterSize2 :648
// {
// static ConverterSize2() :648
static void ConverterSize2__cctor__fn(uType* __type)
{
    ConverterSize2::Singleton_ = ConverterSize2::New1();
}

static void ConverterSize2_build(uType* type)
{
    type->SetFields(0,
        ConverterSize2_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterSize2::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterSize2_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterSize2);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterSize2", options);
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::UX::Size2_typeof()));
    type->fp_build_ = ConverterSize2_build;
    type->fp_ctor_ = (void*)ConverterSize2__New1_fn;
    type->fp_cctor_ = ConverterSize2__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterSize2__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterSize2__Out_fn;
    return type;
}

// public generated ConverterSize2() :648
void ConverterSize2__ctor_1_fn(ConverterSize2* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(Uno.UX.Size2 value) :652
void ConverterSize2__In_fn(ConverterSize2* __this, ::g::Uno::UX::Size2* value, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterSize2", "In(Uno.UX.Size2)");
    ::g::Uno::UX::Size2 value_ = *value;
    return *__retval = ::g::Uno::Float4__New2(::g::Uno::UX::Size__op_Explicit(value_.X), ::g::Uno::UX::Size__op_Explicit(value_.Y), 0.0f, 0.0f), void();
}

// public generated ConverterSize2 New() :648
void ConverterSize2__New1_fn(ConverterSize2** __retval)
{
    *__retval = ConverterSize2::New1();
}

// public override sealed Uno.UX.Size2 Out(float4 value) :651
void ConverterSize2__Out_fn(ConverterSize2* __this, ::g::Uno::Float4* value, ::g::Uno::UX::Size2* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterSize2", "Out(float4)");
    ::g::Uno::Float4 value_ = *value;
    return *__retval = ::g::Uno::UX::Size2__op_Implicit1(::g::Uno::Float2__New2(value_.X, value_.Y)), void();
}

uSStrong<ConverterSize2*> ConverterSize2::Singleton_;

// public generated ConverterSize2() [instance] :648
void ConverterSize2::ctor_1()
{
    uStackFrame __("Fuse.Animations.ConverterSize2", ".ctor()");
    ctor_();
}

// public generated ConverterSize2 New() [static] :648
ConverterSize2* ConverterSize2::New1()
{
    ConverterSize2* obj1 = (ConverterSize2*)uNew(ConverterSize2_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class CreateStateParams :82
// {
static void CreateStateParams_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::CreateStateParams, Attached), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::CreateStateParams, TotalDuration), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Animations::CreateStateParams, Variant), 0);
}

uType* CreateStateParams_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(CreateStateParams);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.CreateStateParams", options);
    type->fp_build_ = CreateStateParams_build;
    type->fp_ctor_ = (void*)CreateStateParams__New1_fn;
    return type;
}

// public generated CreateStateParams() :82
void CreateStateParams__ctor__fn(CreateStateParams* __this)
{
    __this->ctor_();
}

// public generated CreateStateParams New() :82
void CreateStateParams__New1_fn(CreateStateParams** __retval)
{
    *__retval = CreateStateParams::New1();
}

// public generated CreateStateParams() [instance] :82
void CreateStateParams::ctor_()
{
}

// public generated CreateStateParams New() [static] :82
CreateStateParams* CreateStateParams::New1()
{
    CreateStateParams* obj1 = (CreateStateParams*)uNew(CreateStateParams_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public sealed class Cycle<T> :727
// {
static void Cycle_build(uType* type)
{
    ::STRINGS[6] = uString::Const("Target");
    ::TYPES[7] = ::g::Fuse::Internal::BlenderMap_typeof();
    ::TYPES[15] = ::g::Fuse::Animations::AnimatorState_typeof();
    ::TYPES[21] = ::g::Fuse::Animations::CycleState_typeof();
    ::TYPES[22] = ::g::Uno::Delegate_typeof();
    type->SetPrecalc(
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(1, type->T(0)),
        ::g::Fuse::Animations::CycleState_typeof()->MakeType(type->T(0)));
    type->SetFields(6,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(::g::Fuse::Animations::Cycle, _easing), 0,
        ::g::Fuse::Animations::EasingFunction_typeof(), offsetof(::g::Fuse::Animations::Cycle, _easingFunction), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Cycle, _hasProgressOffset), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::Cycle, _hertz), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::Cycle, _progressOffset), 0,
        ::g::Fuse::Animations::CycleWaveform_typeof(), offsetof(::g::Fuse::Animations::Cycle, _waveform), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::Cycle, _High), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::Cycle, _Low), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::Cycle, _Target), 0);
    type->Reflection.SetFunctions(16,
        new uFunction("get_Base", NULL, (void*)Cycle__get_Base_fn, 0, false, type->T(0), 0),
        new uFunction("set_Base", NULL, (void*)Cycle__set_Base_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_Easing", NULL, (void*)Cycle__get_Easing_fn, 0, false, ::g::Fuse::Animations::Easing_typeof(), 0),
        new uFunction("set_Easing", NULL, (void*)Cycle__set_Easing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction("get_Frequency", NULL, (void*)Cycle__get_Frequency_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Frequency", NULL, (void*)Cycle__set_Frequency_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_High", NULL, (void*)Cycle__get_High_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_High", NULL, (void*)Cycle__set_High_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Low", NULL, (void*)Cycle__get_Low_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Low", NULL, (void*)Cycle__set_Low_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", type, (void*)Cycle__New2_fn, 0, true, type, 1, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0))),
        new uFunction("get_ProgressOffset", NULL, (void*)Cycle__get_ProgressOffset_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ProgressOffset", NULL, (void*)Cycle__set_ProgressOffset_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Target", NULL, (void*)Cycle__get_Target_fn, 0, false, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), 0),
        new uFunction("get_Waveform", NULL, (void*)Cycle__get_Waveform_fn, 0, false, ::g::Fuse::Animations::CycleWaveform_typeof(), 0),
        new uFunction("set_Waveform", NULL, (void*)Cycle__set_Waveform_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::CycleWaveform_typeof()));
}

::g::Fuse::Animations::Animator_type* Cycle_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(Cycle);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Cycle`1", options);
    type->SetBase(::g::Fuse::Animations::OpenAnimator_typeof());
    type->fp_build_ = Cycle_build;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Cycle__CreateState_fn;
    return type;
}

// public Cycle(Uno.UX.Property<T> Target) :742
void Cycle__ctor_3_fn(Cycle* __this, ::g::Uno::UX::Property1* Target1)
{
    __this->ctor_3(Target1);
}

// public generated T get_Base() :739
void Cycle__get_Base_fn(Cycle* __this, uTRef __retval)
{
    uStackFrame __("Fuse.Animations.Cycle`1", "get_Base()");
    return __retval.Store(__this->_Base()), void();
}

// public generated void set_Base(T value) :739
void Cycle__set_Base_fn(Cycle* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.Cycle`1", "set_Base(T)");
    __this->_Base() = value;
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :767
void Cycle__CreateState_fn(Cycle* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Fuse.Animations.CycleState<T>*/),
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.Cycle`1", "CreateState(Fuse.Animations.CreateStateParams)");
    return *__retval = (::g::Fuse::Animations::CycleState*)::g::Fuse::Animations::CycleState::New1(__types[0], __this, p), void();
}

// public Fuse.Animations.Easing get_Easing() :826
void Cycle__get_Easing_fn(Cycle* __this, int* __retval)
{
    *__retval = __this->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) :827
void Cycle__set_Easing_fn(Cycle* __this, int* value)
{
    __this->Easing(*value);
}

// public double get_Frequency() :755
void Cycle__get_Frequency_fn(Cycle* __this, double* __retval)
{
    *__retval = __this->Frequency();
}

// public void set_Frequency(double value) :756
void Cycle__set_Frequency_fn(Cycle* __this, double* value)
{
    __this->Frequency(*value);
}

// public generated float get_High() :734
void Cycle__get_High_fn(Cycle* __this, float* __retval)
{
    *__retval = __this->High();
}

// public generated void set_High(float value) :734
void Cycle__set_High_fn(Cycle* __this, float* value)
{
    __this->High(*value);
}

// private bool get_IsOneCrossing() :779
void Cycle__get_IsOneCrossing_fn(Cycle* __this, bool* __retval)
{
    *__retval = __this->IsOneCrossing();
}

// private bool get_IsZeroCrossing() :774
void Cycle__get_IsZeroCrossing_fn(Cycle* __this, bool* __retval)
{
    *__retval = __this->IsZeroCrossing();
}

// public generated float get_Low() :732
void Cycle__get_Low_fn(Cycle* __this, float* __retval)
{
    *__retval = __this->Low();
}

// public generated void set_Low(float value) :732
void Cycle__set_Low_fn(Cycle* __this, float* value)
{
    __this->Low(*value);
}

// public Cycle New(Uno.UX.Property<T> Target) :742
void Cycle__New2_fn(uType* __type, ::g::Uno::UX::Property1* Target1, Cycle** __retval)
{
    *__retval = Cycle::New2(__type, Target1);
}

// public float get_ProgressOffset() :813
void Cycle__get_ProgressOffset_fn(Cycle* __this, float* __retval)
{
    *__retval = __this->ProgressOffset();
}

// public void set_ProgressOffset(float value) :814
void Cycle__set_ProgressOffset_fn(Cycle* __this, float* value)
{
    __this->ProgressOffset(*value);
}

// private double get_RestProgress() :787
void Cycle__get_RestProgress_fn(Cycle* __this, double* __retval)
{
    *__retval = __this->RestProgress();
}

// public generated Uno.UX.Property<T> get_Target() :730
void Cycle__get_Target_fn(Cycle* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :730
void Cycle__set_Target_fn(Cycle* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// public Fuse.Animations.CycleWaveform get_Waveform() :763
void Cycle__get_Waveform_fn(Cycle* __this, int* __retval)
{
    *__retval = __this->Waveform();
}

// public void set_Waveform(Fuse.Animations.CycleWaveform value) :764
void Cycle__set_Waveform_fn(Cycle* __this, int* value)
{
    __this->Waveform(*value);
}

// internal double WaveformFunc(double i, double offset) :834
void Cycle__WaveformFunc_fn(Cycle* __this, double* i, double* offset, double* __retval)
{
    *__retval = __this->WaveformFunc(*i, *offset);
}

// public Cycle(Uno.UX.Property<T> Target) [instance] :742
void Cycle::ctor_3(::g::Uno::UX::Property1* Target1)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*Fuse.Internal.BlenderMap.Get<T>*/),
    };
    uStackFrame __("Fuse.Animations.Cycle`1", ".ctor(Uno.UX.Property<T>)");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    _hertz = 1.0;
    _progressOffset = 0.0f;
    ctor_2();

    if (Target1 == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[6/*"Target"*/]));

    Target(Target1);
    ::g::Fuse::Internal::Blender* blender = (::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[1]);
    Cycle__set_Base_fn(this, (uPtr(blender)->get_One_ex(&ret2), ret2));
}

// public Fuse.Animations.Easing get_Easing() [instance] :826
int Cycle::Easing()
{
    uStackFrame __("Fuse.Animations.Cycle`1", "get_Easing()");
    return _easing;
}

// public void set_Easing(Fuse.Animations.Easing value) [instance] :827
void Cycle::Easing(int value)
{
    uStackFrame __("Fuse.Animations.Cycle`1", "set_Easing(Fuse.Animations.Easing)");
    _easing = value;
    _easingFunction = ::g::Fuse::Animations::EasingFunctions::FromEasing(_easing);
}

// public double get_Frequency() [instance] :755
double Cycle::Frequency()
{
    uStackFrame __("Fuse.Animations.Cycle`1", "get_Frequency()");
    return _hertz;
}

// public void set_Frequency(double value) [instance] :756
void Cycle::Frequency(double value)
{
    uStackFrame __("Fuse.Animations.Cycle`1", "set_Frequency(double)");
    _hertz = value;
}

// public generated float get_High() [instance] :734
float Cycle::High()
{
    uStackFrame __("Fuse.Animations.Cycle`1", "get_High()");
    return _High;
}

// public generated void set_High(float value) [instance] :734
void Cycle::High(float value)
{
    uStackFrame __("Fuse.Animations.Cycle`1", "set_High(float)");
    _High = value;
}

// private bool get_IsOneCrossing() [instance] :779
bool Cycle::IsOneCrossing()
{
    uStackFrame __("Fuse.Animations.Cycle`1", "get_IsOneCrossing()");
    return (Low() <= 1.0f) && (High() >= 1.0f);
}

// private bool get_IsZeroCrossing() [instance] :774
bool Cycle::IsZeroCrossing()
{
    uStackFrame __("Fuse.Animations.Cycle`1", "get_IsZeroCrossing()");
    return (Low() <= 0.0f) && (High() >= 0.0f);
}

// public generated float get_Low() [instance] :732
float Cycle::Low()
{
    uStackFrame __("Fuse.Animations.Cycle`1", "get_Low()");
    return _Low;
}

// public generated void set_Low(float value) [instance] :732
void Cycle::Low(float value)
{
    uStackFrame __("Fuse.Animations.Cycle`1", "set_Low(float)");
    _Low = value;
}

// public float get_ProgressOffset() [instance] :813
float Cycle::ProgressOffset()
{
    uStackFrame __("Fuse.Animations.Cycle`1", "get_ProgressOffset()");
    return (_hasProgressOffset || ::g::Uno::Delegate::op_Inequality(_easingFunction, NULL)) ? _progressOffset : (float)RestProgress();
}

// public void set_ProgressOffset(float value) [instance] :814
void Cycle::ProgressOffset(float value)
{
    uStackFrame __("Fuse.Animations.Cycle`1", "set_ProgressOffset(float)");
    _hasProgressOffset = true;
    _progressOffset = value;
}

// private double get_RestProgress() [instance] :787
double Cycle::RestProgress()
{
    uStackFrame __("Fuse.Animations.Cycle`1", "get_RestProgress()");
    double v = 0.0;

    if (IsZeroCrossing())
        v = (double)((0.0f - Low()) / (High() - Low()));
    else if (IsOneCrossing())
        v = (double)((1.0f - Low()) / (High() - Low()));

    switch (Waveform())
    {
        case 0:
            return ::g::Uno::Math::Asin(2.0 * (v - 0.5)) / 6.2831853071795862;
        case 1:
            return v * 0.5;
        case 2:
            return v;
    }

    return v;
}

// public generated Uno.UX.Property<T> get_Target() [instance] :730
::g::Uno::UX::Property1* Cycle::Target()
{
    uStackFrame __("Fuse.Animations.Cycle`1", "get_Target()");
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :730
void Cycle::Target(::g::Uno::UX::Property1* value)
{
    uStackFrame __("Fuse.Animations.Cycle`1", "set_Target(Uno.UX.Property<T>)");
    _Target = value;
}

// public Fuse.Animations.CycleWaveform get_Waveform() [instance] :763
int Cycle::Waveform()
{
    uStackFrame __("Fuse.Animations.Cycle`1", "get_Waveform()");
    return _waveform;
}

// public void set_Waveform(Fuse.Animations.CycleWaveform value) [instance] :764
void Cycle::Waveform(int value)
{
    uStackFrame __("Fuse.Animations.Cycle`1", "set_Waveform(Fuse.Animations.CycleWaveform)");
    _waveform = value;
}

// internal double WaveformFunc(double i, double offset) [instance] :834
double Cycle::WaveformFunc(double i, double offset)
{
    uStackFrame __("Fuse.Animations.Cycle`1", "WaveformFunc(double,double)");

    switch (Waveform())
    {
        case 0:
            return (::g::Uno::Math::Sin(((i + offset) * 3.1415926535897931) * 2.0) / 2.0) + 0.5;
        case 1:
        {
            double a = ::g::Uno::Math::Mod(i + offset, 1.0);

            if (a < 0.5)
                return a * 2.0;

            return 1.0 + (2.0 * (0.5 - a));
        }
        case 2:
            return ::g::Uno::Math::Mod(i + offset, 1.0);
    }

    return i;
}

// public Cycle New(Uno.UX.Property<T> Target) [static] :742
Cycle* Cycle::New2(uType* __type, ::g::Uno::UX::Property1* Target1)
{
    Cycle* obj1 = (Cycle*)uNew(__type);
    obj1->ctor_3(Target1);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class CycleState<T> :855
// {
static void CycleState_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Invalid seek");
    ::STRINGS[2] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno");
    ::TYPES[23] = ::g::Fuse::Animations::OpenAnimator_typeof();
    ::TYPES[19] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[7] = ::g::Fuse::Internal::BlenderMap_typeof();
    ::TYPES[20] = ::g::Fuse::Animations::IMixerHandle_typeof();
    ::TYPES[22] = ::g::Uno::Delegate_typeof();
    type->SetPrecalc(
        ::g::Fuse::Animations::IMixer_typeof()->MakeMethod(1, type->T(0)),
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(1, type->T(0)),
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0)));
    type->SetFields(5,
        ::g::Fuse::Animations::Cycle_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::CycleState, Animator1), 0,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::CycleState, blender), 0,
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::CycleState, mixHandle), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::CycleState, progress), 0);
}

::g::Fuse::Animations::OpenAnimatorState_type* CycleState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::OpenAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.GenericCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(CycleState);
    options.TypeSize = sizeof(::g::Fuse::Animations::OpenAnimatorState_type);
    type = (::g::Fuse::Animations::OpenAnimatorState_type*)uClassType::New("Fuse.Animations.CycleState`1", options);
    type->SetBase(::g::Fuse::Animations::OpenAnimatorState_typeof());
    type->fp_build_ = CycleState_build;
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))CycleState__Disable_fn;
    type->fp_Seek = (void(*)(::g::Fuse::Animations::OpenAnimatorState*, bool*, float*, float*, int*, bool*))CycleState__Seek_fn;
    return type;
}

// public CycleState(Fuse.Animations.Cycle<T> animator, Fuse.Animations.CreateStateParams p) :861
void CycleState__ctor_2_fn(CycleState* __this, ::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :869
void CycleState__Disable_fn(CycleState* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Fuse.Animations.IMixerHandle<T>*/),
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.CycleState`1", "Disable()");

    if (__this->mixHandle == NULL)
        return;

    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), __types[0]));
    __this->mixHandle = NULL;
    __this->progress = 0.0;
}

// public CycleState New(Fuse.Animations.Cycle<T> animator, Fuse.Animations.CreateStateParams p) :861
void CycleState__New1_fn(uType* __type, ::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p, CycleState** __retval)
{
    *__retval = CycleState::New1(__type, animator, p);
}

// protected override sealed bool Seek(bool on, float interval, float strength, Fuse.Animations.SeekDirection dir) :887
void CycleState__Seek_fn(CycleState* __this, bool* on, float* interval, float* strength, int* dir, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(2/*Fuse.Animations.IMixerHandle<T>*/),
    };
    uStackFrame __("Fuse.Animations.CycleState`1", "Seek(bool,float,float,Fuse.Animations.SeekDirection)");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    float interval_ = *interval;
    bool on_ = *on;
    float ret2;
    float strength_ = *strength;

    if (__this->mixHandle == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[7/*"Invalid seek"*/], 1, ::STRINGS[2/*"/usr/local/...*/], 891);
        return *__retval = true, void();
    }

    bool done = false;
    double oldProgress = __this->progress;
    __this->progress = (__this->progress + ((double)interval_ * uPtr(__this->Animator1)->Frequency()));

    if (on_)
        __this->progress = ::g::Uno::Math::Mod(__this->progress, 1.0);
    else if ((((oldProgress <= 0.0) || (__this->progress <= 0.0)) || (__this->progress >= 1.0)) || (oldProgress >= 1.0))
    {
        __this->progress = 0.0;
        done = true;
    }

    double s = uPtr(__this->Animator1)->WaveformFunc(__this->progress, (double)uPtr(__this->Animator1)->ProgressOffset());

    if (::g::Uno::Delegate::op_Inequality(uPtr(__this->Animator1)->_easingFunction, NULL))
        s = (double)(uPtr(uPtr(__this->Animator1)->_easingFunction)->Invoke(&ret2, 1, uCRef((float)s)), ret2);

    ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), __types[1]), (uPtr(__this->blender)->Weight_ex((::g::Fuse::Animations::Cycle__get_Base_fn(uPtr(__this->Animator1), &ret4), ret4), uCRef((double)::g::Uno::Math::Lerp1(uPtr(__this->Animator1)->Low(), uPtr(__this->Animator1)->High(), (float)s)), &ret3), ret3), uCRef(strength_));
    return *__retval = done, void();
}

// public CycleState(Fuse.Animations.Cycle<T> animator, Fuse.Animations.CreateStateParams p) [instance] :861
void CycleState::ctor_2(::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.IMixer.Register<T>*/),
        __type->T(0),
        __type->Precalced(1/*Fuse.Internal.BlenderMap.Get<T>*/),
    };
    uStackFrame __("Fuse.Animations.CycleState`1", ".ctor(Fuse.Animations.Cycle<T>,Fuse.Animations.CreateStateParams)");
    ctor_1(animator, p, NULL);
    Animator1 = animator;
    mixHandle = ((uObject*)::g::Fuse::Animations::IMixer::Register(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[19/*Fuse.Animations.IMixer*/]), __types[0], (::g::Uno::UX::Property1*)uPtr(Animator1)->Target(), uPtr(Animator1)->MixOp()));
    blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[2]));
}

// public CycleState New(Fuse.Animations.Cycle<T> animator, Fuse.Animations.CreateStateParams p) [static] :861
CycleState* CycleState::New1(uType* __type, ::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    CycleState* obj1 = (CycleState*)uNew(__type);
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public enum CycleWaveform :692
uEnumType* CycleWaveform_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.CycleWaveform", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Sine", 0LL,
        "Triangle", 1LL,
        "Sawtooth", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class DiscreteKeyframeTrack :930
// {
static void DiscreteKeyframeTrack_build(uType* type)
{
    ::TYPES[24] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::Keyframe_typeof());
    ::TYPES[25] = ::g::Fuse::Animations::DiscreteTrackProvider_typeof();
    ::TYPES[26] = ::g::Fuse::Animations::SeekResult_typeof();
    ::TYPES[8] = ::g::Uno::Int_typeof();
    ::TYPES[27] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Animations::Keyframe_typeof());
    type->SetInterfaces(
        ::g::Fuse::Animations::DiscreteTrackProvider_typeof(), offsetof(DiscreteKeyframeTrack_type, interface0),
        ::g::Fuse::Animations::ITrackProvider_typeof(), offsetof(DiscreteKeyframeTrack_type, interface1),
        ::g::Fuse::Animations::KeyframeTrack_typeof(), offsetof(DiscreteKeyframeTrack_type, interface2),
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(DiscreteKeyframeTrack_type, interface3));
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::DiscreteKeyframeTrack, _duration), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::Keyframe_typeof()), offsetof(::g::Fuse::Animations::DiscreteKeyframeTrack, _frames), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::DiscreteKeyframeTrack, _init), 0,
        ::g::Fuse::Animations::KeyframeInterpolation_typeof(), offsetof(::g::Fuse::Animations::DiscreteKeyframeTrack, _Interpolation), 0);
}

DiscreteKeyframeTrack_type* DiscreteKeyframeTrack_typeof()
{
    static uSStrong<DiscreteKeyframeTrack_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(DiscreteKeyframeTrack);
    options.TypeSize = sizeof(DiscreteKeyframeTrack_type);
    type = (DiscreteKeyframeTrack_type*)uClassType::New("Fuse.Animations.DiscreteKeyframeTrack", options);
    type->fp_build_ = DiscreteKeyframeTrack_build;
    type->fp_ctor_ = (void*)DiscreteKeyframeTrack__New1_fn;
    type->interface3.fp_GetDuration = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*, double*))DiscreteKeyframeTrack__FuseAnimationsTrackProviderGetDuration_fn;
    type->interface3.fp_GetAnimatorVariant = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*))DiscreteKeyframeTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn;
    type->interface0.fp_GetSeekProgress = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, uObject**, double*, int*))DiscreteKeyframeTrack__FuseAnimationsDiscreteTrackProviderGetSeekProgress_fn;
    type->interface0.fp_GetSeekTime = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, uObject**, double*, int*))DiscreteKeyframeTrack__FuseAnimationsDiscreteTrackProviderGetSeekTime_fn;
    type->interface2.fp_get_Keyframes = (void(*)(uObject*, uObject**))DiscreteKeyframeTrack__get_Keyframes_fn;
    type->interface2.fp_get_Interpolation = (void(*)(uObject*, int*))DiscreteKeyframeTrack__get_Interpolation_fn;
    type->interface2.fp_set_Interpolation = (void(*)(uObject*, int*))DiscreteKeyframeTrack__set_Interpolation_fn;
    return type;
}

// public generated DiscreteKeyframeTrack() :930
void DiscreteKeyframeTrack__ctor__fn(DiscreteKeyframeTrack* __this)
{
    __this->ctor_();
}

// private Fuse.Animations.SeekResult Fuse.Animations.DiscreteTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState tas, double progress, double interval, Fuse.Animations.SeekDirection dir, object& value, double& strength) :963
void DiscreteKeyframeTrack__FuseAnimationsDiscreteTrackProviderGetSeekProgress_fn(DiscreteKeyframeTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int* dir, uObject** value, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteKeyframeTrack", "Fuse.Animations.DiscreteTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState,double,double,Fuse.Animations.SeekDirection,object&,double&)");
    double progress_ = *progress;
    double interval_ = *interval;
    int dir_ = *dir;
    return *__retval = ::g::Fuse::Animations::DiscreteTrackProvider::GetSeekTime(uInterface(uPtr(uAs<uObject*>(__this, ::TYPES[25/*Fuse.Animations.DiscreteTrackProvider*/])), ::TYPES[25/*Fuse.Animations.DiscreteTrackProvider*/]), tas, progress_ * __this->_duration, interval_, dir_, value, strength), void();
}

// private Fuse.Animations.SeekResult Fuse.Animations.DiscreteTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState tas, double elapsed, double interval, Fuse.Animations.SeekDirection dir, object& value, double& strength) :971
void DiscreteKeyframeTrack__FuseAnimationsDiscreteTrackProviderGetSeekTime_fn(DiscreteKeyframeTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int* dir, uObject** value, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteKeyframeTrack", "Fuse.Animations.DiscreteTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState,double,double,Fuse.Animations.SeekDirection,object&,double&)");
    ::g::Fuse::Animations::Keyframe* ret2;
    double elapsed_ = *elapsed;
    ::g::Fuse::Animations::Keyframe* ret3;
    ::g::Fuse::Animations::Keyframe* ret4;
    int dir_ = *dir;
    __this->Init();

    if (uPtr(__this->_frames)->Count() == 0)
    {
        *value = NULL;
        *strength = 0.0;
        return *__retval = 3, void();
    }

    int segment = -1;

    while ((segment < (uPtr(__this->_frames)->Count() - 2)) && (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(segment + 1), &ret2), ret2))->Time() <= elapsed_))
        ++segment;

    if (segment == -1)
    {
        *value = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(0), &ret3), ret3))->ObjectValue();
        *strength = 0.0;
    }
    else
    {
        *value = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(segment), &ret4), ret4))->ObjectValue();
        *strength = 1.0;
    }

    return *__retval = (((dir_ == 0) ? elapsed_ >= 0.0 : elapsed_ <= 0.0) ? 1 : 0) | 2, void();
}

// private Fuse.Animations.AnimatorVariant Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator ta) :958
void DiscreteKeyframeTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn(DiscreteKeyframeTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteKeyframeTrack", "Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator)");
    return *__retval = 0, void();
}

// private double Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator ta, Fuse.Animations.AnimationVariant variant) :952
void DiscreteKeyframeTrack__FuseAnimationsTrackProviderGetDuration_fn(DiscreteKeyframeTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* variant, double* __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteKeyframeTrack", "Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator,Fuse.Animations.AnimationVariant)");
    __this->Init();
    return *__retval = __this->_duration, void();
}

// private void Init() :943
void DiscreteKeyframeTrack__Init_fn(DiscreteKeyframeTrack* __this)
{
    __this->Init();
}

// public generated Fuse.Animations.KeyframeInterpolation get_Interpolation() :939
void DiscreteKeyframeTrack__get_Interpolation_fn(DiscreteKeyframeTrack* __this, int* __retval)
{
    *__retval = __this->Interpolation();
}

// public generated void set_Interpolation(Fuse.Animations.KeyframeInterpolation value) :939
void DiscreteKeyframeTrack__set_Interpolation_fn(DiscreteKeyframeTrack* __this, int* value)
{
    __this->Interpolation(*value);
}

// public Uno.Collections.IList<Fuse.Animations.Keyframe> get_Keyframes() :936
void DiscreteKeyframeTrack__get_Keyframes_fn(DiscreteKeyframeTrack* __this, uObject** __retval)
{
    *__retval = __this->Keyframes();
}

// public generated DiscreteKeyframeTrack New() :930
void DiscreteKeyframeTrack__New1_fn(DiscreteKeyframeTrack** __retval)
{
    *__retval = DiscreteKeyframeTrack::New1();
}

// public generated DiscreteKeyframeTrack() [instance] :930
void DiscreteKeyframeTrack::ctor_()
{
    uStackFrame __("Fuse.Animations.DiscreteKeyframeTrack", ".ctor()");
    _frames = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[24/*Uno.Collections.List<Fuse.Animations.Keyframe>*/]));
}

// private void Init() [instance] :943
void DiscreteKeyframeTrack::Init()
{
    uStackFrame __("Fuse.Animations.DiscreteKeyframeTrack", "Init()");

    if (_init)
        return;

    _duration = ::g::Fuse::Animations::Keyframe::CompleteFrames((uObject*)_frames, 0.0f, 0.0f, 0.0f);
    _init = true;
}

// public generated Fuse.Animations.KeyframeInterpolation get_Interpolation() [instance] :939
int DiscreteKeyframeTrack::Interpolation()
{
    uStackFrame __("Fuse.Animations.DiscreteKeyframeTrack", "get_Interpolation()");
    return _Interpolation;
}

// public generated void set_Interpolation(Fuse.Animations.KeyframeInterpolation value) [instance] :939
void DiscreteKeyframeTrack::Interpolation(int value)
{
    uStackFrame __("Fuse.Animations.DiscreteKeyframeTrack", "set_Interpolation(Fuse.Animations.KeyframeInterpolation)");
    _Interpolation = value;
}

// public Uno.Collections.IList<Fuse.Animations.Keyframe> get_Keyframes() [instance] :936
uObject* DiscreteKeyframeTrack::Keyframes()
{
    uStackFrame __("Fuse.Animations.DiscreteKeyframeTrack", "get_Keyframes()");
    return (uObject*)_frames;
}

// public generated DiscreteKeyframeTrack New() [static] :930
DiscreteKeyframeTrack* DiscreteKeyframeTrack::New1()
{
    DiscreteKeyframeTrack* obj1 = (DiscreteKeyframeTrack*)uNew(DiscreteKeyframeTrack_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class DiscreteMasterProperty<T> :1024
// {
static void DiscreteMasterProperty_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface0),
        ::g::Fuse::Animations::MasterPropertyGet_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface2));
    type->SetFields(10);
}

::g::Fuse::Animations::MasterProperty_type* DiscreteMasterProperty_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(DiscreteMasterProperty);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterProperty_type);
    type = (::g::Fuse::Animations::MasterProperty_type*)uClassType::New("Fuse.Animations.DiscreteMasterProperty`1", options);
    type->SetBase(::g::Fuse::Animations::MasterProperty_typeof()->MakeType(type->T(0)));
    type->fp_build_ = DiscreteMasterProperty_build;
    type->fp_OnComplete = (void(*)(::g::Fuse::Animations::MasterBase*))DiscreteMasterProperty__OnComplete_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Animations::MasterProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_GetPropertyObject = (void(*)(uObject*, uObject**))::g::Fuse::Animations::MasterProperty__GetPropertyObject_fn;
    return type;
}

// public DiscreteMasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :1026
void DiscreteMasterProperty__ctor_2_fn(DiscreteMasterProperty* __this, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_2(property, mixerBase);
}

// public DiscreteMasterProperty New(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :1026
void DiscreteMasterProperty__New1_fn(uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase, DiscreteMasterProperty** __retval)
{
    *__retval = DiscreteMasterProperty::New1(__type, property, mixerBase);
}

// public override sealed void OnComplete() :1029
void DiscreteMasterProperty__OnComplete_fn(DiscreteMasterProperty* __this)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.DiscreteMasterProperty`1", "OnComplete()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT nv(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Fuse::Animations::MixerHandle* ret3;
    nv = (__this->get_RestValue_ex(&ret2), ret2);
    float str = 0.5f;

    for (int i = 0; i < uPtr((::g::Uno::Collections::List*)__this->Handles)->Count(); ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)__this->Handles), uCRef<int>(i), &ret3), ret3);

        if (uPtr(v)->HasValue() && (uPtr(v)->Strength > str))
        {
            nv = uPtr(v)->Value();
            str = v->Strength;
        }
    }

    ::g::Fuse::Animations::MasterProperty__Set_fn(__this, nv);
}

// public DiscreteMasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [instance] :1026
void DiscreteMasterProperty::ctor_2(::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    uStackFrame __("Fuse.Animations.DiscreteMasterProperty`1", ".ctor(Uno.UX.Property<T>,Fuse.Animations.MixerBase)");
    ctor_1(property, mixerBase);
}

// public DiscreteMasterProperty New(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [static] :1026
DiscreteMasterProperty* DiscreteMasterProperty::New1(uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    DiscreteMasterProperty* obj1 = (DiscreteMasterProperty*)uNew(__type);
    obj1->ctor_2(property, mixerBase);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class DiscreteMasterTransform :1047
// {
static void DiscreteMasterTransform_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterBase_type, interface0));
    type->SetFields(6);
}

::g::Fuse::Animations::MasterBase_type* DiscreteMasterTransform_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DiscreteMasterTransform);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterBase_type);
    type = (::g::Fuse::Animations::MasterBase_type*)uClassType::New("Fuse.Animations.DiscreteMasterTransform", options);
    type->SetBase(::g::Fuse::Animations::MasterTransform_typeof());
    type->fp_build_ = DiscreteMasterTransform_build;
    type->fp_OnComplete = (void(*)(::g::Fuse::Animations::MasterBase*))DiscreteMasterTransform__OnComplete_fn;
    return type;
}

// public DiscreteMasterTransform(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) :1049
void DiscreteMasterTransform__ctor_2_fn(DiscreteMasterTransform* __this, ::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_2(node, mixerBase);
}

// public DiscreteMasterTransform New(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) :1049
void DiscreteMasterTransform__New1_fn(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase, DiscreteMasterTransform** __retval)
{
    *__retval = DiscreteMasterTransform::New1(node, mixerBase);
}

// public override sealed void OnComplete() :1052
void DiscreteMasterTransform__OnComplete_fn(DiscreteMasterTransform* __this)
{
    uStackFrame __("Fuse.Animations.DiscreteMasterTransform", "OnComplete()");
    ::g::Fuse::Animations::MixerHandle* ret2;
    uPtr(uPtr(__this->FMT)->Matrix)->ResetIdentity();
    float str = 0.5f;
    ::g::Fuse::Transform* value = NULL;

    for (int i = 0; i < uPtr((::g::Uno::Collections::List*)__this->Handles)->Count(); ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)__this->Handles), uCRef<int>(i), &ret2), ret2);

        if (uPtr(v)->HasValue() && (uPtr(v)->Strength > str))
        {
            value = uPtr(v)->Value().Strong< ::g::Fuse::Transform*>();
            str = v->Strength;
        }
    }

    if (value != NULL)
        uPtr(value)->AppendTo(uPtr(__this->FMT)->Matrix, 1.0f);

    uPtr(__this->FMT)->Changed();
}

// public DiscreteMasterTransform(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) [instance] :1049
void DiscreteMasterTransform::ctor_2(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    uStackFrame __("Fuse.Animations.DiscreteMasterTransform", ".ctor(Fuse.Visual,Fuse.Animations.MixerBase)");
    ctor_1(node, mixerBase);
}

// public DiscreteMasterTransform New(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) [static] :1049
DiscreteMasterTransform* DiscreteMasterTransform::New1(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    DiscreteMasterTransform* obj1 = (DiscreteMasterTransform*)uNew(DiscreteMasterTransform_typeof());
    obj1->ctor_2(node, mixerBase);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class DiscreteMixer :1014
// {
static void DiscreteMixer_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Animations::MasterProperty_typeof();
    ::TYPES[28] = ::g::Fuse::Animations::DiscreteMasterProperty_typeof();
    ::TYPES[12] = ::g::Fuse::Animations::MasterBase_typeof()->MakeType(::g::Fuse::Transform_typeof());
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixer_typeof(), offsetof(::g::Fuse::Animations::MixerBase_type, interface0));
    type->SetFields(2);
}

::g::Fuse::Animations::MixerBase_type* DiscreteMixer_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MixerBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(DiscreteMixer);
    options.TypeSize = sizeof(::g::Fuse::Animations::MixerBase_type);
    type = (::g::Fuse::Animations::MixerBase_type*)uClassType::New("Fuse.Animations.DiscreteMixer", options);
    type->SetBase(::g::Fuse::Animations::MixerBase_typeof());
    type->fp_build_ = DiscreteMixer_build;
    type->fp_ctor_ = (void*)DiscreteMixer__New1_fn;
    type->fp_CreateMaster = (void(*)(::g::Fuse::Animations::MixerBase*, uType*, ::g::Uno::UX::Property1*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterProperty**))DiscreteMixer__CreateMaster_fn;
    type->fp_CreateMasterTransform = (void(*)(::g::Fuse::Animations::MixerBase*, ::g::Fuse::Visual*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterBase**))DiscreteMixer__CreateMasterTransform_fn;
    type->interface0.fp_Register = (void(*)(uObject*, uType*, ::g::Uno::UX::Property1*, int*, uObject**))::g::Fuse::Animations::MixerBase__Register_fn;
    type->interface0.fp_RegisterTransform = (void(*)(uObject*, ::g::Fuse::Visual*, int*, int*, uObject**))::g::Fuse::Animations::MixerBase__RegisterTransform_fn;
    return type;
}

// public generated DiscreteMixer() :1014
void DiscreteMixer__ctor_1_fn(DiscreteMixer* __this)
{
    __this->ctor_1();
}

// protected override sealed Fuse.Animations.MasterProperty<T> CreateMaster<T>(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :1016
void DiscreteMixer__CreateMaster_fn(DiscreteMixer* __this, uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterProperty** __retval)
{
    __type = DiscreteMixer_typeof()->GetVirtual(__type);
    uType* __types[] = {
        ::TYPES[10/*Fuse.Animations.MasterProperty`1*/]->MakeType(__type->U(0)),
        __type->U(0),
        ::TYPES[28/*Fuse.Animations.DiscreteMasterProperty`1*/]->MakeType(__type->U(0)),
    };
    uStackFrame __("Fuse.Animations.DiscreteMixer", "CreateMaster`1(Uno.UX.Property<T>,Fuse.Animations.MixerBase)");
    return *__retval = (::g::Fuse::Animations::DiscreteMasterProperty*)::g::Fuse::Animations::DiscreteMasterProperty::New1(__types[2], property, mixerBase), void();
}

// protected override sealed Fuse.Animations.MasterBase<Fuse.Transform> CreateMasterTransform(Fuse.Visual element, Fuse.Animations.MixerBase mixerBase) :1019
void DiscreteMixer__CreateMasterTransform_fn(DiscreteMixer* __this, ::g::Fuse::Visual* element, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterBase** __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteMixer", "CreateMasterTransform(Fuse.Visual,Fuse.Animations.MixerBase)");
    return *__retval = ::g::Fuse::Animations::DiscreteMasterTransform::New1(element, mixerBase), void();
}

// public generated DiscreteMixer New() :1014
void DiscreteMixer__New1_fn(DiscreteMixer** __retval)
{
    *__retval = DiscreteMixer::New1();
}

// public generated DiscreteMixer() [instance] :1014
void DiscreteMixer::ctor_1()
{
    uStackFrame __("Fuse.Animations.DiscreteMixer", ".ctor()");
    ctor_();
}

// public generated DiscreteMixer New() [static] :1014
DiscreteMixer* DiscreteMixer::New1()
{
    DiscreteMixer* obj1 = (DiscreteMixer*)uNew(DiscreteMixer_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class DiscreteSingleTrack :1082
// {
// static DiscreteSingleTrack() :1082
static void DiscreteSingleTrack__cctor__fn(uType* __type)
{
    DiscreteSingleTrack::Singleton_ = DiscreteSingleTrack::New1();
}

static void DiscreteSingleTrack_build(uType* type)
{
    ::TYPES[26] = ::g::Fuse::Animations::SeekResult_typeof();
    ::TYPES[8] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::DiscreteTrackProvider_typeof(), offsetof(DiscreteSingleTrack_type, interface0),
        ::g::Fuse::Animations::ITrackProvider_typeof(), offsetof(DiscreteSingleTrack_type, interface1),
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(DiscreteSingleTrack_type, interface2));
    type->SetFields(0,
        DiscreteSingleTrack_typeof(), (uintptr_t)&::g::Fuse::Animations::DiscreteSingleTrack::Singleton_, uFieldFlagsStatic);
}

DiscreteSingleTrack_type* DiscreteSingleTrack_typeof()
{
    static uSStrong<DiscreteSingleTrack_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(DiscreteSingleTrack);
    options.TypeSize = sizeof(DiscreteSingleTrack_type);
    type = (DiscreteSingleTrack_type*)uClassType::New("Fuse.Animations.DiscreteSingleTrack", options);
    type->fp_build_ = DiscreteSingleTrack_build;
    type->fp_ctor_ = (void*)DiscreteSingleTrack__New1_fn;
    type->fp_cctor_ = DiscreteSingleTrack__cctor__fn;
    type->interface2.fp_GetDuration = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*, double*))DiscreteSingleTrack__FuseAnimationsTrackProviderGetDuration_fn;
    type->interface2.fp_GetAnimatorVariant = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*))DiscreteSingleTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn;
    type->interface0.fp_GetSeekProgress = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, uObject**, double*, int*))DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekProgress_fn;
    type->interface0.fp_GetSeekTime = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, uObject**, double*, int*))DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekTime_fn;
    return type;
}

// public generated DiscreteSingleTrack() :1082
void DiscreteSingleTrack__ctor__fn(DiscreteSingleTrack* __this)
{
    __this->ctor_();
}

// private Fuse.Animations.SeekResult Fuse.Animations.DiscreteTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState tas, double progress, double interval, Fuse.Animations.SeekDirection dir, object& value, double& strength) :1097
void DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekProgress_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int* dir, uObject** value, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteSingleTrack", "Fuse.Animations.DiscreteTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState,double,double,Fuse.Animations.SeekDirection,object&,double&)");
    double progress_ = *progress;
    int dir_ = *dir;
    *strength = progress_;
    *value = uPtr(uPtr(tas)->Animator)->_objectValue;
    return *__retval = (((dir_ == 0) ? progress_ >= 1.0 : progress_ <= 0.0) ? 1 : 0) | 2, void();
}

// private Fuse.Animations.SeekResult Fuse.Animations.DiscreteTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState tas, double elapsed, double interval, Fuse.Animations.SeekDirection dir, object& value, double& strength) :1108
void DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekTime_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int* dir, uObject** value, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteSingleTrack", "Fuse.Animations.DiscreteTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState,double,double,Fuse.Animations.SeekDirection,object&,double&)");
    int dir_ = *dir;
    double elapsed_ = *elapsed;
    double duration = uPtr(tas)->Duration();
    float progress;

    if (duration < 9.9999997473787516e-06)
        progress = (float)(((dir_ == 0) ? elapsed_ >= -9.9999997473787516e-06 : elapsed_ > 9.9999997473787516e-06) ? 1 : 0);
    else
        progress = (float)(elapsed_ / duration);

    *strength = (double)::g::Uno::Math::Clamp1(progress, 0.0f, 1.0f);
    *value = uPtr(tas->Animator)->_objectValue;
    return *__retval = (((dir_ == 0) ? elapsed_ >= 0.0 : elapsed_ <= 0.0) ? 1 : 0) | 2, void();
}

// private Fuse.Animations.AnimatorVariant Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator ta) :1092
void DiscreteSingleTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteSingleTrack", "Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator)");
    return *__retval = uPtr(ta)->HasBack() ? 2 : 0, void();
}

// private double Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator ta, Fuse.Animations.AnimationVariant variant) :1087
void DiscreteSingleTrack__FuseAnimationsTrackProviderGetDuration_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* variant, double* __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteSingleTrack", "Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator,Fuse.Animations.AnimationVariant)");
    int variant_ = *variant;
    return *__retval = (variant_ == 1) ? uPtr(ta)->DurationBack() : uPtr(ta)->Duration(), void();
}

// public generated DiscreteSingleTrack New() :1082
void DiscreteSingleTrack__New1_fn(DiscreteSingleTrack** __retval)
{
    *__retval = DiscreteSingleTrack::New1();
}

uSStrong<DiscreteSingleTrack*> DiscreteSingleTrack::Singleton_;

// public generated DiscreteSingleTrack() [instance] :1082
void DiscreteSingleTrack::ctor_()
{
}

// public generated DiscreteSingleTrack New() [static] :1082
DiscreteSingleTrack* DiscreteSingleTrack::New1()
{
    DiscreteSingleTrack* obj1 = (DiscreteSingleTrack*)uNew(DiscreteSingleTrack_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class DiscreteTrackChangeState<T> :563
// {
static void DiscreteTrackChangeState_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Invalid Seek");
    ::STRINGS[2] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno");
    ::TYPES[18] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[19] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[20] = ::g::Fuse::Animations::IMixerHandle_typeof();
    type->SetPrecalc(
        ::g::Fuse::Animations::IMixer_typeof()->MakeMethod(1, type->T(0)),
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0)));
    type->SetFields(6,
        ::g::Fuse::Animations::Change_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::DiscreteTrackChangeState, Animator1), 0,
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::DiscreteTrackChangeState, mixHandle), 0);
}

::g::Fuse::Animations::TrackAnimatorState_type* DiscreteTrackChangeState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(DiscreteTrackChangeState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.DiscreteTrackChangeState`1", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimatorState_typeof());
    type->fp_build_ = DiscreteTrackChangeState_build;
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Disable_fn;
    type->fp_SeekObjectValue = (void(*)(::g::Fuse::Animations::TrackAnimatorState*, uObject*, float*))DiscreteTrackChangeState__SeekObjectValue_fn;
    return type;
}

// public DiscreteTrackChangeState(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) :568
void DiscreteTrackChangeState__ctor_2_fn(DiscreteTrackChangeState* __this, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :575
void DiscreteTrackChangeState__Disable_fn(DiscreteTrackChangeState* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Fuse.Animations.IMixerHandle<T>*/),
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.DiscreteTrackChangeState`1", "Disable()");

    if (__this->mixHandle == NULL)
        return;

    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), __types[0]));
    __this->mixHandle = NULL;
}

// public DiscreteTrackChangeState New(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) :568
void DiscreteTrackChangeState__New1_fn(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p, DiscreteTrackChangeState** __retval)
{
    *__retval = DiscreteTrackChangeState::New1(__type, animator, p);
}

// protected override sealed void SeekObjectValue(object value, float strength) :584
void DiscreteTrackChangeState__SeekObjectValue_fn(DiscreteTrackChangeState* __this, uObject* value, float* strength)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Fuse.Animations.IMixerHandle<T>*/),
    };
    uStackFrame __("Fuse.Animations.DiscreteTrackChangeState`1", "SeekObjectValue(object,float)");
    float strength_ = *strength;

    if (__this->mixHandle == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[5/*"Invalid Seek"*/], 1, ::STRINGS[2/*"/usr/local/...*/], 588);
        return;
    }

    if ((value != NULL) && uIs(value, __types[0]))
        ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), __types[1]), uUnboxAny(__types[0], value), uCRef(strength_));
}

// public DiscreteTrackChangeState(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) [instance] :568
void DiscreteTrackChangeState::ctor_2(::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.IMixer.Register<T>*/),
        __type->T(0),
    };
    uStackFrame __("Fuse.Animations.DiscreteTrackChangeState`1", ".ctor(Fuse.Animations.Change<T>,Fuse.Animations.CreateStateParams)");
    ctor_1(animator, p, NULL);
    Animator1 = animator;
    mixHandle = ((uObject*)::g::Fuse::Animations::IMixer::Register(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[19/*Fuse.Animations.IMixer*/]), __types[0], (::g::Uno::UX::Property1*)uPtr(Animator1)->Target(), uPtr(Animator1)->MixOp()));
}

// public DiscreteTrackChangeState New(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) [static] :568
DiscreteTrackChangeState* DiscreteTrackChangeState::New1(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState* obj1 = (DiscreteTrackChangeState*)uNew(__type);
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal abstract interface DiscreteTrackProvider :2926
// {
uInterfaceType* DiscreteTrackProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.DiscreteTrackProvider", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.31.5/$.uno
// ---------------------------------------------------

// public enum Easing :1184
uEnumType* Easing_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.Easing", ::g::Uno::Int_typeof(), 31);
    type->SetLiterals(
        "Linear", 0LL,
        "QuadraticIn", 1LL,
        "QuadraticOut", 2LL,
        "QuadraticInOut", 3LL,
        "CubicIn", 4LL,
        "CubicOut", 5LL,
        "CubicInOut", 6LL,
        "QuarticIn", 7LL,
        "QuarticOut", 8LL,
        "QuarticInOut", 9LL,
        "QuinticIn", 10LL,
        "QuinticOut", 11LL,
        "QuinticInOut", 12LL,
        "SinusoidalIn", 13LL,
        "SinusoidalOut", 14LL,
        "SinusoidalInOut", 15LL,
        "ExponentialIn", 16LL,
        "ExponentialOut", 17LL,
        "ExponentialInOut", 18LL,
        "CircularIn", 19LL,
        "CircularOut", 20LL,
        "CircularInOut", 21LL,
        "ElasticIn", 22LL,
        "ElasticOut", 23LL,
        "ElasticInOut", 24LL,
        "BackIn", 25LL,
        "BackOut", 26LL,
        "BackInOut", 27LL,
        "BounceIn", 28LL,
        "BounceOut", 29LL,
        "BounceInOut", 30LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.31.5/$.uno
// ---------------------------------------------------

// public delegate float EasingFunction(float k) :1176
uDelegateType* EasingFunction_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Animations.EasingFunction", 1, 0);
    type->SetSignature(::g::Uno::Float_typeof(),
        ::g::Uno::Float_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.31.5/$.uno
// ---------------------------------------------------

// public static class EasingFunctions :1229
// {
static void EasingFunctions_build(uType* type)
{
    ::TYPES[29] = ::g::Fuse::Animations::EasingFunction_typeof();
    type->Reflection.SetFunctions(32,
        new uFunction("BackIn", NULL, (void*)EasingFunctions__BackIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("BackInOut", NULL, (void*)EasingFunctions__BackInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("BackOut", NULL, (void*)EasingFunctions__BackOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("BounceIn", NULL, (void*)EasingFunctions__BounceIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("BounceInOut", NULL, (void*)EasingFunctions__BounceInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("BounceOut", NULL, (void*)EasingFunctions__BounceOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("CircularIn", NULL, (void*)EasingFunctions__CircularIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("CircularInOut", NULL, (void*)EasingFunctions__CircularInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("CircularOut", NULL, (void*)EasingFunctions__CircularOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("CubicIn", NULL, (void*)EasingFunctions__CubicIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("CubicInOut", NULL, (void*)EasingFunctions__CubicInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("CubicOut", NULL, (void*)EasingFunctions__CubicOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ElasticIn", NULL, (void*)EasingFunctions__ElasticIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ElasticInOut", NULL, (void*)EasingFunctions__ElasticInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ElasticOut", NULL, (void*)EasingFunctions__ElasticOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ExponentialIn", NULL, (void*)EasingFunctions__ExponentialIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ExponentialInOut", NULL, (void*)EasingFunctions__ExponentialInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ExponentialOut", NULL, (void*)EasingFunctions__ExponentialOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("FromEasing", NULL, (void*)EasingFunctions__FromEasing_fn, 0, true, ::g::Fuse::Animations::EasingFunction_typeof(), 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction("Linear", NULL, (void*)EasingFunctions__Linear_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuadraticIn", NULL, (void*)EasingFunctions__QuadraticIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuadraticInOut", NULL, (void*)EasingFunctions__QuadraticInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuadraticOut", NULL, (void*)EasingFunctions__QuadraticOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuarticIn", NULL, (void*)EasingFunctions__QuarticIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuarticInOut", NULL, (void*)EasingFunctions__QuarticInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuarticOut", NULL, (void*)EasingFunctions__QuarticOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuinticIn", NULL, (void*)EasingFunctions__QuinticIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuinticInOut", NULL, (void*)EasingFunctions__QuinticInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuinticOut", NULL, (void*)EasingFunctions__QuinticOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("SinusoidalIn", NULL, (void*)EasingFunctions__SinusoidalIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("SinusoidalInOut", NULL, (void*)EasingFunctions__SinusoidalInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("SinusoidalOut", NULL, (void*)EasingFunctions__SinusoidalOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()));
}

uClassType* EasingFunctions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Animations.EasingFunctions", options);
    type->fp_build_ = EasingFunctions_build;
    return type;
}

// public static float BackIn(float k) :1466
void EasingFunctions__BackIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BackIn(*k);
}

// public static float BackInOut(float k) :1479
void EasingFunctions__BackInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BackInOut(*k);
}

// public static float BackOut(float k) :1472
void EasingFunctions__BackOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BackOut(*k);
}

// public static float BounceIn(float k) :1491
void EasingFunctions__BounceIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BounceIn(*k);
}

// public static float BounceInOut(float k) :1519
void EasingFunctions__BounceInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BounceInOut(*k);
}

// public static float BounceOut(float k) :1496
void EasingFunctions__BounceOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BounceOut(*k);
}

// public static float CircularIn(float k) :1410
void EasingFunctions__CircularIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CircularIn(*k);
}

// public static float CircularInOut(float k) :1421
void EasingFunctions__CircularInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CircularInOut(*k);
}

// public static float CircularOut(float k) :1415
void EasingFunctions__CircularOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CircularOut(*k);
}

// public static float CubicIn(float k) :1308
void EasingFunctions__CubicIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CubicIn(*k);
}

// public static float CubicInOut(float k) :1319
void EasingFunctions__CubicInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CubicInOut(*k);
}

// public static float CubicOut(float k) :1313
void EasingFunctions__CubicOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CubicOut(*k);
}

// public static float ElasticIn(float k) :1430
void EasingFunctions__ElasticIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ElasticIn(*k);
}

// public static float ElasticInOut(float k) :1452
void EasingFunctions__ElasticInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ElasticInOut(*k);
}

// public static float ElasticOut(float k) :1441
void EasingFunctions__ElasticOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ElasticOut(*k);
}

// public static float ExponentialIn(float k) :1385
void EasingFunctions__ExponentialIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ExponentialIn(*k);
}

// public static float ExponentialInOut(float k) :1395
void EasingFunctions__ExponentialInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ExponentialInOut(*k);
}

// public static float ExponentialOut(float k) :1390
void EasingFunctions__ExponentialOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ExponentialOut(*k);
}

// public static Fuse.Animations.EasingFunction FromEasing(Fuse.Animations.Easing e) :1231
void EasingFunctions__FromEasing_fn(int* e, uDelegate** __retval)
{
    *__retval = EasingFunctions::FromEasing(*e);
}

// public static float Linear(float k) :1281
void EasingFunctions__Linear_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::Linear(*k);
}

// public static float QuadraticIn(float k) :1286
void EasingFunctions__QuadraticIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuadraticIn(*k);
}

// public static float QuadraticInOut(float k) :1296
void EasingFunctions__QuadraticInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuadraticInOut(*k);
}

// public static float QuadraticOut(float k) :1291
void EasingFunctions__QuadraticOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuadraticOut(*k);
}

// public static float QuarticIn(float k) :1329
void EasingFunctions__QuarticIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuarticIn(*k);
}

// public static float QuarticInOut(float k) :1340
void EasingFunctions__QuarticInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuarticInOut(*k);
}

// public static float QuarticOut(float k) :1334
void EasingFunctions__QuarticOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuarticOut(*k);
}

// public static float QuinticIn(float k) :1349
void EasingFunctions__QuinticIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuinticIn(*k);
}

// public static float QuinticInOut(float k) :1360
void EasingFunctions__QuinticInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuinticInOut(*k);
}

// public static float QuinticOut(float k) :1354
void EasingFunctions__QuinticOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuinticOut(*k);
}

// public static float SinusoidalIn(float k) :1370
void EasingFunctions__SinusoidalIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::SinusoidalIn(*k);
}

// public static float SinusoidalInOut(float k) :1380
void EasingFunctions__SinusoidalInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::SinusoidalInOut(*k);
}

// public static float SinusoidalOut(float k) :1375
void EasingFunctions__SinusoidalOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::SinusoidalOut(*k);
}

// public static float BackIn(float k) [static] :1466
float EasingFunctions::BackIn(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "BackIn(float)");
    float s = 1.70158f;
    return (k * k) * (((s + 1.0f) * k) - s);
}

// public static float BackInOut(float k) [static] :1479
float EasingFunctions::BackInOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "BackInOut(float)");
    float s = 2.59490943f;
    k = k * 2.0f;

    if (k < 1.0f)
        return 0.5f * ((k * k) * (((s + 1.0f) * k) - s));

    k = k - 2.0f;
    return 0.5f * (((k * k) * (((s + 1.0f) * k) + s)) + 2.0f);
}

// public static float BackOut(float k) [static] :1472
float EasingFunctions::BackOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "BackOut(float)");
    float s = 1.70158f;
    k = k - 1.0f;
    return ((k * k) * (((s + 1.0f) * k) + s)) + 1.0f;
}

// public static float BounceIn(float k) [static] :1491
float EasingFunctions::BounceIn(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "BounceIn(float)");
    return 1.0f - EasingFunctions::BounceOut(1.0f - k);
}

// public static float BounceInOut(float k) [static] :1519
float EasingFunctions::BounceInOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "BounceInOut(float)");

    if (k < 0.5f)
        return EasingFunctions::BounceIn(k * 2.0f) * 0.5f;

    return (EasingFunctions::BounceOut((k * 2.0f) - 1.0f) * 0.5f) + 0.5f;
}

// public static float BounceOut(float k) [static] :1496
float EasingFunctions::BounceOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "BounceOut(float)");

    if (k < 0.363636374f)
        return (7.5625f * k) * k;
    else if (k < 0.727272749f)
    {
        k = k - 0.545454562f;
        return ((7.5625f * k) * k) + 0.75f;
    }
    else if (k < 0.909090936f)
    {
        k = k - 0.8181818f;
        return ((7.562f * k) * k) + 0.9375f;
    }
    else
    {
        k = k - 0.954545438f;
        return ((7.5625f * k) * k) + 0.984375f;
    }
}

// public static float CircularIn(float k) [static] :1410
float EasingFunctions::CircularIn(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "CircularIn(float)");
    return 1.0f - ::g::Uno::Math::Sqrt1(1.0f - (k * k));
}

// public static float CircularInOut(float k) [static] :1421
float EasingFunctions::CircularInOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "CircularInOut(float)");
    k = k * 2.0f;

    if (k < 1.0f)
        return -0.5f * (::g::Uno::Math::Sqrt1(1.0f - (k * k)) - 1.0f);

    k = k - 2.0f;
    return 0.5f * (::g::Uno::Math::Sqrt1(1.0f - (k * k)) + 1.0f);
}

// public static float CircularOut(float k) [static] :1415
float EasingFunctions::CircularOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "CircularOut(float)");
    k = k - 1.0f;
    return ::g::Uno::Math::Sqrt1(1.0f - (k * k));
}

// public static float CubicIn(float k) [static] :1308
float EasingFunctions::CubicIn(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "CubicIn(float)");
    return (k * k) * k;
}

// public static float CubicInOut(float k) [static] :1319
float EasingFunctions::CubicInOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "CubicInOut(float)");
    k = k * 2.0f;

    if (k < 1.0f)
        return ((0.5f * k) * k) * k;

    k = k - 2.0f;
    return 0.5f * (((k * k) * k) + 2.0f);
}

// public static float CubicOut(float k) [static] :1313
float EasingFunctions::CubicOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "CubicOut(float)");
    k = k - 1.0f;
    return ((k * k) * k) + 1.0f;
}

// public static float ElasticIn(float k) [static] :1430
float EasingFunctions::ElasticIn(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "ElasticIn(float)");

    if (k == 0.0f)
        return 0.0f;

    if (k == 1.0f)
        return 1.0f;

    k = k - 1.0f;
    return -::g::Uno::Math::Pow1(2.0f, 10.0f * k) * ::g::Uno::Math::Sin1(((k - 0.1f) * 6.28318548f) * 2.5f);
}

// public static float ElasticInOut(float k) [static] :1452
float EasingFunctions::ElasticInOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "ElasticInOut(float)");

    if (k == 0.0f)
        return 0.0f;

    if (k == 1.0f)
        return 1.0f;

    k = (k * 2.0f) - 1.0f;

    if (k < 0.0f)
        return (-0.5f * ::g::Uno::Math::Pow1(2.0f, 10.0f * k)) * ::g::Uno::Math::Sin1(((k - 0.1f) * 6.28318548f) * 2.5f);

    return ((::g::Uno::Math::Pow1(2.0f, -10.0f * k) * ::g::Uno::Math::Sin1(((k - 0.1f) * 6.28318548f) * 2.5f)) * 0.5f) + 1.0f;
}

// public static float ElasticOut(float k) [static] :1441
float EasingFunctions::ElasticOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "ElasticOut(float)");

    if (k == 0.0f)
        return 0.0f;

    if (k == 1.0f)
        return 1.0f;

    return (::g::Uno::Math::Pow1(2.0f, -10.0f * k) * ::g::Uno::Math::Sin1(((k - 0.1f) * 6.28318548f) * 2.5f)) + 1.0f;
}

// public static float ExponentialIn(float k) [static] :1385
float EasingFunctions::ExponentialIn(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "ExponentialIn(float)");
    return (k == 0.0f) ? 0.0f : ::g::Uno::Math::Pow1(1024.0f, k - 1.0f);
}

// public static float ExponentialInOut(float k) [static] :1395
float EasingFunctions::ExponentialInOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "ExponentialInOut(float)");

    if (k == 0.0f)
        return 0.0f;

    if (k == 1.0f)
        return 1.0f;

    k = k * 2.0f;

    if (k < 1.0f)
        return 0.5f * ::g::Uno::Math::Pow1(1024.0f, k - 1.0f);

    return 0.5f * (-::g::Uno::Math::Pow1(2.0f, -10.0f * (k - 1.0f)) + 2.0f);
}

// public static float ExponentialOut(float k) [static] :1390
float EasingFunctions::ExponentialOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "ExponentialOut(float)");
    return (k == 1.0f) ? 1.0f : 1.0f - ::g::Uno::Math::Pow1(2.0f, -10.0f * k);
}

// public static Fuse.Animations.EasingFunction FromEasing(Fuse.Animations.Easing e) [static] :1231
uDelegate* EasingFunctions::FromEasing(int e)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "FromEasing(Fuse.Animations.Easing)");

    switch (e)
    {
        case 0:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__Linear_fn);
        case 1:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuadraticIn_fn);
        case 2:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuadraticOut_fn);
        case 3:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuadraticInOut_fn);
        case 4:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CubicIn_fn);
        case 5:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CubicOut_fn);
        case 6:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CubicInOut_fn);
        case 7:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuarticIn_fn);
        case 8:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuarticOut_fn);
        case 9:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuarticInOut_fn);
        case 10:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuinticIn_fn);
        case 11:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuinticOut_fn);
        case 12:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuinticInOut_fn);
        case 13:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__SinusoidalIn_fn);
        case 14:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__SinusoidalOut_fn);
        case 15:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__SinusoidalInOut_fn);
        case 16:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ExponentialIn_fn);
        case 17:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ExponentialOut_fn);
        case 18:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ExponentialInOut_fn);
        case 19:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CircularIn_fn);
        case 20:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CircularOut_fn);
        case 21:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CircularInOut_fn);
        case 22:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ElasticIn_fn);
        case 23:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ElasticOut_fn);
        case 24:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ElasticInOut_fn);
        case 25:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BackIn_fn);
        case 26:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BackOut_fn);
        case 27:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BackInOut_fn);
        case 28:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BounceIn_fn);
        case 29:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BounceOut_fn);
        case 30:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BounceInOut_fn);
        default:
            return uDelegate::New(::TYPES[29/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__Linear_fn);
    }
}

// public static float Linear(float k) [static] :1281
float EasingFunctions::Linear(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "Linear(float)");
    return k;
}

// public static float QuadraticIn(float k) [static] :1286
float EasingFunctions::QuadraticIn(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "QuadraticIn(float)");
    return k * k;
}

// public static float QuadraticInOut(float k) [static] :1296
float EasingFunctions::QuadraticInOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "QuadraticInOut(float)");
    k = k * 2.0f;

    if (k < 1.0f)
        return (0.5f * k) * k;

    k = k - 1.0f;
    return -0.5f * ((k * (k - 2.0f)) - 1.0f);
}

// public static float QuadraticOut(float k) [static] :1291
float EasingFunctions::QuadraticOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "QuadraticOut(float)");
    return k * (2.0f - k);
}

// public static float QuarticIn(float k) [static] :1329
float EasingFunctions::QuarticIn(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "QuarticIn(float)");
    return ((k * k) * k) * k;
}

// public static float QuarticInOut(float k) [static] :1340
float EasingFunctions::QuarticInOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "QuarticInOut(float)");
    k = k * 2.0f;

    if (k < 1.0f)
        return (((0.5f * k) * k) * k) * k;

    k = k - 2.0f;
    return -0.5f * ((((k * k) * k) * k) - 2.0f);
}

// public static float QuarticOut(float k) [static] :1334
float EasingFunctions::QuarticOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "QuarticOut(float)");
    k = k - 1.0f;
    return 1.0f - (((k * k) * k) * k);
}

// public static float QuinticIn(float k) [static] :1349
float EasingFunctions::QuinticIn(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "QuinticIn(float)");
    return (((k * k) * k) * k) * k;
}

// public static float QuinticInOut(float k) [static] :1360
float EasingFunctions::QuinticInOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "QuinticInOut(float)");
    k = k * 2.0f;

    if (k < 1.0f)
        return ((((0.5f * k) * k) * k) * k) * k;

    k = k - 2.0f;
    return 0.5f * (((((k * k) * k) * k) * k) + 2.0f);
}

// public static float QuinticOut(float k) [static] :1354
float EasingFunctions::QuinticOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "QuinticOut(float)");
    k = k - 1.0f;
    return ((((k * k) * k) * k) * k) + 1.0f;
}

// public static float SinusoidalIn(float k) [static] :1370
float EasingFunctions::SinusoidalIn(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "SinusoidalIn(float)");
    return 1.0f - ::g::Uno::Math::Cos1((k * 3.14159274f) / 2.0f);
}

// public static float SinusoidalInOut(float k) [static] :1380
float EasingFunctions::SinusoidalInOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "SinusoidalInOut(float)");
    return 0.5f * (1.0f - ::g::Uno::Math::Cos1(3.14159274f * k));
}

// public static float SinusoidalOut(float k) [static] :1375
float EasingFunctions::SinusoidalOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "SinusoidalOut(float)");
    return ::g::Uno::Math::Sin1((k * 3.14159274f) / 2.0f);
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class EasingTrack :1137
// {
// static EasingTrack() :1137
static void EasingTrack__cctor__fn(uType* __type)
{
    EasingTrack::Singleton_ = EasingTrack::New1();
}

static void EasingTrack_build(uType* type)
{
    ::TYPES[26] = ::g::Fuse::Animations::SeekResult_typeof();
    ::TYPES[8] = ::g::Uno::Int_typeof();
    ::TYPES[30] = ::g::Fuse::Animations::ContinuousTrackProvider_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::ContinuousTrackProvider_typeof(), offsetof(EasingTrack_type, interface0),
        ::g::Fuse::Animations::ITrackProvider_typeof(), offsetof(EasingTrack_type, interface1),
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(EasingTrack_type, interface2));
    type->SetFields(0,
        EasingTrack_typeof(), (uintptr_t)&::g::Fuse::Animations::EasingTrack::Singleton_, uFieldFlagsStatic);
}

EasingTrack_type* EasingTrack_typeof()
{
    static uSStrong<EasingTrack_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(EasingTrack);
    options.TypeSize = sizeof(EasingTrack_type);
    type = (EasingTrack_type*)uClassType::New("Fuse.Animations.EasingTrack", options);
    type->fp_build_ = EasingTrack_build;
    type->fp_ctor_ = (void*)EasingTrack__New1_fn;
    type->fp_cctor_ = EasingTrack__cctor__fn;
    type->interface2.fp_GetDuration = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*, double*))EasingTrack__FuseAnimationsTrackProviderGetDuration_fn;
    type->interface2.fp_GetAnimatorVariant = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*))EasingTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn;
    type->interface0.fp_GetSeekProgress = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, ::g::Uno::Float4*, double*, int*))EasingTrack__FuseAnimationsContinuousTrackProviderGetSeekProgress_fn;
    type->interface0.fp_GetSeekTime = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, ::g::Uno::Float4*, double*, int*))EasingTrack__FuseAnimationsContinuousTrackProviderGetSeekTime_fn;
    return type;
}

// public generated EasingTrack() :1137
void EasingTrack__ctor__fn(EasingTrack* __this)
{
    __this->ctor_();
}

// private Fuse.Animations.SeekResult Fuse.Animations.ContinuousTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState tas, double progress, double interval, Fuse.Animations.SeekDirection dir, float4& value, double& strength) :1152
void EasingTrack__FuseAnimationsContinuousTrackProviderGetSeekProgress_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int* dir, ::g::Uno::Float4* value, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.EasingTrack", "Fuse.Animations.ContinuousTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState,double,double,Fuse.Animations.SeekDirection,float4&,double&)");
    double progress_ = *progress;
    float ret2;
    int dir_ = *dir;
    progress_ = ::g::Uno::Math::Clamp(progress_, 0.0, 1.0);
    float ease = (uPtr(::g::Fuse::Animations::EasingFunctions::FromEasing(uPtr(tas)->Easing()))->Invoke(&ret2, 1, uCRef((float)progress_)), ret2);
    *strength = (double)ease;
    *value = uPtr(tas->Animator)->_vectorValue;
    return *__retval = (((dir_ == 0) ? progress_ >= 1.0 : progress_ <= 0.0) ? 1 : 0) | 2, void();
}

// private Fuse.Animations.SeekResult Fuse.Animations.ContinuousTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState tas, double elapsed, double interval, Fuse.Animations.SeekDirection dir, float4& value, double& strength) :1166
void EasingTrack__FuseAnimationsContinuousTrackProviderGetSeekTime_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int* dir, ::g::Uno::Float4* value, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.EasingTrack", "Fuse.Animations.ContinuousTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState,double,double,Fuse.Animations.SeekDirection,float4&,double&)");
    int dir_ = *dir;
    double elapsed_ = *elapsed;
    double interval_ = *interval;
    double duration = uPtr(tas)->Duration();
    float progress;

    if (duration < 9.9999997473787516e-06)
        progress = (float)(((dir_ == 0) ? elapsed_ >= -9.9999997473787516e-06 : elapsed_ > 9.9999997473787516e-06) ? 1 : 0);
    else
        progress = (float)(elapsed_ / duration);

    return *__retval = ::g::Fuse::Animations::ContinuousTrackProvider::GetSeekProgress(uInterface(uPtr(uAs<uObject*>(__this, ::TYPES[30/*Fuse.Animations.ContinuousTrackProvider*/])), ::TYPES[30/*Fuse.Animations.ContinuousTrackProvider*/]), tas, (double)progress, interval_, dir_, value, strength), void();
}

// private Fuse.Animations.AnimatorVariant Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator ta) :1147
void EasingTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* __retval)
{
    uStackFrame __("Fuse.Animations.EasingTrack", "Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator)");
    return *__retval = uPtr(ta)->HasBack() ? 2 : 0, void();
}

// private double Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator ta, Fuse.Animations.AnimationVariant variant) :1142
void EasingTrack__FuseAnimationsTrackProviderGetDuration_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* variant, double* __retval)
{
    uStackFrame __("Fuse.Animations.EasingTrack", "Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator,Fuse.Animations.AnimationVariant)");
    int variant_ = *variant;
    return *__retval = ((variant_ == 1) && uPtr(ta)->HasBack()) ? uPtr(ta)->DurationBack() : uPtr(ta)->Duration(), void();
}

// public generated EasingTrack New() :1137
void EasingTrack__New1_fn(EasingTrack** __retval)
{
    *__retval = EasingTrack::New1();
}

uSStrong<EasingTrack*> EasingTrack::Singleton_;

// public generated EasingTrack() [instance] :1137
void EasingTrack::ctor_()
{
}

// public generated EasingTrack New() [static] :1137
EasingTrack* EasingTrack::New1()
{
    EasingTrack* obj1 = (EasingTrack*)uNew(EasingTrack_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class FastMatrixTransform :1673
// {
static void FastMatrixTransform_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Transform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Transform_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Transform_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Transform_type, interface3));
    type->SetFields(16,
        ::g::Fuse::FastMatrix_typeof(), offsetof(::g::Fuse::Animations::FastMatrixTransform, Matrix), 0);
}

::g::Fuse::Transform_type* FastMatrixTransform_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(FastMatrixTransform);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Animations.FastMatrixTransform", options);
    type->SetBase(::g::Fuse::Transform_typeof());
    type->fp_build_ = FastMatrixTransform_build;
    type->fp_ctor_ = (void*)FastMatrixTransform__New2_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))FastMatrixTransform__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))FastMatrixTransform__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))FastMatrixTransform__PrependTo_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated FastMatrixTransform() :1673
void FastMatrixTransform__ctor_3_fn(FastMatrixTransform* __this)
{
    __this->ctor_3();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :1677
void FastMatrixTransform__AppendTo_fn(FastMatrixTransform* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    uStackFrame __("Fuse.Animations.FastMatrixTransform", "AppendTo(Fuse.FastMatrix,float)");
    uPtr(m)->AppendFastMatrix(__this->Matrix);
}

// public void Changed() :1688
void FastMatrixTransform__Changed_fn(FastMatrixTransform* __this)
{
    __this->Changed();
}

// public override sealed bool get_IsFlat() :1695
void FastMatrixTransform__get_IsFlat_fn(FastMatrixTransform* __this, bool* __retval)
{
    uStackFrame __("Fuse.Animations.FastMatrixTransform", "get_IsFlat()");
    ::g::Uno::Float4x4 m = uPtr(__this->Matrix)->Matrix();
    bool q = (((((::g::Uno::Math::Abs1(m.M13) < 1e-05f) && (::g::Uno::Math::Abs1(m.M23) < 1e-05f)) && (::g::Uno::Math::Abs1(m.M43) < 1e-05f)) && (::g::Uno::Math::Abs1(m.M14) < 1e-05f)) && (::g::Uno::Math::Abs1(m.M24) < 1e-05f)) && (::g::Uno::Math::Abs1(m.M34) < 1e-05f);
    return *__retval = q, void();
}

// public generated FastMatrixTransform New() :1673
void FastMatrixTransform__New2_fn(FastMatrixTransform** __retval)
{
    *__retval = FastMatrixTransform::New2();
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :1683
void FastMatrixTransform__PrependTo_fn(FastMatrixTransform* __this, ::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Animations.FastMatrixTransform", "PrependTo(Fuse.FastMatrix)");
    uPtr(m)->PrependFastMatrix(__this->Matrix);
}

// public generated FastMatrixTransform() [instance] :1673
void FastMatrixTransform::ctor_3()
{
    uStackFrame __("Fuse.Animations.FastMatrixTransform", ".ctor()");
    Matrix = ::g::Fuse::FastMatrix::Identity();
    ctor_2();
}

// public void Changed() [instance] :1688
void FastMatrixTransform::Changed()
{
    uStackFrame __("Fuse.Animations.FastMatrixTransform", "Changed()");
    OnMatrixChanged();
}

// public generated FastMatrixTransform New() [static] :1673
FastMatrixTransform* FastMatrixTransform::New2()
{
    FastMatrixTransform* obj1 = (FastMatrixTransform*)uNew(FastMatrixTransform_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// protected struct MasterBase<T>.GFWResult :1559
// {
static void MasterBase__GFWResult_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::MasterBase__GFWResult, Rest), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::MasterBase__GFWResult, Full), 0);
}

uStructType* MasterBase__GFWResult_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ValueSize = sizeof(MasterBase__GFWResult);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Animations.MasterBase`1.GFWResult", options);
    type->fp_build_ = MasterBase__GFWResult_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public abstract interface IMixer :1403
// {
uInterfaceType* IMixer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IMixer", 0, 1);
    type->Reflection.SetFunctions(2,
        new uFunction("Register`1", type, NULL, offsetof(IMixer, fp_Register), false, ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->U(0)), 2, ::g::Uno::UX::Property1_typeof()->MakeType(type->U(0)), ::g::Fuse::Animations::MixOp_typeof()),
        new uFunction("RegisterTransform", NULL, NULL, offsetof(IMixer, fp_RegisterTransform), false, ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof()), 3, ::g::Fuse::Visual_typeof(), ::g::Fuse::Animations::MixOp_typeof(), ::g::Uno::Int_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public abstract interface IMixerHandle<T> :1409
// {
uInterfaceType* IMixerHandle_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IMixerHandle`1", 1, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_RestValue", NULL, NULL, offsetof(IMixerHandle, fp_get_RestValue), false, type->T(0), 0),
        new uFunction("Set", NULL, NULL, offsetof(IMixerHandle, fp_Set), false, uVoid_typeof(), 2, type->T(0), ::g::Uno::Float_typeof()),
        new uFunction("Unregister", NULL, NULL, offsetof(IMixerHandle, fp_Unregister), false, uVoid_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal abstract interface IMixerMaster :1424
// {
uInterfaceType* IMixerMaster_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IMixerMaster", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal abstract interface IPlayerFeedback :3813
// {
uInterfaceType* IPlayerFeedback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IPlayerFeedback", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public abstract interface IResize :2463
// {
uInterfaceType* IResize_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IResize", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("SetSize", NULL, NULL, offsetof(IResize, fp_SetSize), false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public abstract interface IResizeMode :2468
// {
uInterfaceType* IResizeMode_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IResizeMode", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("GetSizeChange", NULL, NULL, offsetof(IResizeMode, fp_GetSizeChange), false, ::g::Uno::Bool_typeof(), 4, ::g::Fuse::Visual_typeof(), ::g::Fuse::Visual_typeof(), ::g::Uno::Float2_typeof()->ByRef(), ::g::Uno::Float2_typeof()->ByRef()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public abstract interface ITrackProvider :2909
// {
uInterfaceType* ITrackProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.ITrackProvider", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public sealed class Keyframe :1195
// {
static void Keyframe_build(uType* type)
{
    ::TYPES[31] = ::g::Uno::Collections::ICollection_typeof()->MakeType(Keyframe_typeof());
    ::TYPES[27] = ::g::Uno::Collections::IList_typeof()->MakeType(Keyframe_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _hasTangentIn), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _hasTangentOut), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _hasTime), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _hasTimeDelta), 0,
        uObject_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _objectValue), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _tangentIn), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _tangentOut), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _time), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _timeDelta), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _value), 0);
    type->Reflection.SetFunctions(31,
        new uFunction("get_DegreesX", NULL, (void*)Keyframe__get_DegreesX_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesX", NULL, (void*)Keyframe__set_DegreesX_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesXY", NULL, (void*)Keyframe__get_DegreesXY_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_DegreesXY", NULL, (void*)Keyframe__set_DegreesXY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_DegreesY", NULL, (void*)Keyframe__get_DegreesY_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesY", NULL, (void*)Keyframe__set_DegreesY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesZ", NULL, (void*)Keyframe__get_DegreesZ_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesZ", NULL, (void*)Keyframe__set_DegreesZ_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Keyframe__New1_fn, 0, true, Keyframe_typeof(), 0),
        new uFunction("get_ObjectValue", NULL, (void*)Keyframe__get_ObjectValue_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_ObjectValue", NULL, (void*)Keyframe__set_ObjectValue_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("get_TangentIn", NULL, (void*)Keyframe__get_TangentIn_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_TangentIn", NULL, (void*)Keyframe__set_TangentIn_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_TangentOut", NULL, (void*)Keyframe__get_TangentOut_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_TangentOut", NULL, (void*)Keyframe__set_TangentOut_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_Time", NULL, (void*)Keyframe__get_Time_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Time", NULL, (void*)Keyframe__set_Time_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_TimeDelta", NULL, (void*)Keyframe__get_TimeDelta_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_TimeDelta", NULL, (void*)Keyframe__set_TimeDelta_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Value", NULL, (void*)Keyframe__get_Value_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)Keyframe__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_X", NULL, (void*)Keyframe__get_X_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_X", NULL, (void*)Keyframe__set_X_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_XY", NULL, (void*)Keyframe__get_XY_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_XY", NULL, (void*)Keyframe__set_XY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_XYZ", NULL, (void*)Keyframe__get_XYZ_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("set_XYZ", NULL, (void*)Keyframe__set_XYZ_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("get_Y", NULL, (void*)Keyframe__get_Y_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Y", NULL, (void*)Keyframe__set_Y_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Z", NULL, (void*)Keyframe__get_Z_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Z", NULL, (void*)Keyframe__set_Z_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

uType* Keyframe_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(Keyframe);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.Keyframe", options);
    type->fp_build_ = Keyframe_build;
    type->fp_ctor_ = (void*)Keyframe__New1_fn;
    return type;
}

// public generated Keyframe() :1195
void Keyframe__ctor__fn(Keyframe* __this)
{
    __this->ctor_();
}

// internal static double CompleteFrames(Uno.Collections.IList<Fuse.Animations.Keyframe> frames, float tension, float bias, float continuity) :1326
void Keyframe__CompleteFrames_fn(uObject* frames, float* tension, float* bias, float* continuity, double* __retval)
{
    *__retval = Keyframe::CompleteFrames(frames, *tension, *bias, *continuity);
}

// public float get_DegreesX() :1243
void Keyframe__get_DegreesX_fn(Keyframe* __this, float* __retval)
{
    *__retval = __this->DegreesX();
}

// public void set_DegreesX(float value) :1244
void Keyframe__set_DegreesX_fn(Keyframe* __this, float* value)
{
    __this->DegreesX(*value);
}

// public float2 get_DegreesXY() :1261
void Keyframe__get_DegreesXY_fn(Keyframe* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->DegreesXY();
}

// public void set_DegreesXY(float2 value) :1262
void Keyframe__set_DegreesXY_fn(Keyframe* __this, ::g::Uno::Float2* value)
{
    __this->DegreesXY(*value);
}

// public float get_DegreesY() :1249
void Keyframe__get_DegreesY_fn(Keyframe* __this, float* __retval)
{
    *__retval = __this->DegreesY();
}

// public void set_DegreesY(float value) :1250
void Keyframe__set_DegreesY_fn(Keyframe* __this, float* value)
{
    __this->DegreesY(*value);
}

// public float get_DegreesZ() :1255
void Keyframe__get_DegreesZ_fn(Keyframe* __this, float* __retval)
{
    *__retval = __this->DegreesZ();
}

// public void set_DegreesZ(float value) :1256
void Keyframe__set_DegreesZ_fn(Keyframe* __this, float* value)
{
    __this->DegreesZ(*value);
}

// private static void KochanekBartelTangent(float4 pa, float4 pb, float4 pc, float4 pd, float t, float b, float c, float4& tangentIn, float4& tangentOut) :1367
void Keyframe__KochanekBartelTangent_fn(::g::Uno::Float4* pa, ::g::Uno::Float4* pb, ::g::Uno::Float4* pc, ::g::Uno::Float4* pd, float* t, float* b, float* c, ::g::Uno::Float4* tangentIn, ::g::Uno::Float4* tangentOut)
{
    Keyframe::KochanekBartelTangent(*pa, *pb, *pc, *pd, *t, *b, *c, tangentIn, tangentOut);
}

// public generated Keyframe New() :1195
void Keyframe__New1_fn(Keyframe** __retval)
{
    *__retval = Keyframe::New1();
}

// public object get_ObjectValue() :1207
void Keyframe__get_ObjectValue_fn(Keyframe* __this, uObject** __retval)
{
    *__retval = __this->ObjectValue();
}

// public void set_ObjectValue(object value) :1208
void Keyframe__set_ObjectValue_fn(Keyframe* __this, uObject* value)
{
    __this->ObjectValue(value);
}

// public float4 get_TangentIn() :1294
void Keyframe__get_TangentIn_fn(Keyframe* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->TangentIn();
}

// public void set_TangentIn(float4 value) :1295
void Keyframe__set_TangentIn_fn(Keyframe* __this, ::g::Uno::Float4* value)
{
    __this->TangentIn(*value);
}

// public float4 get_TangentOut() :1304
void Keyframe__get_TangentOut_fn(Keyframe* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->TangentOut();
}

// public void set_TangentOut(float4 value) :1305
void Keyframe__set_TangentOut_fn(Keyframe* __this, ::g::Uno::Float4* value)
{
    __this->TangentOut(*value);
}

// public double get_Time() :1282
void Keyframe__get_Time_fn(Keyframe* __this, double* __retval)
{
    *__retval = __this->Time();
}

// public void set_Time(double value) :1283
void Keyframe__set_Time_fn(Keyframe* __this, double* value)
{
    __this->Time(*value);
}

// public double get_TimeDelta() :1270
void Keyframe__get_TimeDelta_fn(Keyframe* __this, double* __retval)
{
    *__retval = __this->TimeDelta();
}

// public void set_TimeDelta(double value) :1271
void Keyframe__set_TimeDelta_fn(Keyframe* __this, double* value)
{
    __this->TimeDelta(*value);
}

// public float4 get_Value() :1200
void Keyframe__get_Value_fn(Keyframe* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(float4 value) :1201
void Keyframe__set_Value_fn(Keyframe* __this, ::g::Uno::Float4* value)
{
    __this->Value(*value);
}

// public float get_X() :1213
void Keyframe__get_X_fn(Keyframe* __this, float* __retval)
{
    *__retval = __this->X();
}

// public void set_X(float value) :1214
void Keyframe__set_X_fn(Keyframe* __this, float* value)
{
    __this->X(*value);
}

// public float2 get_XY() :1231
void Keyframe__get_XY_fn(Keyframe* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->XY();
}

// public void set_XY(float2 value) :1232
void Keyframe__set_XY_fn(Keyframe* __this, ::g::Uno::Float2* value)
{
    __this->XY(*value);
}

// public float3 get_XYZ() :1237
void Keyframe__get_XYZ_fn(Keyframe* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->XYZ();
}

// public void set_XYZ(float3 value) :1238
void Keyframe__set_XYZ_fn(Keyframe* __this, ::g::Uno::Float3* value)
{
    __this->XYZ(*value);
}

// public float get_Y() :1219
void Keyframe__get_Y_fn(Keyframe* __this, float* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(float value) :1220
void Keyframe__set_Y_fn(Keyframe* __this, float* value)
{
    __this->Y(*value);
}

// public float get_Z() :1225
void Keyframe__get_Z_fn(Keyframe* __this, float* __retval)
{
    *__retval = __this->Z();
}

// public void set_Z(float value) :1226
void Keyframe__set_Z_fn(Keyframe* __this, float* value)
{
    __this->Z(*value);
}

// public generated Keyframe() [instance] :1195
void Keyframe::ctor_()
{
}

// public float get_DegreesX() [instance] :1243
float Keyframe::DegreesX()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_DegreesX()");
    return ::g::Uno::Math::RadiansToDegrees1(_value.X);
}

// public void set_DegreesX(float value) [instance] :1244
void Keyframe::DegreesX(float value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_DegreesX(float)");
    _value.X = ::g::Uno::Math::DegreesToRadians1(value);
}

// public float2 get_DegreesXY() [instance] :1261
::g::Uno::Float2 Keyframe::DegreesXY()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_DegreesXY()");
    return ::g::Uno::Float2__New2(::g::Uno::Math::RadiansToDegrees1(_value.X), ::g::Uno::Math::RadiansToDegrees1(_value.Y));
}

// public void set_DegreesXY(float2 value) [instance] :1262
void Keyframe::DegreesXY(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_DegreesXY(float2)");
    _value = ::g::Uno::Float4__New2(::g::Uno::Math::DegreesToRadians1(value.X), ::g::Uno::Math::DegreesToRadians1(value.Y), _value.Z, _value.W);
}

// public float get_DegreesY() [instance] :1249
float Keyframe::DegreesY()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_DegreesY()");
    return ::g::Uno::Math::RadiansToDegrees1(_value.Y);
}

// public void set_DegreesY(float value) [instance] :1250
void Keyframe::DegreesY(float value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_DegreesY(float)");
    _value.Y = ::g::Uno::Math::DegreesToRadians1(value);
}

// public float get_DegreesZ() [instance] :1255
float Keyframe::DegreesZ()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_DegreesZ()");
    return ::g::Uno::Math::RadiansToDegrees1(_value.Z);
}

// public void set_DegreesZ(float value) [instance] :1256
void Keyframe::DegreesZ(float value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_DegreesZ(float)");
    _value.Z = ::g::Uno::Math::DegreesToRadians1(value);
}

// public object get_ObjectValue() [instance] :1207
uObject* Keyframe::ObjectValue()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_ObjectValue()");
    return _objectValue;
}

// public void set_ObjectValue(object value) [instance] :1208
void Keyframe::ObjectValue(uObject* value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_ObjectValue(object)");
    _objectValue = value;
}

// public float4 get_TangentIn() [instance] :1294
::g::Uno::Float4 Keyframe::TangentIn()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_TangentIn()");
    return _tangentIn;
}

// public void set_TangentIn(float4 value) [instance] :1295
void Keyframe::TangentIn(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_TangentIn(float4)");
    _tangentIn = value;
    _hasTangentIn = true;
}

// public float4 get_TangentOut() [instance] :1304
::g::Uno::Float4 Keyframe::TangentOut()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_TangentOut()");
    return _tangentOut;
}

// public void set_TangentOut(float4 value) [instance] :1305
void Keyframe::TangentOut(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_TangentOut(float4)");
    _tangentOut = value;
    _hasTangentOut = true;
}

// public double get_Time() [instance] :1282
double Keyframe::Time()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_Time()");
    return _time;
}

// public void set_Time(double value) [instance] :1283
void Keyframe::Time(double value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_Time(double)");
    _time = value;
    _hasTime = true;
}

// public double get_TimeDelta() [instance] :1270
double Keyframe::TimeDelta()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_TimeDelta()");
    return _timeDelta;
}

// public void set_TimeDelta(double value) [instance] :1271
void Keyframe::TimeDelta(double value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_TimeDelta(double)");
    _timeDelta = value;
    _hasTimeDelta = true;
}

// public float4 get_Value() [instance] :1200
::g::Uno::Float4 Keyframe::Value()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_Value()");
    return _value;
}

// public void set_Value(float4 value) [instance] :1201
void Keyframe::Value(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_Value(float4)");
    _value = value;
}

// public float get_X() [instance] :1213
float Keyframe::X()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_X()");
    return _value.X;
}

// public void set_X(float value) [instance] :1214
void Keyframe::X(float value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_X(float)");
    _value.X = value;
}

// public float2 get_XY() [instance] :1231
::g::Uno::Float2 Keyframe::XY()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_XY()");
    ::g::Uno::Float4 ind1 = _value;
    return ::g::Uno::Float2__New2(ind1.X, ind1.Y);
}

// public void set_XY(float2 value) [instance] :1232
void Keyframe::XY(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_XY(float2)");
    _value = ::g::Uno::Float4__New6(value, _value.Z, _value.W);
}

// public float3 get_XYZ() [instance] :1237
::g::Uno::Float3 Keyframe::XYZ()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_XYZ()");
    ::g::Uno::Float4 ind2 = _value;
    return ::g::Uno::Float3__New2(ind2.X, ind2.Y, ind2.Z);
}

// public void set_XYZ(float3 value) [instance] :1238
void Keyframe::XYZ(::g::Uno::Float3 value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_XYZ(float3)");
    _value = ::g::Uno::Float4__New8(value, _value.W);
}

// public float get_Y() [instance] :1219
float Keyframe::Y()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_Y()");
    return _value.Y;
}

// public void set_Y(float value) [instance] :1220
void Keyframe::Y(float value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_Y(float)");
    _value.Y = value;
}

// public float get_Z() [instance] :1225
float Keyframe::Z()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_Z()");
    return _value.Z;
}

// public void set_Z(float value) [instance] :1226
void Keyframe::Z(float value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_Z(float)");
    _value.Z = value;
}

// internal static double CompleteFrames(Uno.Collections.IList<Fuse.Animations.Keyframe> frames, float tension, float bias, float continuity) [static] :1326
double Keyframe::CompleteFrames(uObject* frames, float tension, float bias, float continuity)
{
    uStackFrame __("Fuse.Animations.Keyframe", "CompleteFrames(Uno.Collections.IList<Fuse.Animations.Keyframe>,float,float,float)");
    Keyframe* ret4;
    Keyframe* ret5;
    Keyframe* ret6;
    Keyframe* ret7;
    double time = 0.0;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(frames), ::TYPES[31/*Uno.Collections.ICollection<Fuse.Animations.Keyframe>*/])); ++i)
    {
        Keyframe* prev = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(frames), ::TYPES[27/*Uno.Collections.IList<Fuse.Animations.Keyframe>*/]), uCRef<int>(::g::Uno::Math::Max8(0, i - 1)), &ret4), ret4);
        Keyframe* frame = (::g::Uno::Collections::IList::get_Item_ex(uInterface(frames, ::TYPES[27/*Uno.Collections.IList<Fuse.Animations.Keyframe>*/]), uCRef<int>(i), &ret5), ret5);
        Keyframe* next = (::g::Uno::Collections::IList::get_Item_ex(uInterface(frames, ::TYPES[27/*Uno.Collections.IList<Fuse.Animations.Keyframe>*/]), uCRef<int>(::g::Uno::Math::Min8(::g::Uno::Collections::ICollection::Count(uInterface(frames, ::TYPES[31/*Uno.Collections.ICollection<Fuse.Animations.Keyframe>*/])) - 1, i + 1)), &ret6), ret6);
        Keyframe* next2 = (::g::Uno::Collections::IList::get_Item_ex(uInterface(frames, ::TYPES[27/*Uno.Collections.IList<Fuse.Animations.Keyframe>*/]), uCRef<int>(::g::Uno::Math::Min8(::g::Uno::Collections::ICollection::Count(uInterface(frames, ::TYPES[31/*Uno.Collections.ICollection<Fuse.Animations.Keyframe>*/])) - 1, i + 2)), &ret7), ret7);

        if (uPtr(frame)->_hasTime)
        {
            uPtr(frame)->_timeDelta = (uPtr(frame)->_time - time);
            time = frame->_time;
        }
        else if (uPtr(frame)->_hasTimeDelta)
        {
            time = time + uPtr(frame)->_timeDelta;
            frame->_time = time;
        }
        else
        {
            uPtr(frame)->_time = time;
            frame->_timeDelta = 0.0;
        }

        ::g::Uno::Float4 ta;
        ::g::Uno::Float4 tb;
        Keyframe::KochanekBartelTangent(uPtr(prev)->Value(), uPtr(frame)->Value(), uPtr(next)->Value(), uPtr(next2)->Value(), tension, bias, continuity, &ta, &tb);

        if ((i > 0) && !frame->_hasTangentOut)
            uPtr(frame)->_tangentOut = ta;

        if (!next->_hasTangentIn)
            uPtr(next)->_tangentIn = tb;
    }

    return time;
}

// private static void KochanekBartelTangent(float4 pa, float4 pb, float4 pc, float4 pd, float t, float b, float c, float4& tangentIn, float4& tangentOut) [static] :1367
void Keyframe::KochanekBartelTangent(::g::Uno::Float4 pa, ::g::Uno::Float4 pb, ::g::Uno::Float4 pc, ::g::Uno::Float4 pd, float t, float b, float c, ::g::Uno::Float4* tangentIn, ::g::Uno::Float4* tangentOut)
{
    uStackFrame __("Fuse.Animations.Keyframe", "KochanekBartelTangent(float4,float4,float4,float4,float,float,float,float4&,float4&)");
    *tangentIn = ::g::Uno::Float4__op_Addition2(::g::Uno::Float4__op_Multiply((((1.0f - t) * (1.0f + b)) * (1.0f + c)) / 2.0f, ::g::Uno::Float4__op_Subtraction2(pb, pa)), ::g::Uno::Float4__op_Multiply((((1.0f - t) * (1.0f - b)) * (1.0f - c)) / 2.0f, ::g::Uno::Float4__op_Subtraction2(pc, pb)));
    *tangentOut = ::g::Uno::Float4__op_Addition2(::g::Uno::Float4__op_Multiply((((1.0f - t) * (1.0f + b)) * (1.0f - c)) / 2.0f, ::g::Uno::Float4__op_Subtraction2(pc, pb)), ::g::Uno::Float4__op_Multiply((((1.0f - t) * (1.0f - b)) * (1.0f + c)) / 2.0f, ::g::Uno::Float4__op_Subtraction2(pd, pc)));
}

// public generated Keyframe New() [static] :1195
Keyframe* Keyframe::New1()
{
    Keyframe* obj3 = (Keyframe*)uNew(Keyframe_typeof());
    obj3->ctor_();
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public enum KeyframeInterpolation :2704
uEnumType* KeyframeInterpolation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.KeyframeInterpolation", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Linear", 0LL,
        "CatmullRom", 1LL,
        "Smooth", 1LL,
        "Custom", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal abstract interface KeyframeTrack :2934
// {
uInterfaceType* KeyframeTrack_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.KeyframeTrack", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal abstract class MasterBase<T> :1476
// {
// ~MasterBase() :1484
static void MasterBase__Finalize_fn(MasterBase* __this)
{
}

static void MasterBase_build(uType* type)
{
    ::STRINGS[8] = uString::Const("Attempt to register in inactive Master");
    ::STRINGS[2] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno");
    ::STRINGS[9] = uString::Const("Register");
    ::TYPES[32] = ::g::Uno::Collections::List_typeof();
    ::TYPES[33] = ::g::Fuse::Animations::MixerHandle_typeof();
    ::TYPES[8] = ::g::Uno::Int_typeof();
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[6] = uObject_typeof();
    ::TYPES[34] = ::g::Fuse::Animations::IMixerMaster_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::MixerHandle_typeof()->MakeType(type->T(0))),
        ::g::Fuse::Animations::MixerHandle_typeof()->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(MasterBase_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MasterBase, _inactive), 0,
        ::g::Fuse::Animations::MixerBase_typeof(), offsetof(::g::Fuse::Animations::MasterBase, _mixerBase), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MasterBase, DirtyValue), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::MixerHandle_typeof()->MakeType(type->T(0))), offsetof(::g::Fuse::Animations::MasterBase, Handles), 0);
}

MasterBase_type* MasterBase_typeof()
{
    static uSStrong<MasterBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(MasterBase);
    options.TypeSize = sizeof(MasterBase_type);
    type = (MasterBase_type*)uClassType::New("Fuse.Animations.MasterBase`1", options);
    type->fp_build_ = MasterBase_build;
    type->fp_Finalize = (void(*)(uObject*))MasterBase__Finalize_fn;
    type->fp_OnActive = MasterBase__OnActive_fn;
    return type;
}

// protected MasterBase([Fuse.Animations.MixerBase mixerBase]) :1479
void MasterBase__ctor__fn(MasterBase* __this, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_(mixerBase);
}

// private void Complete() :1530
void MasterBase__Complete_fn(MasterBase* __this)
{
    __this->Complete();
}

// protected Fuse.Animations.MasterBase<T>.GFWResult GetFullWeight() :1565
void MasterBase__GetFullWeight_fn(MasterBase* __this, MasterBase__GFWResult* __retval)
{
    *__retval = __this->GetFullWeight();
}

// public void MarkDirty() :1544
void MasterBase__MarkDirty_fn(MasterBase* __this)
{
    __this->MarkDirty();
}

// protected virtual void OnActive() :1527
void MasterBase__OnActive_fn(MasterBase* __this)
{
}

// public void Register(Fuse.Animations.MixerHandle<T> handle) :1495
void MasterBase__Register_fn(MasterBase* __this, ::g::Fuse::Animations::MixerHandle* handle)
{
    __this->Register(handle);
}

// public void Unregister(Fuse.Animations.MixerHandle<T> handle) :1511
void MasterBase__Unregister_fn(MasterBase* __this, ::g::Fuse::Animations::MixerHandle* handle)
{
    __this->Unregister(handle);
}

// protected MasterBase([Fuse.Animations.MixerBase mixerBase]) [instance] :1479
void MasterBase::ctor_(::g::Fuse::Animations::MixerBase* mixerBase)
{
    uType* __types[] = {
        __type->GetBase(MasterBase_typeof())->Precalced(0/*Uno.Collections.List<Fuse.Animations.MixerHandle<T>>*/),
        __type->GetBase(MasterBase_typeof())->Precalced(1/*Fuse.Animations.MixerHandle<T>*/),
        __type->GetBase(MasterBase_typeof())->T(0),
    };
    uStackFrame __("Fuse.Animations.MasterBase`1", ".ctor([Fuse.Animations.MixerBase])");
    Handles = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));
    _mixerBase = mixerBase;
}

// private void Complete() [instance] :1530
void MasterBase::Complete()
{
    uStackFrame __("Fuse.Animations.MasterBase`1", "Complete()");

    if (!DirtyValue)
        return;

    DirtyValue = false;

    if (uPtr(Handles)->Count() == 0)
        return;

    OnComplete();
}

// protected Fuse.Animations.MasterBase<T>.GFWResult GetFullWeight() [instance] :1565
MasterBase__GFWResult MasterBase::GetFullWeight()
{
    uStackFrame __("Fuse.Animations.MasterBase`1", "GetFullWeight()");
    MasterBase__GFWResult collection1;
    ::g::Fuse::Animations::MixerHandle* ret1;
    float fullWeight = 0.0f;
    int c = uPtr(Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr(Handles), uCRef<int>(i), &ret1), ret1);

        if (uPtr(v)->MixOp() == 2)
            fullWeight = fullWeight + (uPtr(v)->HasValue() ? ::g::Uno::Math::Max1(0.0f, uPtr(v)->Strength) : 0.0f);
    }

    float restWeight = 1.0f - ::g::Uno::Math::Min1(fullWeight, 1.0f);
    fullWeight = ::g::Uno::Math::Max1(1.0f, fullWeight);
    collection1 = uDefault<MasterBase__GFWResult>();
    collection1.Rest = restWeight;
    collection1.Full = fullWeight;
    return collection1;
}

// public void MarkDirty() [instance] :1544
void MasterBase::MarkDirty()
{
    uStackFrame __("Fuse.Animations.MasterBase`1", "MarkDirty()");

    if (DirtyValue)
        return;

    DirtyValue = true;

    if (uPtr(Handles)->Count() < 2)
    {
        Complete();
        return;
    }

    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)MasterBase__Complete_fn, this), -1, 0);
}

// public void Register(Fuse.Animations.MixerHandle<T> handle) [instance] :1495
void MasterBase::Register(::g::Fuse::Animations::MixerHandle* handle)
{
    uStackFrame __("Fuse.Animations.MasterBase`1", "Register(Fuse.Animations.MixerHandle<T>)");
    ::g::Fuse::Animations::MixerHandle* ret2;

    if (_inactive)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[8/*"Attempt to ...*/], this, ::STRINGS[2/*"/usr/local/...*/], 1499, ::STRINGS[9/*"Register"*/]);
        return;
    }

    int at = 0;

    for (; (at < uPtr(Handles)->Count()) && (uPtr(handle)->Priority() <= uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Handles), uCRef<int>(at), &ret2), ret2))->Priority()); ++at)
        ;

    ::g::Uno::Collections::List__Insert_fn(uPtr(Handles), uCRef<int>(at), handle);

    if (uPtr(Handles)->Count() == 1)
        OnActive();
}

// public void Unregister(Fuse.Animations.MixerHandle<T> handle) [instance] :1511
void MasterBase::Unregister(::g::Fuse::Animations::MixerHandle* handle)
{
    uStackFrame __("Fuse.Animations.MasterBase`1", "Unregister(Fuse.Animations.MixerHandle<T>)");
    bool ret3;
    ::g::Uno::Collections::List__Remove_fn(uPtr(Handles), handle, &ret3);
    MarkDirty();

    if (uPtr(Handles)->Count() == 0)
    {
        _inactive = true;
        OnInactive();

        if (_mixerBase != NULL)
            uPtr(_mixerBase)->Unused((uObject*)this);
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal abstract class MasterProperty<T> :1592
// {
static void MasterProperty_build(uType* type)
{
    ::STRINGS[10] = uString::Const("The property ");
    ::STRINGS[11] = uString::Const(" of ");
    ::STRINGS[12] = uString::Const(" cannot be reliably animated because it does not provide an origin-setter. Animating this property may lead to visual glitches or inconsistencies.");
    ::STRINGS[2] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno");
    ::STRINGS[13] = uString::Const("GiveOriginSetterWarning");
    ::TYPES[6] = uObject_typeof();
    ::TYPES[4] = ::g::Uno::UX::IPropertyListener_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(MasterProperty_type, interface0),
        ::g::Fuse::Animations::MasterPropertyGet_typeof(), offsetof(MasterProperty_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(MasterProperty_type, interface2));
    type->SetFields(4,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MasterProperty, _hasSetValue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MasterProperty, _isListening), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MasterProperty, _warningGiven), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::MasterProperty, Property), 0);
}

MasterProperty_type* MasterProperty_typeof()
{
    static uSStrong<MasterProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(MasterProperty);
    options.TypeSize = sizeof(MasterProperty_type);
    type = (MasterProperty_type*)uClassType::New("Fuse.Animations.MasterProperty`1", options);
    type->SetBase(::g::Fuse::Animations::MasterBase_typeof()->MakeType(type->T(0)));
    type->fp_build_ = MasterProperty_build;
    type->fp_OnActive = (void(*)(::g::Fuse::Animations::MasterBase*))MasterProperty__OnActive_fn;
    type->fp_OnInactive = (void(*)(::g::Fuse::Animations::MasterBase*))MasterProperty__OnInactive_fn;
    type->fp_get_RestValue = (void(*)(::g::Fuse::Animations::MasterBase*, uTRef))MasterProperty__get_RestValue_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))MasterProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_GetPropertyObject = (void(*)(uObject*, uObject**))MasterProperty__GetPropertyObject_fn;
    return type;
}

// protected MasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :1597
void MasterProperty__ctor_1_fn(MasterProperty* __this, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_1(property, mixerBase);
}

// public object GetPropertyObject() :1595
void MasterProperty__GetPropertyObject_fn(MasterProperty* __this, uObject** __retval)
{
    *__retval = __this->GetPropertyObject();
}

// private void GiveOriginSetterWarning() :1651
void MasterProperty__GiveOriginSetterWarning_fn(MasterProperty* __this)
{
    __this->GiveOriginSetterWarning();
}

// protected override void OnActive() :1613
void MasterProperty__OnActive_fn(MasterProperty* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(MasterProperty_typeof())->T(0),
    };
    uStackFrame __("Fuse.Animations.MasterProperty`1", "OnActive()");
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (!__this->_isListening)
    {
        __this->_restValue() = (uPtr(__this->Property)->Get_ex(&ret1), ret1);
        uPtr(__this->Property)->AddListener((uObject*)__this);
        __this->_isListening = true;
    }
}

// protected override sealed void OnInactive() :1623
void MasterProperty__OnInactive_fn(MasterProperty* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(MasterProperty_typeof())->T(0),
    };
    uStackFrame __("Fuse.Animations.MasterProperty`1", "OnInactive()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__this->_isListening)
    {
        uPtr(__this->Property)->RemoveListener((uObject*)__this);
        uPtr(__this->Property)->Set_ex((__this->get_RestValue_ex(&ret2), ret2), (uObject*)__this);
        __this->_isListening = false;
    }
}

// public override sealed T get_RestValue() :1606
void MasterProperty__get_RestValue_fn(MasterProperty* __this, uTRef __retval)
{
    uStackFrame __("Fuse.Animations.MasterProperty`1", "get_RestValue()");
    return __retval.Store(__this->_restValue()), void();
}

// protected void Set(T value) :1663
void MasterProperty__Set_fn(MasterProperty* __this, void* value)
{
    uType* __types[] = {
        __this->__type->GetBase(MasterProperty_typeof())->T(0),
    };
    uStackFrame __("Fuse.Animations.MasterProperty`1", "Set(T)");

    if (!__this->_isListening)
        U_THROW(::g::Uno::Exception::New1());

    __this->_hasSetValue = true;
    __this->_lastSetValue() = value;
    uPtr(__this->Property)->Set_ex(value, (uObject*)__this);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector property) :1633
void MasterProperty__UnoUXIPropertyListenerOnPropertyChanged_fn(MasterProperty* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* property)
{
    uType* __types[] = {
        __this->__type->GetBase(MasterProperty_typeof())->T(0),
    };
    uStackFrame __("Fuse.Animations.MasterProperty`1", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT v(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Uno::UX::Selector property_ = *property;

    if (::g::Uno::UX::Selector__op_Inequality(uPtr(__this->Property)->Name(), property_))
        return;

    v = (uPtr(__this->Property)->Get_ex(&ret3), ret3);

    if (uPtr(__this->Property)->SupportsOriginSetter())
        __this->_restValue() = v;
    else if (!__this->_hasSetValue || !::g::Uno::Object::Equals(uBoxPtr(__types[0], uPtr(__this->_lastSetValue()), U_ALLOCA(__types[0]->ObjectSize)), uBoxPtr(__types[0], v)))
    {
        __this->GiveOriginSetterWarning();
        __this->_restValue() = v;
    }
}

// protected MasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [instance] :1597
void MasterProperty::ctor_1(::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    uStackFrame __("Fuse.Animations.MasterProperty`1", ".ctor(Uno.UX.Property<T>,Fuse.Animations.MixerBase)");
    ctor_(mixerBase);
    Property = property;
}

// public object GetPropertyObject() [instance] :1595
uObject* MasterProperty::GetPropertyObject()
{
    uStackFrame __("Fuse.Animations.MasterProperty`1", "GetPropertyObject()");
    return Property;
}

// private void GiveOriginSetterWarning() [instance] :1651
void MasterProperty::GiveOriginSetterWarning()
{
    uStackFrame __("Fuse.Animations.MasterProperty`1", "GiveOriginSetterWarning()");

    if (!_warningGiven)
    {
        _warningGiven = true;
        ::g::Fuse::Diagnostics::UserWarning(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[10/*"The property "*/], ::g::Uno::UX::Selector__op_Implicit1(uPtr(Property)->Name())), ::STRINGS[11/*" of "*/]), uPtr(Property)->Object()), ::STRINGS[12/*" cannot be ...*/]), this, ::STRINGS[2/*"/usr/local/...*/], 1656, ::STRINGS[13/*"GiveOriginS...*/]);
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal abstract interface MasterPropertyGet :1588
// {
uInterfaceType* MasterPropertyGet_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.MasterPropertyGet", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal abstract class MasterTransform :1709
// {
// static MasterTransform() :1709
static void MasterTransform__cctor__fn(uType* __type)
{
    MasterTransform::identity_ = ::g::Fuse::Translation::New2();
}

static void MasterTransform_build(uType* type)
{
    ::TYPES[35] = ::g::Fuse::Transform_typeof();
    ::TYPES[36] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[37] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterBase_type, interface0));
    type->SetFields(4,
        ::g::Fuse::Animations::FastMatrixTransform_typeof(), offsetof(::g::Fuse::Animations::MasterTransform, FMT), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::MasterTransform, Visual), 0,
        ::g::Fuse::Transform_typeof(), (uintptr_t)&::g::Fuse::Animations::MasterTransform::identity_, uFieldFlagsStatic);
}

::g::Fuse::Animations::MasterBase_type* MasterTransform_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MasterTransform);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterBase_type);
    type = (::g::Fuse::Animations::MasterBase_type*)uClassType::New("Fuse.Animations.MasterTransform", options);
    type->SetBase(::g::Fuse::Animations::MasterBase_typeof()->MakeType(::g::Fuse::Transform_typeof()));
    type->fp_build_ = MasterTransform_build;
    type->fp_cctor_ = MasterTransform__cctor__fn;
    type->fp_OnActive = (void(*)(::g::Fuse::Animations::MasterBase*))MasterTransform__OnActive_fn;
    type->fp_OnInactive = (void(*)(::g::Fuse::Animations::MasterBase*))MasterTransform__OnInactive_fn;
    type->fp_get_RestValue = (void(*)(::g::Fuse::Animations::MasterBase*, uTRef))MasterTransform__get_RestValue_fn;
    return type;
}

// protected MasterTransform(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) :1714
void MasterTransform__ctor_1_fn(MasterTransform* __this, ::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_1(node, mixerBase);
}

// protected override sealed void OnActive() :1721
void MasterTransform__OnActive_fn(MasterTransform* __this)
{
    uStackFrame __("Fuse.Animations.MasterTransform", "OnActive()");
    __this->FMT = ::g::Fuse::Animations::FastMatrixTransform::New2();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->Visual)->Children()), ::TYPES[36/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->FMT);
}

// protected override sealed void OnInactive() :1727
void MasterTransform__OnInactive_fn(MasterTransform* __this)
{
    uStackFrame __("Fuse.Animations.MasterTransform", "OnInactive()");
    bool ret1;
    ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(__this->Visual)->Children()), ::TYPES[36/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->FMT, &ret1);
    __this->FMT = NULL;
}

// public override sealed Fuse.Transform get_RestValue() :1736
void MasterTransform__get_RestValue_fn(MasterTransform* __this, ::g::Fuse::Transform** __retval)
{
    uStackFrame __("Fuse.Animations.MasterTransform", "get_RestValue()");
    return *__retval = MasterTransform::identity(), void();
}

uSStrong< ::g::Fuse::Transform*> MasterTransform::identity_;

// protected MasterTransform(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) [instance] :1714
void MasterTransform::ctor_1(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    uStackFrame __("Fuse.Animations.MasterTransform", ".ctor(Fuse.Visual,Fuse.Animations.MixerBase)");
    ctor_(mixerBase);
    Visual = node;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class Mixer :1416
// {
// static Mixer() :1416
static void Mixer__cctor__fn(uType* __type)
{
    Mixer::_default_ = (uObject*)::g::Fuse::Animations::AverageMixer::New1();
    Mixer::_defaultDiscrete_ = (uObject*)::g::Fuse::Animations::DiscreteMixer::New1();
}

static void Mixer_build(uType* type)
{
    ::TYPES[19] = ::g::Fuse::Animations::IMixer_typeof();
    type->SetFields(0,
        ::g::Fuse::Animations::IMixer_typeof(), (uintptr_t)&::g::Fuse::Animations::Mixer::_default_, uFieldFlagsStatic,
        ::g::Fuse::Animations::IMixer_typeof(), (uintptr_t)&::g::Fuse::Animations::Mixer::_defaultDiscrete_, uFieldFlagsStatic);
}

uType* Mixer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Mixer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.Mixer", options);
    type->fp_build_ = Mixer_build;
    type->fp_ctor_ = (void*)Mixer__New1_fn;
    type->fp_cctor_ = Mixer__cctor__fn;
    return type;
}

// public generated Mixer() :1416
void Mixer__ctor__fn(Mixer* __this)
{
    __this->ctor_();
}

// public static Fuse.Animations.IMixer get_Default() :1419
void Mixer__get_Default_fn(uObject** __retval)
{
    *__retval = Mixer::Default();
}

// public static Fuse.Animations.IMixer get_DefaultDiscrete() :1421
void Mixer__get_DefaultDiscrete_fn(uObject** __retval)
{
    *__retval = Mixer::DefaultDiscrete();
}

// public generated Mixer New() :1416
void Mixer__New1_fn(Mixer** __retval)
{
    *__retval = Mixer::New1();
}

uSStrong<uObject*> Mixer::_default_;
uSStrong<uObject*> Mixer::_defaultDiscrete_;

// public generated Mixer() [instance] :1416
void Mixer::ctor_()
{
}

// public generated Mixer New() [static] :1416
Mixer* Mixer::New1()
{
    Mixer* obj1 = (Mixer*)uNew(Mixer_typeof());
    obj1->ctor_();
    return obj1;
}

// public static Fuse.Animations.IMixer get_Default() [static] :1419
uObject* Mixer::Default()
{
    uStackFrame __("Fuse.Animations.Mixer", "get_Default()");
    Mixer_typeof()->Init();
    return Mixer::_default();
}

// public static Fuse.Animations.IMixer get_DefaultDiscrete() [static] :1421
uObject* Mixer::DefaultDiscrete()
{
    uStackFrame __("Fuse.Animations.Mixer", "get_DefaultDiscrete()");
    Mixer_typeof()->Init();
    return Mixer::_defaultDiscrete();
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal abstract class MixerBase :1426
// {
static void MixerBase_build(uType* type)
{
    ::TYPES[38] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), uObject_typeof());
    ::TYPES[6] = uObject_typeof();
    ::TYPES[39] = ::g::Fuse::Animations::MasterBase_typeof();
    ::TYPES[20] = ::g::Fuse::Animations::IMixerHandle_typeof();
    ::TYPES[33] = ::g::Fuse::Animations::MixerHandle_typeof();
    ::TYPES[12] = ::g::Fuse::Animations::MasterBase_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[40] = ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[41] = ::g::Fuse::Animations::MixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[42] = ::g::Fuse::Animations::MasterPropertyGet_typeof();
    ::TYPES[43] = ::g::Fuse::Animations::MasterTransform_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixer_typeof(), offsetof(MixerBase_type, interface0));
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(::g::Fuse::Animations::MixerBase, _propHandle), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), uObject_typeof()), offsetof(::g::Fuse::Animations::MixerBase, Masters), 0);
}

MixerBase_type* MixerBase_typeof()
{
    static uSStrong<MixerBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(MixerBase);
    options.TypeSize = sizeof(MixerBase_type);
    type = (MixerBase_type*)uClassType::New("Fuse.Animations.MixerBase", options);
    type->fp_build_ = MixerBase_build;
    type->interface0.fp_Register = (void(*)(uObject*, uType*, ::g::Uno::UX::Property1*, int*, uObject**))MixerBase__Register_fn;
    type->interface0.fp_RegisterTransform = (void(*)(uObject*, ::g::Fuse::Visual*, int*, int*, uObject**))MixerBase__RegisterTransform_fn;
    return type;
}

// protected generated MixerBase() :1426
void MixerBase__ctor__fn(MixerBase* __this)
{
    __this->ctor_();
}

// public Fuse.Animations.IMixerHandle<T> Register<T>(Uno.UX.Property<T> property, Fuse.Animations.MixOp mode) :1430
void MixerBase__Register_fn(MixerBase* __this, uType* __type, ::g::Uno::UX::Property1* property, int* mode, uObject** __retval)
{
    *__retval = __this->Register(__type, property, *mode);
}

// public Fuse.Animations.IMixerHandle<Fuse.Transform> RegisterTransform(Fuse.Visual element, Fuse.Animations.MixOp mode, [int priority]) :1444
void MixerBase__RegisterTransform_fn(MixerBase* __this, ::g::Fuse::Visual* element, int* mode, int* priority, uObject** __retval)
{
    *__retval = __this->RegisterTransform(element, *mode, *priority);
}

// public void Unused(Fuse.Animations.IMixerMaster mb) :1459
void MixerBase__Unused_fn(MixerBase* __this, uObject* mb)
{
    __this->Unused(mb);
}

// protected generated MixerBase() [instance] :1426
void MixerBase::ctor_()
{
    uStackFrame __("Fuse.Animations.MixerBase", ".ctor()");
    Masters = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[38/*Uno.Collections.Dictionary<object, object>*/]));
    _propHandle = ::g::Fuse::Properties::CreateHandle();
}

// public Fuse.Animations.IMixerHandle<T> Register<T>(Uno.UX.Property<T> property, Fuse.Animations.MixOp mode) [instance] :1430
uObject* MixerBase::Register(uType* __type, ::g::Uno::UX::Property1* property, int mode)
{
    uType* __types[] = {
        MixerBase_typeof()->MakeMethod(1, __type->U(0)),
        __type->U(0),
        ::TYPES[39/*Fuse.Animations.MasterBase`1*/]->MakeType(__type->U(0)),
        ::TYPES[20/*Fuse.Animations.IMixerHandle`1*/]->MakeType(__type->U(0)),
        ::TYPES[33/*Fuse.Animations.MixerHandle`1*/]->MakeType(__type->U(0)),
    };
    uStackFrame __("Fuse.Animations.MixerBase", "Register`1(Uno.UX.Property<T>,Fuse.Animations.MixOp)");
    bool ret1;
    uObject* master;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Masters), property, (void**)(&master), &ret1), ret1))
    {
        master = (::g::Fuse::Animations::MasterProperty*)CreateMaster(__types[0], property, this);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Masters), property, master);
    }

    ::g::Fuse::Animations::MasterBase* masterT = uCast< ::g::Fuse::Animations::MasterBase*>(master, __types[2]);
    return (uObject*)((::g::Fuse::Animations::MixerHandle*)::g::Fuse::Animations::MixerHandle::New1(__types[4], masterT, mode, 0));
}

// public Fuse.Animations.IMixerHandle<Fuse.Transform> RegisterTransform(Fuse.Visual element, Fuse.Animations.MixOp mode, [int priority]) [instance] :1444
uObject* MixerBase::RegisterTransform(::g::Fuse::Visual* element, int mode, int priority)
{
    uStackFrame __("Fuse.Animations.MixerBase", "RegisterTransform(Fuse.Visual,Fuse.Animations.MixOp,[int])");
    uObject* master;

    if (!uPtr(uPtr(element)->Properties())->TryGet(_propHandle, &master))
    {
        master = CreateMasterTransform(element, this);
        uPtr(uPtr(element)->Properties())->Set(_propHandle, master);
    }

    ::g::Fuse::Animations::MasterBase* masterT = uCast< ::g::Fuse::Animations::MasterBase*>(master, ::TYPES[12/*Fuse.Animations.MasterBase<Fuse.Transform>*/]);
    return (uObject*)((::g::Fuse::Animations::MixerHandle*)::g::Fuse::Animations::MixerHandle::New1(::TYPES[41/*Fuse.Animations.MixerHandle<Fuse.Transform>*/], masterT, mode, priority));
}

// public void Unused(Fuse.Animations.IMixerMaster mb) [instance] :1459
void MixerBase::Unused(uObject* mb)
{
    uStackFrame __("Fuse.Animations.MixerBase", "Unused(Fuse.Animations.IMixerMaster)");
    bool ret2;
    uObject* prop = uAs<uObject*>(mb, ::TYPES[42/*Fuse.Animations.MasterPropertyGet*/]);

    if (prop != NULL)
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(Masters), ::g::Fuse::Animations::MasterPropertyGet::GetPropertyObject(uInterface(uPtr(prop), ::TYPES[42/*Fuse.Animations.MasterPropertyGet*/])), &ret2);

    ::g::Fuse::Animations::MasterTransform* trans = uAs< ::g::Fuse::Animations::MasterTransform*>(mb, ::TYPES[43/*Fuse.Animations.MasterTransform*/]);

    if (trans != NULL)
        uPtr(uPtr(uPtr(trans)->Visual)->Properties())->Clear(_propHandle);
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class MixerHandle<T> :1740
// {
static void MixerHandle_build(uType* type)
{
    ::STRINGS[14] = uString::Const("invalid MixerHandle.Set post-Unregister");
    ::STRINGS[2] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno");
    ::STRINGS[15] = uString::Const("Invalid MixerHandle.RestValue post-Unregister");
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0)), offsetof(MixerHandle_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MixerHandle, _hasValue), 0,
        ::g::Fuse::Animations::MasterBase_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::MixerHandle, Master), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::MixerHandle, Strength), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Fuse::Animations::MixOp_typeof(), offsetof(::g::Fuse::Animations::MixerHandle, _MixOp), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Animations::MixerHandle, _Priority), 0);
}

MixerHandle_type* MixerHandle_typeof()
{
    static uSStrong<MixerHandle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MixerHandle);
    options.TypeSize = sizeof(MixerHandle_type);
    type = (MixerHandle_type*)uClassType::New("Fuse.Animations.MixerHandle`1", options);
    type->fp_build_ = MixerHandle_build;
    type->interface0.fp_Unregister = (void(*)(uObject*))MixerHandle__Unregister_fn;
    type->interface0.fp_Set = (void(*)(uObject*, void*, float*))MixerHandle__Set_fn;
    type->interface0.fp_get_RestValue = (void(*)(uObject*, uTRef))MixerHandle__get_RestValue_fn;
    return type;
}

// public MixerHandle(Fuse.Animations.MasterBase<T> master, Fuse.Animations.MixOp mode, int priority) :1753
void MixerHandle__ctor__fn(MixerHandle* __this, ::g::Fuse::Animations::MasterBase* master, int* mode, int* priority)
{
    __this->ctor_(master, *mode, *priority);
}

// public bool get_HasValue() :1746
void MixerHandle__get_HasValue_fn(MixerHandle* __this, bool* __retval)
{
    *__retval = __this->HasValue();
}

// public generated Fuse.Animations.MixOp get_MixOp() :1748
void MixerHandle__get_MixOp_fn(MixerHandle* __this, int* __retval)
{
    *__retval = __this->MixOp();
}

// public generated void set_MixOp(Fuse.Animations.MixOp value) :1748
void MixerHandle__set_MixOp_fn(MixerHandle* __this, int* value)
{
    __this->MixOp(*value);
}

// public MixerHandle New(Fuse.Animations.MasterBase<T> master, Fuse.Animations.MixOp mode, int priority) :1753
void MixerHandle__New1_fn(uType* __type, ::g::Fuse::Animations::MasterBase* master, int* mode, int* priority, MixerHandle** __retval)
{
    *__retval = MixerHandle::New1(__type, master, *mode, *priority);
}

// public generated int get_Priority() :1750
void MixerHandle__get_Priority_fn(MixerHandle* __this, int* __retval)
{
    *__retval = __this->Priority();
}

// private generated void set_Priority(int value) :1750
void MixerHandle__set_Priority_fn(MixerHandle* __this, int* value)
{
    __this->Priority(*value);
}

// public T get_RestValue() :1784
void MixerHandle__get_RestValue_fn(MixerHandle* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.MixerHandle`1", "get_RestValue()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__this->Master == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[15/*"Invalid Mix...*/]));

    return __retval.Store((uPtr(__this->Master)->get_RestValue_ex(&ret2), ret2)), void();
}

// public void Set(T value, float strength) :1768
void MixerHandle__Set_fn(MixerHandle* __this, void* value, float* strength)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.MixerHandle`1", "Set(T,float)");
    float strength_ = *strength;

    if (__this->Master == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[14/*"invalid Mix...*/], 1, ::STRINGS[2/*"/usr/local/...*/], 1772);
        return;
    }

    __this->_hasValue = true;
    __this->Value() = value;
    __this->Strength = strength_;
    uPtr(__this->Master)->MarkDirty();
}

// public void Unregister() :1761
void MixerHandle__Unregister_fn(MixerHandle* __this)
{
    __this->Unregister();
}

// public MixerHandle(Fuse.Animations.MasterBase<T> master, Fuse.Animations.MixOp mode, int priority) [instance] :1753
void MixerHandle::ctor_(::g::Fuse::Animations::MasterBase* master, int mode, int priority)
{
    uStackFrame __("Fuse.Animations.MixerHandle`1", ".ctor(Fuse.Animations.MasterBase<T>,Fuse.Animations.MixOp,int)");
    Priority(priority);
    Master = master;
    MixOp(mode);
    uPtr(Master)->Register(this);
}

// public bool get_HasValue() [instance] :1746
bool MixerHandle::HasValue()
{
    uStackFrame __("Fuse.Animations.MixerHandle`1", "get_HasValue()");
    return _hasValue;
}

// public generated Fuse.Animations.MixOp get_MixOp() [instance] :1748
int MixerHandle::MixOp()
{
    uStackFrame __("Fuse.Animations.MixerHandle`1", "get_MixOp()");
    return _MixOp;
}

// public generated void set_MixOp(Fuse.Animations.MixOp value) [instance] :1748
void MixerHandle::MixOp(int value)
{
    uStackFrame __("Fuse.Animations.MixerHandle`1", "set_MixOp(Fuse.Animations.MixOp)");
    _MixOp = value;
}

// public generated int get_Priority() [instance] :1750
int MixerHandle::Priority()
{
    uStackFrame __("Fuse.Animations.MixerHandle`1", "get_Priority()");
    return _Priority;
}

// private generated void set_Priority(int value) [instance] :1750
void MixerHandle::Priority(int value)
{
    uStackFrame __("Fuse.Animations.MixerHandle`1", "set_Priority(int)");
    _Priority = value;
}

// public void Unregister() [instance] :1761
void MixerHandle::Unregister()
{
    uStackFrame __("Fuse.Animations.MixerHandle`1", "Unregister()");
    _hasValue = false;
    uPtr(Master)->Unregister(this);
    Master = NULL;
}

// public MixerHandle New(Fuse.Animations.MasterBase<T> master, Fuse.Animations.MixOp mode, int priority) [static] :1753
MixerHandle* MixerHandle::New1(uType* __type, ::g::Fuse::Animations::MasterBase* master, int mode, int priority)
{
    MixerHandle* obj1 = (MixerHandle*)uNew(__type);
    obj1->ctor_(master, mode, priority);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public enum MixOp :1393
uEnumType* MixOp_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.MixOp", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Offset", 0LL,
        "Add", 1LL,
        "Weight", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public sealed class Move :3451
// {
static void Move_build(uType* type)
{
    type->SetFields(22,
        ::g::Fuse::ITranslationMode_typeof(), offsetof(::g::Fuse::Animations::Move, _relativeTo), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)Move__New2_fn, 0, true, Move_typeof(), 0),
        new uFunction("get_RelativeTo", NULL, (void*)Move__get_RelativeTo_fn, 0, false, ::g::Fuse::ITranslationMode_typeof(), 0),
        new uFunction("set_RelativeTo", NULL, (void*)Move__set_RelativeTo_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::ITranslationMode_typeof()));
}

::g::Fuse::Animations::TransformAnimator_type* Move_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 23;
    options.ObjectSize = sizeof(Move);
    options.TypeSize = sizeof(::g::Fuse::Animations::TransformAnimator_type);
    type = (::g::Fuse::Animations::TransformAnimator_type*)uClassType::New("Fuse.Animations.Move", options);
    type->SetBase(::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Translation_typeof()));
    type->fp_build_ = Move_build;
    type->fp_ctor_ = (void*)Move__New2_fn;
    type->fp_Update = (void(*)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Visual*, ::g::Fuse::Transform*, ::g::Uno::Float4*))Move__Update_fn;
    return type;
}

// public Move() :3453
void Move__ctor_4_fn(Move* __this)
{
    __this->ctor_4();
}

// public Move New() :3453
void Move__New2_fn(Move** __retval)
{
    *__retval = Move::New2();
}

// public Fuse.ITranslationMode get_RelativeTo() :3482
void Move__get_RelativeTo_fn(Move* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.ITranslationMode value) :3483
void Move__set_RelativeTo_fn(Move* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// internal override sealed void Update(Fuse.Visual elm, Fuse.Translation t, float4 value) :3486
void Move__Update_fn(Move* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Translation* t, ::g::Uno::Float4* value)
{
    uStackFrame __("Fuse.Animations.Move", "Update(Fuse.Visual,Fuse.Translation,float4)");
    ::g::Uno::Float4 value_ = *value;
    uPtr(t)->RelativeTo(__this->RelativeTo());
    t->Vector(::g::Uno::Float3__New2(value_.X, value_.Y, value_.Z));
}

// public Move() [instance] :3453
void Move::ctor_4()
{
    uStackFrame __("Fuse.Animations.Move", ".ctor()");
    _relativeTo = ::g::Fuse::TranslationModes::Local();
    ctor_3();
    Priority(1000);
}

// public Fuse.ITranslationMode get_RelativeTo() [instance] :3482
uObject* Move::RelativeTo()
{
    uStackFrame __("Fuse.Animations.Move", "get_RelativeTo()");
    return _relativeTo;
}

// public void set_RelativeTo(Fuse.ITranslationMode value) [instance] :3483
void Move::RelativeTo(uObject* value)
{
    uStackFrame __("Fuse.Animations.Move", "set_RelativeTo(Fuse.ITranslationMode)");
    _relativeTo = value;
}

// public Move New() [static] :3453
Move* Move::New2()
{
    Move* obj1 = (Move*)uNew(Move_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public sealed class Nothing :1804
// {
static void Nothing_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Animations::AnimatorState_typeof();
    type->SetFields(19);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Nothing__New2_fn, 0, true, Nothing_typeof(), 0));
}

::g::Fuse::Animations::Animator_type* Nothing_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.ObjectSize = sizeof(Nothing);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Nothing", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimator_typeof());
    type->fp_build_ = Nothing_build;
    type->fp_ctor_ = (void*)Nothing__New2_fn;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Nothing__CreateState_fn;
    return type;
}

// public generated Nothing() :1804
void Nothing__ctor_3_fn(Nothing* __this)
{
    __this->ctor_3();
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :1806
void Nothing__CreateState_fn(Nothing* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    uStackFrame __("Fuse.Animations.Nothing", "CreateState(Fuse.Animations.CreateStateParams)");
    return *__retval = ::g::Fuse::Animations::NothingAnimatorState::New1(__this, p), void();
}

// public generated Nothing New() :1804
void Nothing__New2_fn(Nothing** __retval)
{
    *__retval = Nothing::New2();
}

// public generated Nothing() [instance] :1804
void Nothing::ctor_3()
{
    uStackFrame __("Fuse.Animations.Nothing", ".ctor()");
    ctor_2();
}

// public generated Nothing New() [static] :1804
Nothing* Nothing::New2()
{
    Nothing* obj1 = (Nothing*)uNew(Nothing_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class NothingAnimatorState :1812
// {
static void NothingAnimatorState_build(uType* type)
{
    ::TYPES[18] = ::g::Fuse::Animations::TrackAnimator_typeof();
    type->SetFields(6);
}

::g::Fuse::Animations::TrackAnimatorState_type* NothingAnimatorState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(NothingAnimatorState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.NothingAnimatorState", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimatorState_typeof());
    type->fp_build_ = NothingAnimatorState_build;
    return type;
}

// public NothingAnimatorState(Fuse.Animations.Nothing animator, Fuse.Animations.CreateStateParams p) :1814
void NothingAnimatorState__ctor_2_fn(NothingAnimatorState* __this, ::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public NothingAnimatorState New(Fuse.Animations.Nothing animator, Fuse.Animations.CreateStateParams p) :1814
void NothingAnimatorState__New1_fn(::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p, NothingAnimatorState** __retval)
{
    *__retval = NothingAnimatorState::New1(animator, p);
}

// public NothingAnimatorState(Fuse.Animations.Nothing animator, Fuse.Animations.CreateStateParams p) [instance] :1814
void NothingAnimatorState::ctor_2(::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uStackFrame __("Fuse.Animations.NothingAnimatorState", ".ctor(Fuse.Animations.Nothing,Fuse.Animations.CreateStateParams)");
    ctor_1(animator, p, NULL);
}

// public NothingAnimatorState New(Fuse.Animations.Nothing animator, Fuse.Animations.CreateStateParams p) [static] :1814
NothingAnimatorState* NothingAnimatorState::New1(::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    NothingAnimatorState* obj1 = (NothingAnimatorState*)uNew(NothingAnimatorState_typeof());
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public abstract class OpenAnimator :1834
// {
static void OpenAnimator_build(uType* type)
{
    type->SetFields(4,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::OpenAnimator, _duration), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::OpenAnimator, _hasDuration), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Duration", NULL, (void*)OpenAnimator__get_Duration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Duration", NULL, (void*)OpenAnimator__set_Duration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_HasDuration", NULL, (void*)OpenAnimator__get_HasDuration_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("ResetDuration", NULL, (void*)OpenAnimator__ResetDuration_fn, 0, false, uVoid_typeof(), 0));
}

::g::Fuse::Animations::Animator_type* OpenAnimator_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(OpenAnimator);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.OpenAnimator", options);
    type->SetBase(::g::Fuse::Animations::Animator_typeof());
    type->fp_build_ = OpenAnimator_build;
    type->fp_get_AnimatorVariant = (void(*)(::g::Fuse::Animations::Animator*, int*))OpenAnimator__get_AnimatorVariant_fn;
    type->fp_GetDurationWithDelay = (void(*)(::g::Fuse::Animations::Animator*, int*, double*))OpenAnimator__GetDurationWithDelay_fn;
    return type;
}

// protected generated OpenAnimator() :1834
void OpenAnimator__ctor_2_fn(OpenAnimator* __this)
{
    __this->ctor_2();
}

// internal override sealed Fuse.Animations.AnimatorVariant get_AnimatorVariant() :1838
void OpenAnimator__get_AnimatorVariant_fn(OpenAnimator* __this, int* __retval)
{
    uStackFrame __("Fuse.Animations.OpenAnimator", "get_AnimatorVariant()");
    return *__retval = 1, void();
}

// public double get_Duration() :1844
void OpenAnimator__get_Duration_fn(OpenAnimator* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public void set_Duration(double value) :1845
void OpenAnimator__set_Duration_fn(OpenAnimator* __this, double* value)
{
    __this->Duration(*value);
}

// internal double GetDelay(Fuse.Animations.AnimationVariant dir, double totalDuration) :1866
void OpenAnimator__GetDelay_fn(OpenAnimator* __this, int* dir, double* totalDuration, double* __retval)
{
    *__retval = __this->GetDelay(*dir, *totalDuration);
}

// internal override sealed double GetDurationWithDelay(Fuse.Animations.AnimationVariant dir) :1861
void OpenAnimator__GetDurationWithDelay_fn(OpenAnimator* __this, int* dir, double* __retval)
{
    uStackFrame __("Fuse.Animations.OpenAnimator", "GetDurationWithDelay(Fuse.Animations.AnimationVariant)");
    return *__retval = __this->Delay() + __this->Duration(), void();
}

// public bool get_HasDuration() :1859
void OpenAnimator__get_HasDuration_fn(OpenAnimator* __this, bool* __retval)
{
    *__retval = __this->HasDuration();
}

// public void ResetDuration() :1852
void OpenAnimator__ResetDuration_fn(OpenAnimator* __this)
{
    __this->ResetDuration();
}

// protected generated OpenAnimator() [instance] :1834
void OpenAnimator::ctor_2()
{
    uStackFrame __("Fuse.Animations.OpenAnimator", ".ctor()");
    ctor_1();
}

// public double get_Duration() [instance] :1844
double OpenAnimator::Duration()
{
    uStackFrame __("Fuse.Animations.OpenAnimator", "get_Duration()");
    return _duration;
}

// public void set_Duration(double value) [instance] :1845
void OpenAnimator::Duration(double value)
{
    uStackFrame __("Fuse.Animations.OpenAnimator", "set_Duration(double)");
    _duration = value;
    _hasDuration = true;
}

// internal double GetDelay(Fuse.Animations.AnimationVariant dir, double totalDuration) [instance] :1866
double OpenAnimator::GetDelay(int dir, double totalDuration)
{
    uStackFrame __("Fuse.Animations.OpenAnimator", "GetDelay(Fuse.Animations.AnimationVariant,double)");
    return Delay();
}

// public bool get_HasDuration() [instance] :1859
bool OpenAnimator::HasDuration()
{
    uStackFrame __("Fuse.Animations.OpenAnimator", "get_HasDuration()");
    return _hasDuration;
}

// public void ResetDuration() [instance] :1852
void OpenAnimator::ResetDuration()
{
    uStackFrame __("Fuse.Animations.OpenAnimator", "ResetDuration()");
    _duration = 0.0;
    _hasDuration = false;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal abstract class OpenAnimatorState :1872
// {
static void OpenAnimatorState_build(uType* type)
{
    ::TYPES[8] = ::g::Uno::Int_typeof();
    ::TYPES[26] = ::g::Fuse::Animations::SeekResult_typeof();
    type->SetFields(3,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::OpenAnimatorState, _seekDone), 0,
        ::g::Fuse::Animations::OpenAnimator_typeof(), offsetof(::g::Fuse::Animations::OpenAnimatorState, Animator), 0);
}

OpenAnimatorState_type* OpenAnimatorState_typeof()
{
    static uSStrong<OpenAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(OpenAnimatorState);
    options.TypeSize = sizeof(OpenAnimatorState_type);
    type = (OpenAnimatorState_type*)uClassType::New("Fuse.Animations.OpenAnimatorState", options);
    type->SetBase(::g::Fuse::Animations::AnimatorState_typeof());
    type->fp_build_ = OpenAnimatorState_build;
    type->fp_get_IsOpenEnd = (void(*)(::g::Fuse::Animations::AnimatorState*, bool*))OpenAnimatorState__get_IsOpenEnd_fn;
    type->fp_SeekProgress = (void(*)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, int*))OpenAnimatorState__SeekProgress_fn;
    type->fp_SeekTime = (void(*)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, int*))OpenAnimatorState__SeekTime_fn;
    return type;
}

// protected OpenAnimatorState(Fuse.Animations.OpenAnimator animator, Fuse.Animations.CreateStateParams p, [Fuse.Visual useVisual]) :1877
void OpenAnimatorState__ctor_1_fn(OpenAnimatorState* __this, ::g::Fuse::Animations::OpenAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual)
{
    __this->ctor_1(animator, p, useVisual);
}

// public override sealed bool get_IsOpenEnd() :1884
void OpenAnimatorState__get_IsOpenEnd_fn(OpenAnimatorState* __this, bool* __retval)
{
    uStackFrame __("Fuse.Animations.OpenAnimatorState", "get_IsOpenEnd()");
    return *__retval = true, void();
}

// internal override sealed Fuse.Animations.SeekResult SeekProgress(double progress, double interval, Fuse.Animations.SeekDirection dir, double strength) :1886
void OpenAnimatorState__SeekProgress_fn(OpenAnimatorState* __this, double* progress, double* interval, int* dir, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.OpenAnimatorState", "SeekProgress(double,double,Fuse.Animations.SeekDirection,double)");
    double progress_ = *progress;
    double interval_ = *interval;
    int dir_ = *dir;
    double strength_ = *strength;
    return *__retval = __this->SeekTime(progress_ * __this->TotalDuration, interval_, dir_, strength_), void();
}

// internal override sealed Fuse.Animations.SeekResult SeekTime(double nominal, double interval, Fuse.Animations.SeekDirection dir, double strength) :1892
void OpenAnimatorState__SeekTime_fn(OpenAnimatorState* __this, double* nominal, double* interval, int* dir, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.OpenAnimatorState", "SeekTime(double,double,Fuse.Animations.SeekDirection,double)");
    int dir_ = *dir;
    double nominal_ = *nominal;
    double interval_ = *interval;
    double strength_ = *strength;
    double delay = uPtr(__this->Animator)->GetDelay(__this->Variant, __this->TotalDuration);
    bool on = (dir_ == 0) ? nominal_ > (delay - 9.9999997473787516e-06) : nominal_ > (delay + 9.9999997473787516e-06);

    if (uPtr(__this->Animator)->HasDuration() && (nominal_ > ((delay + uPtr(__this->Animator)->Duration()) - 9.9999997473787516e-06)))
        on = false;

    bool mayEnd = (dir_ == 0) ? nominal_ >= (uPtr(__this->Animator)->GetDurationWithDelay(__this->Variant) - 9.9999997473787516e-06) : nominal_ <= (delay + 9.9999997473787516e-06);

    if (on || !__this->_seekDone)
        __this->_seekDone = __this->Seek(on, (float)interval_, (float)strength_, dir_);

    return *__retval = (__this->_seekDone ? 2 : 0) | ((mayEnd && __this->_seekDone) ? 1 : 0), void();
}

// protected OpenAnimatorState(Fuse.Animations.OpenAnimator animator, Fuse.Animations.CreateStateParams p, [Fuse.Visual useVisual]) [instance] :1877
void OpenAnimatorState::ctor_1(::g::Fuse::Animations::OpenAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual)
{
    uStackFrame __("Fuse.Animations.OpenAnimatorState", ".ctor(Fuse.Animations.OpenAnimator,Fuse.Animations.CreateStateParams,[Fuse.Visual])");
    _seekDone = true;
    ctor_(p, useVisual);
    Animator = animator;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class Player :2086
// {
static void Player_build(uType* type)
{
    ::TYPES[8] = ::g::Uno::Int_typeof();
    ::TYPES[44] = ::g::Fuse::Animations::IPlayerFeedback_typeof();
    ::TYPES[6] = uObject_typeof();
    ::TYPES[45] = ::g::Fuse::IUpdateListener_typeof();
    type->SetInterfaces(
        ::g::Fuse::IUpdateListener_typeof(), offsetof(Player_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Player, _allStable), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Player, _isDone), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Player, _isStarted), 0,
        ::g::Fuse::Animations::PlayerPart_typeof(), offsetof(::g::Fuse::Animations::Player, _progress), 0,
        ::g::Fuse::Animations::SeekDirection_typeof(), offsetof(::g::Fuse::Animations::Player, _seekDirection), 0,
        ::g::Fuse::Animations::AnimatorState_typeof()->Array(), offsetof(::g::Fuse::Animations::Player, _states), 0,
        ::g::Fuse::Animations::PlayerPart_typeof(), offsetof(::g::Fuse::Animations::Player, _strength), 0,
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Animations::Player, Feedback), 0,
        ::g::Fuse::Animations::TriggerAnimation_typeof(), offsetof(::g::Fuse::Animations::Player, _Animation), 0,
        ::g::Fuse::Animations::PlayMode_typeof(), offsetof(::g::Fuse::Animations::Player, _Mode), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Animations::Player, _Variant), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::Player, _Visual), 0);
}

Player_type* Player_typeof()
{
    static uSStrong<Player_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Player);
    options.TypeSize = sizeof(Player_type);
    type = (Player_type*)uClassType::New("Fuse.Animations.Player", options);
    type->fp_build_ = Player_build;
    type->interface0.fp_Update = (void(*)(uObject*))Player__FuseIUpdateListenerUpdate_fn;
    return type;
}

// public Player(Fuse.Visual elm, Fuse.Animations.TriggerAnimation animation, Fuse.Animations.AnimationVariant variant, Fuse.Animations.PlayMode mode) :2108
void Player__ctor__fn(Player* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int* variant, int* mode)
{
    __this->ctor_(elm, animation, *variant, *mode);
}

// public generated Fuse.Animations.TriggerAnimation get_Animation() :2091
void Player__get_Animation_fn(Player* __this, ::g::Fuse::Animations::TriggerAnimation** __retval)
{
    *__retval = __this->Animation();
}

// private generated void set_Animation(Fuse.Animations.TriggerAnimation value) :2091
void Player__set_Animation_fn(Player* __this, ::g::Fuse::Animations::TriggerAnimation* value)
{
    __this->Animation(value);
}

// public double get_AnimatorsDuration() :2124
void Player__get_AnimatorsDuration_fn(Player* __this, double* __retval)
{
    *__retval = __this->AnimatorsDuration();
}

// private void CheckUpdate([bool interval]) :2130
void Player__CheckUpdate_fn(Player* __this, bool* interval)
{
    __this->CheckUpdate(*interval);
}

// public void Disable() :2220
void Player__Disable_fn(Player* __this)
{
    __this->Disable();
}

// private void Done() :2205
void Player__Done_fn(Player* __this)
{
    __this->Done();
}

// public void FadeIn(double time) :2334
void Player__FadeIn_fn(Player* __this, double* time)
{
    __this->FadeIn(*time);
}

// public void FadeOut(double time) :2341
void Player__FadeOut_fn(Player* __this, double* time)
{
    __this->FadeOut(*time);
}

// private void Fuse.IUpdateListener.Update() :2126
void Player__FuseIUpdateListenerUpdate_fn(Player* __this)
{
    uStackFrame __("Fuse.Animations.Player", "Fuse.IUpdateListener.Update()");
    __this->CheckUpdate(true);
}

// public bool get_IsStable() :2172
void Player__get_IsStable_fn(Player* __this, bool* __retval)
{
    *__retval = __this->IsStable();
}

// internal bool get_IsSyncState() :2260
void Player__get_IsSyncState_fn(Player* __this, bool* __retval)
{
    *__retval = __this->IsSyncState();
}

// public generated Fuse.Animations.PlayMode get_Mode() :2093
void Player__get_Mode_fn(Player* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// private generated void set_Mode(Fuse.Animations.PlayMode value) :2093
void Player__set_Mode_fn(Player* __this, int* value)
{
    __this->Mode(*value);
}

// public Player New(Fuse.Visual elm, Fuse.Animations.TriggerAnimation animation, Fuse.Animations.AnimationVariant variant, Fuse.Animations.PlayMode mode) :2108
void Player__New1_fn(::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int* variant, int* mode, Player** __retval)
{
    *__retval = Player::New1(elm, animation, *variant, *mode);
}

// public void PlayToEnd() :2306
void Player__PlayToEnd_fn(Player* __this)
{
    __this->PlayToEnd();
}

// public void PlayToProgress(double progress) :2297
void Player__PlayToProgress_fn(Player* __this, double* progress)
{
    __this->PlayToProgress(*progress);
}

// public void PlayToStart() :2314
void Player__PlayToStart_fn(Player* __this)
{
    __this->PlayToStart();
}

// public double get_Progress() :2234
void Player__get_Progress_fn(Player* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public double get_RemainTime() :2238
void Player__get_RemainTime_fn(Player* __this, double* __retval)
{
    *__retval = __this->RemainTime();
}

// public void SeekProgress(double progress, [bool triggerUpdate]) :2248
void Player__SeekProgress_fn(Player* __this, double* progress, bool* triggerUpdate)
{
    __this->SeekProgress(*progress, *triggerUpdate);
}

// private void Start() :2177
void Player__Start_fn(Player* __this)
{
    __this->Start();
}

// private Fuse.Animations.AnimatorState[] get_States() :2098
void Player__get_States_fn(Player* __this, uArray** __retval)
{
    *__retval = __this->States();
}

// private void Stop() :2186
void Player__Stop_fn(Player* __this)
{
    __this->Stop();
}

// public double get_Strength() :2326
void Player__get_Strength_fn(Player* __this, double* __retval)
{
    *__retval = __this->Strength();
}

// public void set_Strength(double value) :2327
void Player__set_Strength_fn(Player* __this, double* value)
{
    __this->Strength(*value);
}

// public void Suspend() :2195
void Player__Suspend_fn(Player* __this)
{
    __this->Suspend();
}

// public void TimeChanged() :2118
void Player__TimeChanged_fn(Player* __this)
{
    __this->TimeChanged();
}

// private bool UpdateStates(bool isInterval) :2266
void Player__UpdateStates_fn(Player* __this, bool* isInterval, bool* __retval)
{
    *__retval = __this->UpdateStates(*isInterval);
}

// public generated Fuse.Animations.AnimationVariant get_Variant() :2092
void Player__get_Variant_fn(Player* __this, int* __retval)
{
    *__retval = __this->Variant();
}

// public generated void set_Variant(Fuse.Animations.AnimationVariant value) :2092
void Player__set_Variant_fn(Player* __this, int* value)
{
    __this->Variant(*value);
}

// public generated Fuse.Visual get_Visual() :2090
void Player__get_Visual_fn(Player* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Visual();
}

// private generated void set_Visual(Fuse.Visual value) :2090
void Player__set_Visual_fn(Player* __this, ::g::Fuse::Visual* value)
{
    __this->Visual(value);
}

// public Player(Fuse.Visual elm, Fuse.Animations.TriggerAnimation animation, Fuse.Animations.AnimationVariant variant, Fuse.Animations.PlayMode mode) [instance] :2108
void Player::ctor_(::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int variant, int mode)
{
    uStackFrame __("Fuse.Animations.Player", ".ctor(Fuse.Visual,Fuse.Animations.TriggerAnimation,Fuse.Animations.AnimationVariant,Fuse.Animations.PlayMode)");
    _allStable = true;
    _progress = ::g::Fuse::Animations::PlayerPart::New1(0.0);
    _seekDirection = 1;
    _strength = ::g::Fuse::Animations::PlayerPart::New1(1.0);
    Animation(animation);
    Visual(elm);
    Variant(variant);
    Mode(mode);
    TimeChanged();
}

// public generated Fuse.Animations.TriggerAnimation get_Animation() [instance] :2091
::g::Fuse::Animations::TriggerAnimation* Player::Animation()
{
    uStackFrame __("Fuse.Animations.Player", "get_Animation()");
    return _Animation;
}

// private generated void set_Animation(Fuse.Animations.TriggerAnimation value) [instance] :2091
void Player::Animation(::g::Fuse::Animations::TriggerAnimation* value)
{
    uStackFrame __("Fuse.Animations.Player", "set_Animation(Fuse.Animations.TriggerAnimation)");
    _Animation = value;
}

// public double get_AnimatorsDuration() [instance] :2124
double Player::AnimatorsDuration()
{
    uStackFrame __("Fuse.Animations.Player", "get_AnimatorsDuration()");
    return uPtr(_progress)->Duration;
}

// private void CheckUpdate([bool interval]) [instance] :2130
void Player::CheckUpdate(bool interval)
{
    uStackFrame __("Fuse.Animations.Player", "CheckUpdate([bool])");
    bool running = false;

    if (uPtr(_progress)->Animate)
    {
        running = true;

        if (Mode() == 1)
            uPtr(_progress)->WrapStep();
        else
            uPtr(_progress)->Step();

        if (Feedback != NULL)
            ::g::Fuse::Animations::IPlayerFeedback::OnProgressUpdated(uInterface(uPtr(Feedback), ::TYPES[44/*Fuse.Animations.IPlayerFeedback*/]), this);
    }

    if (uPtr(_strength)->Animate)
    {
        running = true;
        uPtr(_strength)->Step();
    }

    bool stable = UpdateStates(interval);

    if (stable && !running)
        Stop();
    else
        Start();

    if (!running)
        Done();

    if (stable != _allStable)
    {
        _allStable = stable;

        if ((Feedback != NULL) && stable)
            ::g::Fuse::Animations::IPlayerFeedback::OnStable(uInterface(uPtr(Feedback), ::TYPES[44/*Fuse.Animations.IPlayerFeedback*/]), this);
    }
}

// public void Disable() [instance] :2220
void Player::Disable()
{
    uStackFrame __("Fuse.Animations.Player", "Disable()");
    Stop();

    if (_states != NULL)
    {
        for (int i = 0; i < uPtr(_states)->Length(); i++)
            uPtr(uPtr(_states)->Strong< ::g::Fuse::Animations::AnimatorState*>(i))->Disable();

        _states = NULL;
    }
}

// private void Done() [instance] :2205
void Player::Done()
{
    uStackFrame __("Fuse.Animations.Player", "Done()");
    uPtr(_progress)->Animate = false;
    uPtr(_strength)->Animate = false;

    if (!_isDone)
    {
        _isDone = true;

        if (Feedback != NULL)
            ::g::Fuse::Animations::IPlayerFeedback::OnPlaybackDone(uInterface(uPtr(Feedback), ::TYPES[44/*Fuse.Animations.IPlayerFeedback*/]), this);
    }
}

// public void FadeIn(double time) [instance] :2334
void Player::FadeIn(double time)
{
    uStackFrame __("Fuse.Animations.Player", "FadeIn(double)");
    uPtr(_strength)->AlterDuration(time, 1.0);
    uPtr(_strength)->PlayToEnd();
    CheckUpdate(false);
}

// public void FadeOut(double time) [instance] :2341
void Player::FadeOut(double time)
{
    uStackFrame __("Fuse.Animations.Player", "FadeOut(double)");
    uPtr(_strength)->AlterDuration(time, 1.0);
    uPtr(_strength)->PlayToStart();
    CheckUpdate(false);
}

// public bool get_IsStable() [instance] :2172
bool Player::IsStable()
{
    uStackFrame __("Fuse.Animations.Player", "get_IsStable()");
    return _allStable;
}

// internal bool get_IsSyncState() [instance] :2260
bool Player::IsSyncState()
{
    uStackFrame __("Fuse.Animations.Player", "get_IsSyncState()");
    return (uPtr(_progress)->Current == 0.0) || (uPtr(_progress)->Progress() == 1.0);
}

// public generated Fuse.Animations.PlayMode get_Mode() [instance] :2093
int Player::Mode()
{
    uStackFrame __("Fuse.Animations.Player", "get_Mode()");
    return _Mode;
}

// private generated void set_Mode(Fuse.Animations.PlayMode value) [instance] :2093
void Player::Mode(int value)
{
    uStackFrame __("Fuse.Animations.Player", "set_Mode(Fuse.Animations.PlayMode)");
    _Mode = value;
}

// public void PlayToEnd() [instance] :2306
void Player::PlayToEnd()
{
    uStackFrame __("Fuse.Animations.Player", "PlayToEnd()");
    _seekDirection = 0;
    uPtr(_progress)->PlayToEnd();
    _isDone = false;
    CheckUpdate(false);
}

// public void PlayToProgress(double progress) [instance] :2297
void Player::PlayToProgress(double progress)
{
    uStackFrame __("Fuse.Animations.Player", "PlayToProgress(double)");

    if (progress != uPtr(_progress)->Progress())
        _seekDirection = ((progress > uPtr(_progress)->Progress()) ? 0 : 1);

    uPtr(_progress)->PlayToProgress(progress);
    _isDone = false;
    CheckUpdate(false);
}

// public void PlayToStart() [instance] :2314
void Player::PlayToStart()
{
    uStackFrame __("Fuse.Animations.Player", "PlayToStart()");
    _seekDirection = 1;
    uPtr(_progress)->PlayToStart();
    _isDone = false;
    CheckUpdate(false);
}

// public double get_Progress() [instance] :2234
double Player::Progress()
{
    uStackFrame __("Fuse.Animations.Player", "get_Progress()");
    return uPtr(_progress)->Progress();
}

// public double get_RemainTime() [instance] :2238
double Player::RemainTime()
{
    uStackFrame __("Fuse.Animations.Player", "get_RemainTime()");

    if (uPtr(_progress)->IsProgress || (uPtr(_progress)->Duration < 9.9999997473787516e-06))
        return 0.0;

    return (Variant() == 0) ? uPtr(_progress)->Duration - uPtr(_progress)->Current : uPtr(_progress)->Current;
}

// public void SeekProgress(double progress, [bool triggerUpdate]) [instance] :2248
void Player::SeekProgress(double progress, bool triggerUpdate)
{
    uStackFrame __("Fuse.Animations.Player", "SeekProgress(double,[bool])");
    uPtr(_progress)->SeekProgress(progress);
    _isDone = true;
    CheckUpdate(false);

    if (triggerUpdate && (Feedback != NULL))
        ::g::Fuse::Animations::IPlayerFeedback::OnProgressUpdated(uInterface(uPtr(Feedback), ::TYPES[44/*Fuse.Animations.IPlayerFeedback*/]), this);
}

// private void Start() [instance] :2177
void Player::Start()
{
    uStackFrame __("Fuse.Animations.Player", "Start()");

    if (!_isStarted)
    {
        _isStarted = true;
        ::g::Fuse::UpdateManager::AddAction((uObject*)this, 0);
    }
}

// private Fuse.Animations.AnimatorState[] get_States() [instance] :2098
uArray* Player::States()
{
    uStackFrame __("Fuse.Animations.Player", "get_States()");

    if (_states == NULL)
        _states = uPtr(Animation())->CreateAnimatorsState(Variant(), Visual());

    return _states;
}

// private void Stop() [instance] :2186
void Player::Stop()
{
    uStackFrame __("Fuse.Animations.Player", "Stop()");

    if (_isStarted)
    {
        _isStarted = false;
        ::g::Fuse::UpdateManager::RemoveAction((uObject*)this, 0);
    }
}

// public double get_Strength() [instance] :2326
double Player::Strength()
{
    uStackFrame __("Fuse.Animations.Player", "get_Strength()");
    return uPtr(_strength)->Progress();
}

// public void set_Strength(double value) [instance] :2327
void Player::Strength(double value)
{
    uStackFrame __("Fuse.Animations.Player", "set_Strength(double)");
    uPtr(_strength)->SeekProgress(value);
    CheckUpdate(false);
}

// public void Suspend() [instance] :2195
void Player::Suspend()
{
    uStackFrame __("Fuse.Animations.Player", "Suspend()");
    uPtr(_progress)->Animate = false;
    uPtr(_strength)->Animate = false;
    CheckUpdate(false);
}

// public void TimeChanged() [instance] :2118
void Player::TimeChanged()
{
    uStackFrame __("Fuse.Animations.Player", "TimeChanged()");
    uPtr(_progress)->AlterDuration(uPtr(Animation())->GetAnimatorsDuration(Variant()), uPtr(Animation())->GetTimeMultiplier(Variant()));
}

// private bool UpdateStates(bool isInterval) [instance] :2266
bool Player::UpdateStates(bool isInterval)
{
    uStackFrame __("Fuse.Animations.Player", "UpdateStates(bool)");
    bool allStable = true;
    double interval = isInterval ? ::g::Fuse::Time::FrameInterval() * uPtr(_progress)->TimeMultiplier() : 0.0;

    if (_seekDirection == 1)
        interval = -interval;

    for (int i = 0; i < uPtr(States())->Length(); ++i)
    {
        ::g::Fuse::Animations::AnimatorState* s = uPtr(States())->Strong< ::g::Fuse::Animations::AnimatorState*>(i);
        int stable;

        if (uPtr(_progress)->IsProgress)
            stable = uPtr(s)->SeekProgress(uPtr(_progress)->Current, interval, _seekDirection, uPtr(_strength)->Progress());
        else
            stable = uPtr(s)->SeekTime(uPtr(_progress)->Current, interval, _seekDirection, uPtr(_strength)->Progress());

        allStable = allStable && ((stable & 2) == 2);
    }

    return allStable;
}

// public generated Fuse.Animations.AnimationVariant get_Variant() [instance] :2092
int Player::Variant()
{
    uStackFrame __("Fuse.Animations.Player", "get_Variant()");
    return _Variant;
}

// public generated void set_Variant(Fuse.Animations.AnimationVariant value) [instance] :2092
void Player::Variant(int value)
{
    uStackFrame __("Fuse.Animations.Player", "set_Variant(Fuse.Animations.AnimationVariant)");
    _Variant = value;
}

// public generated Fuse.Visual get_Visual() [instance] :2090
::g::Fuse::Visual* Player::Visual()
{
    uStackFrame __("Fuse.Animations.Player", "get_Visual()");
    return _Visual;
}

// private generated void set_Visual(Fuse.Visual value) [instance] :2090
void Player::Visual(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Animations.Player", "set_Visual(Fuse.Visual)");
    _Visual = value;
}

// public Player New(Fuse.Visual elm, Fuse.Animations.TriggerAnimation animation, Fuse.Animations.AnimationVariant variant, Fuse.Animations.PlayMode mode) [static] :2108
Player* Player::New1(::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int variant, int mode)
{
    Player* obj1 = (Player*)uNew(Player_typeof());
    obj1->ctor_(elm, animation, variant, mode);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class PlayerPart :1939
// {
static void PlayerPart_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, _stepTime), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, _timeMultiplier), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Animate), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Current), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Duration), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, IsProgress), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Source), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, SourceTime), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Target), 0);
}

uType* PlayerPart_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(PlayerPart);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.PlayerPart", options);
    type->fp_build_ = PlayerPart_build;
    return type;
}

// public PlayerPart([double currentProgress]) :1949
void PlayerPart__ctor__fn(PlayerPart* __this, double* currentProgress)
{
    __this->ctor_(*currentProgress);
}

// public void AlterDuration(double t, double timeMult) :2074
void PlayerPart__AlterDuration_fn(PlayerPart* __this, double* t, double* timeMult)
{
    __this->AlterDuration(*t, *timeMult);
}

// private void MarkSource(bool isAnimating) :1981
void PlayerPart__MarkSource_fn(PlayerPart* __this, bool* isAnimating)
{
    __this->MarkSource(*isAnimating);
}

// public PlayerPart New([double currentProgress]) :1949
void PlayerPart__New1_fn(double* currentProgress, PlayerPart** __retval)
{
    *__retval = PlayerPart::New1(*currentProgress);
}

// public void PlayToEnd() :1993
void PlayerPart__PlayToEnd_fn(PlayerPart* __this)
{
    __this->PlayToEnd();
}

// public void PlayToProgress(double progress) :1955
void PlayerPart__PlayToProgress_fn(PlayerPart* __this, double* progress)
{
    __this->PlayToProgress(*progress);
}

// public void PlayToStart() :1998
void PlayerPart__PlayToStart_fn(PlayerPart* __this)
{
    __this->PlayToStart();
}

// public double get_Progress() :2064
void PlayerPart__get_Progress_fn(PlayerPart* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public void SeekProgress(double p) :2046
void PlayerPart__SeekProgress_fn(PlayerPart* __this, double* p)
{
    __this->SeekProgress(*p);
}

// public void Step() :2004
void PlayerPart__Step_fn(PlayerPart* __this)
{
    __this->Step();
}

// public double get_TimeMultiplier() :2083
void PlayerPart__get_TimeMultiplier_fn(PlayerPart* __this, double* __retval)
{
    *__retval = __this->TimeMultiplier();
}

// public void WrapStep() :2025
void PlayerPart__WrapStep_fn(PlayerPart* __this)
{
    __this->WrapStep();
}

// public PlayerPart([double currentProgress]) [instance] :1949
void PlayerPart::ctor_(double currentProgress)
{
    uStackFrame __("Fuse.Animations.PlayerPart", ".ctor([double])");
    _timeMultiplier = 1.0;
    IsProgress = true;
    Current = currentProgress;
}

// public void AlterDuration(double t, double timeMult) [instance] :2074
void PlayerPart::AlterDuration(double t, double timeMult)
{
    uStackFrame __("Fuse.Animations.PlayerPart", "AlterDuration(double,double)");
    _timeMultiplier = timeMult;
    MarkSource(Animate);
    double p = Progress();
    Duration = t;
    SeekProgress(p);
}

// private void MarkSource(bool isAnimating) [instance] :1981
void PlayerPart::MarkSource(bool isAnimating)
{
    uStackFrame __("Fuse.Animations.PlayerPart", "MarkSource(bool)");
    Source = Current;

    if (isAnimating && (_stepTime < ::g::Fuse::Time::FrameTime()))
        SourceTime = (::g::Fuse::Time::FrameTime() - (::g::Fuse::Time::FrameInterval() * _timeMultiplier));
    else
        SourceTime = ::g::Fuse::Time::FrameTime();
}

// public void PlayToEnd() [instance] :1993
void PlayerPart::PlayToEnd()
{
    uStackFrame __("Fuse.Animations.PlayerPart", "PlayToEnd()");
    PlayToProgress(1.0);
}

// public void PlayToProgress(double progress) [instance] :1955
void PlayerPart::PlayToProgress(double progress)
{
    uStackFrame __("Fuse.Animations.PlayerPart", "PlayToProgress(double)");
    bool nIsProgress;
    double nTarget;

    if (Duration < 9.9999997473787516e-06)
    {
        nIsProgress = true;
        nTarget = progress;
    }
    else
    {
        nIsProgress = false;
        nTarget = progress * Duration;
    }

    if (((nIsProgress == IsProgress) && (nTarget == Target)) && Animate)
        return;

    MarkSource(Animate);
    Animate = true;
    IsProgress = nIsProgress;
    Target = nTarget;
}

// public void PlayToStart() [instance] :1998
void PlayerPart::PlayToStart()
{
    uStackFrame __("Fuse.Animations.PlayerPart", "PlayToStart()");
    PlayToProgress(0.0);
}

// public double get_Progress() [instance] :2064
double PlayerPart::Progress()
{
    uStackFrame __("Fuse.Animations.PlayerPart", "get_Progress()");

    if (IsProgress)
        return Current;
    else
        return ::g::Uno::Math::Clamp(Current / Duration, 0.0, 1.0);
}

// public void SeekProgress(double p) [instance] :2046
void PlayerPart::SeekProgress(double p)
{
    uStackFrame __("Fuse.Animations.PlayerPart", "SeekProgress(double)");
    p = ::g::Uno::Math::Clamp(p, 0.0, 1.0);
    Animate = false;

    if (Duration < 9.9999997473787516e-06)
    {
        IsProgress = true;
        Current = p;
    }
    else
    {
        IsProgress = false;
        Current = (p * Duration);
    }
}

// public void Step() [instance] :2004
void PlayerPart::Step()
{
    uStackFrame __("Fuse.Animations.PlayerPart", "Step()");
    _stepTime = ::g::Fuse::Time::FrameTime();
    double elapsed = (::g::Fuse::Time::FrameTime() - SourceTime) * _timeMultiplier;

    if (Target > Source)
        Current = (IsProgress ? 1.0 : ::g::Uno::Math::Min(elapsed + Source, Duration));
    else
        Current = (IsProgress ? 0.0 : ::g::Uno::Math::Max(Source - elapsed, 0.0));

    if (((Target >= Source) && (Current >= Target)) || ((Target <= Source) && (Current <= Target)))
    {
        Current = Target;
        Animate = false;
    }
}

// public double get_TimeMultiplier() [instance] :2083
double PlayerPart::TimeMultiplier()
{
    uStackFrame __("Fuse.Animations.PlayerPart", "get_TimeMultiplier()");
    return _timeMultiplier;
}

// public void WrapStep() [instance] :2025
void PlayerPart::WrapStep()
{
    uStackFrame __("Fuse.Animations.PlayerPart", "WrapStep()");

    if (IsProgress || ((Target > 0.0) && (Target < 1.0)))
    {
        Step();
        return;
    }

    _stepTime = ::g::Fuse::Time::FrameTime();
    double elapsed = (::g::Fuse::Time::FrameTime() - SourceTime) * _timeMultiplier;

    if (Target > Source)
        Current = ::g::Uno::Math::Mod(elapsed + Source, Duration);
    else
        Current = ::g::Uno::Math::Mod(Source - elapsed, Duration);
}

// public PlayerPart New([double currentProgress]) [static] :1949
PlayerPart* PlayerPart::New1(double currentProgress)
{
    PlayerPart* obj1 = (PlayerPart*)uNew(PlayerPart_typeof());
    obj1->ctor_(currentProgress);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public enum PlayMode :3622
uEnumType* PlayMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.PlayMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Once", 0LL,
        "Wrap", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// private delegate float4 SplineTrack.PointInterpolater(float4 p0, float4 p1, float4 m0, float4 m1, float t) :2768
uDelegateType* SplineTrack__PointInterpolater_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Animations.SplineTrack.PointInterpolater", 5, 0);
    type->SetSignature(::g::Uno::Float4_typeof(),
        ::g::Uno::Float4_typeof(),
        ::g::Uno::Float4_typeof(),
        ::g::Uno::Float4_typeof(),
        ::g::Uno::Float4_typeof(),
        ::g::Uno::Float_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public sealed class RangeAdapter<T> :2369
// {
static void RangeAdapter_build(uType* type)
{
    ::TYPES[7] = ::g::Fuse::Internal::BlenderMap_typeof();
    ::TYPES[4] = ::g::Uno::UX::IPropertyListener_typeof();
    type->SetPrecalc(
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(1, type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(RangeAdapter_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(RangeAdapter_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(RangeAdapter_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(RangeAdapter_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(RangeAdapter_type, interface4));
    type->SetFields(14,
        ::g::Fuse::Internal::ScalarBlender_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::RangeAdapter, _blender), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::RangeAdapter, _sourceRangeMax), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::RangeAdapter, _sourceRangeMin), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::RangeAdapter, _valueRangeMax), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::RangeAdapter, _valueRangeMin), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::RangeAdapter, _Source), 0);
    type->Reflection.SetFunctions(13,
        new uFunction(".ctor", type, (void*)RangeAdapter__New2_fn, 0, true, type, 1, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0))),
        new uFunction("SetValue", NULL, (void*)RangeAdapter__SetValue_fn, 0, false, uVoid_typeof(), 2, type->T(0), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_Source", NULL, (void*)RangeAdapter__get_Source_fn, 0, false, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), 0),
        new uFunction("get_SourceRangeMax", NULL, (void*)RangeAdapter__get_SourceRangeMax_fn, 0, false, type->T(0), 0),
        new uFunction("set_SourceRangeMax", NULL, (void*)RangeAdapter__set_SourceRangeMax_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_SourceRangeMin", NULL, (void*)RangeAdapter__get_SourceRangeMin_fn, 0, false, type->T(0), 0),
        new uFunction("set_SourceRangeMin", NULL, (void*)RangeAdapter__set_SourceRangeMin_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_Value", NULL, (void*)RangeAdapter__get_Value_fn, 0, false, type->T(0), 0),
        new uFunction("set_Value", NULL, (void*)RangeAdapter__set_Value_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_ValueRangeMax", NULL, (void*)RangeAdapter__get_ValueRangeMax_fn, 0, false, type->T(0), 0),
        new uFunction("set_ValueRangeMax", NULL, (void*)RangeAdapter__set_ValueRangeMax_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_ValueRangeMin", NULL, (void*)RangeAdapter__get_ValueRangeMin_fn, 0, false, type->T(0), 0),
        new uFunction("set_ValueRangeMin", NULL, (void*)RangeAdapter__set_ValueRangeMin_fn, 0, false, uVoid_typeof(), 1, type->T(0)));
}

RangeAdapter_type* RangeAdapter_typeof()
{
    static uSStrong<RangeAdapter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.GenericCount = 1;
    options.InterfaceCount = 5;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(RangeAdapter);
    options.TypeSize = sizeof(RangeAdapter_type);
    type = (RangeAdapter_type*)uClassType::New("Fuse.Animations.RangeAdapter`1", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_build_ = RangeAdapter_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))RangeAdapter__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))RangeAdapter__OnUnrooted_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))RangeAdapter__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public RangeAdapter(Uno.UX.Property<T> source) :2376
void RangeAdapter__ctor_3_fn(RangeAdapter* __this, ::g::Uno::UX::Property1* source)
{
    __this->ctor_3(source);
}

// private T In(T value) :2447
void RangeAdapter__In_fn(RangeAdapter* __this, void* value, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "In(T)");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double ret2;
    double dst = (uPtr(__this->_blender)->ToDouble_ex(value, &ret2), ret2);
    double rel = (dst - __this->_valueRangeMin) / (__this->_valueRangeMax - __this->_valueRangeMin);
    double src = (rel * (__this->_sourceRangeMax - __this->_sourceRangeMin)) + __this->_sourceRangeMin;
    return __retval.Store((uPtr(__this->_blender)->FromDouble_ex(uCRef(src), &ret3), ret3)), void();
}

// public RangeAdapter New(Uno.UX.Property<T> source) :2376
void RangeAdapter__New2_fn(uType* __type, ::g::Uno::UX::Property1* source, RangeAdapter** __retval)
{
    *__retval = RangeAdapter::New2(__type, source);
}

// protected override sealed void OnRooted() :2393
void RangeAdapter__OnRooted_fn(RangeAdapter* __this)
{
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    uPtr(__this->Source())->AddListener((uObject*)__this);
}

// protected override sealed void OnUnrooted() :2399
void RangeAdapter__OnUnrooted_fn(RangeAdapter* __this)
{
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "OnUnrooted()");
    uPtr(__this->Source())->RemoveListener((uObject*)__this);
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private T Out(T value) :2438
void RangeAdapter__Out_fn(RangeAdapter* __this, void* value, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "Out(T)");
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double ret4;
    double src = (uPtr(__this->_blender)->ToDouble_ex(value, &ret4), ret4);
    double rel = (src - __this->_sourceRangeMin) / (__this->_sourceRangeMax - __this->_sourceRangeMin);
    double dst = (rel * (__this->_valueRangeMax - __this->_valueRangeMin)) + __this->_valueRangeMin;
    return __retval.Store((uPtr(__this->_blender)->FromDouble_ex(uCRef(dst), &ret5), ret5)), void();
}

// public void SetValue(T value, Uno.UX.IPropertyListener origin) :2388
void RangeAdapter__SetValue_fn(RangeAdapter* __this, void* value, uObject* origin)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "SetValue(T,Uno.UX.IPropertyListener)");
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uPtr(__this->Source())->Set_ex((RangeAdapter__In_fn(__this, value, &ret6), ret6), origin);
}

// public generated Uno.UX.Property<T> get_Source() :2371
void RangeAdapter__get_Source_fn(RangeAdapter* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Uno.UX.Property<T> value) :2371
void RangeAdapter__set_Source_fn(RangeAdapter* __this, ::g::Uno::UX::Property1* value)
{
    __this->Source(value);
}

// public T get_SourceRangeMax() :2420
void RangeAdapter__get_SourceRangeMax_fn(RangeAdapter* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "get_SourceRangeMax()");
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((uPtr(__this->_blender)->FromDouble_ex(uCRef(__this->_sourceRangeMax), &ret7), ret7)), void();
}

// public void set_SourceRangeMax(T value) :2421
void RangeAdapter__set_SourceRangeMax_fn(RangeAdapter* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "set_SourceRangeMax(T)");
    double ret8;
    __this->_sourceRangeMax = (uPtr(__this->_blender)->ToDouble_ex(value, &ret8), ret8);
}

// public T get_SourceRangeMin() :2414
void RangeAdapter__get_SourceRangeMin_fn(RangeAdapter* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "get_SourceRangeMin()");
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((uPtr(__this->_blender)->FromDouble_ex(uCRef(__this->_sourceRangeMin), &ret9), ret9)), void();
}

// public void set_SourceRangeMin(T value) :2415
void RangeAdapter__set_SourceRangeMin_fn(RangeAdapter* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "set_SourceRangeMin(T)");
    double ret10;
    __this->_sourceRangeMin = (uPtr(__this->_blender)->ToDouble_ex(value, &ret10), ret10);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector sel) :2406
void RangeAdapter__UnoUXIPropertyListenerOnPropertyChanged_fn(RangeAdapter* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* sel)
{
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    __this->OnPropertyChanged(::g::Fuse::Animations::RangeAdapterHelpers::_valueName());
}

// public T get_Value() :2384
void RangeAdapter__get_Value_fn(RangeAdapter* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "get_Value()");
    uT ret11(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret12(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((RangeAdapter__Out_fn(__this, (uPtr(__this->Source())->Get_ex(&ret12), ret12), &ret11), ret11)), void();
}

// public void set_Value(T value) :2385
void RangeAdapter__set_Value_fn(RangeAdapter* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "set_Value(T)");
    RangeAdapter__SetValue_fn(__this, value, (uObject*)__this);
}

// public T get_ValueRangeMax() :2433
void RangeAdapter__get_ValueRangeMax_fn(RangeAdapter* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "get_ValueRangeMax()");
    uT ret13(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((uPtr(__this->_blender)->FromDouble_ex(uCRef(__this->_valueRangeMax), &ret13), ret13)), void();
}

// public void set_ValueRangeMax(T value) :2434
void RangeAdapter__set_ValueRangeMax_fn(RangeAdapter* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "set_ValueRangeMax(T)");
    double ret14;
    __this->_valueRangeMax = (uPtr(__this->_blender)->ToDouble_ex(value, &ret14), ret14);
}

// public T get_ValueRangeMin() :2427
void RangeAdapter__get_ValueRangeMin_fn(RangeAdapter* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "get_ValueRangeMin()");
    uT ret15(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((uPtr(__this->_blender)->FromDouble_ex(uCRef(__this->_valueRangeMin), &ret15), ret15)), void();
}

// public void set_ValueRangeMin(T value) :2428
void RangeAdapter__set_ValueRangeMin_fn(RangeAdapter* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "set_ValueRangeMin(T)");
    double ret16;
    __this->_valueRangeMin = (uPtr(__this->_blender)->ToDouble_ex(value, &ret16), ret16);
}

// public RangeAdapter(Uno.UX.Property<T> source) [instance] :2376
void RangeAdapter::ctor_3(::g::Uno::UX::Property1* source)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.BlenderMap.GetScalar<T>*/),
        __type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", ".ctor(Uno.UX.Property<T>)");
    _blender = ((::g::Fuse::Internal::ScalarBlender*)::g::Fuse::Internal::BlenderMap::GetScalar(__types[0]));
    _sourceRangeMin = 0.0;
    _sourceRangeMax = 1.0;
    _valueRangeMin = 0.0;
    _valueRangeMax = 1.0;
    ctor_2();
    Source(source);
}

// public generated Uno.UX.Property<T> get_Source() [instance] :2371
::g::Uno::UX::Property1* RangeAdapter::Source()
{
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "get_Source()");
    return _Source;
}

// private generated void set_Source(Uno.UX.Property<T> value) [instance] :2371
void RangeAdapter::Source(::g::Uno::UX::Property1* value)
{
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "set_Source(Uno.UX.Property<T>)");
    _Source = value;
}

// public RangeAdapter New(Uno.UX.Property<T> source) [static] :2376
RangeAdapter* RangeAdapter::New2(uType* __type, ::g::Uno::UX::Property1* source)
{
    RangeAdapter* obj1 = (RangeAdapter*)uNew(__type);
    obj1->ctor_3(source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal static class RangeAdapterHelpers :2358
// {
// static RangeAdapterHelpers() :2358
static void RangeAdapterHelpers__cctor__fn(uType* __type)
{
    RangeAdapterHelpers::_valueName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"Value"*/]);
}

static void RangeAdapterHelpers_build(uType* type)
{
    ::STRINGS[16] = uString::Const("Value");
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Animations::RangeAdapterHelpers::_valueName_, uFieldFlagsStatic);
}

uClassType* RangeAdapterHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Animations.RangeAdapterHelpers", options);
    type->fp_build_ = RangeAdapterHelpers_build;
    type->fp_cctor_ = RangeAdapterHelpers__cctor__fn;
    return type;
}

::g::Uno::UX::Selector RangeAdapterHelpers::_valueName_;
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public sealed class Resize :2476
// {
static void Resize_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Animations::AnimatorState_typeof();
    type->SetFields(19,
        ::g::Fuse::Animations::IResizeMode_typeof(), offsetof(::g::Fuse::Animations::Resize, _resizeMode), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::Resize, _RelativeNode), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::Resize, _Target), 0);
    type->Reflection.SetFunctions(13,
        new uFunction(".ctor", NULL, (void*)Resize__New2_fn, 0, true, Resize_typeof(), 0),
        new uFunction("get_RelativeNode", NULL, (void*)Resize__get_RelativeNode_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_RelativeNode", NULL, (void*)Resize__set_RelativeNode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_RelativeTo", NULL, (void*)Resize__get_RelativeTo_fn, 0, false, ::g::Fuse::Animations::IResizeMode_typeof(), 0),
        new uFunction("set_RelativeTo", NULL, (void*)Resize__set_RelativeTo_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::IResizeMode_typeof()),
        new uFunction("get_Target", NULL, (void*)Resize__get_Target_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)Resize__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_Vector", NULL, (void*)Resize__get_Vector_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Vector", NULL, (void*)Resize__set_Vector_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_X", NULL, (void*)Resize__get_X_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_X", NULL, (void*)Resize__set_X_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Y", NULL, (void*)Resize__get_Y_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Y", NULL, (void*)Resize__set_Y_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Animations::Animator_type* Resize_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 22;
    options.ObjectSize = sizeof(Resize);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Resize", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimator_typeof());
    type->fp_build_ = Resize_build;
    type->fp_ctor_ = (void*)Resize__New2_fn;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Resize__CreateState_fn;
    return type;
}

// public generated Resize() :2476
void Resize__ctor_3_fn(Resize* __this)
{
    __this->ctor_3();
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :2507
void Resize__CreateState_fn(Resize* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    uStackFrame __("Fuse.Animations.Resize", "CreateState(Fuse.Animations.CreateStateParams)");
    return *__retval = ::g::Fuse::Animations::ResizeAnimatorState::New1(__this, p), void();
}

// public generated Resize New() :2476
void Resize__New2_fn(Resize** __retval)
{
    *__retval = Resize::New2();
}

// public generated Fuse.Visual get_RelativeNode() :2480
void Resize__get_RelativeNode_fn(Resize* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->RelativeNode();
}

// public generated void set_RelativeNode(Fuse.Visual value) :2480
void Resize__set_RelativeNode_fn(Resize* __this, ::g::Fuse::Visual* value)
{
    __this->RelativeNode(value);
}

// public Fuse.Animations.IResizeMode get_RelativeTo() :2485
void Resize__get_RelativeTo_fn(Resize* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.Animations.IResizeMode value) :2486
void Resize__set_RelativeTo_fn(Resize* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// public generated Fuse.Visual get_Target() :2478
void Resize__get_Target_fn(Resize* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :2478
void Resize__set_Target_fn(Resize* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public float2 get_Vector() :2503
void Resize__get_Vector_fn(Resize* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Vector();
}

// public void set_Vector(float2 value) :2504
void Resize__set_Vector_fn(Resize* __this, ::g::Uno::Float2* value)
{
    __this->Vector(*value);
}

// public float get_X() :2491
void Resize__get_X_fn(Resize* __this, float* __retval)
{
    *__retval = __this->X();
}

// public void set_X(float value) :2492
void Resize__set_X_fn(Resize* __this, float* value)
{
    __this->X(*value);
}

// public float get_Y() :2497
void Resize__get_Y_fn(Resize* __this, float* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(float value) :2498
void Resize__set_Y_fn(Resize* __this, float* value)
{
    __this->Y(*value);
}

// public generated Resize() [instance] :2476
void Resize::ctor_3()
{
    uStackFrame __("Fuse.Animations.Resize", ".ctor()");
    ctor_2();
}

// public generated Fuse.Visual get_RelativeNode() [instance] :2480
::g::Fuse::Visual* Resize::RelativeNode()
{
    uStackFrame __("Fuse.Animations.Resize", "get_RelativeNode()");
    return _RelativeNode;
}

// public generated void set_RelativeNode(Fuse.Visual value) [instance] :2480
void Resize::RelativeNode(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Animations.Resize", "set_RelativeNode(Fuse.Visual)");
    _RelativeNode = value;
}

// public Fuse.Animations.IResizeMode get_RelativeTo() [instance] :2485
uObject* Resize::RelativeTo()
{
    uStackFrame __("Fuse.Animations.Resize", "get_RelativeTo()");
    return _resizeMode;
}

// public void set_RelativeTo(Fuse.Animations.IResizeMode value) [instance] :2486
void Resize::RelativeTo(uObject* value)
{
    uStackFrame __("Fuse.Animations.Resize", "set_RelativeTo(Fuse.Animations.IResizeMode)");
    _resizeMode = value;
}

// public generated Fuse.Visual get_Target() [instance] :2478
::g::Fuse::Visual* Resize::Target()
{
    uStackFrame __("Fuse.Animations.Resize", "get_Target()");
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :2478
void Resize::Target(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Animations.Resize", "set_Target(Fuse.Visual)");
    _Target = value;
}

// public float2 get_Vector() [instance] :2503
::g::Uno::Float2 Resize::Vector()
{
    uStackFrame __("Fuse.Animations.Resize", "get_Vector()");
    ::g::Uno::Float4 ind1 = _vectorValue;
    return ::g::Uno::Float2__New2(ind1.X, ind1.Y);
}

// public void set_Vector(float2 value) [instance] :2504
void Resize::Vector(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Animations.Resize", "set_Vector(float2)");
    ::g::Uno::Float4 ind2;
    _vectorValue = ::g::Uno::Float4__New7(value, (ind2 = _vectorValue, ::g::Uno::Float2__New2(ind2.Z, ind2.W)));
}

// public float get_X() [instance] :2491
float Resize::X()
{
    uStackFrame __("Fuse.Animations.Resize", "get_X()");
    return _vectorValue.X;
}

// public void set_X(float value) [instance] :2492
void Resize::X(float value)
{
    uStackFrame __("Fuse.Animations.Resize", "set_X(float)");
    _vectorValue.X = value;
}

// public float get_Y() [instance] :2497
float Resize::Y()
{
    uStackFrame __("Fuse.Animations.Resize", "get_Y()");
    return _vectorValue.Y;
}

// public void set_Y(float value) [instance] :2498
void Resize::Y(float value)
{
    uStackFrame __("Fuse.Animations.Resize", "set_Y(float)");
    _vectorValue.Y = value;
}

// public generated Resize New() [static] :2476
Resize* Resize::New2()
{
    Resize* obj3 = (Resize*)uNew(Resize_typeof());
    obj3->ctor_3();
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class ResizeAnimatorState :2513
// {
static void ResizeAnimatorState_build(uType* type)
{
    ::STRINGS[17] = uString::Const("Resize started without a Target node");
    ::STRINGS[2] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno");
    ::STRINGS[18] = uString::Const(".ctor");
    ::STRINGS[19] = uString::Const("Resize started without as RelativeTo");
    ::TYPES[18] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[46] = ::g::Fuse::Animations::IResize_typeof();
    ::TYPES[6] = uObject_typeof();
    ::TYPES[8] = ::g::Uno::Int_typeof();
    ::TYPES[47] = ::g::Fuse::ITransformMode_typeof();
    ::TYPES[48] = ::g::Fuse::IActualPlacement_typeof();
    ::TYPES[49] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[50] = ::g::Fuse::Animations::IResizeMode_typeof();
    type->SetFields(6,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _lastStrength), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _lastValue), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _relativeNode), 0,
        ::g::Fuse::Animations::IResizeMode_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _relativeTo), 0,
        ::g::Fuse::Animations::Resize_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _resize), 0,
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _target), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _valid), 0);
}

::g::Fuse::Animations::TrackAnimatorState_type* ResizeAnimatorState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.ObjectSize = sizeof(ResizeAnimatorState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.ResizeAnimatorState", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimatorState_typeof());
    type->fp_build_ = ResizeAnimatorState_build;
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))ResizeAnimatorState__Disable_fn;
    type->fp_SeekValue = (void(*)(::g::Fuse::Animations::TrackAnimatorState*, ::g::Uno::Float4*, float*))ResizeAnimatorState__SeekValue_fn;
    return type;
}

// public ResizeAnimatorState(Fuse.Animations.Resize r, Fuse.Animations.CreateStateParams p) :2521
void ResizeAnimatorState__ctor_2_fn(ResizeAnimatorState* __this, ::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(r, p);
}

// public override sealed void Disable() :2555
void ResizeAnimatorState__Disable_fn(ResizeAnimatorState* __this)
{
    uStackFrame __("Fuse.Animations.ResizeAnimatorState", "Disable()");
    ::g::Fuse::Animations::AnimatorState__Disable_fn(__this);

    if (!__this->_valid)
        return;

    uObject* e = uAs<uObject*>(__this->_target, ::TYPES[48/*Fuse.IActualPlacement*/]);

    if (e != NULL)
        ::g::Fuse::IActualPlacement::remove_Placed(uInterface(uPtr(e), ::TYPES[48/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[49/*Fuse.PlacedHandler*/], (void*)ResizeAnimatorState__OnPlaced_fn, __this));

    if ((::g::Fuse::ITransformMode::Flags(uInterface(uPtr(__this->_relativeTo), ::TYPES[47/*Fuse.ITransformMode*/])) & 1) == 1)
    {
        uObject* elm = uAs<uObject*>(__this->_relativeNode, ::TYPES[48/*Fuse.IActualPlacement*/]);

        if (elm != NULL)
            ::g::Fuse::IActualPlacement::remove_Placed(uInterface(uPtr(elm), ::TYPES[48/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[49/*Fuse.PlacedHandler*/], (void*)ResizeAnimatorState__OnPlaced_fn, __this));
    }
}

// public ResizeAnimatorState New(Fuse.Animations.Resize r, Fuse.Animations.CreateStateParams p) :2521
void ResizeAnimatorState__New1_fn(::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p, ResizeAnimatorState** __retval)
{
    *__retval = ResizeAnimatorState::New1(r, p);
}

// private void OnPlaced(object s, object a) :2597
void ResizeAnimatorState__OnPlaced_fn(ResizeAnimatorState* __this, uObject* s, uObject* a)
{
    __this->OnPlaced(s, a);
}

// protected override sealed void SeekValue(float4 value, float strength) :2575
void ResizeAnimatorState__SeekValue_fn(ResizeAnimatorState* __this, ::g::Uno::Float4* value, float* strength)
{
    uStackFrame __("Fuse.Animations.ResizeAnimatorState", "SeekValue(float4,float)");
    float strength_ = *strength;
    ::g::Uno::Float4 value_ = *value;
    __this->_lastStrength = strength_;
    __this->_lastValue = value_;
    __this->Update(value_, strength_);
}

// private void Update(float4 value, float strength) :2582
void ResizeAnimatorState__Update_fn(ResizeAnimatorState* __this, ::g::Uno::Float4* value, float* strength)
{
    __this->Update(*value, *strength);
}

// public ResizeAnimatorState(Fuse.Animations.Resize r, Fuse.Animations.CreateStateParams p) [instance] :2521
void ResizeAnimatorState::ctor_2(::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p)
{
    uStackFrame __("Fuse.Animations.ResizeAnimatorState", ".ctor(Fuse.Animations.Resize,Fuse.Animations.CreateStateParams)");
    ::g::Fuse::Visual* ind1;
    _valid = true;
    ctor_1(r, p, uPtr(r)->Target());
    _resize = r;
    _target = uAs<uObject*>(Visual, ::TYPES[46/*Fuse.Animations.IResize*/]);

    if (_target == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[17/*"Resize star...*/], r, ::STRINGS[2/*"/usr/local/...*/], 2527, ::STRINGS[18/*".ctor"*/]);
        _valid = false;
        return;
    }

    _relativeTo = r->RelativeTo();

    if (_relativeTo == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[19/*"Resize star...*/], r, ::STRINGS[2/*"/usr/local/...*/], 2535, ::STRINGS[18/*".ctor"*/]);
        _valid = false;
        return;
    }

    _relativeNode = (ind1 = uPtr(_resize)->RelativeNode(), ((ind1 != NULL) ? ind1 : (::g::Fuse::Visual*)Visual));

    if ((::g::Fuse::ITransformMode::Flags(uInterface(uPtr(_relativeTo), ::TYPES[47/*Fuse.ITransformMode*/])) & 1) == 1)
    {
        uObject* elm = uAs<uObject*>(_relativeNode, ::TYPES[48/*Fuse.IActualPlacement*/]);

        if (elm != NULL)
            ::g::Fuse::IActualPlacement::add_Placed(uInterface(uPtr(elm), ::TYPES[48/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[49/*Fuse.PlacedHandler*/], (void*)ResizeAnimatorState__OnPlaced_fn, this));
    }

    uObject* e = uAs<uObject*>(_target, ::TYPES[48/*Fuse.IActualPlacement*/]);

    if (e != NULL)
        ::g::Fuse::IActualPlacement::add_Placed(uInterface(uPtr(e), ::TYPES[48/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[49/*Fuse.PlacedHandler*/], (void*)ResizeAnimatorState__OnPlaced_fn, this));
}

// private void OnPlaced(object s, object a) [instance] :2597
void ResizeAnimatorState::OnPlaced(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Animations.ResizeAnimatorState", "OnPlaced(object,object)");
    Update(_lastValue, _lastStrength);
}

// private void Update(float4 value, float strength) [instance] :2582
void ResizeAnimatorState::Update(::g::Uno::Float4 value, float strength)
{
    uStackFrame __("Fuse.Animations.ResizeAnimatorState", "Update(float4,float)");

    if (!_valid)
        return;

    ::g::Uno::Float2 baseSize;
    ::g::Uno::Float2 deltaSize;

    if (::g::Fuse::Animations::IResizeMode::GetSizeChange(uInterface(uPtr(_relativeTo), ::TYPES[50/*Fuse.Animations.IResizeMode*/]), Visual, _relativeNode, &baseSize, &deltaSize))
    {
        ::g::Uno::Float2 sz = ::g::Uno::Float2__op_Addition2(baseSize, ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Multiply2(deltaSize, ::g::Uno::Float2__New2(value.X, value.Y)), strength));
        ::g::Fuse::Animations::IResize::SetSize(uInterface(uPtr(_target), ::TYPES[46/*Fuse.Animations.IResize*/]), sz);
    }
}

// public ResizeAnimatorState New(Fuse.Animations.Resize r, Fuse.Animations.CreateStateParams p) [static] :2521
ResizeAnimatorState* ResizeAnimatorState::New1(::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p)
{
    ResizeAnimatorState* obj2 = (ResizeAnimatorState*)uNew(ResizeAnimatorState_typeof());
    obj2->ctor_2(r, p);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public sealed class Rotate :3496
// {
static void Rotate_build(uType* type)
{
    type->SetFields(22);
    type->Reflection.SetFunctions(9,
        new uFunction("get_Degrees", NULL, (void*)Rotate__get_Degrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Degrees", NULL, (void*)Rotate__set_Degrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesX", NULL, (void*)Rotate__get_DegreesX_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesX", NULL, (void*)Rotate__set_DegreesX_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesY", NULL, (void*)Rotate__get_DegreesY_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesY", NULL, (void*)Rotate__set_DegreesY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesZ", NULL, (void*)Rotate__get_DegreesZ_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesZ", NULL, (void*)Rotate__set_DegreesZ_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Rotate__New2_fn, 0, true, Rotate_typeof(), 0));
}

::g::Fuse::Animations::TransformAnimator_type* Rotate_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 22;
    options.ObjectSize = sizeof(Rotate);
    options.TypeSize = sizeof(::g::Fuse::Animations::TransformAnimator_type);
    type = (::g::Fuse::Animations::TransformAnimator_type*)uClassType::New("Fuse.Animations.Rotate", options);
    type->SetBase(::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Rotation_typeof()));
    type->fp_build_ = Rotate_build;
    type->fp_ctor_ = (void*)Rotate__New2_fn;
    type->fp_Update = (void(*)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Visual*, ::g::Fuse::Transform*, ::g::Uno::Float4*))Rotate__Update_fn;
    return type;
}

// public Rotate() :3498
void Rotate__ctor_4_fn(Rotate* __this)
{
    __this->ctor_4();
}

// public float get_Degrees() :3505
void Rotate__get_Degrees_fn(Rotate* __this, float* __retval)
{
    *__retval = __this->Degrees();
}

// public void set_Degrees(float value) :3506
void Rotate__set_Degrees_fn(Rotate* __this, float* value)
{
    __this->Degrees(*value);
}

// public float get_DegreesX() :3511
void Rotate__get_DegreesX_fn(Rotate* __this, float* __retval)
{
    *__retval = __this->DegreesX();
}

// public void set_DegreesX(float value) :3512
void Rotate__set_DegreesX_fn(Rotate* __this, float* value)
{
    __this->DegreesX(*value);
}

// public float get_DegreesY() :3517
void Rotate__get_DegreesY_fn(Rotate* __this, float* __retval)
{
    *__retval = __this->DegreesY();
}

// public void set_DegreesY(float value) :3518
void Rotate__set_DegreesY_fn(Rotate* __this, float* value)
{
    __this->DegreesY(*value);
}

// public float get_DegreesZ() :3523
void Rotate__get_DegreesZ_fn(Rotate* __this, float* __retval)
{
    *__retval = __this->DegreesZ();
}

// public void set_DegreesZ(float value) :3524
void Rotate__set_DegreesZ_fn(Rotate* __this, float* value)
{
    __this->DegreesZ(*value);
}

// public Rotate New() :3498
void Rotate__New2_fn(Rotate** __retval)
{
    *__retval = Rotate::New2();
}

// internal override sealed void Update(Fuse.Visual elm, Fuse.Rotation t, float4 value) :3527
void Rotate__Update_fn(Rotate* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Rotation* t, ::g::Uno::Float4* value)
{
    uStackFrame __("Fuse.Animations.Rotate", "Update(Fuse.Visual,Fuse.Rotation,float4)");
    ::g::Uno::Float4 value_ = *value;
    uPtr(t)->EulerAngle(::g::Uno::Float3__New2(value_.X, value_.Y, value_.Z));
}

// public Rotate() [instance] :3498
void Rotate::ctor_4()
{
    uStackFrame __("Fuse.Animations.Rotate", ".ctor()");
    ctor_3();
    Priority(3000);
}

// public float get_Degrees() [instance] :3505
float Rotate::Degrees()
{
    uStackFrame __("Fuse.Animations.Rotate", "get_Degrees()");
    return DegreesZ();
}

// public void set_Degrees(float value) [instance] :3506
void Rotate::Degrees(float value)
{
    uStackFrame __("Fuse.Animations.Rotate", "set_Degrees(float)");
    DegreesZ(value);
}

// public float get_DegreesX() [instance] :3511
float Rotate::DegreesX()
{
    uStackFrame __("Fuse.Animations.Rotate", "get_DegreesX()");
    return ::g::Uno::Math::RadiansToDegrees1(X());
}

// public void set_DegreesX(float value) [instance] :3512
void Rotate::DegreesX(float value)
{
    uStackFrame __("Fuse.Animations.Rotate", "set_DegreesX(float)");
    X(::g::Uno::Math::DegreesToRadians1(value));
}

// public float get_DegreesY() [instance] :3517
float Rotate::DegreesY()
{
    uStackFrame __("Fuse.Animations.Rotate", "get_DegreesY()");
    return ::g::Uno::Math::RadiansToDegrees1(Y());
}

// public void set_DegreesY(float value) [instance] :3518
void Rotate::DegreesY(float value)
{
    uStackFrame __("Fuse.Animations.Rotate", "set_DegreesY(float)");
    Y(::g::Uno::Math::DegreesToRadians1(value));
}

// public float get_DegreesZ() [instance] :3523
float Rotate::DegreesZ()
{
    uStackFrame __("Fuse.Animations.Rotate", "get_DegreesZ()");
    return ::g::Uno::Math::RadiansToDegrees1(Z());
}

// public void set_DegreesZ(float value) [instance] :3524
void Rotate::DegreesZ(float value)
{
    uStackFrame __("Fuse.Animations.Rotate", "set_DegreesZ(float)");
    Z(::g::Uno::Math::DegreesToRadians1(value));
}

// public Rotate New() [static] :3498
Rotate* Rotate::New2()
{
    Rotate* obj1 = (Rotate*)uNew(Rotate_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public sealed class Scale :3536
// {
static void Scale_build(uType* type)
{
    type->SetFields(22,
        ::g::Fuse::IScalingMode_typeof(), offsetof(::g::Fuse::Animations::Scale, _relativeTo), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Factor", NULL, (void*)Scale__get_Factor_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Factor", NULL, (void*)Scale__set_Factor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Scale__New2_fn, 0, true, Scale_typeof(), 0),
        new uFunction("get_RelativeTo", NULL, (void*)Scale__get_RelativeTo_fn, 0, false, ::g::Fuse::IScalingMode_typeof(), 0),
        new uFunction("set_RelativeTo", NULL, (void*)Scale__set_RelativeTo_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::IScalingMode_typeof()));
}

::g::Fuse::Animations::TransformAnimator_type* Scale_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 23;
    options.ObjectSize = sizeof(Scale);
    options.TypeSize = sizeof(::g::Fuse::Animations::TransformAnimator_type);
    type = (::g::Fuse::Animations::TransformAnimator_type*)uClassType::New("Fuse.Animations.Scale", options);
    type->SetBase(::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Scaling_typeof()));
    type->fp_build_ = Scale_build;
    type->fp_ctor_ = (void*)Scale__New2_fn;
    type->fp_Update = (void(*)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Visual*, ::g::Fuse::Transform*, ::g::Uno::Float4*))Scale__Update_fn;
    return type;
}

// public Scale() :3545
void Scale__ctor_4_fn(Scale* __this)
{
    __this->ctor_4();
}

// public float get_Factor() :3553
void Scale__get_Factor_fn(Scale* __this, float* __retval)
{
    *__retval = __this->Factor();
}

// public void set_Factor(float value) :3554
void Scale__set_Factor_fn(Scale* __this, float* value)
{
    __this->Factor(*value);
}

// public Scale New() :3545
void Scale__New2_fn(Scale** __retval)
{
    *__retval = Scale::New2();
}

// public Fuse.IScalingMode get_RelativeTo() :3541
void Scale__get_RelativeTo_fn(Scale* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.IScalingMode value) :3542
void Scale__set_RelativeTo_fn(Scale* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// internal override sealed void Update(Fuse.Visual elm, Fuse.Scaling t, float4 value) :3557
void Scale__Update_fn(Scale* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Scaling* t, ::g::Uno::Float4* value)
{
    uStackFrame __("Fuse.Animations.Scale", "Update(Fuse.Visual,Fuse.Scaling,float4)");
    ::g::Uno::Float4 value_ = *value;
    uPtr(t)->RelativeTo(__this->RelativeTo());
    t->Vector(::g::Uno::Float3__New2(value_.X, value_.Y, value_.Z));
}

// public Scale() [instance] :3545
void Scale::ctor_4()
{
    uStackFrame __("Fuse.Animations.Scale", ".ctor()");
    _relativeTo = ::g::Fuse::ScalingModes::Identity();
    ctor_3();
    Priority(2000);
    _vectorValue = ::g::Uno::Float4__New1(1.0f);
}

// public float get_Factor() [instance] :3553
float Scale::Factor()
{
    uStackFrame __("Fuse.Animations.Scale", "get_Factor()");
    return X();
}

// public void set_Factor(float value) [instance] :3554
void Scale::Factor(float value)
{
    uStackFrame __("Fuse.Animations.Scale", "set_Factor(float)");
    _vectorValue = ::g::Uno::Float4__New1(value);
}

// public Fuse.IScalingMode get_RelativeTo() [instance] :3541
uObject* Scale::RelativeTo()
{
    uStackFrame __("Fuse.Animations.Scale", "get_RelativeTo()");
    return _relativeTo;
}

// public void set_RelativeTo(Fuse.IScalingMode value) [instance] :3542
void Scale::RelativeTo(uObject* value)
{
    uStackFrame __("Fuse.Animations.Scale", "set_RelativeTo(Fuse.IScalingMode)");
    _relativeTo = value;
}

// public Scale New() [static] :3545
Scale* Scale::New2()
{
    Scale* obj1 = (Scale*)uNew(Scale_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal enum SeekDirection :89
uEnumType* SeekDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.SeekDirection", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public enum TriggerAnimationState.SeekFlags :4039
uEnumType* TriggerAnimationState__SeekFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.TriggerAnimationState.SeekFlags", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "ForcePlayer", 1LL,
        "BypassUpdate", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal enum SeekResult :96
uEnumType* SeekResult_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.SeekResult", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Complete", 1LL,
        "Stable", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public sealed class Skew :3567
// {
static void Skew_build(uType* type)
{
    type->SetFields(22);
    type->Reflection.SetFunctions(9,
        new uFunction("get_DegreesX", NULL, (void*)Skew__get_DegreesX_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesX", NULL, (void*)Skew__set_DegreesX_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesXY", NULL, (void*)Skew__get_DegreesXY_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_DegreesXY", NULL, (void*)Skew__set_DegreesXY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_DegreesY", NULL, (void*)Skew__get_DegreesY_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesY", NULL, (void*)Skew__set_DegreesY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Skew__New2_fn, 0, true, Skew_typeof(), 0),
        new uFunction("get_XY", NULL, (void*)Skew__get_XY_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_XY", NULL, (void*)Skew__set_XY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()));
}

::g::Fuse::Animations::TransformAnimator_type* Skew_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 22;
    options.ObjectSize = sizeof(Skew);
    options.TypeSize = sizeof(::g::Fuse::Animations::TransformAnimator_type);
    type = (::g::Fuse::Animations::TransformAnimator_type*)uClassType::New("Fuse.Animations.Skew", options);
    type->SetBase(::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Shear_typeof()));
    type->fp_build_ = Skew_build;
    type->fp_ctor_ = (void*)Skew__New2_fn;
    type->fp_Update = (void(*)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Visual*, ::g::Fuse::Transform*, ::g::Uno::Float4*))Skew__Update_fn;
    return type;
}

// public Skew() :3569
void Skew__ctor_4_fn(Skew* __this)
{
    __this->ctor_4();
}

// public float get_DegreesX() :3581
void Skew__get_DegreesX_fn(Skew* __this, float* __retval)
{
    *__retval = __this->DegreesX();
}

// public void set_DegreesX(float value) :3582
void Skew__set_DegreesX_fn(Skew* __this, float* value)
{
    __this->DegreesX(*value);
}

// public float2 get_DegreesXY() :3599
void Skew__get_DegreesXY_fn(Skew* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->DegreesXY();
}

// public void set_DegreesXY(float2 value) :3600
void Skew__set_DegreesXY_fn(Skew* __this, ::g::Uno::Float2* value)
{
    __this->DegreesXY(*value);
}

// public float get_DegreesY() :3587
void Skew__get_DegreesY_fn(Skew* __this, float* __retval)
{
    *__retval = __this->DegreesY();
}

// public void set_DegreesY(float value) :3588
void Skew__set_DegreesY_fn(Skew* __this, float* value)
{
    __this->DegreesY(*value);
}

// public Skew New() :3569
void Skew__New2_fn(Skew** __retval)
{
    *__retval = Skew::New2();
}

// internal override sealed void Update(Fuse.Visual elm, Fuse.Shear t, float4 value) :3574
void Skew__Update_fn(Skew* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Shear* t, ::g::Uno::Float4* value)
{
    uStackFrame __("Fuse.Animations.Skew", "Update(Fuse.Visual,Fuse.Shear,float4)");
    ::g::Uno::Float4 value_ = *value;
    uPtr(t)->Vector(::g::Uno::Float2__New2(value_.X, value_.Y));
}

// public float2 get_XY() :3593
void Skew__get_XY_fn(Skew* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->XY();
}

// public void set_XY(float2 value) :3594
void Skew__set_XY_fn(Skew* __this, ::g::Uno::Float2* value)
{
    __this->XY(*value);
}

// public Skew() [instance] :3569
void Skew::ctor_4()
{
    uStackFrame __("Fuse.Animations.Skew", ".ctor()");
    ctor_3();
    Priority(4000);
}

// public float get_DegreesX() [instance] :3581
float Skew::DegreesX()
{
    uStackFrame __("Fuse.Animations.Skew", "get_DegreesX()");
    return ::g::Uno::Math::RadiansToDegrees1(X());
}

// public void set_DegreesX(float value) [instance] :3582
void Skew::DegreesX(float value)
{
    uStackFrame __("Fuse.Animations.Skew", "set_DegreesX(float)");
    X(::g::Uno::Math::DegreesToRadians1(value));
}

// public float2 get_DegreesXY() [instance] :3599
::g::Uno::Float2 Skew::DegreesXY()
{
    uStackFrame __("Fuse.Animations.Skew", "get_DegreesXY()");
    return ::g::Uno::Float2__New2(::g::Uno::Math::RadiansToDegrees1(X()), ::g::Uno::Math::RadiansToDegrees1(Y()));
}

// public void set_DegreesXY(float2 value) [instance] :3600
void Skew::DegreesXY(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Animations.Skew", "set_DegreesXY(float2)");
    XY(::g::Uno::Float2__New2(::g::Uno::Math::DegreesToRadians1(value.X), ::g::Uno::Math::DegreesToRadians1(value.Y)));
}

// public float get_DegreesY() [instance] :3587
float Skew::DegreesY()
{
    uStackFrame __("Fuse.Animations.Skew", "get_DegreesY()");
    return ::g::Uno::Math::RadiansToDegrees1(Y());
}

// public void set_DegreesY(float value) [instance] :3588
void Skew::DegreesY(float value)
{
    uStackFrame __("Fuse.Animations.Skew", "set_DegreesY(float)");
    Y(::g::Uno::Math::DegreesToRadians1(value));
}

// public float2 get_XY() [instance] :3593
::g::Uno::Float2 Skew::XY()
{
    uStackFrame __("Fuse.Animations.Skew", "get_XY()");
    ::g::Uno::Float4 ind1 = _vectorValue;
    return ::g::Uno::Float2__New2(ind1.X, ind1.Y);
}

// public void set_XY(float2 value) [instance] :3594
void Skew::XY(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Animations.Skew", "set_XY(float2)");
    _vectorValue = ::g::Uno::Float4__New6(value, _vectorValue.Z, _vectorValue.W);
}

// public Skew New() [static] :3569
Skew* Skew::New2()
{
    Skew* obj2 = (Skew*)uNew(Skew_typeof());
    obj2->ctor_4();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public sealed class Spin :2613
// {
static void Spin_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Animations::AnimatorState_typeof();
    type->SetFields(6,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::Spin, _hertz), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::Spin, _Target), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Frequency", NULL, (void*)Spin__get_Frequency_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Frequency", NULL, (void*)Spin__set_Frequency_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction(".ctor", NULL, (void*)Spin__New2_fn, 0, true, Spin_typeof(), 0),
        new uFunction("get_Target", NULL, (void*)Spin__get_Target_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)Spin__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()));
}

::g::Fuse::Animations::Animator_type* Spin_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Spin);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Spin", options);
    type->SetBase(::g::Fuse::Animations::OpenAnimator_typeof());
    type->fp_build_ = Spin_build;
    type->fp_ctor_ = (void*)Spin__New2_fn;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Spin__CreateState_fn;
    return type;
}

// public Spin() :2615
void Spin__ctor_3_fn(Spin* __this)
{
    __this->ctor_3();
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :2629
void Spin__CreateState_fn(Spin* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    uStackFrame __("Fuse.Animations.Spin", "CreateState(Fuse.Animations.CreateStateParams)");
    return *__retval = ::g::Fuse::Animations::SpinState::New1(__this, p), void();
}

// public double get_Frequency() :2625
void Spin__get_Frequency_fn(Spin* __this, double* __retval)
{
    *__retval = __this->Frequency();
}

// public void set_Frequency(double value) :2626
void Spin__set_Frequency_fn(Spin* __this, double* value)
{
    __this->Frequency(*value);
}

// public Spin New() :2615
void Spin__New2_fn(Spin** __retval)
{
    *__retval = Spin::New2();
}

// public generated Fuse.Visual get_Target() :2620
void Spin__get_Target_fn(Spin* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :2620
void Spin__set_Target_fn(Spin* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public Spin() [instance] :2615
void Spin::ctor_3()
{
    uStackFrame __("Fuse.Animations.Spin", ".ctor()");
    _hertz = 1.0;
    ctor_2();
    MixOp(1);
}

// public double get_Frequency() [instance] :2625
double Spin::Frequency()
{
    uStackFrame __("Fuse.Animations.Spin", "get_Frequency()");
    return _hertz;
}

// public void set_Frequency(double value) [instance] :2626
void Spin::Frequency(double value)
{
    uStackFrame __("Fuse.Animations.Spin", "set_Frequency(double)");
    _hertz = value;
}

// public generated Fuse.Visual get_Target() [instance] :2620
::g::Fuse::Visual* Spin::Target()
{
    uStackFrame __("Fuse.Animations.Spin", "get_Target()");
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :2620
void Spin::Target(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Animations.Spin", "set_Target(Fuse.Visual)");
    _Target = value;
}

// public Spin New() [static] :2615
Spin* Spin::New2()
{
    Spin* obj1 = (Spin*)uNew(Spin_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class SpinState :2636
// {
static void SpinState_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Invalid seek");
    ::STRINGS[2] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno");
    ::TYPES[23] = ::g::Fuse::Animations::OpenAnimator_typeof();
    ::TYPES[19] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[40] = ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[35] = ::g::Fuse::Transform_typeof();
    type->SetFields(5,
        ::g::Fuse::Animations::Spin_typeof(), offsetof(::g::Fuse::Animations::SpinState, Animator1), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::SpinState, degrees), 0,
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof()), offsetof(::g::Fuse::Animations::SpinState, mixHandle), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(::g::Fuse::Animations::SpinState, transform), 0);
}

::g::Fuse::Animations::OpenAnimatorState_type* SpinState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::OpenAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(SpinState);
    options.TypeSize = sizeof(::g::Fuse::Animations::OpenAnimatorState_type);
    type = (::g::Fuse::Animations::OpenAnimatorState_type*)uClassType::New("Fuse.Animations.SpinState", options);
    type->SetBase(::g::Fuse::Animations::OpenAnimatorState_typeof());
    type->fp_build_ = SpinState_build;
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))SpinState__Disable_fn;
    type->fp_Seek = (void(*)(::g::Fuse::Animations::OpenAnimatorState*, bool*, float*, float*, int*, bool*))SpinState__Seek_fn;
    return type;
}

// public SpinState(Fuse.Animations.Spin animator, Fuse.Animations.CreateStateParams p) :2642
void SpinState__ctor_2_fn(SpinState* __this, ::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :2651
void SpinState__Disable_fn(SpinState* __this)
{
    uStackFrame __("Fuse.Animations.SpinState", "Disable()");

    if (__this->mixHandle == NULL)
        return;

    __this->degrees = 0.0;
    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), ::TYPES[40/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]));
    __this->mixHandle = NULL;
}

// public SpinState New(Fuse.Animations.Spin animator, Fuse.Animations.CreateStateParams p) :2642
void SpinState__New1_fn(::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p, SpinState** __retval)
{
    *__retval = SpinState::New1(animator, p);
}

// protected override sealed bool Seek(bool on, float interval, float strength, Fuse.Animations.SeekDirection dir) :2661
void SpinState__Seek_fn(SpinState* __this, bool* on, float* interval, float* strength, int* dir, bool* __retval)
{
    uStackFrame __("Fuse.Animations.SpinState", "Seek(bool,float,float,Fuse.Animations.SeekDirection)");
    float interval_ = *interval;
    bool on_ = *on;
    float strength_ = *strength;

    if ((__this->mixHandle == NULL) || (__this->transform == NULL))
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[7/*"Invalid seek"*/], 1, ::STRINGS[2/*"/usr/local/...*/], 2665);
        return *__retval = true, void();
    }

    bool done = false;
    double oldDegrees = __this->degrees;
    __this->degrees = (__this->degrees + ((double)(interval_ * 360.0f) * uPtr(__this->Animator1)->Frequency()));

    if (on_)
        __this->degrees = ::g::Uno::Math::Mod(__this->degrees, 360.0);
    else if ((((oldDegrees <= 9.9999997473787516e-06) || (__this->degrees <= 9.9999997473787516e-06)) || (oldDegrees >= 360.0)) || (__this->degrees >= 360.0))
    {
        __this->degrees = 0.0;
        done = true;
    }

    uPtr(__this->transform)->Degrees((float)__this->degrees);
    ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), ::TYPES[40/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]), __this->transform, uCRef(strength_));
    return *__retval = done, void();
}

// public SpinState(Fuse.Animations.Spin animator, Fuse.Animations.CreateStateParams p) [instance] :2642
void SpinState::ctor_2(::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uStackFrame __("Fuse.Animations.SpinState", ".ctor(Fuse.Animations.Spin,Fuse.Animations.CreateStateParams)");
    transform = ::g::Fuse::Rotation::New2();
    ctor_1(animator, p, uPtr(animator)->Target());
    Animator1 = animator;
    mixHandle = ::g::Fuse::Animations::IMixer::RegisterTransform(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[19/*Fuse.Animations.IMixer*/]), Visual, uPtr(Animator1)->MixOp(), 3000);
}

// public SpinState New(Fuse.Animations.Spin animator, Fuse.Animations.CreateStateParams p) [static] :2642
SpinState* SpinState::New1(::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    SpinState* obj1 = (SpinState*)uNew(SpinState_typeof());
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class SplineTrack :2717
// {
static void SplineTrack_build(uType* type)
{
    ::TYPES[24] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::Keyframe_typeof());
    ::TYPES[51] = SplineTrack__PointInterpolater_typeof();
    ::TYPES[30] = ::g::Fuse::Animations::ContinuousTrackProvider_typeof();
    ::TYPES[26] = ::g::Fuse::Animations::SeekResult_typeof();
    ::TYPES[8] = ::g::Uno::Int_typeof();
    ::TYPES[27] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Animations::Keyframe_typeof());
    type->SetInterfaces(
        ::g::Fuse::Animations::ContinuousTrackProvider_typeof(), offsetof(SplineTrack_type, interface0),
        ::g::Fuse::Animations::ITrackProvider_typeof(), offsetof(SplineTrack_type, interface1),
        ::g::Fuse::Animations::KeyframeTrack_typeof(), offsetof(SplineTrack_type, interface2),
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(SplineTrack_type, interface3));
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::SplineTrack, _bias), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::SplineTrack, _continuity), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::SplineTrack, _duration), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::Keyframe_typeof()), offsetof(::g::Fuse::Animations::SplineTrack, _frames), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::SplineTrack, _init), 0,
        SplineTrack__PointInterpolater_typeof(), offsetof(::g::Fuse::Animations::SplineTrack, _pointInterpolater), 0,
        ::g::Fuse::Animations::KeyframeInterpolation_typeof(), offsetof(::g::Fuse::Animations::SplineTrack, _style), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::SplineTrack, _tension), 0);
}

SplineTrack_type* SplineTrack_typeof()
{
    static uSStrong<SplineTrack_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(SplineTrack);
    options.TypeSize = sizeof(SplineTrack_type);
    type = (SplineTrack_type*)uClassType::New("Fuse.Animations.SplineTrack", options);
    type->fp_build_ = SplineTrack_build;
    type->fp_ctor_ = (void*)SplineTrack__New1_fn;
    type->interface3.fp_GetDuration = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*, double*))SplineTrack__FuseAnimationsTrackProviderGetDuration_fn;
    type->interface3.fp_GetAnimatorVariant = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*))SplineTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn;
    type->interface0.fp_GetSeekProgress = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, ::g::Uno::Float4*, double*, int*))SplineTrack__FuseAnimationsContinuousTrackProviderGetSeekProgress_fn;
    type->interface0.fp_GetSeekTime = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, ::g::Uno::Float4*, double*, int*))SplineTrack__FuseAnimationsContinuousTrackProviderGetSeekTime_fn;
    type->interface2.fp_get_Keyframes = (void(*)(uObject*, uObject**))SplineTrack__get_Keyframes_fn;
    type->interface2.fp_get_Interpolation = (void(*)(uObject*, int*))SplineTrack__get_Interpolation_fn;
    type->interface2.fp_set_Interpolation = (void(*)(uObject*, int*))SplineTrack__set_Interpolation_fn;
    return type;
}

// public generated SplineTrack() :2717
void SplineTrack__ctor__fn(SplineTrack* __this)
{
    __this->ctor_();
}

// public float get_Bias() :2746
void SplineTrack__get_Bias_fn(SplineTrack* __this, float* __retval)
{
    *__retval = __this->Bias();
}

// public void set_Bias(float value) :2747
void SplineTrack__set_Bias_fn(SplineTrack* __this, float* value)
{
    __this->Bias(*value);
}

// public float get_Continuity() :2760
void SplineTrack__get_Continuity_fn(SplineTrack* __this, float* __retval)
{
    *__retval = __this->Continuity();
}

// public void set_Continuity(float value) :2761
void SplineTrack__set_Continuity_fn(SplineTrack* __this, float* value)
{
    __this->Continuity(*value);
}

// private static float4 CubicHermitePoint(float4 p0, float4 p1, float4 m0, float4 m1, float t) :2870
void SplineTrack__CubicHermitePoint_fn(::g::Uno::Float4* p0, ::g::Uno::Float4* p1, ::g::Uno::Float4* m0, ::g::Uno::Float4* m1, float* t, ::g::Uno::Float4* __retval)
{
    *__retval = SplineTrack::CubicHermitePoint(*p0, *p1, *m0, *m1, *t);
}

// private Fuse.Animations.SeekResult Fuse.Animations.ContinuousTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState tas, double progress, double interval, Fuse.Animations.SeekDirection dir, float4& value, double& strength) :2823
void SplineTrack__FuseAnimationsContinuousTrackProviderGetSeekProgress_fn(SplineTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int* dir, ::g::Uno::Float4* value, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.SplineTrack", "Fuse.Animations.ContinuousTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState,double,double,Fuse.Animations.SeekDirection,float4&,double&)");
    double progress_ = *progress;
    double interval_ = *interval;
    int dir_ = *dir;
    return *__retval = ::g::Fuse::Animations::ContinuousTrackProvider::GetSeekTime(uInterface(uPtr(uAs<uObject*>(__this, ::TYPES[30/*Fuse.Animations.ContinuousTrackProvider*/])), ::TYPES[30/*Fuse.Animations.ContinuousTrackProvider*/]), tas, progress_ * __this->_duration, interval_, dir_, value, strength), void();
}

// private Fuse.Animations.SeekResult Fuse.Animations.ContinuousTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState tas, double elapsed, double interval, Fuse.Animations.SeekDirection dir, float4& value, double& strength) :2831
void SplineTrack__FuseAnimationsContinuousTrackProviderGetSeekTime_fn(SplineTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int* dir, ::g::Uno::Float4* value, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.SplineTrack", "Fuse.Animations.ContinuousTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState,double,double,Fuse.Animations.SeekDirection,float4&,double&)");
    ::g::Fuse::Animations::Keyframe* ret2;
    double elapsed_ = *elapsed;
    ::g::Fuse::Animations::Keyframe* ret3;
    ::g::Fuse::Animations::Keyframe* ret4;
    ::g::Fuse::Animations::Keyframe* ret5;
    ::g::Fuse::Animations::Keyframe* ret6;
    ::g::Fuse::Animations::Keyframe* ret7;
    ::g::Uno::Float4 ret8;
    ::g::Fuse::Animations::Keyframe* ret9;
    ::g::Fuse::Animations::Keyframe* ret10;
    ::g::Fuse::Animations::Keyframe* ret11;
    ::g::Fuse::Animations::Keyframe* ret12;
    int dir_ = *dir;
    __this->Init();

    if (uPtr(__this->_frames)->Count() == 0)
    {
        *value = ::g::Uno::Float4__New1(0.0f);
        *strength = 0.0;
        return *__retval = 3, void();
    }

    int segment = 0;

    while ((segment < (uPtr(__this->_frames)->Count() - 1)) && (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(segment), &ret2), ret2))->Time() <= elapsed_))
        ++segment;

    if (segment == 0)
    {
        double segmentProgress = elapsed_ / uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(0), &ret3), ret3))->TimeDelta();
        *value = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(0), &ret4), ret4))->Value();
        *strength = segmentProgress;
    }
    else
    {
        int previous = segment - 1;
        double segmentProgress1 = (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(segment), &ret5), ret5))->TimeDelta() < 9.9999997473787516e-06) ? 0.0 : ::g::Uno::Math::Clamp((elapsed_ - uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(previous), &ret6), ret6))->Time()) / uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(segment), &ret7), ret7))->TimeDelta(), 0.0, 1.0);
        *value = (uPtr(__this->_pointInterpolater)->Invoke(&ret8, 5, uCRef(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(previous), &ret9), ret9))->Value()), uCRef(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(segment), &ret10), ret10))->Value()), uCRef(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(previous), &ret11), ret11))->TangentOut()), uCRef(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(segment), &ret12), ret12))->TangentIn()), uCRef((float)segmentProgress1)), ret8);
        *strength = 1.0;
    }

    return *__retval = (((dir_ == 0) ? elapsed_ >= __this->_duration : elapsed_ <= 0.0) ? 1 : 0) | 2, void();
}

// private Fuse.Animations.AnimatorVariant Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator tas) :2818
void SplineTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn(SplineTrack* __this, ::g::Fuse::Animations::TrackAnimator* tas, int* __retval)
{
    uStackFrame __("Fuse.Animations.SplineTrack", "Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator)");
    return *__retval = 0, void();
}

// private double Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator ta, Fuse.Animations.AnimationVariant variant) :2812
void SplineTrack__FuseAnimationsTrackProviderGetDuration_fn(SplineTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* variant, double* __retval)
{
    uStackFrame __("Fuse.Animations.SplineTrack", "Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator,Fuse.Animations.AnimationVariant)");
    __this->Init();
    return *__retval = __this->_duration, void();
}

// private void Init() :2804
void SplineTrack__Init_fn(SplineTrack* __this)
{
    __this->Init();
}

// public Fuse.Animations.KeyframeInterpolation get_Interpolation() :2774
void SplineTrack__get_Interpolation_fn(SplineTrack* __this, int* __retval)
{
    *__retval = __this->Interpolation();
}

// public void set_Interpolation(Fuse.Animations.KeyframeInterpolation value) :2775
void SplineTrack__set_Interpolation_fn(SplineTrack* __this, int* value)
{
    __this->Interpolation(*value);
}

// public Uno.Collections.IList<Fuse.Animations.Keyframe> get_Keyframes() :2723
void SplineTrack__get_Keyframes_fn(SplineTrack* __this, uObject** __retval)
{
    *__retval = __this->Keyframes();
}

// private static float4 LinearPoint(float4 p0, float4 p1, float4 m0, float4 m1, float t) :2881
void SplineTrack__LinearPoint_fn(::g::Uno::Float4* p0, ::g::Uno::Float4* p1, ::g::Uno::Float4* m0, ::g::Uno::Float4* m1, float* t, ::g::Uno::Float4* __retval)
{
    *__retval = SplineTrack::LinearPoint(*p0, *p1, *m0, *m1, *t);
}

// public generated SplineTrack New() :2717
void SplineTrack__New1_fn(SplineTrack** __retval)
{
    *__retval = SplineTrack::New1();
}

// public float get_Tension() :2732
void SplineTrack__get_Tension_fn(SplineTrack* __this, float* __retval)
{
    *__retval = __this->Tension();
}

// public void set_Tension(float value) :2733
void SplineTrack__set_Tension_fn(SplineTrack* __this, float* value)
{
    __this->Tension(*value);
}

// public generated SplineTrack() [instance] :2717
void SplineTrack::ctor_()
{
    uStackFrame __("Fuse.Animations.SplineTrack", ".ctor()");
    _frames = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[24/*Uno.Collections.List<Fuse.Animations.Keyframe>*/]));
    _tension = 1.0f;
    _continuity = -1.0f;
    _pointInterpolater = uDelegate::New(::TYPES[51/*Fuse.Animations.SplineTrack.PointInterpolater*/], (void*)SplineTrack__LinearPoint_fn);
}

// public float get_Bias() [instance] :2746
float SplineTrack::Bias()
{
    uStackFrame __("Fuse.Animations.SplineTrack", "get_Bias()");
    return _bias;
}

// public void set_Bias(float value) [instance] :2747
void SplineTrack::Bias(float value)
{
    uStackFrame __("Fuse.Animations.SplineTrack", "set_Bias(float)");
    _bias = value;
    _style = 2;
}

// public float get_Continuity() [instance] :2760
float SplineTrack::Continuity()
{
    uStackFrame __("Fuse.Animations.SplineTrack", "get_Continuity()");
    return _continuity;
}

// public void set_Continuity(float value) [instance] :2761
void SplineTrack::Continuity(float value)
{
    uStackFrame __("Fuse.Animations.SplineTrack", "set_Continuity(float)");
    _continuity = value;
    _style = 2;
}

// private void Init() [instance] :2804
void SplineTrack::Init()
{
    uStackFrame __("Fuse.Animations.SplineTrack", "Init()");

    if (_init)
        return;

    _duration = ::g::Fuse::Animations::Keyframe::CompleteFrames((uObject*)_frames, Tension(), Bias(), Continuity());
    _init = true;
}

// public Fuse.Animations.KeyframeInterpolation get_Interpolation() [instance] :2774
int SplineTrack::Interpolation()
{
    uStackFrame __("Fuse.Animations.SplineTrack", "get_Interpolation()");
    return _style;
}

// public void set_Interpolation(Fuse.Animations.KeyframeInterpolation value) [instance] :2775
void SplineTrack::Interpolation(int value)
{
    uStackFrame __("Fuse.Animations.SplineTrack", "set_Interpolation(Fuse.Animations.KeyframeInterpolation)");
    _style = value;

    switch (_style)
    {
        case 0:
        {
            _bias = 0.0f;
            _tension = 1.0f;
            _continuity = -1.0f;
            _pointInterpolater = uDelegate::New(::TYPES[51/*Fuse.Animations.SplineTrack.PointInterpolater*/], (void*)SplineTrack__LinearPoint_fn);
            break;
        }
        case 1:
        {
            _bias = 0.0f;
            _tension = 0.0f;
            _continuity = 0.0f;
            _pointInterpolater = uDelegate::New(::TYPES[51/*Fuse.Animations.SplineTrack.PointInterpolater*/], (void*)SplineTrack__CubicHermitePoint_fn);
            break;
        }
        default:
        {
            _pointInterpolater = uDelegate::New(::TYPES[51/*Fuse.Animations.SplineTrack.PointInterpolater*/], (void*)SplineTrack__CubicHermitePoint_fn);
            break;
        }
    }
}

// public Uno.Collections.IList<Fuse.Animations.Keyframe> get_Keyframes() [instance] :2723
uObject* SplineTrack::Keyframes()
{
    uStackFrame __("Fuse.Animations.SplineTrack", "get_Keyframes()");
    return (uObject*)_frames;
}

// public float get_Tension() [instance] :2732
float SplineTrack::Tension()
{
    uStackFrame __("Fuse.Animations.SplineTrack", "get_Tension()");
    return _tension;
}

// public void set_Tension(float value) [instance] :2733
void SplineTrack::Tension(float value)
{
    uStackFrame __("Fuse.Animations.SplineTrack", "set_Tension(float)");
    _tension = value;
    _style = 2;
}

// private static float4 CubicHermitePoint(float4 p0, float4 p1, float4 m0, float4 m1, float t) [static] :2870
::g::Uno::Float4 SplineTrack::CubicHermitePoint(::g::Uno::Float4 p0, ::g::Uno::Float4 p1, ::g::Uno::Float4 m0, ::g::Uno::Float4 m1, float t)
{
    uStackFrame __("Fuse.Animations.SplineTrack", "CubicHermitePoint(float4,float4,float4,float4,float)");
    float t2 = t * t;
    float t3 = t2 * t;
    return ::g::Uno::Float4__op_Addition2(::g::Uno::Float4__op_Addition2(::g::Uno::Float4__op_Addition2(::g::Uno::Float4__op_Multiply(((2.0f * t3) - (3.0f * t2)) + 1.0f, p0), ::g::Uno::Float4__op_Multiply((t3 - (2.0f * t2)) + t, m0)), ::g::Uno::Float4__op_Multiply((-2.0f * t3) + (3.0f * t2), p1)), ::g::Uno::Float4__op_Multiply(t3 - t2, m1));
}

// private static float4 LinearPoint(float4 p0, float4 p1, float4 m0, float4 m1, float t) [static] :2881
::g::Uno::Float4 SplineTrack::LinearPoint(::g::Uno::Float4 p0, ::g::Uno::Float4 p1, ::g::Uno::Float4 m0, ::g::Uno::Float4 m1, float t)
{
    uStackFrame __("Fuse.Animations.SplineTrack", "LinearPoint(float4,float4,float4,float4,float)");
    return ::g::Uno::Float4__op_Addition2(p0, ::g::Uno::Float4__op_Multiply(t, ::g::Uno::Float4__op_Subtraction2(p1, p0)));
}

// public generated SplineTrack New() [static] :2717
SplineTrack* SplineTrack::New1()
{
    SplineTrack* obj1 = (SplineTrack*)uNew(SplineTrack_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public abstract class TrackAnimator :2946
// {
static void TrackAnimator_build(uType* type)
{
    ::TYPES[52] = ::g::Fuse::Animations::TrackProvider_typeof();
    ::TYPES[8] = ::g::Uno::Int_typeof();
    ::TYPES[53] = ::g::Fuse::Animations::KeyframeTrack_typeof();
    ::TYPES[54] = ::g::Fuse::Animations::ITrackProvider_typeof();
    ::TYPES[30] = ::g::Fuse::Animations::ContinuousTrackProvider_typeof();
    type->SetFields(4,
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _continuousProvider), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _delayBack), 0,
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _discreteProvider), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _durationBack), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _easing), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _easingBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _hasDelayBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _hasDurationBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _hasEasingBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _isDiscrete), 0,
        ::g::Fuse::Animations::KeyframeTrack_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _keyframeTrack), 0,
        uObject_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _objectValue), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _vectorValue), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _weight), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _Duration), 0);
    type->Reflection.SetFunctions(17,
        new uFunction("get_DelayBack", NULL, (void*)TrackAnimator__get_DelayBack_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_DelayBack", NULL, (void*)TrackAnimator__set_DelayBack_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Duration", NULL, (void*)TrackAnimator__get_Duration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Duration", NULL, (void*)TrackAnimator__set_Duration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_DurationBack", NULL, (void*)TrackAnimator__get_DurationBack_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_DurationBack", NULL, (void*)TrackAnimator__set_DurationBack_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Easing", NULL, (void*)TrackAnimator__get_Easing_fn, 0, false, ::g::Fuse::Animations::Easing_typeof(), 0),
        new uFunction("set_Easing", NULL, (void*)TrackAnimator__set_Easing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction("get_EasingBack", NULL, (void*)TrackAnimator__get_EasingBack_fn, 0, false, ::g::Fuse::Animations::Easing_typeof(), 0),
        new uFunction("set_EasingBack", NULL, (void*)TrackAnimator__set_EasingBack_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction("get_KeyframeInterpolation", NULL, (void*)TrackAnimator__get_KeyframeInterpolation_fn, 0, false, ::g::Fuse::Animations::KeyframeInterpolation_typeof(), 0),
        new uFunction("set_KeyframeInterpolation", NULL, (void*)TrackAnimator__set_KeyframeInterpolation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::KeyframeInterpolation_typeof()),
        new uFunction("get_Keyframes", NULL, (void*)TrackAnimator__get_Keyframes_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Animations::Keyframe_typeof()), 0),
        new uFunction("get_Provider", NULL, (void*)TrackAnimator__get_Provider_fn, 0, false, ::g::Fuse::Animations::ITrackProvider_typeof(), 0),
        new uFunction("set_Provider", NULL, (void*)TrackAnimator__set_Provider_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::ITrackProvider_typeof()),
        new uFunction("get_Weight", NULL, (void*)TrackAnimator__get_Weight_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Weight", NULL, (void*)TrackAnimator__set_Weight_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
}

::g::Fuse::Animations::Animator_type* TrackAnimator_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.ObjectSize = sizeof(TrackAnimator);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.TrackAnimator", options);
    type->SetBase(::g::Fuse::Animations::Animator_typeof());
    type->fp_build_ = TrackAnimator_build;
    type->fp_get_AnimatorVariant = (void(*)(::g::Fuse::Animations::Animator*, int*))TrackAnimator__get_AnimatorVariant_fn;
    type->fp_GetDurationWithDelay = (void(*)(::g::Fuse::Animations::Animator*, int*, double*))TrackAnimator__GetDurationWithDelay_fn;
    return type;
}

// protected generated TrackAnimator() :2946
void TrackAnimator__ctor_2_fn(TrackAnimator* __this)
{
    __this->ctor_2();
}

// internal override sealed Fuse.Animations.AnimatorVariant get_AnimatorVariant() :2950
void TrackAnimator__get_AnimatorVariant_fn(TrackAnimator* __this, int* __retval)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_AnimatorVariant()");

    if (__this->_discreteProvider != NULL)
        return *__retval = ::g::Fuse::Animations::TrackProvider::GetAnimatorVariant(uInterface(uPtr(__this->_discreteProvider), ::TYPES[52/*Fuse.Animations.TrackProvider*/]), __this), void();
    else if (__this->_continuousProvider != NULL)
        return *__retval = ::g::Fuse::Animations::TrackProvider::GetAnimatorVariant(uInterface(uPtr(__this->_continuousProvider), ::TYPES[52/*Fuse.Animations.TrackProvider*/]), __this), void();

    return *__retval = 0, void();
}

// public double get_DelayBack() :3044
void TrackAnimator__get_DelayBack_fn(TrackAnimator* __this, double* __retval)
{
    *__retval = __this->DelayBack();
}

// public void set_DelayBack(double value) :3045
void TrackAnimator__set_DelayBack_fn(TrackAnimator* __this, double* value)
{
    __this->DelayBack(*value);
}

// public generated double get_Duration() :3026
void TrackAnimator__get_Duration_fn(TrackAnimator* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public generated void set_Duration(double value) :3026
void TrackAnimator__set_Duration_fn(TrackAnimator* __this, double* value)
{
    __this->Duration(*value);
}

// public double get_DurationBack() :3032
void TrackAnimator__get_DurationBack_fn(TrackAnimator* __this, double* __retval)
{
    *__retval = __this->DurationBack();
}

// public void set_DurationBack(double value) :3033
void TrackAnimator__set_DurationBack_fn(TrackAnimator* __this, double* value)
{
    __this->DurationBack(*value);
}

// public Fuse.Animations.Easing get_Easing() :3010
void TrackAnimator__get_Easing_fn(TrackAnimator* __this, int* __retval)
{
    *__retval = __this->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) :3011
void TrackAnimator__set_Easing_fn(TrackAnimator* __this, int* value)
{
    __this->Easing(*value);
}

// public Fuse.Animations.Easing get_EasingBack() :3018
void TrackAnimator__get_EasingBack_fn(TrackAnimator* __this, int* __retval)
{
    *__retval = __this->EasingBack();
}

// public void set_EasingBack(Fuse.Animations.Easing value) :3019
void TrackAnimator__set_EasingBack_fn(TrackAnimator* __this, int* value)
{
    __this->EasingBack(*value);
}

// internal override sealed double GetDurationWithDelay(Fuse.Animations.AnimationVariant dir) :2960
void TrackAnimator__GetDurationWithDelay_fn(TrackAnimator* __this, int* dir, double* __retval)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "GetDurationWithDelay(Fuse.Animations.AnimationVariant)");
    int dir_ = *dir;
    double duration = 0.0;

    if (__this->_discreteProvider != NULL)
        duration = ::g::Fuse::Animations::TrackProvider::GetDuration(uInterface(uPtr(__this->_discreteProvider), ::TYPES[52/*Fuse.Animations.TrackProvider*/]), __this, dir_);
    else if (__this->_continuousProvider != NULL)
        duration = ::g::Fuse::Animations::TrackProvider::GetDuration(uInterface(uPtr(__this->_continuousProvider), ::TYPES[52/*Fuse.Animations.TrackProvider*/]), __this, dir_);

    return *__retval = (((dir_ == 1) && __this->HasBack()) ? __this->DelayBack() : __this->Delay()) + duration, void();
}

// internal Fuse.Animations.TrackProvider GetProvider(Fuse.Animations.AnimationVariant variant) :3000
void TrackAnimator__GetProvider_fn(TrackAnimator* __this, int* variant, uObject** __retval)
{
    *__retval = __this->GetProvider(*variant);
}

// internal bool get_HasBack() :3054
void TrackAnimator__get_HasBack_fn(TrackAnimator* __this, bool* __retval)
{
    *__retval = __this->HasBack();
}

// public Fuse.Animations.KeyframeInterpolation get_KeyframeInterpolation() :3084
void TrackAnimator__get_KeyframeInterpolation_fn(TrackAnimator* __this, int* __retval)
{
    *__retval = __this->KeyframeInterpolation();
}

// public void set_KeyframeInterpolation(Fuse.Animations.KeyframeInterpolation value) :3085
void TrackAnimator__set_KeyframeInterpolation_fn(TrackAnimator* __this, int* value)
{
    __this->KeyframeInterpolation(*value);
}

// public Uno.Collections.IList<Fuse.Animations.Keyframe> get_Keyframes() :3127
void TrackAnimator__get_Keyframes_fn(TrackAnimator* __this, uObject** __retval)
{
    *__retval = __this->Keyframes();
}

// private Fuse.Animations.KeyframeTrack get_KeyframeTrack() :3060
void TrackAnimator__get_KeyframeTrack_fn(TrackAnimator* __this, uObject** __retval)
{
    *__retval = __this->KeyframeTrack();
}

// internal void MarkDiscrete() :2975
void TrackAnimator__MarkDiscrete_fn(TrackAnimator* __this)
{
    __this->MarkDiscrete();
}

// public Fuse.Animations.ITrackProvider get_Provider() :2986
void TrackAnimator__get_Provider_fn(TrackAnimator* __this, uObject** __retval)
{
    *__retval = __this->Provider();
}

// public void set_Provider(Fuse.Animations.ITrackProvider value) :2992
void TrackAnimator__set_Provider_fn(TrackAnimator* __this, uObject* value)
{
    __this->Provider(value);
}

// public double get_Weight() :3133
void TrackAnimator__get_Weight_fn(TrackAnimator* __this, double* __retval)
{
    *__retval = __this->Weight();
}

// public void set_Weight(double value) :3134
void TrackAnimator__set_Weight_fn(TrackAnimator* __this, double* value)
{
    __this->Weight(*value);
}

// protected generated TrackAnimator() [instance] :2946
void TrackAnimator::ctor_2()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", ".ctor()");
    _continuousProvider = (uObject*)::g::Fuse::Animations::EasingTrack::Singleton();
    _weight = 1.0;
    ctor_1();
}

// public double get_DelayBack() [instance] :3044
double TrackAnimator::DelayBack()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_DelayBack()");
    return _hasDelayBack ? _delayBack : 0.0;
}

// public void set_DelayBack(double value) [instance] :3045
void TrackAnimator::DelayBack(double value)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "set_DelayBack(double)");
    _delayBack = value;
    _hasDelayBack = true;
}

// public generated double get_Duration() [instance] :3026
double TrackAnimator::Duration()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_Duration()");
    return _Duration;
}

// public generated void set_Duration(double value) [instance] :3026
void TrackAnimator::Duration(double value)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "set_Duration(double)");
    _Duration = value;
}

// public double get_DurationBack() [instance] :3032
double TrackAnimator::DurationBack()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_DurationBack()");
    return _hasDurationBack ? _durationBack : Duration();
}

// public void set_DurationBack(double value) [instance] :3033
void TrackAnimator::DurationBack(double value)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "set_DurationBack(double)");
    _durationBack = value;
    _hasDurationBack = true;
}

// public Fuse.Animations.Easing get_Easing() [instance] :3010
int TrackAnimator::Easing()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_Easing()");
    return _easing;
}

// public void set_Easing(Fuse.Animations.Easing value) [instance] :3011
void TrackAnimator::Easing(int value)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "set_Easing(Fuse.Animations.Easing)");
    _easing = value;
}

// public Fuse.Animations.Easing get_EasingBack() [instance] :3018
int TrackAnimator::EasingBack()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_EasingBack()");
    return _hasEasingBack ? _easingBack : _easing;
}

// public void set_EasingBack(Fuse.Animations.Easing value) [instance] :3019
void TrackAnimator::EasingBack(int value)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "set_EasingBack(Fuse.Animations.Easing)");
    _easingBack = value;
    _hasEasingBack = true;
}

// internal Fuse.Animations.TrackProvider GetProvider(Fuse.Animations.AnimationVariant variant) [instance] :3000
uObject* TrackAnimator::GetProvider(int variant)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "GetProvider(Fuse.Animations.AnimationVariant)");
    uObject* ind1 = _discreteProvider;
    return (ind1 != NULL) ? ind1 : (uObject*)_continuousProvider;
}

// internal bool get_HasBack() [instance] :3054
bool TrackAnimator::HasBack()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_HasBack()");
    return (_hasDelayBack || _hasDurationBack) || _hasEasingBack;
}

// public Fuse.Animations.KeyframeInterpolation get_KeyframeInterpolation() [instance] :3084
int TrackAnimator::KeyframeInterpolation()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_KeyframeInterpolation()");
    return ::g::Fuse::Animations::KeyframeTrack::Interpolation(uInterface(uPtr(KeyframeTrack()), ::TYPES[53/*Fuse.Animations.KeyframeTrack*/]));
}

// public void set_KeyframeInterpolation(Fuse.Animations.KeyframeInterpolation value) [instance] :3085
void TrackAnimator::KeyframeInterpolation(int value)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "set_KeyframeInterpolation(Fuse.Animations.KeyframeInterpolation)");
    ::g::Fuse::Animations::KeyframeTrack::Interpolation(uInterface(uPtr(KeyframeTrack()), ::TYPES[53/*Fuse.Animations.KeyframeTrack*/]), value);
}

// public Uno.Collections.IList<Fuse.Animations.Keyframe> get_Keyframes() [instance] :3127
uObject* TrackAnimator::Keyframes()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_Keyframes()");
    return ::g::Fuse::Animations::KeyframeTrack::Keyframes(uInterface(uPtr(KeyframeTrack()), ::TYPES[53/*Fuse.Animations.KeyframeTrack*/]));
}

// private Fuse.Animations.KeyframeTrack get_KeyframeTrack() [instance] :3060
uObject* TrackAnimator::KeyframeTrack()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_KeyframeTrack()");

    if (_keyframeTrack == NULL)
    {
        if (_isDiscrete)
        {
            ::g::Fuse::Animations::DiscreteKeyframeTrack* t = ::g::Fuse::Animations::DiscreteKeyframeTrack::New1();
            _keyframeTrack = (uObject*)t;
            _discreteProvider = (uObject*)t;
        }
        else
        {
            ::g::Fuse::Animations::SplineTrack* t1 = ::g::Fuse::Animations::SplineTrack::New1();
            _keyframeTrack = (uObject*)t1;
            _continuousProvider = (uObject*)t1;
        }
    }

    return _keyframeTrack;
}

// internal void MarkDiscrete() [instance] :2975
void TrackAnimator::MarkDiscrete()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "MarkDiscrete()");
    _discreteProvider = (uObject*)::g::Fuse::Animations::DiscreteSingleTrack::Singleton();
    _continuousProvider = NULL;
    _isDiscrete = true;
}

// public Fuse.Animations.ITrackProvider get_Provider() [instance] :2986
uObject* TrackAnimator::Provider()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_Provider()");

    if (_continuousProvider != NULL)
        return uAs<uObject*>(_continuousProvider, ::TYPES[54/*Fuse.Animations.ITrackProvider*/]);

    return NULL;
}

// public void set_Provider(Fuse.Animations.ITrackProvider value) [instance] :2992
void TrackAnimator::Provider(uObject* value)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "set_Provider(Fuse.Animations.ITrackProvider)");
    _continuousProvider = NULL;

    if (uIs(value, ::TYPES[30/*Fuse.Animations.ContinuousTrackProvider*/]))
        _continuousProvider = uAs<uObject*>(value, ::TYPES[52/*Fuse.Animations.TrackProvider*/]);
}

// public double get_Weight() [instance] :3133
double TrackAnimator::Weight()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_Weight()");
    return _weight;
}

// public void set_Weight(double value) [instance] :3134
void TrackAnimator::Weight(double value)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "set_Weight(double)");
    _weight = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal abstract class TrackAnimatorState :3143
// {
static void TrackAnimatorState_build(uType* type)
{
    ::TYPES[30] = ::g::Fuse::Animations::ContinuousTrackProvider_typeof();
    ::TYPES[25] = ::g::Fuse::Animations::DiscreteTrackProvider_typeof();
    ::TYPES[8] = ::g::Uno::Int_typeof();
    type->SetFields(3,
        ::g::Fuse::Animations::ContinuousTrackProvider_typeof(), offsetof(::g::Fuse::Animations::TrackAnimatorState, _continuousProvider), 0,
        ::g::Fuse::Animations::DiscreteTrackProvider_typeof(), offsetof(::g::Fuse::Animations::TrackAnimatorState, _discreteProvider), 0,
        ::g::Fuse::Animations::TrackAnimator_typeof(), offsetof(::g::Fuse::Animations::TrackAnimatorState, Animator), 0);
}

TrackAnimatorState_type* TrackAnimatorState_typeof()
{
    static uSStrong<TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(TrackAnimatorState);
    options.TypeSize = sizeof(TrackAnimatorState_type);
    type = (TrackAnimatorState_type*)uClassType::New("Fuse.Animations.TrackAnimatorState", options);
    type->SetBase(::g::Fuse::Animations::AnimatorState_typeof());
    type->fp_build_ = TrackAnimatorState_build;
    type->fp_SeekObjectValue = TrackAnimatorState__SeekObjectValue_fn;
    type->fp_SeekProgress = (void(*)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, int*))TrackAnimatorState__SeekProgress_fn;
    type->fp_SeekTime = (void(*)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, int*))TrackAnimatorState__SeekTime_fn;
    type->fp_SeekValue = TrackAnimatorState__SeekValue_fn;
    return type;
}

// protected TrackAnimatorState(Fuse.Animations.TrackAnimator animator, Fuse.Animations.CreateStateParams p, [Fuse.Visual useVisual]) :3149
void TrackAnimatorState__ctor_1_fn(TrackAnimatorState* __this, ::g::Fuse::Animations::TrackAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual)
{
    __this->ctor_1(animator, p, useVisual);
}

// public double get_Duration() :3228
void TrackAnimatorState__get_Duration_fn(TrackAnimatorState* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public Fuse.Animations.Easing get_Easing() :3233
void TrackAnimatorState__get_Easing_fn(TrackAnimatorState* __this, int* __retval)
{
    *__retval = __this->Easing();
}

// public bool get_IsBackward() :3223
void TrackAnimatorState__get_IsBackward_fn(TrackAnimatorState* __this, bool* __retval)
{
    *__retval = __this->IsBackward();
}

// protected virtual void SeekObjectValue(object value, float strength) :3219
void TrackAnimatorState__SeekObjectValue_fn(TrackAnimatorState* __this, uObject* value, float* strength)
{
}

// internal override sealed Fuse.Animations.SeekResult SeekProgress(double progress, double interval, Fuse.Animations.SeekDirection dir, double strength) :3159
void TrackAnimatorState__SeekProgress_fn(TrackAnimatorState* __this, double* progress, double* interval, int* dir, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.TrackAnimatorState", "SeekProgress(double,double,Fuse.Animations.SeekDirection,double)");
    double progress_ = *progress;
    double interval_ = *interval;
    int dir_ = *dir;
    double strength_ = *strength;

    if (__this->_continuousProvider != NULL)
    {
        double oStrength;
        ::g::Uno::Float4 oValue;
        int r = ::g::Fuse::Animations::ContinuousTrackProvider::GetSeekProgress(uInterface(uPtr(__this->_continuousProvider), ::TYPES[30/*Fuse.Animations.ContinuousTrackProvider*/]), __this, progress_, interval_, dir_, &oValue, &oStrength);
        __this->SeekValue(oValue, (float)((oStrength * strength_) * uPtr(__this->Animator)->Weight()));
        return *__retval = r, void();
    }

    if (__this->_discreteProvider != NULL)
    {
        double oStrength1;
        uObject* oValue1;
        int r1 = ::g::Fuse::Animations::DiscreteTrackProvider::GetSeekProgress(uInterface(uPtr(__this->_discreteProvider), ::TYPES[25/*Fuse.Animations.DiscreteTrackProvider*/]), __this, progress_, interval_, dir_, &oValue1, &oStrength1);
        __this->SeekObjectValue(oValue1, (float)((oStrength1 * strength_) * uPtr(__this->Animator)->Weight()));
        return *__retval = r1, void();
    }

    return *__retval = 3, void();
}

// internal override sealed Fuse.Animations.SeekResult SeekTime(double elapsed, double interval, Fuse.Animations.SeekDirection dir, double strength) :3185
void TrackAnimatorState__SeekTime_fn(TrackAnimatorState* __this, double* elapsed, double* interval, int* dir, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.TrackAnimatorState", "SeekTime(double,double,Fuse.Animations.SeekDirection,double)");
    double elapsed_ = *elapsed;
    double interval_ = *interval;
    int dir_ = *dir;
    double strength_ = *strength;
    double relTime;

    if (__this->IsBackward() && uPtr(__this->Animator)->HasBack())
        relTime = elapsed_ - ((__this->TotalDuration - uPtr(__this->Animator)->DelayBack()) - uPtr(__this->Animator)->DurationBack());
    else
        relTime = elapsed_ - uPtr(__this->Animator)->Delay();

    if (__this->_continuousProvider != NULL)
    {
        double oStrength;
        ::g::Uno::Float4 oValue;
        int r = ::g::Fuse::Animations::ContinuousTrackProvider::GetSeekTime(uInterface(uPtr(__this->_continuousProvider), ::TYPES[30/*Fuse.Animations.ContinuousTrackProvider*/]), __this, relTime, interval_, dir_, &oValue, &oStrength);
        __this->SeekValue(oValue, (float)((oStrength * strength_) * uPtr(__this->Animator)->Weight()));
        return *__retval = r, void();
    }

    if (__this->_discreteProvider != NULL)
    {
        double oStrength1;
        uObject* oValue1;
        int r1 = ::g::Fuse::Animations::DiscreteTrackProvider::GetSeekTime(uInterface(uPtr(__this->_discreteProvider), ::TYPES[25/*Fuse.Animations.DiscreteTrackProvider*/]), __this, relTime, interval_, dir_, &oValue1, &oStrength1);
        __this->SeekObjectValue(oValue1, (float)((oStrength1 * strength_) * uPtr(__this->Animator)->Weight()));
        return *__retval = r1, void();
    }

    return *__retval = 3, void();
}

// protected virtual void SeekValue(float4 value, float strength) :3218
void TrackAnimatorState__SeekValue_fn(TrackAnimatorState* __this, ::g::Uno::Float4* value, float* strength)
{
}

// protected TrackAnimatorState(Fuse.Animations.TrackAnimator animator, Fuse.Animations.CreateStateParams p, [Fuse.Visual useVisual]) [instance] :3149
void TrackAnimatorState::ctor_1(::g::Fuse::Animations::TrackAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual)
{
    uStackFrame __("Fuse.Animations.TrackAnimatorState", ".ctor(Fuse.Animations.TrackAnimator,Fuse.Animations.CreateStateParams,[Fuse.Visual])");
    ctor_(p, useVisual);
    Animator = animator;
    uObject* pr = uPtr(animator)->GetProvider(Variant);
    _continuousProvider = uAs<uObject*>(pr, ::TYPES[30/*Fuse.Animations.ContinuousTrackProvider*/]);
    _discreteProvider = uAs<uObject*>(pr, ::TYPES[25/*Fuse.Animations.DiscreteTrackProvider*/]);
}

// public double get_Duration() [instance] :3228
double TrackAnimatorState::Duration()
{
    uStackFrame __("Fuse.Animations.TrackAnimatorState", "get_Duration()");
    return IsBackward() ? uPtr(Animator)->DurationBack() : uPtr(Animator)->Duration();
}

// public Fuse.Animations.Easing get_Easing() [instance] :3233
int TrackAnimatorState::Easing()
{
    uStackFrame __("Fuse.Animations.TrackAnimatorState", "get_Easing()");
    return IsBackward() ? uPtr(Animator)->EasingBack() : uPtr(Animator)->Easing();
}

// public bool get_IsBackward() [instance] :3223
bool TrackAnimatorState::IsBackward()
{
    uStackFrame __("Fuse.Animations.TrackAnimatorState", "get_IsBackward()");
    return Variant == 1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal abstract interface TrackProvider :2912
// {
uInterfaceType* TrackProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.TrackProvider", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public abstract class TransformAnimator<TransformType> :3264
// {
static void TransformAnimator_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Animations::AnimatorState_typeof();
    ::TYPES[55] = ::g::Fuse::Animations::TransformAnimatorState_typeof();
    type->SetPrecalc(
        ::g::Fuse::Animations::TransformAnimatorState_typeof()->MakeType(type->T(0)));
    type->SetFields(19,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Animations::TransformAnimator, _Priority), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::TransformAnimator, _RelativeNode), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::TransformAnimator, _Target), 0);
    type->Reflection.SetFunctions(14,
        new uFunction("get_Priority", NULL, (void*)TransformAnimator__get_Priority_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Priority", NULL, (void*)TransformAnimator__set_Priority_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_RelativeNode", NULL, (void*)TransformAnimator__get_RelativeNode_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_RelativeNode", NULL, (void*)TransformAnimator__set_RelativeNode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_Target", NULL, (void*)TransformAnimator__get_Target_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)TransformAnimator__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_Vector", NULL, (void*)TransformAnimator__get_Vector_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("set_Vector", NULL, (void*)TransformAnimator__set_Vector_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("get_X", NULL, (void*)TransformAnimator__get_X_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_X", NULL, (void*)TransformAnimator__set_X_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Y", NULL, (void*)TransformAnimator__get_Y_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Y", NULL, (void*)TransformAnimator__set_Y_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Z", NULL, (void*)TransformAnimator__get_Z_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Z", NULL, (void*)TransformAnimator__set_Z_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

TransformAnimator_type* TransformAnimator_typeof()
{
    static uSStrong<TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 22;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(TransformAnimator);
    options.TypeSize = sizeof(TransformAnimator_type);
    type = (TransformAnimator_type*)uClassType::New("Fuse.Animations.TransformAnimator`1", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimator_typeof());
    type->fp_build_ = TransformAnimator_build;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))TransformAnimator__CreateState_fn;
    return type;
}

// internal TransformAnimator() :3267
void TransformAnimator__ctor_3_fn(TransformAnimator* __this)
{
    __this->ctor_3();
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :3362
void TransformAnimator__CreateState_fn(TransformAnimator* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(TransformAnimator_typeof())->Precalced(0/*Fuse.Animations.TransformAnimatorState<TransformType>*/),
        __this->__type->GetBase(TransformAnimator_typeof())->T(0),
    };
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "CreateState(Fuse.Animations.CreateStateParams)");
    return *__retval = (::g::Fuse::Animations::TransformAnimatorState*)::g::Fuse::Animations::TransformAnimatorState::New1(__types[0], __this, p), void();
}

// public generated int get_Priority() :3358
void TransformAnimator__get_Priority_fn(TransformAnimator* __this, int* __retval)
{
    *__retval = __this->Priority();
}

// public generated void set_Priority(int value) :3358
void TransformAnimator__set_Priority_fn(TransformAnimator* __this, int* value)
{
    __this->Priority(*value);
}

// public generated Fuse.Visual get_RelativeNode() :3350
void TransformAnimator__get_RelativeNode_fn(TransformAnimator* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->RelativeNode();
}

// public generated void set_RelativeNode(Fuse.Visual value) :3351
void TransformAnimator__set_RelativeNode_fn(TransformAnimator* __this, ::g::Fuse::Visual* value)
{
    __this->RelativeNode(value);
}

// public generated Fuse.Visual get_Target() :3355
void TransformAnimator__get_Target_fn(TransformAnimator* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :3355
void TransformAnimator__set_Target_fn(TransformAnimator* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public float3 get_Vector() :3332
void TransformAnimator__get_Vector_fn(TransformAnimator* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Vector();
}

// public void set_Vector(float3 value) :3333
void TransformAnimator__set_Vector_fn(TransformAnimator* __this, ::g::Uno::Float3* value)
{
    __this->Vector(*value);
}

// public float get_X() :3284
void TransformAnimator__get_X_fn(TransformAnimator* __this, float* __retval)
{
    *__retval = __this->X();
}

// public void set_X(float value) :3285
void TransformAnimator__set_X_fn(TransformAnimator* __this, float* value)
{
    __this->X(*value);
}

// public float get_Y() :3300
void TransformAnimator__get_Y_fn(TransformAnimator* __this, float* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(float value) :3301
void TransformAnimator__set_Y_fn(TransformAnimator* __this, float* value)
{
    __this->Y(*value);
}

// public float get_Z() :3316
void TransformAnimator__get_Z_fn(TransformAnimator* __this, float* __retval)
{
    *__retval = __this->Z();
}

// public void set_Z(float value) :3317
void TransformAnimator__set_Z_fn(TransformAnimator* __this, float* value)
{
    __this->Z(*value);
}

// internal TransformAnimator() [instance] :3267
void TransformAnimator::ctor_3()
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", ".ctor()");
    ctor_2();
    MixOp(1);
}

// public generated int get_Priority() [instance] :3358
int TransformAnimator::Priority()
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "get_Priority()");
    return _Priority;
}

// public generated void set_Priority(int value) [instance] :3358
void TransformAnimator::Priority(int value)
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "set_Priority(int)");
    _Priority = value;
}

// public generated Fuse.Visual get_RelativeNode() [instance] :3350
::g::Fuse::Visual* TransformAnimator::RelativeNode()
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "get_RelativeNode()");
    return _RelativeNode;
}

// public generated void set_RelativeNode(Fuse.Visual value) [instance] :3351
void TransformAnimator::RelativeNode(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "set_RelativeNode(Fuse.Visual)");
    _RelativeNode = value;
}

// public generated Fuse.Visual get_Target() [instance] :3355
::g::Fuse::Visual* TransformAnimator::Target()
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "get_Target()");
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :3355
void TransformAnimator::Target(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "set_Target(Fuse.Visual)");
    _Target = value;
}

// public float3 get_Vector() [instance] :3332
::g::Uno::Float3 TransformAnimator::Vector()
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "get_Vector()");
    ::g::Uno::Float4 ind1 = _vectorValue;
    return ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z);
}

// public void set_Vector(float3 value) [instance] :3333
void TransformAnimator::Vector(::g::Uno::Float3 value)
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "set_Vector(float3)");
    _vectorValue = ::g::Uno::Float4__New8(value, _vectorValue.W);
}

// public float get_X() [instance] :3284
float TransformAnimator::X()
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "get_X()");
    return _vectorValue.X;
}

// public void set_X(float value) [instance] :3285
void TransformAnimator::X(float value)
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "set_X(float)");
    _vectorValue.X = value;
}

// public float get_Y() [instance] :3300
float TransformAnimator::Y()
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "get_Y()");
    return _vectorValue.Y;
}

// public void set_Y(float value) [instance] :3301
void TransformAnimator::Y(float value)
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "set_Y(float)");
    _vectorValue.Y = value;
}

// public float get_Z() [instance] :3316
float TransformAnimator::Z()
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "get_Z()");
    return _vectorValue.Z;
}

// public void set_Z(float value) [instance] :3317
void TransformAnimator::Z(float value)
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "set_Z(float)");
    _vectorValue.Z = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class TransformAnimatorState<TransformType> :3368
// {
static void TransformAnimatorState_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Invalid seek");
    ::STRINGS[2] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno");
    ::TYPES[18] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[19] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[56] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[35] = ::g::Fuse::Transform_typeof();
    ::TYPES[37] = ::g::Fuse::Node_typeof();
    ::TYPES[40] = ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof());
    type->SetFields(6,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TransformAnimatorState, _inSeek), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::TransformAnimatorState, _lastStrength), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Transform_typeof()), offsetof(::g::Fuse::Animations::TransformAnimatorState, _matAct), 0,
        ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::TransformAnimatorState, Animator1), 0,
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof()), offsetof(::g::Fuse::Animations::TransformAnimatorState, mixHandle), 0,
        type->T(0), offsetof(::g::Fuse::Animations::TransformAnimatorState, transform), 0);
}

::g::Fuse::Animations::TrackAnimatorState_type* TransformAnimatorState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(TransformAnimatorState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.TransformAnimatorState`1", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimatorState_typeof());
    type->fp_build_ = TransformAnimatorState_build;
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))TransformAnimatorState__Disable_fn;
    type->fp_SeekValue = (void(*)(::g::Fuse::Animations::TrackAnimatorState*, ::g::Uno::Float4*, float*))TransformAnimatorState__SeekValue_fn;
    return type;
}

// public TransformAnimatorState(Fuse.Animations.TransformAnimator<TransformType> animator, Fuse.Animations.CreateStateParams p) :3376
void TransformAnimatorState__ctor_2_fn(TransformAnimatorState* __this, ::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :3389
void TransformAnimatorState__Disable_fn(TransformAnimatorState* __this)
{
    uStackFrame __("Fuse.Animations.TransformAnimatorState`1", "Disable()");

    if (__this->mixHandle == NULL)
        return;

    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), ::TYPES[40/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]));
    __this->mixHandle = NULL;
    uPtr(uAs< ::g::Fuse::Transform*>(__this->transform, ::TYPES[35/*Fuse.Transform*/]))->remove_MatrixChanged(__this->_matAct);
    ::g::Fuse::Node::Unrelate(__this->Visual, __this->transform);
    __this->_matAct = NULL;
    __this->transform = NULL;
}

// public TransformAnimatorState New(Fuse.Animations.TransformAnimator<TransformType> animator, Fuse.Animations.CreateStateParams p) :3376
void TransformAnimatorState__New1_fn(uType* __type, ::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, TransformAnimatorState** __retval)
{
    *__retval = TransformAnimatorState::New1(__type, animator, p);
}

// internal void OnMatrixChanged(Fuse.Transform ignore) :3422
void TransformAnimatorState__OnMatrixChanged_fn(TransformAnimatorState* __this, ::g::Fuse::Transform* ignore)
{
    __this->OnMatrixChanged(ignore);
}

// protected override sealed void SeekValue(float4 value, float strength) :3403
void TransformAnimatorState__SeekValue_fn(TransformAnimatorState* __this, ::g::Uno::Float4* value, float* strength)
{
    uStackFrame __("Fuse.Animations.TransformAnimatorState`1", "SeekValue(float4,float)");
    ::g::Fuse::Visual* ind1;
    ::g::Uno::Float4 value_ = *value;
    float strength_ = *strength;

    if ((__this->mixHandle == NULL) || (__this->transform == NULL))
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[7/*"Invalid seek"*/], 1, ::STRINGS[2/*"/usr/local/...*/], 3407);
        return;
    }

    __this->_inSeek = true;
    uPtr(uAs< ::g::Fuse::Transform*>(__this->transform, ::TYPES[35/*Fuse.Transform*/]))->RelativeNode((ind1 = uPtr(__this->Animator1)->RelativeNode(), (ind1 != NULL) ? ind1 : (::g::Fuse::Visual*)__this->Visual));
    uPtr(__this->Animator1)->Update(__this->Visual, __this->transform, value_);
    __this->_lastStrength = strength_;
    ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), ::TYPES[40/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]), __this->transform, uCRef(__this->_lastStrength));
    __this->_inSeek = false;
}

// public TransformAnimatorState(Fuse.Animations.TransformAnimator<TransformType> animator, Fuse.Animations.CreateStateParams p) [instance] :3376
void TransformAnimatorState::ctor_2(::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uType* __types[] = {
        __type->T(0),
    };
    uStackFrame __("Fuse.Animations.TransformAnimatorState`1", ".ctor(Fuse.Animations.TransformAnimator<TransformType>,Fuse.Animations.CreateStateParams)");
    transform = (::g::Fuse::Transform*)__types[0]->New();
    ctor_1(animator, p, uPtr(animator)->Target());
    Animator1 = animator;
    mixHandle = ::g::Fuse::Animations::IMixer::RegisterTransform(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[19/*Fuse.Animations.IMixer*/]), Visual, uPtr(Animator1)->MixOp(), uPtr(Animator1)->Priority());
    _matAct = uDelegate::New(::TYPES[56/*Uno.Action<Fuse.Transform>*/], (void*)TransformAnimatorState__OnMatrixChanged_fn, this);
    uPtr(uAs< ::g::Fuse::Transform*>(transform, ::TYPES[35/*Fuse.Transform*/]))->add_MatrixChanged(_matAct);
    ::g::Fuse::Node::Relate(Visual, transform);
}

// internal void OnMatrixChanged(Fuse.Transform ignore) [instance] :3422
void TransformAnimatorState::OnMatrixChanged(::g::Fuse::Transform* ignore)
{
    uStackFrame __("Fuse.Animations.TransformAnimatorState`1", "OnMatrixChanged(Fuse.Transform)");

    if ((!_inSeek && (mixHandle != NULL)) && (transform != NULL))
        ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(mixHandle), ::TYPES[40/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]), transform, uCRef(_lastStrength));
}

// public TransformAnimatorState New(Fuse.Animations.TransformAnimator<TransformType> animator, Fuse.Animations.CreateStateParams p) [static] :3376
TransformAnimatorState* TransformAnimatorState::New1(uType* __type, ::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    TransformAnimatorState* obj2 = (TransformAnimatorState*)uNew(__type);
    obj2->ctor_2(animator, p);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal enum TransformPriority :3244
uEnumType* TransformPriority_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.TransformPriority", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Shear", 4000LL,
        "Rotate", 3000LL,
        "Scale", 2000LL,
        "Translate", 1000LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// public sealed class TriggerAnimation :3628
// {
static void TriggerAnimation_build(uType* type)
{
    ::TYPES[57] = ::g::Fuse::Animations::AnimatorState_typeof()->Array();
    ::TYPES[8] = ::g::Uno::Int_typeof();
    ::TYPES[22] = ::g::Uno::Delegate_typeof();
    ::TYPES[58] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[59] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[2] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof()), offsetof(::g::Fuse::Animations::TriggerAnimation, _animators), 0,
        TriggerAnimation_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _backward), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _crossFadeDuration), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _hasStretchDuration), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _hasTimeMultiplier), 0,
        ::g::Fuse::Animations::PlayMode_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _playMode), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _stretchDuration), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _timeMultiplier), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, TimeChanged1), 0);
    type->Reflection.SetFunctions(15,
        new uFunction("get_Animators", NULL, (void*)TriggerAnimation__get_Animators_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof()), 0),
        new uFunction("get_Backward", NULL, (void*)TriggerAnimation__get_Backward_fn, 0, false, TriggerAnimation_typeof(), 0),
        new uFunction("set_Backward", NULL, (void*)TriggerAnimation__set_Backward_fn, 0, false, uVoid_typeof(), 1, TriggerAnimation_typeof()),
        new uFunction("get_CrossFadeDuration", NULL, (void*)TriggerAnimation__get_CrossFadeDuration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_CrossFadeDuration", NULL, (void*)TriggerAnimation__set_CrossFadeDuration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("GetAnimatorsDuration", NULL, (void*)TriggerAnimation__GetAnimatorsDuration_fn, 0, false, ::g::Uno::Double_typeof(), 1, ::g::Fuse::Animations::AnimationVariant_typeof()),
        new uFunction("GetTimeMultiplier", NULL, (void*)TriggerAnimation__GetTimeMultiplier_fn, 0, false, ::g::Uno::Double_typeof(), 1, ::g::Fuse::Animations::AnimationVariant_typeof()),
        new uFunction("get_HasAnimators", NULL, (void*)TriggerAnimation__get_HasAnimators_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)TriggerAnimation__New1_fn, 0, true, TriggerAnimation_typeof(), 0),
        new uFunction("get_PlayMode", NULL, (void*)TriggerAnimation__get_PlayMode_fn, 0, false, ::g::Fuse::Animations::PlayMode_typeof(), 0),
        new uFunction("set_PlayMode", NULL, (void*)TriggerAnimation__set_PlayMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::PlayMode_typeof()),
        new uFunction("get_StretchDuration", NULL, (void*)TriggerAnimation__get_StretchDuration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_StretchDuration", NULL, (void*)TriggerAnimation__set_StretchDuration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_TimeMultiplier", NULL, (void*)TriggerAnimation__get_TimeMultiplier_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_TimeMultiplier", NULL, (void*)TriggerAnimation__set_TimeMultiplier_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
}

uType* TriggerAnimation_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(TriggerAnimation);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.TriggerAnimation", options);
    type->fp_build_ = TriggerAnimation_build;
    type->fp_ctor_ = (void*)TriggerAnimation__New1_fn;
    return type;
}

// public generated TriggerAnimation() :3628
void TriggerAnimation__ctor__fn(TriggerAnimation* __this)
{
    __this->ctor_();
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators() :3634
void TriggerAnimation__get_Animators_fn(TriggerAnimation* __this, uObject** __retval)
{
    *__retval = __this->Animators();
}

// public Fuse.Animations.TriggerAnimation get_Backward() :3649
void TriggerAnimation__get_Backward_fn(TriggerAnimation* __this, TriggerAnimation** __retval)
{
    *__retval = __this->Backward();
}

// public void set_Backward(Fuse.Animations.TriggerAnimation value) :3655
void TriggerAnimation__set_Backward_fn(TriggerAnimation* __this, TriggerAnimation* value)
{
    __this->Backward(value);
}

// internal Fuse.Animations.AnimatorState[] CreateAnimatorsState(Fuse.Animations.AnimationVariant variant, Fuse.Visual elm) :3661
void TriggerAnimation__CreateAnimatorsState_fn(TriggerAnimation* __this, int* variant, ::g::Fuse::Visual* elm, uArray** __retval)
{
    *__retval = __this->CreateAnimatorsState(*variant, elm);
}

// internal Fuse.Animations.Player CreatePlayer([Fuse.Visual node], [Fuse.Animations.AnimationVariant variant]) :3792
void TriggerAnimation__CreatePlayer_fn(TriggerAnimation* __this, ::g::Fuse::Visual* node, int* variant, ::g::Fuse::Animations::Player** __retval)
{
    *__retval = __this->CreatePlayer(node, *variant);
}

// internal Fuse.Animations.TriggerAnimationState CreateState([Fuse.Visual elm]) :3780
void TriggerAnimation__CreateState_fn(TriggerAnimation* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimationState** __retval)
{
    *__retval = __this->CreateState(elm);
}

// public double get_CrossFadeDuration() :3725
void TriggerAnimation__get_CrossFadeDuration_fn(TriggerAnimation* __this, double* __retval)
{
    *__retval = __this->CrossFadeDuration();
}

// public void set_CrossFadeDuration(double value) :3726
void TriggerAnimation__set_CrossFadeDuration_fn(TriggerAnimation* __this, double* value)
{
    __this->CrossFadeDuration(*value);
}

// public double GetAnimatorsDuration(Fuse.Animations.AnimationVariant variant) :3676
void TriggerAnimation__GetAnimatorsDuration_fn(TriggerAnimation* __this, int* variant, double* __retval)
{
    *__retval = __this->GetAnimatorsDuration(*variant);
}

// public double GetTimeMultiplier(Fuse.Animations.AnimationVariant variant) :3735
void TriggerAnimation__GetTimeMultiplier_fn(TriggerAnimation* __this, int* variant, double* __retval)
{
    *__retval = __this->GetTimeMultiplier(*variant);
}

// public bool get_HasAnimators() :3643
void TriggerAnimation__get_HasAnimators_fn(TriggerAnimation* __this, bool* __retval)
{
    *__retval = __this->HasAnimators();
}

// internal bool get_HasDirectionVariant() :3760
void TriggerAnimation__get_HasDirectionVariant_fn(TriggerAnimation* __this, bool* __retval)
{
    *__retval = __this->HasDirectionVariant();
}

// public generated TriggerAnimation New() :3628
void TriggerAnimation__New1_fn(TriggerAnimation** __retval)
{
    *__retval = TriggerAnimation::New1();
}

// private void OnTimeChanged() :3729
void TriggerAnimation__OnTimeChanged_fn(TriggerAnimation* __this)
{
    __this->OnTimeChanged();
}

// public Fuse.Animations.PlayMode get_PlayMode() :3808
void TriggerAnimation__get_PlayMode_fn(TriggerAnimation* __this, int* __retval)
{
    *__retval = __this->PlayMode();
}

// public void set_PlayMode(Fuse.Animations.PlayMode value) :3809
void TriggerAnimation__set_PlayMode_fn(TriggerAnimation* __this, int* value)
{
    __this->PlayMode(*value);
}

// internal Fuse.Animations.AnimationVariant RestrictVariant(Fuse.Animations.AnimationVariant variant) :3785
void TriggerAnimation__RestrictVariant_fn(TriggerAnimation* __this, int* variant, int* __retval)
{
    *__retval = __this->RestrictVariant(*variant);
}

// public double get_StretchDuration() :3711
void TriggerAnimation__get_StretchDuration_fn(TriggerAnimation* __this, double* __retval)
{
    *__retval = __this->StretchDuration();
}

// public void set_StretchDuration(double value) :3712
void TriggerAnimation__set_StretchDuration_fn(TriggerAnimation* __this, double* value)
{
    __this->StretchDuration(*value);
}

// internal generated void add_TimeChanged(Uno.Action value) :3756
void TriggerAnimation__add_TimeChanged_fn(TriggerAnimation* __this, uDelegate* value)
{
    __this->add_TimeChanged(value);
}

// internal generated void remove_TimeChanged(Uno.Action value) :3756
void TriggerAnimation__remove_TimeChanged_fn(TriggerAnimation* __this, uDelegate* value)
{
    __this->remove_TimeChanged(value);
}

// public double get_TimeMultiplier() :3696
void TriggerAnimation__get_TimeMultiplier_fn(TriggerAnimation* __this, double* __retval)
{
    *__retval = __this->TimeMultiplier();
}

// public void set_TimeMultiplier(double value) :3697
void TriggerAnimation__set_TimeMultiplier_fn(TriggerAnimation* __this, double* value)
{
    __this->TimeMultiplier(*value);
}

// public generated TriggerAnimation() [instance] :3628
void TriggerAnimation::ctor_()
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", ".ctor()");
    _crossFadeDuration = 0.5;
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators() [instance] :3634
uObject* TriggerAnimation::Animators()
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "get_Animators()");

    if (_animators == NULL)
        _animators = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[58/*Uno.Collections.List<Fuse.Animations.Animator>*/]));

    return (uObject*)_animators;
}

// public Fuse.Animations.TriggerAnimation get_Backward() [instance] :3649
TriggerAnimation* TriggerAnimation::Backward()
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "get_Backward()");

    if (_backward == NULL)
        _backward = TriggerAnimation::New1();

    return _backward;
}

// public void set_Backward(Fuse.Animations.TriggerAnimation value) [instance] :3655
void TriggerAnimation::Backward(TriggerAnimation* value)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "set_Backward(Fuse.Animations.TriggerAnimation)");
    _backward = value;
}

// internal Fuse.Animations.AnimatorState[] CreateAnimatorsState(Fuse.Animations.AnimationVariant variant, Fuse.Visual elm) [instance] :3661
uArray* TriggerAnimation::CreateAnimatorsState(int variant, ::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "CreateAnimatorsState(Fuse.Animations.AnimationVariant,Fuse.Visual)");
    ::g::Fuse::Animations::CreateStateParams* collection1;
    ::g::Fuse::Animations::Animator* ret3;
    collection1 = ::g::Fuse::Animations::CreateStateParams::New1();
    uPtr(collection1)->Variant = variant;
    uPtr(collection1)->TotalDuration = GetAnimatorsDuration(variant);
    uPtr(collection1)->Attached = elm;
    ::g::Fuse::Animations::CreateStateParams* csp = collection1;

    if (_animators == NULL)
        return uArray::New(::TYPES[57/*Fuse.Animations.AnimatorState[]*/], 0);

    uArray* state = uArray::New(::TYPES[57/*Fuse.Animations.AnimatorState[]*/], uPtr(_animators)->Count());

    for (int i = 0; i < uPtr(_animators)->Count(); ++i)
        uPtr(state)->Strong< ::g::Fuse::Animations::AnimatorState*>(i) = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_animators), uCRef<int>(i), &ret3), ret3))->CreateState(csp);

    return state;
}

// internal Fuse.Animations.Player CreatePlayer([Fuse.Visual node], [Fuse.Animations.AnimationVariant variant]) [instance] :3792
::g::Fuse::Animations::Player* TriggerAnimation::CreatePlayer(::g::Fuse::Visual* node, int variant)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "CreatePlayer([Fuse.Visual],[Fuse.Animations.AnimationVariant])");
    variant = RestrictVariant(variant);

    if (variant == 0)
        return ::g::Fuse::Animations::Player::New1(node, this, 0, PlayMode());

    if (_backward != NULL)
        return ::g::Fuse::Animations::Player::New1(node, _backward, 0, PlayMode());

    return ::g::Fuse::Animations::Player::New1(node, this, 1, PlayMode());
}

// internal Fuse.Animations.TriggerAnimationState CreateState([Fuse.Visual elm]) [instance] :3780
::g::Fuse::Animations::TriggerAnimationState* TriggerAnimation::CreateState(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "CreateState([Fuse.Visual])");
    return ::g::Fuse::Animations::TriggerAnimationState::New1(this, elm);
}

// public double get_CrossFadeDuration() [instance] :3725
double TriggerAnimation::CrossFadeDuration()
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "get_CrossFadeDuration()");
    return _crossFadeDuration;
}

// public void set_CrossFadeDuration(double value) [instance] :3726
void TriggerAnimation::CrossFadeDuration(double value)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "set_CrossFadeDuration(double)");
    _crossFadeDuration = value;
}

// public double GetAnimatorsDuration(Fuse.Animations.AnimationVariant variant) [instance] :3676
double TriggerAnimation::GetAnimatorsDuration(int variant)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "GetAnimatorsDuration(Fuse.Animations.AnimationVariant)");
    ::g::Fuse::Animations::Animator* ret4;

    if ((variant == 1) && (_backward != NULL))
        return uPtr(_backward)->GetAnimatorsDuration(0);

    if (_animators == NULL)
        return 0.0;

    double max = 0.0;
    int c = uPtr(_animators)->Count();

    for (int i = 0; i < c; ++i)
        max = ::g::Uno::Math::Max(max, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_animators), uCRef<int>(i), &ret4), ret4))->GetDurationWithDelay(variant));

    return max;
}

// public double GetTimeMultiplier(Fuse.Animations.AnimationVariant variant) [instance] :3735
double TriggerAnimation::GetTimeMultiplier(int variant)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "GetTimeMultiplier(Fuse.Animations.AnimationVariant)");

    if (_hasStretchDuration)
    {
        double dur = GetAnimatorsDuration(variant);

        if (_stretchDuration < 9.9999997473787516e-06)
            return 1.0;

        double mult = dur / _stretchDuration;

        if (_hasTimeMultiplier)
            mult = mult * TimeMultiplier();

        return mult;
    }

    if (_hasTimeMultiplier)
        return TimeMultiplier();

    return 1.0;
}

// public bool get_HasAnimators() [instance] :3643
bool TriggerAnimation::HasAnimators()
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "get_HasAnimators()");
    return (_animators != NULL) && (uPtr(_animators)->Count() > 0);
}

// internal bool get_HasDirectionVariant() [instance] :3760
bool TriggerAnimation::HasDirectionVariant()
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "get_HasDirectionVariant()");
    ::g::Fuse::Animations::Animator* ret5;

    if (_animators == NULL)
        return false;

    bool has = false;
    int c = uPtr(_animators)->Count();

    for (int i = 0; i < c; ++i)
    {
        int v = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_animators), uCRef<int>(i), &ret5), ret5))->AnimatorVariant();

        if (v == 2)
            has = true;

        if (v == 1)
            return false;
    }

    return has;
}

// private void OnTimeChanged() [instance] :3729
void TriggerAnimation::OnTimeChanged()
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "OnTimeChanged()");

    if (::g::Uno::Delegate::op_Inequality(TimeChanged1, NULL))
        uPtr(TimeChanged1)->InvokeVoid();
}

// public Fuse.Animations.PlayMode get_PlayMode() [instance] :3808
int TriggerAnimation::PlayMode()
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "get_PlayMode()");
    return _playMode;
}

// public void set_PlayMode(Fuse.Animations.PlayMode value) [instance] :3809
void TriggerAnimation::PlayMode(int value)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "set_PlayMode(Fuse.Animations.PlayMode)");
    _playMode = value;
}

// internal Fuse.Animations.AnimationVariant RestrictVariant(Fuse.Animations.AnimationVariant variant) [instance] :3785
int TriggerAnimation::RestrictVariant(int variant)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "RestrictVariant(Fuse.Animations.AnimationVariant)");

    if (!HasDirectionVariant() && (_backward == NULL))
        return 0;

    return variant;
}

// public double get_StretchDuration() [instance] :3711
double TriggerAnimation::StretchDuration()
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "get_StretchDuration()");
    return _stretchDuration;
}

// public void set_StretchDuration(double value) [instance] :3712
void TriggerAnimation::StretchDuration(double value)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "set_StretchDuration(double)");

    if ((_stretchDuration == value) && _hasStretchDuration)
        return;

    _stretchDuration = value;
    _hasStretchDuration = true;
    OnTimeChanged();
}

// internal generated void add_TimeChanged(Uno.Action value) [instance] :3756
void TriggerAnimation::add_TimeChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "add_TimeChanged(Uno.Action)");
    TimeChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TimeChanged1, value), ::TYPES[2/*Uno.Action*/]);
}

// internal generated void remove_TimeChanged(Uno.Action value) [instance] :3756
void TriggerAnimation::remove_TimeChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "remove_TimeChanged(Uno.Action)");
    TimeChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TimeChanged1, value), ::TYPES[2/*Uno.Action*/]);
}

// public double get_TimeMultiplier() [instance] :3696
double TriggerAnimation::TimeMultiplier()
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "get_TimeMultiplier()");
    return _timeMultiplier;
}

// public void set_TimeMultiplier(double value) [instance] :3697
void TriggerAnimation::TimeMultiplier(double value)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "set_TimeMultiplier(double)");

    if ((_timeMultiplier == value) && _hasTimeMultiplier)
        return;

    _timeMultiplier = value;
    _hasTimeMultiplier = true;
    OnTimeChanged();
}

// public generated TriggerAnimation New() [static] :3628
TriggerAnimation* TriggerAnimation::New1()
{
    TriggerAnimation* obj2 = (TriggerAnimation*)uNew(TriggerAnimation_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.31.5/$.uno
// ----------------------------------------------------------

// internal sealed class TriggerAnimationState :3820
// {
static void TriggerAnimationState_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[44] = ::g::Fuse::Animations::IPlayerFeedback_typeof();
    ::TYPES[6] = uObject_typeof();
    ::TYPES[8] = ::g::Uno::Int_typeof();
    ::TYPES[60] = ::g::Fuse::Animations::Player_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(TriggerAnimationState_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Animations::Player_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _backPlayer), 0,
        ::g::Fuse::Animations::Player_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _curPlayer), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _curPlayerVariant), 0,
        ::g::Fuse::Animations::Player_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _forePlayer), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _node), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _prevProgress), 0,
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, Feedback), 0,
        ::g::Fuse::Animations::TriggerAnimation_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _Animation), 0);
}

TriggerAnimationState_type* TriggerAnimationState_typeof()
{
    static uSStrong<TriggerAnimationState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TriggerAnimationState);
    options.TypeSize = sizeof(TriggerAnimationState_type);
    type = (TriggerAnimationState_type*)uClassType::New("Fuse.Animations.TriggerAnimationState", options);
    type->fp_build_ = TriggerAnimationState_build;
    type->interface0.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))TriggerAnimationState__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface0.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))TriggerAnimationState__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface0.fp_OnStable = (void(*)(uObject*, uObject*))TriggerAnimationState__FuseAnimationsIPlayerFeedbackOnStable_fn;
    return type;
}

// internal TriggerAnimationState(Fuse.Animations.TriggerAnimation animation, Fuse.Visual node) :3825
void TriggerAnimationState__ctor__fn(TriggerAnimationState* __this, ::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Visual* node)
{
    __this->ctor_(animation, node);
}

// private generated Fuse.Animations.TriggerAnimation get_Animation() :3822
void TriggerAnimationState__get_Animation_fn(TriggerAnimationState* __this, ::g::Fuse::Animations::TriggerAnimation** __retval)
{
    *__retval = __this->Animation();
}

// private generated void set_Animation(Fuse.Animations.TriggerAnimation value) :3822
void TriggerAnimationState__set_Animation_fn(TriggerAnimationState* __this, ::g::Fuse::Animations::TriggerAnimation* value)
{
    __this->Animation(value);
}

// public double get_CurrentAnimatorsDuration() :4016
void TriggerAnimationState__get_CurrentAnimatorsDuration_fn(TriggerAnimationState* __this, double* __retval)
{
    *__retval = __this->CurrentAnimatorsDuration();
}

// public void Dispose() :3836
void TriggerAnimationState__Dispose_fn(TriggerAnimationState* __this)
{
    __this->Dispose();
}

// private void Fuse.Animations.IPlayerFeedback.OnPlaybackDone(object s) :3880
void TriggerAnimationState__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn(TriggerAnimationState* __this, uObject* s)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "Fuse.Animations.IPlayerFeedback.OnPlaybackDone(object)");

    if (s != __this->_curPlayer)
        return;

    if (__this->Feedback != NULL)
        ::g::Fuse::Animations::IPlayerFeedback::OnPlaybackDone(uInterface(uPtr(__this->Feedback), ::TYPES[44/*Fuse.Animations.IPlayerFeedback*/]), __this);
}

// private void Fuse.Animations.IPlayerFeedback.OnProgressUpdated(object s) :3869
void TriggerAnimationState__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn(TriggerAnimationState* __this, uObject* s)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "Fuse.Animations.IPlayerFeedback.OnProgressUpdated(object)");

    if (s != __this->_curPlayer)
        return;

    if (__this->Feedback != NULL)
        ::g::Fuse::Animations::IPlayerFeedback::OnProgressUpdated(uInterface(uPtr(__this->Feedback), ::TYPES[44/*Fuse.Animations.IPlayerFeedback*/]), __this);

    __this->_prevProgress = __this->Progress();
}

// private void Fuse.Animations.IPlayerFeedback.OnStable(object s) :3889
void TriggerAnimationState__FuseAnimationsIPlayerFeedbackOnStable_fn(TriggerAnimationState* __this, uObject* s)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "Fuse.Animations.IPlayerFeedback.OnStable(object)");

    if (s != __this->_curPlayer)
        return;

    if (__this->Feedback != NULL)
        ::g::Fuse::Animations::IPlayerFeedback::OnStable(uInterface(uPtr(__this->Feedback), ::TYPES[44/*Fuse.Animations.IPlayerFeedback*/]), __this);
}

// private Fuse.Animations.Player GetCurrentPlayer(Fuse.Animations.AnimationVariant tendTo, Fuse.Animations.TriggerAnimationState.SeekFlags flags) :4027
void TriggerAnimationState__GetCurrentPlayer_fn(TriggerAnimationState* __this, int* tendTo, int* flags, ::g::Fuse::Animations::Player** __retval)
{
    *__retval = __this->GetCurrentPlayer(*tendTo, *flags);
}

// private Fuse.Animations.Player GetPlayer([Fuse.Animations.AnimationVariant variant], [bool noFade]) :3908
void TriggerAnimationState__GetPlayer_fn(TriggerAnimationState* __this, int* variant, bool* noFade, ::g::Fuse::Animations::Player** __retval)
{
    *__retval = __this->GetPlayer(*variant, *noFade);
}

// public bool get_IsStable() :3900
void TriggerAnimationState__get_IsStable_fn(TriggerAnimationState* __this, bool* __retval)
{
    *__retval = __this->IsStable();
}

// internal TriggerAnimationState New(Fuse.Animations.TriggerAnimation animation, Fuse.Visual node) :3825
void TriggerAnimationState__New1_fn(::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Visual* node, TriggerAnimationState** __retval)
{
    *__retval = TriggerAnimationState::New1(animation, node);
}

// private void OnTimeChanged() :3854
void TriggerAnimationState__OnTimeChanged_fn(TriggerAnimationState* __this)
{
    __this->OnTimeChanged();
}

// public void PlayEnd(bool on) :3988
void TriggerAnimationState__PlayEnd_fn(TriggerAnimationState* __this, bool* on)
{
    __this->PlayEnd(*on);
}

// public void PlayOff() :3976
void TriggerAnimationState__PlayOff_fn(TriggerAnimationState* __this)
{
    __this->PlayOff();
}

// public void PlayOn() :3982
void TriggerAnimationState__PlayOn_fn(TriggerAnimationState* __this)
{
    __this->PlayOn();
}

// public void PlayToProgress(double progress, [Fuse.Animations.AnimationVariant tendTo], [Fuse.Animations.TriggerAnimationState.SeekFlags flags]) :4054
void TriggerAnimationState__PlayToProgress_fn(TriggerAnimationState* __this, double* progress, int* tendTo, int* flags)
{
    __this->PlayToProgress(*progress, *tendTo, *flags);
}

// public double get_PreviousProgress() :4008
void TriggerAnimationState__get_PreviousProgress_fn(TriggerAnimationState* __this, double* __retval)
{
    *__retval = __this->PreviousProgress();
}

// public double get_Progress() :3998
void TriggerAnimationState__get_Progress_fn(TriggerAnimationState* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public bool get_ProgressFullOff() :4025
void TriggerAnimationState__get_ProgressFullOff_fn(TriggerAnimationState* __this, bool* __retval)
{
    *__retval = __this->ProgressFullOff();
}

// public bool get_ProgressFullOn() :4024
void TriggerAnimationState__get_ProgressFullOn_fn(TriggerAnimationState* __this, bool* __retval)
{
    *__retval = __this->ProgressFullOn();
}

// public void SeekProgress(double newProgress, [Fuse.Animations.AnimationVariant tendTo], [Fuse.Animations.TriggerAnimationState.SeekFlags flags]) :4044
void TriggerAnimationState__SeekProgress_fn(TriggerAnimationState* __this, double* newProgress, int* tendTo, int* flags)
{
    __this->SeekProgress(*newProgress, *tendTo, *flags);
}

// private void TrackProgress(Fuse.Animations.Player player) :3863
void TriggerAnimationState__TrackProgress_fn(TriggerAnimationState* __this, ::g::Fuse::Animations::Player* player)
{
    __this->TrackProgress(player);
}

// internal TriggerAnimationState(Fuse.Animations.TriggerAnimation animation, Fuse.Visual node) [instance] :3825
void TriggerAnimationState::ctor_(::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Visual* node)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", ".ctor(Fuse.Animations.TriggerAnimation,Fuse.Visual)");
    Animation(animation);
    uPtr(Animation())->add_TimeChanged(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)TriggerAnimationState__OnTimeChanged_fn, this));
    _node = node;
}

// private generated Fuse.Animations.TriggerAnimation get_Animation() [instance] :3822
::g::Fuse::Animations::TriggerAnimation* TriggerAnimationState::Animation()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "get_Animation()");
    return _Animation;
}

// private generated void set_Animation(Fuse.Animations.TriggerAnimation value) [instance] :3822
void TriggerAnimationState::Animation(::g::Fuse::Animations::TriggerAnimation* value)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "set_Animation(Fuse.Animations.TriggerAnimation)");
    _Animation = value;
}

// public double get_CurrentAnimatorsDuration() [instance] :4016
double TriggerAnimationState::CurrentAnimatorsDuration()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "get_CurrentAnimatorsDuration()");

    if (_curPlayer == NULL)
        return uPtr(Animation())->GetAnimatorsDuration(0);

    return uPtr(_curPlayer)->AnimatorsDuration();
}

// public void Dispose() [instance] :3836
void TriggerAnimationState::Dispose()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "Dispose()");

    if (_forePlayer != NULL)
    {
        uPtr(_forePlayer)->Disable();
        _forePlayer = NULL;
    }

    if (_backPlayer != NULL)
    {
        uPtr(_backPlayer)->Disable();
        _backPlayer = NULL;
    }

    _curPlayer = NULL;
    _node = NULL;
}

// private Fuse.Animations.Player GetCurrentPlayer(Fuse.Animations.AnimationVariant tendTo, Fuse.Animations.TriggerAnimationState.SeekFlags flags) [instance] :4027
::g::Fuse::Animations::Player* TriggerAnimationState::GetCurrentPlayer(int tendTo, int flags)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "GetCurrentPlayer(Fuse.Animations.AnimationVariant,Fuse.Animations.TriggerAnimationState.SeekFlags)");

    if (!((flags & 1) == 1))
    {
        if (((_curPlayer != NULL) && (uPtr(_curPlayer)->Progress() < 1.0)) && (uPtr(_curPlayer)->Progress() > 0.0))
            return _curPlayer;
    }

    return uAs< ::g::Fuse::Animations::Player*>(GetPlayer(tendTo, false), ::TYPES[60/*Fuse.Animations.Player*/]);
}

// private Fuse.Animations.Player GetPlayer([Fuse.Animations.AnimationVariant variant], [bool noFade]) [instance] :3908
::g::Fuse::Animations::Player* TriggerAnimationState::GetPlayer(int variant, bool noFade)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "GetPlayer([Fuse.Animations.AnimationVariant],[bool])");
    ::g::Fuse::Animations::Player* cur;
    ::g::Fuse::Animations::Player* prev;
    variant = uPtr(Animation())->RestrictVariant(variant);

    if ((_curPlayer != NULL) && (_curPlayerVariant == variant))
        return _curPlayer;

    bool isNew = false;

    if (variant == 0)
    {
        if (_forePlayer == NULL)
        {
            _forePlayer = uPtr(Animation())->CreatePlayer(_node, variant);
            isNew = true;
        }

        cur = _forePlayer;
        prev = _backPlayer;
    }
    else
    {
        if (_backPlayer == NULL)
        {
            _backPlayer = uPtr(Animation())->CreatePlayer(_node, variant);
            uPtr(_backPlayer)->SeekProgress(1.0, false);
            isNew = true;
        }

        cur = _backPlayer;
        prev = _forePlayer;
    }

    if (isNew)
        TrackProgress(cur);

    _curPlayer = cur;
    _curPlayerVariant = variant;

    if (prev != NULL)
    {
        double prevProgress = uPtr(prev)->Progress();
        prev->SeekProgress(prevProgress, false);
        uPtr(cur)->SeekProgress(prevProgress, false);

        if (isNew)
            uPtr(cur)->Strength(0.0);

        double remainTime = prev->RemainTime();

        if ((prev->IsSyncState() || (remainTime < 9.9999997473787516e-06)) || noFade)
        {
            uPtr(prev)->Strength(0.0);
            uPtr(cur)->Strength(1.0);
        }
        else
        {
            double fadeTime = ::g::Uno::Math::Min(remainTime, uPtr(Animation())->CrossFadeDuration());
            uPtr(cur)->FadeIn(fadeTime);
            uPtr(prev)->FadeOut(fadeTime);
        }
    }

    return cur;
}

// public bool get_IsStable() [instance] :3900
bool TriggerAnimationState::IsStable()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "get_IsStable()");

    if (_curPlayer == NULL)
        return true;

    return uPtr(_curPlayer)->IsStable();
}

// private void OnTimeChanged() [instance] :3854
void TriggerAnimationState::OnTimeChanged()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "OnTimeChanged()");

    if (_forePlayer != NULL)
        uPtr(_forePlayer)->TimeChanged();

    if (_backPlayer != NULL)
        uPtr(_backPlayer)->TimeChanged();
}

// public void PlayEnd(bool on) [instance] :3988
void TriggerAnimationState::PlayEnd(bool on)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "PlayEnd(bool)");

    if (on)
        PlayOn();
    else
        PlayOff();
}

// public void PlayOff() [instance] :3976
void TriggerAnimationState::PlayOff()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "PlayOff()");
    ::g::Fuse::Animations::Player* p = GetPlayer(1, false);
    uPtr(p)->PlayToStart();
}

// public void PlayOn() [instance] :3982
void TriggerAnimationState::PlayOn()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "PlayOn()");
    ::g::Fuse::Animations::Player* p = GetPlayer(0, false);
    uPtr(p)->PlayToEnd();
}

// public void PlayToProgress(double progress, [Fuse.Animations.AnimationVariant tendTo], [Fuse.Animations.TriggerAnimationState.SeekFlags flags]) [instance] :4054
void TriggerAnimationState::PlayToProgress(double progress, int tendTo, int flags)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "PlayToProgress(double,[Fuse.Animations.AnimationVariant],[Fuse.Animations.TriggerAnimationState.SeekFlags])");
    ::g::Fuse::Animations::Player* player = GetCurrentPlayer(tendTo, flags);
    uPtr(player)->PlayToProgress(progress);
}

// public double get_PreviousProgress() [instance] :4008
double TriggerAnimationState::PreviousProgress()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "get_PreviousProgress()");
    return _prevProgress;
}

// public double get_Progress() [instance] :3998
double TriggerAnimationState::Progress()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "get_Progress()");

    if (_curPlayer != NULL)
        return uPtr(_curPlayer)->Progress();

    return 0.0;
}

// public bool get_ProgressFullOff() [instance] :4025
bool TriggerAnimationState::ProgressFullOff()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "get_ProgressFullOff()");
    return Progress() <= 0.0;
}

// public bool get_ProgressFullOn() [instance] :4024
bool TriggerAnimationState::ProgressFullOn()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "get_ProgressFullOn()");
    return Progress() >= 1.0;
}

// public void SeekProgress(double newProgress, [Fuse.Animations.AnimationVariant tendTo], [Fuse.Animations.TriggerAnimationState.SeekFlags flags]) [instance] :4044
void TriggerAnimationState::SeekProgress(double newProgress, int tendTo, int flags)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "SeekProgress(double,[Fuse.Animations.AnimationVariant],[Fuse.Animations.TriggerAnimationState.SeekFlags])");
    bool bypassUpdate = (flags & 2) == 2;
    ::g::Fuse::Animations::Player* player = GetCurrentPlayer(tendTo, flags);

    if (bypassUpdate)
        _prevProgress = newProgress;

    uPtr(player)->SeekProgress(newProgress, !bypassUpdate);
}

// private void TrackProgress(Fuse.Animations.Player player) [instance] :3863
void TriggerAnimationState::TrackProgress(::g::Fuse::Animations::Player* player)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "TrackProgress(Fuse.Animations.Player)");
    uPtr(player)->Feedback = (uObject*)this;
}

// internal TriggerAnimationState New(Fuse.Animations.TriggerAnimation animation, Fuse.Visual node) [static] :3825
TriggerAnimationState* TriggerAnimationState::New1(::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Visual* node)
{
    TriggerAnimationState* obj1 = (TriggerAnimationState*)uNew(TriggerAnimationState_typeof());
    obj1->ctor_(animation, node);
    return obj1;
}
// }

}}} // ::g::Fuse::Animations
