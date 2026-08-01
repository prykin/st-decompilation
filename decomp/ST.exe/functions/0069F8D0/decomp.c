
undefined2 *
FUN_0069f8d0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int *param_8)

{
  short sVar1;
  undefined2 *puVar2;
  int iVar3;
  AnonPointee_TLOBaseTy_0607 *pAVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  AnonPointee_TLOBaseTy_0607 *pAVar8;
  AnonPointee_TLOBaseTy_0607 *pAVar9;
  AnonPointee_TLOBaseTy_0607 *pAVar10;
  short sVar11;
  int iVar12;
  bool bVar13;
  int local_40;
  int local_3c;
  undefined2 *local_38;
  int local_34;
  int local_30;
  uint local_2c;
  undefined2 *local_28;
  int local_24;
  int local_20;
  AnonPointee_TLOBaseTy_0607 *local_1c;
  AnonPointee_TLOBaseTy_0607 *local_18;
  int local_14;
  AnonPointee_TLOBaseTy_0607 *local_10;
  int local_c;
  int local_8;

  iVar6 = param_5;
  local_3c = 0;
  local_40 = 0;
  local_28 = (undefined2 *)0x0;
  local_18 = (AnonPointee_TLOBaseTy_0607 *)0x0;
  local_20 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if ((param_4 == param_6) && (iVar3 = 1, param_5 == param_7)) {
LAB_0069fb6f:
    FreeAndNull(&local_18);
    local_28 = Library::DKW::LIB::MemAlloc(iVar3 * 4);
    if (local_28 != (undefined2 *)0x0) {
      local_20 = 1;
      bVar13 = param_4 != param_6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_5 = param_4;
      *local_28 = (short)param_4;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = iVar6;
      local_28[1] = (short)iVar6;
      puVar2 = local_28;
      if ((bVar13) || (iVar6 != param_7)) {
        do {
          local_38 = puVar2 + 2;
          sVar11 = 30000;
          psVar5 = &DAT_007d8012;
          do {
            iVar6 = psVar5[-1] + param_5;
            if ((((-1 < iVar6) && (iVar6 < param_2)) && (iVar3 = *psVar5 + param_4, -1 < iVar3)) &&
               (iVar3 < param_3)) {
              if ((iVar6 == param_6) && (iVar3 == param_7)) goto LAB_0069fc43;
              sVar1 = *(short *)(param_1 + (iVar3 * param_2 + iVar6) * 2);
              if ((0 < sVar1) && (sVar1 < sVar11)) {
                sVar11 = sVar1;
                local_40 = iVar3;
                local_3c = iVar6;
              }
            }
            psVar5 = psVar5 + 2;
          } while ((int)psVar5 < 0x7d8022);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_5 = local_3c;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = local_40;
          *local_38 = (short)local_3c;
          puVar2[3] = (short)local_40;
          local_20 = local_20 + 1;
          puVar2 = local_38;
        } while( true );
      }
LAB_0069fc43:
      local_28[local_20 * 2] = (short)param_6;
      local_28[local_20 * 2 + 1] = (short)param_7;
      local_20 = local_20 + 1;
    }
  }
  else {
    local_24 = 0x80;
    local_1c = Library::DKW::LIB::MemAlloc(0x400);
    local_18 = local_1c;
    if (local_1c != (AnonPointee_TLOBaseTy_0607 *)0x0) {
      local_10 = (AnonPointee_TLOBaseTy_0607 *)&local_1c[0x15].field_0008;
      iVar3 = param_2 * param_7 + param_6;
      if (*(short *)(param_1 + iVar3 * 2) == 0) {
        *(undefined2 *)(param_1 + iVar3 * 2) = 1;
      }
      *(short *)((int)&local_1c[0x15].field_0008 + 2) = (short)param_7;
      local_34 = 1;
      *(short *)local_10 = (short)param_6;
      local_14 = 2;
      while( true ) {
        local_8 = 0;
        local_30 = 0;
        if (local_34 < 1) break;
        local_38 = (undefined2 *)(local_24 * 8);
        local_2c = local_24 * 4 - 0x200;
        local_c = 4;
        pAVar10 = local_1c;
        do {
          sVar11 = *(short *)((int)&local_10->field_0000 + local_30 * 4 + 2);
          iVar12 = (int)sVar11;
          sVar1 = *(short *)((int)&local_10->field_0000 + local_30 * 4);
          iVar7 = (int)sVar1;
          if ((iVar12 == param_5) && (iVar3 = local_14, iVar7 == param_4)) goto LAB_0069fb6f;
          iVar3 = param_1 + (iVar12 * param_2 + iVar7) * 2;
          if (local_24 < local_c) {
            local_38 = (undefined2 *)((int)local_38 + 0x400);
            local_24 = local_24 + 0x80;
            pAVar4 = Library::DKW::LIB::MemRealloc(local_18,(uint)local_38);
            if (pAVar4 == (AnonPointee_TLOBaseTy_0607 *)0x0) goto LAB_0069fc5a;
            local_1c = (AnonPointee_TLOBaseTy_0607 *)
                       ((int)&pAVar4->field_0000 + ((int)local_1c - (int)local_18 >> 2) * 4);
            local_10 = (AnonPointee_TLOBaseTy_0607 *)
                       ((int)&pAVar4->field_0000 + ((int)local_10 - (int)local_18 >> 2) * 4);
            if (local_1c == pAVar4) {
              local_10 = (AnonPointee_TLOBaseTy_0607 *)&local_10[0x15].field_0008;
            }
            else {
              local_1c = (AnonPointee_TLOBaseTy_0607 *)&local_1c[0x15].field_0008;
            }
            pAVar10 = (AnonPointee_TLOBaseTy_0607 *)((int)&local_1c->field_0000 + local_8 * 4);
            local_18 = pAVar4;
            Library::MSVCRT::FUN_0072da70
                      ((undefined4 *)((int)&pAVar4[0x2a].field_0010 + local_2c),
                       (AnonPointee_TLOBaseTy_0607 *)((int)&pAVar4[0x15].field_0008 + local_2c),
                       local_2c + 0x200);
            local_2c = local_2c + 0x200;
          }
          pAVar4 = local_10;
          pAVar8 = pAVar10;
          if ((iVar7 < param_2 + -1) && (*(short *)(iVar3 + 2) == 0)) {
            pAVar8 = (AnonPointee_TLOBaseTy_0607 *)&pAVar10->field_0004;
            *(short *)(iVar3 + 2) = (short)local_14;
            *(short *)&pAVar10->field_0000 = sVar1 + 1;
            *(short *)((int)&pAVar10->field_0000 + 2) = sVar11;
            local_8 = local_8 + 1;
            local_c = local_c + 1;
          }
          pAVar9 = pAVar8;
          if ((0 < iVar12) && (psVar5 = (short *)(iVar3 + param_2 * -2), *psVar5 == 0)) {
            pAVar9 = (AnonPointee_TLOBaseTy_0607 *)&pAVar8->field_0004;
            *psVar5 = (short)local_14;
            *(short *)&pAVar8->field_0000 = sVar1;
            *(short *)((int)&pAVar8->field_0000 + 2) = sVar11 + -1;
            local_8 = local_8 + 1;
            local_c = local_c + 1;
          }
          pAVar10 = pAVar9;
          if ((0 < iVar7) && (*(short *)(iVar3 + -2) == 0)) {
            pAVar10 = (AnonPointee_TLOBaseTy_0607 *)&pAVar9->field_0004;
            *(short *)(iVar3 + -2) = (short)local_14;
            *(short *)&pAVar9->field_0000 = sVar1 + -1;
            *(short *)((int)&pAVar9->field_0000 + 2) = sVar11;
            local_8 = local_8 + 1;
            local_c = local_c + 1;
          }
          if ((iVar12 < param_3 + -1) && (*(short *)(iVar3 + param_2 * 2) == 0)) {
            *(short *)(iVar3 + param_2 * 2) = (short)local_14;
            *(short *)&pAVar10->field_0000 = sVar1;
            *(short *)((int)&pAVar10->field_0000 + 2) = sVar11 + 1;
            pAVar10 = (AnonPointee_TLOBaseTy_0607 *)&pAVar10->field_0004;
            local_8 = local_8 + 1;
            local_c = local_c + 1;
          }
          local_30 = local_30 + 1;
        } while (local_30 < local_34);
        local_34 = local_8;
        if (local_8 == 0) break;
        local_10 = local_1c;
        local_14 = local_14 + 1;
        local_1c = pAVar4;
      }
    }
  }
LAB_0069fc5a:
  FUN_006a5e90((short *)local_18);
  *param_8 = local_20;
  return local_28;
}

