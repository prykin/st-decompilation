
int __cdecl FUN_0067bd50(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  iVar2 = 0;
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar4 = 0;
  if (0 < (int)uVar1) {
    bVar5 = uVar1 != 0;
    do {
      if ((bVar5) && (iVar3 = *(int *)(param_1 + 8) * uVar4 + *(int *)(param_1 + 0x1c), iVar3 != 0))
      {
        iVar2 = iVar2 + *(short *)(iVar3 + 0x1a);
      }
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < uVar1;
    } while ((int)uVar4 < (int)uVar1);
  }
  return iVar2;
}

