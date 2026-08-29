#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_gold.cpp
   STDcResourcC::Init
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined4 *
   __thiscall Init(STDcResourcC * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0057F5AF RET | 0057F667 RET | 0057F678 RET | 0057F680 RET */

undefined4 * __thiscall STDcResourcC::Init(STDcResourcC *this)

{
  HoloTy_field_0001State HVar2;
  byte uVar3;
  byte uVar4;
  STT3DSprC *pSVar5;
  HoloTy *pHVar6;
  int iVar8;
  uint *puVar7;
  int iVar9;
  HoloTy *pHVar10;
  HoloTy *pHVar11;

  /* ST_CALLSITE[0057F58C]: CALL 0x0072e530; direct=0072E530 Library::MSVCRT::FUN_0072e530; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STT3DSprC; source view only; no Ghidra override */
  pSVar5 = (STT3DSprC *)Library::MSVCRT::FUN_0072e530(0x40);
  if (pSVar5 != nullptr) {
    /* ST_CALLSITE[0057F59A]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/HoloTy; source view only; no Ghidra override */
    pSVar5 = STT3DSprC::STT3DSprC(pSVar5);
    if (pSVar5 != nullptr) {
      pHVar6 = (HoloTy *)Library::MSVCRT::FUN_0072e530(this->field_0265 * 4 + 4);
      if (pHVar6 == nullptr) {
        Library::MSVCRT::FUN_0072e2b0((HoloTy *)pSVar5);
        return nullptr;
      }
      iVar9 = this->field_0265;
      if (iVar9 != 0) {
        pHVar10 = this->field_026D;
        pHVar11 = pHVar6;
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          HVar2 = pHVar10->field_0001;
          uVar3 = pHVar10->field_0002;
          uVar4 = pHVar10->field_0x3;
          pHVar11->field_0000 = pHVar10->field_0000;
          pHVar11->field_0001 = HVar2;
          pHVar11->field_0002 = uVar3;
          pHVar11->field_0x3 = uVar4;
          pHVar10 = (HoloTy *)&pHVar10->field_0x4;
          pHVar11 = (HoloTy *)&pHVar11->field_0x4;
        }
        Library::MSVCRT::FUN_0072e2b0(this->field_026D);
      }
      this->field_026D = pHVar6;
      *(STT3DSprC **)((int)&pHVar6->field_0000 + this->field_0265 * 4) = pSVar5;
      this->field_0265 = this->field_0265 + 1;
      /* ST_CALLSITE[0057F632]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
      iVar9 = STT3DSprC::Init(pSVar5,PTR_008073cc,0x5a,0x45,this,0xb4,0x8c,0x11);
      if (iVar9 != 0) {

        iVar8 = ReportDebugMessage("E:\\__titans\\Igor\\To_gold.cpp",0x203,0,0,"%s",
                                   "STDcResourcC::Init Sprite Error");
        if (iVar8 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return nullptr;
      }
      return &pSVar5->vtable;
    }
  }
  return nullptr;
}

