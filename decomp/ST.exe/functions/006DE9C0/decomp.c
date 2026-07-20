
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006de9c0(AnonShape_006DE9C0_E5D1D3B8 *param_1)

{
  float fVar1;
  short *psVar2;
  undefined4 uVar3;
  byte *pbVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  undefined3 extraout_var_14;
  undefined3 extraout_var_15;
  undefined3 extraout_var_16;
  undefined3 extraout_var_17;
  undefined3 extraout_var_18;
  undefined3 extraout_var_19;
  undefined3 extraout_var_20;
  undefined3 extraout_var_21;
  undefined3 extraout_var_22;
  undefined3 extraout_var_23;
  undefined3 extraout_var_24;
  undefined3 extraout_var_25;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int local_f8;
  int local_c4;
  int local_c0;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  double local_84;
  int local_70 [4];
  int local_60;
  int local_5c;
  int local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  uint local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  int local_24;
  float local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079e008;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffee8;
  local_a0 = 30000;
  local_c4 = -30000;
  local_9c = 30000;
  local_c0 = -30000;
  if (param_1->field_0124 == 1) {
    local_c0 = param_1->field_0380;
    local_a0 = (param_1->field_0030 + param_1->field_0374) / local_c0;
    if (local_a0 < 0) {
      local_a0 = 0;
    }
    local_f8 = (int)*(short *)param_1->field_0280;
    if (local_f8 <= local_a0) {
      local_a0 = local_f8 + -1;
    }
    local_c4 = (param_1->field_0038 + param_1->field_0374) / local_c0;
    if (local_c4 < 0) {
      local_c4 = 0;
    }
    if (local_f8 <= local_c4) {
      local_c4 = local_f8 + -1;
    }
    local_9c = (param_1->field_0034 + param_1->field_0378) / local_c0;
    if (local_9c < 0) {
      local_9c = 0;
    }
    iVar11 = (int)*(short *)(param_1->field_0280 + 2);
    if (iVar11 <= local_9c) {
      local_9c = iVar11 + -1;
    }
    local_c0 = (param_1->field_003C + param_1->field_0378) / local_c0;
    if (local_c0 < 0) {
      local_c0 = 0;
    }
    ExceptionList = &local_14;
    local_1c = &stack0xfffffee8;
    if (local_c0 < iVar11) goto LAB_006defd4;
    iVar6 = iVar11 + -1;
    ExceptionList = &local_14;
    local_1c = &stack0xfffffee8;
  }
  else {
    ExceptionList = &local_14;
    FUN_006e1c20(param_1,(float)param_1->field_0030,param_1->field_0034,-(float)param_1->field_00D0,
                 &local_20,&local_28);
    lVar13 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar13;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    psVar2 = (short *)param_1->field_0280;
    iVar11 = (int)*psVar2;
    if (iVar11 <= iVar6) {
      iVar6 = iVar11 + -1;
    }
    iVar11 = 30000;
    if (iVar6 < 30000) {
      iVar11 = iVar6;
      local_a0 = iVar6;
    }
    if (-30000 < iVar6) {
      local_c4 = iVar6;
    }
    lVar13 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar13;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    iVar7 = (int)psVar2[1];
    if (iVar7 <= iVar6) {
      iVar6 = iVar7 + -1;
    }
    if (iVar6 < 30000) {
      local_9c = iVar6;
    }
    if (-30000 < iVar6) {
      local_c0 = iVar6;
    }
    FUN_006e1c20(param_1,(float)param_1->field_0030,param_1->field_003C + -1,
                 -(float)param_1->field_00D0,&local_20,&local_28);
    lVar13 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar13;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    psVar2 = (short *)param_1->field_0280;
    iVar7 = (int)*psVar2;
    if (iVar7 <= iVar6) {
      iVar6 = iVar7 + -1;
    }
    if (iVar6 < iVar11) {
      iVar11 = iVar6;
      local_a0 = iVar6;
    }
    if (local_c4 < iVar6) {
      local_c4 = iVar6;
    }
    lVar13 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar13;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    iVar7 = (int)psVar2[1];
    if (iVar7 <= iVar6) {
      iVar6 = iVar7 + -1;
    }
    if (iVar6 < local_9c) {
      local_9c = iVar6;
    }
    if (local_c0 < iVar6) {
      local_c0 = iVar6;
    }
    FUN_006e1c20(param_1,(float)(param_1->field_0038 + -1),param_1->field_003C + -1,
                 -(float)param_1->field_00D0,&local_20,&local_28);
    lVar13 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar13;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    psVar2 = (short *)param_1->field_0280;
    iVar7 = (int)*psVar2;
    if (iVar7 <= iVar6) {
      iVar6 = iVar7 + -1;
    }
    if (iVar6 < iVar11) {
      iVar11 = iVar6;
      local_a0 = iVar6;
    }
    if (local_c4 < iVar6) {
      local_c4 = iVar6;
    }
    lVar13 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar13;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    iVar7 = (int)psVar2[1];
    if (iVar7 <= iVar6) {
      iVar6 = iVar7 + -1;
    }
    if (iVar6 < local_9c) {
      local_9c = iVar6;
    }
    if (local_c0 < iVar6) {
      local_c0 = iVar6;
    }
    FUN_006e1c20(param_1,(float)(param_1->field_0038 + -1),param_1->field_0034,
                 -(float)param_1->field_00D0,&local_20,&local_28);
    lVar13 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar13;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    psVar2 = (short *)param_1->field_0280;
    iVar7 = (int)*psVar2;
    if (iVar7 <= iVar6) {
      iVar6 = iVar7 + -1;
    }
    if (iVar6 < iVar11) {
      local_a0 = iVar6;
    }
    if (local_c4 < iVar6) {
      local_c4 = iVar6;
    }
    lVar13 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar13;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    iVar11 = (int)psVar2[1];
    if (iVar11 <= iVar6) {
      iVar6 = iVar11 + -1;
    }
    if (iVar6 < local_9c) {
      local_9c = iVar6;
    }
    if (local_c0 < iVar6) {
      local_c0 = iVar6;
    }
    fVar1 = (float)((float10)param_1->field_00D0 * (float10)_DAT_0079df90);
    FUN_006e1c20(param_1,(float)param_1->field_0030,param_1->field_0034,fVar1,&local_20,&local_28);
    lVar13 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar13;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    psVar2 = (short *)param_1->field_0280;
    iVar11 = (int)*psVar2;
    if (iVar11 <= iVar6) {
      iVar6 = iVar11 + -1;
    }
    if (iVar6 < local_a0) {
      local_a0 = iVar6;
    }
    if (local_c4 < iVar6) {
      local_c4 = iVar6;
    }
    lVar13 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar13;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    iVar11 = (int)psVar2[1];
    if (iVar11 <= iVar6) {
      iVar6 = iVar11 + -1;
    }
    if (iVar6 < local_9c) {
      local_9c = iVar6;
    }
    if (local_c0 < iVar6) {
      local_c0 = iVar6;
    }
    FUN_006e1c20(param_1,(float)param_1->field_0030,param_1->field_003C + -1,fVar1,&local_20,
                 &local_28);
    lVar13 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar13;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    psVar2 = (short *)param_1->field_0280;
    iVar11 = (int)*psVar2;
    if (iVar11 <= iVar6) {
      iVar6 = iVar11 + -1;
    }
    if (iVar6 < local_a0) {
      local_a0 = iVar6;
    }
    if (local_c4 < iVar6) {
      local_c4 = iVar6;
    }
    lVar13 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar13;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    iVar11 = (int)psVar2[1];
    if (iVar11 <= iVar6) {
      iVar6 = iVar11 + -1;
    }
    if (iVar6 < local_9c) {
      local_9c = iVar6;
    }
    if (local_c0 < iVar6) {
      local_c0 = iVar6;
    }
    FUN_006e1c20(param_1,(float)(param_1->field_0038 + -1),param_1->field_003C + -1,fVar1,&local_20,
                 &local_28);
    lVar13 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar13;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    psVar2 = (short *)param_1->field_0280;
    iVar11 = (int)*psVar2;
    if (iVar11 <= iVar6) {
      iVar6 = iVar11 + -1;
    }
    if (iVar6 < local_a0) {
      local_a0 = iVar6;
    }
    if (local_c4 < iVar6) {
      local_c4 = iVar6;
    }
    lVar13 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar13;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    iVar11 = (int)psVar2[1];
    if (iVar11 <= iVar6) {
      iVar6 = iVar11 + -1;
    }
    if (iVar6 < local_9c) {
      local_9c = iVar6;
    }
    if (local_c0 < iVar6) {
      local_c0 = iVar6;
    }
    FUN_006e1c20(param_1,(float)(param_1->field_0038 + -1),param_1->field_0034,fVar1,&local_20,
                 &local_28);
    local_84 = (double)local_28;
    lVar13 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar13;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    psVar2 = (short *)param_1->field_0280;
    local_f8 = (int)*psVar2;
    if (local_f8 <= iVar6) {
      iVar6 = local_f8 + -1;
    }
    if (iVar6 < local_a0) {
      local_a0 = iVar6;
    }
    if (local_c4 < iVar6) {
      local_c4 = iVar6;
    }
    lVar13 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar13;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    iVar11 = (int)psVar2[1];
    if (iVar11 <= iVar6) {
      iVar6 = iVar11 + -1;
    }
    if (iVar6 < local_9c) {
      local_9c = iVar6;
    }
    if (iVar6 <= local_c0) goto LAB_006defd4;
  }
  local_c0 = iVar6;
LAB_006defd4:
  local_9c = local_9c >> 1;
  iVar6 = local_c4 >> 1;
  if (local_c4 < local_f8 + -2) {
    iVar6 = iVar6 + 1;
  }
  iVar7 = local_c0 >> 1;
  if (local_c0 < iVar11 + -2) {
    iVar7 = iVar7 + 1;
  }
  param_1->field_0140 = 0;
  param_1->field_013C = 0;
  local_60 = 5;
  local_a0 = local_a0 >> 1;
  do {
    psVar2 = (short *)param_1->field_0280;
    iVar11 = (int)psVar2[1] * (int)*psVar2 * local_60;
    local_4c = (int)psVar2 + ((int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2) * 4 + 0x459;
    iVar11 = local_a0;
    for (local_5c = local_9c; local_a0 = iVar11, local_5c <= iVar7; local_5c = local_5c + 1) {
      if (iVar11 <= iVar6) {
        piVar9 = (int *)(local_4c + ((*(short *)param_1->field_0280 * local_5c) / 2 + iVar11) * 4);
        do {
          if ((*piVar9 != 0) &&
             (bVar5 = FUN_006de570(param_1,iVar11,local_5c), CONCAT31(extraout_var,bVar5) != 0)) {
            puVar10 = (undefined4 *)*piVar9;
            *puVar10 = param_1->field_0140;
            param_1->field_0140 = puVar10;
            param_1->field_013C = param_1->field_013C + 1;
          }
          iVar11 = iVar11 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar11 <= iVar6);
      }
      iVar11 = local_a0;
    }
    local_60 = local_60 + -1;
    local_5c = local_9c;
  } while (0 < local_60);
  for (; iVar12 = local_9c, local_5c <= iVar7; local_5c = local_5c + 1) {
    local_a0 = iVar11;
    if (iVar11 <= iVar6) {
      iVar12 = ((*(short *)param_1->field_0280 * local_5c) / 2 + iVar11) * 4;
      do {
        iVar8 = *(int *)(iVar12 + 0x459 + param_1->field_0280);
        if (((iVar8 != 0) && (*(int *)(iVar8 + 0x24) < 3)) &&
           (bVar5 = FUN_006de570(param_1,iVar11,local_5c), CONCAT31(extraout_var_00,bVar5) != 0)) {
          puVar10 = *(undefined4 **)(iVar12 + 0x459 + param_1->field_0280);
          *puVar10 = param_1->field_0140;
          param_1->field_0140 = puVar10;
          param_1->field_013C = param_1->field_013C + 1;
        }
        iVar11 = iVar11 + 1;
        iVar12 = iVar12 + 4;
      } while (iVar11 <= iVar6);
    }
    iVar11 = local_a0;
  }
  while (local_5c = iVar12, local_a0 = iVar11, local_5c <= iVar7) {
    if (iVar11 <= iVar6) {
      iVar12 = ((*(short *)param_1->field_0280 * local_5c) / 2 + iVar11) * 4;
      do {
        iVar8 = *(int *)(iVar12 + 0x459 + param_1->field_0280);
        if (((iVar8 != 0) && (2 < *(int *)(iVar8 + 0x24))) &&
           (bVar5 = FUN_006de570(param_1,iVar11,local_5c), CONCAT31(extraout_var_01,bVar5) != 0)) {
          puVar10 = *(undefined4 **)(iVar12 + 0x459 + param_1->field_0280);
          *puVar10 = param_1->field_0140;
          param_1->field_0140 = puVar10;
          param_1->field_013C = param_1->field_013C + 1;
        }
        iVar11 = iVar11 + 1;
        iVar12 = iVar12 + 4;
      } while (iVar11 <= iVar6);
    }
    iVar11 = local_a0;
    iVar12 = local_5c + 1;
  }
  local_50 = param_1->field_0140;
  uVar3 = param_1->field_013C;
  if ((param_1->field_0124 != 10) && (param_1->field_0124 != 1)) {
    if (local_9c == 0) {
      for (; iVar11 <= iVar6; iVar11 = iVar11 + 1) {
        bVar5 = FUN_006de570(param_1,iVar11,-1);
        if (CONCAT31(extraout_var_02,bVar5) != 0) {
          local_8 = 0;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar10 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          param_1->field_0140 = &stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        bVar5 = FUN_006de570(param_1,iVar11,-2);
        if (CONCAT31(extraout_var_03,bVar5) != 0) {
          local_8 = 1;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar10 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          param_1->field_0140 = &stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
      }
      if (local_a0 == 0) {
        bVar5 = FUN_006de570(param_1,-1,-1);
        if (CONCAT31(extraout_var_04,bVar5) != 0) {
          local_8 = 2;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar10 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          param_1->field_0140 = &stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        bVar5 = FUN_006de570(param_1,-1,-2);
        if (CONCAT31(extraout_var_05,bVar5) != 0) {
          local_8 = 3;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar10 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          param_1->field_0140 = &stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        bVar5 = FUN_006de570(param_1,-2,-1);
        if (CONCAT31(extraout_var_06,bVar5) != 0) {
          local_8 = 4;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar10 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          param_1->field_0140 = &stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        bVar5 = FUN_006de570(param_1,-2,-2);
        if (CONCAT31(extraout_var_07,bVar5) != 0) {
          local_8 = 5;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar10 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          param_1->field_0140 = &stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
      }
      iVar11 = (int)*(short *)param_1->field_0280 / 2;
      if (iVar11 + -1 <= iVar6) {
        bVar5 = FUN_006de570(param_1,iVar11,-1);
        if (CONCAT31(extraout_var_08,bVar5) != 0) {
          local_8 = 6;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar10 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          param_1->field_0140 = &stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        bVar5 = FUN_006de570(param_1,iVar11,-2);
        if (CONCAT31(extraout_var_09,bVar5) != 0) {
          local_8 = 7;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar10 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          param_1->field_0140 = &stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        bVar5 = FUN_006de570(param_1,iVar11 + 1,-1);
        if (CONCAT31(extraout_var_10,bVar5) != 0) {
          local_8 = 8;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar10 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          param_1->field_0140 = &stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        bVar5 = FUN_006de570(param_1,iVar11 + 1,-2);
        if (CONCAT31(extraout_var_11,bVar5) != 0) {
          local_8 = 9;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar10 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          param_1->field_0140 = &stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
      }
    }
    iVar12 = (int)*(short *)(param_1->field_0280 + 2) / 2;
    iVar11 = local_a0;
    if (iVar12 + -1 <= iVar7) {
      for (; local_54 = iVar11, iVar11 <= iVar6; iVar11 = iVar11 + 1) {
        bVar5 = FUN_006de570(param_1,iVar11,iVar12);
        if (CONCAT31(extraout_var_12,bVar5) != 0) {
          local_8 = 10;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar10 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          param_1->field_0140 = &stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
          iVar11 = local_54;
        }
        bVar5 = FUN_006de570(param_1,iVar11,iVar12 + 1);
        if (CONCAT31(extraout_var_13,bVar5) != 0) {
          local_8 = 0xb;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar10 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          param_1->field_0140 = &stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
          iVar11 = local_54;
        }
      }
      if (local_a0 == 0) {
        bVar5 = FUN_006de570(param_1,-1,iVar12);
        if (CONCAT31(extraout_var_14,bVar5) != 0) {
          local_8 = 0xc;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar10 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          param_1->field_0140 = &stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        bVar5 = FUN_006de570(param_1,-1,iVar12 + 1);
        if (CONCAT31(extraout_var_15,bVar5) != 0) {
          local_8 = 0xd;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar10 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          param_1->field_0140 = &stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        bVar5 = FUN_006de570(param_1,-2,iVar12);
        if (CONCAT31(extraout_var_16,bVar5) != 0) {
          local_8 = 0xe;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar10 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          param_1->field_0140 = &stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        bVar5 = FUN_006de570(param_1,-2,iVar12 + 1);
        if (CONCAT31(extraout_var_17,bVar5) != 0) {
          local_8 = 0xf;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar10 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          param_1->field_0140 = &stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
      }
      iVar11 = (int)*(short *)param_1->field_0280 / 2;
      if (iVar11 + -1 <= iVar6) {
        bVar5 = FUN_006de570(param_1,iVar11,iVar12);
        if (CONCAT31(extraout_var_18,bVar5) != 0) {
          local_8 = 0x10;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar10 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          param_1->field_0140 = &stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        bVar5 = FUN_006de570(param_1,iVar11,iVar12 + 1);
        if (CONCAT31(extraout_var_19,bVar5) != 0) {
          local_8 = 0x11;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar10 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          param_1->field_0140 = &stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        bVar5 = FUN_006de570(param_1,iVar11 + 1,iVar12);
        if (CONCAT31(extraout_var_20,bVar5) != 0) {
          local_8 = 0x12;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar10 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          param_1->field_0140 = &stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        bVar5 = FUN_006de570(param_1,iVar11 + 1,iVar12 + 1);
        if (CONCAT31(extraout_var_21,bVar5) != 0) {
          local_8 = 0x13;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar10 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          param_1->field_0140 = &stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
      }
    }
    iVar11 = local_9c;
    if (local_a0 == 0) {
      for (; iVar11 <= iVar7; iVar11 = iVar11 + 1) {
        bVar5 = FUN_006de570(param_1,-1,iVar11);
        if (CONCAT31(extraout_var_22,bVar5) != 0) {
          local_8 = 0x14;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar10 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          param_1->field_0140 = &stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        bVar5 = FUN_006de570(param_1,-2,iVar11);
        if (CONCAT31(extraout_var_23,bVar5) != 0) {
          local_8 = 0x15;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar10 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          param_1->field_0140 = &stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
      }
    }
    iVar12 = (int)*(short *)param_1->field_0280 / 2;
    iVar11 = local_9c;
    if (iVar12 + -1 <= iVar6) {
      for (; iVar11 <= iVar7; iVar11 = iVar11 + 1) {
        bVar5 = FUN_006de570(param_1,iVar12,iVar11);
        if (CONCAT31(extraout_var_24,bVar5) != 0) {
          local_8 = 0x16;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar10 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          param_1->field_0140 = &stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        bVar5 = FUN_006de570(param_1,iVar12 + 1,iVar11);
        if (CONCAT31(extraout_var_25,bVar5) != 0) {
          local_8 = 0x17;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar10 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          param_1->field_0140 = &stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
      }
    }
  }
  FUN_006ddd50((AnonShape_006DDD50_309FA381 *)param_1);
  param_1->field_0140 = local_50;
  param_1->field_013C = uVar3;
  local_38 = param_1->field_0030;
  local_34 = param_1->field_0034;
  local_30 = param_1->field_0038 - local_38;
  local_2c = param_1->field_003C - local_34;
  local_24 = 0;
  if (0 < param_1->field_028C) {
    puVar10 = (undefined4 *)(param_1->field_0290 + 8);
    do {
      pbVar4 = (byte *)puVar10[7];
      if (pbVar4 != (byte *)0x0) {
        local_94 = *puVar10;
        local_90 = puVar10[1];
        local_8c = puVar10[2];
        FUN_006e25d0(param_1,&local_48);
        if (param_1->field_02F0 == 100) {
          local_54 = (local_48 >> 0x10) - (int)*(short *)(puVar10 + 5);
          local_5c = (local_44 >> 0x10) - (int)*(short *)((int)puVar10 + 0x16);
          local_b4 = *(short *)(pbVar4 + 0xe) + local_54;
          local_b0 = *(short *)(pbVar4 + 0x10) + local_5c;
          local_ac = (int)*(short *)(pbVar4 + 0x12);
          local_a8 = (int)*(short *)(pbVar4 + 0x14);
        }
        else {
          local_ac = *(int *)(pbVar4 + 4);
          local_88 = *(int *)(pbVar4 + 8);
          local_a4 = (local_ac * param_1->field_02F0) / 100;
          iVar6 = (local_88 * param_1->field_02F4) / 100;
          iVar11 = (int)((ulonglong)
                         ((longlong)((int)*(short *)(puVar10 + 5) * param_1->field_02F0) *
                         -0x51eb851f) >> 0x20);
          local_54 = (local_48 >> 0x10) + ((iVar11 >> 5) - (iVar11 >> 0x1f));
          iVar11 = (int)((ulonglong)
                         ((longlong)((int)*(short *)((int)puVar10 + 0x16) * param_1->field_02F4) *
                         -0x51eb851f) >> 0x20);
          local_5c = (local_44 >> 0x10) + ((iVar11 >> 5) - (iVar11 >> 0x1f));
          local_b4 = (local_ac / 2 + *(short *)(pbVar4 + 0xe) * local_a4) / local_ac + local_54;
          local_b0 = (local_88 / 2 + *(short *)(pbVar4 + 0x10) * iVar6) / local_88 + local_5c;
          local_ac = (*(short *)(pbVar4 + 0x12) * local_a4) / local_ac;
          local_a8 = (*(short *)(pbVar4 + 0x14) * iVar6) / local_88;
        }
        iVar6 = FUN_006b0460(local_70,&local_b4,&local_38);
        if (iVar6 != 0) {
          FUN_00708d10(param_1,param_1->field_000C,param_1->field_0028,pbVar4,local_54,local_5c,
                       local_40,puVar10[4],1);
        }
      }
      local_24 = local_24 + 1;
      puVar10 = puVar10 + 0xb;
    } while (local_24 < param_1->field_028C);
  }
  for (puVar10 = param_1->field_0294; puVar10 != (undefined4 *)0x0; puVar10 = (undefined4 *)*puVar10
      ) {
    pbVar4 = (byte *)puVar10[9];
    if (pbVar4 != (byte *)0x0) {
      local_94 = puVar10[2];
      local_90 = puVar10[3];
      local_8c = puVar10[4];
      FUN_006e25d0(param_1,&local_48);
      if (param_1->field_02F0 == 100) {
        local_54 = (local_48 >> 0x10) - (int)*(short *)(puVar10 + 7);
        local_5c = (local_44 >> 0x10) - (int)*(short *)((int)puVar10 + 0x1e);
        local_b4 = *(short *)(pbVar4 + 0xe) + local_54;
        local_b0 = *(short *)(pbVar4 + 0x10) + local_5c;
        local_ac = (int)*(short *)(pbVar4 + 0x12);
        local_a8 = (int)*(short *)(pbVar4 + 0x14);
      }
      else {
        local_ac = *(int *)(pbVar4 + 4);
        local_88 = *(int *)(pbVar4 + 8);
        local_a4 = (local_ac * param_1->field_02F0) / 100;
        iVar6 = (local_88 * param_1->field_02F4) / 100;
        iVar11 = (int)((ulonglong)
                       ((longlong)((int)*(short *)(puVar10 + 7) * param_1->field_02F0) * -0x51eb851f
                       ) >> 0x20);
        local_54 = (local_48 >> 0x10) + ((iVar11 >> 5) - (iVar11 >> 0x1f));
        iVar11 = (int)((ulonglong)
                       ((longlong)((int)*(short *)((int)puVar10 + 0x1e) * param_1->field_02F4) *
                       -0x51eb851f) >> 0x20);
        local_5c = (local_44 >> 0x10) + ((iVar11 >> 5) - (iVar11 >> 0x1f));
        local_b4 = (local_ac / 2 + *(short *)(pbVar4 + 0xe) * local_a4) / local_ac + local_54;
        local_b0 = (local_88 / 2 + *(short *)(pbVar4 + 0x10) * iVar6) / local_88 + local_5c;
        local_ac = (*(short *)(pbVar4 + 0x12) * local_a4) / local_ac;
        local_a8 = (*(short *)(pbVar4 + 0x14) * iVar6) / local_88;
      }
      iVar6 = FUN_006b0460(local_70,&local_b4,&local_38);
      if (iVar6 != 0) {
        FUN_00708d10(param_1,param_1->field_000C,param_1->field_0028,pbVar4,local_54,local_5c,
                     puVar10[6] + local_40,0,1);
      }
    }
  }
  local_24 = 0;
  if (0 < param_1->field_028C) {
    puVar10 = (undefined4 *)(param_1->field_0290 + 8);
    do {
      pbVar4 = (byte *)puVar10[6];
      local_94 = *puVar10;
      local_90 = puVar10[1];
      local_8c = puVar10[2];
      FUN_006e25d0(param_1,&local_48);
      if (param_1->field_02F0 == 100) {
        local_54 = (local_48 >> 0x10) - (int)*(short *)(puVar10 + 5);
        local_5c = (local_44 >> 0x10) - (int)*(short *)((int)puVar10 + 0x16);
        local_b4 = *(short *)(pbVar4 + 0xe) + local_54;
        local_b0 = *(short *)(pbVar4 + 0x10) + local_5c;
        local_ac = (int)*(short *)(pbVar4 + 0x12);
        local_a8 = (int)*(short *)(pbVar4 + 0x14);
      }
      else {
        local_ac = *(int *)(pbVar4 + 4);
        local_88 = *(int *)(pbVar4 + 8);
        local_a4 = (local_ac * param_1->field_02F0) / 100;
        iVar6 = (local_88 * param_1->field_02F4) / 100;
        iVar11 = (int)((ulonglong)
                       ((longlong)((int)*(short *)(puVar10 + 5) * param_1->field_02F0) * -0x51eb851f
                       ) >> 0x20);
        local_54 = (local_48 >> 0x10) + ((iVar11 >> 5) - (iVar11 >> 0x1f));
        iVar11 = (int)((ulonglong)
                       ((longlong)((int)*(short *)((int)puVar10 + 0x16) * param_1->field_02F4) *
                       -0x51eb851f) >> 0x20);
        local_5c = (local_44 >> 0x10) + ((iVar11 >> 5) - (iVar11 >> 0x1f));
        local_b4 = (local_ac / 2 + *(short *)(pbVar4 + 0xe) * local_a4) / local_ac + local_54;
        local_b0 = (local_88 / 2 + *(short *)(pbVar4 + 0x10) * iVar6) / local_88 + local_5c;
        local_ac = (*(short *)(pbVar4 + 0x12) * local_a4) / local_ac;
        local_a8 = (*(short *)(pbVar4 + 0x14) * iVar6) / local_88;
      }
      iVar6 = FUN_006b0460(local_70,&local_b4,&local_38);
      if (iVar6 != 0) {
        FUN_00708d10(param_1,param_1->field_000C,param_1->field_0028,pbVar4,local_54,local_5c,
                     local_40,puVar10[4],0);
      }
      local_24 = local_24 + 1;
      puVar10 = puVar10 + 0xb;
    } while (local_24 < param_1->field_028C);
  }
  for (puVar10 = param_1->field_0294; puVar10 != (undefined4 *)0x0; puVar10 = (undefined4 *)*puVar10
      ) {
    pbVar4 = (byte *)puVar10[8];
    local_94 = puVar10[2];
    local_90 = puVar10[3];
    local_8c = puVar10[4];
    FUN_006e25d0(param_1,&local_48);
    if (param_1->field_02F0 == 100) {
      local_54 = (local_48 >> 0x10) - (int)*(short *)(puVar10 + 7);
      local_5c = (local_44 >> 0x10) - (int)*(short *)((int)puVar10 + 0x1e);
      local_b4 = *(short *)(pbVar4 + 0xe) + local_54;
      local_b0 = *(short *)(pbVar4 + 0x10) + local_5c;
      local_ac = (int)*(short *)(pbVar4 + 0x12);
      local_a8 = (int)*(short *)(pbVar4 + 0x14);
    }
    else {
      local_ac = *(int *)(pbVar4 + 4);
      local_88 = *(int *)(pbVar4 + 8);
      local_a4 = (local_ac * param_1->field_02F0) / 100;
      iVar6 = (local_88 * param_1->field_02F4) / 100;
      iVar11 = (int)((ulonglong)
                     ((longlong)((int)*(short *)(puVar10 + 7) * param_1->field_02F0) * -0x51eb851f)
                    >> 0x20);
      local_54 = (local_48 >> 0x10) + ((iVar11 >> 5) - (iVar11 >> 0x1f));
      iVar11 = (int)((ulonglong)
                     ((longlong)((int)*(short *)((int)puVar10 + 0x1e) * param_1->field_02F4) *
                     -0x51eb851f) >> 0x20);
      local_5c = (local_44 >> 0x10) + ((iVar11 >> 5) - (iVar11 >> 0x1f));
      local_b4 = (local_ac / 2 + *(short *)(pbVar4 + 0xe) * local_a4) / local_ac + local_54;
      local_b0 = (local_88 / 2 + *(short *)(pbVar4 + 0x10) * iVar6) / local_88 + local_5c;
      local_ac = (*(short *)(pbVar4 + 0x12) * local_a4) / local_ac;
      local_a8 = (*(short *)(pbVar4 + 0x14) * iVar6) / local_88;
    }
    iVar6 = FUN_006b0460(local_70,&local_b4,&local_38);
    if (iVar6 != 0) {
      FUN_00708d10(param_1,param_1->field_000C,param_1->field_0028,pbVar4,local_54,local_5c,
                   puVar10[6] + local_40,0,0);
    }
  }
  if (((((param_1->field_0124 != 10) && (param_1->field_0124 != 1)) && (param_1->field_0298 != 0))
      && ((param_1->field_0004 != 0 && ((*(uint *)(param_1->field_0004 + 0xc) & 0x1100) != 0x100))))
     && ((param_1->field_02DC == 0 || (param_1->field_02D8 != 0)))) {
    iVar6 = param_1->field_0030;
    iVar11 = param_1->field_0038;
    iVar12 = param_1->field_0028 * param_1->field_0034 + param_1->field_000C + iVar6;
    iVar7 = param_1->field_003C - param_1->field_0034;
    while (iVar7 != 0) {
      for (iVar8 = 0; iVar8 < iVar11 - iVar6; iVar8 = iVar8 + 1) {
        *(undefined1 *)(iVar8 + iVar12) =
             *(undefined1 *)(param_1->field_0298 + (uint)*(byte *)(iVar8 + iVar12));
      }
      iVar12 = iVar12 + param_1->field_0028;
      iVar7 = iVar7 + -1;
    }
  }
  param_1->field_0134 = 0;
  ExceptionList = local_14;
  return;
}

