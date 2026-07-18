
void FUN_006d2560(int *param_1,int *param_2)

{
  if (*param_2 == 0) {
    param_1[1] = param_2[1];
  }
  else {
    *(int *)(*param_2 + 4) = param_2[1];
  }
  if ((int *)param_2[1] != (int *)0x0) {
    *(int *)param_2[1] = *param_2;
    return;
  }
  *param_1 = *param_2;
  return;
}

