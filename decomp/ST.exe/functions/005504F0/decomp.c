
void __thiscall FUN_005504f0(void *this,int param_1,UINT param_2,int param_3)

{
  undefined4 extraout_EAX;
  uint uVar1;
  char *pcVar2;
  CHAR local_10c [260];
  void *local_8;
  
  uVar1 = 0;
  local_8 = this;
  if (DAT_00808aaf != 0) {
    pcVar2 = &DAT_00808af6;
    do {
      if (((*(int *)(pcVar2 + -6) == param_1) && (*pcVar2 != '\0')) && (param_2 != 0)) {
        LoadResourceString(param_2,HINSTANCE_00807618);
        wsprintfA(local_10c,s__s__s_007c411c,pcVar2 + -0x46,extraout_EAX);
        if (g_popUp_008016D8 != (PopUpTy *)0x0) {
          thunk_FUN_0052d320(g_popUp_008016D8,local_10c,8);
        }
      }
      uVar1 = uVar1 + 1;
      pcVar2 = pcVar2 + 0x9c;
    } while (uVar1 < DAT_00808aaf);
  }
  if (param_3 != 0) {
    thunk_FUN_005508f0(local_8,param_1);
  }
  return;
}

