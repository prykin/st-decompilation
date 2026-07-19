
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintTxtBut */

void __thiscall
CPanelTy::PaintTxtBut
          (CPanelTy *this,byte param_1,int param_2,byte param_3,char *param_4,UINT param_5,
          undefined *param_6)

{
  code *pcVar1;
  uint uVar2;
  CPanelTy *pCVar3;
  int *errorCode;
  undefined4 uVar4;
  LPSTR pCVar5;
  uint *puVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  InternalExceptionFrame local_5c;
  int *local_18;
  CPanelTy *local_14;
  int local_10;
  int local_c;
  ushort *local_8;
  
  uVar2 = (uint)param_1;
  local_18 = *(int **)(param_2 + 0x18);
  local_8 = (ushort *)0x0;
  local_c = local_18[1];
  local_10 = *local_18 - *(int *)(&this->field_0x3c + uVar2 * 4);
  switch(uVar2) {
  case 1:
    iVar9 = this->field_0134;
    goto LAB_004f3d6a;
  default:
    if (this->field_0130 != 0) {
      local_c = local_c - *(int *)(&this->field_0x94 + uVar2 * 4);
      goto cf_common_join_004F3D83;
    }
    break;
  case 3:
    if (this->field_0134 != 0) {
      local_c = local_c - *(int *)(&this->field_0x94 + uVar2 * 4);
      goto cf_common_join_004F3D83;
    }
    break;
  case 5:
    if (this->field_0138 != 0) {
      local_c = local_c - *(int *)(&this->field_0x94 + uVar2 * 4);
      goto cf_common_join_004F3D83;
    }
    break;
  case 7:
    iVar9 = this->field_0138;
LAB_004f3d6a:
    if (iVar9 != 0) {
      local_c = local_c - *(int *)(&this->field_0x94 + uVar2 * 4);
      goto cf_common_join_004F3D83;
    }
    local_c = local_c - this->field_00C0;
  }
  local_c = local_c - DAT_00806734;
cf_common_join_004F3D83:
  if (param_6 != (undefined *)0x0) {
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_14 = this;
    errorCode = (int *)Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (errorCode == (int *)0x0) {
      iVar9 = 1;
      uVar4 = (*(code *)param_6)(param_2);
      pCVar5 = FUN_006f2c00(param_4,1,uVar4);
      local_8 = cMf32::RecGet(DAT_00806790,param_3,pCVar5,errorCode,iVar9);
      pCVar3 = local_14;
      uVar2 = (uint)param_1;
      thunk_FUN_00540760(*(undefined4 **)(&local_14->field_0x180 + uVar2 * 4),local_10,local_c,
                         param_3,(byte *)local_8);
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      ccFntTy::SetSurf(*(ccFntTy **)(DAT_00802a28 + 0x24),*(int *)(&pCVar3->field_0x180 + uVar2 * 4)
                       ,0,local_10,local_c,local_18[2],local_18[3]);
      iVar10 = -1;
      iVar8 = -1;
      uVar4 = (*(code *)param_6)(param_2);
      iVar7 = -1;
      iVar9 = -2;
      puVar6 = (uint *)FUN_006b0140(param_5,DAT_00807618);
      ccFntTy::WrTxt(*(ccFntTy **)(DAT_00802a28 + 0x24),puVar6,iVar9,iVar7,uVar4,iVar8,iVar10);
      if ((param_1 < 0xb) && (-1 < (int)*(uint *)(&pCVar3->field_0x148 + uVar2 * 4))) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(&pCVar3->field_0x148 + uVar2 * 4),0xffffffff,
                   *(uint *)(&pCVar3->field_0x3c + uVar2 * 4),
                   *(uint *)(&pCVar3->field_0x94 + uVar2 * 4));
      }
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x212,0,(int)errorCode,
                               &DAT_007a4ccc,s_CPanelTy__PaintTxtBut_007c1b68);
    if (iVar9 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException((int)errorCode,0,s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x212);
  }
  return;
}

