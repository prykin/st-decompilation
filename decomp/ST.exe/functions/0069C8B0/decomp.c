#include "../../pseudocode_runtime.h"


uint * FUN_0069c8b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  DArrayTy *array;
  void *pvVar2;
  uint uVar3;
  int uVar6;
  int iVar4;
  uint uVar5;
  uint uVar7;
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
    iVar4 = param_2 * 0xe;
    local_34 = iVar4;
    do {
      if (0 < param_2) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = local_18;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = local_1c;
        local_14 = local_20;
        local_28 = param_2;
        do {
          uVar5 = 0xffffffff;
          local_24 = *local_14;
          local_30 = thunk_FUN_00696310(local_8,param_1,param_2,local_68,nullptr);
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
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, uVar6) (runtime stride) */
              pvVar2 = (void *)(array->elementSize * uVar6 + (int)array->data);
            }
            else {
              pvVar2 = nullptr;
            }
            uVar5 = thunk_FUN_0069c710(iVar1,param_1,(int)pvVar2);
            if (-1 < (int)uVar5) {
              *(int *)(param_3 + 10 + iVar1) = uVar6;
            }
          }
          else {
            local_c = local_68;
            do {
              uVar7 = *(uint *)(iVar1 + 10 + *local_c * 0xe);
              if ((int)uVar7 < 0) break;
              if (*(int *)(iVar1 + *local_c * 0xe + 2) == local_24) {
                if (uVar5 == 0xffffffff) {
                  uVar5 = uVar7;
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, uVar7) (runtime stride) */
                  if (((uVar7 < array->count) &&
                      (pvVar2 = (void *)(array->elementSize * uVar7 + (int)array->data),
                      pvVar2 != nullptr)) &&
                     (uVar3 = thunk_FUN_0069c710(iVar1,param_1,(int)pvVar2), -1 < (int)uVar3)) {
                    *(uint *)(param_3 + 10 + iVar1) = uVar7;
                  }
                }
                else if (uVar5 != uVar7) {
                  uVar7 = *(uint *)(iVar1 + 10 + local_68[local_10] * 0xe);
                  uVar3 = uVar5;
                  if ((int)uVar7 < (int)uVar5) {
                    uVar3 = uVar7;
                    uVar7 = uVar5;
                  }
                  thunk_FUN_0069c790(&array->flags,iVar1,uVar3,uVar7);
                  break;
                }
              }
              local_10 = local_10 + 1;
              local_c = local_c + 1;
            } while (local_10 < local_30);
            if ((int)uVar5 < 0) goto LAB_0069ca03;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = param_3 + 0xe;
          local_14 = (int *)((int)local_14 + 0xe);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = param_1 + 1;
          local_28 = local_28 + -1;
          iVar4 = local_34;
        } while (local_28 != 0);
      }
      local_18 = local_18 + param_2;
      local_1c = local_1c + iVar4;
      local_20 = (int *)((int)local_20 + iVar4);
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  return &array->flags;
}

