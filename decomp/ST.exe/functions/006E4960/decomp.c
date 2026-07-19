
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sapp.cpp
   AppClassTy::AddChildSystem */

int __thiscall
AppClassTy::AddChildSystem
          (AppClassTy *this,SystemClassTy *parentSystem,SystemClassTy *childSystem,
          int checkDuplicateId)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar7;
  InternalExceptionFrame local_78;
  STMessage local_34;
  undefined4 local_14;
  SystemClassTy *local_10;
  undefined4 local_c;
  AppClassTy *local_8;
  
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_78.previous;
    iVar7 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x244,0,iVar3,&DAT_007a4ccc,
                               s_AppClassTy__AddChildSystem_Error_007ee9c8);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    RaiseInternalException(iVar3,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x245);
    return iVar3;
  }
  if (checkDuplicateId != 0) {
    iVar3 = FUN_006e44e0(local_8,childSystem->systemId);
    if (iVar3 != 0) {
      iVar3 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x222,0,0,
                                 s_AppClassTy__AddSystem_Warning___T_007ee990,childSystem->systemId)
      ;
      if (iVar3 != 0) {
        pcVar2 = (code *)swi(3);
        iVar3 = (*pcVar2)();
        return iVar3;
      }
    }
  }
  iVar3 = FUN_006e45a0(local_8,parentSystem->systemId);
  if (iVar3 == 0) {
    iVar3 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x241,0,0,
                               s_AppClassTy__AddChildSystem_Warni_007ee9ec,parentSystem->systemId);
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
  }
  else {
    piVar4 = (int *)FUN_006e45a0(local_8,childSystem->systemId);
    if (piVar4 == (int *)0x0) {
      if (*(int *)(iVar3 + 8) == 0) {
        puVar6 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,0xc,5);
        *(uint **)(iVar3 + 8) = puVar6;
      }
      local_14 = 1;
      local_10 = childSystem;
      childSystem->parentSystem = parentSystem;
      local_c = 0;
      Library::DKW::TBL::FUN_006ae1c0(*(uint **)(iVar3 + 8),&local_14);
      local_34.unknown_0c = 0xf;
      local_34.id = 8;
      iVar3 = (*childSystem->vtable->SendMessage)(childSystem,&local_34);
      if (iVar3 != 0) {
        iVar7 = 0x23d;
LAB_006e4a7a:
        RaiseInternalException(iVar3,DAT_007ed77c,s_E__Ourlib_Sapp_cpp_007ee78c,iVar7);
        g_currentExceptionFrame = local_78.previous;
        return 0;
      }
    }
    else if (*piVar4 != 1) {
      *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 0;
      while( true ) {
        iVar7 = *(int *)(iVar3 + 8);
        uVar1 = *(uint *)(iVar7 + 4);
        if (uVar1 < *(uint *)(iVar7 + 0xc)) {
          puVar5 = (undefined4 *)(*(int *)(iVar7 + 8) * uVar1 + *(int *)(iVar7 + 0x1c));
          *(uint *)(iVar7 + 4) = uVar1 + 1;
        }
        else {
          puVar5 = (undefined4 *)0x0;
        }
        if (puVar5 == (undefined4 *)0x0) break;
        if (((SystemClassTy *)puVar5[1] == childSystem) && (*puVar5 = 1, puVar5[2] != 0)) {
          FUN_006e45c0((int)puVar5);
        }
      }
      local_34.unknown_0c = 0xf;
      local_34.id = 8;
      iVar3 = (*childSystem->vtable->SendMessage)(childSystem,&local_34);
      if (iVar3 != 0) {
        iVar7 = 0x231;
        goto LAB_006e4a7a;
      }
    }
  }
  g_currentExceptionFrame = local_78.previous;
  return 0;
}

