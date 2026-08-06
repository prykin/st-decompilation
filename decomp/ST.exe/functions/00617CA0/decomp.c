#include "../../pseudocode_runtime.h"


int __thiscall
FUN_00617ca0(void *this,int *param_1,int *param_2,undefined4 *param_3,int *param_4,int *param_5,
            int *param_6,uint param_7)

{
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar1;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_14;
  int local_10;

  uVar5 = STField<uint>(this,0x30);
  local_14 = 0;
  if (uVar5 == 0) {
    return 0;
  }
  uVar6 = param_7 % uVar5;
  local_10 = 0;
  if (0 < (int)uVar5) {
    do {
      uVar2 = uVar6;
      if ((int)uVar5 < (int)uVar6) {
        uVar2 = uVar6 - uVar5;
      }
      iVar3 = (int)(uVar2 * 0x168) / (int)uVar5;
      iVar4 = FUN_006aff50(iVar3);
      uVar1 = FUN_006aff5b(iVar3);
      iVar3 = (iVar4 * 0x28) / 10000 + STField<int>(this,0x40);
      iVar7 = (int)(uVar1 * 0x28) / 10000 + STField<int>(this,0x44);
      if ((((-1 < iVar3) && (iVar3 <= g_worldGrid.sizeX * 0xc9)) && (-1 < iVar7)) &&
         ((iVar7 <= g_worldGrid.sizeY * 0xc9 &&
          (local_14 = thunk_FUN_00617c30(this,iVar3,iVar7), local_14 == 1)))) break;
      local_10 = local_10 + 1;
      uVar6 = uVar6 + 1;
      uVar5 = STField<uint>(this,0x30);
    } while (local_10 < (int)uVar5);
    if (local_14 != 0) {
      *param_1 = iVar3;
      *param_2 = iVar7;
      *param_3 = STField<undefined4>(this,0x48);
      *param_4 = (iVar4 * 0x96) / 10000 + param_7 % 0x28 + STField<int>(this,0x40);
      *param_5 = (int)(uVar1 * 0x96) / 10000 + STField<int>(this,0x44) + param_7 % 0x28;
      *param_6 = STField<int>(this,0x48) + -0x32;
    }
  }
  return local_14;
}

