
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::operator */

undefined4 * __thiscall ccFntTy::operator(ccFntTy *this,uint param_1,int param_2)

{
  code *pcVar1;
  int errorCode;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    if ((param_2 == 0) || (*(int *)(param_2 + 0xa0) != 0)) {
      RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_mfcfnt_cpp_007f0190,0x1de);
    }
    puVar2 = Library::DKW::LIB::FUN_006aac10(param_1);
    puVar2[0x13] = 1;
    puVar2[0x1b] = 100;
    puVar2[0x1a] = 100;
    *(undefined4 *)((int)puVar2 + 0x7e) = 1;
    *(undefined2 *)((int)puVar2 + 0x9e) = 0;
    *(undefined1 *)((int)puVar2 + 0x9e) = DAT_007cc854;
    *(undefined4 *)((int)puVar2 + 0x82) = 0xffffffff;
    *(undefined4 *)((int)puVar2 + 0x96) = 0;
    puVar2[0x28] = 1;
    puVar2[0x2b] = 0;
    puVar2[0x2a] = param_2;
    *(int *)(param_2 + 0xa4) = *(int *)(param_2 + 0xa4) + 1;
    local_8 = puVar2;
    FUN_00710790((int)puVar2);
    g_currentExceptionFrame = local_4c.previous;
    return puVar2;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0x1ef,0,errorCode,&DAT_007a4ccc,
                             s_ccFntTy__operator_new_for_Slave_F_007f01d0);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    puVar2 = (undefined4 *)(*pcVar1)();
    return puVar2;
  }
  if (local_8 != (undefined4 *)0x0) {
    FUN_006a5e90(local_8);
  }
  RaiseInternalException(errorCode,0,s_E__Ourlib_mfcfnt_cpp_007f0190,499);
  return (undefined4 *)0x0;
}

