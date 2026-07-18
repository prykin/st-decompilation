
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00673190(undefined4 param_1)

{
  if (0 < DAT_00811914) {
    DAT_00811914 = DAT_00811914 + -1;
    *(undefined1 *)(DAT_0085755c + DAT_00811914) = (undefined1)param_1;
    _DAT_00811950 = 0;
    return;
  }
  _DAT_00811950 = param_1;
  return;
}

