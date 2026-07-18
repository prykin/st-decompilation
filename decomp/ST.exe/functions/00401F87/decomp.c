
void __thiscall thunk_FUN_005504f0(void *this,int param_1,UINT param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  char *pcVar3;
  CHAR aCStack_10c [260];
  void *pvStack_8;
  
  uVar2 = 0;
  pvStack_8 = this;
  if (DAT_00808aaf != 0) {
    pcVar3 = &DAT_00808af6;
    do {
      if (((*(int *)(pcVar3 + -6) == param_1) && (*pcVar3 != '\0')) && (param_2 != 0)) {
        uVar1 = FUN_006b0140(param_2,DAT_00807618);
        wsprintfA(aCStack_10c,s__s__s_007c411c,pcVar3 + -0x46,uVar1);
        if (DAT_008016d8 != (void *)0x0) {
          thunk_FUN_0052d320(DAT_008016d8,aCStack_10c,8);
        }
      }
      uVar2 = uVar2 + 1;
      pcVar3 = pcVar3 + 0x9c;
    } while (uVar2 < DAT_00808aaf);
  }
  if (param_3 != 0) {
    thunk_FUN_005508f0(pvStack_8,param_1);
  }
  return;
}

