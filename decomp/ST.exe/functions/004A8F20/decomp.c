
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a8f20(int param_1)

{
  longlong lVar1;

  if (param_1 == 1) {
    ST3DSMAPContext::sub_006DD610
              (g_sT3DSMAPContext_00807598,DAT_008073fc,(double)DAT_008073d0,(double)_DAT_008073d4);
    DAT_008073d0 = (float)g_sT3DSMAPContext_00807598->field_0098;
    _DAT_008073d4 = (float)g_sT3DSMAPContext_00807598->field_00A0;
    lVar1 = Library::MSVCRT::__ftol();
    DAT_008073d8 = (undefined4)lVar1;
    lVar1 = Library::MSVCRT::__ftol();
    DAT_008073dc = (undefined4)lVar1;
  }
  return;
}

