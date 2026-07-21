
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0 */

undefined2 __thiscall AiFltClassTy::sub_0065D9C0(AiFltClassTy *this)

{
  undefined2 uVar1;
  STGroupBoatC *pSVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EDX;

  if ((this->field_007D != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
    pSVar2 = thunk_FUN_0042b760(*(char *)&this->field_0024,
                                CONCAT22((short)((uint)in_EDX >> 0x10),this->field_007D));
    if (pSVar2 != (STGroupBoatC *)0x0) {
      uVar1 = thunk_FUN_004233c0((int)pSVar2);
      return uVar1;
    }
  }
  return 0;
}

