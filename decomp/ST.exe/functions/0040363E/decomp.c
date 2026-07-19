
undefined4 * __cdecl
thunk_FUN_00649ff0(uint *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  char cVar1;
  uint *puVar2;
  int *piVar3;
  HINSTANCE pHVar4;
  char *pcVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  char acStack_22c [532];
  uint uStack_18;
  int iStack_14;
  uint *puStack_10;
  uint uStack_c;
  uint *puStack_8;
  
  pHVar4 = DAT_00807618;
  iStack_14 = 0;
  puVar11 = &DAT_008117c0;
  for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  puVar11 = (undefined4 *)&stack0xfffffcd0;
  for (iVar7 = 0xc6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  puStack_8 = (uint *)0x0;
  uStack_c = DAT_00807dd5 >> 0x10 & 0xff;
  uStack_18 = DAT_00807dd5 & 0xffff;
  uVar10 = DAT_00807dd5 >> 0x18;
  pcVar5 = (char *)FUN_006b0140(100,pHVar4);
  uVar8 = 0xffffffff;
  do {
    pcVar13 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar13 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar13;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar13 + -uVar8;
  pcVar13 = (char *)&DAT_008117c0;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar13 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar13 = pcVar13 + 1;
  }
  uVar8 = 0xffffffff;
  pcVar5 = &DAT_00807680;
  do {
    pcVar13 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar13 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar13;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar13 + -uVar8;
  pcVar13 = acStack_22c;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar13 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar13 = pcVar13 + 1;
  }
  uVar8 = 0xffffffff;
  pcVar5 = PTR_DAT_0079d65c;
  do {
    pcVar13 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar13 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar13;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  iVar7 = -1;
  pcVar5 = acStack_22c;
  do {
    pcVar12 = pcVar5;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar12 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar12;
  } while (cVar1 != '\0');
  pcVar5 = pcVar13 + -uVar8;
  pcVar13 = pcVar12 + -1;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar13 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar13 = pcVar13 + 1;
  }
  uVar8 = 0xffffffff;
  pcVar5 = &DAT_00807680;
  do {
    pcVar13 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar13 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar13;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar13 + -uVar8;
  pcVar13 = &stack0xfffffcd0;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar13 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar13 = pcVar13 + 1;
  }
  FUN_006b78c0(&stack0xfffffcd0,&stack0xfffffcd0);
  puVar6 = thunk_FUN_00683c70(param_1,&stack0xfffffcd0,&iStack_14,param_4,(undefined *)0x0);
  if (puVar6 != (uint *)0x0) {
    if (iStack_14 != 10) {
      puStack_8 = puVar6;
      thunk_FUN_0068cda0((int *)&puStack_8,iStack_14);
      return (undefined4 *)0x0;
    }
    puStack_8 = (uint *)0x0;
    uVar8 = puVar6[3];
    puStack_10 = puVar6;
    if (uVar8 != 0) {
      while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
        if (uVar8 < puVar6[3]) {
          pcVar5 = (char *)(puVar6[2] * uVar8 + puVar6[7]);
        }
        else {
          pcVar5 = (char *)0x0;
        }
        if (((*pcVar5 != '\0') &&
            (iVar7 = Library::MSVCRT::__strcmpi((char *)&DAT_008117c0,pcVar5), iVar7 != 0)) ||
           (uVar10 != *(uint *)(pcVar5 + 0x104))) {
          FUN_006b0c70((int)puVar6,uVar8);
        }
      }
      uVar8 = puVar6[3];
      if (uVar8 != 0) {
        uVar10 = 0xffffffff;
        uVar9 = 0;
        param_1 = (uint *)0xffffffff;
        param_4 = (int *)0xffffffff;
        if (0 < (int)uVar8) {
          bVar14 = uVar8 != 0;
          do {
            if (((bVar14) && (iVar7 = puVar6[2] * uVar9 + puVar6[7], iVar7 != 0)) &&
               ((*(int *)(iVar7 + 0x108) < 0 &&
                ((puVar2 = *(uint **)(iVar7 + 0x110), (int)uStack_c <= (int)puVar2 &&
                 (piVar3 = *(int **)(iVar7 + 0x10c), (int)piVar3 <= (int)uStack_c)))))) {
              if ((int)param_4 < (int)piVar3) {
                uVar10 = uVar9;
                param_4 = piVar3;
              }
              if ((int)param_1 < (int)puVar2) {
                uVar10 = uVar9;
                param_1 = puVar2;
              }
            }
            uVar8 = puVar6[3];
            uVar9 = uVar9 + 1;
            bVar14 = uVar9 < uVar8;
          } while ((int)uVar9 < (int)uVar8);
          if (((-1 < (int)uVar10) && (uVar10 < uVar8)) &&
             (iVar7 = puVar6[2] * uVar10 + puVar6[7], iVar7 != 0)) {
            uVar8 = 0xffffffff;
            pcVar5 = (char *)(iVar7 + 0x114);
            do {
              pcVar13 = pcVar5;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar13 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar13;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            pcVar5 = pcVar13 + -uVar8;
            pcVar13 = (char *)&DAT_008117c0;
            for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar13 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar13 = pcVar13 + 1;
            }
            if (param_2 != (undefined4 *)0x0) {
              *param_2 = *(undefined4 *)(iVar7 + 0x218);
            }
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = 1;
            }
            goto LAB_0064a336;
          }
        }
        uVar10 = 0xffffffff;
        uVar9 = 0;
        param_1 = (uint *)0xffffffff;
        param_4 = (int *)0xffffffff;
        if (0 < (int)uVar8) {
          bVar14 = uVar8 != 0;
          do {
            if (((bVar14) && (iVar7 = puVar6[2] * uVar9 + puVar6[7], iVar7 != 0)) &&
               ((*(uint *)(iVar7 + 0x108) == uStack_c &&
                ((puVar2 = *(uint **)(iVar7 + 0x110), (int)uStack_18 <= (int)puVar2 &&
                 (piVar3 = *(int **)(iVar7 + 0x10c), (int)piVar3 <= (int)uStack_18)))))) {
              if ((int)param_4 < (int)piVar3) {
                uVar10 = uVar9;
                param_4 = piVar3;
              }
              if ((int)param_1 < (int)puVar2) {
                uVar10 = uVar9;
                param_1 = puVar2;
              }
            }
            uVar8 = puVar6[3];
            uVar9 = uVar9 + 1;
            bVar14 = uVar9 < uVar8;
          } while ((int)uVar9 < (int)uVar8);
          if (((-1 < (int)uVar10) && (uVar10 < uVar8)) &&
             (iVar7 = puVar6[2] * uVar10 + puVar6[7], iVar7 != 0)) {
            uVar8 = 0xffffffff;
            pcVar5 = (char *)(iVar7 + 0x114);
            do {
              pcVar13 = pcVar5;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar13 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar13;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            pcVar5 = pcVar13 + -uVar8;
            pcVar13 = (char *)&DAT_008117c0;
            for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar13 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar13 = pcVar13 + 1;
            }
            if (param_2 != (undefined4 *)0x0) {
              *param_2 = *(undefined4 *)(iVar7 + 0x218);
            }
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = 2;
            }
LAB_0064a336:
            if (puStack_10 != (uint *)0x0) {
              FUN_006ae110((byte *)puStack_10);
            }
            return &DAT_008117c0;
          }
        }
        if (puVar6 == (uint *)0x0) {
          return (undefined4 *)0x0;
        }
      }
    }
    FUN_006ae110((byte *)puVar6);
  }
  return (undefined4 *)0x0;
}

