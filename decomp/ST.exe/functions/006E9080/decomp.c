
undefined4 * __thiscall FUN_006e9080(void *this,uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  if ((*(uint *)((int)this + 0x310) <= param_1) ||
     (puVar1 = (uint *)(*(int *)((int)this + 0x31c) + param_1 * 0x114), (*puVar1 & 0x8000) == 0)) {
    if (param_1 != 0xffffffff) {
      FUN_006e8c50();
    }
    return (undefined4 *)0x0;
  }
  uVar2 = puVar1[0x28];
  if ((((uVar2 != 0) && (param_2 < puVar1[0x25])) &&
      (iVar3 = **(int **)(uVar2 + 4 + param_2 * 8), iVar3 != 0)) &&
     (((int)param_3 < 0 || (param_3 < puVar1[0x25])))) {
    if ((int)param_3 < 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = **(undefined4 **)(uVar2 + 4 + param_3 * 8);
    }
    puVar4 = FUN_006e9000(this,iVar3,(short)puVar1[0x21],(short)puVar1[0x22],puVar1[0x1d],
                          puVar1[0x1e],puVar1[0x1f],uVar5);
    FUN_006e8ba0(this,param_1);
    return puVar4;
  }
  FUN_006e91a0();
  FUN_006e8ba0(this,param_1);
  return (undefined4 *)0x0;
}

