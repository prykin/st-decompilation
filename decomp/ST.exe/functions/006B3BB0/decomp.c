
void FUN_006b3bb0(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  if (param_1 != (int *)0x0) {
    FUN_006b3af0(param_1,param_2);
    if (param_2 < (uint)param_1[0x68]) {
      puVar3 = *(uint **)(param_1[0x6c] + param_2 * 4);
      if ((*puVar3 & 0x8000) != 0) {
        if ((*puVar3 & 0x80000) != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
          FUN_006ab060((LPVOID *)(puVar3 + 0x30));
        }
        uVar1 = *puVar3;
        *puVar3 = uVar1 & 0xffff7fff;
        if ((uVar1 & 0x6000000) != 0) {
          if ((uVar1 & 0x2000000) != 0) {
            FUN_006ab060((LPVOID *)(puVar3 + 0x33));
          }
          if (puVar3[0x34] != 0) {
            iVar2 = 0;
            if (0 < (int)puVar3[0x30]) {
              do {
                uVar1 = *(uint *)(puVar3[0x34] + iVar2 * 4);
                if (-1 < (int)uVar1) {
                  FUN_006b3bb0(param_1,uVar1);
                  puVar3 = *(uint **)(param_1[0x6c] + param_2 * 4);
                }
                iVar2 = iVar2 + 1;
              } while (iVar2 < (int)puVar3[0x30]);
            }
            FUN_006ab060((LPVOID *)(puVar3 + 0x34));
          }
        }
        if ((*puVar3 & 0x80000) != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
        }
      }
    }
  }
  return;
}

