#include "../../pseudocode_runtime.h"


/* Library Function - Single Match
    public: virtual long __thiscall CBaseRenderer::EndOfStream(void)

   Library: Visual Studio 2012 Release */

long __thiscall CBaseRenderer::EndOfStream(CBaseRenderer *this)

{
  if ((*(int *)(this + 0x14) != 0) && (*(undefined4 *)(this + 0x70) = 1, *(int *)(this + 0x6c) == 0)
     ) {
    /* ST_CALLSITE[0074A12C]: CALL dword ptr [0x0085bb80] */
    SetEvent(*(HANDLE *)(this + 0x5c));
    if (*(int *)(this + 100) != 0) {
      /* ST_CALLSITE[0074A13C]: CALL dword ptr [EAX + 0x60] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)this + 0x60))();
    }
  }
  return 0;
}

