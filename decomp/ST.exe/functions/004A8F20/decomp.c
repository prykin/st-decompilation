
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a8f20(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 1) {
    FUN_006dd610(PTR_00807598,DAT_008073fc,SUB84((double)DAT_008073d0,0),
                 (int)((ulonglong)(double)DAT_008073d0 >> 0x20),SUB84((double)_DAT_008073d4,0),
                 (int)((ulonglong)(double)_DAT_008073d4 >> 0x20));
    DAT_008073d0 = (float)PTR_00807598->field_0098;
    _DAT_008073d4 = (float)PTR_00807598->field_00A0;
    lVar1 = Library::MSVCRT::__ftol();
    DAT_008073d8 = (undefined4)lVar1;
    lVar1 = Library::MSVCRT::__ftol();
    DAT_008073dc = (undefined4)lVar1;
  }
  return;
}

