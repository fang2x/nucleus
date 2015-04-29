/**
 * (c) 2015 Nucleus project. All rights reserved.
 * Released under GPL v2 license. Read LICENSE for more details.
 */

#include "builder.h"

namespace cpu {
namespace hir {

Builder::Builder() : builder(llvm::getGlobalContext())
{
}

void Builder::SetInsertPoint(const Block& block)
{
    builder.SetInsertPoint(block.bb);
}

}  // namespace hir
}  // namespace cpu