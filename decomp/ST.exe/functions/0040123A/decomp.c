
uint __thiscall thunk_FUN_005f4370(void *this,int *param_1,int *param_2,int *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = 0xffffffff;
  if (param_4 == 0) {
    *param_1 = (int)*(short *)((int)this + 0xd1);
    *param_2 = (int)*(short *)((int)this + 0xd3);
    iVar2 = (*(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)this + 0xfb)) *
            *(int *)((int)this + 0xdf);
    *param_3 = *(short *)((int)this + 0xd5) + iVar2;
    uVar1 = (uint)(*(int *)((int)this + 0xef) <= iVar2);
  }
  else {
    if (param_4 == 1) {
      iVar4 = *(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)this + 0xfb);
      iVar2 = *(int *)((int)this + 0xe7);
      iVar3 = iVar4 * iVar4;
      *param_3 = (*(int *)((int)this + 0xdf) * iVar3) / 20000 +
                 (*(int *)((int)this + 0xeb) * iVar3 * iVar4) / 30000 +
                 *(int *)((int)this + 0xe3) * iVar4 + (int)*(short *)((int)this + 0xd5);
      *param_1 = (*(int *)((int)this + 0xd7) * iVar3) / 20000 + (int)*(short *)((int)this + 0xd1);
      *param_2 = (*(int *)((int)this + 0xdb) * iVar3) / 20000 + (int)*(short *)((int)this + 0xd3);
      if (0x1f6 < *(int *)((int)this + 0xef)) {
        return (uint)(*(int *)((int)this + 0xf3) + -3 <= (iVar2 * iVar3) / 20000);
      }
      return (uint)(iVar4 == *(int *)((int)this + 0xe7));
    }
    if (param_4 == 2) {
      iVar2 = *(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)this + 0xfb);
      *param_1 = (*(int *)((int)this + 0xd7) * iVar2) / 10000 + (int)*(short *)((int)this + 0xd1);
      *param_2 = (*(int *)((int)this + 0xdb) * iVar2) / 10000 + (int)*(short *)((int)this + 0xd3);
      *param_3 = ((*(int *)((int)this + 0xdf) * iVar2) / 10000 -
                 (*(int *)((int)this + 0xf7) * iVar2 * iVar2) / 20000) +
                 (int)*(short *)((int)this + 0xd5);
      return (uint)(*(int *)((int)this + 0xef) <= (*(int *)((int)this + 0xe3) * iVar2) / 10000);
    }
  }
  return uVar1;
}

