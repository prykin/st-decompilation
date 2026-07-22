
undefined4 __thiscall
FUN_005ff3a0(void *this,undefined2 *param_1,undefined2 *param_2,short *param_3)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EAX;
  STGameObjC *this_00;
  int iVar1;

  /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
  this_00 = STAllPlayersC::GetObjPtr
                      (g_allPlayers_007FA174,*(char *)((int)this + 0x20a),
                       CONCAT22((short)((uint)in_EAX >> 0x10),*(undefined2 *)((int)this + 0x224)),
                       CASE_1);
  if (this_00 != (STGameObjC *)0x0) {
    iVar1 = (*this_00->vtable[1].vfunc_24)();
    if (iVar1 != 0) {
      thunk_FUN_00416270(this_00,param_1,(int *)param_2,(int *)param_3);
      *param_3 = *param_3 + -0x1e;
      return 1;
    }
  }
  return 0;
}

