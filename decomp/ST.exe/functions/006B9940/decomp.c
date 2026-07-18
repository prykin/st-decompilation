
int FUN_006b9940(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  *param_1 = 0;
  puVar3 = FUN_006aac10(0x510);
  if (puVar3 == (undefined4 *)0x0) {
    return -2;
  }
  iVar4 = DirectDrawCreate(param_2,puVar3 + 0xb,0);
  if (iVar4 == 0) {
    puVar2 = (undefined4 *)puVar3[0xb];
    puVar1 = puVar3 + 0xc;
    iVar4 = (**(code **)*puVar2)(puVar2,&DAT_0079fd88,puVar1);
    if (iVar4 == 0) {
      if (param_4 != (int *)0x0) {
        iVar4 = (**(code **)(*(int *)*puVar1 + 0x50))((int *)*puVar1,param_3,0x55);
        if (iVar4 != 0) goto LAB_006b99e3;
        iVar4 = FUN_006b9a40((int)puVar3,param_4);
        if (iVar4 != 0) goto LAB_006b99e3;
        iVar4 = (**(code **)(*(int *)*puVar1 + 0x50))((int *)*puVar1,param_3,8);
      }
      puVar3[1] = param_3;
    }
  }
LAB_006b99e3:
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar3 + 0x13c));
  if (iVar4 != 0) {
    FUN_006ba600(puVar3);
    if (param_4 != (int *)0x0) {
      FUN_006ab060(param_4);
    }
    FUN_006a5e40(iVar4,DAT_007ed77c,0x7edc48,0x6d);
    return iVar4;
  }
  *param_1 = puVar3;
  return 0;
}

