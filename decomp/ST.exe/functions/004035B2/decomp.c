
undefined4 __thiscall thunk_FUN_004ce250(void *this,int param_1)

{
  short sVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  short sVar6;
  void *pvStack_8;
  
  pvStack_8 = (void *)0x0;
  if ((*(int *)((int)this + 0x5d3) != 0) && (*(int *)((int)this + 0x4d4) == 0)) {
    iVar4 = FUN_006e62d0(DAT_00802a38,*(int *)((int)this + 0x5d3),(int *)&pvStack_8);
    if (iVar4 == 0) {
      thunk_FUN_004cdeb0(pvStack_8,*(undefined4 *)((int)this + 0x18));
      uVar5 = thunk_FUN_004cdf80(pvStack_8,*(int *)((int)this + 0x18));
      *(undefined4 *)((int)this + 0x4d4) = uVar5;
      if (param_1 != 0) {
        iVar4 = *(int *)((int)this + 0x5b4) + -1;
        sVar6 = (short)*(undefined4 *)((int)this + 0x5b0);
        if (((((-1 < iVar4) && (sVar1 = *(short *)((int)this + 0x5b8), -1 < sVar6)) &&
             (sVar6 < DAT_007fb240)) &&
            ((sVar3 = (short)iVar4, -1 < sVar3 && (sVar3 < DAT_007fb242)))) &&
           ((-1 < sVar1 &&
            ((sVar1 < DAT_007fb244 &&
             (piVar2 = *(int **)(DAT_007fb248 +
                                ((int)DAT_007fb246 * (int)sVar1 + (int)DAT_007fb240 * (int)sVar3 +
                                (int)sVar6) * 8), piVar2 != (int *)0x0)))))) {
          iVar4 = (**(code **)(*piVar2 + 0x2c))();
          if (0x53 < iVar4) {
            iVar4 = (**(code **)(*piVar2 + 0x2c))();
            if ((iVar4 < 0x5b) && (*(int *)((int)piVar2 + 0x5d3) == 0)) {
              *(undefined4 *)((int)piVar2 + 0x5d3) = *(undefined4 *)((int)this + 0x5d3);
              thunk_FUN_004ce250(piVar2,1);
            }
          }
        }
        iVar4 = *(int *)((int)this + 0x5b4) + 1;
        if ((((iVar4 < DAT_007fb242) && (sVar1 = *(short *)((int)this + 0x5b8), -1 < sVar6)) &&
            (sVar6 < DAT_007fb240)) &&
           (((sVar3 = (short)iVar4, -1 < sVar3 && (sVar3 < DAT_007fb242)) &&
            ((-1 < sVar1 &&
             ((sVar1 < DAT_007fb244 &&
              (piVar2 = *(int **)(DAT_007fb248 +
                                 ((int)DAT_007fb246 * (int)sVar1 + (int)DAT_007fb240 * (int)sVar3 +
                                 (int)sVar6) * 8), piVar2 != (int *)0x0)))))))) {
          iVar4 = (**(code **)(*piVar2 + 0x2c))();
          if (0x53 < iVar4) {
            iVar4 = (**(code **)(*piVar2 + 0x2c))();
            if ((iVar4 < 0x5b) && (*(int *)((int)piVar2 + 0x5d3) == 0)) {
              *(undefined4 *)((int)piVar2 + 0x5d3) = *(undefined4 *)((int)this + 0x5d3);
              thunk_FUN_004ce250(piVar2,1);
            }
          }
        }
        iVar4 = *(int *)((int)this + 0x5b0) + -1;
        sVar6 = (short)*(undefined4 *)((int)this + 0x5b4);
        if (-1 < iVar4) {
          sVar1 = *(short *)((int)this + 0x5b8);
          sVar3 = (short)iVar4;
          if ((((-1 < sVar3) && (sVar3 < DAT_007fb240)) && (-1 < sVar6)) &&
             (((sVar6 < DAT_007fb242 && (-1 < sVar1)) &&
              ((sVar1 < DAT_007fb244 &&
               (piVar2 = *(int **)(DAT_007fb248 +
                                  ((int)DAT_007fb246 * (int)sVar1 + (int)DAT_007fb240 * (int)sVar6 +
                                  (int)sVar3) * 8), piVar2 != (int *)0x0)))))) {
            iVar4 = (**(code **)(*piVar2 + 0x2c))();
            if (0x53 < iVar4) {
              iVar4 = (**(code **)(*piVar2 + 0x2c))();
              if ((iVar4 < 0x5b) && (*(int *)((int)piVar2 + 0x5d3) == 0)) {
                *(undefined4 *)((int)piVar2 + 0x5d3) = *(undefined4 *)((int)this + 0x5d3);
                thunk_FUN_004ce250(piVar2,1);
              }
            }
          }
        }
        iVar4 = *(int *)((int)this + 0x5b0) + 1;
        if (iVar4 < DAT_007fb240) {
          sVar1 = *(short *)((int)this + 0x5b8);
          sVar3 = (short)iVar4;
          if (((((-1 < sVar3) && (sVar3 < DAT_007fb240)) && (-1 < sVar6)) &&
              ((sVar6 < DAT_007fb242 && (-1 < sVar1)))) &&
             ((sVar1 < DAT_007fb244 &&
              (piVar2 = *(int **)(DAT_007fb248 +
                                 ((int)DAT_007fb246 * (int)sVar1 + (int)sVar6 * (int)DAT_007fb240 +
                                 (int)sVar3) * 8), piVar2 != (int *)0x0)))) {
            iVar4 = (**(code **)(*piVar2 + 0x2c))();
            if (0x53 < iVar4) {
              iVar4 = (**(code **)(*piVar2 + 0x2c))();
              if ((iVar4 < 0x5b) && (*(int *)((int)piVar2 + 0x5d3) == 0)) {
                *(undefined4 *)((int)piVar2 + 0x5d3) = *(undefined4 *)((int)this + 0x5d3);
                thunk_FUN_004ce250(piVar2,1);
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

