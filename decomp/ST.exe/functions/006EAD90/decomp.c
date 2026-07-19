
int __thiscall
FUN_006ead90(void *this,int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,
            int *param_6)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  int local_24;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_24 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = (int *)0x0;
  if ((param_3 != 0) && (param_4 != 0)) {
    if (param_3 < 0) {
      param_1 = param_1 + param_3 + 1;
      param_3 = -param_3;
    }
    if (param_4 < 0) {
      param_2 = param_2 + param_4 + 1;
      param_4 = -param_4;
    }
    puVar5 = *(uint **)((int)this + 0x31c);
    local_1c = 0;
    if (0 < *(int *)((int)this + 0x310)) {
      local_10 = 0;
      local_18 = 200;
      do {
        if ((((*puVar5 & 0x18000) == 0x18000) && (puVar5[2] == 0)) && (puVar5[6] != 0)) {
          iVar4 = (int)puVar5[0x17] / 2 + puVar5[0x15];
          iVar2 = (int)puVar5[0x18] / 2 + puVar5[0x16];
          if (((param_1 <= iVar4) && (iVar4 < param_1 + param_3)) &&
             ((param_2 <= iVar2 && (iVar2 < param_2 + param_4)))) {
            if (local_14 <= local_c) {
              piVar3 = (int *)FUN_006bfb50(local_8,local_18);
              if (piVar3 == (int *)0x0) {
                FUN_006ab060(&local_8);
                local_c = 0;
                local_24 = -2;
                break;
              }
              local_14 = local_14 + 10;
              local_18 = local_18 + 200;
              local_8 = piVar3;
            }
            iVar2 = 0;
            if (local_10 != 0) {
              piVar3 = local_8;
              do {
                iVar4 = *(int *)((int)this + 0x31c) + *piVar3 * 0x114;
                uVar1 = *(uint *)(iVar4 + 0x14);
                if (((int)puVar5[5] < (int)uVar1) ||
                   ((puVar5[5] == uVar1 && ((int)puVar5[3] < *(int *)(iVar4 + 0xc))))) {
                  if (iVar2 < local_c) {
                    Library::MSVCRT::FUN_0072da70
                              (local_8 + iVar2 * 5 + 5,local_8 + iVar2 * 5,local_10 + iVar2 * -0x14)
                    ;
                  }
                  break;
                }
                iVar2 = iVar2 + 1;
                piVar3 = piVar3 + 5;
              } while (iVar2 < local_c);
            }
            local_8[iVar2 * 5] = local_1c;
            local_8[iVar2 * 5 + 1] = puVar5[6];
            local_8[iVar2 * 5 + 2] = 0;
            local_8[iVar2 * 5 + 3] = 0;
            local_8[iVar2 * 5 + 4] = puVar5[5];
            local_c = local_c + 1;
            local_10 = local_10 + 0x14;
          }
        }
        local_1c = local_1c + 1;
        puVar5 = puVar5 + 0x45;
      } while (local_1c < *(int *)((int)this + 0x310));
    }
  }
  *param_5 = local_8;
  *param_6 = local_c;
  if (local_24 == 0) {
    return 0;
  }
  RaiseInternalException(local_24,DAT_007ed77c,s_E__ourlib_St3dspr_cpp_007eef4c,0x6ef);
  return local_24;
}

