
void FUN_004e70f0(int param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;

  iVar3 = param_1;
  if ((((-1 < param_1) && (param_1 < 8)) && (-1 < param_2)) && (param_2 < 3)) {
    *param_4 = 0xffffffff;
    *param_3 = 0xffffffff;
    uVar4 = GetPlayerRaceId((char)param_1);
    param_1 = 0;
    iVar2 = param_2 + ((uVar4 & 0xff) - 1) * 3;
    if (0 < *(int *)(&DAT_007995bc + iVar2 * 0x195)) {
      puVar6 = (uint *)(&DAT_007995bc + iVar2 * 0x195);
      while (param_1 < 0x51) {
        iVar5 = thunk_FUN_004e60d0(iVar3,*puVar6);
        if (((iVar5 < (int)(uint)(byte)puVar6[1]) &&
            (iVar5 = thunk_FUN_004e5910(iVar3,*puVar6), iVar5 != 0)) &&
           (iVar5 = thunk_FUN_004e5f90(iVar3,*puVar6), iVar5 == 0)) {
          iVar3 = iVar2 * 0x51 + param_1;
          *param_3 = *(undefined4 *)(&DAT_007995bc + iVar3 * 5);
          *param_4 = (uint)(byte)(&DAT_007995c0)[iVar3 * 5];
          return;
        }
        piVar1 = (int *)((int)puVar6 + 5);
        puVar6 = (uint *)((int)puVar6 + 5);
        param_1 = param_1 + 1;
        if (*piVar1 < 1) {
          return;
        }
      }
    }
  }
  return;
}

