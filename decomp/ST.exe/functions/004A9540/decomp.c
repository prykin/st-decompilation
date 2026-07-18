
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_optic.cpp
   OpticClassC::ReInitOptic */

void __thiscall OpticClassC::ReInitOptic(OpticClassC *this,int param_1)

{
  double dVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar5;
  float10 fVar6;
  undefined4 local_5c;
  undefined4 local_58 [16];
  OpticClassC *local_18;
  int local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  local_18 = this;
  iVar3 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_5c;
    iVar4 = FUN_006ad4d0(s_E____titans_wlad_To_optic_cpp_007ac594,0x13c,0,iVar3,&DAT_007a4ccc);
    if (iVar4 == 0) {
      FUN_006a5e40(iVar3,0,0x7ac594,0x13d);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  DAT_0080745d = 0;
  _DAT_00807430 = 0x40200000;
  DAT_00807408 = (&DAT_00807570)[param_1 * 4];
  DAT_0080740c = (&DAT_00807574)[param_1 * 4];
  DAT_00807400 = (&DAT_00807568)[param_1 * 4];
  DAT_00807404 = (&DAT_0080756c)[param_1 * 4];
  DAT_00807420 = ((float)DAT_00807408 * _DAT_007ac580) / (float)DAT_00807570;
  uVar5 = DAT_0080743c & 0xff;
  _DAT_00807434 = 0x3f800000;
  _DAT_00807438 = 0x3f800000;
  DAT_0080743c = DAT_0080743c & 0xffffff00;
  dVar1 = (double)(_DAT_007904f8 / (_DAT_007ac580 / (float)DAT_00807570) + (float)_DAT_007901c0);
  DAT_00807410 = DAT_00807400;
  DAT_00807414 = DAT_00807404;
  DAT_00807418 = DAT_00807408;
  DAT_0080741c = DAT_0080740c;
  local_14 = DAT_00807408;
  fVar6 = FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  local_14 = (&DAT_00807574)[param_1 * 4];
  _DAT_00807428 = DAT_00807420;
  DAT_0080743c = DAT_0080743c & 0xff;
  uRam00807440 = 0;
  _DAT_00807441 = 0;
  _DAT_00807445 = 0;
  _DAT_00807449 = 0;
  _DAT_0080744d = 0;
  _DAT_00807451 = 0;
  _DAT_00807455 = 0;
  _DAT_00807459 = 0;
  DAT_00807424 = (float)((float10)local_14 * ((float10)_DAT_00790580 / fVar6));
  _DAT_0080742c = DAT_00807424;
  FUN_006dbd20(DAT_00807598,DAT_0080759c,(&DAT_00807568)[param_1 * 4],(&DAT_0080756c)[param_1 * 4],
               (&DAT_00807570)[param_1 * 4],local_14,SUB84((double)(DAT_00807420 * _DAT_00790780),0)
               ,(int)((ulonglong)(double)(DAT_00807420 * _DAT_00790780) >> 0x20),
               SUB84((double)(DAT_00807420 * _DAT_00790784),0),
               (int)((ulonglong)(double)(DAT_00807420 * _DAT_00790784) >> 0x20),
               (double)(DAT_00807424 * _DAT_00790780),(double)(DAT_00807424 * _DAT_00790784));
  FUN_006dd530(DAT_00807598,&local_10,&local_c,&local_8);
  FUN_006dd790(DAT_00807598,
               ((local_8 - _DAT_0079077c) * (float)_DAT_00790770 - _DAT_0080742c * _DAT_00790784) -
               _DAT_0080742c * _DAT_0079070c);
  FUN_006dd800(DAT_00807598,
               _DAT_0080742c * _DAT_00790784 + local_8 * (float)_DAT_00790770 + (float)_DAT_00790760
              );
  thunk_FUN_004a9b60(DAT_00807410,DAT_00807414,DAT_00807418,DAT_0080741c);
  thunk_FUN_004a8f20(1);
  DAT_0080674c = 2;
  DAT_0080745d = 0;
  if (uVar5 == 1) {
    thunk_FUN_004a9c80(1);
  }
  else {
    if (uVar5 != 2) {
      DAT_0080674c = 2;
      DAT_0080745d = 0;
      DAT_00858df8 = (undefined4 *)local_5c;
      return;
    }
    thunk_FUN_004a9c80(1);
    thunk_FUN_004a9c80(1);
  }
  thunk_FUN_00567510(&DAT_00807658,DAT_008073d8,DAT_008073dc,DAT_008073fc,DAT_0080743c & 0xff);
  DAT_00858df8 = (undefined4 *)local_5c;
  return;
}

