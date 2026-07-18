
uint FUN_006b6020(int param_1,uint param_2,char *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  while (uVar2 <= param_2) {
    uVar2 = FUN_006b5480(param_1);
    if (uVar2 != 0) {
      FUN_006a5e40(uVar2,DAT_007ed77c,0x7edb98,0xe);
      return uVar2;
    }
    uVar2 = *(uint *)(param_1 + 0xc);
  }
  pcVar3 = (char *)0x0;
  if ((param_3 != (char *)0x0) && (pcVar3 = FUN_006c49b0(param_3), pcVar3 == (char *)0x0)) {
    return 0xfffffffe;
  }
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x14) + param_2 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_006a5e90(puVar1);
  }
  *(char **)(*(int *)(param_1 + 0x14) + param_2 * 4) = pcVar3;
  if (*(uint *)(param_1 + 8) <= param_2) {
    *(uint *)(param_1 + 8) = param_2 + 1;
  }
  return param_2;
}

