
undefined4 __cdecl FUN_007451f0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_007f2744 == 0) {
    return 0;
  }
  if ((param_1[5] != DAT_007f27d8) || (param_1[5] != DAT_007f27e8)) {
    if (DAT_00857438 == 0) {
      FUN_007454f0(1,1,param_1[5],4,1,0,0,2,0,0,0);
      FUN_007454f0(0,1,param_1[5],10,5,0,0,2,0,0,0);
    }
    else {
      if (DAT_008574d8 == 0) {
        FUN_007454f0(1,1,param_1[5],(uint)DAT_008574da,(uint)DAT_008574de,(uint)DAT_008574dc,0,
                     (uint)DAT_008574e0,(uint)DAT_008574e2,(uint)DAT_008574e4,(uint)DAT_008574e6);
      }
      else {
        FUN_007454f0(1,0,param_1[5],(uint)DAT_008574da,0,0,(uint)DAT_008574de,(uint)DAT_008574e0,
                     (uint)DAT_008574e2,(uint)DAT_008574e4,(uint)DAT_008574e6);
      }
      if (DAT_00857484 == 0) {
        FUN_007454f0(0,1,param_1[5],(uint)DAT_00857486,(uint)DAT_0085748a,(uint)DAT_00857488,0,
                     (uint)DAT_0085748c,(uint)DAT_0085748e,(uint)DAT_00857490,(uint)DAT_00857492);
      }
      else {
        FUN_007454f0(0,0,param_1[5],(uint)DAT_00857486,0,0,(uint)DAT_0085748a,(uint)DAT_0085748c,
                     (uint)DAT_0085748e,(uint)DAT_00857490,(uint)DAT_00857492);
      }
    }
  }
  if (DAT_007f27dc < DAT_007f27ec) {
    if ((param_1[7] < DAT_007f27dc) || (DAT_007f27ec < param_1[7])) {
      return 0;
    }
    if ((DAT_007f27dc < param_1[7]) && (param_1[7] < DAT_007f27ec)) {
      return 1;
    }
  }
  else {
    if ((param_1[7] < DAT_007f27ec) || (DAT_007f27dc < param_1[7])) {
      return 1;
    }
    if ((DAT_007f27ec < param_1[7]) && (param_1[7] < DAT_007f27dc)) {
      return 0;
    }
  }
  iVar2 = (*param_1 + param_1[1] * 0x3c + param_1[2] * 0xe10) * 1000;
  if (param_1[7] == DAT_007f27dc) {
    if (iVar2 < DAT_007f27e0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else if (iVar2 < DAT_007f27f0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

