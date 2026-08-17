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
  AiPlrClassTy *this;
  int iVar1;
  STMessage *pSVar2;
  STMessage local_24;

  if ((((g_allPlayers_007FA174 != nullptr) &&
       (g_playSystem_00802A38 != nullptr)) && (param_1 < 8)) &&
     (g_bulkInitializedRecords_008087C7[param_1].field_0022 < 8)) {
    this = thunk_FUN_004357f0((char)param_1);
    if (this != nullptr) {
      pSVar2 = &local_24;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        pSVar2->unknown_00 = 0;
        pSVar2 = (STMessage *)&pSVar2->unknown_04;
      }
      local_24.id = MESS_AIPLRCLASSTY_5D97;
      /* ST_CALLSITE[00648E2B]: CALL dword ptr [EAX] */
      this->GetMessage(&local_24);
      thunk_FUN_0054cf70(g_playSystem_00802A38,this->field_0008);
    }
  }
  return;
}

