
undefined4 __thiscall FUN_00660420(void *this,undefined4 param_1)

{
  STGroupBoatC *this_00;
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_1c [6];

  *(undefined4 *)((int)this + 0xa7) = 0;
  puVar2 = local_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_1c[0] = 0;
  local_1c[2] = param_1;
  if ((*(short *)((int)this + 0x7d) != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    this_00 = thunk_FUN_0042b760(*(char *)((int)this + 0x24),
                                 CONCAT22((short)((uint)param_1 >> 0x10),
                                          *(short *)((int)this + 0x7d)));
    if (this_00 != (STGroupBoatC *)0x0) {
      (*this_00->vtable->vfunc_08)(this_00,CASE_2,local_1c);
      return 0;
    }
  }
  return 0xffffffff;
}

