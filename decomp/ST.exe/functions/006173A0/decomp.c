
undefined4 __thiscall FUN_006173a0(void *this,int param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_006acf0d((int)*(short *)((int)this + 0x25a),(int)*(short *)((int)this + 0x25c),
                       (int)*(short *)((int)this + 0x25e),(int)*(short *)((int)this + 0x260),
                       (int)*(short *)((int)this + 0x262),(int)*(short *)((int)this + 0x264));
  if (0 < iVar1) {
    iVar2 = (((int)*(short *)((int)this + 0x25a) - (int)*(short *)((int)this + 0x260)) * 10000) /
            iVar1;
    *(int *)((int)this + 0x27c) = iVar2;
    iVar3 = (((int)*(short *)((int)this + 0x25c) - (int)*(short *)((int)this + 0x262)) * 10000) /
            iVar1;
    *(int *)((int)this + 0x280) = iVar3;
    iVar1 = (((int)*(short *)((int)this + 0x25e) - (int)*(short *)((int)this + 0x264)) * 10000) /
            iVar1;
    *(int *)((int)this + 0x284) = iVar1;
    *param_2 = (iVar2 * param_1) / 10000 + (int)*(short *)((int)this + 0x25a);
    *param_3 = (iVar3 * param_1) / 10000 + (int)*(short *)((int)this + 0x25c);
    *param_4 = (iVar1 * param_1) / 10000 + (int)*(short *)((int)this + 0x25e);
    return 1;
  }
  return 0;
}

