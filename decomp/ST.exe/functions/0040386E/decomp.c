
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_004a8e00(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  switch(DAT_008073fc) {
  case 0:
    param_1 = param_1 - param_3;
    param_2 = param_2 - param_3;
    break;
  case 1:
    param_1 = param_1 + param_3;
    param_2 = param_2 - param_3;
    break;
  case 2:
    iVar1 = param_3;
    goto LAB_004a8e4a;
  case 3:
    iVar1 = -param_3;
LAB_004a8e4a:
    param_1 = param_1 + iVar1;
    param_2 = param_2 + param_3;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (*DAT_00806750 + -1 < param_1) {
    param_1 = *DAT_00806750 + -1;
  }
  if (DAT_00806750[1] + -1 < param_2) {
    param_2 = DAT_00806750[1] + -1;
  }
  DAT_008073d8 = param_1;
  DAT_008073dc = param_2;
  DAT_008073d0 = (float)param_1 * _DAT_007904f8 + _DAT_007904f4;
  _DAT_008073d4 = (float)param_2 * _DAT_007904f8 + _DAT_007904f4;
  return;
}

