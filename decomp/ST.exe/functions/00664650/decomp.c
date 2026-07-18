
undefined4 __thiscall FUN_00664650(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  iVar3 = *(int *)((int)this + 0x217);
  iVar1 = *(int *)(iVar3 + 0xc);
  if (iVar1 != 0) {
    uVar4 = 0;
    if (0 < iVar1) {
      bVar5 = iVar1 != 0;
      do {
        if (bVar5) {
          piVar2 = (int *)(*(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c));
        }
        else {
          piVar2 = (int *)0x0;
        }
        if (*piVar2 == param_1) {
          FUN_006b0c70(iVar3,uVar4);
        }
        iVar3 = *(int *)((int)this + 0x217);
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < *(uint *)(iVar3 + 0xc);
      } while ((int)uVar4 < (int)*(uint *)(iVar3 + 0xc));
    }
    return *(undefined4 *)(*(int *)((int)this + 0x217) + 0xc);
  }
  return 0xffffffff;
}

