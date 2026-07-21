
undefined1 __thiscall FUN_005f9310(void *this,int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar3 = *(int *)((int)this + 0x2c1);
  sVar1 = (short)(iVar3 >> 0x1f);
  if (iVar3 < 0) {
    iVar3 = (short)(((short)(iVar3 / 0xc9) + sVar1) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar3 = (int)(short)(((short)(iVar3 / 0xc9) + sVar1) -
                        (short)((longlong)iVar3 * 0x28c1979 >> 0x3f));
  }
  iVar4 = *(int *)((int)this + 0x2c5);
  sVar1 = (short)(iVar4 >> 0x1f);
  if (iVar4 < 0) {
    iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar1) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar1) -
                        (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
  }
  iVar2 = *(int *)((int)this + 0x2c9);
  sVar1 = (short)(iVar2 >> 0x1f);
  if (iVar2 < 0) {
    iVar2 = (short)(((short)(iVar2 / 200) + sVar1) - (short)((longlong)iVar2 * 0x51eb851f >> 0x3f))
            + -1;
  }
  else {
    iVar2 = (int)(short)(((short)(iVar2 / 200) + sVar1) -
                        (short)((longlong)iVar2 * 0x51eb851f >> 0x3f));
  }
  if (DAT_008117a4 != (void *)0x0) {
    iVar3 = thunk_FUN_0062d2d0(DAT_008117a4,*(int *)((int)this + 0x235),iVar3,iVar4,iVar2,
                               (int *)((int)this + 0x27d),param_1);
    if (iVar3 != 0) {
      *(undefined1 *)((int)this + 0x29e) = 1;
      return *(undefined1 *)((int)this + 0x29e);
    }
  }
  if (*(char *)((int)this + 0x29e) != '\0') {
    thunk_FUN_005f9450(this);
  }
  return *(undefined1 *)((int)this + 0x29e);
}

