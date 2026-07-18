
int __thiscall FUN_006eaff0(void *this,int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int local_24;
  int local_20;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puVar4 = *(uint **)((int)this + 0x31c);
  local_24 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = (int *)0x0;
  local_20 = 0;
  if (0 < *(int *)((int)this + 0x310)) {
    local_10 = 0;
    local_18 = 200;
    do {
      iVar5 = 0;
      if ((((((*puVar4 & 0x8001) == 0x8001) && (puVar4[6] != 0)) && ((int)puVar4[0x15] <= param_1))
          && ((param_1 < (int)(puVar4[0x17] + puVar4[0x15]) && ((int)puVar4[0x16] <= param_2)))) &&
         (param_2 < (int)(puVar4[0x18] + puVar4[0x16]))) {
        if (local_14 <= local_c) {
          piVar2 = (int *)FUN_006bfb50(local_8,local_18);
          if (piVar2 == (int *)0x0) {
            FUN_006ab060(&local_8);
            local_c = 0;
            local_24 = -2;
            break;
          }
          local_14 = local_14 + 10;
          local_18 = local_18 + 200;
          local_8 = piVar2;
        }
        if (local_10 != 0) {
          piVar2 = local_8;
          do {
            iVar3 = *(int *)((int)this + 0x31c) + *piVar2 * 0x114;
            uVar1 = *(uint *)(iVar3 + 0x14);
            if (((int)puVar4[5] < (int)uVar1) ||
               ((puVar4[5] == uVar1 && ((int)puVar4[3] < *(int *)(iVar3 + 0xc))))) {
              if (iVar5 < local_c) {
                FUN_0072da70(local_8 + iVar5 * 5 + 5,local_8 + iVar5 * 5,local_10 + iVar5 * -0x14);
              }
              break;
            }
            iVar5 = iVar5 + 1;
            piVar2 = piVar2 + 5;
          } while (iVar5 < local_c);
        }
        local_8[iVar5 * 5] = local_20;
        local_8[iVar5 * 5 + 1] = puVar4[6];
        if ((puVar4[1] & 4) == 0) {
          local_8[iVar5 * 5 + 2] =
               (int)((param_1 - puVar4[0x15]) * 100) / *(int *)((int)this + 0x2f0);
          iVar3 = (int)((param_2 - puVar4[0x16]) * 100) / *(int *)((int)this + 0x2f4);
        }
        else {
          local_8[iVar5 * 5 + 2] = param_1 - puVar4[0x15];
          iVar3 = param_2 - puVar4[0x16];
        }
        local_8[iVar5 * 5 + 3] = iVar3;
        local_8[iVar5 * 5 + 4] = puVar4[5];
        local_c = local_c + 1;
        local_10 = local_10 + 0x14;
      }
      local_20 = local_20 + 1;
      puVar4 = puVar4 + 0x45;
    } while (local_20 < *(int *)((int)this + 0x310));
  }
  *param_3 = local_8;
  *param_4 = local_c;
  if (local_24 == 0) {
    return 0;
  }
  FUN_006a5e40(local_24,DAT_007ed77c,0x7eef4c,0x73d);
  return local_24;
}

