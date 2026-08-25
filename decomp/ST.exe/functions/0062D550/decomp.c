#include "../../pseudocode_runtime.h"


uint * FUN_0062d550(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int local_c;
  uint *local_8;

  piVar2 = param_2;
  iVar5 = 0;
  iVar3 = 0;
  *param_2 = 0;
  uint param_2_after_write = 0x8; /* compiler stack-slot lifetime split */
  piVar7 = param_1;
  do {
    iVar1 = *piVar7;
    if (iVar1 != 0) {
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x1c + STField<int>(iVar1,0xC) * STField<int>(iVar1,0x8);
    }
    piVar7 = piVar7 + 1;
    param_2_after_write = ((int)param_2_after_write + -1);
  } while (param_2_after_write != 0);
  if (iVar5 != 0) {
    uVar6 = *piVar2 + iVar5 + iVar3 * 4;
    *piVar2 = uVar6;
    puVar4 = Library::DKW::LIB::MemAlloc(uVar6);
    local_c = 8;
    puVar8 = puVar4;
    do {
      if ((uint *)*param_1 != nullptr) {
        local_8 = FUN_006b0020((uint *)*param_1,(int *)&param_2_after_write);
        if ((local_8 != nullptr) && (param_2_after_write != 0)) {
          *puVar8 = (uint)param_2_after_write;
          puVar9 = local_8;
          puVar10 = puVar8 + 1;
          for (uVar6 = (uint)param_2_after_write >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar6 = (uint)param_2_after_write & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(char *)puVar10 = (char)*puVar9;
            puVar9 = (uint *)((int)puVar9 + 1);
            puVar10 = (uint *)((int)puVar10 + 1);
          }
          FreeAndNull(&local_8);
          puVar8 = (uint *)((int)(puVar8 + 1) + (int)param_2_after_write);
        }
      }
      param_1 = param_1 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    return puVar4;
  }
  return nullptr;
}

