
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_004a8f20(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 1) {
    FUN_006dd610(DAT_00807598,DAT_008073fc,SUB84((double)DAT_008073d0,0),
                 (int)((ulonglong)(double)DAT_008073d0 >> 0x20),SUB84((double)_DAT_008073d4,0),
                 (int)((ulonglong)(double)_DAT_008073d4 >> 0x20));
    DAT_008073d0 = (float)*(double *)((int)DAT_00807598 + 0x98);
    _DAT_008073d4 = (float)*(double *)((int)DAT_00807598 + 0xa0);
    lVar1 = __ftol();
    DAT_008073d8 = (undefined4)lVar1;
    lVar1 = __ftol();
    DAT_008073dc = (undefined4)lVar1;
  }
  return;
}

