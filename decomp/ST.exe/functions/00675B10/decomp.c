
undefined4 __cdecl
FUN_00675b10(int param_1,int param_2,short param_3,short *param_4,short *param_5,short *param_6,
            undefined4 param_7)

{
  int *piVar1;
  bool bVar2;
  short sVar3;
  undefined3 extraout_var;
  int iVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  int local_24;
  short local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_24 = 1;
  local_c = param_2;
  do {
    local_10 = (param_1 - param_2) + local_c;
    local_18 = local_24;
    local_14 = local_24;
    local_8 = local_c;
    thunk_FUN_006756d0((short *)&local_10,(short *)&local_8,(short *)&local_14,(short *)&local_18);
    sVar5 = (short)local_10;
    sVar3 = (short)local_14 + -1 + sVar5;
    local_20 = (short)local_18 + -1 + (short)local_8;
    iVar8 = local_10;
    iVar4 = local_8;
    while (sVar5 <= sVar3) {
      sVar5 = (short)iVar4;
      iVar6 = iVar4;
      while (sVar5 <= local_20) {
        sVar5 = 0;
        sVar7 = param_3;
        do {
          sVar9 = (short)iVar8;
          sVar10 = (short)iVar6;
          bVar2 = thunk_FUN_004961b0(sVar9,sVar10,sVar7);
          if ((CONCAT31(extraout_var,bVar2) != 0) &&
             (((((sVar9 < 0 || (DAT_007fb240 <= sVar9)) || (sVar10 < 0)) ||
               ((DAT_007fb242 <= sVar10 || (sVar7 < 0)))) ||
              ((DAT_007fb244 <= sVar7 ||
               ((piVar1 = *(int **)(DAT_007fb248 +
                                   ((int)DAT_007fb246 * (int)sVar7 + (int)DAT_007fb240 * (int)sVar10
                                   + (int)sVar9) * 8), piVar1 == (int *)0x0 ||
                (iVar4 = (**(code **)(*piVar1 + 0x114))(param_7), iVar4 != 0)))))))) {
            *param_4 = sVar9;
            *param_5 = sVar10;
            *param_6 = sVar7;
            return 1;
          }
          sVar7 = sVar7 + 1;
          if (4 < sVar7) {
            sVar7 = 0;
          }
          sVar5 = sVar5 + 1;
        } while (sVar5 < 5);
        iVar6 = iVar6 + 1;
        iVar4 = local_8;
        sVar5 = (short)iVar6;
      }
      iVar8 = iVar8 + 1;
      sVar5 = (short)iVar8;
    }
    local_24 = local_24 + 2;
    local_c = local_c + -1;
    if (8 < (short)local_24) {
      *param_4 = (short)param_1;
      *param_5 = (short)param_2;
      *param_6 = param_3;
      return 0;
    }
  } while( true );
}

