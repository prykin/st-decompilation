
void __thiscall FUN_005ef6c0(void *this,int param_1)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EAX;
  int iVar1;
  STBoatC *this_00;
  STBoatC *local_8;

  this_00 = (STBoatC *)0x0;
  local_8 = this;
  if (*(short *)((int)this + 0x2ab) != 0) {
    /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
    this_00 = (STBoatC *)
              STAllPlayersC::GetObjPtr
                        (g_allPlayers_007FA174,*(char *)((int)this + 0x2a3),
                         CONCAT22((short)((uint)in_EAX >> 0x10),*(short *)((int)this + 0x2ab)),
                         CASE_1);
    if ((this_00 != (STBoatC *)0x0) && (this_00->field_0018 == *(uint *)((int)this + 0x2a7)))
    goto LAB_005ef720;
  }
  if (*(int *)((int)this + 0x2a7) != 0) {
    iVar1 = FUN_006e62d0(g_playSystem_00802A38,*(int *)((int)this + 0x2a7),(int *)&local_8);
    if (iVar1 != -4) {
      this_00 = local_8;
    }
  }
LAB_005ef720:
  if ((this_00 != (STBoatC *)0x0) && (this_00->field_0020 == 0x14)) {
    if (param_1 == 1) {
      STBoatC::ReadyForLoading(this_00,*(void **)((int)this + 0x18));
    }
    else {
      if (param_1 == 2) {
        STBoatC::NotReadyForLoading(this_00,*(int *)((int)this + 0x18));
        return;
      }
      if (param_1 == 3) {
        STBoatC::CancelLoading(this_00,*(int *)((int)this + 0x18));
        return;
      }
    }
  }
  return;
}

