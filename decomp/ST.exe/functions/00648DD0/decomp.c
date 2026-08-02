#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=1,
   ignored=2, unknown=0 */

void __cdecl FUN_00648dd0(uint param_1)

{
  AiPlrClassTy *pAVar1;
  undefined4 local_24 [4];
  undefined4 local_14;

  if ((((g_allPlayers_007FA174 != nullptr) &&
       (g_playSystem_00802A38 != nullptr)) && (param_1 < 8)) &&
     (g_bulkInitializedRecords_008087C7[param_1].field_0022 < 8)) {
    pAVar1 = thunk_FUN_004357f0((char)param_1);
    if (pAVar1 != nullptr) {
      memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
      local_14 = 0x5d97;
      (*pAVar1->vtable->vfunc_00)(local_24);
      thunk_FUN_0054cf70(g_playSystem_00802A38,pAVar1->field_0008);
    }
  }
  return;
}

