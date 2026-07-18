
int FUN_006b3430(int *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  if (param_2 < (uint)param_1[0x68]) {
    puVar1 = *(uint **)(param_1[0x6c] + param_2 * 4);
    if ((*puVar1 & 0x8030) == 0x8000) {
      if ((*puVar1 & 0x80000) == 0) {
        iVar2 = FUN_006b3120((uint *)param_1,puVar1);
      }
      else {
        EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
        iVar2 = FUN_006b3120((uint *)param_1,puVar1);
        LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
      }
      if (iVar2 != 0) {
        FUN_006a5e40(iVar2,DAT_007ed77c,0x7edac0,0x67a);
        return iVar2;
      }
    }
  }
  return 0;
}

