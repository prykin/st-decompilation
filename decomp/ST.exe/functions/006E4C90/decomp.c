
void FUN_006e4c90(int param_1,DArrayTy *param_2)

{
  uint uVar1;
  undefined4 local_10;
  int local_c;
  DArrayTy *local_8;
  
  param_2->iteratorIndex = 0;
  uVar1 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2,&local_10);
  if (-1 < (int)uVar1) {
    while( true ) {
      if (local_c == param_1) break;
      if (local_8 != (DArrayTy *)0x0) {
        FUN_006e4c90(param_1,local_8);
      }
      uVar1 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)param_2,&local_10);
      if ((int)uVar1 < 0) {
        return;
      }
    }
    if (local_8 != (DArrayTy *)0x0) {
      FUN_006e3680((AnonShape_006E3680_4519C52B *)local_8);
      FUN_006ae110((byte *)local_8);
      local_8 = (DArrayTy *)0x0;
    }
    FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_2,uVar1);
  }
  return;
}

