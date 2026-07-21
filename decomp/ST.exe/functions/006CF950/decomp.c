
void FUN_006cf950(uint *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  undefined4 local_a0;
  undefined4 local_9c;
  uint local_98;
  uint local_94;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;

  if (param_1[8] == 0xffffffff) {
    uVar4 = *param_1;
    param_1[10] = param_1[6];
    param_1[0xb] = param_1[7];
    if ((uVar4 & 0x60004000) == 0) {
      if ((uVar4 & 0x8000000) == 0) {
        if ((uVar4 & 0x5000000) != 0) {
          local_1c = param_1[0x30];
          local_10 = 32000;
          local_8 = 32000;
          iVar3 = 0;
          iVar6 = 0;
          psVar7 = (short *)(param_1[0x33] + param_1[0x31] * local_1c * 10);
          local_18 = 0;
          local_20 = 0;
          local_c = 0;
          local_14 = 0;
          if (0 < (int)local_1c) {
            do {
              if ((-1 < psVar7[2]) && (iVar2 = *(int *)(psVar7 + 3), iVar2 != 0)) {
                iVar3 = (int)*psVar7;
                uVar4 = *(int *)(iVar2 + 4) + iVar3;
                if ((int)local_c < (int)uVar4) {
                  local_c = uVar4;
                }
                iVar6 = (int)psVar7[1];
                uVar4 = *(int *)(iVar2 + 8) + iVar6;
                if ((int)local_14 < (int)uVar4) {
                  local_14 = uVar4;
                }
                iVar5 = *(short *)(iVar2 + 0xe) + iVar3;
                if (iVar5 < local_10) {
                  local_10 = iVar5;
                }
                iVar5 = *(short *)(iVar2 + 0x10) + iVar6;
                if (iVar5 < local_8) {
                  local_8 = iVar5;
                }
                iVar3 = (int)*(short *)(iVar2 + 0x12) + (int)*(short *)(iVar2 + 0xe) + iVar3;
                if (local_18 < iVar3) {
                  local_18 = iVar3;
                }
                iVar2 = *(short *)(iVar2 + 0x14) + iVar6 + (int)*(short *)(iVar2 + 0x10);
                iVar3 = local_20;
                iVar6 = local_18;
                if (local_20 < iVar2) {
                  iVar3 = iVar2;
                  local_20 = iVar2;
                }
              }
              psVar7 = psVar7 + 5;
              local_1c = local_1c - 1;
            } while (local_1c != 0);
          }
          param_1[10] = param_1[6] + local_10;
          param_1[0xb] = param_1[7] + local_8;
          param_1[0xd] = iVar3 - local_8;
          param_1[0xc] = iVar6 - local_10;
          param_1[8] = local_c;
          param_1[9] = local_14;
          return;
        }
        if ((uVar4 & 0xc0000000) != 0) {
          iVar3 = *(int *)(param_1[0x33] + param_1[0x31] * 8);
          if (iVar3 != 0) {
            uVar4 = *(uint *)(iVar3 + 4);
            param_1[8] = uVar4;
            param_1[0xc] = uVar4;
            uVar4 = *(uint *)(*(int *)(param_1[0x33] + param_1[0x31] * 8) + 8);
            param_1[9] = uVar4;
            param_1[0xd] = uVar4;
            return;
          }
          param_1[8] = 0;
          param_1[0xc] = 0;
          param_1[9] = 0;
          param_1[0xd] = 0;
          return;
        }
        if ((uVar4 & 0xa0000000) == 0) {
          return;
        }
        piVar1 = *(int **)(param_1[0x33] + param_1[0x31] * 4);
        if (piVar1 != (int *)0x0) {
          local_a0 = 0x7c;
          local_9c = 6;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar3 = (**(code **)(*piVar1 + 0x58))(piVar1,&local_a0);
          if (iVar3 != 0) {
            param_1[8] = 0;
            param_1[0xc] = 0;
            param_1[9] = 0;
            param_1[0xd] = 0;
            return;
          }
          param_1[8] = local_94;
          param_1[0xc] = local_94;
          param_1[9] = local_98;
          param_1[0xd] = local_98;
          return;
        }
      }
      else {
        iVar3 = *(int *)(param_1[0x33] + param_1[0x31] * 4);
        if (iVar3 != 0) {
          param_1[8] = *(uint *)(iVar3 + 4);
          param_1[9] = *(uint *)(iVar3 + 8);
          param_1[10] = (int)*(short *)(iVar3 + 0xe) + param_1[6];
          param_1[0xb] = (int)*(short *)(iVar3 + 0x10) + param_1[7];
          param_1[0xc] = (int)*(short *)(iVar3 + 0x12);
          param_1[0xd] = (int)*(short *)(iVar3 + 0x14);
          return;
        }
      }
      param_1[8] = 0;
      param_1[0xc] = 0;
      param_1[9] = 0;
      param_1[0xd] = 0;
    }
  }
  return;
}

