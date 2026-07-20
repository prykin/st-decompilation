
bool FUN_004961b0(short param_1,short param_2,short param_3)

{
  if ((((-1 < param_1) && (param_1 < SHORT_007fb240)) && (-1 < param_2)) &&
     (((param_2 < SHORT_007fb242 && (-1 < param_3)) && (param_3 < SHORT_007fb244)))) {
    return *(short *)(DAT_007fb280 +
                     ((int)SHORT_007fb278 * (int)param_2 + (int)SHORT_007fb27e * (int)param_3 +
                     (int)param_1) * 2) == 0;
  }
  return false;
}

