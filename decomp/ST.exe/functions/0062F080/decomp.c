#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0062F080 -> 0062F3B0 @ 0062F0A9
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0062FCA0 @ 0062FCF0 -> read as EAX on
   every CFG path | 0062FE00 @ 0062FE45 -> read as EAX on every CFG path */

int __thiscall
FUN_0062f080(void *this,int param_1,undefined4 param_2,STRubbishC_LoadImagSpr_param_4Enum param_3)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x1e5);
  if (((iVar1 != 0) && (*(void **)(iVar1 + 0x10) != nullptr)) &&
     /* ST_CALLSITE[0062F0A9]: CALL 0x004025e5; direct=004025E5 STRubbishC::LoadImagSpr */
     (iVar1 = STRubbishC::LoadImagSpr
                        (this,*(void **)(iVar1 + 0x10),(int *)(iVar1 + 0x14),param_2,param_3),
     iVar1 == 0)) {
    return 1;
  }
  return 0;
}

