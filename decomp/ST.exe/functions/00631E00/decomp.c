#include "../../pseudocode_runtime.h"


undefined4 __thiscall
FUN_00631e00(void *this,uint param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,int *param_7)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  uint local_8;
  iVar5 = STField<int>(this,0x69);
  local_8 = 0;
  uVar2 = 0;
  if (iVar5 != 0) {
    uVar1 = STField<uint>(iVar5,0xC);
    if ((((param_1 < uVar1) &&
         (piVar3 = (int *)(STField<int>(iVar5,0x8) * param_1 + STField<int>(iVar5,0x1C)),
         piVar3 != nullptr)) && (piVar3[2] == param_2)) &&
       ((*piVar3 == 0xbe || (*piVar3 == 0xa8)))) {
      *param_3 = *(undefined4 *)(piVar3[7] + 0x266);
      *param_4 = *(undefined4 *)(piVar3[7] + 0x26a);
      *param_5 = *(undefined4 *)(piVar3[7] + 0x26e);
      *param_6 = *(undefined4 *)(piVar3[7] + 0x292);
      if (param_7 != nullptr) {
        *param_7 = piVar3[7];
      }
      return 1;
    }
    uVar4 = 0;
    if (0 < (int)uVar1) {
      bVar6 = uVar1 != 0;
      do {
        if (((bVar6) &&
            (piVar3 = (int *)(STField<int>(iVar5,0x8) * uVar4 + STField<int>(iVar5,0x1C)),
            piVar3 != nullptr)) &&
           ((piVar3[2] == param_2 && ((*piVar3 == 0xbe || (*piVar3 == 0xa8)))))) {
          *param_3 = *(undefined4 *)(piVar3[7] + 0x266);
          *param_4 = *(undefined4 *)(piVar3[7] + 0x26a);
          *param_5 = *(undefined4 *)(piVar3[7] + 0x26e);
          *param_6 = *(undefined4 *)(piVar3[7] + 0x292);
          if (param_7 != nullptr) {
            *param_7 = piVar3[7];
          }
          local_8 = 1;
        }
        uVar4 = uVar4 + 1;
        iVar5 = STField<int>(this,0x69);
        bVar6 = uVar4 < STField<uint>(iVar5,0xC);
        uVar2 = local_8;
      } while ((int)uVar4 < (int)STField<uint>(iVar5,0xC));
    }
  }
  return uVar2;
}

