
undefined4 * FUN_007593e0(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = *param_1;
  if (0x3b9ac9f4 < param_3) {
    FUN_007593c0();
  }
  if ((param_3 & 7) != 0) {
    param_3 = param_3 + (8 - (param_3 & 7));
  }
  if ((param_2 < 0) || (1 < param_2)) {
    FUN_006a5e40(0xc,DAT_007ed77c,0x7f2dc8,0x164);
  }
  puVar3 = (undefined4 *)FUN_00760320(param_1,param_3 + 0xc);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_007593c0();
  }
  *(uint *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + param_3 + 0xc;
  uVar2 = *(undefined4 *)(iVar1 + 0x38 + param_2 * 4);
  puVar3[1] = param_3;
  *puVar3 = uVar2;
  puVar3[2] = 0;
  *(undefined4 **)(iVar1 + 0x38 + param_2 * 4) = puVar3;
  return puVar3 + 3;
}

