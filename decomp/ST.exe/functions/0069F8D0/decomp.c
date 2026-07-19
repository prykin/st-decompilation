
undefined2 *
FUN_0069f8d0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int *param_8)

{
  short sVar1;
  undefined2 *puVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  short *psVar10;
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
  short *local_1c;
  short *local_18;
  int local_14;
  short *local_10;
  int local_c;
  int local_8;
  
  iVar7 = param_5;
  local_3c = 0;
  local_40 = 0;
  local_28 = (undefined2 *)0x0;
  local_18 = (short *)0x0;
  local_20 = 0;
  if ((param_4 == param_6) && (iVar3 = 1, param_5 == param_7)) {
LAB_0069fb6f:
    FUN_006ab060(&local_18);
    local_28 = (undefined2 *)Library::DKW::LIB::FUN_006aac70(iVar3 * 4);
    if (local_28 != (undefined2 *)0x0) {
      local_20 = 1;
      bVar13 = param_4 != param_6;
      param_5 = param_4;
      *local_28 = (short)param_4;
      param_4 = iVar7;
      local_28[1] = (short)iVar7;
      puVar2 = local_28;
      if ((bVar13) || (iVar7 != param_7)) {
        do {
          local_38 = puVar2 + 2;
          sVar11 = 30000;
          psVar6 = &DAT_007d8012;
          do {
            iVar7 = psVar6[-1] + param_5;
            if ((((-1 < iVar7) && (iVar7 < param_2)) && (iVar3 = *psVar6 + param_4, -1 < iVar3)) &&
               (iVar3 < param_3)) {
              if ((iVar7 == param_6) && (iVar3 == param_7)) goto LAB_0069fc43;
              sVar1 = *(short *)(param_1 + (iVar3 * param_2 + iVar7) * 2);
              if ((0 < sVar1) && (sVar1 < sVar11)) {
                sVar11 = sVar1;
                local_40 = iVar3;
                local_3c = iVar7;
              }
            }
            psVar6 = psVar6 + 2;
          } while ((int)psVar6 < 0x7d8022);
          param_5 = local_3c;
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
    local_1c = (short *)Library::DKW::LIB::FUN_006aac70(0x400);
    local_18 = local_1c;
    if (local_1c != (short *)0x0) {
      local_10 = local_1c + 0x100;
      iVar3 = param_2 * param_7 + param_6;
      if (*(short *)(param_1 + iVar3 * 2) == 0) {
        *(undefined2 *)(param_1 + iVar3 * 2) = 1;
      }
      local_1c[0x101] = (short)param_7;
      local_34 = 1;
      *local_10 = (short)param_6;
      local_14 = 2;
      while( true ) {
        local_8 = 0;
        local_30 = 0;
        if (local_34 < 1) break;
        local_38 = (undefined2 *)(local_24 * 8);
        local_2c = local_24 * 4 - 0x200;
        local_c = 4;
        psVar6 = local_1c;
        do {
          sVar11 = local_10[local_30 * 2 + 1];
          iVar12 = (int)sVar11;
          sVar1 = local_10[local_30 * 2];
          iVar8 = (int)sVar1;
          if ((iVar12 == param_5) && (iVar3 = local_14, iVar8 == param_4)) goto LAB_0069fb6f;
          iVar3 = param_1 + (iVar12 * param_2 + iVar8) * 2;
          if (local_24 < local_c) {
            local_38 = (undefined2 *)((int)local_38 + 0x400);
            local_24 = local_24 + 0x80;
            uVar5 = local_2c + 0x200;
            psVar4 = (short *)Library::DKW::LIB::FUN_006acf50((undefined4 *)local_18,(uint)local_38)
            ;
            if (psVar4 == (short *)0x0) goto LAB_0069fc5a;
            local_1c = psVar4 + ((int)local_1c - (int)local_18 >> 2) * 2;
            local_10 = psVar4 + ((int)local_10 - (int)local_18 >> 2) * 2;
            if (local_1c == psVar4) {
              local_10 = local_10 + 0x100;
            }
            else {
              local_1c = local_1c + 0x100;
            }
            psVar6 = local_1c + local_8 * 2;
            local_18 = psVar4;
            Library::MSVCRT::FUN_0072da70
                      ((undefined4 *)(local_2c + 0x400 + (int)psVar4),
                       (undefined4 *)(uVar5 + (int)psVar4),uVar5);
            local_2c = uVar5;
          }
          psVar4 = local_10;
          psVar9 = psVar6;
          if ((iVar8 < param_2 + -1) && (*(short *)(iVar3 + 2) == 0)) {
            psVar9 = psVar6 + 2;
            *(short *)(iVar3 + 2) = (short)local_14;
            *psVar6 = sVar1 + 1;
            psVar6[1] = sVar11;
            local_8 = local_8 + 1;
            local_c = local_c + 1;
          }
          psVar10 = psVar9;
          if ((0 < iVar12) && (psVar6 = (short *)(iVar3 + param_2 * -2), *psVar6 == 0)) {
            psVar10 = psVar9 + 2;
            *psVar6 = (short)local_14;
            *psVar9 = sVar1;
            psVar9[1] = sVar11 + -1;
            local_8 = local_8 + 1;
            local_c = local_c + 1;
          }
          psVar6 = psVar10;
          if ((0 < iVar8) && (*(short *)(iVar3 + -2) == 0)) {
            psVar6 = psVar10 + 2;
            *(short *)(iVar3 + -2) = (short)local_14;
            *psVar10 = sVar1 + -1;
            psVar10[1] = sVar11;
            local_8 = local_8 + 1;
            local_c = local_c + 1;
          }
          if ((iVar12 < param_3 + -1) && (*(short *)(iVar3 + param_2 * 2) == 0)) {
            *(short *)(iVar3 + param_2 * 2) = (short)local_14;
            *psVar6 = sVar1;
            psVar6[1] = sVar11 + 1;
            psVar6 = psVar6 + 2;
            local_8 = local_8 + 1;
            local_c = local_c + 1;
          }
          local_30 = local_30 + 1;
        } while (local_30 < local_34);
        local_34 = local_8;
        if (local_8 == 0) break;
        local_10 = local_1c;
        local_14 = local_14 + 1;
        local_1c = psVar4;
      }
    }
  }
LAB_0069fc5a:
  FUN_006a5e90((undefined4 *)local_18);
  *param_8 = local_20;
  return local_28;
}

