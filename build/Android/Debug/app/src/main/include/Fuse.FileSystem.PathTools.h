// This file was generated based on C:/Users/Inod/AppData/Local/Fusetools/Packages/Fuse.FileSystem/1.3.0-rc2/PathTools.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace FileSystem{struct PathTools;}}}

namespace g{
namespace Fuse{
namespace FileSystem{

// internal static class PathTools :6
// {
uClassType* PathTools_typeof();
void PathTools__NormalizePath_fn(uString* path, uString** __retval);

struct PathTools : uObject
{
    static uString* NormalizePath(uString* path);
};
// }

}}} // ::g::Fuse::FileSystem