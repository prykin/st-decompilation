
undefined4 __fastcall FUN_004d9700(int param_1)

{
  uint uVar1;
  int local_8;
  
  if (DAT_007fa16c != (byte *)0x0) {
    uVar1 = 0;
    local_8 = param_1;
    if (0 < *(int *)(DAT_007fa16c + 0xc)) {
      do {
        FUN_006acc70((int)DAT_007fa16c,uVar1,&local_8);
        if (local_8 == param_1) {
          FUN_006b0c70((int)DAT_007fa16c,uVar1);
          break;
        }
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < *(int *)(DAT_007fa16c + 0xc));
    }
    if (*(int *)(DAT_007fa16c + 0xc) == 0) {
      FUN_006ae110(DAT_007fa16c);
      DAT_007fa16c = (byte *)0x0;
    }
  }
  return 0;
}

