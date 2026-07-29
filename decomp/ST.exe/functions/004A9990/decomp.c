
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_004a9990(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float local_10;
  float local_c;
  float local_8;

  _DAT_00807428 = _DAT_00807438 * DAT_00807420;
  _DAT_0080742c = DAT_00807424 * _DAT_00807438;
  _DAT_0080744d = ram0x0080743d * _DAT_00807438;
  _DAT_00807451 = _DAT_00807441 * _DAT_00807438;
  _DAT_00807455 = _DAT_00807445 * _DAT_00807438;
  _DAT_00807459 = _DAT_00807449 * _DAT_00807438;
  dVar1 = (double)(_DAT_0080742c * _DAT_00790784 + _DAT_00807459);
  dVar2 = (double)(_DAT_0080742c * _DAT_00790780 - _DAT_00807455);
  dVar3 = (double)(_DAT_00807428 * _DAT_00790784 - _DAT_00807451);
  dVar4 = (double)(_DAT_0080744d - _DAT_00807428 * _DAT_00790784);
  Library::Ourlib::STREND::FUN_006dd6e0
            (g_sT3DSMAPContext_00807598,SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20),
             SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),SUB84(dVar2,0),
             (int)((ulonglong)dVar2 >> 0x20),SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  ST3DSMAPContext::sub_006DD530(g_sT3DSMAPContext_00807598,&local_10,&local_c,&local_8);
  ST3DSMAPContext::sub_006DD790
            (g_sT3DSMAPContext_00807598,
             ((local_8 - _DAT_0079077c) * (float)_DAT_00790770 - _DAT_0080742c * _DAT_00790784) -
             _DAT_0080742c * _DAT_0079070c);
  ST3DSMAPContext::sub_006DD800
            (g_sT3DSMAPContext_00807598,
             _DAT_0080742c * _DAT_00790784 + local_8 * (float)_DAT_00790770 + (float)_DAT_00790760);
  DAT_0080674c = 2;
  DAT_0080745d = 0;
  return;
}

