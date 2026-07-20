
undefined4 __fastcall FUN_006646e0(int param_1)

{
  int iVar1;
  uint *puVar2;
  int groupContent;
  uint uVar3;
  bool bVar4;
  
  groupContent = *(int *)(param_1 + 0x217);
  iVar1 = *(int *)(groupContent + 0xc);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar3 = 0;
  if (0 < iVar1) {
    bVar4 = iVar1 != 0;
    do {
      if (bVar4) {
        puVar2 = (uint *)(*(int *)(groupContent + 8) * uVar3 + *(int *)(groupContent + 0x1c));
      }
      else {
        puVar2 = (uint *)0x0;
      }
      if ((0x31 < *puVar2) && (*puVar2 < 100)) {
        FUN_006b0c70(groupContent,uVar3);
      }
      groupContent = *(int *)(param_1 + 0x217);
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < *(uint *)(groupContent + 0xc);
    } while ((int)uVar3 < (int)*(uint *)(groupContent + 0xc));
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x217) + 0xc);
}

