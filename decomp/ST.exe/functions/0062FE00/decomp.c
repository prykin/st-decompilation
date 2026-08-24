#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall FUN_0062fe00(STJellyGunC *param_1)

{
  STT3DSprC *pSVar1;
  int iVar2;
  int iVar3;
  int *piVar4;

  iVar3 = 0;
  piVar4 = (int *)&param_1->field_0x1e5;
  do {
    if (*piVar4 != 0) {
      if (*(int *)(*piVar4 + 0x10) == 0) {
        pSVar1 = (STT3DSprC *)Library::MSVCRT::FUN_0072e530(0x40);
        if (pSVar1 == nullptr) {
          pSVar1 = nullptr;
        }
        else {
          /* ST_CALLSITE[0062FE2A]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
          pSVar1 = STT3DSprC::STT3DSprC(pSVar1);
        }
        *(STT3DSprC **)(*piVar4 + 0x10) = pSVar1;
      }
      iVar2 = thunk_FUN_0062f080(param_1,iVar3,*(undefined4 *)(*piVar4 + 0xc),
                                 *(STRubbishC_LoadImagSpr_param_4Enum *)(*piVar4 + 4));
      if (iVar2 == 0) {
        if (param_1->field_01E1 == 1) {
          /* ST_CALLSITE[0062FE59]: CALL 0x00405885; direct=00405885 STRubbishC::sub_0062F900 */
          STRubbishC::sub_0062F900((STRubbishC *)param_1);
        }
        else {
          thunk_FUN_0062f6c0(param_1,iVar3);
        }
      }
      else {
        thunk_FUN_0062f0d0(param_1,iVar3);
      }
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 5);
  return;
}

