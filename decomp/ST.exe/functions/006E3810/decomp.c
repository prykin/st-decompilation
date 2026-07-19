
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sapp.cpp
   AppClassTy::CreateObject */

int __thiscall AppClassTy::CreateObject(AppClassTy *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  AppClassTy *pAVar4;
  int iVar5;
  int *piVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar7;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  int local_c;
  AppClassTy *local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  local_c = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar4 = local_8;
  if (local_c != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar5 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x8c,0,local_c,&DAT_007a4ccc,
                               s_AppClassTy__CreateObject_Error___007ee7d8);
    if (iVar5 != 0) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    RaiseInternalException(-2,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x8d);
    return 0;
  }
  piVar2 = *(int **)(local_8 + 8);
  if (piVar2 == (int *)0x0) {
    RaiseInternalException(-4,DAT_007ed77c,s_E__Ourlib_Sapp_cpp_007ee78c,0x7e);
  }
  else {
    iVar7 = 0;
    iVar5 = *piVar2;
    piVar6 = piVar2;
    while (iVar5 != 0) {
      if (iVar5 == param_1) {
        local_c = (*(code *)piVar2[iVar7 * 2 + 1])();
        break;
      }
      piVar1 = piVar6 + 2;
      piVar6 = piVar6 + 2;
      iVar7 = iVar7 + 1;
      iVar5 = *piVar1;
    }
  }
  if (local_c == 0) {
    iVar5 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x80,0,0,
                               s_Not_found_function_for_creating_o_007ee7fc,param_1,param_1);
    if (iVar5 != 0) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    RaiseInternalException(-0x34,DAT_007ed77c,s_E__Ourlib_Sapp_cpp_007ee78c,0x81);
  }
  if (*(int *)(local_c + 8) == 0) {
    local_10 = param_2;
    *(int *)(local_c + 4) = param_1;
    *(undefined4 *)(local_c + 8) = *(undefined4 *)(pAVar4 + 4);
    *(int *)(pAVar4 + 4) = *(int *)(pAVar4 + 4) + 1;
    *(AppClassTy **)(local_c + 0x10) = pAVar4;
  }
  Library::DKW::TBL::FUN_006ae1c0(*(uint **)(pAVar4 + 0xc),&local_10);
  g_currentExceptionFrame = local_54.previous;
  return local_c;
}

