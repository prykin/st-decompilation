#include "../../pseudocode_runtime.h"


int __thiscall FUN_006961b0(void *this,uint param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  uint local_8;
  iVar5 = STField<int>(this,0x5853);
  local_8 = 0;
  if (iVar5 != 0) {
    if (param_1 < STField<uint>(iVar5,0xC)) {
      iVar2 = STField<int>(iVar5,0x8) * param_1 + STField<int>(iVar5,0x1C);
    }
    else {
      iVar2 = 0;
    }
    if (param_2 < STField<uint>(iVar5,0xC)) {
      iVar5 = STField<int>(iVar5,0x8) * param_2 + STField<int>(iVar5,0x1C);
    }
    else {
      iVar5 = 0;
    }
    if (((iVar2 != 0) && (iVar5 != 0)) && (STField<int>(iVar2,0x15) != 0)) {
      iVar2 = STField<int>(iVar5,0x15);
      uVar4 = 0;
      if (0 < STField<int>(iVar2,0xC)) {
        bVar6 = STField<int>(iVar2,0xC) != 0;
        do {
          if ((bVar6) && (iVar2 = STField<int>(iVar2,0x8) * uVar4 + STField<int>(iVar2,0x1C), iVar2 != 0))
          {
            /* ST_CALLSITE[00696244]: CALL 0x00404156; direct=00404156 CGenerate::sub_00695F70 */
            uVar1 = CGenerate::sub_00695F70(this,param_1,STField<int>(iVar2,0x2),param_3);
            if (-1 < (int)uVar1) {
              local_8 = local_8 + 1;
            }
          }
          iVar2 = STField<int>(iVar5,0x15);
          uVar4 = uVar4 + 1;
          bVar6 = uVar4 < STField<uint>(iVar2,0xC);
        } while ((int)uVar4 < (int)STField<uint>(iVar2,0xC));
      }
      iVar2 = STField<int>(iVar5,0x19);
      if (iVar2 != 0) {
        uVar4 = 0;
        if (0 < STField<int>(iVar2,0xC)) {
          bVar6 = STField<int>(iVar2,0xC) != 0;
          do {
            if (bVar6) {
              piVar3 = (int *)(STField<int>(iVar2,0x8) * uVar4 + STField<int>(iVar2,0x1C));
            }
            else {
              piVar3 = nullptr;
            }
            thunk_FUN_006960d0(this,param_1,*piVar3);
            iVar2 = STField<int>(iVar5,0x19);
            uVar4 = uVar4 + 1;
            bVar6 = uVar4 < STField<uint>(iVar2,0xC);
          } while ((int)uVar4 < (int)STField<uint>(iVar2,0xC));
        }
      }
      thunk_FUN_00695cd0(this,param_2,param_4,param_1);
    }
    return local_8;
  }
  return 0;
}

