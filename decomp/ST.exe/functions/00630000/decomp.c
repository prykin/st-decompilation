#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00630000(void *this,int param_1)

{
  STT3DSprC *this_00;
  int iVar2;
  int iVar1;
  int *piVar3;
  int local_8;

  piVar3 = (int *)((int)this + 0x1e5);
  local_8 = 5;
  do {
    if (*piVar3 != 0) {
      iVar1 = thunk_FUN_0062ffd0(param_1,*(int *)(*piVar3 + 0x1c));
      *(int *)(*piVar3 + 0x2c) = iVar1;
      this_00 = *(STT3DSprC **)(*piVar3 + 0x10);
      if (this_00 != nullptr) {
        STT3DSprC::SetCurFase(this_00,'\x0e',*(uint *)(*piVar3 + 0x2c));
        STT3DSprC::ShowCurFase(this_00,'\x0e');
        iVar2 = *piVar3;
        STT3DSprC::sub_004AD3C0
                  (this_00,(float)*(int *)(iVar2 + 0x20) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(iVar2 + 0x24) * _DAT_007904f8 * _DAT_007904f0,
                   (float)*(int *)(iVar2 + 0x28) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      }
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

