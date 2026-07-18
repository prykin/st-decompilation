
void FUN_006c2c80(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      _BinkClose_4(*param_1);
    }
    *param_1 = 0;
    (**(code **)(*(int *)param_1[0xd] + 8))((int *)param_1[0xd]);
    param_1[0xd] = 0;
    param_1[2] = param_1[2] & 0xbfffffff;
  }
  return;
}

