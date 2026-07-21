
void __thiscall
FUN_0064d0e0(void *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 extraout_EAX;
  char *text;
  char *text_00;
  char *text_01;
  int iVar1;
  undefined4 uVar2;
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
    LoadResourceString(0x1d4c - param_1,HINSTANCE_00807618);
    uVar2 = extraout_EAX;
    LoadResourceString(0x1b5f,HINSTANCE_00807618);
    wsprintfA((LPSTR)local_404,text,param_1,uVar2,param_2);
    if (g_popUp_008016D8 != (PopUpTy *)0x0) {
      thunk_FUN_0052d320(g_popUp_008016D8,(char *)local_404,8);
    }
    thunk_FUN_0064a5b0(local_404);
    if (param_4 < 0) {
      iVar1 = (int)this + 0x92;
      LoadResourceString(0x1b60,HINSTANCE_00807618);
      wsprintfA((LPSTR)local_404,text_00,iVar1,param_3);
    }
    else {
      iVar1 = (int)this + 0x92;
      LoadResourceString(0x1b61,HINSTANCE_00807618);
      wsprintfA((LPSTR)local_404,text_01,iVar1,param_3,param_4);
    }
    if (g_popUp_008016D8 != (PopUpTy *)0x0) {
      thunk_FUN_0052d320(g_popUp_008016D8,(char *)local_404,8);
    }
    thunk_FUN_0064a5b0(local_404);
    thunk_FUN_0064a5b0((LPDWORD)&DAT_007d2a00);
  }
  return;
}

