
void FUN_006e4c90(int param_1,int param_2)

{
  uint uVar1;
  undefined4 local_10;
  int local_c;
  byte *local_8;
  
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = FUN_006b1190(param_2,&local_10);
  if (-1 < (int)uVar1) {
    while( true ) {
      if (local_c == param_1) break;
      if (local_8 != (byte *)0x0) {
        FUN_006e4c90(param_1,(int)local_8);
      }
      uVar1 = FUN_006b1190(param_2,&local_10);
      if ((int)uVar1 < 0) {
        return;
      }
    }
    if (local_8 != (byte *)0x0) {
      FUN_006e3680((int)local_8);
      FUN_006ae110(local_8);
      local_8 = (byte *)0x0;
    }
    FUN_006b0c70(param_2,uVar1);
  }
  return;
}

