
void __thiscall FUN_005504f0(void *this,int param_1,UINT param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  CHAR local_10c [260];
  void *local_8;

  uVar2 = 0;
  local_8 = this;
  if (DAT_00808aaf != 0) {
    pcVar3 = &DAT_00808af6;
    do {
      if (((*(int *)(pcVar3 + -6) == param_1) && (*pcVar3 != '\0')) && (param_2 != 0)) {
        pcVar1 = LoadResourceString(param_2,HINSTANCE_00807618);
        wsprintfA(local_10c,s__s__s_007c411c,pcVar3 + -0x46,pcVar1);
        if (g_popUp_008016D8 != (PopUpTy *)0x0) {
          thunk_FUN_0052d320(g_popUp_008016D8,local_10c,8);
        }
      }
      uVar2 = uVar2 + 1;
      pcVar3 = pcVar3 + 0x9c;
    } while (uVar2 < DAT_00808aaf);
  }
  if (param_3 != 0) {
    thunk_FUN_005508f0(local_8,param_1);
  }
  return;
}

