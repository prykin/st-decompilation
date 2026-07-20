
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::PaintDblBut */

void __thiscall
OptPanelTy::PaintDblBut
          (OptPanelTy *this,AnonShape_0052EFB0_CC661192 *param_1,char *param_2,UINT param_3,
          undefined *param_4,undefined *param_5,int param_6)

{
  code *pcVar1;
  OptPanelTy *pOVar2;
  int iVar3;
  undefined4 uVar4;
  LPSTR pCVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  InternalExceptionFrame local_60;
  OptPanelTy *local_1c;
  int local_18;
  uint local_14;
  AnonNested_0052EFB0_0018_CB007E0D *local_10;
  AnonShape_0052EFB0_8161B92D *local_c;
  ushort *local_8;
  
  local_10 = param_1->field_0018;
  local_c = param_1->field_0014;
  local_8 = (ushort *)0x0;
  if (param_6 == 0) {
    local_18 = local_10->field_0000;
  }
  else {
    local_18 = local_c->field_000C;
  }
  local_18 = local_18 - this->field_003C;
  if (this->field_005C == 0) {
    if (param_6 == 0) {
      local_14 = this->field_0048 + local_10->field_0004;
    }
    else {
      local_14 = this->field_0048 + local_c->field_0010;
    }
  }
  else {
    if (param_6 == 0) {
      iVar3 = local_10->field_0004;
    }
    else {
      iVar3 = local_c->field_0010;
    }
    local_14 = iVar3 - this->field_0044;
  }
  if ((param_4 != (undefined *)0x0) && (param_5 != (undefined *)0x0)) {
    local_60.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_60;
    local_1c = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      local_8 = cMf32::RecGet(DAT_00806790,1,param_2,(int *)0x0,1);
      uVar6 = local_14;
      iVar3 = local_18;
      pOVar2 = local_1c;
      DibPut((AnonShape_006B84D0_7C7D97C6 *)local_1c->field_0068,local_18,local_14,'\x01',
             (byte *)local_8);
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      iVar10 = 1;
      piVar9 = (int *)0x0;
      uVar4 = (*(code *)param_4)(param_1);
      iVar8 = 1;
      pCVar5 = thunk_FUN_00571240(s_BUT_SWITCH_007c71d0,0);
      pCVar5 = FUN_006f2c00(pCVar5,iVar8,uVar4);
      local_8 = cMf32::RecGet(DAT_00806790,1,pCVar5,piVar9,iVar10);
      if (param_6 == 0) {
        iVar8 = local_10->field_000C;
      }
      else {
        iVar8 = local_c->field_0018;
      }
      DibPut((AnonShape_006B84D0_7C7D97C6 *)pOVar2->field_0068,iVar3 + 5,
             (iVar8 - *(int *)(local_8 + 4)) / 2 + 1 + uVar6,'\x01',(byte *)local_8);
      iVar3 = *(int *)(local_8 + 2);
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      if (param_6 == 0) {
        iVar8 = local_10->field_000C;
        iVar10 = local_10->field_0008;
      }
      else {
        iVar8 = local_c->field_0018;
        iVar10 = local_c->field_0014;
      }
      ccFntTy::SetSurf(pOVar2->field_0180,pOVar2->field_0068,0,iVar3 + 10 + local_18,uVar6,
                       (iVar10 - iVar3) + -10,iVar8);
      iVar11 = -1;
      iVar10 = -1;
      uVar6 = (*(code *)param_5)(param_1);
      iVar8 = -1;
      iVar3 = 0;
      puVar7 = (uint *)FUN_006b0140(param_3,HINSTANCE_00807618);
      ccFntTy::WrTxt(pOVar2->field_0180,puVar7,iVar3,iVar8,uVar6,iVar10,iVar11);
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,pOVar2->field_0060,0xffffffff,pOVar2->field_003C,pOVar2->field_0044);
      g_currentExceptionFrame = local_60.previous;
      return;
    }
    g_currentExceptionFrame = local_60.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0xca,0,iVar3,&DAT_007a4ccc
                               ,s_OptPanelTy__PaintDblBut_007c71b4);
    if (iVar8 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0xca);
  }
  return;
}

