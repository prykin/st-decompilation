
void FUN_004e75f0(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint *puVar6;
  
  iVar2 = param_1;
  if ((-1 < param_1) && (param_1 < 8)) {
    uVar4 = GetPlayerRaceId((char)param_1);
    param_1 = 0;
    iVar5 = (uVar4 & 0xff) - 1;
    if (0 < *(int *)(&DAT_007995bc + iVar5 * 0x4bf)) {
      puVar6 = (uint *)(&DAT_007995bc + iVar5 * 0x4bf);
      do {
        if (0x50 < param_1) {
          return;
        }
        iVar5 = thunk_FUN_004e60d0(iVar2,*puVar6);
        if (((iVar5 < (int)(uint)(byte)puVar6[1]) &&
            (bVar3 = thunk_FUN_004e5910(iVar2,*puVar6), CONCAT31(extraout_var,bVar3) != 0)) &&
           (bVar3 = thunk_FUN_004e5f90(iVar2,*puVar6), CONCAT31(extraout_var_00,bVar3) == 0)) {
          thunk_FUN_004e6310(iVar2,*puVar6,(uint)(byte)puVar6[1]);
        }
        piVar1 = (int *)((int)puVar6 + 5);
        puVar6 = (uint *)((int)puVar6 + 5);
        param_1 = param_1 + 1;
      } while (0 < *piVar1);
    }
  }
  return;
}

