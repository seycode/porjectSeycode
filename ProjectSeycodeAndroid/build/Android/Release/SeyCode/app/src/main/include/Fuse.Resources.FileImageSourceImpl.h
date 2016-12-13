// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/0.32.14/Resources/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.IMemoryResource.h>
#include <Fuse.Resources.LoadingImageSource.h>
namespace g{namespace Fuse{namespace Resources{struct FileImageSourceImpl;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Resources{

// internal sealed class FileImageSourceImpl :137
// {
::g::Fuse::Resources::LoadingImageSource_type* FileImageSourceImpl_typeof();
void FileImageSourceImpl__AttemptLoad_fn(FileImageSourceImpl* __this);
void FileImageSourceImpl__OnDataChanged_fn(FileImageSourceImpl* __this, uObject* s, uObject* a);
void FileImageSourceImpl__SyncLoad_fn(FileImageSourceImpl* __this);

struct FileImageSourceImpl : ::g::Fuse::Resources::LoadingImageSource
{
    uStrong< ::g::Uno::UX::FileSource*> _file;

    void OnDataChanged(uObject* s, uObject* a);
    void SyncLoad();
};
// }

}}} // ::g::Fuse::Resources
