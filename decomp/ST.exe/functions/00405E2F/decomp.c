
void __cdecl thunk_FUN_005252c0(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 in_stack_ffffffb8;
  int iStack_8;
  
  pvVar2 = DAT_00858df8;
  iStack_8 = 0;
  if (param_1 != -1) {
    DAT_00858df8 = &stack0xffffffb4;
    iVar1 = __setjmp3((undefined4 *)&stack0xffffffb8,0,pvVar2,in_stack_ffffffb8);
    if (iVar1 == 0) {
      switch(param_1) {
      case 0xaf:
      case 0xb0:
      case 0xb6:
      case 0xb7:
      case 0xb8:
      case 0xb9:
        iStack_8 = 1;
      }
      thunk_FUN_00568dd0(&DAT_00807658,5,(char *)0x0,param_1,(int *)0x0,iStack_8);
      DAT_00858df8 = pvVar2;
      return;
    }
  }
  DAT_00858df8 = pvVar2;
  return;
}

