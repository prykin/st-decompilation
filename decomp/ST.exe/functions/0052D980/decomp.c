
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::ChangeState */

void __thiscall PopUpTy::ChangeState(PopUpTy *this)

{
  code *pcVar1;
  PopUpTy *pPVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_ESI;
  PopUpTy *pPVar8;
  void *unaff_EDI;
  InternalExceptionFrame local_5c;
  PopUpTy *local_18;
  int local_14;
  int local_10;
  uint local_c;
  PopUpTy local_5;
  
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pPVar2 = local_18;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_mpopup_cpp_007c6f84,0x95,0,iVar3,&DAT_007a4ccc,
                               s_PopUpTy__ChangeState_007c7010);
    if (iVar6 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Andrey_mpopup_cpp_007c6f84,0x95);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_10 = -0x18 - (int)local_18;
  local_5 = (PopUpTy)0x0;
  local_14 = 0;
  local_c = 0x1e;
  pPVar8 = local_18 + 0x18;
  do {
    iVar3 = local_14;
    if ((DAT_00807342 == 0) || ((byte)pPVar2[0x9c] <= (byte)local_5)) {
LAB_0052da81:
      *(uint *)(pPVar8 + 0x3c) = 0;
      FUN_006b2800((int)DAT_008075a8,*(uint *)pPVar8,0,0x13);
      FUN_006b3af0(DAT_008075a8,*(uint *)pPVar8);
    }
    else {
      iVar6 = *(int *)(pPVar2 + 0x98);
      if (local_14 < *(int *)(iVar6 + 8)) {
        iVar7 = *(int *)(pPVar8 + *(int *)(iVar6 + 0x14) + local_10);
      }
      else {
        iVar7 = 0;
      }
      if (iVar7 == 0) goto LAB_0052da81;
      if (local_14 < *(int *)(iVar6 + 8)) {
        puVar4 = *(uint **)(pPVar8 + *(int *)(iVar6 + 0x14) + local_10);
      }
      else {
        puVar4 = (uint *)0x0;
      }
      uVar5 = FUN_00711110(*(void **)(pPVar2 + 0x94),puVar4);
      if ((int)*(uint *)(*(int *)(pPVar2 + 0x90) + 4) <= (int)uVar5) {
        uVar5 = *(uint *)(*(int *)(pPVar2 + 0x90) + 4);
      }
      *(uint *)(pPVar8 + 0x3c) = uVar5;
      FUN_006b2800((int)DAT_008075a8,*(uint *)pPVar8,uVar5,0x13);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*(uint *)pPVar8,0xffffffff,0xd,local_c);
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)pPVar8);
    }
    local_5 = (PopUpTy)((char)local_5 + 1);
    local_14 = iVar3 + 1;
    pPVar8 = pPVar8 + 4;
    local_c = local_c + 0x13;
    if (0xe < (byte)local_5) {
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
  } while( true );
}

