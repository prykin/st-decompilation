
void __cdecl
FUN_004c2950(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,char *param_5,
            undefined1 *param_6,undefined4 *param_7)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  *param_4 = 0;
  *param_5 = '\0';
  switch(param_3) {
  case 8:
    if (*(int *)(&DAT_00791948 + param_2 * 4) == 0) {
      return;
    }
    iVar1 = param_1 + -0x97 + param_2 * 3;
    if (*(int *)(PTR_PTR_007bb198 + iVar1 * 0xc + 4) == 0) {
      return;
    }
    if (param_2 == 0x40) {
      return;
    }
    if (param_2 == 0x49) {
      return;
    }
    wsprintfA(param_5,s__s_cover_1i_007ac8ec,*(int *)(PTR_PTR_007bb198 + iVar1 * 0xc + 4),0);
    *param_4 = DAT_0080678c;
    *param_6 = 0x1d;
    goto LAB_004c2b44;
  case 9:
    if (*(int *)(&DAT_00791948 + param_2 * 4) != 0) {
      iVar1 = param_1 + -0x97 + param_2 * 3;
      if (*(int *)(PTR_PTR_007bb198 + iVar1 * 0xc) != 0) {
        wsprintfA(param_5,s__s_cover_007ac8fc,*(int *)(PTR_PTR_007bb198 + iVar1 * 0xc));
        *param_4 = DAT_0080678c;
        *param_6 = 0x1d;
        *param_7 = *(undefined4 *)(PTR_DAT_007b5170 + iVar1 * 0x20);
        return;
      }
    }
    break;
  case 0xc:
    iVar1 = param_1 + -0x97 + param_2 * 3;
    if (*(char **)(PTR_PTR_007bb198 + iVar1 * 0xc + 8) != (char *)0x0) {
      uVar3 = 0xffffffff;
      pcVar5 = *(char **)(PTR_PTR_007bb198 + iVar1 * 0xc + 8);
      do {
        pcVar6 = pcVar5;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar2 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar6 + -uVar3;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)param_5 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        param_5 = param_5 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *param_5 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        param_5 = param_5 + 1;
      }
      *param_4 = DAT_0080678c;
      *param_6 = 0x1d;
      *param_7 = *(undefined4 *)(PTR_DAT_007b8310 + iVar1 * 0x20);
      return;
    }
    break;
  case 0xd:
    iVar1 = param_1 + -0x97 + param_2 * 3;
    if (*(int *)(PTR_PTR_007bb198 + iVar1 * 0xc + 4) == 0) {
      return;
    }
    wsprintfA(param_5,s__s_1i_007ac908,*(int *)(PTR_PTR_007bb198 + iVar1 * 0xc + 4),0);
    *param_4 = DAT_0080678c;
    *param_6 = 0x1d;
    if ((param_2 == 0x40) || (param_2 == 0x49)) {
      *param_7 = 0;
      return;
    }
LAB_004c2b44:
    *param_7 = *(undefined4 *)(PTR_DAT_007b5170 + iVar1 * 0x20);
    break;
  case 0xe:
    iVar1 = param_1 + -0x97 + param_2 * 3;
    if (*(char **)(PTR_PTR_007bb198 + iVar1 * 0xc) != (char *)0x0) {
      uVar3 = 0xffffffff;
      pcVar5 = *(char **)(PTR_PTR_007bb198 + iVar1 * 0xc);
      do {
        pcVar6 = pcVar5;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar2 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar6 + -uVar3;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)param_5 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        param_5 = param_5 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *param_5 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        param_5 = param_5 + 1;
      }
      *param_4 = DAT_0080678c;
      *param_6 = 0x1d;
      *param_7 = *(undefined4 *)(PTR_DAT_007b5170 + iVar1 * 0x20);
      return;
    }
  }
  return;
}

