// This file was generated based on /usr/local/share/uno/Packages/Fuse.Android/0.31.5/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct AndroidProperties;}}

namespace g{
namespace Fuse{

// public static extern class AndroidProperties :665
// {
uClassType* AndroidProperties_typeof();
void AndroidProperties__get_BuildVersion_fn(int* __retval);
void AndroidProperties__GetBuildVersion_fn(int* __retval);

struct AndroidProperties : uObject
{
    static int GetBuildVersion();
    static int BuildVersion();
};
// }

}} // ::g::Fuse
