
int FUN_006b3840(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int local_8;
  
  local_8 = 0;
  if (param_2 < param_1[0x68]) {
    puVar1 = *(uint **)(param_1[0x6c] + param_2 * 4);
    if ((*puVar1 & 0x80000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
    }
    iVar3 = 0;
    if (((param_3 != 0xfffffffe) && (uVar2 = puVar1[0x31], uVar2 != param_3)) &&
       (iVar3 = local_8, (*puVar1 & 0x8000) != 0)) {
      if ((int)param_3 < 0) {
        bVar4 = param_3 != 0xffffffff;
        param_3 = uVar2 + 1;
        if (bVar4) {
          param_3 = uVar2;
        }
        if ((puVar1[0x32] != 0) && ((int)puVar1[0x32] <= (int)param_3)) {
          param_3 = 0;
        }
      }
      else if (puVar1[0x32] != 0) {
        param_3 = (int)param_3 % (int)puVar1[0x32];
      }
      puVar1[0x31] = param_3;
      if (((byte)*puVar1 & 0x30) == 0x20) {
        iVar3 = FUN_006b3120(param_1,puVar1);
      }
    }
    if ((*puVar1 & 0x80000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
    }
    if (iVar3 != 0) {
      FUN_006a5e40(iVar3,DAT_007ed77c,0x7edac0,0x75e);
      return iVar3;
    }
  }
  return 0;
}

