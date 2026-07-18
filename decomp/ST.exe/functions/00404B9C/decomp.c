
undefined4 thunk_FUN_005fe990(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (200 < param_1) {
    switch(param_1 / 200) {
    case 1:
      if (param_2 < 0x12d) {
        uVar1 = 1;
      }
      break;
    case 2:
      if (param_2 < 0x1f6) {
        return 1;
      }
      break;
    case 3:
      if (param_2 < 0x2bf) {
        return 1;
      }
      break;
    case 4:
      if (param_2 < 0x388) {
        return 1;
      }
    }
  }
  return uVar1;
}

