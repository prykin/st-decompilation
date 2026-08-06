#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/CBaseRenderer.cpp

// 0074A113 CBaseRenderer::EndOfStream
#line 4 "decomp/ST.exe/functions/0074A113/decomp.c"
/* Library Function - Single Match
    public: virtual long __thiscall CBaseRenderer::EndOfStream(void)

   Library: Visual Studio 2012 Release */

long __thiscall st::fn_0074A113(CBaseRenderer *this)

{
  if ((*(int *)(this + 0x14) != 0) && (*(undefined4 *)(this + 0x70) = 1, *(int *)(this + 0x6c) == 0)
     ) {
    st::external_00000015(*(HANDLE *)(this + 0x5c));
    if (*(int *)(this + 100) != 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x60))();
    }
  }
  return 0;
}

// 0074A143 CBaseRenderer::BeginFlush
#line 4 "decomp/ST.exe/functions/0074A143/decomp.c"
/* Library Function - Single Match
    public: virtual long __thiscall CBaseRenderer::BeginFlush(void)

   Library: Visual Studio 2012 Release */

long __thiscall st::fn_0074A143(CBaseRenderer *this)

{
  if (*(int *)(this + 0x14) == 1) {
    st::external_0000005B(*(HANDLE *)(this + 0x5c));
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)this + 0x28))(0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)this + 0x6c))();
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)this + 0x70))();
  st::fn_00749D5F(this);
  return 0;
}

