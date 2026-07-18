
undefined4 __fastcall FUN_005ddb40(int param_1)

{
  char cVar1;
  StartSystemTy *pSVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char local_460 [64];
  char local_420 [1044];
  char *local_c;
  StartSystemTy *local_8;
  
  if (*(int *)(*(int *)(param_1 + 0x686) + 8) < 1) {
    pcVar8 = (char *)0x0;
  }
  else {
    pcVar8 = (char *)**(undefined4 **)(*(int *)(param_1 + 0x686) + 0x14);
  }
  local_8 = (StartSystemTy *)param_1;
  bVar3 = thunk_FUN_00571810(pcVar8);
  if (CONCAT31(extraout_var,bVar3) == 0) {
    return 0;
  }
  iVar7 = *(int *)(param_1 + 0x696);
  pcVar8 = local_460;
  for (iVar4 = 0x114; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8 = pcVar8 + 4;
  }
  *pcVar8 = '\0';
  iVar4 = 0;
  if (0 < *(int *)(iVar7 + 8)) {
    do {
      uVar5 = 0xffffffff;
      local_c = local_460;
      pcVar8 = &DAT_008016a0;
      do {
        pcVar9 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar8 = pcVar9 + -uVar5;
      pcVar9 = local_c;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      if (iVar4 < *(int *)(iVar7 + 8)) {
        pcVar8 = *(char **)(*(int *)(iVar7 + 0x14) + iVar4 * 4);
      }
      else {
        pcVar8 = (char *)0x0;
      }
      uVar5 = 0xffffffff;
      do {
        pcVar9 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar8 = pcVar9 + -uVar5;
      pcVar9 = local_420;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; pSVar2 = local_8, uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      StartSystemTy::AddToChat(local_8,(int)local_460);
      iVar7 = *(int *)(pSVar2 + 0x696);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar7 + 8));
  }
  return 1;
}

