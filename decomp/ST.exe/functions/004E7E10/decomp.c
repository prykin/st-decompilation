
undefined4 FUN_004e7e10(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((-1 < (int)param_1) && ((int)param_1 < 8)) {
    thunk_FUN_004e7d70((int)param_1);
    uVar1 = GetPlayerRaceId((char)param_1);
    iVar2 = (uVar1 & 0xff) - 1;
    piVar3 = (int *)(&PTR_DAT_007c0dc8)[iVar2];
    if (*piVar3 != 0) {
      iVar4 = 0;
      do {
        if (*(int *)(iVar4 + 5 + (int)piVar3) == 0) {
          thunk_FUN_004e7980(param_1,*(int *)(iVar4 + (int)piVar3),
                             *(undefined1 *)(iVar4 + 4 + (int)piVar3));
        }
        piVar3 = (int *)(&PTR_DAT_007c0dc8)[iVar2];
        iVar4 = iVar4 + 0x19;
      } while (*(int *)(iVar4 + (int)piVar3) != 0);
    }
    return 0;
  }
  return 0;
}

