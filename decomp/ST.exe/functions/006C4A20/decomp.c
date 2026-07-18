
undefined4 * FUN_006c4a20(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = FUN_006aac10(0x3c);
  puVar1[8] = param_1;
  iVar2 = FUN_006d7770((int)puVar1);
  if (iVar2 != 0) {
    FUN_006a5e90(puVar1);
    FUN_006a5e40(iVar2,DAT_007ed77c,0x7edf24,0x10);
    return (undefined4 *)0x0;
  }
  return puVar1;
}

