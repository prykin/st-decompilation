
void FUN_0042aac0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 < param_3 + param_2) {
    puVar2 = (undefined4 *)(param_1 + param_2 * 4);
    for (iVar1 = (param_3 + param_2) - param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}

