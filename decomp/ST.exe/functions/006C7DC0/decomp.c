
undefined4 * FUN_006c7dc0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = FUN_006aac10(0x76);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *(undefined4 *)((int)puVar1 + 0x36) = param_1;
  *(code **)((int)puVar1 + 0x42) = FUN_006c7e30;
  *(code **)((int)puVar1 + 0x4a) = FUN_006c7e80;
  *(code **)((int)puVar1 + 0x4e) = FUN_006c7e90;
  iVar2 = FUN_006c6ae0((int)puVar1);
  if (iVar2 != 0) {
    FUN_006c6fc0(puVar1);
    FUN_006a5e40(iVar2,DAT_007ed77c,0x7ee060,0x41);
    return (undefined4 *)0x0;
  }
  return puVar1;
}

