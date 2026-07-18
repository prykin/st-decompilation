
undefined4 __fastcall thunk_FUN_004cd790(int param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  
  iVar3 = *(int *)(param_1 + 0x5b4) + -1;
  sVar5 = (short)*(undefined4 *)(param_1 + 0x5b0);
  if (((((((-1 < iVar3) && (sVar6 = *(short *)(param_1 + 0x5b8), -1 < sVar5)) &&
         (sVar5 < DAT_007fb240)) && ((sVar2 = (short)iVar3, -1 < sVar2 && (sVar2 < DAT_007fb242))))
       && ((-1 < sVar6 &&
           ((sVar6 < DAT_007fb244 &&
            (piVar1 = *(int **)(DAT_007fb248 +
                               ((int)DAT_007fb246 * (int)sVar6 + (int)DAT_007fb240 * (int)sVar2 +
                               (int)sVar5) * 8), piVar1 != (int *)0x0)))))) &&
      (iVar3 = (**(code **)(*piVar1 + 0x2c))(), 0x53 < iVar3)) &&
     ((iVar3 = (**(code **)(*piVar1 + 0x2c))(), iVar3 < 0x5b && (*(int *)((int)piVar1 + 0x5d3) == 0)
      ))) {
    *(undefined4 *)((int)piVar1 + 0x5d3) = *(undefined4 *)(param_1 + 0x18);
    thunk_FUN_004ce250(piVar1,1);
  }
  iVar3 = *(int *)(param_1 + 0x5b4) + 1;
  if (((((iVar3 < DAT_007fb242) && (sVar6 = *(short *)(param_1 + 0x5b8), -1 < sVar5)) &&
       (sVar5 < DAT_007fb240)) &&
      (((sVar2 = (short)iVar3, -1 < sVar2 && (sVar2 < DAT_007fb242)) &&
       ((-1 < sVar6 &&
        ((sVar6 < DAT_007fb244 &&
         (piVar1 = *(int **)(DAT_007fb248 +
                            ((int)DAT_007fb246 * (int)sVar6 + (int)DAT_007fb240 * (int)sVar2 +
                            (int)sVar5) * 8), piVar1 != (int *)0x0)))))))) &&
     ((iVar4 = (**(code **)(*piVar1 + 0x2c))(), 0x53 < iVar4 &&
      ((iVar4 = (**(code **)(*piVar1 + 0x2c))(), iVar4 < 0x5b &&
       (*(int *)((int)piVar1 + 0x5d3) == 0)))))) {
    *(undefined4 *)((int)piVar1 + 0x5d3) = *(undefined4 *)(param_1 + 0x18);
    thunk_FUN_004ce250(piVar1,1);
  }
  iVar4 = *(int *)(param_1 + 0x5b0) + 1;
  if (iVar4 < DAT_007fb240) {
    iVar3 = *(int *)(param_1 + 0x5b4) + -1;
    sVar5 = (short)iVar4;
    if (((((-1 < iVar3) && (sVar6 = *(short *)(param_1 + 0x5b8), -1 < sVar5)) &&
         (sVar5 < DAT_007fb240)) &&
        (((sVar2 = (short)iVar3, -1 < sVar2 && (sVar2 < DAT_007fb242)) &&
         ((-1 < sVar6 &&
          ((sVar6 < DAT_007fb244 &&
           (piVar1 = *(int **)(DAT_007fb248 +
                              ((int)DAT_007fb246 * (int)sVar6 + (int)sVar2 * (int)DAT_007fb240 +
                              (int)sVar5) * 8), piVar1 != (int *)0x0)))))))) &&
       ((iVar3 = (**(code **)(*piVar1 + 0x2c))(), 0x53 < iVar3 &&
        ((iVar3 = (**(code **)(*piVar1 + 0x2c))(), iVar3 < 0x5b &&
         (*(int *)((int)piVar1 + 0x5d3) == 0)))))) {
      *(undefined4 *)((int)piVar1 + 0x5d3) = *(undefined4 *)(param_1 + 0x18);
      thunk_FUN_004ce250(piVar1,1);
    }
    iVar3 = *(int *)(param_1 + 0x5b4) + 2;
    if ((((((iVar3 < DAT_007fb242) && (sVar6 = *(short *)(param_1 + 0x5b8), -1 < sVar5)) &&
          (sVar5 < DAT_007fb240)) && ((sVar2 = (short)iVar3, -1 < sVar2 && (sVar2 < DAT_007fb242))))
        && (-1 < sVar6)) &&
       (((sVar6 < DAT_007fb244 &&
         (piVar1 = *(int **)(DAT_007fb248 +
                            ((int)DAT_007fb246 * (int)sVar6 + (int)DAT_007fb240 * (int)sVar2 +
                            (int)sVar5) * 8), piVar1 != (int *)0x0)) &&
        ((iVar4 = (**(code **)(*piVar1 + 0x2c))(), 0x53 < iVar4 &&
         ((iVar4 = (**(code **)(*piVar1 + 0x2c))(), iVar4 < 0x5b &&
          (*(int *)((int)piVar1 + 0x5d3) == 0)))))))) {
      *(undefined4 *)((int)piVar1 + 0x5d3) = *(undefined4 *)(param_1 + 0x18);
      thunk_FUN_004ce250(piVar1,1);
    }
  }
  iVar4 = *(int *)(param_1 + 0x5b0) + -1;
  if (-1 < iVar4) {
    sVar5 = *(short *)(param_1 + 0x5b8);
    sVar6 = (short)iVar4;
    if (((((-1 < sVar6) && (sVar6 < DAT_007fb240)) && (sVar2 = (short)iVar3, -1 < sVar2)) &&
        ((sVar2 < DAT_007fb242 && (-1 < sVar5)))) &&
       (((sVar5 < DAT_007fb244 &&
         ((piVar1 = *(int **)(DAT_007fb248 +
                             ((int)DAT_007fb246 * (int)sVar5 + (int)DAT_007fb240 * (int)sVar2 +
                             (int)sVar6) * 8), piVar1 != (int *)0x0 &&
          (iVar3 = (**(code **)(*piVar1 + 0x2c))(), 0x53 < iVar3)))) &&
        ((iVar3 = (**(code **)(*piVar1 + 0x2c))(), iVar3 < 0x5b &&
         (*(int *)((int)piVar1 + 0x5d3) == 0)))))) {
      *(undefined4 *)((int)piVar1 + 0x5d3) = *(undefined4 *)(param_1 + 0x18);
      thunk_FUN_004ce250(piVar1,1);
    }
    iVar3 = *(int *)(param_1 + 0x5b4) + 1;
    if (((((iVar3 < DAT_007fb242) && (sVar5 = *(short *)(param_1 + 0x5b8), -1 < sVar6)) &&
         (sVar6 < DAT_007fb240)) &&
        (((sVar2 = (short)iVar3, -1 < sVar2 && (sVar2 < DAT_007fb242)) &&
         ((-1 < sVar5 &&
          ((sVar5 < DAT_007fb244 &&
           (piVar1 = *(int **)(DAT_007fb248 +
                              ((int)DAT_007fb246 * (int)sVar5 + (int)DAT_007fb240 * (int)sVar2 +
                              (int)sVar6) * 8), piVar1 != (int *)0x0)))))))) &&
       ((iVar4 = (**(code **)(*piVar1 + 0x2c))(), 0x53 < iVar4 &&
        ((iVar4 = (**(code **)(*piVar1 + 0x2c))(), iVar4 < 0x5b &&
         (*(int *)((int)piVar1 + 0x5d3) == 0)))))) {
      *(undefined4 *)((int)piVar1 + 0x5d3) = *(undefined4 *)(param_1 + 0x18);
      thunk_FUN_004ce250(piVar1,1);
    }
  }
  iVar4 = *(int *)(param_1 + 0x5b0) + 2;
  if (iVar4 < DAT_007fb240) {
    sVar5 = *(short *)(param_1 + 0x5b8);
    sVar6 = (short)iVar4;
    if (((((-1 < sVar6) && (sVar6 < DAT_007fb240)) && (sVar2 = (short)iVar3, -1 < sVar2)) &&
        ((sVar2 < DAT_007fb242 && (-1 < sVar5)))) &&
       ((((sVar5 < DAT_007fb244 &&
          ((piVar1 = *(int **)(DAT_007fb248 +
                              ((int)DAT_007fb246 * (int)sVar5 + (int)sVar2 * (int)DAT_007fb240 +
                              (int)sVar6) * 8), piVar1 != (int *)0x0 &&
           (iVar3 = (**(code **)(*piVar1 + 0x2c))(), 0x53 < iVar3)))) &&
         (iVar3 = (**(code **)(*piVar1 + 0x2c))(), iVar3 < 0x5b)) &&
        (*(int *)((int)piVar1 + 0x5d3) == 0)))) {
      *(undefined4 *)((int)piVar1 + 0x5d3) = *(undefined4 *)(param_1 + 0x18);
      thunk_FUN_004ce250(piVar1,1);
    }
    iVar3 = *(int *)(param_1 + 0x5b4) + 1;
    if ((((iVar3 < DAT_007fb242) && (sVar5 = *(short *)(param_1 + 0x5b8), -1 < sVar6)) &&
        (sVar6 < DAT_007fb240)) &&
       (((((sVar2 = (short)iVar3, -1 < sVar2 && (sVar2 < DAT_007fb242)) &&
          ((-1 < sVar5 &&
           ((sVar5 < DAT_007fb244 &&
            (piVar1 = *(int **)(DAT_007fb248 +
                               ((int)DAT_007fb246 * (int)sVar5 + (int)DAT_007fb240 * (int)sVar2 +
                               (int)sVar6) * 8), piVar1 != (int *)0x0)))))) &&
         (iVar3 = (**(code **)(*piVar1 + 0x2c))(), 0x53 < iVar3)) &&
        ((iVar3 = (**(code **)(*piVar1 + 0x2c))(), iVar3 < 0x5b &&
         (*(int *)((int)piVar1 + 0x5d3) == 0)))))) {
      *(undefined4 *)((int)piVar1 + 0x5d3) = *(undefined4 *)(param_1 + 0x18);
      thunk_FUN_004ce250(piVar1,1);
    }
  }
  return 0;
}

