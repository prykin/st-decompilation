
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::VisLineSarr */

int __thiscall ccFntTy::VisLineSarr(ccFntTy *this,int param_1,int param_2)

{
  code *pcVar1;
  ccFntTy *this_00;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  ccFntTy *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  if (param_1 == 0) {
    return 0;
  }
  local_10 = *(int *)(param_1 + 8);
  if (param_2 < local_10) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;
    iVar2 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_14;
    if (iVar2 != 0) {
      g_currentExceptionFrame = local_58.previous;
      iVar4 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0x8b3,0,iVar2,&DAT_007a4ccc,
                                 s_ccFntTy__VisLineSarr_007f034c);
      if (iVar4 != 0) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
      RaiseInternalException(iVar2,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0x8b5);
      if (-1 < iVar2) {
        iVar2 = -6;
      }
      return iVar2;
    }
    if (param_2 < local_10) {
      do {
        iVar2 = local_8;
        if (param_2 < *(int *)(param_1 + 8)) {
          puVar3 = *(uint **)(*(int *)(param_1 + 0x14) + param_2 * 4);
        }
        else {
          puVar3 = (uint *)0x0;
        }
        local_8 = FUN_007111c0(this_00,puVar3);
        local_8 = iVar2 + local_8;
        if (0 < param_2) {
          local_8 = local_8 + *(int *)(this_00 + 0x5c);
        }
        if (*(int *)(this_00 + 0x6c) < local_8) {
          g_currentExceptionFrame = local_58.previous;
          return local_c;
        }
        local_c = local_c + 1;
        param_2 = param_2 + 1;
      } while (param_2 < local_10);
    }
    g_currentExceptionFrame = local_58.previous;
    return local_c;
  }
  return 0;
}

