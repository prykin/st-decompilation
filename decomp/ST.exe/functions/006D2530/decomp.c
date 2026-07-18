
void FUN_006d2530(int *param_1,undefined4 *param_2)

{
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[1] = param_2;
  }
  if (*param_1 == 0) {
    *param_1 = (int)param_2;
  }
  *param_2 = 0;
  param_2[1] = param_1[1];
  param_1[1] = (int)param_2;
  return;
}

