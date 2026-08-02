#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_gold.cpp
   STDcResourcC::Init */

undefined4 * __thiscall STDcResourcC::Init(STDcResourcC *this,uint param_1)

{
  code *pcVar1;
  HoloTy_field_0001State HVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  AnonShape_004AB810_8E5693D5 *pAVar5;
  STT3DSprC *this_00;
  HoloTy *pHVar6;
  undefined4 *puVar7;
  int iVar8;
  HoloTy *pHVar9;
  HoloTy *pHVar10;

  pAVar5 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
  if (pAVar5 != nullptr) {
    this_00 = (STT3DSprC *)thunk_FUN_004ab810(pAVar5);
    if (this_00 != nullptr) {
      pHVar6 = (HoloTy *)Library::MSVCRT::FUN_0072e530(this->field_0265 * 4 + 4);
      if (pHVar6 == nullptr) {
        Library::MSVCRT::FUN_0072e2b0((HoloTy *)this_00);
        return nullptr;
      }
      iVar8 = this->field_0265;
      if (iVar8 != 0) {
        pHVar9 = this->field_026D;
        pHVar10 = pHVar6;
        for (; iVar8 != 0; iVar8 = iVar8 + -1) {
          HVar2 = pHVar9->field_0001;
          uVar3 = pHVar9->field_0002;
          uVar4 = pHVar9->field_0x3;
          pHVar10->field_0000 = pHVar9->field_0000;
          pHVar10->field_0001 = HVar2;
          pHVar10->field_0002 = uVar3;
          pHVar10->field_0x3 = uVar4;
          pHVar9 = (HoloTy *)&pHVar9->field_0x4;
          pHVar10 = (HoloTy *)&pHVar10->field_0x4;
        }
        Library::MSVCRT::FUN_0072e2b0(this->field_026D);
      }
      this->field_026D = pHVar6;
      *(STT3DSprC **)((int)&pHVar6->field_0000 + this->field_0265 * 4) = this_00;
      this->field_0265 = this->field_0265 + 1;
      iVar8 = STT3DSprC::Init(this_00,DAT_008073cc,0x5a,0x45,this,0xb4,0x8c,0x11);
      if (iVar8 != 0) {
        iVar8 = ReportDebugMessage("E:\\__titans\\Igor\\To_gold.cpp",0x203,0,0,"%s",
                                   "STDcResourcC::Init Sprite Error");
        if (iVar8 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return nullptr;
      }
      return (undefined4 *)this_00;
    }
  }
  return nullptr;
}

