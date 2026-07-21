
undefined4 __fastcall FUN_006604b0(AiFltClassTy *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  STGroupBoatC *this;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0;
  local_8 = 0;
  param_1->field_00A7 = 0;
  uVar1 = AiFltClassTy::sub_0065D9C0(param_1);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (CONCAT22(extraout_var,uVar1) != 0) {
    local_c = param_3;
    if ((param_1->field_007D != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this = thunk_FUN_0042b760(param_1->field_0x24,CONCAT22(extraout_var,param_1->field_007D));
      if (this != (STGroupBoatC *)0x0) {
        (*this->vtable->vfunc_08)(this,CASE_6,&local_c);
        return 0;
      }
    }
  }
  return 0xffffffff;
}

