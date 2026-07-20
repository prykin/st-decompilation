
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0 */

undefined2 __thiscall AiFltClassTy::sub_0065D9C0(AiFltClassTy *this)

{
  undefined2 uVar1;
  STGroupBoatC *pSVar2;
  undefined4 in_EDX;
  
  if ((this->field_007D != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    pSVar2 = thunk_FUN_0042b760(CONCAT31((int3)((uint)this >> 8),this->field_0x24),
                                CONCAT22((short)((uint)in_EDX >> 0x10),this->field_007D));
    if (pSVar2 != (STGroupBoatC *)0x0) {
      uVar1 = thunk_FUN_004233c0((int)pSVar2);
      return uVar1;
    }
  }
  return 0;
}

