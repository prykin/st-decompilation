
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ab650(void)

{
  float fVar1;
  longlong lVar2;
  float local_8;

  fVar1 = ((float)DAT_00807461 * *(float *)(&DAT_007ac584 + (uint)DAT_0080733a * 4) * _DAT_0079078c)
          / _DAT_008073f8;
  local_8 = (_DAT_008073f0 - _DAT_008073e8) * fVar1 + DAT_008073d0;
  _DAT_008073d4 = (_DAT_008073f4 - _DAT_008073ec) * fVar1 + _DAT_008073d4;
  if (local_8 < _DAT_0079034c) {
    local_8 = 0.0;
  }
  if ((float)(int)*DAT_00806750 * _DAT_007904f8 < local_8) {
    local_8 = (float)(int)*DAT_00806750 * _DAT_007904f8;
  }
  if (_DAT_008073d4 < _DAT_0079034c) {
    _DAT_008073d4 = _DAT_0079034c;
  }
  if ((float)(int)DAT_00806750[1] * _DAT_007904f8 < _DAT_008073d4) {
    _DAT_008073d4 = (float)(int)DAT_00806750[1] * _DAT_007904f8;
  }
  DAT_008073d0 = local_8;
  lVar2 = Library::MSVCRT::__ftol();
  DAT_008073d8 = (int)lVar2;
  lVar2 = Library::MSVCRT::__ftol();
  DAT_008073dc = (int)lVar2;
  DAT_0080674c = 2;
  thunk_FUN_004a8f20(0);
  thunk_FUN_00567510(&g_sound,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
  DAT_00807461 = DAT_00807461 + -1;
  if (DAT_00807461 == 0) {
    DAT_008073e0 = 0;
  }
  return;
}

