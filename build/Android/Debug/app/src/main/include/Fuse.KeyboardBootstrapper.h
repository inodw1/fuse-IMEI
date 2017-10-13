// This file was generated based on C:/Users/Inod/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.3.0-rc2/KeyboardBootstrapper.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct KeyboardBootstrapper;}}
namespace g{namespace Uno{namespace Platform{struct KeyEventArgs;}}}

namespace g{
namespace Fuse{

// internal sealed class KeyboardBootstrapper :10
// {
uType* KeyboardBootstrapper_typeof();
void KeyboardBootstrapper__OnKeyPressed_fn(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args);
void KeyboardBootstrapper__OnKeyReleased_fn(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args);

struct KeyboardBootstrapper : uObject
{
    static void OnKeyPressed(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args);
    static void OnKeyReleased(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args);
};
// }

}} // ::g::Fuse
