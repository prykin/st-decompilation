
void __thiscall FUN_005ef6c0(void *this,int param_1)

{
  undefined4 in_EAX;
  uint uVar1;
  int iVar2;
  STBoatC *this_00;
  STBoatC *local_8;
  
  this_00 = (STBoatC *)0x0;
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),*(short *)((int)this + 0x2ab));
  local_8 = this;
  if (*(short *)((int)this + 0x2ab) != 0) {
    this_00 = (STBoatC *)
              STAllPlayersC::GetObjPtr
                        (g_sTAllPlayers_007FA174,
                         CONCAT31((int3)(uVar1 >> 8),*(undefined1 *)((int)this + 0x2a3)),uVar1,
                         CASE_1);
    if ((this_00 != (STBoatC *)0x0) && (this_00->field_0018 == *(int *)((int)this + 0x2a7)))
    goto LAB_005ef720;
  }
  if (*(int *)((int)this + 0x2a7) != 0) {
    iVar2 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x2a7),(int *)&local_8);
    if (iVar2 != -4) {
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

