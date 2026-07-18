
void FUN_005531f0(void)

{
  int iVar1;
  void *pvVar2;
  undefined4 in_stack_ffffffbc;
  
  pvVar2 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb8;
  iVar1 = __setjmp3((undefined4 *)&stack0xffffffbc,0,pvVar2,in_stack_ffffffbc);
  if (iVar1 == 0) {
    if (DAT_00802a4c == (uint *)0x0) {
      DAT_00802a4c = FUN_006ae290((uint *)0x0,10,6,10);
    }
    DAT_00858df8 = pvVar2;
    return;
  }
  DAT_00858df8 = pvVar2;
  return;
}

