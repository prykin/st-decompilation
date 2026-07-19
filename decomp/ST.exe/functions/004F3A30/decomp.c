
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
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar7;
  int iVar8;
  int iVar9;
  InternalExceptionFrame local_5c;
  int *local_18;
  int local_14;
  CPanelTy *local_10;
  int local_c;
  ushort *local_8;
  
  uVar2 = (uint)param_1;
  local_18 = *(int **)(param_2 + 0x18);
  local_8 = (ushort *)0x0;
  local_14 = local_18[1];
  local_c = *local_18 - *(int *)(&this->field_0x3c + uVar2 * 4);
  switch(uVar2) {
  case 1:
    iVar4 = this->field_0134;
    goto LAB_004f3aaa;
  default:
    if (this->field_0130 != 0) {
      local_14 = local_14 - *(int *)(&this->field_0x94 + uVar2 * 4);
      goto LAB_004f3ac3;
    }
    break;
  case 3:
    if (this->field_0134 != 0) {
      local_14 = local_14 - *(int *)(&this->field_0x94 + uVar2 * 4);
      goto LAB_004f3ac3;
    }
    break;
  case 5:
    if (this->field_0138 != 0) {
      local_14 = local_14 - *(int *)(&this->field_0x94 + uVar2 * 4);
      goto LAB_004f3ac3;
    }
    break;
  case 7:
    iVar4 = this->field_0138;
LAB_004f3aaa:
    if (iVar4 != 0) {
      local_14 = local_14 - *(int *)(&this->field_0x94 + uVar2 * 4);
      goto LAB_004f3ac3;
    }
    local_14 = local_14 - this->field_00C0;
  }
  local_14 = local_14 - DAT_00806734;
LAB_004f3ac3:
  if (param_6 != (undefined *)0x0) {
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_10 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      local_8 = cMf32::RecGet(DAT_00806790,param_3,param_4,(int *)0x0,1);
      pCVar3 = local_10;
      iVar4 = local_14;
      uVar2 = (uint)param_1;
      thunk_FUN_00540760(*(undefined4 **)(&local_10->field_0x180 + uVar2 * 4),local_c,local_14,
                         param_3,(byte *)local_8);
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      ccFntTy::SetSurf(*(ccFntTy **)&pCVar3->field_0x1b8,*(int *)(&pCVar3->field_0x180 + uVar2 * 4),
                       0,local_c,iVar4,local_18[2],local_18[3]);
      iVar9 = -1;
      iVar8 = -1;
      uVar5 = (*(code *)param_6)(param_2);
      iVar7 = -1;
      iVar4 = -2;
      puVar6 = (uint *)FUN_006b0140(param_5,DAT_00807618);
      ccFntTy::WrTxt(*(ccFntTy **)&pCVar3->field_0x1b8,puVar6,iVar4,iVar7,uVar5,iVar8,iVar9);
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
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x1f8,0,iVar4,&DAT_007a4ccc,
                               s_CPanelTy__PaintTxtBut_007c1b68);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x1f8);
  }
  return;
}

