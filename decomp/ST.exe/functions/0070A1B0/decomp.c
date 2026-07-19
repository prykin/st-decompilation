
int __cdecl FUN_0070a1b0(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  Global_sub_00709A10_param_2Enum *pGVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  undefined4 local_c;
  uint local_8;
  
  local_c = 0xfffffffc;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar4 = ReportDebugMessage(s_E__Ourlib_mfrload_cpp_007eff5c,0x157,0,iVar2,&DAT_007a4ccc,
                               s__mfRLoadRelease_007effac);
    if (iVar4 == 0) {
      RaiseInternalException(iVar2,0,s_E__Ourlib_mfrload_cpp_007eff5c,0x159);
      return iVar2;
    }
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) == 0) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfrload_cpp_007eff5c,0x14a);
      return -0x34;
    }
    pGVar3 = (Global_sub_00709A10_param_2Enum *)FUN_00709990(param_1,*param_2,&local_8);
    if (pGVar3 != (Global_sub_00709A10_param_2Enum *)0x0) {
      local_c = *(undefined4 *)(pGVar3 + 0x25) - CASE_1;
      *(undefined4 *)(pGVar3 + 0x25) = local_c;
      if (local_c == CASE_0) {
        FUN_00709a10(param_1,*pGVar3,(uint *)(pGVar3 + 0x29));
        FUN_006b0c70(*(int *)(param_1 + 4),local_8);
        *param_2 = 0;
        g_currentExceptionFrame = local_50.previous;
        return 0;
      }
    }
    g_currentExceptionFrame = local_50.previous;
    return local_c;
  }
  RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfrload_cpp_007eff5c,0x149);
  return -0x34;
}

