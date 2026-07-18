
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006ecc70(void *this,int *param_1,uint *param_2)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  int local_60;
  int local_5c;
  int local_58;
  float local_50;
  float local_4c;
  float local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint *local_18;
  short *local_14;
  uint *local_10;
  int *local_c;
  int *local_8;
  
  local_8 = (int *)FUN_006bfb70(param_2[0x38] << 4);
  if (local_8 != (int *)0x0) {
    local_10 = (uint *)param_2[0x39];
    local_18 = (uint *)param_2[0x3c];
    param_2[0x3b] = (uint)local_8;
    param_2[0x3a] = param_2[0x38];
    local_38 = 0;
    if (0 < (int)param_2[0x38]) {
      local_c = local_8 + 1;
      do {
        psVar4 = (short *)local_18[3];
        local_18[2] = local_10[1];
        psVar1 = (short *)local_10[2];
        local_24 = (int)*psVar1;
        local_50 = (float)local_24 * (float)*(double *)((int)this + 0x368) + (float)param_2[0x35];
        local_20 = (int)psVar1[1];
        local_4c = (float)local_20 * (float)*(double *)((int)this + 0x368) + (float)param_2[0x36];
        local_1c = (int)psVar1[2];
        local_48 = (float)local_1c * (float)*(double *)((int)this + 0x3a4) * (float)_DAT_0079dfa8 +
                   (float)*(double *)((int)this + 0x394);
        FUN_006e25d0(this,&local_60);
        iVar3 = *(int *)((int)this + 0x2e4);
        local_3c = local_60;
        local_40 = local_5c;
        *psVar4 = (short)((uint)local_60 >> 0x10);
        local_44 = local_58 - (iVar3 >> 0x10);
        psVar4[1] = (short)((uint)local_5c >> 0x10);
        psVar4[2] = (short)local_44;
        local_14 = psVar4 + 4;
        *local_8 = (int)*psVar4;
        *local_c = (int)psVar4[1];
        local_2c = (int)*psVar4;
        local_28 = (int)psVar4[1];
        local_34 = 1;
        local_30 = local_44;
        if (1 < (int)local_10[1]) {
          do {
            psVar4 = psVar1 + 4;
            sVar2 = (short)((uint)((*psVar4 - local_24) * *(int *)((int)this + 0x3ac) +
                                  (psVar1[5] - local_20) * *(int *)((int)this + 0x3b0) + local_60 +
                                  (psVar1[6] - local_1c) * *(int *)((int)this + 0x3b4)) >> 0x10);
            *local_14 = sVar2;
            if ((int)sVar2 < *local_8) {
              *local_8 = (int)sVar2;
            }
            if (local_2c < *local_14) {
              local_2c = (int)*local_14;
            }
            sVar2 = (short)((uint)((psVar1[5] - local_20) * *(int *)((int)this + 0x3bc) +
                                  (psVar1[6] - local_1c) * *(int *)((int)this + 0x3c0) + local_5c +
                                  (*psVar4 - local_24) * *(int *)((int)this + 0x3b8)) >> 0x10);
            local_14[1] = sVar2;
            if ((int)sVar2 < *local_c) {
              *local_c = (int)sVar2;
            }
            if (local_28 < local_14[1]) {
              local_28 = (int)local_14[1];
            }
            sVar2 = (psVar1[5] - (short)local_20) * *(short *)((int)this + 0x3c8) + (short)local_44
                    + (*psVar4 - (short)local_24) * *(short *)((int)this + 0x3c4) +
                    (psVar1[6] - (short)local_1c) * *(short *)((int)this + 0x3cc);
            local_14[2] = sVar2;
            if ((int)local_30 < (int)sVar2) {
              local_30 = (int)sVar2;
            }
            local_14 = local_14 + 4;
            local_34 = local_34 + 1;
            psVar1 = psVar4;
          } while (local_34 < (int)local_10[1]);
        }
        local_c[1] = (local_2c - *local_8) + 1;
        local_c[2] = (local_28 - *local_c) + 1;
        iVar3 = FUN_006b0460(local_8,local_8,param_1);
        if (iVar3 == 0) {
          *local_18 = 2;
          *local_8 = -1;
        }
        else {
          *local_18 = *local_10 & 1;
          *param_2 = *param_2 | 0x20;
          local_18[1] = local_30;
          if (*(int **)this != (int *)0x0) {
            FUN_006b5f80(*(int **)this,*(int *)((int)this + 0x20) + *local_8,
                         *(int *)((int)this + 0x24) + *local_c,local_c[1],local_c[2]);
          }
        }
        local_8 = local_8 + 4;
        local_c = local_c + 4;
        local_10 = local_10 + 3;
        local_18 = local_18 + 4;
        local_38 = local_38 + 1;
      } while (local_38 < (int)param_2[0x38]);
    }
    return 0;
  }
  return 0xfffffffe;
}

