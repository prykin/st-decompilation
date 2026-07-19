
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::_TxtToSarr */

uint * __thiscall ccFntTy::_TxtToSarr(ccFntTy *this,uint *param_1)

{
  char cVar1;
  code *pcVar2;
  int errorCode;
  uint *puVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  uint *local_c;
  undefined1 local_5;
  
  local_c = (uint *)0x0;
  if (param_1 != (uint *)0x0) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (errorCode == 0) {
      local_c = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,0x14,0x14);
      cVar1 = (char)*param_1;
      uVar5 = local_5;
      while( true ) {
        if (cVar1 == '\0') {
          g_currentExceptionFrame = local_50.previous;
          return local_c;
        }
        puVar3 = Library::MSVCRT::FUN_00730590(param_1,&DAT_007c8ff4);
        if (puVar3 != (uint *)0x0) {
          uVar5 = (undefined1)*puVar3;
          *(undefined1 *)puVar3 = 0;
          local_5 = uVar5;
        }
        Library::DKW::TBL::FUN_006b5aa0((int)local_c,(char *)param_1);
        if (puVar3 == (uint *)0x0) break;
        param_1 = (uint *)((int)puVar3 + 1);
        *(undefined1 *)puVar3 = uVar5;
        cVar1 = *(char *)param_1;
      }
      g_currentExceptionFrame = local_50.previous;
      return local_c;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar4 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0x8d0,0,errorCode,&DAT_007a4ccc,
                               s_ccFntTy___TxtToSarr_007f0364);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      puVar3 = (uint *)(*pcVar2)();
      return puVar3;
    }
    if (local_c != (uint *)0x0) {
      FUN_006b5570((byte *)local_c);
    }
    RaiseInternalException(errorCode,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0x8d4);
  }
  return (uint *)0x0;
}

