
void __cdecl FUN_00553390(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  if ((((param_3 != 0) && (-1 < param_1)) && (param_1 < param_4)) &&
     (((-1 < param_2 && (param_2 < param_5)) && ((-1 < param_6 && (param_6 < 0x10)))))) {
    *(char *)(param_2 * param_4 + param_1 + param_3) = (char)param_6;
    if (DAT_00802a50 != (code *)0x0) {
      (*DAT_00802a50)(param_1,param_2,param_3);
    }
  }
  return;
}

