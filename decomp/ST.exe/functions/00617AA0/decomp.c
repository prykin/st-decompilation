
void __thiscall FUN_00617aa0(void *this,int param_1)

{
  int iVar1;
  int groupContent;
  uint uVar2;
  bool bVar3;
  
  groupContent = *(int *)((int)this + 0x5e);
  if (groupContent != 0) {
    uVar2 = 0;
    if (0 < *(int *)(groupContent + 0xc)) {
      bVar3 = *(int *)(groupContent + 0xc) != 0;
      do {
        if (bVar3) {
          iVar1 = *(int *)(groupContent + 8) * uVar2 + *(int *)(groupContent + 0x1c);
        }
        else {
          iVar1 = 0;
        }
        if (*(int *)(iVar1 + 0x1c) == param_1) {
          FUN_006b0c70(groupContent,uVar2);
        }
        groupContent = *(int *)((int)this + 0x5e);
        uVar2 = uVar2 + 1;
        bVar3 = uVar2 < *(uint *)(groupContent + 0xc);
      } while ((int)uVar2 < (int)*(uint *)(groupContent + 0xc));
    }
  }
  return;
}

