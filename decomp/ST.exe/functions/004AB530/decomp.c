
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ab530(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_1 == 1) {
    DAT_008073e0 = 1;
    _DAT_008073ec = _DAT_008073d4;
    DAT_00807461 = 0;
    _DAT_008073e8 = DAT_008073d0;
    _DAT_008073f0 = (float)param_2 * _DAT_007904f8 + _DAT_007904f4;
    _DAT_008073f4 = (float)param_3 * _DAT_007904f8 + _DAT_007904f4;
    fVar1 = _DAT_008073f4 - _DAT_008073d4;
    fVar2 = _DAT_008073f0 - DAT_008073d0;
    _DAT_008073f8 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
    fVar1 = _DAT_0079034c;
    do {
      DAT_00807461 = DAT_00807461 + 1;
      fVar1 = (float)DAT_00807461 * *(float *)(&DAT_007ac584 + (uint)DAT_0080733a * 4) *
              _DAT_0079078c + fVar1;
    } while (fVar1 < _DAT_008073f8);
    _DAT_008073e4 = DAT_00807461;
    return;
  }
  thunk_FUN_004ab470(param_2,param_3);
  return;
}

