
undefined4 __cdecl FUN_00428aa0(uint param_1)

{
  int iVar1;
  char *text;
  
  if (PTR_00802a58 == (cLoadingTy *)0x0) {
    return 0xffffffff;
  }
  if ((int)param_1 < 0) {
    iVar1 = -param_1;
    text = (char *)FUN_006b0140(0x2681,HINSTANCE_00807618);
    cLoadingTy::SetProcess(PTR_00802a58,0,text,iVar1);
    cLoadingTy::SetState(PTR_00802a58,CASE_0,0,(char *)0x0);
    return 0;
  }
  cLoadingTy::SetState(PTR_00802a58,CASE_1,param_1,(char *)0x0);
  return 0;
}

