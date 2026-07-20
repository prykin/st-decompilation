
bool __fastcall FUN_0048d440(AnonShape_0048D440_9DC42AE7 *param_1)

{
  undefined4 in_EAX;
  STGroupBoatC *this;
  int iVar1;
  int iVar2;
  
  this = thunk_FUN_0042b760(CONCAT31((int3)((uint)param_1 >> 8),param_1->field_0024),
                            CONCAT22((short)((uint)in_EAX >> 0x10),param_1->field_0030));
  if (param_1->field_04A1 == -1) {
    if (param_1->field_04AB != -1) {
      return (bool)((param_1->field_07DA + param_1->field_07D6 + param_1->field_07D2 < 1) - 1U & 7);
    }
    return false;
  }
  if (param_1->field_04AB == -1) {
    return param_1->field_07DA + param_1->field_07D6 + param_1->field_07D2 < 0x28;
  }
  iVar1 = thunk_FUN_0040bc90(this,(uint)param_1->field_0032,(short *)(int)param_1->field_049B,
                             (short *)(int)param_1->field_049D,(short *)(param_1->field_049F + 1),
                             '\0');
  iVar2 = thunk_FUN_0040bc90(this,(uint)param_1->field_0032,(short *)(int)param_1->field_04A5,
                             (short *)(int)param_1->field_04A7,(short *)(param_1->field_04A9 + 1),
                             '\0');
  if (iVar1 != -4) {
    if (iVar2 == -4) {
      return param_1->field_07DA + param_1->field_07D6 + param_1->field_07D2 < 0x28;
    }
    return (bool)(((((param_1->field_07DA + param_1->field_07D6 + param_1->field_07D2) * 100) / 0x28
                   <= 100 - (iVar1 * 100) / (iVar2 + iVar1)) - 1U & 6) + 1);
  }
  if (iVar2 != -4) {
    return (bool)((param_1->field_07DA + param_1->field_07D6 + param_1->field_07D2 < 1) - 1U & 7);
  }
  return false;
}

