
undefined4 __thiscall FUN_0069c360(void *this,int param_1,int *param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int local_58 [9];
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  void *local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int *local_8;

  piVar2 = param_2;
  uVar3 = 0;
  if ((param_1 != 0) && (*(int *)((int)this + 0x56ff) != 0)) {
    if (0 < param_3) {
      local_8 = (int *)0x0;
      local_1c = param_3;
      iVar5 = (int)param_2 * 0xe;
      local_24 = (int)param_2 * 400;
      local_c = (int *)(param_1 + 6);
      do {
        if (0 < (int)piVar2) {
          local_14 = 0;
          param_2 = local_c;
          local_10 = piVar2;
          do {
            local_18 = (int *)0x0;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            bVar1 = *(byte *)((int)local_8 + local_14 + *(int *)((int)this + 0x56ff));
            local_2c = (uint)bVar1;
            pbVar4 = (byte *)((int)local_8 + local_14 + *(int *)((int)this + 0x56ff));
            do {
              iVar6 = 0;
              pbVar8 = pbVar4;
              do {
                if (bVar1 != *pbVar8) {
                  param_2[-1] = 0xff;
                  *(undefined1 *)((int)param_2 + -6) = 1;
                  goto LAB_0069c428;
                }
                iVar6 = iVar6 + 1;
                pbVar8 = pbVar8 + 1;
              } while (iVar6 < 0x14);
              pbVar4 = pbVar4 + (int)piVar2 * 0x14;
              local_18 = (int *)((int)local_18 + 1);
            } while ((int)local_18 < 0x14);
            param_2[-1] = local_2c;
            *(undefined1 *)((int)param_2 + -6) = 0;
LAB_0069c428:
            *param_2 = -1;
            param_2[1] = -1;
            param_2 = (int *)((int)param_2 + 0xe);
            local_14 = local_14 + 0x14;
            local_10 = (int *)((int)local_10 + -1);
          } while (local_10 != (int *)0x0);
        }
        local_8 = (int *)((int)local_8 + local_24);
        local_c = (int *)((int)local_c + iVar5);
        local_1c = local_1c + -1;
      } while (local_1c != 0);
      local_1c = 0;
    }
    local_10 = (int *)0x0;
    if (0 < param_3) {
      local_14 = 0;
      iVar5 = (int)piVar2 * 0xe;
      local_18 = (int *)(param_1 + 2);
      local_2c = 0;
      local_34 = iVar5;
      local_20 = this;
      do {
        param_2 = (int *)0x0;
        if (0 < (int)piVar2) {
          local_8 = local_18;
          uVar7 = local_2c;
          do {
            local_30 = *local_8;
            local_28 = uVar7;
            iVar5 = thunk_FUN_00696310(local_20,local_14 + (int)param_2,(int)piVar2,local_58,
                                       (int *)0x0);
            iVar6 = 0;
            local_24 = 0;
            if (0 < iVar5) {
              local_c = local_58;
              local_1c = iVar5;
              do {
                iVar5 = *local_c;
                if (((*(int *)(param_1 + 2 + iVar5 * 0xe) == local_30) &&
                    (iVar6 = iVar6 + 1, -1 < iVar5 % (int)piVar2 - (int)param_2)) &&
                   (-1 < iVar5 / (int)piVar2 - (int)local_10)) {
                  local_24 = 1;
                }
                local_c = local_c + 1;
                local_1c = local_1c + -1;
              } while (local_1c != 0);
              local_1c = 0;
              uVar7 = local_28;
            }
            *(undefined1 *)(uVar7 + 1 + param_1) = 0;
            if (iVar6 == 8) {
              *(undefined1 *)(uVar7 + 1 + param_1) = 4;
            }
            else if (local_24 != 0) {
              *(undefined1 *)(uVar7 + 1 + param_1) = 8;
            }
            param_2 = (int *)((int)param_2 + 1);
            uVar7 = uVar7 + 0xe;
            local_8 = (int *)((int)local_8 + 0xe);
            iVar5 = local_34;
          } while ((int)param_2 < (int)piVar2);
        }
        local_14 = local_14 + (int)piVar2;
        local_10 = (int *)((int)local_10 + 1);
        local_2c = local_2c + iVar5;
        local_18 = (int *)((int)local_18 + iVar5);
      } while ((int)local_10 < param_3);
    }
    uVar3 = 1;
  }
  return uVar3;
}

