#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintTab

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004FB060 -> 004F42A0 @ 004FD148 | 004FB060 -> 004F42A0 @ 004FD176

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004FB060 -> 004F42A0 @ 004FD148 | 004FB060 -> 004F42A0 @ 004FD176

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
CPanelTy::PaintTab(CPanelTy *this,byte param_1,STMessage *param_2,byte param_3,char *text,
                  char *param_5,callback_004F42A0_p6 *param_6)

{
  uint uVar2;
  CPanelTy *pCVar3;
  int iVar4;
  undefined4 uVar4;
  LPSTR text_00;
  int iVar5;
  int iVar6;
  InternalExceptionFrame local_58;
  CPanelTy *local_14;
  int local_10;
  int local_c;
  ushort *local_8;

  uVar2 = (uint)param_1;
  local_8 = nullptr;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_c = *(int *)((param_2->arg0).u32 + 0x10);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_10 = *(int *)((param_2->arg0).u32 + 0xc) - (&this->field_003C)[uVar2];
  switch(uVar2) {
  case 1:
    iVar6 = this->field_0134;
    goto LAB_004f4318;
  default:
    if (this->field_0130 != 0) {
      local_c = local_c - (&this->field_0094)[uVar2];
      goto cf_common_join_004F4331;
    }
    break;
  case 3:
    if (this->field_0134 != 0) {
      local_c = local_c - (&this->field_0094)[uVar2];
      goto cf_common_join_004F4331;
    }
    break;
  case 5:
    if (this->field_0138 != 0) {
      local_c = local_c - (&this->field_0094)[uVar2];
      goto cf_common_join_004F4331;
    }
    break;
  case 7:
    iVar6 = this->field_0138;
LAB_004f4318:
    if (iVar6 != 0) {
      local_c = local_c - (&this->field_0094)[uVar2];
      goto cf_common_join_004F4331;
    }
    local_c = local_c - this->field_00C0;
  }
  local_c = local_c - DAT_00806734;
cf_common_join_004F4331:
  if (param_6 != nullptr) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
    if (iVar4 == 0) {
      /* ST_CALLSITE[004F436D]: CALL dword ptr [EBP + 0x1c] */
      uVar4 = (*param_6)((AnonShape_0052A7B0_DD603BF4 *)param_2);
      text_00 = FUN_006f2c00(text,2,uVar4);
      local_8 = cMf32::RecGet(g_cMf32_00806790,param_3,text_00,nullptr,1);
      pCVar3 = local_14;
      uVar2 = (uint)param_1;
      /* ST_CALLSITE[004F43B6]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)local_14->field_0148[uVar2 + 0xe],local_10,local_c,
             param_3,(byte *)local_8);
      cMf32::RecMemFree(g_cMf32_00806790,(uint *)&local_8);
      if ((*(int *)((param_2->arg0).u32 + 4) == 3) && (param_5 != nullptr)) {
        local_8 = cMf32::RecGet(g_cMf32_00806790,6,param_5,nullptr,1);
        /* ST_CALLSITE[004F4405]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)pCVar3->field_0148[uVar2 + 0xe],local_10,local_c,
               '\x06',(byte *)local_8);
        cMf32::RecMemFree(g_cMf32_00806790,(uint *)&local_8);
      }
      if ((param_1 < 0xb) && (-1 < (int)pCVar3->field_0148[uVar2])) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,(uint)pCVar3->field_0148[uVar2],0xffffffff,
                   (&pCVar3->field_003C)[uVar2],(&pCVar3->field_0094)[uVar2]);
      }
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\cp_sup.cpp",0x256,0,iVar4,"%s",
                               "CPanelTy::PaintTab");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\cp_sup.cpp",0x256);
  }
  return;
}

