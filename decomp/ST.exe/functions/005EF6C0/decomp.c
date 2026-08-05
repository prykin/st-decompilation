
void __thiscall FUN_005ef6c0(void *this,int param_1)

{
  int iVar1;
  STBoatC *this_00;
  STBoatC *local_8;

  this_00 = nullptr;
  local_8 = this;
  if (*(ushort *)((int)this + 0x2ab) != 0) {
    this_00 = (STBoatC *)
              STAllPlayersC::GetObjPtr
                        (g_allPlayers_007FA174,*(char *)((int)this + 0x2a3),
                         *(ushort *)((int)this + 0x2ab),CASE_1);
    if ((this_00 != nullptr) && (this_00->field_0018 == *(int *)((int)this + 0x2a7)))
    goto LAB_005ef720;
  }
  if (*(AnonShape_005EFAE0_B406B78B **)((int)this + 0x2a7) != nullptr) {
    iVar1 = STPlaySystemC::sub_006E62D0
                      (g_playSystem_00802A38,*(AnonShape_005EFAE0_B406B78B **)((int)this + 0x2a7),
                       (int *)&local_8);
    if (iVar1 != -4) {
      this_00 = local_8;
    }
  }
LAB_005ef720:
  if ((this_00 != nullptr) && (this_00->field_0020 == 0x14)) {
    if (param_1 == 1) {
      STBoatC::ReadyForLoading(this_00,*(STFishC **)((int)this + 0x18));
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

