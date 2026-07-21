
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004a9fb0(float param_1)

{
  uint uVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_00;
  float10 fVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST1_00;
  longlong lVar3;
  float local_8;

  local_8 = DAT_008073d0;
  switch(DAT_008073fc) {
  case 0:
    local_8 = DAT_008073d0 + param_1;
    break;
  case 1:
    local_8 = DAT_008073d0 + param_1;
    break;
  case 2:
    local_8 = DAT_008073d0 - param_1;
    break;
  case 3:
    local_8 = DAT_008073d0 - param_1;
  }
  if (local_8 < _DAT_0079034c) {
    local_8 = 0.0;
  }
  if ((float)(int)*DAT_00806750 * _DAT_007904f8 < local_8) {
    local_8 = (float)(int)*DAT_00806750 * _DAT_007904f8;
  }
  lVar3 = Library::MSVCRT::__ftol();
  uVar1 = (int)(uint)lVar3 >> 0x1f;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  fVar2 = extraout_ST1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (((float10)(int)(((uint)lVar3 ^ uVar1) - uVar1) < extraout_ST0) &&
     (lVar3 = Library::MSVCRT::__ftol(), uVar1 = (int)(uint)lVar3 >> 0x1f, fVar2 = extraout_ST1_00,
     (float10)(int)(((uint)lVar3 ^ uVar1) - uVar1) < extraout_ST0_00)) {
    return 0;
  }
  _DAT_008073d4 = (float)fVar2;
  DAT_008073d0 = local_8;
  lVar3 = Library::MSVCRT::__ftol();
  DAT_008073d8 = (undefined4)lVar3;
  lVar3 = Library::MSVCRT::__ftol();
  DAT_008073dc = (undefined4)lVar3;
  DAT_0080674c = 2;
  thunk_FUN_004a8f20(0);
  return 1;
}

