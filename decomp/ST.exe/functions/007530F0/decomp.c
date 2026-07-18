
undefined4 * FUN_007530f0(undefined4 *param_1,LPCSTR param_2,DWORD param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_3 < 0x28) {
    param_3 = 0x28;
  }
  puVar1 = FUN_006d4220(param_1,param_2,param_3,param_4);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar3 = (undefined4 *)puVar1[0xd];
  puVar4 = puVar3;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *puVar3 = 0x4d464b44;
  *(undefined2 *)(puVar3 + 1) = 0x101;
  puVar3[3] = 0x20;
  puVar3[2] = 0x28;
  *(undefined4 *)(puVar1[0xd] + 0x20) = 0x3fffffe0;
  puVar4 = puVar1 + 4;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return puVar1;
}

