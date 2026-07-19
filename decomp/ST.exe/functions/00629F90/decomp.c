
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00629f90(void *this,int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  short sVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  unkbyte10 extraout_ST0;
  unkbyte10 extraout_ST0_00;
  longlong lVar7;
  
  *(undefined4 *)((int)this + 0xd2) = *(undefined4 *)(param_1 + 0x42);
  *(undefined4 *)((int)this + 0x46) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x4a) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x4e) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x7a) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x7e) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x82) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x52) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x56) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x5a) = *(undefined4 *)(param_1 + 0x28);
  if (*(char *)((int)this + 0x40) != '\0') {
    uVar5 = thunk_FUN_0062b4a0((int)this);
    *(char *)((int)this + 0xd6) = (char)uVar5;
  }
  fsin((float10)*(int *)(param_1 + 0x2c) * (float10)_DAT_0079d064 * (float10)_DAT_0079d060);
  lVar7 = Library::MSVCRT::__ftol();
  fcos(extraout_ST0);
  *(int *)((int)this + 0x8a) = (int)lVar7;
  lVar7 = Library::MSVCRT::__ftol();
  iVar6 = (int)lVar7;
  *(int *)((int)this + 0x8e) = iVar6;
  if (iVar6 < 0) {
    *(int *)((int)this + 0x8e) = -iVar6;
  }
  fsin((float10)*(int *)(param_1 + 0x30) * (float10)_DAT_0079d064 * (float10)_DAT_0079d060);
  lVar7 = Library::MSVCRT::__ftol();
  fcos(extraout_ST0_00);
  *(int *)((int)this + 0x92) = (int)lVar7;
  lVar7 = Library::MSVCRT::__ftol();
  *(int *)((int)this + 0x96) = (int)lVar7;
  *(undefined4 *)((int)this + 0x9a) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0xa2) = 5;
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined4 *)((int)this + 0xa6) = 1000;
  }
  else {
    *(int *)((int)this + 0xa6) = *(int *)(param_1 + 0x38);
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
  cVar1 = *(char *)(param_1 + 0x41);
  *(char *)((int)this + 0xc0) = cVar1;
  if (cVar1 == '\0') {
    return 0;
  }
  *(undefined1 *)((int)this + 0xbe) = 0x1e;
  switch(*(uint *)((int)this + 0x14) >> 8 & 0xff) {
  case 0:
    if (*(int *)(param_1 + 0x1c) == 4) {
      *(byte *)((int)this + 0xbe) = (byte)(&DAT_007d0af0)[(uint)*(byte *)(param_1 + 0x14) * 8] >> 1;
      goto switchD_0062a167_caseD_3;
    }
    bVar4 = (byte)(&DAT_007d0a70)[(uint)*(byte *)(param_1 + 0x14) * 8] >> 1;
    goto LAB_0062a1dd;
  case 1:
  case 0x20:
    *(byte *)((int)this + 0xbe) = (byte)(&DAT_007d0bf0)[(uint)*(byte *)(param_1 + 0x14) * 8] >> 1;
    goto switchD_0062a167_caseD_3;
  case 2:
  case 8:
  case 0x40:
    iVar6 = DAT_007d09d4;
    break;
  default:
    goto switchD_0062a167_caseD_3;
  case 4:
    iVar6 = *(int *)(&DAT_007d0a00 + (uint)*(byte *)((int)this + 0x14) * 4);
    break;
  case 0x10:
    iVar6 = *(int *)(&DAT_007d0af0 + (uint)*(byte *)(param_1 + 0x14) * 8);
    break;
  case 0x80:
    iVar6 = DAT_007d08b8;
  }
  bVar4 = (byte)(iVar6 / 2);
LAB_0062a1dd:
  *(byte *)((int)this + 0xbe) = bVar4;
switchD_0062a167_caseD_3:
  *(char *)((int)this + 0xbe) = *(char *)((int)this + 0xbe) + '\n';
  return 0;
}

