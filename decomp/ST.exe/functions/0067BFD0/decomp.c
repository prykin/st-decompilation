#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as AiPlrClassTy.
   Evidence: this_call_owners=[AiPlrClassTy]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 0067BFD0 -> 0067BC10 @ 0067C02E | 0067BFD0 -> 0067BC80 @ 0067C01C */

void __thiscall AiPlrClassTy::sub_0067BFD0(AiPlrClassTy *this,DArrayTy *param_1,DArrayTy *param_2)

{
  AiPlrClassTy *this_00;
  ushort *puVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  AnonShape_0068FD00_A5257008 **ppAVar5;
  uint uVar6;
  bool bVar7;
  AnonShape_0068FD00_A5257008 *local_40;
  uint local_3c;
  undefined1 local_38;
  int local_37;
  undefined4 local_33;
  undefined2 local_2f;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  AiPlrClassTy *local_c;
  uint local_8;

  local_8 = 0;
  if (0 < (int)param_1->count) {
    bVar7 = param_1->count != 0;
    local_c = this;
    do {
      uVar6 = local_8;
      if ((((bVar7) &&
           (puVar4 = DArrayAt<ushort>(param_1, local_8),
           puVar4 != nullptr)) && (*puVar4 != 0)) &&
         ((puVar1 = (ushort *)thunk_FUN_0067bc80(param_2,*(uint *)(puVar4 + 4)),
          puVar1 != nullptr ||
          (puVar1 = (ushort *)thunk_FUN_0067bc10(param_2), puVar1 != nullptr)))) {
        *(uint *)(puVar4 + 6) = (uint)*puVar1;
        ppAVar5 = &local_40;
        for (iVar3 = 0xd; this_00 = local_c, iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppAVar5 = nullptr;
          ppAVar5 = ppAVar5 + 1;
        }
        local_40 = (AnonShape_0068FD00_A5257008 *)0x67;
        local_38 = 0;
        local_3c = local_c->field_06FE;
        /* ST_CALLSITE[0067C068]: CALL 0x00402a09; direct=00402A09 AiPlrClassTy::sub_0067BF30 */
        local_37 = sub_0067BF30(local_c);
        local_33 = *(undefined4 *)(puVar4 + 6);
        /* ST_CALLSITE[0067C078]: CALL 0x00404228; direct=00404228 AiPlrClassTy::sub_0067BEF0 */
        iVar2 = sub_0067BEF0(this_00);
        local_2f = (undefined2)iVar2;
        local_2d = *(undefined4 *)(puVar1 + 2);
        local_29 = *(undefined4 *)(puVar1 + 4);
        local_25 = *(undefined4 *)(puVar1 + 6);
        /* ST_CALLSITE[0067C0A1]: CALL 0x00405dc6; direct=00405DC6 AiPlrClassTy::sub_0067A020 */
        sub_0067A020(this_00,(AnonShape_0068FD00_A5257008 *)&local_40,(uint)*puVar4);
        uVar6 = local_8;
      }
      local_8 = uVar6 + 1;
      bVar7 = local_8 < param_1->count;
    } while ((int)local_8 < (int)param_1->count);
  }
  return;
}

