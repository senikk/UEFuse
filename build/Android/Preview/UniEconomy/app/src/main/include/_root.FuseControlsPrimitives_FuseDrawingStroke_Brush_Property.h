// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.31.5/.uno/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Brush.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseControlsPrimitives_FuseDrawingStroke_Brush_Property;}

namespace g{

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Brush_Property :706
// {
::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_typeof();
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__ctor_2_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name);
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Get_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Fuse::Drawing::Brush** __retval);
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__New1_fn(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseDrawingStroke_Brush_Property** __retval);
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Set_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Fuse::Drawing::Brush* v, uObject* origin);
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, bool* __retval);

struct FuseControlsPrimitives_FuseDrawingStroke_Brush_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Drawing::Stroke*> _obj;

    void ctor_2(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name);
    static FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* New1(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
