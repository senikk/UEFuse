// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.31.1/Source/Uno/Collections/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct ReadOnlyCollection;}}}

namespace g{
namespace Uno{
namespace Collections{

// public sealed class ReadOnlyCollection<T> :1481
// {
struct ReadOnlyCollection_type : uType
{
    ::g::Uno::Collections::IEnumerable interface0;
};

ReadOnlyCollection_type* ReadOnlyCollection_typeof();
void ReadOnlyCollection__ctor__fn(ReadOnlyCollection* __this, uObject* list);
void ReadOnlyCollection__get_Count_fn(ReadOnlyCollection* __this, int* __retval);
void ReadOnlyCollection__GetEnumerator_fn(ReadOnlyCollection* __this, uObject** __retval);
void ReadOnlyCollection__get_Item_fn(ReadOnlyCollection* __this, int* index, uTRef __retval);
void ReadOnlyCollection__New1_fn(uType* __type, uObject* list, ReadOnlyCollection** __retval);

struct ReadOnlyCollection : uObject
{
    uStrong<uObject*> _list;

    void ctor_(uObject* list);
    int Count();
    uObject* GetEnumerator();
    template<class T>
    T Item(int index) { T __retval; return ReadOnlyCollection__get_Item_fn(this, &index, &__retval), __retval; }
    static ReadOnlyCollection* New1(uType* __type, uObject* list);
};
// }

}}} // ::g::Uno::Collections
