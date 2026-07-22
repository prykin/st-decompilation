
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
  ushort *puVar3;
  AnonShape_0068FD00_A5257008 **ppAVar4;
  uint uVar5;
  bool bVar6;
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
    bVar6 = param_1->count != 0;
    local_c = this;
    do {
      uVar5 = local_8;
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_1, local_8) (runtime stride) */
      if ((((bVar6) &&
           (puVar3 = (ushort *)(param_1->elementSize * local_8 + (int)param_1->data),
           puVar3 != (ushort *)0x0)) && (*puVar3 != 0)) &&
         ((puVar1 = (ushort *)thunk_FUN_0067bc80(param_2,*(uint *)(puVar3 + 4)),
          puVar1 != (ushort *)0x0 ||
          (puVar1 = (ushort *)thunk_FUN_0067bc10(param_2), puVar1 != (ushort *)0x0)))) {
        *(uint *)(puVar3 + 6) = (uint)*puVar1;
        ppAVar4 = &local_40;
        for (iVar2 = 0xd; this_00 = local_c, iVar2 != 0; iVar2 = iVar2 + -1) {
          *ppAVar4 = (AnonShape_0068FD00_A5257008 *)0x0;
          ppAVar4 = ppAVar4 + 1;
        }
        local_40 = (AnonShape_0068FD00_A5257008 *)0x67;
        local_38 = 0;
        local_3c = local_c->field_06FE;
        local_37 = sub_0067BF30(local_c);
        local_33 = *(undefined4 *)(puVar3 + 6);
        iVar2 = sub_0067BEF0(this_00);
        local_2f = (undefined2)iVar2;
        local_2d = *(undefined4 *)(puVar1 + 2);
        local_29 = *(undefined4 *)(puVar1 + 4);
        local_25 = *(undefined4 *)(puVar1 + 6);
        sub_0067A020(this_00,(AnonShape_0068FD00_A5257008 *)&local_40,(uint)*puVar3);
        uVar5 = local_8;
      }
      local_8 = uVar5 + 1;
      bVar6 = local_8 < param_1->count;
    } while ((int)local_8 < (int)param_1->count);
  }
  return;
}

