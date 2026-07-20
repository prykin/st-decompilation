
void __fastcall FUN_00661ca0(AnonShape_00661CA0_93A030EF *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  AiTactClassTy *pAVar2;
  STFishC *pSVar3;
  undefined4 in_EAX;
  STFishC *this;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  Global_sub_006753A0_param_1Enum GVar7;
  void *pvVar8;
  IMAGE_DOS_HEADER *pIVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  AnonShape_0068FD00_A5257008 **ppAVar14;
  bool bVar15;
  AnonShape_0068FD00_A5257008 *local_64;
  undefined4 local_60;
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
  AnonShape_00661CA0_93A030EF *local_14;
  STFishC *local_10;
  uint local_c;
  undefined2 local_6;
  
  if ((g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) &&
     (local_14 = param_1,
     this = (STFishC *)
            STAllPlayersC::GetObjPtr
                      (g_sTAllPlayers_007FA174,
                       CONCAT31((int3)((uint)param_2 >> 8),param_1->field_0024),
                       CONCAT22((short)((uint)in_EAX >> 0x10),*(undefined2 *)(param_3 + 0x16)),
                       CASE_1), this != (STFishC *)0x0)) {
    local_10 = this;
    local_20 = thunk_FUN_004357f0(param_1->field_0024);
    uVar4 = (*this->vtable->vfunc_2C)();
    pSVar3 = local_10;
    local_c = uVar4;
    if (*(short *)(param_3 + 0x14) == 0) {
      STFishC::sub_004162B0(this,local_18,local_1c,&local_6);
      if ((0x31 < (int)local_c) && ((int)local_c < 0x74)) {
        uVar4 = 0;
        local_24 = *(uint *)(param_1->field_020B + 0xc);
        if (0 < (int)local_24) {
          bVar15 = local_24 != 0;
          do {
            if (bVar15) {
              puVar5 = (uint *)(*(int *)(param_1->field_020B + 8) * uVar4 +
                               *(int *)(param_1->field_020B + 0x1c));
            }
            else {
              puVar5 = (uint *)0x0;
            }
            if (puVar5[10] == 0) {
              iVar10 = 0;
              puVar13 = puVar5;
              do {
                if (*puVar13 == local_c) {
                  puVar5[10] = *(uint *)(param_3 + 0x18);
                  *(short *)((int)puVar5 + 0xe) = local_18[0];
                  *(short *)(puVar5 + 4) = local_1c[0];
                  *(undefined2 *)((int)puVar5 + 0x12) = local_6;
                  puVar5[9] = 0;
                  goto LAB_00661e5f;
                }
                iVar10 = iVar10 + 1;
                puVar13 = puVar13 + 1;
              } while (iVar10 < 3);
            }
            uVar4 = uVar4 + 1;
            bVar15 = uVar4 < local_24;
          } while ((int)uVar4 < (int)local_24);
        }
      }
      if ((0 < (int)local_c) && ((int)local_c < 0x29)) {
        if (*(int *)&local_10[3].field_0xdd != 0) {
          iVar10 = param_1->field_020B;
          uVar11 = 0;
          uVar4 = *(uint *)(iVar10 + 0xc);
          if (0 < (int)uVar4) {
            bVar15 = uVar4 != 0;
            do {
              if (bVar15) {
                iVar6 = *(int *)(iVar10 + 8) * uVar11 + *(int *)(iVar10 + 0x1c);
              }
              else {
                iVar6 = 0;
              }
              if ((*(int *)(iVar6 + 0x28) == 0) &&
                 (*(int *)(iVar6 + 0x24) == *(int *)&local_10[3].field_0xdd)) {
                uVar1 = *(undefined4 *)(param_3 + 0x18);
                *(undefined4 *)(iVar6 + 0x24) = 0;
                *(undefined4 *)(iVar6 + 0x28) = uVar1;
                goto LAB_00661e5f;
              }
              uVar11 = uVar11 + 1;
              bVar15 = uVar11 < uVar4;
            } while ((int)uVar11 < (int)uVar4);
          }
        }
        iVar10 = param_1->field_020B;
        uVar4 = 0;
        if (0 < *(int *)(iVar10 + 0xc)) {
          bVar15 = *(int *)(iVar10 + 0xc) != 0;
          do {
            if (bVar15) {
              puVar5 = (uint *)(*(int *)(iVar10 + 8) * uVar4 + *(int *)(iVar10 + 0x1c));
            }
            else {
              puVar5 = (uint *)0x0;
            }
            if (puVar5[10] == 0) {
              iVar6 = 0;
              puVar13 = puVar5;
              do {
                param_1 = local_14;
                if (*puVar13 == local_c) {
                  uVar4 = *(uint *)(param_3 + 0x18);
                  puVar5[9] = 0;
                  puVar5[10] = uVar4;
                  goto LAB_00661e5f;
                }
                iVar6 = iVar6 + 1;
                puVar13 = puVar13 + 1;
              } while (iVar6 < 3);
            }
            uVar4 = uVar4 + 1;
            bVar15 = uVar4 < *(uint *)(iVar10 + 0xc);
          } while ((int)uVar4 < (int)*(uint *)(iVar10 + 0xc));
        }
      }
LAB_00661e5f:
      if (((0x31 < (int)local_c) && ((int)local_c < 0x74)) && (param_1->field_0284 != 0)) {
        local_30 = local_18[0] + -4;
        local_2e[0] = local_1c[0] + -4;
        local_2e[2] = 9;
        local_2e[3] = 9;
        local_2e[1] = 0;
        local_2e[4] = 5;
        thunk_FUN_006756d0(&local_30,local_2e,local_2e + 2,local_2e + 3);
        ppAVar14 = &local_64;
        for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
          *ppAVar14 = (AnonShape_0068FD00_A5257008 *)0x0;
          ppAVar14 = ppAVar14 + 1;
        }
        local_60 = param_1->field_0280;
        local_64 = (AnonShape_0068FD00_A5257008 *)0x6c;
        local_5c = 0;
        GVar7 = (*local_10->vtable->vfunc_2C)();
        iVar10 = thunk_FUN_006753a0(GVar7);
        local_5b = (undefined1)iVar10;
        psStack_5a = &local_30;
        AiTactClassTy::GetAiMess
                  ((AiTactClassTy *)param_1->field_0284,(AnonShape_0068FD00_A5257008 *)&local_64);
      }
      if (((0 < (int)local_c) && ((int)local_c < 0x29)) && (param_1->field_007B == -0x8000)) {
        if (param_1->field_009B == 0x78) {
          param_1->field_009B = 0x33;
          param_1->field_009F = 0;
          param_1->field_00A3 = 0;
          param_1->field_00A7 = 0;
        }
        uVar4 = 0;
        if ((void *)param_1->field_0284 != (void *)0x0) {
          pvVar8 = (void *)thunk_FUN_0068e290((void *)param_1->field_0284,
                                              *(short *)&local_10[3].field_0xdb);
          if (local_20 != 0) {
            uVar4 = *(uint *)(local_20 + 0x65c);
            *(uint *)(local_20 + 0x65c) = uVar4 + 1;
          }
          if (pvVar8 != (void *)0x0) {
            thunk_FUN_006616b0(pvVar8,local_c,uVar4);
          }
          *(uint *)&local_10[3].field_0xdd = uVar4;
        }
      }
    }
    else {
      iVar10 = param_1->field_020B;
      uVar12 = 0;
      uVar11 = *(uint *)(iVar10 + 0xc);
      if (0 < (int)uVar11) {
        bVar15 = uVar11 != 0;
        do {
          if (bVar15) {
            iVar6 = *(int *)(iVar10 + 8) * uVar12 + *(int *)(iVar10 + 0x1c);
          }
          else {
            iVar6 = 0;
          }
          if (*(int *)(iVar6 + 0x28) == *(int *)(param_3 + 0x18)) {
            *(undefined4 *)(iVar6 + 0x28) = 0;
            break;
          }
          uVar12 = uVar12 + 1;
          bVar15 = uVar12 < uVar11;
        } while ((int)uVar12 < (int)uVar11);
      }
      if ((((0 < (int)uVar4) && ((int)uVar4 < 0x29)) && (param_1->field_007B == -0x8000)) &&
         (((void *)param_1->field_0284 != (void *)0x0 &&
          (pvVar8 = (void *)thunk_FUN_0068e290((void *)param_1->field_0284,
                                               *(short *)&local_10[3].field_0xdb),
          pvVar8 != (void *)0x0)))) {
        thunk_FUN_00661790(pvVar8,uVar4,*(int *)&pSVar3[3].field_0xdd);
      }
    }
    pIVar9 = thunk_FUN_00674fb0(local_c);
    if ((((uint)pIVar9 & 0x60) != 0) &&
       (pAVar2 = (AiTactClassTy *)param_1->field_0284, pAVar2 != (AiTactClassTy *)0x0)) {
      ppAVar14 = &local_64;
      for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
        *ppAVar14 = (AnonShape_0068FD00_A5257008 *)0x0;
        ppAVar14 = ppAVar14 + 1;
      }
      local_60 = param_1->field_0280;
      local_5c = *(undefined1 *)(param_3 + 0x14);
      local_5b = (undefined1)*(undefined2 *)(param_3 + 0x16);
      psStack_5a._0_1_ = (undefined1)((ushort)*(undefined2 *)(param_3 + 0x16) >> 8);
      psStack_5a._1_3_ = (undefined3)local_c;
      uStack_56 = (undefined1)(local_c >> 0x18);
      local_64 = (AnonShape_0068FD00_A5257008 *)0x6e;
      AiTactClassTy::GetAiMess(pAVar2,(AnonShape_0068FD00_A5257008 *)&local_64);
    }
    pIVar9 = thunk_FUN_00674fb0(local_c);
    if ((((uint)pIVar9 & 0x10) != 0) &&
       (pAVar2 = (AiTactClassTy *)param_1->field_0284, pAVar2 != (AiTactClassTy *)0x0)) {
      ppAVar14 = &local_64;
      for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
        *ppAVar14 = (AnonShape_0068FD00_A5257008 *)0x0;
        ppAVar14 = ppAVar14 + 1;
      }
      local_60 = param_1->field_0280;
      local_5c = *(undefined1 *)(param_3 + 0x14);
      local_5b = (undefined1)*(undefined2 *)(param_3 + 0x16);
      psStack_5a._0_1_ = (undefined1)((ushort)*(undefined2 *)(param_3 + 0x16) >> 8);
      psStack_5a._1_3_ = (undefined3)local_c;
      uStack_56 = (undefined1)(local_c >> 0x18);
      local_64 = (AnonShape_0068FD00_A5257008 *)0x74;
      AiTactClassTy::GetAiMess(pAVar2,(AnonShape_0068FD00_A5257008 *)&local_64);
    }
    if ((((0 < (int)local_c) && ((int)local_c < 0x29)) && (param_1->field_007B != 1)) &&
       (param_1->field_009B == 0x41)) {
      param_1->field_009B = 0x3c;
      param_1->field_009F = 0;
      param_1->field_00A3 = 0;
      param_1->field_00A7 = 0;
    }
  }
  return;
}

