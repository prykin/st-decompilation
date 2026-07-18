
void __fastcall FUN_00550bb0(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 in_stack_ffffffb4;
  char local_5;
  
  pvVar2 = DAT_00858df8;
  if (DAT_0080877e == '\0') {
    DAT_00858df8 = &stack0xffffffb0;
    iVar1 = __setjmp3((undefined4 *)&stack0xffffffb4,0,pvVar2,in_stack_ffffffb4);
    if (iVar1 == 0) {
      FUN_006b6500((int)DAT_00811764,1);
      local_5 = '\0';
      iVar1 = FUN_00715360(DAT_00811764,1,'B',&local_5,1,0,0xffffffff);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x59) = 1;
      }
      FUN_006b6500((int)DAT_00811764,DAT_0080733c);
      DAT_00858df8 = pvVar2;
      return;
    }
  }
  DAT_00858df8 = pvVar2;
  return;
}

