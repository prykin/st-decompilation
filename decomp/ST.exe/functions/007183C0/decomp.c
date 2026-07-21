
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong __fastcall
FUN_007183c0(undefined4 param_1,undefined4 param_2,float *param_3,undefined1 *param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  ulonglong uVar4;

  if ((float)_DAT_007901c0 <= param_3[1]) {
    fVar2 = (param_3[2] + param_3[1]) - param_3[2] * param_3[1];
  }
  else {
    fVar2 = (param_3[2] + _DAT_0079dfd0) * param_3[1];
  }
  fVar1 = (param_3[1] + param_3[1]) - fVar2;
  if (param_3[2] == _DAT_0079034c) {
    if (*param_3 != 999.0) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      return CONCAT44(param_2,0xfffffffb);
    }
  }
  else {
    FUN_007182f0(*param_3 + _DAT_0079e270,fVar1,fVar2);
    FUN_007182f0(*param_3,fVar1,fVar2);
    FUN_007182f0(*param_3 - _DAT_0079e270,fVar1,fVar2);
  }
  lVar3 = Library::MSVCRT::__ftol();
  *param_4 = (char)lVar3;
  lVar3 = Library::MSVCRT::__ftol();
  param_4[1] = (char)lVar3;
  uVar4 = Library::MSVCRT::__ftol();
  param_4[2] = (char)uVar4;
  return uVar4 & 0xffffffff00000000;
}

