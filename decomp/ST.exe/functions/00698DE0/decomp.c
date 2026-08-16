#include "../../pseudocode_runtime.h"


int FUN_00698de0(undefined1 *param_1,uint param_2,int param_3,undefined4 param_4,int param_5,
                int param_6,int param_7)

{
  short *psVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int local_EAX_152;
  int iVar5;
  short *psVar6;
  uint *puVar7;
  short *psVar8;
  int local_8;

  puVar3 = param_1;
  local_8 = 0;
  Library::MSVCRT::FUN_00730810(param_1,param_2,10,thunk_FUN_00698db0);
  iVar2 = *(int *)(param_1 + param_2 * 10 + -4);
  uVar5 = 0;
  uVar4 = param_2;
  if (0 < (int)param_2) {
    puVar7 = (uint *)(param_1 + 6);
    do {
      uVar4 = uVar5;
      if ((uint)(((100 - param_7) * iVar2) / 100) < *puVar7) break;
      uVar5 = uVar5 + 1;
      *puVar7 = iVar2 - *puVar7;
      puVar7 = (uint *)((int)puVar7 + 10);
      uVar4 = param_2;
    } while ((int)uVar5 < (int)param_2);
  }
  auto param_2_after_write = uVar4; /* compiler stack-slot lifetime split */
  if (0 < param_3) {
    auto param_7_after_write = param_3; /* compiler stack-slot lifetime split */
    psVar6 = (short *)(param_6 + 4);
    do {
      local_EAX_152 = thunk_FUN_0069f7f0((int)puVar3,param_2_after_write,10,6,10);
      psVar8 = psVar6;
      if (-1 < local_EAX_152) {
        psVar8 = psVar6 + 5;
        psVar1 = (short *)(puVar3 + local_EAX_152 * 10);
        psVar6[-2] = *(short *)(puVar3 + local_EAX_152 * 10);
        psVar6[-1] = psVar1[1];
        local_8 = local_8 + 1;
        *psVar6 = psVar1[2];
        if (-1 < (int)param_2_after_write) {
          auto param_1_after_write = (undefined1 *)(param_2_after_write + 1); /* compiler stack-slot lifetime split */
          puVar7 = (uint *)(puVar3 + 6);
          do {
            iVar5 = FUN_006acf90((int)*psVar1,(int)psVar1[1],(int)*(short *)((int)puVar7 + -6),
                                 (int)(short)puVar7[-1]);
            if (iVar5 < 7) {
              if (iVar5 < 3) {
                *puVar7 = 0;
              }
              else {
                *puVar7 = *puVar7 / (uint)(iVar5 * param_5);
              }
            }
            puVar7 = (uint *)((int)puVar7 + 10);
            param_1_after_write = param_1_after_write + -1;
          } while (param_1_after_write != nullptr);
        }
      }
      param_7_after_write = param_7_after_write + -1;
      psVar6 = psVar8;
    } while (param_7_after_write != 0);
  }
  return local_8;
}

