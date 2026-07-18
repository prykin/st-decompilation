
void FUN_004e70f0(int param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint *puVar7;
  
  iVar3 = param_1;
  if ((((-1 < param_1) && (param_1 < 8)) && (-1 < param_2)) && (param_2 < 3)) {
    *param_4 = 0xffffffff;
    *param_3 = 0xffffffff;
    uVar5 = thunk_FUN_004406c0((char)param_1);
    param_1 = 0;
    iVar2 = param_2 + ((uVar5 & 0xff) - 1) * 3;
    if (0 < *(int *)(&DAT_007995bc + iVar2 * 0x195)) {
      puVar7 = (uint *)(&DAT_007995bc + iVar2 * 0x195);
      while (param_1 < 0x51) {
        iVar6 = thunk_FUN_004e60d0(iVar3,*puVar7);
        if (((iVar6 < (int)(uint)(byte)puVar7[1]) &&
            (bVar4 = thunk_FUN_004e5910(iVar3,*puVar7), CONCAT31(extraout_var,bVar4) != 0)) &&
           (bVar4 = thunk_FUN_004e5f90(iVar3,*puVar7), CONCAT31(extraout_var_00,bVar4) == 0)) {
          iVar3 = iVar2 * 0x51 + param_1;
          *param_3 = *(undefined4 *)(&DAT_007995bc + iVar3 * 5);
          *param_4 = (uint)(byte)(&DAT_007995c0)[iVar3 * 5];
          return;
        }
        piVar1 = (int *)((int)puVar7 + 5);
        puVar7 = (uint *)((int)puVar7 + 5);
        param_1 = param_1 + 1;
        if (*piVar1 < 1) {
          return;
        }
      }
    }
  }
  return;
}

