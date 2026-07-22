
/* [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STAllPlayersC::sub_004EB010(STAllPlayersC *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_10;
  int local_8;

  iVar5 = 0;
  local_8 = 0;
  /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
  iVar6 = param_1 * 0xa62;
  g_playerRuntime[param_1].field2159_0x9c6 = 0;
  local_10 = 0;
  while( true ) {
    do {
      iVar2 = GetPlayerRaceId((char)param_1);
      if ((char)iVar2 == '\x03') {
        iVar2 = local_10 + iVar5 * 2;
        uVar1 = (&DAT_007c1620)[iVar2];
        *(undefined4 *)(iVar6 + 0x7f57c6 + iVar2 * 8) = uVar1;
        *(undefined4 *)(iVar6 + 0x7f57c2 + iVar2 * 8) = uVar1;
      }
      else {
        iVar5 = local_10 + iVar5 * 2;
        iVar4 = iVar5 * 8;
        iVar5 = (&DAT_007c15c4)[iVar5 * 2];
        iVar2 = *(int *)(&DAT_007c15c0 +
                        (local_10 + (local_8 + g_playerRuntime[param_1].field2159_0x9c6 * 2) * 2) *
                        8);
        uVar3 = this->field_001C * 0x41c64e6d + 0x3039;
        this->field_001C = uVar3;
        iVar2 = iVar2 + (uVar3 >> 0x10) % ((iVar5 - iVar2) + 1U);
        *(int *)(iVar4 + 0x7f57c6 + iVar6) = iVar2;
        *(int *)(iVar4 + 0x7f57c2 + iVar6) = iVar2;
        iVar5 = local_8;
      }
      local_10 = local_10 + 1;
    } while (local_10 < 2);
    iVar5 = iVar5 + 1;
    if (1 < iVar5) break;
    local_10 = 0;
    local_8 = iVar5;
  }
  g_playerRuntime[param_1].field2158_0x9c2 = g_playSystem_00802A38->field_00E4;
  return 0;
}

