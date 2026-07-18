
int * __cdecl thunk_FUN_0064a630(int param_1)

{
  int iVar1;
  void *unaff_ESI;
  undefined4 uVar2;
  undefined4 auStack_48 [16];
  int *piStack_8;
  
  uVar2 = DAT_00858df8;
  piStack_8 = (int *)0x0;
  DAT_00858df8 = &stack0xffffffb4;
  iVar1 = __setjmp3(auStack_48,0,unaff_ESI,uVar2);
  if (iVar1 == 0) {
    piStack_8 = FUN_006aac10(0x10);
    thunk_FUN_0064a6f0(piStack_8,param_1);
    DAT_00858df8 = (undefined1 *)uVar2;
    return piStack_8;
  }
  DAT_00858df8 = (undefined1 *)uVar2;
  thunk_FUN_0064a800(&piStack_8);
  FUN_006a5e40(iVar1,0,0x7d2a04,0x17);
  return (int *)0x0;
}

