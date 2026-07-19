
int __cdecl
FUN_00719080(undefined4 *param_1,undefined4 *param_2,uint param_3,UINT param_4,int param_5,
            int param_6)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  DWORD *pDVar5;
  InternalExceptionFrame local_50;
  DWORD local_c;
  int local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    local_8 = iVar2;
    local_c = timeGetTime();
    pDVar5 = &local_c;
    DVar3 = timeGetTime();
    iVar2 = FUN_00718f40(param_1,param_2,param_3,param_4,param_5,&local_8,param_6,DVar3,pDVar5);
    while (iVar2 == 0) {
      pDVar5 = &local_c;
      DVar3 = timeGetTime();
      iVar2 = FUN_00718f40(param_1,param_2,param_3,param_4,param_5,&local_8,param_6,DVar3,pDVar5);
    }
    FUN_006b0a20(param_1,(int)param_2,param_3,param_4,1);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = ReportDebugMessage(s_E__Ourlib_Palette_cpp_007f0718,0x161,0,iVar2,&DAT_007a4ccc,
                             s_LightPalette_Error__007f079c);
  if (iVar4 == 0) {
    RaiseInternalException(iVar2,0,s_E__Ourlib_Palette_cpp_007f0718,0x162);
    return iVar2;
  }
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}

