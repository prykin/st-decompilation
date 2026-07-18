
undefined4 __cdecl FUN_00428aa0(uint param_1)

{
  int iVar1;
  uint *puVar2;
  
  if (DAT_00802a58 == (void *)0x0) {
    return 0xffffffff;
  }
  if ((int)param_1 < 0) {
    iVar1 = -param_1;
    puVar2 = (uint *)FUN_006b0140(0x2681,DAT_00807618);
    thunk_FUN_00554f20(DAT_00802a58,0,puVar2,iVar1);
    thunk_FUN_00555040(DAT_00802a58,0,0,(char *)0x0);
    return 0;
  }
  thunk_FUN_00555040(DAT_00802a58,1,param_1,(char *)0x0);
  return 0;
}

