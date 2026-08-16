#include "../../pseudocode_runtime.h"


uint * FUN_0069c8b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  DArrayTy *array;
  void *pvVar2;
  uint uVar3;
  int uVar6;
  uint uVar5;
  int iVar3;
  uint uVar4;
  uint uVar7;
  uint uVar8;
  int local_68 [9];
  int local_44 [3];
  DArrayTy *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int *local_c;
  void *local_8;

  iVar1 = param_1;
  array = Library::DKW::TBL::DArrayCreate(nullptr,10,0x10,10);
  if (((array != nullptr) && (param_1 != 0)) && (0 < param_3)) {
    local_18 = 0;
    local_1c = 0;
    local_20 = (int *)(param_1 + 2);
    local_2c = param_3;
    iVar3 = param_2 * 0xe;
    local_34 = iVar3;
    do {
      if (0 < param_2) {
        auto param_1_after_write = local_18; /* compiler stack-slot lifetime split */
        auto param_3_after_write = local_1c; /* compiler stack-slot lifetime split */
        local_14 = local_20;
        local_28 = param_2;
        do {
          uVar4 = 0xffffffff;
          local_24 = *local_14;
          local_30 = thunk_FUN_00696310(local_8,param_1_after_write,param_2,local_68,nullptr);
          local_10 = 0;
          if (local_30 < 1) {
LAB_0069ca03:
            local_44[0] = 0;
            local_44[1] = 0;
            local_44[2] = 0;
            local_38 = nullptr;
            local_38 = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
            local_44[0] = local_24;
            uVar6 = Library::DKW::TBL::DArrayAppend(array,local_44);
            if ((uint)uVar6 < array->count) {
              pvVar2 = DArrayAt<void>(array, uVar6);
            }
            else {
              pvVar2 = nullptr;
            }
            uVar5 = thunk_FUN_0069c710(iVar1,param_1_after_write,(int)pvVar2);
            if (-1 < (int)uVar5) {
              *(int *)(param_3_after_write + 10 + iVar1) = uVar6;
            }
          }
          else {
            local_c = local_68;
            do {
              uVar8 = *(uint *)(iVar1 + 10 + *local_c * 0xe);
              if ((int)uVar8 < 0) break;
              if (*(int *)(iVar1 + *local_c * 0xe + 2) == local_24) {
                if (uVar4 == 0xffffffff) {
                  uVar4 = uVar8;
                  if (((uVar8 < array->count) &&
                      (pvVar2 = DArrayAt<void>(array, uVar8),
                      pvVar2 != nullptr)) &&
                     (uVar3 = thunk_FUN_0069c710(iVar1,param_1_after_write,(int)pvVar2), -1 < (int)uVar3)) {
                    *(uint *)(param_3_after_write + 10 + iVar1) = uVar8;
                  }
                }
                else if (uVar4 != uVar8) {
                  uVar8 = *(uint *)(iVar1 + 10 + local_68[local_10] * 0xe);
                  uVar7 = uVar4;
                  if ((int)uVar8 < (int)uVar4) {
                    uVar7 = uVar8;
                    uVar8 = uVar4;
                  }
                  thunk_FUN_0069c790(&array->flags,iVar1,uVar7,uVar8);
                  break;
                }
              }
              local_10 = local_10 + 1;
              local_c = local_c + 1;
            } while (local_10 < local_30);
            if ((int)uVar4 < 0) goto LAB_0069ca03;
          }
          param_3_after_write = param_3_after_write + 0xe;
          local_14 = (int *)((int)local_14 + 0xe);
          param_1_after_write = param_1_after_write + 1;
          local_28 = local_28 + -1;
          iVar3 = local_34;
        } while (local_28 != 0);
      }
      local_18 = local_18 + param_2;
      local_1c = local_1c + iVar3;
      local_20 = (int *)((int)local_20 + iVar3);
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  return &array->flags;
}

