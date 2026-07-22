#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintTxtBut

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004FB060 -> 004F3CF0 @ 004FCB08 | 004FB060 -> 004F3CF0 @ 004FCB36 */

void __thiscall
CPanelTy::PaintTxtBut
          (CPanelTy *this,byte param_1,STMessage *param_2,byte param_3,char *param_4,UINT param_5,
          undefined *param_6)

{
  code *pcVar1;
  uint uVar2;
  CPanelTy *pCVar3;
  int *errorCode;
  undefined4 uVar4;
  LPSTR text;
  uint uVar5;
  uint *resourceString;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  InternalExceptionFrame local_5c;
  int *local_18;
  CPanelTy *local_14;
  int local_10;
  uint local_c;
  ushort *local_8;

  uVar2 = (uint)param_1;
  local_18 = (param_2->arg1).ptr;
  local_8 = (ushort *)0x0;
  iVar8 = local_18[1];
  local_10 = *local_18 - (&this->field_003C)[uVar2];
  switch(uVar2) {
  case 1:
    iVar6 = this->field_0134;
    goto LAB_004f3d6a;
  default:
    if (this->field_0130 != 0) {
      local_c = iVar8 - (&this->field_0094)[uVar2];
      goto cf_common_join_004F3D83;
    }
    break;
  case 3:
    if (this->field_0134 != 0) {
      local_c = iVar8 - (&this->field_0094)[uVar2];
      goto cf_common_join_004F3D83;
    }
    break;
  case 5:
    if (this->field_0138 != 0) {
      local_c = iVar8 - (&this->field_0094)[uVar2];
      goto cf_common_join_004F3D83;
    }
    break;
  case 7:
    iVar6 = this->field_0138;
LAB_004f3d6a:
    if (iVar6 != 0) {
      local_c = iVar8 - (&this->field_0094)[uVar2];
      goto cf_common_join_004F3D83;
    }
    iVar8 = iVar8 - this->field_00C0;
  }
  local_c = iVar8 - DAT_00806734;
cf_common_join_004F3D83:
  if (param_6 != (undefined *)0x0) {
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_14 = this;
    errorCode = (int *)Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
    if (errorCode == (int *)0x0) {
      iVar8 = 1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar4 = (*(code *)param_6)(param_2);
      text = FUN_006f2c00(param_4,1,uVar4);
      local_8 = cMf32::RecGet(DAT_00806790,param_3,text,errorCode,iVar8);
      pCVar3 = local_14;
      uVar2 = (uint)param_1;
      DibPut((AnonShape_006B5B10_E0D06CF1 *)(&local_14->field_0180)[uVar2],local_10,local_c,param_3,
             (byte *)local_8);
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_8);
      ccFntTy::SetSurf(*(ccFntTy **)&PTR_00802a28->field_0x24,(&pCVar3->field_0180)[uVar2],0,
                       local_10,local_c,local_18[2],local_18[3]);
      iVar9 = -1;
      iVar7 = -1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar5 = (*(code *)param_6)(param_2);
      iVar6 = -1;
      iVar8 = -2;
      resourceString = (uint *)LoadResourceString(param_5,g_module_00807618);
      ccFntTy::WrTxt(*(ccFntTy **)&PTR_00802a28->field_0x24,resourceString,iVar8,iVar6,uVar5,iVar7,
                     iVar9);
      if ((param_1 < 0xb) && (-1 < (&pCVar3->field_0148)[uVar2])) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)PTR_008075a8,(&pCVar3->field_0148)[uVar2],0xffffffff,
                   (&pCVar3->field_003C)[uVar2],(&pCVar3->field_0094)[uVar2]);
      }
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Andrey\\cp_sup.cpp",0x212,0,(int)errorCode,
                               "%s","CPanelTy::PaintTxtBut");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException((int)errorCode,0,"E:\\__titans\\Andrey\\cp_sup.cpp",0x212);
  }
  return;
}

