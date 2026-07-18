
void FUN_00753260(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    if ((param_1[2] & 0x800000) != 0) {
      param_1[7] = ((undefined4 *)param_1[0xd])[3];
      puVar2 = param_1 + 4;
      puVar3 = (undefined4 *)param_1[0xd];
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    FUN_006d46a0(param_1,0);
  }
  return;
}

