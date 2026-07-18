
void FUN_00750ba0(int param_1,int param_2)

{
  short *psVar1;
  undefined4 *puVar2;
  short sVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  bool bVar13;
  int local_4c;
  short local_48;
  uint local_44;
  uint local_40 [2];
  uint *local_38;
  uint *local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_007a1e48;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffa8;
  local_30 = 0;
  local_8 = 0;
  ExceptionList = &local_14;
  FUN_0072da40();
  local_8 = 0xffffffff;
  local_34 = (uint *)&stack0xffffffa8;
  local_1c = &stack0xffffffa8;
  iVar4 = FUN_00753bc0(param_2,(undefined4 *)&stack0xffffffa8,local_40);
  uVar7 = local_30;
  if (iVar4 != -4) {
    local_28 = 0;
    local_20 = 0;
    puVar5 = (uint *)FUN_00753b80(param_1,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x24),0);
    iVar4 = 0;
    do {
      while( true ) {
        sVar3 = *(short *)(*(int *)(param_1 + 0xc) + 0x34);
        if (sVar3 == 0) {
          local_44 = (**(code **)(*(int *)(param_1 + 0xc) + 8))(local_34);
        }
        else {
          local_44 = (uint)sVar3;
        }
        if ((int)(local_44 + 8 + (int)(short)puVar5[2]) <=
            *(short *)(*(int *)(param_1 + 8) + 0x16) + -0x10) break;
        iVar4 = iVar4 + -1;
        local_28 = iVar4;
        if (-1 < iVar4) {
          local_4c = iVar4 * 8 + 0x40;
          do {
            local_28 = iVar4;
            puVar5 = (uint *)FUN_00753b80(param_1,*(undefined4 *)
                                                   (local_4c + *(int *)(param_1 + 0xc)),iVar4);
            if ((int)((int)(short)puVar5[2] + local_44 + 8) <=
                *(short *)(*(int *)(param_1 + 8) + 0x16) + -0x10) break;
            iVar4 = iVar4 + -1;
            local_4c = local_4c + -8;
            local_28 = iVar4;
          } while (-1 < iVar4);
        }
        if (iVar4 < 0) {
          FUN_0072da70((undefined4 *)(*(int *)(param_1 + 0xc) + 0x48),
                       (undefined4 *)(*(int *)(param_1 + 0xc) + 0x40),0x38);
          uVar7 = FUN_00753b40(param_1);
          local_2c = uVar7;
          if ((int)uVar7 < 0) goto LAB_00750ecd;
          local_30 = FUN_006d4c50(*(int *)(param_1 + 8),uVar7,
                                  (int)*(short *)(*(int *)(param_1 + 8) + 0x16));
          bVar13 = local_30 == 0;
          if (!bVar13) {
LAB_00750eab:
            uVar7 = local_30;
            if (!bVar13 && -1 < (int)local_30) {
              uVar7 = local_30 | 0xffff0000;
            }
            goto LAB_00750ecd;
          }
          iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x34);
          puVar11 = (uint *)(iVar4 + uVar7);
          puVar5 = (uint *)(*(int *)(*(int *)(param_1 + 0xc) + 0x24) + iVar4);
          uVar8 = (uint)*(short *)(*(int *)(param_1 + 8) + 0x16);
          puVar10 = puVar5;
          puVar12 = puVar11;
          for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(char *)puVar12 = (char)*puVar10;
            puVar10 = (uint *)((int)puVar10 + 1);
            puVar12 = (uint *)((int)puVar12 + 1);
          }
          *puVar11 = local_2c;
          uVar8 = (int)*(short *)(*(int *)(param_1 + 8) + 0x16) - 0x10;
          puVar11 = puVar5 + 4;
          for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar11 = 0;
            puVar11 = puVar11 + 1;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar11 = 0;
            puVar11 = (uint *)((int)puVar11 + 1);
          }
          puVar5[1] = local_2c;
          *(undefined2 *)(puVar5 + 2) = 0;
          psVar1 = (short *)(*(int *)(param_1 + 0xc) + 0x2a);
          *psVar1 = *psVar1 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14) = 1;
          *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x44) = 0;
          local_28 = 0;
          local_20 = local_20 + 1;
          iVar4 = local_28;
        }
        do {
          *(int *)(*(int *)(param_1 + 0xc) + 0x44 + iVar4 * 8) = (int)(short)puVar5[2];
          local_38 = (uint *)(*(int *)(*(int *)(param_1 + 0xc) + 0x44 + iVar4 * 8) + 0x10 +
                             (int)puVar5);
          puVar11 = local_34;
          puVar10 = local_38 + 2;
          for (uVar7 = local_44 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar10 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar7 = local_44 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(char *)puVar10 = (char)*puVar11;
            puVar11 = (uint *)((int)puVar11 + 1);
            puVar10 = (uint *)((int)puVar10 + 1);
          }
          *local_38 = 0xffffffff;
          local_38[1] = local_40[0];
          *(short *)(puVar5 + 2) = (short)puVar5[2] + (short)local_44 + 8;
          iVar4 = FUN_00753bc0(param_2,local_34,local_40);
          uVar7 = local_30;
          if ((iVar4 == -4) || (uVar7 = FUN_00753b40(param_1), (int)uVar7 < 0)) goto LAB_00750ecd;
          *local_38 = uVar7;
          local_30 = FUN_006d4c50(*(int *)(param_1 + 8),uVar7,
                                  (int)*(short *)(*(int *)(param_1 + 8) + 0x16));
          bVar13 = local_30 == 0;
          if (!bVar13) goto LAB_00750eab;
          puVar5 = (uint *)(*(int *)(*(int *)(param_1 + 8) + 0x34) + uVar7);
          uVar9 = (uint)*(short *)(*(int *)(param_1 + 8) + 0x16);
          puVar11 = puVar5;
          for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar11 = 0;
            puVar11 = puVar11 + 1;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar11 = 0;
            puVar11 = (uint *)((int)puVar11 + 1);
          }
          *puVar5 = uVar7;
          puVar5[1] = 0xffffffff;
          *(undefined2 *)(puVar5 + 2) = 0;
          iVar4 = local_28 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x44 + iVar4 * 8) = 0;
          *(uint *)(*(int *)(param_1 + 0xc) + 0x40 + iVar4 * 8) = uVar7;
          local_28 = iVar4;
        } while (iVar4 < local_20);
      }
      *(int *)(*(int *)(param_1 + 0xc) + 0x44 + iVar4 * 8) = (int)(short)puVar5[2];
      puVar2 = (undefined4 *)
               (*(int *)(*(int *)(param_1 + 0xc) + 0x44 + iVar4 * 8) + 0x10 + (int)puVar5);
      puVar11 = local_34;
      puVar10 = puVar2 + 2;
      for (uVar7 = local_44 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar10 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar7 = local_44 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(char *)puVar10 = (char)*puVar11;
        puVar11 = (uint *)((int)puVar11 + 1);
        puVar10 = (uint *)((int)puVar10 + 1);
      }
      *puVar2 = 0xffffffff;
      puVar2[1] = local_40[0];
      local_48 = (short)(local_44 + 8);
      *(short *)(puVar5 + 2) = (short)puVar5[2] + local_48;
      iVar6 = FUN_00753bc0(param_2,local_34,local_40);
      iVar4 = local_28;
      uVar7 = local_30;
    } while (iVar6 != -4);
  }
LAB_00750ecd:
  local_30 = uVar7;
  if (local_30 != 0) {
    FUN_006a5e40(local_30,DAT_007ed77c,0x7f2acc,0x8f);
  }
  ExceptionList = local_14;
  return;
}

