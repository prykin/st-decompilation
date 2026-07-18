
void FUN_006b3af0(int *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_2 < (uint)param_1[0x68]) {
    puVar1 = *(uint **)(param_1[0x6c] + param_2 * 4);
    if ((*puVar1 & 0x80000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
    }
    if (((*puVar1 & 0x30) != 0) && ((*puVar1 & 0x8000) != 0)) {
      param_1[0x6d] = 1;
      uVar2 = *puVar1;
      uVar3 = uVar2 & 0xffffffcd;
      *puVar1 = uVar3;
      if ((uVar2 & 1) != 0) {
        *puVar1 = uVar3 | 4;
      }
      if (((*puVar1 & 0x4000000) != 0) && (puVar1[0x34] != 0)) {
        uVar2 = puVar1[0x30];
        iVar4 = 0;
        if (0 < (int)uVar2) {
          do {
            uVar3 = *(uint *)(puVar1[0x34] + iVar4 * 4);
            if (-1 < (int)uVar3) {
              FUN_006b3af0(param_1,uVar3);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)uVar2);
        }
      }
    }
    if ((*puVar1 & 0x80000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
    }
  }
  return;
}

