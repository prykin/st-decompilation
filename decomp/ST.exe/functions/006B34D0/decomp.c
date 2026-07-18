
int FUN_006b34d0(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0;
  if (param_2 < param_1[0x68]) {
    puVar1 = *(uint **)(param_1[0x6c] + param_2 * 4);
    if ((*puVar1 & 0x8000) != 0) {
      if ((*puVar1 & 0x80000) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
      }
      if (((((*puVar1 & 0x20) == 0) || (puVar1[6] != param_4)) || (puVar1[7] != param_5)) ||
         ((param_3 != 0xfffffffe && (puVar1[0x31] != param_3)))) {
        puVar1[6] = param_4;
        puVar1[7] = param_5;
        if ((int)param_3 < 0) {
          bVar3 = param_3 == 0xffffffff;
          param_3 = puVar1[0x31];
          if (bVar3) {
            param_3 = param_3 + 1;
          }
          if ((puVar1[0x32] != 0) && ((int)puVar1[0x32] <= (int)param_3)) {
            param_3 = 0;
          }
        }
        else if (puVar1[0x32] != 0) {
          param_3 = (int)param_3 % (int)puVar1[0x32];
        }
        puVar1[0x31] = param_3;
        iVar2 = FUN_006b3120(param_1,puVar1);
        *puVar1 = *puVar1 & 0xffffffef;
      }
      if ((*puVar1 & 0x80000) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
      }
      if (iVar2 != 0) {
        FUN_006a5e40(iVar2,DAT_007ed77c,0x7edac0,0x6ab);
        return iVar2;
      }
    }
  }
  return 0;
}

