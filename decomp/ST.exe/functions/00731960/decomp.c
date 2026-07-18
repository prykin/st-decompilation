
undefined4 __cdecl FUN_00731960(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  
  DAT_0085a5c4 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_0085a5c4 == (HANDLE)0x0) {
    uVar2 = 0;
  }
  else {
    bVar1 = FUN_00731a80();
    if (CONCAT31(extraout_var,bVar1) == 0) {
      HeapDestroy(DAT_0085a5c4);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

