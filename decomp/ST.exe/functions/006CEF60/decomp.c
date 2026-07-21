
/* [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 006CEF60 -> 006D3300 @ 006CF376 | 006CEF60 -> 006DA080 @ 006CF4D7 */

int FUN_006cef60(int *param_1,uint *param_2,AnonShape_006B5B10_E0D06CF1 *param_3,int param_4,
                AnonShape_006D86E0_768BB816 *param_5,char *param_6,int param_7,int param_8,
                int *param_9,int param_10,int param_11,uint param_12,undefined1 *param_13)

{
  int *piVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  AnonShape_006D86E0_768BB816 *pAVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  AnonShape_006D86E0_D6D32C07 *pAVar13;
  uint uVar14;
  int local_a0;
  int local_90;
  int local_8c;
  int local_60;
  int local_5c;
  uint local_58;
  byte *local_54;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  byte *local_2c;
  int local_28;
  int local_24;
  uint local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  piVar3 = param_9;
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079da38;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff20;
  iVar12 = 0;
  local_28 = 0;
  piVar1 = param_1 + param_11 * 4 + 5;
  local_48 = *piVar1;
  local_44 = piVar1[1];
  local_40 = piVar1[2];
  local_3c = piVar1[3];
  local_38 = param_7;
  local_34 = param_8;
  local_30 = param_9[2];
  local_2c = (byte *)param_9[3];
  ExceptionList = &local_14;
  iVar4 = FUN_006cfeb0(&local_38,&local_38,&local_48);
  pbVar2 = local_2c;
  uVar8 = local_30;
  iVar7 = local_34;
  iVar5 = local_38;
  pAVar6 = param_5;
  iVar11 = param_4;
  if (iVar4 == 0) goto cf_common_exit_006CF911;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(*param_1 + 0x20) == 0x10) && (local_24 = *(int *)(param_4 + 0xb4), local_24 == 0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_24 = *(int *)(*param_1 + 0x4c0);
  }
  if ((param_12 & 0xa0000000) != 0) {
    local_30 = local_30 + local_38;
    local_2c = local_2c + local_34;
    local_60 = (*piVar3 - param_7) + local_38;
    local_5c = (piVar3[1] - param_8) + local_34;
    local_58 = (local_60 - local_38) + local_30;
    local_54 = local_2c + (local_5c - local_34);
    iVar11 = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    while (iVar5 = (**(code **)(**(int **)(*param_1 + 0x44) + 0x14))
                             (*(int **)(*param_1 + 0x44),&local_38,param_5,&local_60,0x1008000,0),
          iVar5 != 0) {
      if (iVar5 == -0x7789fe3e) {
        FUN_006cec40((AnonShape_006CEC40_BB23E716 *)*param_1);
        FUN_006cee60((int)param_1);
      }
      else {
        if (((iVar5 != -0x7789ff60) && (iVar5 != -0x7789fe52)) || (iVar11 != 0)) break;
        Sleep(2);
      }
      iVar11 = iVar11 + 1;
      if (1 < iVar11) break;
    }
    if ((iVar5 == -0x7789ff60) || (local_28 = iVar5, iVar5 == -0x7789fe52)) {
      local_28 = 0;
    }
    goto cf_common_exit_006CF911;
  }
  if ((param_12 & 0xc0000000) != 0) {
    if (param_6 == (char *)0x0) {
      param_6 = (char *)FUN_006b4fa0((int)param_5);
    }
    uVar8 = (uint)*(ushort *)&pAVar6->field_0xe * *(int *)&pAVar6->field_0x4 + 0x1f >> 3 &
            0x1ffffffc;
    param_6 = param_6 + ((*(int *)&pAVar6->field_0x8 - ((param_9[1] - param_8) + local_34)) -
                        (int)local_2c) * uVar8 + (*param_9 - param_7) + local_38;
    param_2 = (uint *)((int)param_2 + (int)(local_2c + local_34 + -1) * (int)param_3 + local_38);
    local_8 = 0;
    FUN_006cebe0((char *)param_2,-(int)param_3,param_6,uVar8,local_30,(int)local_2c,
                 *(char *)(iVar11 + 0x54));
    goto cf_common_exit_006CF911;
  }
  if ((param_12 & 0x5000000) != 0) {
    local_8c = 0;
    if ((char)param_12 == '\x02') {
      local_28 = FUN_006d9f30(param_1,local_38,local_34,local_30,(int)local_2c);
      if (local_28 != 0) goto cf_common_exit_006CF911;
      local_4c = 0;
      local_28 = 0;
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar12 = FUN_006bbe40(*(int **)(*param_1 + 0x44),(uint *)&param_2,(int *)&param_3,0x20);
        local_28 = iVar12;
        if (iVar12 == 0) goto LAB_006cf209;
        if (iVar12 != -0x7789fe3e) break;
        FUN_006cec40((AnonShape_006CEC40_BB23E716 *)*param_1);
        local_4c = local_4c + 1;
      } while (local_4c < 2);
      if (iVar12 != 0) goto cf_common_exit_006CF911;
    }
LAB_006cf209:
    local_30 = local_30 + local_38;
    local_2c = local_2c + local_34;
    local_a0 = 0;
    for (pAVar6 = param_5; (local_a0 < param_10 && (iVar5 = *(int *)&pAVar6->field_0x6, iVar5 != 0))
        ; pAVar6 = (AnonShape_006D86E0_768BB816 *)&pAVar6->field_0xa) {
      if (-1 < *(short *)&pAVar6->field_0x4) {
        iVar7 = ((int)*(short *)pAVar6 - *(int *)(iVar11 + 0x28)) + *(int *)(iVar11 + 0x18);
        iVar12 = ((int)*(short *)&pAVar6->field_0002 - *(int *)(iVar11 + 0x2c)) +
                 *(int *)(iVar11 + 0x1c);
        iVar4 = ((int)*(short *)(iVar5 + 0xe) - *param_9) + iVar7 + param_7;
        iVar9 = ((int)*(short *)(iVar5 + 0x10) - param_9[1]) + iVar12 + param_8;
        local_58 = (uint)*(short *)(iVar5 + 0x12);
        local_54 = (byte *)(int)*(short *)(iVar5 + 0x14);
        local_60 = iVar4;
        local_5c = iVar9;
        iVar5 = FUN_006cfeb0(&local_60,&local_60,&local_38);
        if (iVar5 != 0) {
          iVar4 = local_60 - iVar4;
          uVar8 = local_5c - iVar9;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)(*param_1 + 0x20) == 0x10) {
            iVar5 = local_60 * 2 + local_5c * (int)param_3;
          }
          else {
            iVar5 = local_5c * (int)param_3 + local_60;
          }
          pAVar13 = (AnonShape_006D86E0_D6D32C07 *)((int)param_2 + iVar5);
          uVar10 = param_12 & 0xff;
          if (uVar10 == 0) {
            local_8 = 1;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (*(int *)(*param_1 + 0x20) == 0x10) {
              iVar5 = *(int *)(iVar11 + 0xbc) + 7;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              FUN_006d3300((uint *)pAVar13,(int)param_3,*(byte **)&pAVar6->field_0x6,iVar4,uVar8,
                           local_58,local_54,local_24,*(byte **)(iVar11 + 0xb8),
                           (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3,
                           ((*param_9 - *(int *)(iVar11 + 0x18)) - param_7) +
                           *(int *)(iVar11 + 0x28) + local_60,
                           ((param_9[1] - param_8) - *(int *)(iVar11 + 0x1c)) + local_5c +
                           *(int *)(iVar11 + 0x2c));
            }
            else {
              iVar5 = *(int *)(iVar11 + 0xbc) + 7;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              FUN_006d2820((byte *)pAVar13,param_3,*(byte **)&pAVar6->field_0x6,iVar4,uVar8,local_58
                           ,(uint)local_54,*(int *)(iVar11 + 0xb0),*(byte **)(iVar11 + 0xb8),
                           (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3,
                           ((*param_9 - *(int *)(iVar11 + 0x18)) - param_7) +
                           *(int *)(iVar11 + 0x28) + local_60,
                           (byte *)(((param_9[1] - param_8) - *(int *)(iVar11 + 0x1c)) + local_5c +
                                   *(int *)(iVar11 + 0x2c)));
            }
LAB_006cf37b:
            local_8 = 0xffffffff;
          }
          else if (uVar10 == 2) {
            pbVar2 = *(byte **)&pAVar6->field_0x6;
            local_90 = (int)*(short *)pAVar6 + iVar7 + (*(short *)(pbVar2 + 0xe) - local_38) +
                       param_7;
            if (local_90 < 0) {
              local_90 = 0;
            }
            iVar5 = (int)*(short *)&pAVar6->field_0002 +
                    iVar12 + (*(short *)(pbVar2 + 0x10) - local_34) + param_8;
            if (iVar5 < 0) {
              iVar5 = 0;
            }
            local_8c = FUN_006da080(param_1,(uint *)pAVar13,(int)param_3,local_90,iVar5,pbVar2,iVar4
                                    ,uVar8,local_58,local_54,param_13);
          }
          else if (uVar10 == 1) {
            if ((param_1[0x74] == 0) ||
               (((*(AnonShape_006D86E0_768BB816 **)&pAVar6->field_0x6)->field_000D & 3) != 1)) {
              local_20 = *(uint *)(iVar11 + 0x5c);
              if ((*(int *)(iVar11 + 100) == 1) && (local_20 == 0)) {
                local_20 = param_1[0x75];
              }
              local_8 = 2;
              iVar5 = *(int *)(iVar11 + 0xbc) + 7;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              FUN_006d8a60((AnonShape_006D8A60_D503343B *)pAVar13,(int)param_3,
                           *(byte **)&pAVar6->field_0x6,iVar4,uVar8,local_58,(int)local_54,
                           (undefined *)(-(uint)((param_12 & 0x100) != 0) & local_20),
                           *(uint *)(iVar11 + 0x60),*(AnonShape_006D8A60_CD460E10 **)(iVar11 + 100),
                           *(undefined **)(iVar11 + 0xb0),*(byte **)(iVar11 + 0xb8),
                           (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3,
                           ((*param_9 - *(int *)(iVar11 + 0x18)) - param_7) +
                           *(int *)(iVar11 + 0x28) + local_60,
                           ((param_9[1] - param_8) - *(int *)(iVar11 + 0x1c)) + local_5c +
                           *(int *)(iVar11 + 0x2c));
            }
            else {
              local_8 = 3;
              FUN_006d86e0(pAVar13,(int)param_3,*(AnonShape_006D86E0_768BB816 **)&pAVar6->field_0x6,
                           iVar4,uVar8,local_58,(uint)local_54,(byte)*(undefined4 *)(iVar11 + 0x60),
                           (char)*(undefined4 *)(iVar11 + 100));
            }
            goto LAB_006cf37b;
          }
          if (local_28 == 0) {
            local_28 = local_8c;
          }
        }
      }
      local_a0 = local_a0 + 1;
      iVar12 = local_28;
    }
    if ((char)param_12 == '\x02') {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(**(int **)(*param_1 + 0x44) + 0x80))(*(int **)(*param_1 + 0x44),0);
      local_28 = iVar12;
    }
    goto cf_common_exit_006CF911;
  }
  uVar10 = param_12 & 0xff;
  if (uVar10 == 2) {
    local_28 = FUN_006d9f30(param_1,local_38,local_34,local_30,(int)local_2c);
    if (local_28 != 0) goto cf_common_exit_006CF911;
    local_4c = 0;
    local_28 = 0;
    do {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar12 = FUN_006bbe40(*(int **)(*param_1 + 0x44),(uint *)&param_2,(int *)&param_3,0x20);
      local_28 = iVar12;
      if (iVar12 == 0) goto LAB_006cf695;
      if (iVar12 != -0x7789fe3e) break;
      FUN_006cec40((AnonShape_006CEC40_BB23E716 *)*param_1);
      local_4c = local_4c + 1;
    } while (local_4c < 2);
    if (iVar12 != 0) goto cf_common_exit_006CF911;
  }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_006cf695:
  if (*(int *)(*param_1 + 0x20) == 0x10) {
    iVar12 = iVar5 * 2 + iVar7 * (int)param_3;
  }
  else {
    iVar12 = iVar7 * (int)param_3 + iVar5;
  }
  param_2 = (uint *)((int)param_2 + iVar12);
  iVar5 = (*param_9 - param_7) + iVar5;
  uVar14 = (param_9[1] - param_8) + iVar7;
  if (uVar10 == 0) {
    local_8 = 4;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(*param_1 + 0x20) == 0x10) {
      iVar7 = *(int *)(iVar11 + 0xbc) + 7;
      FUN_006d3300(param_2,(int)param_3,(byte *)param_5,iVar5,uVar14,uVar8,pbVar2,local_24,
                   *(byte **)(iVar11 + 0xb8),(int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3,
                   (*(int *)(iVar11 + 0x28) - *(int *)(iVar11 + 0x18)) + iVar5,
                   (*(int *)(iVar11 + 0x2c) - *(int *)(iVar11 + 0x1c)) + uVar14);
    }
    else {
      iVar7 = *(int *)(iVar11 + 0xbc) + 7;
      FUN_006d2820((byte *)param_2,param_3,(byte *)param_5,iVar5,uVar14,uVar8,(uint)pbVar2,
                   *(int *)(iVar11 + 0xb0),*(byte **)(iVar11 + 0xb8),
                   (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3,
                   (*(int *)(iVar11 + 0x28) - *(int *)(iVar11 + 0x18)) + iVar5,
                   (byte *)((*(int *)(iVar11 + 0x2c) - *(int *)(iVar11 + 0x1c)) + uVar14));
    }
LAB_006cf8ee:
    local_8 = 0xffffffff;
  }
  else if (uVar10 == 2) {
    local_28 = FUN_006da080(param_1,param_2,(int)param_3,0,0,(byte *)param_5,iVar5,uVar14,uVar8,
                            pbVar2,param_13);
  }
  else if (uVar10 == 1) {
    if ((param_1[0x74] == 0) || ((param_5->field_000D & 3) != 1)) {
      local_20 = *(uint *)(iVar11 + 0x5c);
      if ((*(int *)(iVar11 + 100) == 1) && (local_20 == 0)) {
        local_20 = param_1[0x75];
      }
      local_8 = 5;
      iVar7 = *(int *)(iVar11 + 0xbc) + 7;
      FUN_006d8a60((AnonShape_006D8A60_D503343B *)param_2,(int)param_3,(byte *)param_5,iVar5,uVar14,
                   uVar8,(int)pbVar2,(undefined *)(-(uint)((param_12 & 0x100) != 0) & local_20),
                   *(uint *)(iVar11 + 0x60),*(AnonShape_006D8A60_CD460E10 **)(iVar11 + 100),
                   *(undefined **)(iVar11 + 0xb0),*(byte **)(iVar11 + 0xb8),
                   (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3,
                   (*(int *)(iVar11 + 0x28) - *(int *)(iVar11 + 0x18)) + iVar5,
                   (*(int *)(iVar11 + 0x2c) - *(int *)(iVar11 + 0x1c)) + uVar14);
    }
    else {
      local_8 = 6;
      FUN_006d86e0((AnonShape_006D86E0_D6D32C07 *)param_2,(int)param_3,param_5,iVar5,uVar14,uVar8,
                   (uint)pbVar2,(byte)*(undefined4 *)(iVar11 + 0x60),
                   (char)*(undefined4 *)(iVar11 + 100));
    }
    goto LAB_006cf8ee;
  }
  if ((char)param_12 == '\x02') {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(**(int **)(*param_1 + 0x44) + 0x80))(*(int **)(*param_1 + 0x44),0);
  }
cf_common_exit_006CF911:
  if ((local_28 != -0x7789ff60) && (local_28 != -0x7789fe52)) {
    ExceptionList = local_14;
    return local_28;
  }
  ExceptionList = local_14;
  return 0;
}

