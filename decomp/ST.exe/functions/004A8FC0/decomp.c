
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a8fc0(void)

{
  double dVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 unaff_ESI;
  ushort *puVar6;
  void *unaff_EDI;
  ushort *puVar7;
  float10 fVar8;
  longlong lVar9;
  undefined4 local_5c;
  undefined4 local_58 [16];
  float local_18;
  float local_14 [2];
  ushort *local_c;
  float local_8;
  
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  iVar3 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_5c;
    iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_optic_cpp_007ac594,0x107,0,iVar3,&DAT_007a4ccc);
    if (iVar5 == 0) {
      FUN_006a5e40(iVar3,0,0x7ac594,0x108);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_00806754 != 0) {
    local_c = FUN_006f2d90(DAT_00806754,s_opticsave_007ac5d4,0,0);
  }
  if (local_c == (ushort *)0x0) {
    DAT_00807400 = DAT_00807568;
    DAT_00807404 = DAT_0080756c;
    DAT_00807408 = DAT_00807570;
    DAT_00807420 = ((float)(int)DAT_00807568 * _DAT_007ac580) / (float)(int)DAT_00807568;
    DAT_0080740c = DAT_00807574;
    DAT_00807410 = DAT_00807568;
    DAT_00807414 = DAT_0080756c;
    DAT_00807418 = DAT_00807570;
    DAT_0080741c = DAT_00807574;
    DAT_0080745d = 0;
    DAT_008073d0 = 0x40a00000;
    _DAT_008073d4 = 0x40a00000;
    DAT_008073d8 = 0;
    DAT_008073dc = 0;
    _DAT_00807430 = 0x40200000;
    _DAT_00807434 = 0x3f800000;
    _DAT_00807438 = 0x3f800000;
    DAT_0080743c._0_1_ = 0;
    dVar1 = (double)(_DAT_007904f8 / (_DAT_007ac580 / (float)DAT_00807570) + (float)_DAT_007901c0);
    fVar8 = FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
    _DAT_00807428 = DAT_00807420;
    ram0x0080743d = 0;
    _DAT_00807441 = 0;
    _DAT_00807445 = 0;
    _DAT_00807449 = 0;
    _DAT_0080744d = 0;
    _DAT_00807451 = 0;
    _DAT_00807455 = 0;
    _DAT_00807459 = 0;
    fVar8 = ((float10)_DAT_00790580 / fVar8) * (float10)DAT_00807574;
    DAT_00807424 = (float)fVar8;
    _DAT_0080742c = (float)fVar8;
    FUN_0072e150(0xc0000000,0x403ccccc);
    lVar9 = __ftol();
    FUN_006dc050(DAT_00807598,DAT_0080759c,DAT_00807568,DAT_0080756c,DAT_00807570,DAT_00807574,
                 SUB84((double)(_DAT_00807428 * _DAT_00790780),0),
                 (int)((ulonglong)(double)(_DAT_00807428 * _DAT_00790780) >> 0x20),
                 SUB84((double)(_DAT_00807428 * _DAT_00790784),0),
                 (int)((ulonglong)(double)(_DAT_00807428 * _DAT_00790784) >> 0x20),
                 SUB84((double)(_DAT_0080742c * _DAT_00790780),0),
                 (int)((ulonglong)(double)(_DAT_0080742c * _DAT_00790780) >> 0x20),
                 SUB84((double)(_DAT_0080742c * _DAT_00790784),0),
                 (int)((ulonglong)(double)(_DAT_0080742c * _DAT_00790784) >> 0x20),
                 0x4024000000000000,0x4023ee97865e3540,(int)lVar9);
    FUN_006dd530(DAT_00807598,&local_18,local_14,&local_8);
    FUN_006dd790(DAT_00807598,
                 ((local_8 - _DAT_0079077c) * (float)_DAT_00790770 - _DAT_0080742c * _DAT_00790784)
                 - _DAT_0080742c * _DAT_0079070c);
    FUN_006dd800(DAT_00807598,
                 _DAT_0080742c * _DAT_00790784 + local_8 * (float)_DAT_00790770 +
                 (float)_DAT_00790760);
    iVar3 = 0;
    pcVar4 = &DAT_008087e9;
    do {
      if (*pcVar4 == DAT_0080874d) {
        thunk_FUN_004ab470(*(int *)((int)&DAT_008087eb + iVar3 * 0x51),
                           *(int *)((int)&DAT_008087ef + iVar3 * 0x51));
        DAT_00858df8 = (undefined4 *)local_5c;
        return;
      }
      pcVar4 = pcVar4 + 0x51;
      iVar3 = iVar3 + 1;
    } while ((int)pcVar4 < 0x808a71);
    DAT_00858df8 = (undefined4 *)local_5c;
    return;
  }
  puVar6 = local_c;
  puVar7 = (ushort *)&DAT_008073d0;
  for (iVar3 = 99; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)puVar7 = *(undefined4 *)puVar6;
    puVar6 = puVar6 + 2;
    puVar7 = puVar7 + 2;
  }
  *puVar7 = *puVar6;
  *(char *)(puVar7 + 1) = (char)puVar6[1];
  FUN_0072e150(0xc0000000,0x403ccccc);
  lVar9 = __ftol();
  FUN_006dc050(DAT_00807598,DAT_0080759c,DAT_00807568,DAT_0080756c,DAT_00807570,DAT_00807574,
               SUB84((double)(DAT_00807420 * _DAT_00790780),0),
               (int)((ulonglong)(double)(DAT_00807420 * _DAT_00790780) >> 0x20),
               SUB84((double)(DAT_00807420 * _DAT_00790784),0),
               (int)((ulonglong)(double)(DAT_00807420 * _DAT_00790784) >> 0x20),
               SUB84((double)(DAT_00807424 * _DAT_00790780),0),
               (int)((ulonglong)(double)(DAT_00807424 * _DAT_00790780) >> 0x20),
               SUB84((double)(DAT_00807424 * _DAT_00790784),0),
               (int)((ulonglong)(double)(DAT_00807424 * _DAT_00790784) >> 0x20),0x4024000000000000,
               0x4023ee97865e3540,(int)lVar9);
  thunk_FUN_004a9b60(DAT_00807410,DAT_00807414,DAT_00807418,DAT_0080741c);
  thunk_FUN_004a8f20(1);
  DAT_0080674c = 2;
  DAT_0080745d = 0;
  FUN_006f20e0((uint *)&local_c);
  DAT_00858df8 = (undefined4 *)local_5c;
  return;
}

