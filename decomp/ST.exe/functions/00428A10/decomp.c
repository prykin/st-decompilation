
undefined4 __cdecl FUN_00428a10(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  if (DAT_00802a58 == (void *)0x0) {
    return 0xffffffff;
  }
  if ((int)param_1 < 0) {
    DAT_007f4e00 = -param_1;
    iVar2 = DAT_007f4e00;
    puVar1 = (uint *)FUN_006b0140(0x2684,DAT_00807618);
    thunk_FUN_00554f20(DAT_00802a58,0,puVar1,iVar2);
    thunk_FUN_00555040(DAT_00802a58,0,0,(char *)0x0);
    return 0;
  }
  thunk_FUN_00555040(DAT_00802a58,1,param_1,(char *)0x0);
  return 0;
}

