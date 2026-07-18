
int __cdecl thunk_FUN_00428b20(int *param_1,uint param_2,uint param_3,uint *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  int iStack_14;
  uint uStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = param_3;
  piVar6 = param_1;
  do {
    uVar4 = param_2 >> 2;
    bVar8 = uVar4 == 0;
    piVar7 = piVar6;
    do {
      piVar6 = piVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      piVar6 = piVar7 + 1;
      bVar8 = *piVar7 == -1;
      piVar7 = piVar6;
    } while (bVar8);
    if (!bVar8) {
      uStack_8 = param_3 - uStack_8;
      piVar6 = (int *)((int)param_1 + (param_3 - 1) * param_2);
      goto LAB_00428b85;
    }
    uVar4 = uStack_8 - 1;
    bVar8 = 0 < (int)uStack_8;
    uStack_8 = uVar4;
  } while (uVar4 != 0 && bVar8);
  uStack_8 = param_3;
  iStack_c = -1;
  uStack_10 = param_2;
  iStack_14 = -1;
  goto LAB_00428c07;
  while( true ) {
    piVar6 = (int *)((int)piVar7 + param_2 * -2 + uVar4);
    uVar5 = param_3 - 1;
    bVar8 = (int)param_3 < 1;
    param_3 = uVar5;
    if (uVar5 == 0 || bVar8) break;
LAB_00428b85:
    uVar4 = param_2 >> 2;
    bVar8 = uVar4 == 0;
    do {
      piVar7 = piVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      piVar7 = piVar6 + 1;
      bVar8 = *piVar6 == -1;
      piVar6 = piVar7;
    } while (bVar8);
    uVar5 = param_3;
    if (!bVar8) break;
  }
  iStack_c = uVar5 - 1;
  uStack_10 = param_2;
  iStack_14 = 0;
  piVar6 = (int *)((int)param_1 + uStack_8 * param_2);
  bVar8 = SCARRY4(iStack_c - uStack_8,1);
  iVar2 = (iStack_c - uStack_8) + 1;
  do {
    uVar4 = uStack_10 >> 2;
    piVar7 = piVar6;
    if (uStack_10 >> 2 != 0 && !bVar8) {
      do {
        if (*piVar7 != -1) {
          uStack_10 = (int)piVar7 - (int)piVar6;
          break;
        }
        uVar5 = uVar4 - 1;
        bVar8 = 0 < (int)uVar4;
        uVar4 = uVar5;
        piVar7 = piVar7 + 1;
      } while (uVar5 != 0 && bVar8);
    }
    uVar4 = param_2 - iStack_14 >> 2;
    piVar7 = (int *)((int)piVar6 + param_2);
    if (uVar4 != 0 && !SBORROW4((int)((int)piVar6 + param_2),4)) {
      do {
        if (piVar7[-1] != -1) {
          iStack_14 = (int)piVar7 - (int)piVar6;
          break;
        }
        uVar5 = uVar4 - 1;
        bVar8 = 0 < (int)uVar4;
        uVar4 = uVar5;
        piVar7 = piVar7 + -1;
      } while (uVar5 != 0 && bVar8);
    }
    piVar6 = (int *)((int)piVar6 + param_2);
    bVar8 = SBORROW4(iVar2,1);
    iVar3 = iVar2 + -1;
    bVar1 = 0 < iVar2;
    iVar2 = iVar3;
  } while (iVar3 != 0 && bVar1);
LAB_00428c07:
  param_4[1] = uStack_8;
  *param_4 = uStack_10;
  uVar4 = (iStack_c - uStack_8) + 1;
  param_4[3] = uVar4;
  param_4[2] = iStack_14 - uStack_10;
  if (iStack_c < (int)uStack_8) {
    return 0;
  }
  iVar2 = (iStack_14 - uStack_10) * uVar4;
  iVar3 = FUN_006aac70(iVar2);
  FUN_006b0290(iVar3,param_4[2],0,0,(int)param_1,param_2,*param_4,param_4[1],param_4[2],param_4[3]);
  DAT_007f4dd0 = DAT_007f4dd0 + iVar2;
  return iVar3;
}

