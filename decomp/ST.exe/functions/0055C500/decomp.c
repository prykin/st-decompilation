#include "../../pseudocode_runtime.h"


void __thiscall FUN_0055c500(void *this,int param_1)

{
  STField<undefined1>(this,8) = 0;
  if (((STField<char>(this,9) == '\0') && (param_1 != 0)) && (g_fSGS_0081174C != nullptr))
  {
    STField<undefined4>(this,0x1b) = 0x6150;
    STField<int>(this,0x1f) = param_1;
    g_fSGS_0081174C->GetMessage((STMessage *)((int)this + 0xb));
  }
  return;
}

