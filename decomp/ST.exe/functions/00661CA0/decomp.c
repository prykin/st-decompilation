
void __fastcall FUN_00661ca0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  AiTactClassTy *pAVar2;
  int *piVar3;
  undefined4 in_EAX;
  int *this;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  Global_sub_006753A0_param_1Enum GVar7;
  void *pvVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  bool bVar13;
  uint local_64 [2];
  undefined1 local_5c;
  undefined1 local_5b;
  short *psStack_5a;
  undefined1 uStack_56;
  short local_30;
  short local_2e [5];
  uint local_24;
  int local_20;
  short local_1c [2];
  short local_18 [2];
  int local_14;
  int *local_10;
  uint local_c;
  undefined2 local_6;
  
  if ((DAT_007fa174 != (STAllPlayersC *)0x0) &&
     (local_14 = param_1,
     this = (int *)STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)param_2 >> 8),*(undefined1 *)(param_1 + 0x24)),
                              CONCAT22((short)((uint)in_EAX >> 0x10),*(undefined2 *)(param_3 + 0x16)
                                      ),CASE_1), this != (int *)0x0)) {
    local_10 = this;
    local_20 = thunk_FUN_004357f0(*(char *)(param_1 + 0x24));
    uVar4 = (**(code **)(*this + 0x2c))();
    piVar3 = local_10;
    local_c = uVar4;
    if (*(short *)(param_3 + 0x14) == 0) {
      thunk_FUN_004162b0(this,local_18,local_1c,&local_6);
      if ((0x31 < (int)local_c) && ((int)local_c < 0x74)) {
        uVar4 = 0;
        local_24 = *(uint *)(*(int *)(param_1 + 0x20b) + 0xc);
        if (0 < (int)local_24) {
          bVar13 = local_24 != 0;
          do {
            if (bVar13) {
              puVar5 = (uint *)(*(int *)(*(int *)(param_1 + 0x20b) + 8) * uVar4 +
                               *(int *)(*(int *)(param_1 + 0x20b) + 0x1c));
            }
            else {
              puVar5 = (uint *)0x0;
            }
            if (puVar5[10] == 0) {
              iVar9 = 0;
              puVar12 = puVar5;
              do {
                if (*puVar12 == local_c) {
                  puVar5[10] = *(uint *)(param_3 + 0x18);
                  *(short *)((int)puVar5 + 0xe) = local_18[0];
                  *(short *)(puVar5 + 4) = local_1c[0];
                  *(undefined2 *)((int)puVar5 + 0x12) = local_6;
                  puVar5[9] = 0;
                  goto LAB_00661e5f;
                }
                iVar9 = iVar9 + 1;
                puVar12 = puVar12 + 1;
              } while (iVar9 < 3);
            }
            uVar4 = uVar4 + 1;
            bVar13 = uVar4 < local_24;
          } while ((int)uVar4 < (int)local_24);
        }
      }
      if ((0 < (int)local_c) && ((int)local_c < 0x29)) {
        if (*(int *)((int)local_10 + 0x81e) != 0) {
          iVar9 = *(int *)(param_1 + 0x20b);
          uVar10 = 0;
          uVar4 = *(uint *)(iVar9 + 0xc);
          if (0 < (int)uVar4) {
            bVar13 = uVar4 != 0;
            do {
              if (bVar13) {
                iVar6 = *(int *)(iVar9 + 8) * uVar10 + *(int *)(iVar9 + 0x1c);
              }
              else {
                iVar6 = 0;
              }
              if ((*(int *)(iVar6 + 0x28) == 0) &&
                 (*(int *)(iVar6 + 0x24) == *(int *)((int)local_10 + 0x81e))) {
                uVar1 = *(undefined4 *)(param_3 + 0x18);
                *(undefined4 *)(iVar6 + 0x24) = 0;
                *(undefined4 *)(iVar6 + 0x28) = uVar1;
                goto LAB_00661e5f;
              }
              uVar10 = uVar10 + 1;
              bVar13 = uVar10 < uVar4;
            } while ((int)uVar10 < (int)uVar4);
          }
        }
        iVar9 = *(int *)(param_1 + 0x20b);
        uVar4 = 0;
        if (0 < *(int *)(iVar9 + 0xc)) {
          bVar13 = *(int *)(iVar9 + 0xc) != 0;
          do {
            if (bVar13) {
              puVar5 = (uint *)(*(int *)(iVar9 + 8) * uVar4 + *(int *)(iVar9 + 0x1c));
            }
            else {
              puVar5 = (uint *)0x0;
            }
            if (puVar5[10] == 0) {
              iVar6 = 0;
              puVar12 = puVar5;
              do {
                param_1 = local_14;
                if (*puVar12 == local_c) {
                  uVar4 = *(uint *)(param_3 + 0x18);
                  puVar5[9] = 0;
                  puVar5[10] = uVar4;
                  goto LAB_00661e5f;
                }
                iVar6 = iVar6 + 1;
                puVar12 = puVar12 + 1;
              } while (iVar6 < 3);
            }
            uVar4 = uVar4 + 1;
            bVar13 = uVar4 < *(uint *)(iVar9 + 0xc);
          } while ((int)uVar4 < (int)*(uint *)(iVar9 + 0xc));
        }
      }
LAB_00661e5f:
      if (((0x31 < (int)local_c) && ((int)local_c < 0x74)) && (*(int *)(param_1 + 0x284) != 0)) {
        local_30 = local_18[0] + -4;
        local_2e[0] = local_1c[0] + -4;
        local_2e[2] = 9;
        local_2e[3] = 9;
        local_2e[1] = 0;
        local_2e[4] = 5;
        thunk_FUN_006756d0(&local_30,local_2e,local_2e + 2,local_2e + 3);
        puVar5 = local_64;
        for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        local_64[1] = *(undefined4 *)(param_1 + 0x280);
        local_64[0] = 0x6c;
        local_5c = 0;
        GVar7 = (**(code **)(*local_10 + 0x2c))();
        iVar9 = thunk_FUN_006753a0(GVar7);
        local_5b = (undefined1)iVar9;
        psStack_5a = &local_30;
        AiTactClassTy::GetAiMess(*(AiTactClassTy **)(param_1 + 0x284),local_64);
      }
      if (((0 < (int)local_c) && ((int)local_c < 0x29)) && (*(short *)(param_1 + 0x7b) == -0x8000))
      {
        if (*(int *)(param_1 + 0x9b) == 0x78) {
          *(undefined4 *)(param_1 + 0x9b) = 0x33;
          *(undefined4 *)(param_1 + 0x9f) = 0;
          *(undefined4 *)(param_1 + 0xa3) = 0;
          *(undefined4 *)(param_1 + 0xa7) = 0;
        }
        uVar4 = 0;
        if (*(void **)(param_1 + 0x284) != (void *)0x0) {
          pvVar8 = (void *)thunk_FUN_0068e290(*(void **)(param_1 + 0x284),(short)local_10[0x207]);
          if (local_20 != 0) {
            uVar4 = *(uint *)(local_20 + 0x65c);
            *(uint *)(local_20 + 0x65c) = uVar4 + 1;
          }
          if (pvVar8 != (void *)0x0) {
            thunk_FUN_006616b0(pvVar8,local_c,uVar4);
          }
          *(uint *)((int)local_10 + 0x81e) = uVar4;
        }
      }
    }
    else {
      iVar9 = *(int *)(param_1 + 0x20b);
      uVar11 = 0;
      uVar10 = *(uint *)(iVar9 + 0xc);
      if (0 < (int)uVar10) {
        bVar13 = uVar10 != 0;
        do {
          if (bVar13) {
            iVar6 = *(int *)(iVar9 + 8) * uVar11 + *(int *)(iVar9 + 0x1c);
          }
          else {
            iVar6 = 0;
          }
          if (*(int *)(iVar6 + 0x28) == *(int *)(param_3 + 0x18)) {
            *(undefined4 *)(iVar6 + 0x28) = 0;
            break;
          }
          uVar11 = uVar11 + 1;
          bVar13 = uVar11 < uVar10;
        } while ((int)uVar11 < (int)uVar10);
      }
      if ((((0 < (int)uVar4) && ((int)uVar4 < 0x29)) && (*(short *)(param_1 + 0x7b) == -0x8000)) &&
         ((*(void **)(param_1 + 0x284) != (void *)0x0 &&
          (pvVar8 = (void *)thunk_FUN_0068e290(*(void **)(param_1 + 0x284),(short)local_10[0x207]),
          pvVar8 != (void *)0x0)))) {
        thunk_FUN_00661790(pvVar8,uVar4,*(int *)((int)piVar3 + 0x81e));
      }
    }
    uVar4 = thunk_FUN_00674fb0(local_c);
    if (((uVar4 & 0x60) != 0) &&
       (pAVar2 = *(AiTactClassTy **)(param_1 + 0x284), pAVar2 != (AiTactClassTy *)0x0)) {
      puVar5 = local_64;
      for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      local_64[1] = *(undefined4 *)(param_1 + 0x280);
      local_5c = *(undefined1 *)(param_3 + 0x14);
      local_5b = (undefined1)*(undefined2 *)(param_3 + 0x16);
      psStack_5a._0_1_ = (undefined1)((ushort)*(undefined2 *)(param_3 + 0x16) >> 8);
      psStack_5a._1_3_ = (undefined3)local_c;
      uStack_56 = (undefined1)(local_c >> 0x18);
      local_64[0] = 0x6e;
      AiTactClassTy::GetAiMess(pAVar2,local_64);
    }
    uVar4 = thunk_FUN_00674fb0(local_c);
    if (((uVar4 & 0x10) != 0) &&
       (pAVar2 = *(AiTactClassTy **)(param_1 + 0x284), pAVar2 != (AiTactClassTy *)0x0)) {
      puVar5 = local_64;
      for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      local_64[1] = *(undefined4 *)(param_1 + 0x280);
      local_5c = *(undefined1 *)(param_3 + 0x14);
      local_5b = (undefined1)*(undefined2 *)(param_3 + 0x16);
      psStack_5a._0_1_ = (undefined1)((ushort)*(undefined2 *)(param_3 + 0x16) >> 8);
      psStack_5a._1_3_ = (undefined3)local_c;
      uStack_56 = (undefined1)(local_c >> 0x18);
      local_64[0] = 0x74;
      AiTactClassTy::GetAiMess(pAVar2,local_64);
    }
    if ((((0 < (int)local_c) && ((int)local_c < 0x29)) && (*(short *)(param_1 + 0x7b) != 1)) &&
       (*(int *)(param_1 + 0x9b) == 0x41)) {
      *(undefined4 *)(param_1 + 0x9b) = 0x3c;
      *(undefined4 *)(param_1 + 0x9f) = 0;
      *(undefined4 *)(param_1 + 0xa3) = 0;
      *(undefined4 *)(param_1 + 0xa7) = 0;
    }
  }
  return;
}

