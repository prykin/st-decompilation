
void __cdecl FUN_0071ac40(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_48;
  
  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if ((param_1 != 0) && (param_2 != 0)) {
      *(undefined4 *)(param_2 + 4) = 0;
      while( true ) {
        if (*(int *)(param_2 + 4) < *(int *)(param_2 + 8)) {
          iVar2 = *(int *)(param_2 + 4) + 1;
          pcVar4 = *(char **)(*(int *)(param_2 + 0x14) + -4 + iVar2 * 4);
          *(int *)(param_2 + 4) = iVar2;
        }
        else {
          pcVar4 = (char *)0x0;
        }
        if (pcVar4 == (char *)0x0) break;
        Library::DKW::TBL::FUN_006b5aa0(param_1,pcVar4);
      }
    }
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar3 = ReportDebugMessage(s_E__Ourlib_mfsarr_cpp_007f0898,0x59,0,iVar2,&DAT_007a4ccc,
                             s_tSArrCat_007f08bc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E__Ourlib_mfsarr_cpp_007f0898,0x5b);
  return;
}

