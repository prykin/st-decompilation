
undefined4 __fastcall FUN_004eaf90(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(*(undefined4 *)(param_1 + 0x4d0)) {
  case 1:
    if (*(int *)(param_1 + 0x4d4) == DAT_0079aa0c + -1) {
      return 1;
    }
    break;
  case 3:
    if (*(int *)(param_1 + 0x4d4) < DAT_0079aa14) {
      return 0;
    }
  case 0:
  case 2:
    uVar1 = 1;
  }
  return uVar1;
}

