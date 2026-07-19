
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sapp.cpp
   AppClassTy::AddSystem */

int __thiscall AppClassTy::AddSystem(AppClassTy *this,int *param_1,int param_2)

{
  code *pcVar1;
  AppClassTy *this_00;
  int iVar2;
  int *piVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar4;
  InternalExceptionFrame local_78;
  undefined1 local_34 [12];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_14;
  int *local_10;
  undefined4 local_c;
  AppClassTy *local_8;
  
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_78.previous;
    iVar4 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x212,0,iVar2,&DAT_007a4ccc,
                               s_AppClassTy__AddSystem_Error___007ee970);
    if (iVar4 == 0) {
      RaiseInternalException(iVar2,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x213);
      return iVar2;
    }
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if (((param_2 != 0) && (iVar2 = FUN_006e44e0(local_8,param_1[5]), iVar2 != 0)) &&
     (iVar2 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x1f9,0,0,
                                 s_AppClassTy__AddSystem_Warning___T_007ee990,param_1[5]),
     iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  piVar3 = (int *)FUN_006e45a0(this_00,param_1[5]);
  if (piVar3 == (int *)0x0) {
    param_1[7] = 0;
    local_14 = 1;
    local_10 = param_1;
    local_c = 0;
    Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_0010,&local_14);
    local_28 = 0xf;
    local_24 = 8;
    iVar2 = (**(code **)(*param_1 + 0x18))(local_34);
    if (iVar2 == 0) {
      g_currentExceptionFrame = local_78.previous;
      return 0;
    }
    iVar4 = 0x20f;
  }
  else {
    if (*piVar3 == 1) {
      g_currentExceptionFrame = local_78.previous;
      return 0;
    }
    *piVar3 = 1;
    local_28 = 0xf;
    local_24 = 8;
    iVar2 = (**(code **)(*param_1 + 0x18))(local_34);
    if (iVar2 == 0) {
      g_currentExceptionFrame = local_78.previous;
      return 0;
    }
    iVar4 = 0x204;
  }
  RaiseInternalException(iVar2,DAT_007ed77c,s_E__Ourlib_Sapp_cpp_007ee78c,iVar4);
  g_currentExceptionFrame = local_78.previous;
  return 0;
}

