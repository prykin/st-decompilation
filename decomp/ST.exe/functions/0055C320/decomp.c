
void __thiscall FUN_0055c320(void *this,byte *param_1,char *param_2,char *param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  char *pcVar9;
  byte *pbVar10;
  
  uVar3 = 0xffffffff;
  do {
    pbVar7 = param_1;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pbVar7 = param_1 + 1;
    bVar1 = *param_1;
    param_1 = pbVar7;
  } while (bVar1 != 0);
  uVar3 = ~uVar3;
  pbVar7 = pbVar7 + -uVar3;
  pbVar10 = (byte *)((int)this + 0x44);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pbVar7;
    pbVar7 = pbVar7 + 4;
    pbVar10 = pbVar10 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pbVar10 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    pbVar10 = pbVar10 + 1;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar9 = param_2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar9 = param_2 + 1;
    cVar2 = *param_2;
    param_2 = pcVar9;
  } while (cVar2 != '\0');
  uVar3 = ~uVar3;
  pcVar9 = pcVar9 + -uVar3;
  pcVar8 = (char *)((int)this + 0x244);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar9 = param_3;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar9 = param_3 + 1;
    cVar2 = *param_3;
    param_3 = pcVar9;
  } while (cVar2 != '\0');
  uVar3 = ~uVar3;
  iVar5 = 0;
  pcVar9 = pcVar9 + -uVar3;
  pcVar8 = (char *)((int)this + 0x444);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar8 = pcVar8 + 4;
  }
  param_1 = (byte *)0x0;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar8 = pcVar8 + 1;
  }
  if (0 < *(int *)(param_4 + 8)) {
    do {
      uVar3 = 0xffffffff;
      pcVar9 = *(char **)(*(int *)(param_4 + 0x14) + iVar5 * 4);
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      iVar5 = iVar5 + 1;
      param_1 = param_1 + ~uVar3;
    } while (iVar5 < *(int *)(param_4 + 8));
  }
  if (*(int *)((int)this + 0x644) != 0) {
    FUN_006ab060((undefined4 *)((int)this + 0x644));
  }
  param_1 = (byte *)FUN_006aac10((uint)(param_1 + *(int *)(param_4 + 8)));
  *(undefined4 *)((int)this + 0x644) = param_1;
  if (param_1 == (byte *)0x0) {
    *(undefined1 *)((int)this + 10) = 1;
    return;
  }
  iVar5 = *(int *)(param_4 + 8);
  iVar6 = 0;
  if (iVar5 < 1) {
    *(undefined1 *)((int)this + 10) = 1;
    return;
  }
  if (iVar5 < 1) {
    pcVar9 = (char *)0x0;
    goto LAB_0055c414;
  }
  do {
    pcVar9 = *(char **)(*(int *)(param_4 + 0x14) + iVar6 * 4);
LAB_0055c414:
    uVar3 = 0xffffffff;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    uVar3 = ~uVar3;
    if (iVar6 < iVar5) {
      pbVar7 = *(byte **)(*(int *)(param_4 + 0x14) + iVar6 * 4);
    }
    else {
      pbVar7 = (byte *)0x0;
    }
    pbVar10 = param_1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pbVar10 = *(undefined4 *)pbVar7;
      pbVar7 = pbVar7 + 4;
      pbVar10 = pbVar10 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pbVar10 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      pbVar10 = pbVar10 + 1;
    }
    param_1[uVar3] = -(iVar6 != *(int *)(param_4 + 8) + -1) & 10;
    param_1 = param_1 + uVar3 + 1;
    iVar5 = *(int *)(param_4 + 8);
    iVar6 = iVar6 + 1;
    if (iVar5 <= iVar6) {
      *(undefined1 *)((int)this + 10) = 1;
      return;
    }
  } while( true );
}

