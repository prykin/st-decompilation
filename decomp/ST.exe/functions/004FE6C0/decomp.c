
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintEnergy */

void __thiscall CPanelTy::PaintEnergy(CPanelTy *this,int param_1)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar10;
  InternalExceptionFrame local_54;
  CPanelTy *local_10;
  uint local_c;
  int local_8;
  
  if (param_1 == 0) {
    local_8 = this->field_0194;
    bVar7 = this->field_0C6D;
  }
  else {
    local_8 = this->field_018C;
    bVar7 = this->field_0B7F;
  }
  local_c = CONCAT31(local_c._1_3_,bVar7);
  if (bVar7 < 0x65) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_10 = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pCVar2 = local_10;
    if (iVar3 != 0) {
      g_currentExceptionFrame = local_54.previous;
      iVar6 = ReportDebugMessage(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x4a,0,iVar3,
                                 &DAT_007a4ccc,s_CPanelTy__PaintEnergy_007c2424);
      if (iVar6 == 0) {
        RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x4a);
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (param_1 == 0) {
      iVar3 = FUN_0070b3a0(local_10->field_02DA,2);
      iVar6 = local_8;
      FUN_006b5440(local_8,0,199,6,iVar3,0,0xff);
      iVar4 = FUN_0070b3a0(pCVar2->field_02DA,3);
      iVar3 = (int)((local_c & 0xff) * *(int *)(iVar4 + 8)) / 100;
      iVar8 = *(int *)(iVar4 + 8) - iVar3;
      Library::DKW::WGR::FUN_006b5110
                (iVar6,0,199,iVar8 + 6,iVar4,0,0,iVar8,*(int *)(iVar4 + 4),iVar3,0xff);
      uVar5 = pCVar2->field_015C;
      if ((int)uVar5 < 0) {
        g_currentExceptionFrame = local_54.previous;
        return;
      }
      uVar10 = pCVar2->field_00A8;
      uVar9 = pCVar2->field_0050;
    }
    else {
      iVar3 = FUN_0070b3a0(local_10->field_02DA,0);
      iVar6 = local_8;
      FUN_006b5440(local_8,0,2,6,iVar3,0,0xff);
      iVar4 = FUN_0070b3a0(pCVar2->field_02DA,1);
      iVar3 = (int)((local_c & 0xff) * *(int *)(iVar4 + 8)) / 100;
      iVar8 = *(int *)(iVar4 + 8) - iVar3;
      Library::DKW::WGR::FUN_006b5110
                (iVar6,0,2,iVar8 + 6,iVar4,0,0,iVar8,*(int *)(iVar4 + 4),iVar3,0xff);
      uVar5 = pCVar2->field_0154;
      if ((int)uVar5 < 0) {
        g_currentExceptionFrame = local_54.previous;
        return;
      }
      uVar10 = pCVar2->field_00A0;
      uVar9 = pCVar2->field_0048;
    }
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,uVar5,0xffffffff,uVar9,uVar10);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  return;
}

