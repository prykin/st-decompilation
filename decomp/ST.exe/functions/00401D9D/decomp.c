
undefined4 __cdecl
thunk_FUN_00675b10(int param_1,int param_2,short param_3,short *param_4,short *param_5,
                  short *param_6,undefined4 param_7)

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
  int iStack_24;
  short sStack_20;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_24 = 1;
  iStack_c = param_2;
  do {
    iStack_10 = (param_1 - param_2) + iStack_c;
    iStack_18 = iStack_24;
    iStack_14 = iStack_24;
    iStack_8 = iStack_c;
    thunk_FUN_006756d0((short *)&iStack_10,(short *)&iStack_8,(short *)&iStack_14,
                       (short *)&iStack_18);
    sVar5 = (short)iStack_10;
    sVar3 = (short)iStack_14 + -1 + sVar5;
    sStack_20 = (short)iStack_18 + -1 + (short)iStack_8;
    iVar8 = iStack_10;
    iVar4 = iStack_8;
    while (sVar5 <= sVar3) {
      sVar5 = (short)iVar4;
      iVar6 = iVar4;
      while (sVar5 <= sStack_20) {
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
        iVar4 = iStack_8;
        sVar5 = (short)iVar6;
      }
      iVar8 = iVar8 + 1;
      sVar5 = (short)iVar8;
    }
    iStack_24 = iStack_24 + 2;
    iStack_c = iStack_c + -1;
    if (8 < (short)iStack_24) {
      *param_4 = (short)param_1;
      *param_5 = (short)param_2;
      *param_6 = param_3;
      return 0;
    }
  } while( true );
}

