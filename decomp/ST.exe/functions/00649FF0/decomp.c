
undefined4 * __cdecl
FUN_00649ff0(uint *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  char cVar1;
  uint *puVar2;
  int *piVar3;
  HINSTANCE module;
  char *extraout_EAX;
  DArrayTy *array;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  char local_22c [532];
  uint local_18;
  Global_sub_0068CDA0_param_2Enum local_14;
  DArrayTy *local_10;
  uint local_c;
  DArrayTy *local_8;
  
  module = HINSTANCE_00807618;
  local_14 = 0;
  puVar10 = &DAT_008117c0;
  for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  puVar10 = (undefined4 *)&stack0xfffffcd0;
  for (iVar5 = 0xc6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_8 = (DArrayTy *)0x0;
  local_c = DAT_00807dd5 >> 0x10 & 0xff;
  local_18 = DAT_00807dd5 & 0xffff;
  uVar8 = DAT_00807dd5 >> 0x18;
  LoadResourceString(100,module);
  uVar6 = 0xffffffff;
  pcVar9 = extraout_EAX;
  do {
    pcVar12 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar12;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar9 = pcVar12 + -uVar6;
  pcVar12 = (char *)&DAT_008117c0;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar12 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar9 = &DAT_00807680;
  do {
    pcVar12 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar12;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar9 = pcVar12 + -uVar6;
  pcVar12 = local_22c;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar12 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar9 = PTR_DAT_0079d65c;
  do {
    pcVar12 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar12;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar5 = -1;
  pcVar9 = local_22c;
  do {
    pcVar11 = pcVar9;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  pcVar9 = pcVar12 + -uVar6;
  pcVar12 = pcVar11 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar12 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar9 = &DAT_00807680;
  do {
    pcVar12 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar12;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar9 = pcVar12 + -uVar6;
  pcVar12 = &stack0xfffffcd0;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar12 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar12 = pcVar12 + 1;
  }
  FUN_006b78c0(&stack0xfffffcd0,&stack0xfffffcd0);
  array = (DArrayTy *)
          thunk_FUN_00683c70(param_1,(AnonShape_00683C70_22193481 *)&stack0xfffffcd0,&local_14,
                             param_4,(undefined *)0x0);
  if (array != (DArrayTy *)0x0) {
    if (local_14 != CASE_A) {
      local_8 = array;
      thunk_FUN_0068cda0((int *)&local_8,local_14);
      return (undefined4 *)0x0;
    }
    local_8 = (DArrayTy *)0x0;
    uVar6 = array->count;
    local_10 = array;
    if (uVar6 != 0) {
      while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
        if (uVar6 < array->count) {
          pcVar9 = (char *)(array->elementSize * uVar6 + (int)array->data);
        }
        else {
          pcVar9 = (char *)0x0;
        }
        if (((*pcVar9 != '\0') &&
            (iVar5 = Library::MSVCRT::__strcmpi((char *)&DAT_008117c0,pcVar9), iVar5 != 0)) ||
           (uVar8 != *(uint *)(pcVar9 + 0x104))) {
          FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)array,uVar6);
        }
      }
      uVar6 = array->count;
      if (uVar6 != 0) {
        uVar8 = 0xffffffff;
        uVar7 = 0;
        param_1 = (uint *)0xffffffff;
        param_4 = (int *)0xffffffff;
        if (0 < (int)uVar6) {
          bVar13 = uVar6 != 0;
          do {
            if (((bVar13) &&
                (pvVar4 = (void *)(array->elementSize * uVar7 + (int)array->data),
                pvVar4 != (void *)0x0)) &&
               ((*(int *)((int)pvVar4 + 0x108) < 0 &&
                ((puVar2 = *(uint **)((int)pvVar4 + 0x110), (int)local_c <= (int)puVar2 &&
                 (piVar3 = *(int **)((int)pvVar4 + 0x10c), (int)piVar3 <= (int)local_c)))))) {
              if ((int)param_4 < (int)piVar3) {
                uVar8 = uVar7;
                param_4 = piVar3;
              }
              if ((int)param_1 < (int)puVar2) {
                uVar8 = uVar7;
                param_1 = puVar2;
              }
            }
            uVar6 = array->count;
            uVar7 = uVar7 + 1;
            bVar13 = uVar7 < uVar6;
          } while ((int)uVar7 < (int)uVar6);
          if (((-1 < (int)uVar8) && (uVar8 < uVar6)) &&
             (pvVar4 = (void *)(array->elementSize * uVar8 + (int)array->data),
             pvVar4 != (void *)0x0)) {
            uVar6 = 0xffffffff;
            pcVar9 = (char *)((int)pvVar4 + 0x114);
            do {
              pcVar12 = pcVar9;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar12 = pcVar9 + 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar12;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar9 = pcVar12 + -uVar6;
            pcVar12 = (char *)&DAT_008117c0;
            for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar12 = pcVar12 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar12 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar12 = pcVar12 + 1;
            }
            if (param_2 != (undefined4 *)0x0) {
              *param_2 = *(undefined4 *)((int)pvVar4 + 0x218);
            }
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = 1;
            }
            goto LAB_0064a336;
          }
        }
        uVar8 = 0xffffffff;
        uVar7 = 0;
        param_1 = (uint *)0xffffffff;
        param_4 = (int *)0xffffffff;
        if (0 < (int)uVar6) {
          bVar13 = uVar6 != 0;
          do {
            if (((bVar13) &&
                (pvVar4 = (void *)(array->elementSize * uVar7 + (int)array->data),
                pvVar4 != (void *)0x0)) &&
               ((*(uint *)((int)pvVar4 + 0x108) == local_c &&
                ((puVar2 = *(uint **)((int)pvVar4 + 0x110), (int)local_18 <= (int)puVar2 &&
                 (piVar3 = *(int **)((int)pvVar4 + 0x10c), (int)piVar3 <= (int)local_18)))))) {
              if ((int)param_4 < (int)piVar3) {
                uVar8 = uVar7;
                param_4 = piVar3;
              }
              if ((int)param_1 < (int)puVar2) {
                uVar8 = uVar7;
                param_1 = puVar2;
              }
            }
            uVar6 = array->count;
            uVar7 = uVar7 + 1;
            bVar13 = uVar7 < uVar6;
          } while ((int)uVar7 < (int)uVar6);
          if (((-1 < (int)uVar8) && (uVar8 < uVar6)) &&
             (pvVar4 = (void *)(array->elementSize * uVar8 + (int)array->data),
             pvVar4 != (void *)0x0)) {
            uVar6 = 0xffffffff;
            pcVar9 = (char *)((int)pvVar4 + 0x114);
            do {
              pcVar12 = pcVar9;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar12 = pcVar9 + 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar12;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar9 = pcVar12 + -uVar6;
            pcVar12 = (char *)&DAT_008117c0;
            for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar12 = pcVar12 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar12 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar12 = pcVar12 + 1;
            }
            if (param_2 != (undefined4 *)0x0) {
              *param_2 = *(undefined4 *)((int)pvVar4 + 0x218);
            }
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = 2;
            }
LAB_0064a336:
            if (local_10 != (DArrayTy *)0x0) {
              DArrayDestroy(local_10);
            }
            return &DAT_008117c0;
          }
        }
        if (array == (DArrayTy *)0x0) {
          return (undefined4 *)0x0;
        }
      }
    }
    DArrayDestroy(array);
  }
  return (undefined4 *)0x0;
}

