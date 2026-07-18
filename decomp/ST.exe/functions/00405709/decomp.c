
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 thunk_FUN_004aab00(float param_1)

{
  uint uVar1;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar2;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  longlong lVar3;
  float fStack_8;
  
  fStack_8 = DAT_008073d0;
  switch(DAT_008073fc) {
  case 0:
    break;
  case 1:
    fStack_8 = DAT_008073d0 + param_1;
    break;
  case 2:
    break;
  case 3:
    fStack_8 = DAT_008073d0 - param_1;
  }
  if (fStack_8 < _DAT_0079034c) {
    fStack_8 = 0.0;
  }
  if ((float)(int)*DAT_00806750 * _DAT_007904f8 < fStack_8) {
    fStack_8 = (float)(int)*DAT_00806750 * _DAT_007904f8;
  }
  lVar3 = __ftol();
  uVar1 = (int)(uint)lVar3 >> 0x1f;
  fVar2 = extraout_ST1;
  if (((float10)(int)(((uint)lVar3 ^ uVar1) - uVar1) < extraout_ST0) &&
     (lVar3 = __ftol(), uVar1 = (int)(uint)lVar3 >> 0x1f, fVar2 = extraout_ST1_00,
     (float10)(int)(((uint)lVar3 ^ uVar1) - uVar1) < extraout_ST0_00)) {
    return 0;
  }
  _DAT_008073d4 = (float)fVar2;
  DAT_008073d0 = fStack_8;
  lVar3 = __ftol();
  DAT_008073d8 = (undefined4)lVar3;
  lVar3 = __ftol();
  DAT_008073dc = (undefined4)lVar3;
  DAT_0080674c = 2;
  thunk_FUN_004a8f20(0);
  return 1;
}

