
DWORD FUN_00754ec0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
    for (puVar1 = *(undefined4 **)(*(int *)(param_1 + 8) + 0x4c); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      DVar3 = FUN_00757360(param_1,(int)puVar1);
      if (DVar3 != 0) goto LAB_00754f0b;
    }
    iVar2 = *(int *)(param_1 + 8);
    if (((*(byte *)(iVar2 + 8) & 0x10) != 0) &&
       (DVar3 = FUN_006d4860(iVar2,0,(undefined4 *)(iVar2 + 0x10),0x20), DVar3 != 0)) {
LAB_00754f0b:
      FUN_006a5e40(DVar3,DAT_007ed77c,0x7f2cd0,0x20);
      return DVar3;
    }
  }
  return 0;
}

