
undefined4 FUN_0074736a(int param_1,undefined4 *param_2,short *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
  EnterCriticalSection(lpCriticalSection);
  *(undefined4 **)(param_1 + 0x34) = param_2;
  if (param_2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  else {
    iVar2 = (**(code **)*param_2)(param_2,&DAT_007a1ae0,(undefined4 *)(param_1 + 0x38));
    if (-1 < iVar2) {
      piVar1 = *(int **)(param_1 + 0x38);
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
    FUN_0072e2b0(*(undefined4 **)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (param_3 != (short *)0x0) {
    iVar2 = FUN_0074d664(param_3);
    uVar5 = (iVar2 + 1U) * 2;
    puVar3 = (undefined4 *)FUN_0072e530(uVar5);
    *(undefined4 **)(param_1 + 0x30) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      for (uVar4 = (iVar2 + 1U & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *(undefined4 *)param_3;
        param_3 = param_3 + 2;
        puVar3 = puVar3 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)puVar3 = (char)*param_3;
        param_3 = (short *)((int)param_3 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}

