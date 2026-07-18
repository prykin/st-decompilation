
int * __cdecl FUN_00730e20(uint param_1)

{
  int *piVar1;
  
  if ((DAT_007f14c8 < param_1) || (piVar1 = FUN_00732170(param_1), piVar1 == (int *)0x0)) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    piVar1 = HeapAlloc(DAT_0085a5c4,0,param_1 + 0xf & 0xfffffff0);
  }
  return piVar1;
}

