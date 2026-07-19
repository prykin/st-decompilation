
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::ChangeState */

void __thiscall PopUpTy::ChangeState(PopUpTy *this)

{
  uint uVar1;
  code *pcVar2;
  PopUpTy *pPVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_ESI;
  uint *puVar9;
  void *unaff_EDI;
  InternalExceptionFrame local_5c;
  PopUpTy *local_18;
  int local_14;
  int local_10;
  uint local_c;
  byte local_5;
  
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pPVar3 = local_18;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_mpopup_cpp_007c6f84,0x95,0,iVar4,&DAT_007a4ccc,
                               s_PopUpTy__ChangeState_007c7010);
    if (iVar7 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Andrey_mpopup_cpp_007c6f84,0x95);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_10 = -0x18 - (int)local_18;
  local_5 = 0;
  local_14 = 0;
  local_c = 0x1e;
  puVar9 = &local_18->field_0018;
  do {
    iVar4 = local_14;
    if ((DAT_00807342 == 0) || ((byte)pPVar3->field_009C <= local_5)) {
LAB_0052da81:
      puVar9[0xf] = 0;
      FUN_006b2800((int)DAT_008075a8,*puVar9,0,0x13);
      FUN_006b3af0(DAT_008075a8,*puVar9);
    }
    else {
      iVar7 = pPVar3->field_0098;
      if (local_14 < *(int *)(iVar7 + 8)) {
        iVar8 = *(int *)(*(int *)(iVar7 + 0x14) + local_10 + (int)puVar9);
      }
      else {
        iVar8 = 0;
      }
      if (iVar8 == 0) goto LAB_0052da81;
      if (local_14 < *(int *)(iVar7 + 8)) {
        puVar5 = *(uint **)(*(int *)(iVar7 + 0x14) + local_10 + (int)puVar9);
      }
      else {
        puVar5 = (uint *)0x0;
      }
      uVar6 = FUN_00711110(pPVar3->field_0094,puVar5);
      uVar1 = *(uint *)(pPVar3->field_0090 + 4);
      if ((int)uVar1 <= (int)uVar6) {
        uVar6 = uVar1;
      }
      puVar9[0xf] = uVar6;
      FUN_006b2800((int)DAT_008075a8,*puVar9,uVar6,0x13);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar9,0xffffffff,0xd,local_c);
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*puVar9);
    }
    local_5 = local_5 + 1;
    local_14 = iVar4 + 1;
    puVar9 = puVar9 + 1;
    local_c = local_c + 0x13;
    if (0xe < local_5) {
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
  } while( true );
}

