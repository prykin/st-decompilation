
void __fastcall FUN_0065d6a0(AnonShape_0065D6A0_A68E55B5 *param_1)

{
  undefined4 in_EAX;
  uint uVar1;
  STGroupBoatC *this;
  
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),param_1->field_007D);
  if ((param_1->field_007D != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    this = thunk_FUN_0042b760(CONCAT31((int3)(uVar1 >> 8),param_1->field_0024),uVar1);
    if (this != (STGroupBoatC *)0x0) {
      thunk_FUN_004232e0(this,param_1);
    }
  }
  return;
}

