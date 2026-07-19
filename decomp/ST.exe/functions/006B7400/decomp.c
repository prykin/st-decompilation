
int FUN_006b7400(int *param_1,int param_2,int *param_3,int *param_4,int *param_5,int param_6,
                int param_7)

{
  char cVar1;
  int *piVar2;
  int exceptionCode;
  char cVar3;
  
  if (0x7f < param_2) {
    param_2 = param_2 + -0x80;
  }
  exceptionCode = FUN_006b7190(param_1);
  if (exceptionCode != 0) {
    if (exceptionCode != -4) {
      RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DDX_C_dplay2_cpp_007edbc4,0x431);
    }
    return exceptionCode;
  }
  piVar2 = (int *)param_1[0x11];
  do {
    if (piVar2 == (int *)0x0) {
      return -4;
    }
    if (param_2 == -1) goto LAB_006b749d;
    if (-1 < param_2) {
      cVar3 = (char)param_2;
      if (param_7 == 0) {
        if (((param_6 == -1) || (param_6 == *(int *)(piVar2[4] + 1))) &&
           ((*(char *)piVar2[4] == cVar3 || (*(char *)piVar2[4] == (char)(cVar3 + -0x80)))))
        goto LAB_006b749d;
      }
      else if (((param_6 != *(int *)((char *)piVar2[4] + 1)) &&
               (cVar1 = *(char *)piVar2[4], cVar1 != cVar3)) && (cVar1 != (char)(cVar3 + -0x80))) {
LAB_006b749d:
        if (piVar2 == (int *)0x0) {
          return -4;
        }
        if (param_3 != (int *)0x0) {
          *param_3 = piVar2[2];
        }
        if (param_5 != (int *)0x0) {
          *param_5 = piVar2[3];
        }
        if (param_4 != (int *)0x0) {
          *param_4 = piVar2[4];
        }
        FUN_006d2560(param_1 + 0x11,piVar2);
        FUN_006a5e90(piVar2);
        return 0;
      }
    }
    piVar2 = (int *)*piVar2;
  } while( true );
}

