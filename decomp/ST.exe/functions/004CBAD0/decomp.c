
undefined4 __fastcall FUN_004cbad0(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined3 extraout_var;
  
  iVar2 = thunk_FUN_0041c710(param_1);
  if (iVar2 == 0) {
    iVar2 = 0;
    uVar3 = thunk_FUN_004ad650(param_1 + 0x1d5);
    FUN_006eabf0(*(void **)(param_1 + 0x211),uVar3,iVar2);
    if (*(int *)(param_1 + 0x5ff) != 0) {
      iVar2 = 0;
      uVar3 = thunk_FUN_004ad650(*(int *)(param_1 + 0x5ff));
      FUN_006eabf0(*(void **)(param_1 + 0x211),uVar3,iVar2);
    }
    if (*(int *)(param_1 + 0x603) != 0) {
      iVar2 = 0;
      uVar3 = thunk_FUN_004ad650(*(int *)(param_1 + 0x603));
      FUN_006eabf0(*(void **)(param_1 + 0x211),uVar3,iVar2);
    }
    bVar1 = thunk_FUN_0041caf0(param_1);
    uVar3 = (uint)(CONCAT31(extraout_var,bVar1) != 0);
  }
  else {
    if ((*(int *)(param_1 + 0x46c) != 4) || (*(int *)(param_1 + 0x490) == 0)) {
      iVar2 = 1;
      uVar3 = thunk_FUN_004ad650(param_1 + 0x1d5);
      FUN_006eabf0(*(void **)(param_1 + 0x211),uVar3,iVar2);
      if (*(int *)(param_1 + 0x5ff) != 0) {
        iVar2 = 1;
        uVar3 = thunk_FUN_004ad650(*(int *)(param_1 + 0x5ff));
        FUN_006eabf0(*(void **)(param_1 + 0x211),uVar3,iVar2);
      }
      if (*(int *)(param_1 + 0x603) != 0) {
        iVar2 = 1;
        uVar3 = thunk_FUN_004ad650(*(int *)(param_1 + 0x603));
        FUN_006eabf0(*(void **)(param_1 + 0x211),uVar3,iVar2);
      }
    }
    uVar3 = 1;
  }
  iVar2 = thunk_FUN_004ad650(param_1 + 0x1d5);
  FUN_006e6870(*(void **)(param_1 + 0x211),iVar2,uVar3);
  return 0;
}

