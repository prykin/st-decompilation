
uint FUN_006b2590(int *param_1,uint param_2,int param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (*(int *)(*param_1 + 0x20) != 0x10) {
    if (param_2 < (uint)param_1[0x68]) {
      puVar1 = *(uint **)(param_1[0x6c] + param_2 * 4);
      uVar2 = *puVar1;
      if ((uVar2 & 0xc000) == 0x8000) {
        uVar3 = uVar2 >> 0xc & 1;
        if (param_3 == 0) {
          uVar2 = uVar2 & 0xffffefff;
        }
        else {
          uVar2 = uVar2 | 0x1000;
        }
        *puVar1 = uVar2;
        FUN_006b23e0((int)param_1,puVar1);
        puVar1[0x16] = param_4;
        if ((((*puVar1 & 0x4000000) != 0) && (puVar1[0x34] != 0)) &&
           (iVar4 = 0, 0 < (int)puVar1[0x30])) {
          do {
            uVar2 = *(uint *)(puVar1[0x34] + iVar4 * 4);
            if (-1 < (int)uVar2) {
              FUN_006b2590(param_1,uVar2,param_3,param_4);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)puVar1[0x30]);
        }
      }
    }
    return uVar3;
  }
  return 0;
}

