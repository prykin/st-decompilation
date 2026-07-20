
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_shark.cpp
   Diagnostic line evidence: 24 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004e3880(AnonShape_004E3880_642C8E1A *param_1)

{
  int exceptionCode;
  
  param_1->field_04D0 = 0;
  param_1->field_04D4 = 0;
  param_1->field_04D8 = 0;
  param_1->field_04DC = 0;
  param_1->field_04E0 = 0;
  param_1->field_04E4 = 5;
  param_1->field_04E8 = PTR_00802a38->field_00E4 + 0x271;
  exceptionCode =
       STT3DSprC::LoadSequence
                 ((STT3DSprC *)&param_1->field_0x1d5,0xb,DAT_0080678c,s_sha_ani1_007bfa20,0x1d);
  if (exceptionCode != 0) {
    RaiseInternalException
              (exceptionCode,g_overwriteContext_007ED77C,s_E____titans_Artem_TLO_shark_cpp_007bf9f8,
               0x18);
  }
  return 0;
}

