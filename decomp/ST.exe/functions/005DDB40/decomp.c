
undefined4 __fastcall FUN_005ddb40(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char local_460 [64];
  char local_420 [1044];
  char *local_c;
  int local_8;
  
  if (*(int *)(*(int *)(param_1 + 0x686) + 8) < 1) {
    pcVar7 = (char *)0x0;
  }
  else {
    pcVar7 = (char *)**(undefined4 **)(*(int *)(param_1 + 0x686) + 0x14);
  }
  local_8 = param_1;
  bVar2 = thunk_FUN_00571810(pcVar7);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return 0;
  }
  iVar6 = *(int *)(param_1 + 0x696);
  pcVar7 = local_460;
  for (iVar3 = 0x114; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    pcVar7 = pcVar7 + 4;
  }
  *pcVar7 = '\0';
  iVar3 = 0;
  if (0 < *(int *)(iVar6 + 8)) {
    do {
      uVar4 = 0xffffffff;
      local_c = local_460;
      pcVar7 = &DAT_008016a0;
      do {
        pcVar8 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = pcVar8 + -uVar4;
      pcVar8 = local_c;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      if (iVar3 < *(int *)(iVar6 + 8)) {
        pcVar7 = *(char **)(*(int *)(iVar6 + 0x14) + iVar3 * 4);
      }
      else {
        pcVar7 = (char *)0x0;
      }
      uVar4 = 0xffffffff;
      do {
        pcVar8 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = pcVar8 + -uVar4;
      pcVar8 = local_420;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; iVar6 = local_8, uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      thunk_FUN_005dd850((int)local_460);
      iVar6 = *(int *)(iVar6 + 0x696);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar6 + 8));
  }
  return 1;
}

