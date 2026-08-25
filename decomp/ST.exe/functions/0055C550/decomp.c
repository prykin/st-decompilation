#include "../../pseudocode_runtime.h"


void __fastcall FUN_0055c550(int param_1)

{
  if ((((char *)param_1)[9] == '\0') && (g_fSGS_0081174C != nullptr)) {
    *(undefined4 *)(param_1 + 0x1b) = 0x6151;
    /* ST_CALLSITE[0055C576]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/FSGSTy;pointer:/SubmarineTitans/Recovered/STMessage */
    g_fSGS_0081174C->GetMessage((STMessage *)(param_1 + 0xb));
  }
  return;
}

