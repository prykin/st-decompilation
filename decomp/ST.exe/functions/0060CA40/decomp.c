
void __thiscall FUN_0060ca40(void *this,int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar4 = *(int *)((int)this + 0x209) - param_1;
  *(int *)((int)this + 0x209) = iVar4;
  thunk_FUN_0060bcb0(this,iVar4);
  if (*(int *)((int)this + 0x209) == 0) {
    iVar4 = *(int *)((int)this + 0x1f9);
    *(undefined4 *)((int)this + 0x209) = 0;
    sVar1 = (short)(iVar4 >> 0x1f);
    if (iVar4 < 0) {
      iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar1) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar1) -
                          (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
    }
    iVar3 = *(int *)((int)this + 0x1ed);
    sVar1 = (short)(iVar3 >> 0x1f);
    if (iVar3 < 0) {
      iVar3 = (short)(((short)(iVar3 / 0xc9) + sVar1) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar3 = (int)(short)(((short)(iVar3 / 0xc9) + sVar1) -
                          (short)((longlong)iVar3 * 0x28c1979 >> 0x3f));
    }
    iVar2 = *(int *)((int)this + 0x1e9);
    sVar1 = (short)(iVar2 >> 0x1f);
    if (iVar2 < 0) {
      iVar2 = (short)(((short)(iVar2 / 0xc9) + sVar1) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar2 = (int)(short)(((short)(iVar2 / 0xc9) + sVar1) -
                          (short)((longlong)iVar2 * 0x28c1979 >> 0x3f));
    }
    thunk_FUN_00496e40(iVar2,iVar3,iVar4,*(int *)((int)this + 0x18));
  }
  return;
}

