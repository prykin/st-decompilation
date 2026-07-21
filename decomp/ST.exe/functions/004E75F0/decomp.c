
void FUN_004e75f0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;

  iVar2 = param_1;
  if ((-1 < param_1) && (param_1 < 8)) {
    uVar3 = GetPlayerRaceId((char)param_1);
    param_1 = 0;
    iVar4 = (uVar3 & 0xff) - 1;
    if (0 < *(int *)(&DAT_007995bc + iVar4 * 0x4bf)) {
      puVar5 = (uint *)(&DAT_007995bc + iVar4 * 0x4bf);
      do {
        if (0x50 < param_1) {
          return;
        }
        iVar4 = thunk_FUN_004e60d0(iVar2,*puVar5);
        if (((iVar4 < (int)(uint)(byte)puVar5[1]) &&
            (iVar4 = thunk_FUN_004e5910(iVar2,*puVar5), iVar4 != 0)) &&
           (iVar4 = thunk_FUN_004e5f90(iVar2,*puVar5), iVar4 == 0)) {
          thunk_FUN_004e6310(iVar2,*puVar5,(uint)(byte)puVar5[1]);
        }
        piVar1 = (int *)((int)puVar5 + 5);
        puVar5 = (uint *)((int)puVar5 + 5);
        param_1 = param_1 + 1;
      } while (0 < *piVar1);
    }
  }
  return;
}

