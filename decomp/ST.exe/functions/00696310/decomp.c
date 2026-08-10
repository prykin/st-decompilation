#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=8, ignored=0, unknown=0 */

uint __thiscall FUN_00696310(void *this,int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;

  iVar1 = param_1 / param_2;
  if (param_1 % param_2 == 0) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (-(uint)(iVar1 != STField<int>(this,0x5833) + -1) & 4) + 3;
    }
  }
  else if (param_1 % param_2 == STField<int>(this,0x5833) + -1) {
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = (-(uint)(iVar1 != STField<int>(this,0x5837) + -1) & 3) + 2;
    }
  }
  else if (iVar1 == STField<int>(this,0x5837) + -1) {
    iVar1 = 6;
  }
  else {
    iVar1 = (-(uint)(iVar1 != 0) & 4) + 4;
  }
  uVar2 = (uint)(byte)(&DAT_0079d77c)[iVar1];
  if (param_4 != nullptr) {
    *param_4 = iVar1;
  }
  if (uVar2 != 0) {
    piVar3 = (int *)(iVar1 * 0x20 + 0x570f + (int)this);
    uVar4 = uVar2;
    do {
      iVar1 = *piVar3;
      piVar3 = piVar3 + 1;
      *param_3 = iVar1 + param_1;
      param_3 = param_3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return uVar2;
}

