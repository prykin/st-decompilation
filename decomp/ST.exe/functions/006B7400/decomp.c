
int FUN_006b7400(int *param_1,int param_2,int *param_3,int *param_4,int *param_5,int param_6,
                int param_7)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  
  if (0x7f < param_2) {
    param_2 = param_2 + -0x80;
  }
  iVar3 = FUN_006b7190(param_1);
  if (iVar3 != 0) {
    if (iVar3 != -4) {
      FUN_006a5e40(iVar3,DAT_007ed77c,0x7edbc4,0x431);
    }
    return iVar3;
  }
  piVar2 = (int *)param_1[0x11];
  do {
    if (piVar2 == (int *)0x0) {
      return -4;
    }
    if (param_2 == -1) goto LAB_006b749d;
    if (-1 < param_2) {
      cVar4 = (char)param_2;
      if (param_7 == 0) {
        if (((param_6 == -1) || (param_6 == *(int *)(piVar2[4] + 1))) &&
           ((*(char *)piVar2[4] == cVar4 || (*(char *)piVar2[4] == (char)(cVar4 + -0x80)))))
        goto LAB_006b749d;
      }
      else if (((param_6 != *(int *)((char *)piVar2[4] + 1)) &&
               (cVar1 = *(char *)piVar2[4], cVar1 != cVar4)) && (cVar1 != (char)(cVar4 + -0x80))) {
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

