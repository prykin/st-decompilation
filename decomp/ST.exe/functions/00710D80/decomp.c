
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::GetSurfAsSpr */

int __thiscall
ccFntTy::GetSurfAsSpr(ccFntTy *this,byte param_1,int param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  ccFntTy *pcVar2;
  int iVar3;
  int iVar4;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar5;
  undefined4 local_54 [16];
  ccFntTy *local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  pIVar5 = g_currentExceptionFrame;
  local_c = 0;
  local_8 = (undefined4 *)0x0;
  local_10 = 0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffa8;
  local_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54,0,unaff_ESI,pIVar5);
  pcVar2 = local_14;
  if (iVar3 == 0) {
    if ((local_14->field_0072 == 0) || (local_14->field_0076 == 0)) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x4bc);
    }
    if ((param_4 < 1) || (param_5 < 1)) {
      iVar3 = pcVar2->field_0076;
    }
    else {
      local_8 = Library::DKW::WGR::FUN_006b55f0
                          ((undefined4 *)0x0,0,0,0,pcVar2->field_0072,pcVar2->field_0076,param_2,
                           param_3,param_4,param_5);
      if (local_8 == (undefined4 *)0x0) {
        RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x4c3);
      }
      local_10 = 1;
      iVar3 = FUN_006b4fa0((int)local_8);
    }
    FUN_006b4b20(&local_c,(uint)local_8,iVar3,param_1);
    if ((local_10 != 0) && (local_8 != (undefined4 *)0x0)) {
      FUN_006ab060(&local_8);
    }
    g_currentExceptionFrame = pIVar5;
    return local_c;
  }
  g_currentExceptionFrame = pIVar5;
  iVar4 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0x4ce,0,iVar3,&DAT_007a4ccc,
                             s_ccFntTy__GetSurfAsSpr_007f024c);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if ((local_10 != 0) && (local_8 != (undefined4 *)0x0)) {
    FUN_006ab060(&local_8);
  }
  if (local_c != 0) {
    FUN_006ab060(&local_c);
  }
  RaiseInternalException(iVar3,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0x4d3);
  return 0;
}

