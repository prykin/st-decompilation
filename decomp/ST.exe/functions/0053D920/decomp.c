#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   UPanelTy::PaintTxtBut

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0053D920 parameter used as this of ccFntTy::SetSurf @ 0053D9F2 | 0053D920 parameter
   used as this of ccFntTy::WrStr @ 0053DA19 */

void __thiscall
UPanelTy::PaintTxtBut
          (UPanelTy *this,AnonShape_0053D920_829E6B3B *param_1,byte param_2,char *param_3,
          ccFntTy *param_4,UINT param_5,undefined *param_6)

{
  UPanelTy *pUVar2;
  int iVar3;
  uint uVar4;
  uint *resourceString;
  int iVar5;
  InternalExceptionFrame local_5c;
  AnonNested_0053D920_0018_8DE8F5C2 *local_18;
  int local_14;
  UPanelTy *local_10;
  uint local_c;
  ushort *local_8;

  local_18 = param_1->field_0018;
  local_8 = nullptr;
  local_14 = local_18->field_0000 - this->field_003C;
  if (this->field_005C == 0) {
    local_c = local_18->field_0004 + this->field_0048;
  }
  else {
    local_c = local_18->field_0004 - this->field_0044;
  }
  if (param_6 != nullptr) {
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_10 = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
    if (iVar3 == 0) {
      local_8 = cMf32::RecGet(g_cMf32_00806790,param_2,param_3,nullptr,1);
      uVar4 = local_c;
      pUVar2 = local_10;
      iVar3 = local_14;
      DibPut((RecoveredSourceFamily_dibcopy *)local_10->field_0068,local_14,local_c,param_2,
             (byte *)local_8);
      cMf32::RecMemFree(g_cMf32_00806790,(uint *)&local_8);
      ccFntTy::SetSurf(param_4,pUVar2->field_0068,0,iVar3,uVar4,local_18->field_0008,
                       local_18->field_000C);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar4 = (*(code *)param_6)(param_1);
      iVar5 = -1;
      iVar3 = -2;
      resourceString = (uint *)LoadResourceString(param_5,g_module_00807618);
      ccFntTy::WrStr(param_4,resourceString,iVar3,iVar5,uVar4);
      Library::DKW::DDX::FUN_006b3640
                ((int *)g_ddxContext_008075A8,pUVar2->field_0060,0xffffffff,pUVar2->field_003C,
                 pUVar2->field_0044);
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\specpan.cpp",0x3e,0,iVar3,"%s",
                               "UPanelTy::PaintTxtBut");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\specpan.cpp",0x3e);
  }
  return;
}

