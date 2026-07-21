
undefined4 FUN_0071b970(uint *param_1,byte *param_2)

{
  undefined4 uVar1;

  uVar1 = 0;
  if (((((*param_1 & 8) != 0) && ((*param_2 & 8) != 0)) && (param_1[1] == *(uint *)(param_2 + 4)))
     || ((((*param_1 & 8) == 0 && ((*param_2 & 8) == 0)) &&
         (((byte)param_1[1] == param_2[4] && (*(byte *)((int)param_1 + 5) == param_2[5])))))) {
    uVar1 = 1;
  }
  return uVar1;
}

