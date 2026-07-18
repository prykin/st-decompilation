
undefined4 __fastcall thunk_FUN_004d5470(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined3 extraout_var;
  int *piVar4;
  int iVar5;
  
  iVar2 = thunk_FUN_0041c710(param_1);
  if (iVar2 == 0) {
    iVar2 = 0;
    uVar3 = thunk_FUN_004ad650(param_1 + 0x1d5);
    FUN_006eabf0(*(void **)(param_1 + 0x211),uVar3,iVar2);
    if (*(int *)(param_1 + 0x35c) != 0) {
      iVar2 = 0;
      uVar3 = thunk_FUN_004ad650(*(int *)(param_1 + 0x35c));
      FUN_006eabf0(*(void **)(param_1 + 0x211),uVar3,iVar2);
    }
    piVar4 = (int *)(param_1 + 0x350);
    iVar2 = 3;
    do {
      if (*piVar4 != 0) {
        iVar5 = 0;
        uVar3 = thunk_FUN_004ad650(*piVar4);
        FUN_006eabf0(*(void **)(param_1 + 0x211),uVar3,iVar5);
      }
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    bVar1 = thunk_FUN_0041caf0(param_1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 1;
    uVar3 = thunk_FUN_004ad650(param_1 + 0x1d5);
    FUN_006eabf0(*(void **)(param_1 + 0x211),uVar3,iVar2);
    if (*(int *)(param_1 + 0x35c) != 0) {
      iVar2 = 1;
      uVar3 = thunk_FUN_004ad650(*(int *)(param_1 + 0x35c));
      FUN_006eabf0(*(void **)(param_1 + 0x211),uVar3,iVar2);
    }
    piVar4 = (int *)(param_1 + 0x350);
    iVar2 = 3;
    do {
      if (*piVar4 != 0) {
        iVar5 = 1;
        uVar3 = thunk_FUN_004ad650(*piVar4);
        FUN_006eabf0(*(void **)(param_1 + 0x211),uVar3,iVar5);
      }
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 1;
  }
  iVar5 = thunk_FUN_004ad650(param_1 + 0x1d5);
  FUN_006e6870(*(void **)(param_1 + 0x211),iVar5,iVar2);
  return 0;
}

