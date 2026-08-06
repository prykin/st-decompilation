#include "../../pseudocode_runtime.h"


int __cdecl FUN_00428b20(int *param_1,uint param_2,uint param_3,uint *param_4)

{
  bool bVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;

  local_8 = param_3;
  piVar7 = param_1;
  do {
    uVar3 = param_2 >> 2;
    bVar9 = uVar3 == 0;
    piVar8 = piVar7;
    do {
      piVar7 = piVar8;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      piVar7 = piVar8 + 1;
      bVar9 = *piVar8 == -1;
      piVar8 = piVar7;
    } while (bVar9);
    if (!bVar9) {
      local_8 = param_3 - local_8;
      piVar7 = (int *)((int)param_1 + (param_3 - 1) * param_2);
      goto LAB_00428b85;
    }
    uVar3 = local_8 - 1;
    bVar9 = 0 < (int)local_8;
    local_8 = uVar3;
  } while (uVar3 != 0 && bVar9);
  local_8 = param_3;
  local_c = -1;
  local_10 = param_2;
  local_14 = -1;
  goto LAB_00428c07;
  while( true ) {
    piVar7 = (int *)((int)piVar8 + param_2 * -2 + uVar3);
    uVar4 = param_3 - 1;
    bVar9 = (int)param_3 < 1;
    param_3 = uVar4;
    if (uVar4 == 0 || bVar9) break;
LAB_00428b85:
    uVar3 = param_2 >> 2;
    bVar9 = uVar3 == 0;
    do {
      piVar8 = piVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      piVar8 = piVar7 + 1;
      bVar9 = *piVar7 == -1;
      piVar7 = piVar8;
    } while (bVar9);
    uVar4 = param_3;
    if (!bVar9) break;
  }
  local_c = uVar4 - 1;
  local_10 = param_2;
  local_14 = 0;
  piVar7 = (int *)((int)param_1 + local_8 * param_2);
  bVar9 = SCARRY4(local_c - local_8,1);
  iVar5 = (local_c - local_8) + 1;
  do {
    uVar3 = local_10 >> 2;
    piVar8 = piVar7;
    if (local_10 >> 2 != 0 && !bVar9) {
      do {
        if (*piVar8 != -1) {
          local_10 = (int)piVar8 - (int)piVar7;
          break;
        }
        uVar4 = uVar3 - 1;
        bVar9 = 0 < (int)uVar3;
        uVar3 = uVar4;
        piVar8 = piVar8 + 1;
      } while (uVar4 != 0 && bVar9);
    }
    uVar3 = param_2 - local_14 >> 2;
    piVar8 = (int *)((int)piVar7 + param_2);
    if (uVar3 != 0 && !SBORROW4((int)((int)piVar7 + param_2),4)) {
      do {
        if (piVar8[-1] != -1) {
          local_14 = (int)piVar8 - (int)piVar7;
          break;
        }
        uVar4 = uVar3 - 1;
        bVar9 = 0 < (int)uVar3;
        uVar3 = uVar4;
        piVar8 = piVar8 + -1;
      } while (uVar4 != 0 && bVar9);
    }
    piVar7 = (int *)((int)piVar7 + param_2);
    bVar9 = SBORROW4(iVar5,1);
    iVar6 = iVar5 + -1;
    bVar1 = 0 < iVar5;
    iVar5 = iVar6;
  } while (iVar6 != 0 && bVar1);
LAB_00428c07:
  param_4[1] = local_8;
  *param_4 = local_10;
  uVar3 = (local_c - local_8) + 1;
  param_4[3] = uVar3;
  param_4[2] = local_14 - local_10;
  if (local_c < (int)local_8) {
    return 0;
  }
  uVar3 = (local_14 - local_10) * uVar3;
  pvVar2 = Library::DKW::LIB::MemAlloc(uVar3);
  FUN_006b0290((int)pvVar2,param_4[2],0,0,param_1,param_2,*param_4,param_4[1],param_4[2],param_4[3]);
  DAT_007f4dd0 = DAT_007f4dd0 + uVar3;
  return (int)pvVar2;
}

