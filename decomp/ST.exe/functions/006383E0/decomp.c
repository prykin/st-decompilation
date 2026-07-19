
int __cdecl
FUN_006383e0(int param_1,int param_2,int param_3,undefined4 param_4,undefined2 param_5,
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
  int *local_a8;
  int *local_a4;
  int local_a0;
  int local_90;
  int local_80;
  int local_7c;
  int local_78;
  int local_74 [5];
  undefined4 *local_60;
  int local_50;
  undefined4 local_48 [3];
  undefined2 local_3c;
  undefined2 local_3a;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0079d1c8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff4c;
  local_80 = 0;
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
  local_20 = iVar11 - param_9;
  if (local_20 < 0) {
    local_20 = 0;
  }
  iVar3 = local_20;
  local_78 = iVar6 - param_9;
  if (local_78 < 0) {
    local_78 = 0;
  }
  iVar5 = iVar5 + 1 + param_9;
  if (DAT_007fb242 < iVar5) {
    iVar5 = (int)DAT_007fb242;
  }
  local_7c = iVar11 + 1 + param_9;
  if (DAT_007fb240 < local_7c) {
    local_7c = (int)DAT_007fb240;
  }
  local_90 = iVar6 + 1 + param_9;
  if (5 < local_90) {
    local_90 = 5;
  }
  local_8 = 0;
  ExceptionList = &local_14;
  Library::MSVCRT::FUN_0072da40();
  local_8 = 0xffffffff;
  local_a0 = 0;
  local_1c = &stack0xffffff4c;
  do {
    if (iVar5 <= iVar8) {
      ExceptionList = local_14;
      return local_80;
    }
    local_a4 = (int *)&stack0xffffff4c;
    local_50 = iVar8;
    iVar11 = iVar3;
    for (; iVar11 < local_7c; iVar11 = iVar11 + 1) {
      if (local_78 < local_90) {
        local_a8 = (int *)(&stack0xffffff4c + local_a0 * 4);
        iVar6 = local_78;
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
             (iVar3 = (**(code **)(*piVar9 + 0xf0))(), iVar8 = local_50, iVar3 != 0)) {
            bVar1 = false;
            if ((piVar9[8] == 1000) &&
               (iVar8 = (**(code **)(*piVar9 + 0x2c))(), *(int *)(&DAT_00791d68 + iVar8 * 4) == 1))
            {
              iVar8 = 0;
              if (0 < local_a0) {
                piVar4 = local_a4;
                do {
                  if (*piVar4 == piVar9[6]) {
                    bVar1 = true;
                    break;
                  }
                  iVar8 = iVar8 + 1;
                  piVar4 = piVar4 + 1;
                } while (iVar8 < local_a0);
              }
              iVar8 = local_50;
              if (bVar1) goto LAB_006386ce;
              *local_a8 = piVar9[6];
              local_a0 = local_a0 + 1;
              local_a8 = local_a8 + 1;
            }
            piVar4 = local_74;
            for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
              *piVar4 = 0;
              piVar4 = piVar4 + 1;
            }
            puVar12 = local_48;
            for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar12 = 0;
              puVar12 = puVar12 + 1;
            }
            local_74[2] = piVar9[6];
            local_74[3] = 4;
            local_48[2] = param_4;
            local_3c = param_6;
            local_3a = param_5;
            local_48[0] = param_8;
            local_48[1] = param_7;
            local_74[4] = 0x110;
            local_60 = local_48;
            (**(code **)*piVar9)(local_74);
            local_80 = local_80 + 1;
            iVar8 = local_50;
          }
LAB_006386ce:
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_90);
      }
      iVar3 = local_20;
    }
    iVar8 = iVar8 + 1;
  } while( true );
}

