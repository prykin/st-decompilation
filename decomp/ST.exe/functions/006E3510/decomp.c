
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sapp.cpp
   AppClassTy::InitApp */

undefined4 __thiscall AppClassTy::InitApp(AppClassTy *this,undefined4 param_1)

{
  code *pcVar1;
  AppClassTy *pAVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  DWORD DVar6;
  uint *puVar7;
  undefined4 unaff_ESI;
  int iVar8;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  AppClassTy *local_c;
  int local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar2 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar8 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x44,0,iVar3,&DAT_007a4ccc,
                               s_AppClassTy__InitApp_Error___007ee770);
    if (iVar8 == 0) {
      RaiseInternalException(iVar3,0,s_E__Ourlib_Sapp_cpp_007ee78c,0x45);
      return 0;
    }
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  iVar3 = **(int **)(local_c + 8);
  iVar8 = 0;
  local_8 = 0;
  do {
    if (iVar3 == 0) {
      DVar6 = timeGetTime();
      *(DWORD *)(pAVar2 + 0x18) = DVar6;
      DAT_00856d70 = param_1;
      FUN_006e4290(0x1c,4,1,DAT_00856d6c);
      puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,0xc,5);
      *(uint **)(pAVar2 + 0x10) = puVar7;
      puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,8,10);
      *(uint **)(pAVar2 + 0xc) = puVar7;
      puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,0x20,10);
      *(uint **)(pAVar2 + 0x28) = puVar7;
      puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,0x20,10);
      *(uint **)(pAVar2 + 0x2c) = puVar7;
      g_currentExceptionFrame = local_50.previous;
      return 1;
    }
    iVar3 = 0;
    if (0 < iVar8) {
      do {
        iVar4 = *(int *)(iVar8 + *(int *)(pAVar2 + 8));
        if (*(int *)(*(int *)(pAVar2 + 8) + iVar3 * 8) == iVar4) {
          iVar4 = ReportDebugMessage(s_E__Ourlib_Sapp_cpp_007ee78c,0x32,0,0,
                                     s_Two_types_with_id_____lX_007ee7a0,iVar4);
          if (iVar4 != 0) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return uVar5;
          }
          RaiseInternalException(-0x96,DAT_007ed77c,s_E__Ourlib_Sapp_cpp_007ee78c,0x33);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_8);
    }
    iVar8 = iVar8 + 8;
    local_8 = local_8 + 1;
    iVar3 = *(int *)(*(int *)(pAVar2 + 8) + iVar8);
  } while( true );
}

