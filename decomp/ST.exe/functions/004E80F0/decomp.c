
undefined4 FUN_004e80f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  switch(param_2) {
  case 0xa3:
  case 0xa8:
  case 0xb2:
  case 0xbe:
    iVar1 = param_2 * 3 + -0x1c2;
    iVar2 = (&DAT_007bf67c)[iVar1];
    if (((iVar2 < 0) || (iVar2 == 0)) ||
       (iVar2 = thunk_FUN_004e60d0(param_1,iVar2), (int)(&DAT_007bf680)[iVar1] <= iVar2)) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

