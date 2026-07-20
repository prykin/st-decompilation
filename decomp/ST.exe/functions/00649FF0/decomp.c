
undefined4 * __cdecl
FUN_00649ff0(uint *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  char cVar1;
  uint *puVar2;
  int *piVar3;
  HINSTANCE pHVar4;
  char *pcVar5;
  AnonShape_006B0C70_7C4FE646 *groupContent;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  char local_22c [532];
  uint local_18;
  Global_sub_0068CDA0_param_2Enum local_14;
  AnonShape_006B0C70_7C4FE646 *local_10;
  uint local_c;
  AnonShape_006B0C70_7C4FE646 *local_8;
  
  pHVar4 = HINSTANCE_00807618;
  local_14 = 0;
  puVar10 = &DAT_008117c0;
  for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  puVar10 = (undefined4 *)&stack0xfffffcd0;
  for (iVar6 = 0xc6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_8 = (AnonShape_006B0C70_7C4FE646 *)0x0;
  local_c = DAT_00807dd5 >> 0x10 & 0xff;
  local_18 = DAT_00807dd5 & 0xffff;
  uVar9 = DAT_00807dd5 >> 0x18;
  pcVar5 = (char *)FUN_006b0140(100,pHVar4);
  uVar7 = 0xffffffff;
  do {
    pcVar12 = pcVar5;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar12 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar12;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar5 = pcVar12 + -uVar7;
  pcVar12 = (char *)&DAT_008117c0;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar12 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar5 = &DAT_00807680;
  do {
    pcVar12 = pcVar5;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar12 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar12;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar5 = pcVar12 + -uVar7;
  pcVar12 = local_22c;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar12 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar5 = PTR_DAT_0079d65c;
  do {
    pcVar12 = pcVar5;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar12 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar12;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  iVar6 = -1;
  pcVar5 = local_22c;
  do {
    pcVar11 = pcVar5;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar11 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar11;
  } while (cVar1 != '\0');
  pcVar5 = pcVar12 + -uVar7;
  pcVar12 = pcVar11 + -1;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar12 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar5 = &DAT_00807680;
  do {
    pcVar12 = pcVar5;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar12 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar12;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar5 = pcVar12 + -uVar7;
  pcVar12 = &stack0xfffffcd0;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar12 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar12 = pcVar12 + 1;
  }
  FUN_006b78c0(&stack0xfffffcd0,&stack0xfffffcd0);
  groupContent = (AnonShape_006B0C70_7C4FE646 *)
                 thunk_FUN_00683c70(param_1,(AnonShape_00683C70_22193481 *)&stack0xfffffcd0,
                                    &local_14,param_4,(undefined *)0x0);
  if (groupContent != (AnonShape_006B0C70_7C4FE646 *)0x0) {
    if (local_14 != CASE_A) {
      local_8 = groupContent;
      thunk_FUN_0068cda0((int *)&local_8,local_14);
      return (undefined4 *)0x0;
    }
    local_8 = (AnonShape_006B0C70_7C4FE646 *)0x0;
    uVar7 = groupContent->field_000C;
    local_10 = groupContent;
    if (uVar7 != 0) {
      while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
        if (uVar7 < (uint)groupContent->field_000C) {
          pcVar5 = (char *)(groupContent->field_0008 * uVar7 + groupContent->field_001C);
        }
        else {
          pcVar5 = (char *)0x0;
        }
        if (((*pcVar5 != '\0') &&
            (iVar6 = Library::MSVCRT::__strcmpi((char *)&DAT_008117c0,pcVar5), iVar6 != 0)) ||
           (uVar9 != *(uint *)(pcVar5 + 0x104))) {
          FUN_006b0c70(groupContent,uVar7);
        }
      }
      uVar7 = groupContent->field_000C;
      if (uVar7 != 0) {
        uVar9 = 0xffffffff;
        uVar8 = 0;
        param_1 = (uint *)0xffffffff;
        param_4 = (int *)0xffffffff;
        if (0 < (int)uVar7) {
          bVar13 = uVar7 != 0;
          do {
            if (((bVar13) &&
                (iVar6 = groupContent->field_0008 * uVar8 + groupContent->field_001C, iVar6 != 0))
               && ((*(int *)(iVar6 + 0x108) < 0 &&
                   ((puVar2 = *(uint **)(iVar6 + 0x110), (int)local_c <= (int)puVar2 &&
                    (piVar3 = *(int **)(iVar6 + 0x10c), (int)piVar3 <= (int)local_c)))))) {
              if ((int)param_4 < (int)piVar3) {
                uVar9 = uVar8;
                param_4 = piVar3;
              }
              if ((int)param_1 < (int)puVar2) {
                uVar9 = uVar8;
                param_1 = puVar2;
              }
            }
            uVar7 = groupContent->field_000C;
            uVar8 = uVar8 + 1;
            bVar13 = uVar8 < uVar7;
          } while ((int)uVar8 < (int)uVar7);
          if (((-1 < (int)uVar9) && (uVar9 < uVar7)) &&
             (iVar6 = groupContent->field_0008 * uVar9 + groupContent->field_001C, iVar6 != 0)) {
            uVar7 = 0xffffffff;
            pcVar5 = (char *)(iVar6 + 0x114);
            do {
              pcVar12 = pcVar5;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar12 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar12;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar5 = pcVar12 + -uVar7;
            pcVar12 = (char *)&DAT_008117c0;
            for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar12 = pcVar12 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar12 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar12 = pcVar12 + 1;
            }
            if (param_2 != (undefined4 *)0x0) {
              *param_2 = *(undefined4 *)(iVar6 + 0x218);
            }
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = 1;
            }
            goto LAB_0064a336;
          }
        }
        uVar9 = 0xffffffff;
        uVar8 = 0;
        param_1 = (uint *)0xffffffff;
        param_4 = (int *)0xffffffff;
        if (0 < (int)uVar7) {
          bVar13 = uVar7 != 0;
          do {
            if (((bVar13) &&
                (iVar6 = groupContent->field_0008 * uVar8 + groupContent->field_001C, iVar6 != 0))
               && ((*(uint *)(iVar6 + 0x108) == local_c &&
                   ((puVar2 = *(uint **)(iVar6 + 0x110), (int)local_18 <= (int)puVar2 &&
                    (piVar3 = *(int **)(iVar6 + 0x10c), (int)piVar3 <= (int)local_18)))))) {
              if ((int)param_4 < (int)piVar3) {
                uVar9 = uVar8;
                param_4 = piVar3;
              }
              if ((int)param_1 < (int)puVar2) {
                uVar9 = uVar8;
                param_1 = puVar2;
              }
            }
            uVar7 = groupContent->field_000C;
            uVar8 = uVar8 + 1;
            bVar13 = uVar8 < uVar7;
          } while ((int)uVar8 < (int)uVar7);
          if (((-1 < (int)uVar9) && (uVar9 < uVar7)) &&
             (iVar6 = groupContent->field_0008 * uVar9 + groupContent->field_001C, iVar6 != 0)) {
            uVar7 = 0xffffffff;
            pcVar5 = (char *)(iVar6 + 0x114);
            do {
              pcVar12 = pcVar5;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar12 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar12;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar5 = pcVar12 + -uVar7;
            pcVar12 = (char *)&DAT_008117c0;
            for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar12 = pcVar12 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar12 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar12 = pcVar12 + 1;
            }
            if (param_2 != (undefined4 *)0x0) {
              *param_2 = *(undefined4 *)(iVar6 + 0x218);
            }
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = 2;
            }
LAB_0064a336:
            if (local_10 != (AnonShape_006B0C70_7C4FE646 *)0x0) {
              FUN_006ae110((byte *)local_10);
            }
            return &DAT_008117c0;
          }
        }
        if (groupContent == (AnonShape_006B0C70_7C4FE646 *)0x0) {
          return (undefined4 *)0x0;
        }
      }
    }
    FUN_006ae110((byte *)groupContent);
  }
  return (undefined4 *)0x0;
}

