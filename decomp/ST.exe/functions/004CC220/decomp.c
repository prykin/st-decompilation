
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_bspr.cpp
   Diagnostic line evidence: 853 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004cc220(AnonShape_004CC220_7DEF08C7 *param_1)

{
  uint uVar1;
  AnonShape_004AB810_8E5693D5 *pAVar2;
  STT3DSprC *this;
  int exceptionCode;

  param_1->field_0444 = 0;
  param_1->field_0448 = 0;
  param_1->field_044C = 0xffffffff;
  uVar1 = param_1->field_001C * 0x41c64e6d + 0x3039;
  param_1->field_001C = uVar1;
  param_1->field_0450 = (uVar1 >> 0x10) % 0x33 + PTR_00802a38->field_00E4;
  pAVar2 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
  if (pAVar2 == (AnonShape_004AB810_8E5693D5 *)0x0) {
    this = (STT3DSprC *)0x0;
  }
  else {
    this = (STT3DSprC *)thunk_FUN_004ab810(pAVar2);
  }
  param_1->field_0603 = this;
  exceptionCode =
       STT3DSprC::Init(this,DAT_008073cc,param_1->field_0613,param_1->field_0617,0,
                       param_1->field_060B,param_1->field_060F,0x11);
  if (exceptionCode != 0) {
    RaiseInternalException
              (exceptionCode,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_bspr_cpp_007ad4d0,
               0x355);
  }
  param_1->field_0440 = 0;
  param_1->field_043C = 0;
  return 0;
}

