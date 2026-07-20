
undefined4 __thiscall FUN_00664650(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int groupContent;
  uint uVar3;
  bool bVar4;
  
  groupContent = *(int *)((int)this + 0x217);
  iVar1 = *(int *)(groupContent + 0xc);
  if (iVar1 != 0) {
    uVar3 = 0;
    if (0 < iVar1) {
      bVar4 = iVar1 != 0;
      do {
        if (bVar4) {
          piVar2 = (int *)(*(int *)(groupContent + 8) * uVar3 + *(int *)(groupContent + 0x1c));
        }
        else {
          piVar2 = (int *)0x0;
        }
        if (*piVar2 == param_1) {
          FUN_006b0c70(groupContent,uVar3);
        }
        groupContent = *(int *)((int)this + 0x217);
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < *(uint *)(groupContent + 0xc);
      } while ((int)uVar3 < (int)*(uint *)(groupContent + 0xc));
    }
    return *(undefined4 *)(*(int *)((int)this + 0x217) + 0xc);
  }
  return 0xffffffff;
}

