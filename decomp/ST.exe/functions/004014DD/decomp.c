
int __cdecl
thunk_FUN_006383e0(int param_1,int param_2,int param_3,undefined4 param_4,undefined2 param_5,
                  undefined2 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  int *piVar9;
  short sVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piStack_a8;
  int *piStack_a4;
  int iStack_a0;
  int iStack_90;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int aiStack_74 [5];
  undefined4 *puStack_60;
  int iStack_50;
  undefined4 auStack_48 [3];
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  int iStack_20;
  undefined1 *puStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_0079d1c8;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  puStack_1c = &stack0xffffff4c;
  iStack_80 = 0;
  sVar10 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    iVar11 = (short)(((short)(param_1 / 0xc9) + sVar10) -
                    (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar11 = (int)(short)(((short)(param_1 / 0xc9) + sVar10) -
                         (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar10 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar5 = (short)(((short)(param_2 / 0xc9) + sVar10) -
                   (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(param_2 / 0xc9) + sVar10) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  sVar10 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    iVar6 = (short)(((short)(param_3 / 200) + sVar10) -
                   (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iVar6 = (int)(short)(((short)(param_3 / 200) + sVar10) -
                        (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  iVar8 = iVar5 - param_9;
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  iStack_20 = iVar11 - param_9;
  if (iStack_20 < 0) {
    iStack_20 = 0;
  }
  iVar3 = iStack_20;
  iStack_78 = iVar6 - param_9;
  if (iStack_78 < 0) {
    iStack_78 = 0;
  }
  iVar5 = iVar5 + 1 + param_9;
  if (DAT_007fb242 < iVar5) {
    iVar5 = (int)DAT_007fb242;
  }
  iStack_7c = iVar11 + 1 + param_9;
  if (DAT_007fb240 < iStack_7c) {
    iStack_7c = (int)DAT_007fb240;
  }
  iStack_90 = iVar6 + 1 + param_9;
  if (5 < iStack_90) {
    iStack_90 = 5;
  }
  uStack_8 = 0;
  ExceptionList = &pvStack_14;
  FUN_0072da40();
  uStack_8 = 0xffffffff;
  iStack_a0 = 0;
  puStack_1c = &stack0xffffff4c;
  do {
    if (iVar5 <= iVar8) {
      ExceptionList = pvStack_14;
      return iStack_80;
    }
    piStack_a4 = (int *)&stack0xffffff4c;
    iStack_50 = iVar8;
    iVar11 = iVar3;
    for (; iVar11 < iStack_7c; iVar11 = iVar11 + 1) {
      if (iStack_78 < iStack_90) {
        piStack_a8 = (int *)(&stack0xffffff4c + iStack_a0 * 4);
        iVar6 = iStack_78;
        do {
          sVar10 = (short)iVar11;
          if (((((sVar10 < 0) || (DAT_007fb240 <= sVar10)) || (sVar2 = (short)iVar8, sVar2 < 0)) ||
              ((DAT_007fb242 <= sVar2 || (sVar7 = (short)iVar6, sVar7 < 0)))) ||
             (DAT_007fb244 <= sVar7)) {
            piVar9 = (int *)0x0;
          }
          else {
            piVar9 = *(int **)(DAT_007fb248 +
                              ((int)sVar2 * (int)DAT_007fb240 + (int)sVar7 * (int)DAT_007fb246 +
                              (int)sVar10) * 8);
          }
          if ((piVar9 != (int *)0x0) &&
             (iVar3 = (**(code **)(*piVar9 + 0xf0))(), iVar8 = iStack_50, iVar3 != 0)) {
            bVar1 = false;
            if ((piVar9[8] == 1000) &&
               (iVar8 = (**(code **)(*piVar9 + 0x2c))(), *(int *)(&DAT_00791d68 + iVar8 * 4) == 1))
            {
              iVar8 = 0;
              if (0 < iStack_a0) {
                piVar4 = piStack_a4;
                do {
                  if (*piVar4 == piVar9[6]) {
                    bVar1 = true;
                    break;
                  }
                  iVar8 = iVar8 + 1;
                  piVar4 = piVar4 + 1;
                } while (iVar8 < iStack_a0);
              }
              iVar8 = iStack_50;
              if (bVar1) goto LAB_006386ce;
              *piStack_a8 = piVar9[6];
              iStack_a0 = iStack_a0 + 1;
              piStack_a8 = piStack_a8 + 1;
            }
            piVar4 = aiStack_74;
            for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
              *piVar4 = 0;
              piVar4 = piVar4 + 1;
            }
            puVar12 = auStack_48;
            for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar12 = 0;
              puVar12 = puVar12 + 1;
            }
            aiStack_74[2] = piVar9[6];
            aiStack_74[3] = 4;
            auStack_48[2] = param_4;
            uStack_3c = param_6;
            uStack_3a = param_5;
            auStack_48[0] = param_8;
            auStack_48[1] = param_7;
            aiStack_74[4] = 0x110;
            puStack_60 = auStack_48;
            (**(code **)*piVar9)(aiStack_74);
            iStack_80 = iStack_80 + 1;
            iVar8 = iStack_50;
          }
LAB_006386ce:
          iVar6 = iVar6 + 1;
        } while (iVar6 < iStack_90);
      }
      iVar3 = iStack_20;
    }
    iVar8 = iVar8 + 1;
  } while( true );
}

