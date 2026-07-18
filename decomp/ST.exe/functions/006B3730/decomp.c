
int FUN_006b3730(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  
  if (param_1[0x68] <= param_2) {
    return 0;
  }
  puVar1 = *(uint **)(param_1[0x6c] + param_2 * 4);
  if ((*puVar1 & 0x80000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
  }
  if (((((puVar1[6] != param_4) || (puVar1[7] != param_5)) || ((*puVar1 & 0x10) != 0)) ||
      ((param_3 != 0xfffffffe && (puVar1[0x31] != param_3)))) && ((*puVar1 & 0x8000) != 0)) {
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
    if ((*puVar1 & 0x30) != 0) {
      iVar2 = FUN_006b3120(param_1,puVar1);
      *puVar1 = *puVar1 & 0xffffffef;
      goto LAB_006b37f9;
    }
  }
  iVar2 = 0;
LAB_006b37f9:
  if ((*puVar1 & 0x80000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
  }
  if (iVar2 == 0) {
    return 0;
  }
  FUN_006a5e40(iVar2,DAT_007ed77c,0x7edac0,0x72c);
  return iVar2;
}

