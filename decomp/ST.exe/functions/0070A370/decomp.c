
undefined4 __cdecl FUN_0070a370(int param_1)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar6;
  undefined4 local_74 [16];
  undefined4 local_34 [10];
  uint local_b;
  
  pIVar6 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffff88;
  iVar2 = Library::MSVCRT::__setjmp3(local_74,0,unaff_ESI,pIVar6);
  if (iVar2 == 0) {
    if (param_1 != 0) {
      if (*(int *)(param_1 + 4) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 4) + 4) = 0;
        iVar2 = FUN_006b1190(*(int *)(param_1 + 4),local_34);
        while (-1 < iVar2) {
          if (local_b != 0) {
            FUN_00709a10(param_1,(Global_sub_00709A10_param_2Enum)local_34[0],&local_b);
          }
          iVar2 = FUN_006b1190(*(int *)(param_1 + 4),local_34);
        }
        FUN_006ae110(*(byte **)(param_1 + 4));
        *(undefined4 *)(param_1 + 4) = 0;
      }
      puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,0x2d,0x14);
      *(uint **)(param_1 + 4) = puVar3;
    }
    g_currentExceptionFrame = pIVar6;
    return 1;
  }
  g_currentExceptionFrame = pIVar6;
  iVar4 = ReportDebugMessage(s_E__Ourlib_mfrload_cpp_007eff5c,0x18d,0,iVar2,&DAT_007a4ccc,
                             s_mfRLoadRefreshAll_007effbc);
  if (iVar4 == 0) {
    RaiseInternalException(iVar2,0,s_E__Ourlib_mfrload_cpp_007eff5c,399);
    return 0;
  }
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}

