
void FUN_006cfbe0(uint *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_8c;
  undefined4 local_88;
  uint local_84;
  uint local_80;
  uint local_10;
  uint local_c;
  uint local_8;

  uVar4 = *param_1;
  if (((uVar4 & 0x60004000) == 0) && (piVar2 = (int *)param_1[0x33], piVar2 != (int *)0x0)) {
    local_c = 0;
    local_8 = 0;
    if ((uVar4 & 0xc0000000) == 0) {
      if ((uVar4 & 0x8000000) == 0) {
        if ((uVar4 & 0xa0000000) == 0) {
          if ((uVar4 & 0x5000000) != 0) {
            local_10 = param_1[0x32];
            if (0 < (int)local_10) {
              do {
                uVar4 = param_1[0x30];
                if (0 < (int)param_1[0x30]) {
                  do {
                    if ((-1 < (short)piVar2[1]) && (iVar5 = *(int *)((int)piVar2 + 6), iVar5 != 0))
                    {
                      uVar3 = (int)(short)*piVar2 + *(int *)(iVar5 + 4);
                      if ((int)local_c < (int)uVar3) {
                        local_c = uVar3;
                      }
                      uVar3 = *(int *)(iVar5 + 8) + (int)*(short *)((int)piVar2 + 2);
                      if ((int)local_8 < (int)uVar3) {
                        local_8 = uVar3;
                      }
                    }
                    piVar2 = (int *)((int)piVar2 + 10);
                    uVar4 = uVar4 - 1;
                  } while (uVar4 != 0);
                }
                local_10 = local_10 - 1;
              } while (local_10 != 0);
            }
          }
        }
        else {
          iVar5 = 0;
          local_8c = 0x7c;
          if (0 < (int)param_1[0x32]) {
            do {
              if (*piVar2 != 0) {
                local_88 = 6;
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                iVar1 = (**(code **)(*(int *)*piVar2 + 0x58))((int *)*piVar2,&local_8c);
                if (iVar1 != 0) {
                  local_c = 0;
                  local_8 = 0;
                  break;
                }
                if ((int)local_c < (int)local_80) {
                  local_c = local_80;
                }
                if ((int)local_8 < (int)local_84) {
                  local_8 = local_84;
                }
              }
              piVar2 = piVar2 + 1;
              iVar5 = iVar5 + 1;
            } while (iVar5 < (int)param_1[0x32]);
          }
        }
      }
      else {
        uVar4 = param_1[0x32];
        if (0 < (int)uVar4) {
          do {
            iVar5 = *piVar2;
            if (iVar5 != 0) {
              if ((int)local_c < (int)*(uint *)(iVar5 + 4)) {
                local_c = *(uint *)(iVar5 + 4);
              }
              if ((int)local_8 < (int)*(uint *)(iVar5 + 8)) {
                local_8 = *(uint *)(iVar5 + 8);
              }
            }
            piVar2 = piVar2 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
      }
    }
    else {
      uVar4 = param_1[0x32];
      if (0 < (int)uVar4) {
        do {
          iVar5 = *piVar2;
          if (iVar5 != 0) {
            if ((int)local_c < (int)*(uint *)(iVar5 + 4)) {
              local_c = *(uint *)(iVar5 + 4);
            }
            if ((int)local_8 < (int)*(uint *)(iVar5 + 8)) {
              local_8 = *(uint *)(iVar5 + 8);
            }
          }
          piVar2 = piVar2 + 2;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    param_1[0xe] = local_c;
    param_1[0xf] = local_8;
  }
  return;
}

