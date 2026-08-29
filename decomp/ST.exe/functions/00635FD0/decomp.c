#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=1,
   ignored=8, unknown=0 */

void __fastcall FUN_00635fd0(RecoveredRecord_00635FD0_23FED72E *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  if ((param_1->field_0011 == 3) && (param_1->field_0039 != 0)) {
    FreeAndNull(&param_1->field_0039);
  }
  if (*(int *)param_1 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)(*(int *)param_1 + 0xc);
    uVar4 = 0;
    if (0 < iVar1) {
      do {
        iVar3 = *(int *)param_1;
        if (((uVar4 < STField<uint>(iVar3,0xC)) &&
            (iVar3 = STField<int>(iVar3,0x8) * uVar4 + STField<int>(iVar3,0x1C), iVar3 != 0)) &&
           (uVar2 = STField<uint>(iVar3,0x4), -1 < (int)uVar2)) {
          Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,uVar2);
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar1);
    }
    DArrayDestroy(*(DArrayTy **)param_1);
    *(undefined4 *)param_1 = 0;
  }
  return;
}

