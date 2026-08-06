#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0055C180 -> 0055BEB0 @ 0055C1FD | 0055C290 -> 0055BEB0 @ 0055C2BA | 005A4350 ->
   0055BEB0 @ 005A6806 */

void __thiscall FUN_0055beb0(void *this,DWORD lastError)

{
  int iVar1;

  iVar1 = CFsgsConnection::IsInitialized(this);
  if (((iVar1 != 0) && (STField<undefined1>(this,8) = 0, STField<char>(this,9) == '\0')) &&
     (g_fSGS_0081174C != nullptr)) {
    STField<undefined4>(this,0x1b) = 0x614f;
    STField<DWORD>(this,0x1f) = lastError;
    g_fSGS_0081174C->GetMessage((STMessage *)((int)this + 0xb));
  }
  return;
}

