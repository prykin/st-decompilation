
undefined4 __fastcall FUN_004b9a40(int *param_1)

{
  int iVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;

  thunk_FUN_0041c5a0((AnonShape_0041C5A0_167218F4 *)param_1);
  iVar1 = param_1[0x16b];
  if ((((iVar1 != 0x4d) || (param_1[0x134] == 2)) && ((iVar1 != 0x4c || (param_1[0x134] == 2)))) &&
     ((iVar1 != 0x43 || (param_1[0x134] == 2)))) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x2c))();
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    thunk_FUN_004b7710(CONCAT31((int3)((uint)extraout_ECX >> 8),(char)param_1[9]),iVar1);
  }
  iVar1 = param_1[0x16b];
  if ((iVar1 == 0x34) || (iVar1 == 0x5b)) {
    thunk_FUN_004de0d0((int)param_1);
  }
  else {
    if (iVar1 == 0x48) {
      thunk_FUN_004df9f0((int)param_1);
      return 0;
    }
    if (iVar1 == 100) {
      thunk_FUN_004e4520((int)param_1);
      return 0;
    }
    if (iVar1 == 0x62) {
      thunk_FUN_004e2970((int)param_1);
      return 0;
    }
    if (iVar1 == 0x6e) {
      thunk_FUN_004dd350((int)param_1);
      return 0;
    }
    if (iVar1 == 0x4d) {
      thunk_FUN_004deff0((int)param_1);
      return 0;
    }
    if (iVar1 == 0x43) {
      thunk_FUN_004df1a0((int)param_1);
      return 0;
    }
    if (iVar1 == 0x73) {
      thunk_FUN_004ecb60((int)param_1);
      return 0;
    }
    if (iVar1 == 0x3a) {
      thunk_FUN_004d9700((int)param_1);
      return 0;
    }
    if (iVar1 == 0x65) {
      thunk_FUN_004e4990((int)param_1);
      return 0;
    }
    if ((iVar1 == 0x3b) || (iVar1 == 0x60)) {
      thunk_FUN_004dff30((int)param_1);
      return 0;
    }
  }
  return 0;
}

