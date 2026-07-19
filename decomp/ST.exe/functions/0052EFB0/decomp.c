
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::PaintDblBut */

void __thiscall
OptPanelTy::PaintDblBut
          (OptPanelTy *this,int param_1,char *param_2,UINT param_3,undefined *param_4,
          undefined *param_5,int param_6)

{
  code *pcVar1;
  OptPanelTy *pOVar2;
  int iVar3;
  undefined4 uVar4;
  LPSTR pCVar5;
  uint *puVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  InternalExceptionFrame local_60;
  OptPanelTy *local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  ushort *local_8;
  
  local_10 = *(int **)(param_1 + 0x18);
  local_c = *(int *)(param_1 + 0x14);
  local_8 = (ushort *)0x0;
  if (param_6 == 0) {
    local_18 = *local_10;
  }
  else {
    local_18 = *(int *)(local_c + 0xc);
  }
  local_18 = local_18 - this->field_003C;
  if (this->field_005C == 0) {
    if (param_6 == 0) {
      local_14 = this->field_0048 + local_10[1];
    }
    else {
      local_14 = this->field_0048 + *(int *)(local_c + 0x10);
    }
  }
  else {
    if (param_6 == 0) {
      local_14 = local_10[1];
    }
    else {
      local_14 = *(int *)(local_c + 0x10);
    }
    local_14 = local_14 - this->field_0044;
  }
  if ((param_4 != (undefined *)0x0) && (param_5 != (undefined *)0x0)) {
    local_60.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_60;
    local_1c = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      local_8 = cMf32::RecGet(DAT_00806790,1,param_2,(int *)0x0,1);
      iVar8 = local_14;
      iVar3 = local_18;
      pOVar2 = local_1c;
      thunk_FUN_00540760(*(undefined4 **)&local_1c->field_0x68,local_18,local_14,'\x01',
                         (byte *)local_8);
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      iVar10 = 1;
      piVar9 = (int *)0x0;
      uVar4 = (*(code *)param_4)(param_1);
      iVar7 = 1;
      pCVar5 = thunk_FUN_00571240(s_BUT_SWITCH_007c71d0,0);
      pCVar5 = FUN_006f2c00(pCVar5,iVar7,uVar4);
      local_8 = cMf32::RecGet(DAT_00806790,1,pCVar5,piVar9,iVar10);
      if (param_6 == 0) {
        iVar7 = local_10[3];
      }
      else {
        iVar7 = *(int *)(local_c + 0x18);
      }
      thunk_FUN_00540760(*(undefined4 **)&pOVar2->field_0x68,iVar3 + 5,
                         (iVar7 - *(int *)(local_8 + 4)) / 2 + 1 + iVar8,'\x01',(byte *)local_8);
      iVar3 = *(int *)(local_8 + 2);
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      if (param_6 == 0) {
        iVar7 = local_10[3];
        iVar10 = local_10[2];
      }
      else {
        iVar7 = *(int *)(local_c + 0x18);
        iVar10 = *(int *)(local_c + 0x14);
      }
      ccFntTy::SetSurf(*(ccFntTy **)&pOVar2->field_0x180,*(int *)&pOVar2->field_0x68,0,
                       iVar3 + 10 + local_18,iVar8,(iVar10 - iVar3) + -10,iVar7);
      iVar10 = -1;
      iVar7 = -1;
      uVar4 = (*(code *)param_5)(param_1);
      iVar8 = -1;
      iVar3 = 0;
      puVar6 = (uint *)FUN_006b0140(param_3,DAT_00807618);
      ccFntTy::WrTxt(*(ccFntTy **)&pOVar2->field_0x180,puVar6,iVar3,iVar8,uVar4,iVar7,iVar10);
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,*(uint *)&pOVar2->field_0x60,0xffffffff,pOVar2->field_003C,
                 pOVar2->field_0044);
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

