
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintLBut */

void __thiscall
CPanelTy::PaintLBut(CPanelTy *this,byte param_1,int param_2,byte param_3,char *param_4,char *param_5
                   ,undefined *param_6)

{
  code *pcVar1;
  uint uVar2;
  CPanelTy *pCVar3;
  int iVar4;
  undefined4 uVar5;
  LPSTR pCVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  CPanelTy *local_14;
  int local_10;
  int local_c;
  ushort *local_8;
  
  uVar2 = (uint)param_1;
  local_8 = (ushort *)0x0;
  local_c = (*(int **)(param_2 + 0x18))[1];
  local_10 = **(int **)(param_2 + 0x18) - *(int *)(&this->field_0x3c + uVar2 * 4);
  switch(uVar2) {
  case 1:
    iVar4 = this->field_0134;
    goto LAB_004f4057;
  default:
    if (this->field_0130 != 0) {
      local_c = local_c - *(int *)(&this->field_0x94 + uVar2 * 4);
      goto cf_common_join_004F4070;
    }
    break;
  case 3:
    if (this->field_0134 != 0) {
      local_c = local_c - *(int *)(&this->field_0x94 + uVar2 * 4);
      goto cf_common_join_004F4070;
    }
    break;
  case 5:
    if (this->field_0138 != 0) {
      local_c = local_c - *(int *)(&this->field_0x94 + uVar2 * 4);
      goto cf_common_join_004F4070;
    }
    break;
  case 7:
    iVar4 = this->field_0138;
LAB_004f4057:
    if (iVar4 != 0) {
      local_c = local_c - *(int *)(&this->field_0x94 + uVar2 * 4);
      goto cf_common_join_004F4070;
    }
    local_c = local_c - this->field_00C0;
  }
  local_c = local_c - DAT_00806734;
cf_common_join_004F4070:
  if (param_6 != (undefined *)0x0) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar4 == 0) {
      uVar5 = (*(code *)param_6)(param_2);
      pCVar6 = FUN_006f2c00(param_4,1,uVar5);
      local_8 = cMf32::RecGet(DAT_00806790,param_3,pCVar6,(int *)0x0,1);
      pCVar3 = local_14;
      uVar2 = (uint)param_1;
      thunk_FUN_00540760(*(undefined4 **)(&local_14->field_0x180 + uVar2 * 4),local_10,local_c,
                         param_3,(byte *)local_8);
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      if (*(int *)(param_2 + 0x14) == 3) {
        local_8 = cMf32::RecGet(DAT_00806790,6,param_5,(int *)0x0,1);
        thunk_FUN_00540760(*(undefined4 **)(&pCVar3->field_0x180 + uVar2 * 4),local_10,local_c,
                           '\x06',(byte *)local_8);
        cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      }
      if ((param_1 < 0xb) && (-1 < (int)*(uint *)(&pCVar3->field_0x148 + uVar2 * 4))) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)(&pCVar3->field_0x148 + uVar2 * 4),0xffffffff,
                   *(uint *)(&pCVar3->field_0x3c + uVar2 * 4),
                   *(uint *)(&pCVar3->field_0x94 + uVar2 * 4));
      }
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x235,0,iVar4,&DAT_007a4ccc,
                               s_CPanelTy__PaintLBut_007c1b84);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x235);
  }
  return;
}

