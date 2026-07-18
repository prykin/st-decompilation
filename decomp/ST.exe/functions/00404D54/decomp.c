
undefined4 __cdecl
thunk_FUN_00675950(int param_1,int param_2,short param_3,short *param_4,short *param_5,
                  short *param_6,int param_7)

{
  int iVar1;
  bool bVar2;
  short sVar3;
  undefined3 extraout_var;
  short sVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  short sVar9;
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
    sVar4 = (short)iStack_10;
    sVar3 = (short)iStack_14 + -1 + sVar4;
    sStack_20 = (short)iStack_18 + -1 + (short)iStack_8;
    iVar5 = iStack_10;
    iVar1 = iStack_8;
    while (sVar4 <= sVar3) {
      sVar4 = (short)iVar1;
      iVar7 = iVar1;
      while (sVar4 <= sStack_20) {
        sVar4 = 0;
        sVar6 = param_3;
        do {
          sVar8 = (short)iVar5;
          sVar9 = (short)iVar7;
          bVar2 = thunk_FUN_004961b0(sVar8,sVar9,sVar6);
          if ((CONCAT31(extraout_var,bVar2) != 0) &&
             (*(int *)(DAT_007fb248 +
                      (param_7 +
                      ((int)DAT_007fb246 * (int)sVar6 + (int)DAT_007fb240 * (int)sVar9 + (int)sVar8)
                      * 2) * 4) == 0)) {
            *param_4 = sVar8;
            *param_5 = sVar9;
            *param_6 = sVar6;
            return 1;
          }
          sVar6 = sVar6 + 1;
          if (4 < sVar6) {
            sVar6 = 0;
          }
          sVar4 = sVar4 + 1;
        } while (sVar4 < 5);
        iVar7 = iVar7 + 1;
        iVar1 = iStack_8;
        sVar4 = (short)iVar7;
      }
      iVar5 = iVar5 + 1;
      sVar4 = (short)iVar5;
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

