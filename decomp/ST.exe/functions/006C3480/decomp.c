
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006C3480 -> EXTERNAL:00000090 @ 006C34EF
   
   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 006C3480 -> EXTERNAL:00000090 @ 006C34EF */

LRESULT FUN_006c3480(HWND hWnd,uint param_2,uint param_3,LPARAM lParam)

{
  LRESULT LVar1;
  
  if (param_2 < 0x86) {
    if ((param_2 == 0x85) || (param_2 == 0xf)) {
LAB_006c34e5:
      LVar1 = DefWindowProcA(hWnd,param_2,param_3,lParam);
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

