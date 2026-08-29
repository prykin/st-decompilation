#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_trade.cpp
   Diagnostic line evidence: 283 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]
   [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=3, scalar_uses=0; sites=004EC053 dereference: MOV EAX,dword ptr [ESI +
   0x5ff] | 004EC082 dereference: MOV dword ptr [ESI + 0x5ff],EAX | 004EC0B7 dereference: MOV
   ECX,dword ptr [ESI + 0x5ff] */

undefined4 __fastcall FUN_004ec050(RecoveredRecord_004EC050_2F5ECB40 *param_1)

{
  STT3DSprC *pSVar1;
  int exceptionCode;

  if (param_1->field_05FF == nullptr) {
    /* ST_CALLSITE[004EC05F]: CALL 0x0072e530; direct=0072E530 Library::MSVCRT::FUN_0072e530; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STT3DSprC; signature=__cdecl;pointer:/STT3DSprC;/uint */
    pSVar1 = Library::MSVCRT::FUN_0072e530(0x40);
    if (pSVar1 == nullptr) {
      pSVar1 = nullptr;
    }
    else {
      /* ST_CALLSITE[004EC06D]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
      pSVar1 = STT3DSprC::STT3DSprC(pSVar1);
    }
    param_1->field_05FF = pSVar1;
    /* ST_CALLSITE[004EC097]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
    exceptionCode =
         STT3DSprC::Init(pSVar1,PTR_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,0x11);
    if (exceptionCode != 0) {
      RaiseInternalException
                (exceptionCode,g_overwriteContext_007ED77C,
                 "E:\\__titans\\Artem\\TLO_trade.cpp",0x11b);
    }
    thunk_FUN_004ad5e0(param_1->field_05FF);
  }
  return 0;
}

