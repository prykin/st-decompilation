
void FUN_006c76b0(int *param_1,int param_2,int param_3)

{
  if (*param_1 == -1) {
    *param_1 = (param_2 - param_1[2]) / 2;
  }
  if (*param_1 < 0) {
    *param_1 = 0;
  }
  if (param_1[1] == -1) {
    param_1[1] = (param_3 - param_1[3]) / 2;
  }
  if (param_1[1] < 0) {
    param_1[1] = 0;
  }
  return;
}

