
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::FormIndentText */

char * __thiscall
ccFntTy::FormIndentText
          (ccFntTy *this,char *param_1,uint *param_2,uint *param_3,uint *param_4,int param_5,
          char *param_6,int param_7)

{
  code *pcVar1;
  ccFntTy *this_00;
  int errorCode;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  char *pcVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  ccFntTy *local_14;
  uint *local_10;
  uint *local_c;
  char *local_8;
  
  local_c = (uint *)0x0;
  local_10 = (uint *)0x0;
  local_8 = (char *)0x0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_14;
  if (errorCode == 0) {
    puVar2 = _TxtToSarr(local_14,param_2);
    if (puVar2 != (uint *)0x0) {
      local_c = puVar2;
      puVar3 = FormIndentSarr(this_00,(int)puVar2,param_3,param_4,param_5,0,0xffffffff,param_6,
                              param_7);
      local_10 = puVar3;
      FUN_006b5570((byte *)puVar2);
      local_c = (uint *)0x0;
      local_8 = _SarrToTxt(this_00,param_1,(int)puVar3);
      if (puVar3 != (uint *)0x0) {
        FUN_006b5570((byte *)puVar3);
      }
    }
    g_currentExceptionFrame = local_58.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar4 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0x88f,0,errorCode,&DAT_007a4ccc,
                             s_ccFntTy__FormIndentText_007f0334);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    pcVar5 = (char *)(*pcVar1)();
    return pcVar5;
  }
  if ((local_8 != (char *)0x0) && (local_8 != param_1)) {
    FUN_006ab060(&local_8);
  }
  if (local_c != (uint *)0x0) {
    FUN_006b5570((byte *)local_c);
  }
  if (local_10 != (uint *)0x0) {
    FUN_006b5570((byte *)local_10);
  }
  RaiseInternalException(errorCode,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0x895);
  return (char *)0x0;
}

