#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintTxtBut

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004FB060 -> 004F3CF0 @ 004FCB08 | 004FB060 -> 004F3CF0 @ 004FCB36

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
CPanelTy::PaintTxtBut
          (CPanelTy *this,byte param_1,STMessage *param_2,byte param_3,char *param_4,UINT param_5,
          callback_004F3CF0_p6 *param_6)

{
  uint uVar2;
  CPanelTy *pCVar3;
  int *errorCode;
  uint uVar4;
  LPSTR text;
  uint uVar5;
  ccFntTy *resourceString;
  int iVar8;
  int iVar6;
  int iVar7;
  int iVar9;
  int iVar10;
  InternalExceptionFrame local_5c;
  int *local_18;
  CPanelTy *local_14;
  int local_10;
  uint local_c;
  RecoveredRecordView_006B84D0_87AF9D9B *local_8;

  uVar2 = (uint)param_1;
  local_18 = (param_2->arg1).ptr;
  local_8 = nullptr;
  iVar9 = local_18[1];
  local_10 = *local_18 - (&this->field_003C)[uVar2];
  switch(uVar2) {
  case 1:
    iVar6 = this->field_0134;
    goto LAB_004f3d6a;
  default:
    if (this->field_0130 != 0) {
      local_c = iVar9 - (&this->field_0094)[uVar2];
      goto cf_common_join_004F3D83;
    }
    break;
  case 3:
    if (this->field_0134 != 0) {
      local_c = iVar9 - (&this->field_0094)[uVar2];
      goto cf_common_join_004F3D83;
    }
    break;
  case 5:
    if (this->field_0138 != 0) {
      local_c = iVar9 - (&this->field_0094)[uVar2];
      goto cf_common_join_004F3D83;
    }
    break;
  case 7:
    iVar6 = this->field_0138;
LAB_004f3d6a:
    if (iVar6 != 0) {
      local_c = iVar9 - (&this->field_0094)[uVar2];
      goto cf_common_join_004F3D83;
    }
    iVar9 = iVar9 - this->field_00C0;
  }
  local_c = iVar9 - DAT_00806734;
cf_common_join_004F3D83:
  if (param_6 != nullptr) {
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_14 = this;

    errorCode = STPointerBoundaryCast<int *>(Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0));
    if (errorCode == nullptr) {
      iVar9 = 1;
      /* ST_CALLSITE[004F3DC2]: CALL dword ptr [EBP + 0x1c] */
      uVar4 = (*param_6)((RecoveredRecord_00529FE0_85E582CB *)param_2);
      text = FUN_006f2c00(param_4,1,uVar4);
      /* ST_CALLSITE[004F3DDF]: CALL 0x006f1ce0; direct=006F1CE0 cMf32::RecGet; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__thiscall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/cMf32;/byte;pointer:/char;pointer:/int;/int */
      local_8 = cMf32::RecGet(g_cMf32_00806790,param_3,text,errorCode,iVar9);
      pCVar3 = local_14;
      uVar2 = (uint)param_1;
      /* ST_CALLSITE[004F3E08]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)local_14->field_0148[uVar2 + 0xe],local_10,local_c,
             param_3,local_8);
      cMf32::RecMemFree(g_cMf32_00806790,(uint *)&local_8);

      ccFntTy::SetSurf((ccFntTy *)g_interSystem_00802A28->field_0024,
                       (int)pCVar3->field_0148[uVar2 + 0xe],0,local_10,local_c,local_18[2],
                       local_18[3]);
      iVar10 = -1;
      iVar7 = -1;
      /* ST_CALLSITE[004F3E4F]: CALL dword ptr [EBP + 0x1c] */
      uVar5 = (*param_6)((RecoveredRecord_00529FE0_85E582CB *)param_2);
      iVar6 = -1;
      iVar9 = -2;
      /* ST_CALLSITE[004F3E65]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__stdcall;pointer:/ccFntTy;/WinDef.h/UINT;/WinDef.h/HINSTANCE */
      resourceString = LoadResourceString(param_5,g_hINSTANCE_00807618);

      ccFntTy::WrTxt((ccFntTy *)g_interSystem_00802A28->field_0024,(char *)resourceString,iVar9,
                     iVar6,uVar5,iVar7,iVar10);
      if ((param_1 < 0xb) && (-1 < (int)pCVar3->field_0148[uVar2])) {

        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,(uint)pCVar3->field_0148[uVar2],0xffffffff,
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

