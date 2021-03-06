/**
 * (c) 2014-2016 Alexandro Sanchez Bach. All rights reserved.
 * Released under GPL v2 license. Read LICENSE for more details.
 */

#pragma once

#include "nucleus/graphics/resource.h"
#include "nucleus/graphics/backend/direct3d12/direct3d12.h"

namespace gfx {
namespace direct3d12 {

class Direct3D12Resource : public virtual Resource {
public:
    ID3D12Resource* resource;

    Direct3D12Resource() : resource(nullptr) {}
    Direct3D12Resource(ID3D12Resource* resource) : resource(resource) {};

    virtual void* map() override;
    virtual bool unmap() override;
};

}  // namespace direct3d12
}  // namespace gfx
