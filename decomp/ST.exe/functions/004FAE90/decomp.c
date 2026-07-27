
/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CPanelTy::sub_004FAE90(CPanelTy *this,uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;

  iVar3 = this->field_004C;
  iVar1 = this->field_00A4;
  if (this->field_023F != CASE_2) {
    uVar2 = param_1 & 0xffff;
    uVar4 = param_2 & 0xffff;
    if (((((iVar3 <= (int)uVar2) && ((int)uVar2 < this->field_0078 + iVar3)) &&
         (iVar1 <= (int)uVar4)) && (((int)uVar4 < this->field_00D0 + iVar1 && (DAT_00808784 == 0))))
       && ((DAT_00808788 == 0 && ((DAT_0080878c == 0 && (DAT_00808790 == 0)))))) {
      iVar3 = FUN_006e68c0(PTR_00807598,(uVar2 - iVar3) + -5,(uVar4 - iVar1) + -7,(int *)&param_1,
                           &local_8);
      if (iVar3 != 0) {
        local_10 = local_8;
        local_14 = param_1;
        iVar3 = STAllPlayersC::GetActiveCenter
                          (g_allPlayers_007FA174,(undefined2 *)0x0,(undefined2 *)0x0,
                           (undefined2 *)((int)&param_2 + 2));
        if (-1 < iVar3) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_c = (int)param_2._2_2_;
          if (local_c < 0) {
            local_c = 2;
          }
          thunk_FUN_0054edf0((undefined4 *)0x14,&local_14,0,0xffffffff);
        }
      }
    }
  }
  return;
}

