
undefined4 __thiscall thunk_FUN_00630ac0(void *this,uint param_1)

{
  int iVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)((int)this + 0x38);
  if ((*(uint *)(iVar4 + 0xc) <= param_1) ||
     (psVar3 = (short *)(*(int *)(iVar4 + 8) * param_1 + *(int *)(iVar4 + 0x1c)),
     psVar3 == (short *)0x0)) {
    return 0;
  }
  sVar2 = psVar3[3];
  iVar5 = ((int)psVar3[2] * (int)DAT_007fb240 + (int)psVar3[1]) * (int)DAT_007fb242 + (int)*psVar3;
  iVar1 = DAT_007fb242 + iVar5;
  iVar4 = FUN_006b0c70(iVar4,param_1);
  if (iVar4 != 0) {
    return 0;
  }
  if (sVar2 == 1) {
    *(undefined1 *)(*(int *)((int)this + 0x34) + iVar5) = 0;
    return 1;
  }
  *(undefined1 *)(iVar5 + *(int *)((int)this + 0x34)) = 0;
  *(undefined1 *)(iVar5 + 1 + *(int *)((int)this + 0x34)) = 0;
  *(undefined1 *)(iVar1 + *(int *)((int)this + 0x34)) = 0;
  *(undefined1 *)(iVar1 + 1 + *(int *)((int)this + 0x34)) = 0;
  return 1;
}

