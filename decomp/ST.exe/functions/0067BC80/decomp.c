
int __cdecl FUN_0067bc80(int param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  bool bVar6;
  int local_8;
  
  uVar5 = 0;
  sVar4 = 10000;
  uVar2 = *(uint *)(param_1 + 0xc);
  local_8 = 0;
  bVar6 = uVar2 != 0;
  if (0 < (int)uVar2) {
    do {
      if ((((bVar6) &&
           (iVar3 = *(int *)(param_1 + 8) * uVar5 + *(int *)(param_1 + 0x1c), iVar3 != 0)) &&
          ((*(uint *)(iVar3 + 0x14) & param_2) != 0)) &&
         ((sVar1 = *(short *)(iVar3 + 0x1a), sVar1 < sVar4 &&
          (sVar4 = sVar1, local_8 = iVar3, sVar1 == 0)))) {
        return iVar3;
      }
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < uVar2;
    } while ((int)uVar5 < (int)uVar2);
  }
  return local_8;
}

