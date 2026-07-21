
uint * FUN_0069c8b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  DArrayTy *pDVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
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
  pDVar2 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x10,10);
  if (((pDVar2 != (DArrayTy *)0x0) && (param_1 != 0)) && (0 < param_3)) {
    local_18 = 0;
    local_1c = 0;
    local_20 = (int *)(param_1 + 2);
    local_2c = param_3;
    iVar6 = param_2 * 0xe;
    local_34 = iVar6;
    do {
      if (0 < param_2) {
        param_1 = local_18;
        param_3 = local_1c;
        local_14 = local_20;
        local_28 = param_2;
        do {
          uVar7 = 0xffffffff;
          local_24 = *local_14;
          local_30 = thunk_FUN_00696310(local_8,param_1,param_2,local_68,(int *)0x0);
          local_10 = 0;
          if (local_30 < 1) {
LAB_0069ca03:
            local_44[0] = 0;
            local_44[1] = 0;
            local_44[2] = 0;
            local_38 = (DArrayTy *)0x0;
            local_38 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,4,10);
            local_44[0] = local_24;
            uVar7 = Library::DKW::TBL::FUN_006ae1c0(&pDVar2->flags,local_44);
            if (uVar7 < pDVar2->count) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, uVar7) (runtime stride) */
              pvVar3 = (void *)(pDVar2->elementSize * uVar7 + (int)pDVar2->data);
            }
            else {
              pvVar3 = (void *)0x0;
            }
            uVar5 = thunk_FUN_0069c710(iVar1,param_1,(int)pvVar3);
            if (-1 < (int)uVar5) {
              *(uint *)(param_3 + 10 + iVar1) = uVar7;
            }
          }
          else {
            local_c = local_68;
            do {
              uVar5 = *(uint *)(iVar1 + 10 + *local_c * 0xe);
              if ((int)uVar5 < 0) break;
              if (*(int *)(iVar1 + *local_c * 0xe + 2) == local_24) {
                if (uVar7 == 0xffffffff) {
                  uVar7 = uVar5;
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, uVar5) (runtime stride) */
                  if (((uVar5 < pDVar2->count) &&
                      (pvVar3 = (void *)(pDVar2->elementSize * uVar5 + (int)pDVar2->data),
                      pvVar3 != (void *)0x0)) &&
                     (uVar4 = thunk_FUN_0069c710(iVar1,param_1,(int)pvVar3), -1 < (int)uVar4)) {
                    *(uint *)(param_3 + 10 + iVar1) = uVar5;
                  }
                }
                else if (uVar7 != uVar5) {
                  uVar5 = *(uint *)(iVar1 + 10 + local_68[local_10] * 0xe);
                  uVar4 = uVar7;
                  if ((int)uVar5 < (int)uVar7) {
                    uVar4 = uVar5;
                    uVar5 = uVar7;
                  }
                  thunk_FUN_0069c790(&pDVar2->flags,iVar1,uVar4,uVar5);
                  break;
                }
              }
              local_10 = local_10 + 1;
              local_c = local_c + 1;
            } while (local_10 < local_30);
            if ((int)uVar7 < 0) goto LAB_0069ca03;
          }
          param_3 = param_3 + 0xe;
          local_14 = (int *)((int)local_14 + 0xe);
          param_1 = param_1 + 1;
          local_28 = local_28 + -1;
          iVar6 = local_34;
        } while (local_28 != 0);
      }
      local_18 = local_18 + param_2;
      local_1c = local_1c + iVar6;
      local_20 = (int *)((int)local_20 + iVar6);
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  return &pDVar2->flags;
}

