#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_dock.cpp
   Diagnostic line evidence: 651 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall FUN_004d01f0(RecoveredRecord_004D01F0_A7BA5910 *param_1)

{
  STT3DSprC *pSVar1;
  int exceptionCode;
  int local_10;
  int local_c;
  int local_8;

  if (param_1->field_05FF == nullptr) {
    /* ST_CALLSITE[004D0209]: CALL 0x0072e530; direct=0072E530 Library::MSVCRT::FUN_0072e530; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STT3DSprC; signature=__cdecl;pointer:/STT3DSprC;/uint */
    pSVar1 = Library::MSVCRT::FUN_0072e530(0x40);
    if (pSVar1 == nullptr) {
      pSVar1 = nullptr;
    }
    else {
      /* ST_CALLSITE[004D0217]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
      pSVar1 = STT3DSprC::STT3DSprC(pSVar1);
    }
    param_1->field_05FF = pSVar1;
    /* ST_CALLSITE[004D0241]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
    exceptionCode =
         STT3DSprC::Init(pSVar1,PTR_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,0x11);
    if (exceptionCode != 0) {
      RaiseInternalException
                (exceptionCode,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_dock.cpp"
                 ,0x28b);
    }
    thunk_FUN_004ce9e0(param_1,&local_10,&local_c,&local_8);
    /* ST_CALLSITE[004D02B9]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
    STT3DSprC::sub_004AD3C0
              (param_1->field_05FF,(float)local_10 * _DAT_007904f8 * _DAT_007904f0,
               (float)local_c * _DAT_007904f8 * _DAT_007904f0,
               (float)local_8 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    thunk_FUN_004ad5e0(param_1->field_05FF);
  }
  return 0;
}

