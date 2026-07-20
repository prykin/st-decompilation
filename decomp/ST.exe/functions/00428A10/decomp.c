
undefined4 __cdecl FUN_00428a10(uint param_1)

{
  char *text;
  int iVar1;
  
  if (PTR_00802a58 == (cLoadingTy *)0x0) {
    return 0xffffffff;
  }
  if ((int)param_1 < 0) {
    DAT_007f4e00 = -param_1;
    iVar1 = DAT_007f4e00;
    text = (char *)FUN_006b0140(0x2684,HINSTANCE_00807618);
    cLoadingTy::SetProcess(PTR_00802a58,0,text,iVar1);
    cLoadingTy::SetState(PTR_00802a58,CASE_0,0,(char *)0x0);
    return 0;
  }
  cLoadingTy::SetState(PTR_00802a58,CASE_1,param_1,(char *)0x0);
  return 0;
}

