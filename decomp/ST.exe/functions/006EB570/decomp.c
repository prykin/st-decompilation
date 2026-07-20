
undefined4 FUN_006eb570(int *param_1,AnonShape_006EB570_80B255F3 *param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_9c;
  int local_94;
  int local_90;
  uint local_8c;
  int local_84;
  int local_80;
  int local_7c;
  int local_74;
  int local_70;
  int local_6c;
  uint local_68;
  int local_64;
  undefined1 *local_60;
  int local_5c;
  int local_58;
  byte *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  char *local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0079e1d8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff44;
  iVar1 = *(int *)param_2;
  iVar8 = *(int *)&param_2->field_0x4;
  local_8 = 0;
  if ((*(int *)&param_2->field_0x18 == 0) || (param_2->field_0466 == 0)) {
    if (param_1 == (int *)0x0) {
      ExceptionList = &local_14;
      FUN_006cea60((undefined8 *)param_2->field_04EA,param_2->field_04EE,
                   *(undefined8 **)(iVar8 + 0x474),*(int *)(iVar8 + 0x478),*(uint *)(iVar1 + 0xc),
                   *(int *)(iVar1 + 0x10));
      ExceptionList = local_14;
      return 0;
    }
    iVar1 = *(int *)(iVar8 + 0x478);
    iVar7 = param_1[1];
    iVar6 = *param_1;
    iVar9 = param_1[3];
    uVar2 = param_1[2];
    puVar5 = (undefined8 *)(iVar7 * iVar1 + *(int *)(iVar8 + 0x474) + iVar6);
    ExceptionList = &local_14;
    local_1c = &stack0xffffff44;
  }
  else {
    if (param_1 == (int *)0x0) {
      local_34 = 0;
      local_30 = 0;
      local_2c = *(uint *)(iVar1 + 0xc);
      local_28 = *(int *)(iVar1 + 0x10);
      param_1 = &local_34;
    }
    else {
      local_34 = *param_1;
      local_30 = param_1[1];
      local_2c = param_1[2];
      local_28 = param_1[3];
    }
    ExceptionList = &local_14;
    local_1c = &stack0xffffff44;
    iVar1 = FUN_006b0460(&local_70,&local_34,&param_2->field_048E);
    if (iVar1 != 0) {
      iVar6 = (local_70 - param_2->field_0476) - param_2->field_048E;
      iVar1 = param_2->field_04E2;
      local_84 = iVar6 - iVar1 * (iVar6 / iVar1);
      iVar7 = (local_6c - param_2->field_0492) - param_2->field_047A;
      local_9c = param_2->field_04E6;
      local_5c = iVar7 - local_9c * (iVar7 / local_9c);
      local_4c = iVar6 / iVar1 + param_2->field_047E;
      local_58 = (int)((local_68 - 1) + iVar6) / iVar1 + param_2->field_047E;
      local_7c = iVar7 / local_9c + param_2->field_0482;
      local_90 = (local_64 + -1 + iVar7) / local_9c + param_2->field_0482;
      local_94 = param_2->field_04B2 * local_7c + *(int *)&param_2->field_0x18;
      if ((*(char *)(local_94 + local_4c) != -1) || (*(char *)(local_94 + local_58) != -1)) {
LAB_006eb7d3:
        pcVar3 = (char *)(param_2->field_04B2 * local_90 + *(int *)&param_2->field_0x18);
        if ((pcVar3[local_4c] == -1) && (pcVar3[local_58] == -1)) {
          local_3c = local_64 + local_6c;
          iVar1 = ((local_3c - (local_90 - param_2->field_0482) * param_2->field_04E6) -
                  param_2->field_0492) - param_2->field_047A;
          local_38 = pcVar3;
          for (local_48 = local_90; iVar6 = local_4c, local_7c < local_48; local_48 = local_48 + -1)
          {
            for (; local_44 = iVar6, iVar6 <= local_58; iVar6 = iVar6 + 1) {
              if (local_38[iVar6] != -1) {
                if (iVar6 <= local_58) goto LAB_006eb87f;
                break;
              }
            }
            local_3c = local_3c - iVar1;
            iVar1 = param_2->field_04E6;
            local_38 = local_38 + -param_2->field_04B2;
          }
LAB_006eb87f:
          if (local_3c < local_64 + local_6c) {
            local_64 = local_3c - local_6c;
            local_90 = local_48;
          }
        }
        if ((*(char *)(local_94 + local_4c) == -1) && (pcVar3[local_4c] == -1)) {
          local_8c = param_2->field_04E2 - local_84;
          local_24 = local_70;
          for (local_44 = local_4c; local_44 <= local_58; local_44 = local_44 + 1) {
            local_48 = local_7c;
            for (local_38 = (char *)(local_44 + local_94);
                (local_48 <= local_90 && (*local_38 == -1));
                local_38 = local_38 + param_2->field_04B2) {
              local_48 = local_48 + 1;
            }
            if (local_48 <= local_90) break;
            local_24 = local_24 + local_8c;
            local_8c = param_2->field_04E2;
          }
          if (local_70 < local_24) {
            local_68 = local_68 + (local_70 - local_24);
            local_84 = 0;
            local_70 = local_24;
            local_4c = local_44;
          }
        }
        if ((*(char *)(local_94 + local_58) == -1) && (pcVar3[local_58] == -1)) {
          local_24 = local_68 + local_70;
          iVar1 = ((local_24 - (local_58 - param_2->field_047E) * param_2->field_04E2) -
                  param_2->field_048E) - param_2->field_0476;
          for (local_44 = local_58; local_4c < local_44; local_44 = local_44 + -1) {
            local_48 = local_7c;
            for (local_38 = (char *)(local_44 + local_94);
                (local_48 <= local_90 && (*local_38 == -1));
                local_38 = local_38 + param_2->field_04B2) {
              local_48 = local_48 + 1;
            }
            if (local_48 <= local_90) break;
            local_24 = local_24 - iVar1;
            iVar1 = param_2->field_04E2;
          }
          if (local_24 < (int)(local_68 + local_70)) {
            local_68 = local_24 - local_70;
            local_58 = local_44;
          }
        }
        if (local_30 < local_6c) {
          FUN_006cea60((undefined8 *)
                       (param_2->field_04EE * local_30 + param_2->field_04EA + local_34),
                       param_2->field_04EE,
                       (undefined8 *)
                       (*(int *)(iVar8 + 0x478) * local_30 + *(int *)(iVar8 + 0x474) + local_34),
                       *(int *)(iVar8 + 0x478),local_2c,local_6c - local_30);
        }
        iVar1 = ((local_28 - local_64) - local_6c) + local_30;
        if (0 < iVar1) {
          FUN_006cea60((undefined8 *)
                       ((local_64 + local_6c) * param_2->field_04EE + param_2->field_04EA + local_34
                       ),param_2->field_04EE,
                       (undefined8 *)
                       ((local_64 + local_6c) * *(int *)(iVar8 + 0x478) + *(int *)(iVar8 + 0x474) +
                       local_34),*(int *)(iVar8 + 0x478),local_2c,iVar1);
        }
        if (local_34 < local_70) {
          FUN_006cea60((undefined8 *)
                       (param_2->field_04EE * local_6c + param_2->field_04EA + local_34),
                       param_2->field_04EE,
                       (undefined8 *)
                       (*(int *)(iVar8 + 0x478) * local_6c + *(int *)(iVar8 + 0x474) + local_34),
                       *(int *)(iVar8 + 0x478),local_70 - local_34,local_64);
        }
        uVar2 = ((local_2c - local_68) - local_70) + local_34;
        if (0 < (int)uVar2) {
          FUN_006cea60((undefined8 *)
                       (param_2->field_04EE * local_6c + param_2->field_04EA + local_68 + local_70),
                       param_2->field_04EE,
                       (undefined8 *)
                       (*(int *)(iVar8 + 0x478) * local_6c + *(int *)(iVar8 + 0x474) + local_68 +
                       local_70),*(int *)(iVar8 + 0x478),uVar2,local_64);
        }
        local_9c = param_2->field_04E6 - local_5c;
        local_3c = local_6c;
        local_38 = (char *)local_94;
        for (local_80 = local_7c; local_80 <= local_90; local_80 = local_80 + 1) {
          if (local_64 < local_9c) {
            local_9c = local_64;
          }
          local_50 = local_84;
          local_40 = local_68;
          local_74 = local_4c;
          local_24 = local_70;
          while( true ) {
            puVar5 = (undefined8 *)(param_2->field_04EE * local_3c + param_2->field_04EA + local_24)
            ;
            local_54 = (byte *)(*(int *)(iVar8 + 0x478) * local_3c + *(int *)(iVar8 + 0x474) +
                               local_24);
            local_8c = param_2->field_04E2 - local_50;
            uVar2 = (uint)*(byte *)(local_74 + local_94);
            if (((uVar2 == 0xff) || (uVar2 == 0x20)) || (uVar2 == 0)) {
              while ((local_74 < local_58 && (*(byte *)(local_74 + 1 + local_94) == uVar2))) {
                local_8c = local_8c + param_2->field_04E2;
                local_74 = local_74 + 1;
              }
              if ((int)local_40 < (int)local_8c) {
                local_8c = local_40;
              }
              if (uVar2 == 0xff) {
                FUN_006cea60(puVar5,param_2->field_04EE,(undefined8 *)local_54,
                             *(int *)(iVar8 + 0x478),local_8c,local_9c);
              }
              else {
                if (uVar2 == 0x20) {
                  iVar1 = *(int *)&param_2->field_0x154 + 0x1000;
                }
                else {
                  iVar1 = *(int *)&param_2->field_0x154 + 0x1800;
                }
                FUN_00750590((undefined1 *)puVar5,param_2->field_04EE,local_54,
                             *(int *)(iVar8 + 0x478),local_8c,local_9c,iVar1);
              }
            }
            else {
              if ((int)local_40 < (int)local_8c) {
                local_8c = local_40;
              }
              local_60 = (undefined1 *)
                         (*(int *)(param_2->field_0472 + uVar2 * 4) + param_2->field_04E2 * local_5c
                         + local_50);
              FUN_00750660((undefined1 *)puVar5,param_2->field_04EE,local_54,*(int *)(iVar8 + 0x478)
                           ,local_60,param_2->field_04E2,local_8c,local_9c,
                           *(int *)&param_2->field_0x154);
            }
            local_74 = local_74 + 1;
            if (local_58 < local_74) break;
            local_50 = 0;
            local_24 = local_24 + local_8c;
            local_40 = local_40 - local_8c;
          }
          local_64 = local_64 - local_9c;
          local_3c = local_3c + local_9c;
          local_9c = param_2->field_04E6;
          local_94 = local_94 + param_2->field_04B2;
          local_5c = 0;
        }
        ExceptionList = local_14;
        return 0;
      }
      local_9c = local_9c - local_5c;
      local_3c = local_6c;
      for (local_48 = local_7c; iVar1 = local_4c, local_48 <= local_90; local_48 = local_48 + 1) {
        for (; local_44 = iVar1, iVar1 <= local_58; iVar1 = iVar1 + 1) {
          if (*(char *)(iVar1 + local_94) != -1) {
            if (iVar1 <= local_58) goto LAB_006eb763;
            break;
          }
        }
        local_3c = local_3c + local_9c;
        local_9c = param_2->field_04E6;
        local_94 = local_94 + param_2->field_04B2;
      }
LAB_006eb763:
      if (local_48 <= local_90) {
        if (local_6c < local_3c) {
          local_64 = local_64 + (local_6c - local_3c);
          local_7c = local_48;
          local_5c = 0;
          local_6c = local_3c;
        }
        goto LAB_006eb7d3;
      }
      iVar1 = *(int *)(iVar8 + 0x478);
      iVar4 = param_1[1];
      iVar6 = *param_1;
      iVar7 = param_2->field_04EE;
      iVar9 = param_1[3];
      uVar2 = param_1[2];
      puVar5 = (undefined8 *)(iVar4 * iVar1 + *(int *)(iVar8 + 0x474) + iVar6);
      iVar8 = iVar7;
      goto LAB_006ebde1;
    }
    iVar1 = *(int *)(iVar8 + 0x478);
    iVar7 = param_1[1];
    iVar6 = *param_1;
    iVar9 = param_1[3];
    uVar2 = param_1[2];
    puVar5 = (undefined8 *)(iVar7 * iVar1 + *(int *)(iVar8 + 0x474) + iVar6);
  }
  iVar4 = param_2->field_04EE;
  iVar8 = iVar4;
LAB_006ebde1:
  FUN_006cea60((undefined8 *)(iVar7 * iVar4 + param_2->field_04EA + iVar6),iVar8,puVar5,iVar1,uVar2,
               iVar9);
  ExceptionList = local_14;
  return 0;
}

