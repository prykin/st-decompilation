
undefined4 thunk_FUN_00555880(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  undefined3 extraout_var;
  
  sVar1 = *(short *)(param_1 + 0x1c);
  if ((((-1 < sVar1) && (sVar1 < DAT_007fb240)) && (sVar2 = *(short *)(param_1 + 0x1e), -1 < sVar2))
     && (((sVar2 < DAT_007fb242 && (sVar3 = *(short *)(param_1 + 0x20), -1 < sVar3)) &&
         (sVar3 < DAT_007fb244)))) {
    bVar4 = thunk_FUN_004961b0(sVar1,sVar2,sVar3);
    if (CONCAT31(extraout_var,bVar4) != 0) {
      return 1;
    }
    return 0;
  }
  if (-1 < *(short *)(param_1 + 0x20)) {
    return 1;
  }
  return 0;
}

