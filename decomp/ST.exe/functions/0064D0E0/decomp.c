
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00652810 -> 0064D0E0 @ 00652AA7 | 00652810 -> 0064D0E0 @ 00652F0A | 00652810 ->
   0064D0E0 @ 00652F75 | 00652810 -> 0064D0E0 @ 00652FBD | 00652810 -> 0064D0E0 @ 006530E0 |
   00652810 -> 0064D0E0 @ 00653127 | 00652810 -> 0064D0E0 @ 006531CA | 00652810 -> 0064D0E0 @
   00653205 | 00652810 -> 0064D0E0 @ 00653322 | 00652810 -> 0064D0E0 @ 00653C53 | 00652810 ->
   0064D0E0 @ 00653D41 | 00652810 -> 0064D0E0 @ 00653D74 | 00652810 -> 0064D0E0 @ 00655334 |
   00652810 -> 0064D0E0 @ 00655CBA | 00652810 -> 0064D0E0 @ 00655E14 | 00652810 -> 0064D0E0 @
   00655F5D | 00652810 -> 0064D0E0 @ 0065627E | 00652810 -> 0064D0E0 @ 006566A6 | 00652810 ->
   0064D0E0 @ 006568D2 | 00652810 -> 0064D0E0 @ 00656977 | 00652810 -> 0064D0E0 @ 00656B2D |
   00652810 -> 0064D0E0 @ 00656C21 | 00652810 -> 0064D0E0 @ 00656D15 | 00652810 -> 0064D0E0 @
   00656DDE | 00652810 -> 0064D0E0 @ 00656EAE | 00652810 -> 0064D0E0 @ 00656EEF | 00652810 ->
   0064D0E0 @ 00656F22 | 00652810 -> 0064D0E0 @ 00657127 | 00652810 -> 0064D0E0 @ 006571F8 |
   00652810 -> 0064D0E0 @ 006572CF | 00652810 -> 0064D0E0 @ 00657518 | 00652810 -> 0064D0E0 @
   00657644 | 00652810 -> 0064D0E0 @ 00659A60 */

void __thiscall FUN_0064d0e0(void *this,int param_1,char *param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  char *text;
  int iVar2;
  DWORD local_404 [256];

  if (DAT_0080734a != '\0') {
    if (param_1 < 0x12d) {
      if (param_1 < -300) {
        param_1 = -300;
      }
    }
    else {
      param_1 = 300;
    }
    pcVar1 = LoadResourceString(0x1d4c - param_1,g_module_00807618);
    text = LoadResourceString(0x1b5f,g_module_00807618);
    wsprintfA((LPSTR)local_404,text,param_1,pcVar1,param_2);
    if (g_popUp_008016D8 != (PopUpTy *)0x0) {
      thunk_FUN_0052d320(g_popUp_008016D8,(char *)local_404,8);
    }
    thunk_FUN_0064a5b0(local_404);
    if (param_4 < 0) {
      iVar2 = (int)this + 0x92;
      pcVar1 = LoadResourceString(0x1b60,g_module_00807618);
      wsprintfA((LPSTR)local_404,pcVar1,iVar2,param_3);
    }
    else {
      iVar2 = (int)this + 0x92;
      pcVar1 = LoadResourceString(0x1b61,g_module_00807618);
      wsprintfA((LPSTR)local_404,pcVar1,iVar2,param_3,param_4);
    }
    if (g_popUp_008016D8 != (PopUpTy *)0x0) {
      thunk_FUN_0052d320(g_popUp_008016D8,(char *)local_404,8);
    }
    thunk_FUN_0064a5b0(local_404);
    thunk_FUN_0064a5b0((LPDWORD)&DAT_007d2a00);
  }
  return;
}

