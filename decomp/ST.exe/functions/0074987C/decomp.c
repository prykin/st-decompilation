
void FUN_0074987c(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if ((*(int *)(param_2 + 0x10) == 0) ||
     (((*(int *)(param_2 + 0x28) == DAT_007a1240 && (*(int *)(param_2 + 0x2c) == DAT_007a1244)) &&
      (*(int *)(param_2 + 0x30) == DAT_007a1248)))) {
    puVar1 = &DAT_007a16f0;
  }
  else if (((*(int *)(param_2 + 0x28) != DAT_007a1250) || (*(int *)(param_2 + 0x2c) != DAT_007a1254)
           ) || (puVar1 = &DAT_007a1700, *(int *)(param_2 + 0x30) != DAT_007a1258)) {
    puVar1 = &DAT_0079e368;
  }
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  return;
}

