
void __thiscall FUN_0063c030(void *this,undefined4 param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  sVar1 = *(short *)((int)this + 0x24d);
  iVar3 = (int)sVar1;
  sVar2 = *(short *)((int)this + 0x24f);
  iVar4 = (int)sVar2;
  iVar5 = (int)*(short *)((int)this + 0x251);
  *(int *)((int)this + 0x266) = iVar3;
  *(int *)((int)this + 0x26a) = iVar4;
  *(int *)((int)this + 0x26e) = iVar5;
  *(int *)((int)this + 0x272) = iVar3;
  *(int *)((int)this + 0x276) = iVar4;
  *(int *)((int)this + 0x27a) = iVar5;
  if (iVar3 < 0) {
    iVar3 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar3 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                        (short)((longlong)iVar3 * 0x28c1979 >> 0x3f));
  }
  *(int *)((int)this + 0x286) = iVar3;
  if (iVar4 < 0) {
    iVar3 = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar3 = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                        (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
  }
  *(int *)((int)this + 0x28a) = iVar3;
  if (*(int *)((int)this + 0x245) == 2) {
    *(undefined2 *)((int)this + 599) = 0x451;
  }
  *(int *)((int)this + 0x27e) = iVar5;
  *(undefined4 *)((int)this + 0x28e) = param_1;
  *(int *)((int)this + 0x282) = (int)*(short *)((int)this + 599);
  *(undefined4 *)((int)this + 0x292) = 0x41;
  *(undefined4 *)((int)this + 0x296) = 1;
  *(undefined4 *)((int)this + 0x29a) = 1;
  *(undefined1 *)((int)this + 0x29e) = 1;
  return;
}

