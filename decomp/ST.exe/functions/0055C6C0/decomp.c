#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0055C6D6 CMP ECX,0x2 classifies dword parameter loaded at 0055C6D3 | 0055C6DB CMP
   ECX,0x4 classifies dword parameter loaded at 0055C6D3 */

void __thiscall FUN_0055c6c0(void *this,int param_1)

{
  if (((STField<char>(this,8) != '\0') && (STField<char>(this,9) == '\0')) &&
     (g_fSGS_0081174C != nullptr)) {
    STField<undefined4>(this,0x1b) = 0x6152;
    STField<int>(this,0x1f) = param_1;
    /* ST_CALLSITE[0055C711]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/FSGSTy;pointer:/SubmarineTitans/Recovered/STMessage */
    g_fSGS_0081174C->GetMessage((STMessage *)((int)this + 0xb));
  }
  return;
}

