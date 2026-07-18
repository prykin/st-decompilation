
LRESULT FUN_006c3480(HWND param_1,uint param_2,uint param_3,LPARAM param_4)

{
  LRESULT LVar1;
  
  if (param_2 < 0x86) {
    if ((param_2 == 0x85) || (param_2 == 0xf)) {
LAB_006c34e5:
      LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
      return LVar1;
    }
  }
  else if (param_2 != 0x86) {
    if (param_2 == 0x101) {
      if (param_3 == 0x1b) {
        DAT_008568cc = 1;
      }
      goto LAB_006c34e5;
    }
    if ((param_2 == 0x112) && ((param_3 & 0xfff0) != 0xf140)) {
      return 0;
    }
  }
  return 0;
}

