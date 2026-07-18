
void __cdecl FUN_00574920(short *param_1,int param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  byte *local_60;
  uint local_5c;
  int local_58;
  int local_50;
  undefined4 *local_4c;
  int local_48;
  undefined1 *local_44;
  int local_40;
  int local_3c;
  int local_34;
  uint local_30;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079b0f8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff54;
  local_4c = (undefined4 *)0x0;
  iVar2 = (int)param_1[1] * (int)*param_1;
  local_24 = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
  local_40 = 1;
  local_2c = (int *)((int)param_1 + (local_24 * 5 + param_2 + (*param_1 * param_3) / 2) * 4 + 0x459)
  ;
  local_34 = 5;
  ExceptionList = &local_14;
  do {
    if (local_34 < 0) {
      ExceptionList = local_14;
      return;
    }
    iVar2 = *local_2c;
    if (iVar2 != 0) {
      local_20 = 0;
      local_3c = 0;
      local_28 = 0;
      local_58 = iVar2;
      if ((*(int *)(iVar2 + 0x10) != 0) && (*(int *)(iVar2 + 0x14) != 0)) {
        *(undefined4 *)(*(int *)((int)param_1 + 0x451) + 4) = 0;
        do {
          iVar7 = *(int *)((int)param_1 + 0x451);
          uVar9 = *(uint *)(iVar7 + 4);
          if (uVar9 < *(uint *)(iVar7 + 0xc)) {
            piVar10 = (int *)(*(int *)(iVar7 + 8) * uVar9 + *(int *)(iVar7 + 0x1c));
            *(uint *)(iVar7 + 4) = uVar9 + 1;
          }
          else {
            piVar10 = (int *)0x0;
          }
        } while ((piVar10 != (int *)0x0) &&
                ((*(int *)(iVar2 + 0x10) != *piVar10 || (*(int *)(iVar2 + 0x14) != piVar10[1]))));
        local_3c = 1;
        if (piVar10 == (int *)0x0) {
          FUN_006a5e90(*(undefined4 **)(iVar2 + 0xc));
          puVar3 = (undefined4 *)
                   FUN_006aac70((uint)*(byte *)(param_1 + 2) * (uint)*(byte *)(param_1 + 2) * 4);
          *(undefined4 **)(iVar2 + 0xc) = puVar3;
          local_28 = 1;
          local_20 = 1;
          if (*(undefined4 **)(iVar2 + 0x10) != (undefined4 *)0x0) {
            puVar5 = *(undefined4 **)(iVar2 + 0x10);
            for (iVar7 = (uint)*(byte *)(param_1 + 2) * (uint)*(byte *)(param_1 + 2); iVar7 != 0;
                iVar7 = iVar7 + -1) {
              *puVar3 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar3 = puVar3 + 1;
            }
            for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
              *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
              puVar5 = (undefined4 *)((int)puVar5 + 1);
              puVar3 = (undefined4 *)((int)puVar3 + 1);
            }
          }
          local_8 = 0;
          FUN_006b03d0(*(char **)(iVar2 + 0xc),*(char **)(iVar2 + 0x14),
                       (uint)*(byte *)(param_1 + 2) << 1,(uint)*(byte *)(param_1 + 2) << 1,
                       *(char *)(iVar2 + 10));
          local_8 = 0xffffffff;
        }
        else {
          if (*(undefined4 **)(iVar2 + 0xc) != (undefined4 *)0x0) {
            *(undefined4 *)(*(int *)((int)param_1 + 0x451) + 4) = 0;
            do {
              iVar7 = *(int *)((int)param_1 + 0x451);
              uVar9 = *(uint *)(iVar7 + 4);
              if (uVar9 < *(uint *)(iVar7 + 0xc)) {
                piVar10 = (int *)(*(int *)(iVar7 + 8) * uVar9 + *(int *)(iVar7 + 0x1c));
                *(uint *)(iVar7 + 4) = uVar9 + 1;
              }
              else {
                piVar10 = (int *)0x0;
              }
              if (piVar10 == (int *)0x0) goto LAB_00574b14;
            } while (*(int *)(iVar2 + 0xc) != piVar10[2]);
            if (piVar10 == (int *)0x0) {
LAB_00574b14:
              FUN_006a5e90(*(undefined4 **)(iVar2 + 0xc));
            }
          }
          *(int *)(iVar2 + 0xc) = piVar10[2];
        }
      }
      if ((local_34 == 0) || ((*(byte *)(iVar2 + 0x4f) & 0x10) != 0)) {
        if (local_40 == 0) goto LAB_00574b4a;
      }
      else {
        local_4c = *(undefined4 **)(iVar2 + 0x18);
        if (local_4c != (undefined4 *)0x0) {
LAB_00574b4a:
          if (local_40 == 0) {
            if (local_3c == 0) {
              if (*(int *)(iVar2 + 0xc) != 0) {
                *(undefined4 *)(*(int *)((int)param_1 + 0x451) + 4) = 0;
                do {
                  iVar7 = *(int *)((int)param_1 + 0x451);
                  uVar9 = *(uint *)(iVar7 + 4);
                  if (uVar9 < *(uint *)(iVar7 + 0xc)) {
                    iVar4 = *(int *)(iVar7 + 8) * uVar9 + *(int *)(iVar7 + 0x1c);
                    *(uint *)(iVar7 + 4) = uVar9 + 1;
                  }
                  else {
                    iVar4 = 0;
                  }
                  if (iVar4 == 0) goto LAB_00574bcc;
                } while (*(int *)(iVar2 + 0xc) != *(int *)(iVar4 + 8));
                if (iVar4 == 0) {
LAB_00574bcc:
                  FUN_006a5e90(*(undefined4 **)(iVar2 + 0xc));
                }
              }
              puVar5 = (undefined4 *)
                       FUN_006aac70((uint)*(byte *)(param_1 + 2) * (uint)*(byte *)(param_1 + 2) * 4)
              ;
              *(undefined4 **)(iVar2 + 0xc) = puVar5;
              puVar3 = *(undefined4 **)(iVar2 + 0x10);
              if ((puVar3 != (undefined4 *)0x0) ||
                 (puVar3 = *(undefined4 **)(iVar2 + 0x14), puVar3 != (undefined4 *)0x0)) {
                for (iVar7 = (uint)*(byte *)(param_1 + 2) * (uint)*(byte *)(param_1 + 2); iVar7 != 0
                    ; iVar7 = iVar7 + -1) {
                  *puVar5 = *puVar3;
                  puVar3 = puVar3 + 1;
                  puVar5 = puVar5 + 1;
                }
                for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
                  puVar3 = (undefined4 *)((int)puVar3 + 1);
                  puVar5 = (undefined4 *)((int)puVar5 + 1);
                }
              }
            }
            else if (local_20 == 0) {
              puVar6 = (undefined4 *)
                       FUN_006aac70((uint)*(byte *)(param_1 + 2) * (uint)*(byte *)(param_1 + 2) * 4)
              ;
              puVar3 = *(undefined4 **)(iVar2 + 0xc);
              puVar5 = puVar6;
              for (iVar7 = (uint)*(byte *)(param_1 + 2) * (uint)*(byte *)(param_1 + 2); iVar7 != 0;
                  iVar7 = iVar7 + -1) {
                *puVar5 = *puVar3;
                puVar3 = puVar3 + 1;
                puVar5 = puVar5 + 1;
              }
              for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
                *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
                puVar3 = (undefined4 *)((int)puVar3 + 1);
                puVar5 = (undefined4 *)((int)puVar5 + 1);
              }
              *(undefined4 **)(iVar2 + 0xc) = puVar6;
            }
            local_28 = 0;
            if ((local_34 == 0) || ((*(byte *)(iVar2 + 0x4f) & 0x10) != 0)) {
              for (local_50 = 0; local_50 < (int)((uint)*(byte *)(param_1 + 2) * 2);
                  local_50 = local_50 + 1) {
                iVar7 = (uint)*(byte *)(param_1 + 2) * local_50;
                local_48 = iVar7 / 2 + (int)param_4;
                local_60 = (byte *)(*(int *)(iVar2 + 0xc) + iVar7 * 2);
                local_30 = 0;
                while ((int)local_30 < (int)((uint)*(byte *)(param_1 + 2) * 2)) {
                  uVar9 = local_30 & 0x80000003;
                  if ((int)uVar9 < 0) {
                    uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                  }
                  local_5c = (uint)(*(byte *)(((int)(local_30 + ((int)local_30 >> 0x1f & 3U)) >> 2)
                                             + local_48) & (&DAT_007ca6a4)[uVar9]);
                  if (local_5c == 0) {
LAB_00574e10:
                    local_30 = local_30 + 1;
                    local_60 = local_60 + 1;
                  }
                  else {
                    if (local_5c != (byte)(&DAT_007ca6a4)[uVar9]) {
                      *local_60 = *(byte *)((uint)*local_60 + DAT_008073c8);
                      goto LAB_00574e10;
                    }
                    *local_60 = *(byte *)((uint)*local_60 + DAT_00807560);
                    local_30 = local_30 + 1;
                    local_60 = local_60 + 1;
                  }
                }
              }
            }
            else {
              for (local_50 = 0; local_50 < (int)((uint)*(byte *)(param_1 + 2) * 2);
                  local_50 = local_50 + 1) {
                iVar4 = (uint)*(byte *)(param_1 + 2) * local_50;
                iVar7 = iVar4 / 2;
                local_48 = iVar7 + (int)param_4;
                local_44 = (undefined1 *)(iVar7 + (int)local_4c);
                local_60 = (byte *)(*(int *)(iVar2 + 0xc) + iVar4 * 2);
                for (local_30 = 0; (int)local_30 < (int)((uint)*(byte *)(param_1 + 2) * 2);
                    local_30 = local_30 + 1) {
                  iVar2 = (int)(local_30 + ((int)local_30 >> 0x1f & 3U)) >> 2;
                  uVar9 = local_30 & 0x80000003;
                  if ((int)uVar9 < 0) {
                    uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
                  }
                  bVar1 = (&DAT_007ca6a4)[uVar9];
                  if ((bVar1 & local_44[iVar2]) == bVar1) {
                    local_5c = (uint)(*(byte *)(iVar2 + local_48) & bVar1);
                    if (local_5c != 0) {
                      if (local_5c == bVar1) {
                        *local_60 = *(byte *)((uint)*local_60 + DAT_00807560);
                      }
                      else {
                        *local_60 = *(byte *)((uint)*local_60 + DAT_008073c8);
                      }
                    }
                  }
                  *(byte *)(iVar2 + local_48) =
                       *(byte *)(iVar2 + local_48) | (&DAT_007ca6a4)[uVar9] & local_44[iVar2];
                  local_60 = local_60 + 1;
                  iVar2 = local_58;
                }
              }
            }
            local_8 = 0xffffffff;
          }
          else {
            uVar8 = (uint)*(byte *)(param_1 + 2) * (uint)*(byte *)(param_1 + 2);
            puVar3 = local_4c;
            puVar5 = param_4;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *puVar5 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar5 = puVar5 + 1;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
              puVar3 = (undefined4 *)((int)puVar3 + 1);
              puVar5 = (undefined4 *)((int)puVar5 + 1);
            }
            local_40 = 0;
          }
        }
      }
      if (local_28 != 0) {
        local_6c = *(undefined4 *)(iVar2 + 0x10);
        local_68 = *(undefined4 *)(iVar2 + 0x14);
        local_64 = *(undefined4 *)(iVar2 + 0xc);
        FUN_006ae1c0(*(uint **)((int)param_1 + 0x451),&local_6c);
      }
    }
    local_34 = local_34 + -1;
    local_2c = local_2c + -local_24;
  } while( true );
}

