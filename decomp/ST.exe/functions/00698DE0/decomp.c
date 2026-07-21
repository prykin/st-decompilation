
int FUN_00698de0(undefined1 *param_1,uint param_2,int param_3,undefined4 param_4,int param_5,
                int param_6,int param_7)

{
  short *psVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  uint *puVar7;
  short *psVar8;
  int local_8;

  puVar2 = param_1;
  local_8 = 0;
  Library::MSVCRT::FUN_00730810(param_1,param_2,10,&LAB_00404a93);
  iVar5 = *(int *)(param_1 + param_2 * 10 + -4);
  uVar4 = 0;
  uVar3 = param_2;
  if (0 < (int)param_2) {
    puVar7 = (uint *)(param_1 + 6);
    do {
      uVar3 = uVar4;
      if ((uint)(((100 - param_7) * iVar5) / 100) < *puVar7) break;
      uVar4 = uVar4 + 1;
      *puVar7 = iVar5 - *puVar7;
      puVar7 = (uint *)((int)puVar7 + 10);
      uVar3 = param_2;
    } while ((int)uVar4 < (int)param_2);
  }
  param_2 = uVar3;
  if (0 < param_3) {
    param_7 = param_3;
    psVar6 = (short *)(param_6 + 4);
    do {
      iVar5 = thunk_FUN_0069f7f0((int)puVar2,param_2,10,6,10);
      psVar8 = psVar6;
      if (-1 < iVar5) {
        psVar8 = psVar6 + 5;
        psVar1 = (short *)(puVar2 + iVar5 * 10);
        psVar6[-2] = *(short *)(puVar2 + iVar5 * 10);
        psVar6[-1] = psVar1[1];
        local_8 = local_8 + 1;
        *psVar6 = psVar1[2];
        if (-1 < (int)param_2) {
          param_1 = (undefined1 *)(param_2 + 1);
          puVar7 = (uint *)(puVar2 + 6);
          do {
            iVar5 = FUN_006acf90((int)*psVar1,(int)psVar1[1],(int)*(short *)((int)puVar7 + -6),
                                 (int)(short)puVar7[-1]);
            if (iVar5 < 7) {
              if (iVar5 < 3) {
                *puVar7 = 0;
              }
              else {
                *puVar7 = *puVar7 / (uint)(iVar5 * param_5);
              }
            }
            puVar7 = (uint *)((int)puVar7 + 10);
            param_1 = param_1 + -1;
          } while (param_1 != (undefined1 *)0x0);
        }
      }
      param_7 = param_7 + -1;
      psVar6 = psVar8;
    } while (param_7 != 0);
  }
  return local_8;
}

