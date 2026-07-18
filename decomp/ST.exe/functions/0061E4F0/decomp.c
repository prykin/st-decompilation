
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0061e4f0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x93)) {
    do {
      local_8 = 1;
      if (1 < *(int *)(*(int *)(param_1 + 0x9b) + iVar5 * 4)) {
        iVar6 = 0x14;
        do {
          uVar3 = *(int *)(param_1 + 0xac) * 0x41c64e6d + 0x3039;
          *(uint *)(param_1 + 0xac) = uVar3;
          if (((uVar3 >> 0x10) % 5 == 0) &&
             ((iVar5 != 0 || ((iVar6 != 0 && (local_8 != **(int **)(param_1 + 0x9b) + -1)))))) {
            uVar3 = *(int *)(param_1 + 0xac) * 0x41c64e6d + 0x3039;
            *(uint *)(param_1 + 0xac) = uVar3;
            pfVar4 = (float *)(*(int *)(*(int *)(param_1 + 0x9f) + iVar5 * 4) + iVar6);
            *pfVar4 = ((float)((uVar3 >> 0x10) % 0xb) * _DAT_0079070c - _DAT_00790784) /
                      (*(float *)(param_1 + 0x47) + *(float *)(param_1 + 0x47)) + *pfVar4;
            uVar3 = *(int *)(param_1 + 0xac) * 0x41c64e6d + 0x3039;
            *(uint *)(param_1 + 0xac) = uVar3;
            pfVar4 = (float *)(*(int *)(*(int *)(param_1 + 0x9f) + iVar5 * 4) + 4 + iVar6);
            *pfVar4 = ((float)((uVar3 >> 0x10) % 0xb) * _DAT_0079070c - _DAT_00790784) /
                      (*(float *)(param_1 + 0x47) + *(float *)(param_1 + 0x47)) + *pfVar4;
            uVar3 = *(int *)(param_1 + 0xac) * 0x41c64e6d + 0x3039;
            *(uint *)(param_1 + 0xac) = uVar3;
            pfVar4 = (float *)(*(int *)(*(int *)(param_1 + 0x9f) + iVar5 * 4) + 8 + iVar6);
            *pfVar4 = ((float)((uVar3 >> 0x10) % 0xb) * _DAT_0079070c - _DAT_00790784) /
                      (*(float *)(param_1 + 0x47) + *(float *)(param_1 + 0x47)) + *pfVar4;
            iVar1 = *(int *)(*(int *)(param_1 + 0x9f) + iVar5 * 4);
            iVar2 = *(int *)(iVar1 + 0x10 + iVar6);
            if (iVar2 != 0) {
              **(undefined4 **)(*(int *)(param_1 + 0x9f) + iVar2 * 4) =
                   *(undefined4 *)(iVar1 + iVar6);
              *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x9f) + iVar2 * 4) + 4) =
                   *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x9f) + iVar5 * 4) + 4 + iVar6);
              *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x9f) + iVar2 * 4) + 8) =
                   *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x9f) + iVar5 * 4) + 8 + iVar6);
            }
          }
          local_8 = local_8 + 1;
          iVar6 = iVar6 + 0x14;
        } while (local_8 < *(int *)(*(int *)(param_1 + 0x9b) + iVar5 * 4));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x93));
  }
  return;
}

