
undefined4 __cdecl
FUN_005845b0(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,int *param_7,
            int *param_8,int *param_9,uint param_10)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined3 extraout_var;
  int iVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  
  *param_7 = 0;
  *param_8 = 0;
  *param_9 = 0;
  if (((int)((param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f)) < param_3) &&
     (param_10 = param_10 * 0x41c64e6d + 0x3039, (param_10 & 0x10000) == 0)) {
LAB_00584666:
    if ((int)param_2 < 0) {
      if ((param_10 * 0x4e6d + 0x3039 & 0x10000) == 0) {
        piVar3 = (int *)&DAT_007cb658;
      }
      else {
        piVar3 = (int *)&DAT_007cb610;
      }
    }
    else if ((param_10 * 0x4e6d + 0x3039 & 0x10000) == 0) {
      piVar3 = (int *)&DAT_007cb634;
    }
    else {
      piVar3 = (int *)&DAT_007cb5ec;
    }
  }
  else {
    if ((int)param_2 < 1) {
      uVar1 = (uint)(param_2 != 0);
      if (uVar1 == 1) {
        piVar3 = (int *)&DAT_007cb6c4;
        if ((param_10 * 0x4e6d + 0x3039 & 0x10000) == 0) {
          piVar3 = (int *)&DAT_007cb6e8;
        }
        goto LAB_005846f7;
      }
      if (uVar1 == 0) goto LAB_00584666;
      if (uVar1 != 0xffffffff) {
        piVar3 = &DAT_007cb5c8;
        goto LAB_005846f7;
      }
    }
    if ((param_10 * 0x4e6d + 0x3039 & 0x10000) == 0) {
      piVar3 = (int *)&DAT_007cb6a0;
    }
    else {
      piVar3 = (int *)&DAT_007cb67c;
    }
  }
LAB_005846f7:
  if (piVar3 == (int *)0x0) {
    piVar3 = &DAT_007cb5c8;
  }
  param_10 = 0;
  do {
    iVar4 = (*piVar3 + param_1 * 9) * 6;
    iVar6 = *(short *)(&DAT_007cb418 + iVar4) + param_4;
    iVar5 = *(short *)(&DAT_007cb41c + iVar4) + param_6;
    iVar4 = *(short *)(&DAT_007cb41a + iVar4) + param_5;
    if (((((-1 < iVar6) && (-1 < iVar4)) && (-1 < iVar5)) &&
        ((iVar6 < SHORT_007fb240 && (iVar4 < SHORT_007fb242)))) && (iVar5 < SHORT_007fb244)) {
      sVar7 = (short)iVar6;
      sVar8 = (short)iVar4;
      sVar9 = (short)iVar5;
      bVar2 = thunk_FUN_004961b0(sVar7,sVar8,sVar9);
      if ((CONCAT31(extraout_var,bVar2) != 0) &&
         (((sVar7 < 0 || (SHORT_007fb240 <= sVar7)) ||
          ((((sVar8 < 0 || (((SHORT_007fb242 <= sVar8 || (sVar9 < 0)) || (SHORT_007fb244 <= sVar9)))
             ) || (g_worldCells
                   [(int)SHORT_007fb246 * (int)sVar9 + (int)SHORT_007fb240 * (int)sVar8 + (int)sVar7
                   ].objects[0] == (STWorldObject *)0x0)) &&
           ((((SHORT_007fb240 <= sVar7 || (sVar8 < 0)) ||
             ((SHORT_007fb242 <= sVar8 || ((sVar9 < 0 || (SHORT_007fb244 <= sVar9)))))) ||
            (g_worldCells
             [(int)SHORT_007fb246 * (int)sVar9 + (int)SHORT_007fb240 * (int)sVar8 + (int)sVar7].
             objects[1] == (STWorldObject *)0x0)))))))) {
        *param_7 = iVar6;
        *param_8 = iVar4;
        *param_9 = iVar5;
        return 1;
      }
    }
    param_10 = param_10 + 1;
    piVar3 = piVar3 + 1;
    if (8 < (int)param_10) {
      return 0;
    }
  } while( true );
}

