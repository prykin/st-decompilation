
void thunk_FUN_004e7230(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  
  iVar5 = param_2;
  iVar2 = param_1;
  puVar8 = param_3;
  for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  puVar8 = param_4;
  for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  if ((((-1 < param_1) && (param_1 < 8)) && (-1 < param_2)) && (param_2 < 3)) {
    uVar4 = thunk_FUN_004406c0((char)param_1);
    param_1 = 0;
    param_2 = 0;
    iVar5 = iVar5 + ((uVar4 & 0xff) - 1) * 3;
    if (0 < *(int *)(&DAT_007995bc + iVar5 * 0x195)) {
      puVar7 = (uint *)(&DAT_007995bc + iVar5 * 0x195);
      iVar5 = (int)param_3 - (int)param_4;
      do {
        if (0x50 < param_1) {
          return;
        }
        iVar6 = thunk_FUN_004e60d0(iVar2,*puVar7);
        if (((iVar6 < (int)(uint)(byte)puVar7[1]) &&
            (bVar3 = thunk_FUN_004e5910(iVar2,*puVar7), CONCAT31(extraout_var,bVar3) != 0)) &&
           (bVar3 = thunk_FUN_004e5f90(iVar2,*puVar7), CONCAT31(extraout_var_00,bVar3) == 0)) {
          *(uint *)(iVar5 + (int)param_4) = *puVar7;
          *param_4 = CONCAT31(extraout_var_00,(char)puVar7[1]);
          param_2 = param_2 + 1;
          param_4 = param_4 + 1;
          if (6 < param_2) {
            return;
          }
        }
        piVar1 = (int *)((int)puVar7 + 5);
        puVar7 = (uint *)((int)puVar7 + 5);
        param_1 = param_1 + 1;
      } while (0 < *piVar1);
    }
  }
  return;
}

