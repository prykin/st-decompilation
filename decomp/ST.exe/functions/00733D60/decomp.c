
int __cdecl FUN_00733d60(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = FUN_00733e90(0);
  }
  else {
    iVar1 = FUN_00733dc0(param_1);
    if (iVar1 == 0) {
      if ((param_1[3] & 0x4000U) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_0073e2c0(param_1[4]);
        iVar1 = -(uint)(iVar1 != 0);
      }
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}

