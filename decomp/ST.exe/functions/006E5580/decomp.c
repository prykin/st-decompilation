
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sapp.cpp
   SystemClassTy::CreateObject */

int __thiscall
SystemClassTy::CreateObject
          (SystemClassTy *this,int param_1,undefined4 *param_2,int *param_3,undefined4 param_4,
          undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar5;
  InternalExceptionFrame local_6c;
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  SystemClassTy *local_8;
  
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_8 = this;
  iVar2 = __setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)FUN_006e54b0(param_1,param_2,param_3,param_5);
    puVar5 = local_28;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_18 = 2;
    local_14 = param_4;
    iVar2 = (**(code **)*puVar3)(local_28);
    if (iVar2 == 0xffff) {
      RaiseInternalException(0xffff,DAT_007ed77c,s_E__Ourlib_Sapp_cpp_007ee78c,0x3c1);
    }
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_6c.previous;
  iVar4 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x3c3,0,iVar2,&DAT_007a4ccc,
                             s_SystemClassTy__CreateObject_007eeb04);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  RaiseInternalException(iVar2,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x3c4);
  return iVar2;
}

