
undefined4 * FUN_00753170(undefined4 *param_1,LPCSTR param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  puVar1 = FUN_006d4380(param_1,param_2,0);
  if (puVar1 != (undefined4 *)0x0) {
    piVar3 = (int *)puVar1[0xd];
    if ((((0x1f < (uint)puVar1[0xe]) && (*piVar3 == 0x4d464b44)) && ((short)piVar3[1] == 0x101)) &&
       ((*(byte *)(piVar3[3] + (int)piVar3) & 3) == 0)) {
      piVar4 = puVar1 + 4;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      }
      return puVar1;
    }
    FUN_006d46a0(puVar1,0);
    RaiseInternalException(-5,DAT_007ed77c,s_E__DKW_FMM_C_fmem_c_007f2bf4,0x38);
  }
  return (undefined4 *)0x0;
}

