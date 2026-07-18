
undefined4 __fastcall FUN_006646e0(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  iVar3 = *(int *)(param_1 + 0x217);
  iVar1 = *(int *)(iVar3 + 0xc);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar4 = 0;
  if (0 < iVar1) {
    bVar5 = iVar1 != 0;
    do {
      if (bVar5) {
        puVar2 = (uint *)(*(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c));
      }
      else {
        puVar2 = (uint *)0x0;
      }
      if ((0x31 < *puVar2) && (*puVar2 < 100)) {
        FUN_006b0c70(iVar3,uVar4);
      }
      iVar3 = *(int *)(param_1 + 0x217);
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < *(uint *)(iVar3 + 0xc);
    } while ((int)uVar4 < (int)*(uint *)(iVar3 + 0xc));
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x217) + 0xc);
}

