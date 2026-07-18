
void FUN_006a5e40(int param_1,int param_2,int param_3,undefined4 param_4)

{
  if ((param_2 != 0) || (DAT_00858dd0 == 0)) {
    DAT_00858dd0 = param_3;
    DAT_00858dd8 = param_4;
    DAT_00858dd4 = param_1;
  }
  if (DAT_00858df8 != 0) {
                    /* WARNING: Subroutine does not return */
    _longjmp((int *)(DAT_00858df8 + 4),param_1);
  }
  return;
}

