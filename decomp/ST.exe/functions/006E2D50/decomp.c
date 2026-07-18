
void FUN_006e2d50(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_2 < param_1) {
    param_2 = (int *)((int)param_2 + param_4 * 2 + (param_5 + -1) * param_3 + -2);
    param_1 = (int *)((int)param_1 + param_4 * 2 + (param_5 + -1) * param_3 + -2);
    while (0 < param_5) {
      if (param_6 < 1) {
        iVar3 = param_4;
        piVar4 = param_2;
        piVar5 = param_1;
        if (((uint)param_1 & 2) != 0) {
          piVar4 = (int *)((int)param_2 + -2);
          *(short *)param_1 = (short)*param_2 + (short)param_6;
          piVar5 = (int *)((int)param_1 + -2);
          iVar3 = param_4 + -1;
          if (iVar3 == 0 || param_4 < 1) goto LAB_006e2f66;
        }
        piVar4 = (int *)((int)piVar4 + -2);
        piVar5 = (int *)((int)piVar5 + -2);
        while (bVar2 = 1 < iVar3, iVar3 = iVar3 + -2, bVar2) {
          iVar1 = *piVar4;
          piVar4 = piVar4 + -1;
          *piVar5 = iVar1 - CONCAT22(-(short)param_6,-(short)param_6);
          piVar5 = piVar5 + -1;
        }
        if (iVar3 == -1) {
          *(short *)((int)piVar5 + 2) = *(short *)((int)piVar4 + 2) + (short)param_6;
        }
      }
      else {
        iVar3 = param_4;
        piVar4 = param_2;
        piVar5 = param_1;
        if (((uint)param_1 & 2) != 0) {
          piVar4 = (int *)((int)param_2 + -2);
          *(short *)param_1 = (short)*param_2 + (short)param_6;
          piVar5 = (int *)((int)param_1 + -2);
          iVar3 = param_4 + -1;
          if (iVar3 == 0 || param_4 < 1) goto LAB_006e2f66;
        }
        piVar4 = (int *)((int)piVar4 + -2);
        piVar5 = (int *)((int)piVar5 + -2);
        while (bVar2 = 1 < iVar3, iVar3 = iVar3 + -2, bVar2) {
          iVar1 = *piVar4;
          piVar4 = piVar4 + -1;
          *piVar5 = iVar1 + CONCAT22((short)param_6,(short)param_6);
          piVar5 = piVar5 + -1;
        }
        if (iVar3 == -1) {
          *(short *)((int)piVar5 + 2) = *(short *)((int)piVar4 + 2) + (short)param_6;
        }
      }
LAB_006e2f66:
      param_2 = (int *)((int)param_2 - param_3);
      param_1 = (int *)((int)param_1 - param_3);
      param_5 = param_5 + -1;
    }
  }
  else {
    while (0 < param_5) {
      if (param_6 < 1) {
        piVar4 = param_2;
        piVar5 = param_1;
        iVar3 = param_4;
        if (((uint)param_1 & 2) != 0) {
          piVar4 = (int *)((int)param_2 + 2);
          *(short *)param_1 = (short)*param_2 + (short)param_6;
          piVar5 = (int *)((int)param_1 + 2);
          iVar3 = param_4 + -1;
          if (iVar3 == 0 || param_4 < 1) goto LAB_006e2e31;
        }
        while (1 < iVar3) {
          *piVar5 = *piVar4 - CONCAT22(-(short)param_6,-(short)param_6);
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
          iVar3 = iVar3 + -2;
        }
        if (iVar3 + -2 == -1) {
          *(short *)piVar5 = (short)*piVar4 + (short)param_6;
        }
      }
      else {
        piVar4 = param_2;
        piVar5 = param_1;
        iVar3 = param_4;
        if (((uint)param_1 & 2) != 0) {
          piVar4 = (int *)((int)param_2 + 2);
          *(short *)param_1 = (short)*param_2 + (short)param_6;
          piVar5 = (int *)((int)param_1 + 2);
          iVar3 = param_4 + -1;
          if (iVar3 == 0 || param_4 < 1) goto LAB_006e2e31;
        }
        while (1 < iVar3) {
          *piVar5 = *piVar4 + CONCAT22((short)param_6,(short)param_6);
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
          iVar3 = iVar3 + -2;
        }
        if (iVar3 + -2 == -1) {
          *(short *)piVar5 = (short)*piVar4 + (short)param_6;
        }
      }
LAB_006e2e31:
      param_2 = (int *)((int)param_2 + param_3);
      param_1 = (int *)((int)param_1 + param_3);
      param_5 = param_5 + -1;
    }
  }
  return;
}

