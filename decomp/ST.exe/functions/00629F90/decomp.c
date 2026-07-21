
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00629f90(void *this,AnonShape_00629F90_C3CBACCB *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  short sVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0_00;
  longlong lVar7;

  *(undefined4 *)((int)this + 0xd2) = param_1->field_0042;
  *(undefined4 *)((int)this + 0x46) = param_1->field_0020;
  *(undefined4 *)((int)this + 0x4a) = param_1->field_0024;
  *(undefined4 *)((int)this + 0x4e) = param_1->field_0028;
  *(undefined4 *)((int)this + 0x7a) = param_1->field_0020;
  *(undefined4 *)((int)this + 0x7e) = param_1->field_0024;
  *(undefined4 *)((int)this + 0x82) = param_1->field_0028;
  *(undefined4 *)((int)this + 0x52) = param_1->field_0020;
  *(undefined4 *)((int)this + 0x56) = param_1->field_0024;
  *(undefined4 *)((int)this + 0x5a) = param_1->field_0028;
  if (*(char *)((int)this + 0x40) != '\0') {
    uVar5 = thunk_FUN_0062b4a0((int)this);
    *(char *)((int)this + 0xd6) = (char)uVar5;
  }
  fsin((float10)param_1->field_002C * (float10)_DAT_0079d064 * (float10)_DAT_0079d060);
  lVar7 = Library::MSVCRT::__ftol();
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  fcos(extraout_ST0);
  *(int *)((int)this + 0x8a) = (int)lVar7;
  lVar7 = Library::MSVCRT::__ftol();
  iVar6 = (int)lVar7;
  *(int *)((int)this + 0x8e) = iVar6;
  if (iVar6 < 0) {
    *(int *)((int)this + 0x8e) = -iVar6;
  }
  fsin((float10)param_1->field_0030 * (float10)_DAT_0079d064 * (float10)_DAT_0079d060);
  lVar7 = Library::MSVCRT::__ftol();
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  fcos(extraout_ST0_00);
  *(int *)((int)this + 0x92) = (int)lVar7;
  lVar7 = Library::MSVCRT::__ftol();
  *(int *)((int)this + 0x96) = (int)lVar7;
  *(undefined4 *)((int)this + 0x9a) = param_1->field_0034;
  *(undefined4 *)((int)this + 0xa2) = 5;
  if (param_1->field_0038 == 0) {
    *(undefined4 *)((int)this + 0xa6) = 1000;
  }
  else {
    *(int *)((int)this + 0xa6) = param_1->field_0038;
  }
  iVar6 = *(int *)((int)this + 0x46);
  *(undefined4 *)((int)this + 0xaa) = param_2;
  *(undefined4 *)((int)this + 0xae) = param_2;
  sVar3 = (short)(iVar6 >> 0x1f);
  if (iVar6 < 0) {
    iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar3) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar3) -
                        (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
  }
  iVar2 = *(int *)((int)this + 0x4a);
  *(int *)((int)this + 0x5e) = iVar6;
  sVar3 = (short)(iVar2 >> 0x1f);
  if (iVar2 < 0) {
    iVar6 = (short)(((short)(iVar2 / 0xc9) + sVar3) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar6 = (int)(short)(((short)(iVar2 / 0xc9) + sVar3) -
                        (short)((longlong)iVar2 * 0x28c1979 >> 0x3f));
  }
  iVar2 = *(int *)((int)this + 0x4e);
  *(int *)((int)this + 0x62) = iVar6;
  if (iVar2 < 0) {
    iVar6 = (short)(iVar2 / 200) + -1;
  }
  else {
    iVar6 = (int)(short)(iVar2 / 200);
  }
  *(int *)((int)this + 0x66) = iVar6;
  cVar1 = param_1->field_0041;
  *(char *)((int)this + 0xc0) = cVar1;
  if (cVar1 == '\0') {
    return 0;
  }
  *(undefined1 *)((int)this + 0xbe) = 0x1e;
  switch(*(uint *)((int)this + 0x14) >> 8 & 0xff) {
  case 0:
    if (param_1->field_001C == 4) {
      *(byte *)((int)this + 0xbe) = (byte)(&DAT_007d0af0)[(uint)param_1->field_0014 * 8] >> 1;
      goto cf_common_exit_0062A1E3;
    }
    bVar4 = (byte)(&DAT_007d0a70)[(uint)param_1->field_0014 * 8] >> 1;
    goto LAB_0062a1dd;
  case 1:
  case 0x20:
    *(byte *)((int)this + 0xbe) = (byte)(&DAT_007d0bf0)[(uint)param_1->field_0014 * 8] >> 1;
    goto cf_common_exit_0062A1E3;
  case 2:
  case 8:
  case 0x40:
    iVar6 = DAT_007d09d4;
    break;
  default:
    goto cf_common_exit_0062A1E3;
  case 4:
    iVar6 = *(int *)(&DAT_007d0a00 + (uint)*(byte *)((int)this + 0x14) * 4);
    break;
  case 0x10:
    iVar6 = *(int *)(&DAT_007d0af0 + (uint)param_1->field_0014 * 8);
    break;
  case 0x80:
    iVar6 = DAT_007d08b8;
  }
  bVar4 = (byte)(iVar6 / 2);
LAB_0062a1dd:
  *(byte *)((int)this + 0xbe) = bVar4;
cf_common_exit_0062A1E3:
  *(char *)((int)this + 0xbe) = *(char *)((int)this + 0xbe) + '\n';
  return 0;
}

