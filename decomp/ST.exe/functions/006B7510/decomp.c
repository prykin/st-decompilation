
int FUN_006b7510(int *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  char cVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = FUN_006b7190(param_1);
  if (iVar4 != 0) {
    RaiseInternalException(iVar4,DAT_007ed77c,s_E__DKW_DDX_C_dplay2_cpp_007edbc4,0x45f);
    return iVar4;
  }
  if (0x7f < param_2) {
    param_2 = param_2 + -0x80;
  }
  puVar2 = (undefined4 *)param_1[0x11];
  iVar4 = 0;
  do {
    if (puVar2 == (undefined4 *)0x0) {
      *param_3 = iVar4;
      return 0;
    }
    if (param_2 == -1) goto LAB_006b7588;
    if (-1 < param_2) {
      cVar3 = (char)param_2;
      if (param_5 == 0) {
        if (((param_4 == -1) || (param_4 == *(int *)(puVar2[4] + 1))) &&
           ((*(char *)puVar2[4] == cVar3 || (*(char *)puVar2[4] == (char)(cVar3 + -0x80)))))
        goto LAB_006b7588;
      }
      else if (((param_4 != *(int *)((char *)puVar2[4] + 1)) &&
               (cVar1 = *(char *)puVar2[4], cVar1 != cVar3)) && (cVar1 != (char)(cVar3 + -0x80))) {
LAB_006b7588:
        iVar4 = iVar4 + 1;
      }
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}

