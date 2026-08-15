#include "../../pseudocode_runtime.h"


int __thiscall
FUN_0069bc10(void *this,int param_1,int *param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  bool bVar1;
  int iVar2;
  int iVar4;
  int iVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_1c;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;

  local_10 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_3 * 0x40 + -0x14 + param_1);
  local_c = 0xffff;
  iVar5 = 0xffff;
  if (0 < param_3) {
    local_1c = 1;
    do {
      iVar5 = param_1 + *param_2 * 0x40;
      iVar2 = iVar2 + *(int *)(iVar5 + 0x2c);
      iVar7 = (*(int *)(iVar5 + 0x38) - *(int *)(iVar5 + 0x30)) / 2 + *(int *)(iVar5 + 0x30);
      iVar5 = (*(int *)(iVar5 + 0x3c) - *(int *)(iVar5 + 0x34)) / 2 + *(int *)(iVar5 + 0x34);
      if (local_1c < param_3) {
        local_14 = param_3 - local_1c;
        local_8 = param_2;
        do {
          local_8 = local_8 + 1;
          iVar6 = *local_8 * 0x40 + param_1;
          iVar4 = FUN_006acf90(iVar7,iVar5,
                               (*(int *)(iVar6 + 0x38) - *(int *)(iVar6 + 0x30)) / 2 +
                               *(int *)(iVar6 + 0x30),
                               (*(int *)(iVar6 + 0x3c) - *(int *)(iVar6 + 0x34)) / 2 +
                               *(int *)(iVar6 + 0x34));
          if (iVar4 < local_c) {
            local_c = iVar4;
          }
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      iVar3 = FUN_006acf90(iVar7,iVar5,*STField<int *>(this,8),(STField<int *>(this,8))[1]);
      local_10 = local_10 + iVar3;
      param_2 = param_2 + 1;
      bVar1 = local_1c < param_3;
      iVar5 = local_c;
      local_1c = local_1c + 1;
    } while (bVar1);
  }
  iVar5 = (iVar5 * param_3 + local_10) * param_4;
  *param_5 = iVar5;
  *param_6 = iVar2;
  return iVar2 + iVar5;
}

