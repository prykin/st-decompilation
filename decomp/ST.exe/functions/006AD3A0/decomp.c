
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006AD3A0 -> EXTERNAL:00000081 @ 006AD3ED | 006AD3A0 -> EXTERNAL:00000081 @ 006AD487
   
   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006AD3A0 -> EXTERNAL:00000081 @ 006AD487 */

int FUN_006ad3a0(LPCSTR lpText,LPCSTR lpCaption,uint param_3)

{
  int iVar1;
  HWND hWnd;
  
  hWnd = (HWND)0x0;
  if (DAT_00854eb8 != (undefined4 *)0x0) {
    hWnd = (HWND)DAT_00854eb8[1];
  }
  if ((param_3 & 0x3000) == 0) {
    param_3 = param_3 | 0x1000;
  }
  if ((param_3 & 0xf0) == 0) {
    param_3 = param_3 | 0x10;
  }
  if (DAT_00854a84 != 0) {
    iVar1 = MessageBoxA(hWnd,lpText,s_Debug_Message___SECOND_CALL_007ed7dc,
                        param_3 & 0xffffdf1f | 0x11010);
    return iVar1;
  }
  DAT_00854a84 = 1;
  if ((DAT_00854eb8 != (undefined4 *)0x0) && ((*(byte *)(DAT_00854eb8 + 2) & 1) != 0)) {
    FUN_006b0ba0((int)DAT_00854eb8,&DAT_00854aa4,0,0x100);
    FUN_006b0a20(DAT_00854eb8,0x854ec0,0,1,0);
    FUN_006b0a20(DAT_00854eb8,0x7ed7a0,4,1,0);
    FUN_006b0a20(DAT_00854eb8,0x7ed7a4,7,1,0);
    FUN_006b0a20(DAT_00854eb8,0x7ed7a8,0xff,1,0);
  }
  iVar1 = MessageBoxA(hWnd,lpText,lpCaption,param_3 | 0x10000);
  if ((DAT_00854eb8 != (undefined4 *)0x0) && ((*(byte *)(DAT_00854eb8 + 2) & 1) != 0)) {
    FUN_006b0a20(DAT_00854eb8,0x854aa4,0,0x100,0);
  }
  DAT_00854a84 = 0;
  return iVar1;
}

