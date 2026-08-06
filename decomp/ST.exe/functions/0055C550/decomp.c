#include "../../pseudocode_runtime.h"


void __fastcall FUN_0055c550(int param_1)

{
  if ((*(char *)(param_1 + 9) == '\0') && (g_fSGS_0081174C != nullptr)) {
    *(undefined4 *)(param_1 + 0x1b) = 0x6151;
    g_fSGS_0081174C->GetMessage((STMessage *)(param_1 + 0xb));
  }
  return;
}

