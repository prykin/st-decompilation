#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=3, ignored=0, unknown=0 */

int __thiscall FUN_006042d0(void *this,STMessageId param_1)

{
  int iVar1;
  int iVar2;
  STMessage *pSVar3;
  uint *puVar4;
  STMessage local_24;

  iVar2 = 0;
  pSVar3 = &local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    pSVar3->unknown_00 = 0;
    pSVar3 = (STMessage *)&pSVar3->unknown_04;
  }
  local_24.id = param_1;
  iVar1 = 0;
  if (0 < STField<int>(this,0x269)) {
    puVar4 = (undefined4 *)((int)this + 0x219);
    do {
      if ((STParticleC *)*puVar4 != nullptr) {
        iVar1 = iVar1 + 1;
        /* ST_CALLSITE[0060430F]: CALL 0x00405c9a; direct=00405C9A STParticleC::GetMessage */
        STParticleC::GetMessage((STParticleC *)*puVar4,&local_24);
      }
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar2 < STField<int>(this,0x269));
  }
  return iVar1;
}

