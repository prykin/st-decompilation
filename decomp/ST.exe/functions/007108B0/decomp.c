
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::Save */

undefined4 * __thiscall ccFntTy::Save(ccFntTy *this,undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  ccFntTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (param_1 == (undefined4 *)0x0) {
      param_1 = Library::DKW::LIB::FUN_006aac10(0x48);
    }
    else {
      puVar4 = param_1;
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
    *param_1 = local_8->field_0044;
    param_1[1] = local_8->field_0048;
    param_1[2] = local_8->field_004C;
    param_1[3] = local_8->field_0050;
    param_1[4] = local_8->field_0054;
    param_1[5] = local_8->field_0058;
    param_1[6] = local_8->field_005C;
    param_1[7] = local_8->field_0060;
    param_1[8] = local_8->field_0064;
    param_1[9] = local_8->field_0068;
    param_1[10] = local_8->field_006C;
    *(undefined2 *)(param_1 + 0xb) = local_8->field_0070;
    *(undefined4 *)((int)param_1 + 0x2e) = local_8->field_0072;
    *(undefined4 *)((int)param_1 + 0x32) = local_8->field_0076;
    *(undefined4 *)((int)param_1 + 0x36) = local_8->field_007A;
    *(undefined4 *)((int)param_1 + 0x3a) = local_8->field_007E;
    *(undefined2 *)((int)param_1 + 0x3e) = *(undefined2 *)&local_8->field_0x9e;
    param_1[0x10] = local_8->field_0082;
    param_1[0x11] = local_8->field_0096;
    g_currentExceptionFrame = local_4c.previous;
    return param_1;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E__Ourlib_mfcfnt_cpp_007f0190,0x436,0,iVar2,&DAT_007a4ccc,
                             s_ccFntTy__Save_007f0214);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar1)();
    return puVar4;
  }
  RaiseInternalException(iVar2,0,s_E__Ourlib_mfcfnt_cpp_007f0190,0x438);
  return (undefined4 *)0x0;
}

