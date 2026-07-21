
void FUN_0072b0b0(void)

{
  int *piVar1;
  LONG LVar2;
  LONG LVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint local_98;
  uint local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  uint local_80;
  int local_7c [5];
  int local_68;
  int local_64;
  byte *local_60;
  uint local_5c;
  int local_58;
  tagPOINT local_54;
  int local_4c;
  int local_48;
  int local_44 [2];
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  AnonShape_006B5B10_E0D06CF1 *local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079e330;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff58;
  local_3c = 0;
  ExceptionList = &local_14;
  iVar4 = FUN_006bbe40(*(int **)(*DAT_00857134 + 0x44),&local_24,(int *)&local_20,0);
  if (iVar4 == 0) {
    if ((*DAT_00857118 & 1) == 0) {
      iVar4 = -1;
      local_5c = 0xffffffff;
      local_68 = -1;
      local_80 = 0xffffffff;
    }
    else {
      local_8 = 0;
      FUN_006cea60((undefined8 *)(DAT_00857118[2] * (int)local_20 + DAT_00857118[1] + local_24),
                   (int)local_20,(undefined8 *)DAT_00857118[0x30],DAT_00857118[3],DAT_00857118[3],
                   DAT_00857118[4]);
      local_8 = 0xffffffff;
      local_5c = DAT_00857118[1];
      local_68 = DAT_00857118[3] + local_5c;
      local_80 = DAT_00857118[2];
      iVar4 = DAT_00857118[4] + local_80;
    }
    *DAT_00857118 = *DAT_00857118 & 0xfffffffe;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    piVar1 = DAT_00857134 + DAT_00857118[0x14] * 4 + 5;
    DAT_00857118[10] = DAT_00857118[10] + DAT_00857134[DAT_00857118[0x14] * 2 + 0x47];
    DAT_00857118[0xb] = DAT_00857118[0xb] + DAT_00857134[DAT_00857118[0x14] * 2 + 0x48];
    DAT_00857118[6] = DAT_00857118[6] + DAT_00857134[DAT_00857118[0x14] * 2 + 0x47];
    DAT_00857118[7] = DAT_00857118[7] + DAT_00857134[DAT_00857118[0x14] * 2 + 0x48];
    local_84 = iVar4;
    if ((*DAT_00857118 & 0x20) != 0) {
      if (DAT_00857118[8] == 0xffffffff) {
        FUN_006cf950(DAT_00857118);
      }
      if (((0 < (int)DAT_00857118[0xc]) && (0 < (int)DAT_00857118[0xd])) &&
         (iVar5 = FUN_006cfeb0((int *)&local_38,(int *)(DAT_00857118 + 10),piVar1), iVar5 != 0)) {
        local_8 = 1;
        pbVar7 = (byte *)(local_34 * (int)local_20 + local_38 + local_24);
        local_60 = pbVar7;
        FUN_006cea60((undefined8 *)DAT_00857118[0x30],local_30,(undefined8 *)pbVar7,(int)local_20,
                     local_30,local_2c);
        local_88 = local_38 - DAT_00857118[10];
        FUN_006d2820(pbVar7,local_20,*(byte **)(DAT_00857118[0x33] + DAT_00857118[0x31] * 4),
                     local_88,local_34 - DAT_00857118[0xb],local_30,local_2c,DAT_00857118[0x2c],
                     (byte *)0x0,0,0,(byte *)0x0);
        local_8 = 0xffffffff;
      }
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(**(int **)(*DAT_00857134 + 0x44) + 0x80))(*(int **)(*DAT_00857134 + 0x44),0);
    local_54.x = DAT_00857134[1];
    local_54.y = DAT_00857134[2];
    local_4c = DAT_00857134[3];
    local_48 = DAT_00857134[4];
    ClientToScreen(*(HWND *)(*DAT_00857134 + 4),&local_54);
    LVar3 = local_54.y;
    LVar2 = local_54.x;
    local_58 = local_54.x;
    local_64 = local_54.y;
    if ((local_30 != 0) && (local_2c != 0)) {
      if (((int)local_5c < 0) ||
         (iVar4 = FUN_006b0460(local_7c,(int *)&local_38,(int *)(DAT_00857118 + 1)), iVar4 == 0)) {
        local_98 = local_38;
        local_94 = local_34;
        local_90 = local_30 + local_38;
        local_8c = local_2c + local_34;
        local_54.x = local_38 + LVar2;
        local_54.y = local_34 + LVar3;
        local_4c = local_90 + LVar2;
        local_48 = local_8c + LVar3;
        piVar1 = *(int **)(*DAT_00857134 + 0x34);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        local_3c = (**(code **)(*piVar1 + 0x14))
                             (piVar1,&local_54,*(undefined4 *)(*DAT_00857134 + 0x44),&local_98,
                              0x1000000,0);
        iVar4 = local_84;
        if ((local_3c != 0) &&
           (local_3c = FUN_006bbe40(*(int **)(*DAT_00857134 + 0x34),&local_28,local_44,0),
           iVar4 = local_84, local_3c == 0)) {
          local_3c = FUN_006bbe40(*(int **)(*DAT_00857134 + 0x44),&local_24,(int *)&local_20,0);
          iVar4 = local_84;
          if (local_3c == 0) {
            local_8 = 2;
            FUN_006cea60((undefined8 *)(local_44[0] * local_54.y + local_28 + local_54.x),
                         local_44[0],(undefined8 *)(local_94 * (int)local_20 + local_98 + local_24),
                         (int)local_20,local_30,local_2c);
            iVar4 = local_84;
            local_8 = 0xffffffff;
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(**(int **)(*DAT_00857134 + 0x44) + 0x80))
                      (*(int **)(*DAT_00857134 + 0x44),0);
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(**(int **)(*DAT_00857134 + 0x34) + 0x80))(*(int **)(*DAT_00857134 + 0x34),0);
        }
      }
      else {
        uVar6 = DAT_00857118[1];
        local_5c = local_38;
        if ((int)uVar6 <= (int)local_38) {
          local_5c = uVar6;
        }
        local_68 = local_38 + local_30;
        if ((int)(local_38 + local_30) <= (int)(uVar6 + DAT_00857118[3])) {
          local_68 = uVar6 + DAT_00857118[3];
        }
        uVar6 = DAT_00857118[2];
        local_80 = local_34;
        if ((int)uVar6 <= (int)local_34) {
          local_80 = uVar6;
        }
        iVar4 = local_2c + local_34;
        if ((int)(local_2c + local_34) <= (int)(uVar6 + DAT_00857118[4])) {
          iVar4 = uVar6 + DAT_00857118[4];
        }
      }
      *DAT_00857118 = *DAT_00857118 | 1;
    }
    if (-1 < (int)local_5c) {
      local_98 = local_5c;
      local_94 = local_80;
      local_90 = local_68;
      local_54.x = local_5c + LVar2;
      local_54.y = local_80 + LVar3;
      local_4c = local_68 + LVar2;
      local_48 = iVar4 + LVar3;
      piVar1 = *(int **)(*DAT_00857134 + 0x34);
      local_8c = iVar4;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar5 = (**(code **)(*piVar1 + 0x14))
                        (piVar1,&local_54,*(undefined4 *)(*DAT_00857134 + 0x44),&local_98,0x1000000,
                         0);
      uVar6 = 0;
      if ((iVar5 != 0) &&
         (uVar6 = FUN_006bbe40(*(int **)(*DAT_00857134 + 0x34),&local_28,local_44,0), uVar6 == 0)) {
        uVar6 = FUN_006bbe40(*(int **)(*DAT_00857134 + 0x44),&local_24,(int *)&local_20,0);
        if (uVar6 == 0) {
          local_8 = 3;
          FUN_006cea60((undefined8 *)(local_44[0] * local_54.y + local_28 + local_54.x),local_44[0],
                       (undefined8 *)(local_94 * (int)local_20 + local_98 + local_24),(int)local_20,
                       local_68 - local_5c,iVar4 - local_80);
          local_8 = 0xffffffff;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(**(int **)(*DAT_00857134 + 0x44) + 0x80))(*(int **)(*DAT_00857134 + 0x44),0);
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(**(int **)(*DAT_00857134 + 0x34) + 0x80))(*(int **)(*DAT_00857134 + 0x34),0);
      }
      local_3c = local_3c | uVar6;
    }
    if (local_3c == 0) {
      *DAT_00857118 = *DAT_00857118 & 0xfffffff9;
    }
    DAT_00857118[1] = local_38;
    DAT_00857118[2] = local_34;
    DAT_00857118[3] = local_30;
    DAT_00857118[4] = local_2c;
  }
  ExceptionList = local_14;
  return;
}

