
undefined4 __thiscall FUN_00627280(void *this,short param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar2 = *(int *)((int)this + 0x2c2) - (int)param_1;
  iVar3 = *(int *)((int)this + 0x2c6) - (int)param_2;
  iVar4 = *(int *)((int)this + 0x2ca) - (int)param_3;
  iVar1 = (uint)*(byte *)((int)this + 0x2ad) * 6;
  if ((iVar2 * iVar2 * 1000) /
      ((int)*(short *)(&DAT_007d04a8 + iVar1) * (int)*(short *)(&DAT_007d04a8 + iVar1)) +
      (iVar3 * iVar3 * 1000) /
      ((int)*(short *)(&DAT_007d04aa + iVar1) * (int)*(short *)(&DAT_007d04aa + iVar1)) +
      (iVar4 * iVar4 * 1000) /
      ((int)*(short *)(&DAT_007d04ac + iVar1) * (int)*(short *)(&DAT_007d04ac + iVar1)) < 1000) {
    return 1;
  }
  return 0xffffffff;
}

