#include "st/generated.hpp"
// Generated translation unit: source/original/Artem/TLO_shark.cpp

// 004E3880 FUN_004e3880
#line 4 "decomp/ST.exe/functions/004E3880/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_shark.cpp
   Diagnostic line evidence: 24 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall st::fn_004E3880(AnonShape_004E3880_642C8E1A *param_1)

{
  int exceptionCode;

  param_1->field_04D0 = 0;
  param_1->field_04D4 = 0;
  param_1->field_04D8 = 0;
  param_1->field_04DC = 0;
  param_1->field_04E0 = 0;
  param_1->field_04E4 = 5;
  param_1->field_04E8 = g_playSystem_00802A38->field_00E4 + 0x271;
  exceptionCode =
       st::fn_00404183
                 ((STT3DSprC *)&param_1->field_0x1d5,0xb,PTR_0080678c,"sha_ani1",0x1d);
  if (exceptionCode != 0) {
    st::fn_006A5E40
              (exceptionCode,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_shark.cpp",
               0x18);
  }
  return 0;
}

