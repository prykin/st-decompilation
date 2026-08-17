#include "../../pseudocode_runtime.h"


void __thiscall FUN_0055c790(void *this,undefined4 param_1)

{
  if (((STField<char>(this,8) != '\0') && (STField<char>(this,9) == '\0')) &&
     (g_fSGS_0081174C != nullptr)) {
    STField<undefined4>(this,0x1b) = 0x6154;
    STField<undefined4>(this,0x1f) = param_1;
    /* ST_CALLSITE[0055C7C6]: CALL dword ptr [EDX] */
    g_fSGS_0081174C->GetMessage((STMessage *)((int)this + 0xb));
  }
  return;
}

