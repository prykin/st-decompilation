
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\Ourlib\Palette.cpp
   Diagnostic line evidence: 399 | 400 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl
FUN_007192d0(undefined4 *param_1,undefined4 *param_2,uint param_3,UINT param_4,int param_5,
            int param_6)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar5;
  DWORD *pDVar6;
  undefined4 local_450 [256];
  InternalExceptionFrame local_50;
  int local_c;
  DWORD local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    local_c = iVar2;
    local_8 = timeGetTime();
    pDVar6 = &local_8;
    DVar3 = timeGetTime();
    iVar2 = FUN_00719190(param_1,param_2,param_3,param_4,param_5,&local_c,param_6,DVar3,pDVar6);
    while (iVar2 == 0) {
      pDVar6 = &local_8;
      DVar3 = timeGetTime();
      iVar2 = FUN_00719190(param_1,param_2,param_3,param_4,param_5,&local_c,param_6,DVar3,pDVar6);
    }
    puVar5 = local_450;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    FUN_006b08f0(param_1,(int)local_450,param_3,param_4);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = ReportDebugMessage(s_E__Ourlib_Palette_cpp_007f0718,399,0,iVar2,&DAT_007a4ccc,
                             s_DarkPalette_Error__007f07b0);
  if (iVar4 == 0) {
    RaiseInternalException(iVar2,0,s_E__Ourlib_Palette_cpp_007f0718,400);
    return iVar2;
  }
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}

