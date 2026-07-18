
int FUN_006c4ac0(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  ushort *puVar12;
  byte *pbVar13;
  ushort *puVar14;
  byte *pbVar15;
  int *piVar16;
  byte *local_60;
  ushort *local_5c;
  byte *local_44;
  uint local_40;
  byte *local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d990;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  iVar7 = param_1[0xc];
  if (iVar7 == 0) {
    iVar7 = *(int *)(param_1[0xd] + 8);
    local_34 = *(int *)(param_1[0xd] + 4);
    ExceptionList = &local_14;
  }
  else {
    if ((*(uint *)(iVar7 + 0xc) & 0x1100) == 0x100) {
      return 0;
    }
    ExceptionList = &local_14;
    iVar7 = FUN_006bb8b0(iVar7);
    if (iVar7 != 0) {
      FUN_006a5e40(iVar7,DAT_007ed77c,0x7edf40,0x1e);
      ExceptionList = local_14;
      return iVar7;
    }
    iVar4 = param_1[0xc];
    param_1[0xe] = *(int *)(iVar4 + 0x474);
    iVar7 = -*(int *)(iVar4 + 0x1c);
    local_34 = *(int *)(iVar4 + 0x478);
  }
  local_30 = 0;
  if (iVar7 < 0) {
    local_38 = (byte *)(param_1[1] * local_34 + param_1[0xe] + *param_1);
  }
  else {
    local_38 = (byte *)(((iVar7 - param_1[1]) + -1) * local_34 + param_1[0xe] + *param_1);
    local_34 = -local_34;
  }
  local_8 = 0;
  local_20 = (int *)param_1[8];
  do {
    if ((short)local_20[1] == -0xe06) {
      uVar2 = *(ushort *)((int)local_20 + 6);
      piVar16 = local_20 + 4;
      for (local_28 = 0; local_28 < (int)(uint)uVar2; local_28 = local_28 + 1) {
        switch((short)piVar16[1]) {
        case 7:
          local_5c = (ushort *)((int)piVar16 + 6);
          iVar7 = *piVar16;
          local_2c = (uint)*local_5c;
          do {
            local_5c = local_5c + 1;
            do {
              while( true ) {
                while( true ) {
                  uVar8 = local_2c - 1;
                  if ((int)uVar8 < 0) goto switchD_006c4bef_caseD_8;
                  local_60 = local_38;
                  uVar6 = *local_5c;
                  if (((short)uVar6 < 0) && ((uVar6 & 0x4000) == 0)) {
                    local_38[param_1[2] + -1] = (byte)uVar6;
                    local_5c = local_5c + 1;
                  }
                  uVar6 = *local_5c;
                  local_5c = local_5c + 1;
                  if ((short)uVar6 < 0) break;
                  while (uVar6 = uVar6 - 1, -1 < (short)uVar6) {
                    uVar3 = *local_5c;
                    puVar12 = local_5c + 1;
                    local_60 = local_60 + (uVar3 & 0xff);
                    cVar5 = (char)(uVar3 >> 8);
                    if ((short)uVar3 < 0) {
                      FUN_006ce6c0((undefined4 *)local_60,-(int)cVar5,*puVar12);
                      local_60 = local_60 + cVar5 * -2;
                      local_5c = local_5c + 2;
                    }
                    else {
                      uVar9 = (uint)cVar5;
                      puVar14 = puVar12;
                      pbVar11 = local_60;
                      for (uVar10 = (uVar9 & 0x7fffffff) >> 1; uVar10 != 0; uVar10 = uVar10 - 1) {
                        *(undefined4 *)pbVar11 = *(undefined4 *)puVar14;
                        puVar14 = puVar14 + 2;
                        pbVar11 = pbVar11 + 4;
                      }
                      for (uVar10 = uVar9 * 2 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                        *pbVar11 = (byte)*puVar14;
                        puVar14 = (ushort *)((int)puVar14 + 1);
                        pbVar11 = pbVar11 + 1;
                      }
                      local_60 = local_60 + uVar9 * 2;
                      local_5c = puVar12 + uVar9;
                    }
                  }
                  if (((local_5c < (ushort *)((int)piVar16 + iVar7)) &&
                      (uVar6 = *local_5c, (short)uVar6 < 0)) && ((uVar6 & 0x4000) == 0)) {
                    local_38[param_1[2] + -1] = (byte)uVar6;
                    local_5c = local_5c + 1;
                  }
                  local_38 = local_38 + local_34;
                  local_2c = uVar8;
                }
                if ((uVar6 & 0x4000) != 0) break;
                local_38[param_1[2] + -1] = (byte)uVar6;
                local_38 = local_38 + local_34;
                local_2c = uVar8;
              }
              local_38 = local_38 + -((short)uVar6 * local_34);
            } while ((((ushort *)((int)piVar16 + iVar7) <= local_5c) ||
                     (uVar6 = *local_5c, -1 < (short)uVar6)) || ((uVar6 & 0x4000) != 0));
            local_38[param_1[2] + -1] = (byte)uVar6;
          } while( true );
        case 0xc:
          local_38 = local_38 + (uint)*(ushort *)((int)piVar16 + 6) * local_34;
          local_2c = (uint)*(ushort *)(piVar16 + 2);
          local_44 = (byte *)((int)piVar16 + 10);
          while (local_2c = local_2c - 1, -1 < (int)local_2c) {
            local_60 = local_38;
            local_40 = (uint)*local_44;
            local_44 = local_44 + 1;
            while (local_40 = local_40 - 1, -1 < (int)local_40) {
              local_60 = local_60 + *local_44;
              pbVar11 = local_44 + 2;
              uVar8 = (uint)(char)local_44[1];
              if ((char)local_44[1] < '\x01') {
                pbVar13 = pbVar11;
                pbVar15 = local_60;
                for (uVar9 = -uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *(undefined4 *)pbVar15 = *(undefined4 *)pbVar13;
                  pbVar13 = pbVar13 + 4;
                  pbVar15 = pbVar15 + 4;
                }
                for (uVar9 = -uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *pbVar15 = *pbVar13;
                  pbVar13 = pbVar13 + 1;
                  pbVar15 = pbVar15 + 1;
                }
                local_60 = local_60 + -uVar8;
                local_44 = pbVar11 + -uVar8;
              }
              else {
                bVar1 = *pbVar11;
                pbVar11 = local_60;
                for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *(uint *)pbVar11 = CONCAT22(CONCAT11(bVar1,bVar1),CONCAT11(bVar1,bVar1));
                  pbVar11 = pbVar11 + 4;
                }
                for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *pbVar11 = bVar1;
                  pbVar11 = pbVar11 + 1;
                }
                local_60 = local_60 + uVar8;
                local_44 = local_44 + 3;
              }
            }
            local_38 = local_38 + local_34;
          }
          break;
        case 0xd:
          if (param_1[0xc] == 0) {
            FUN_006b4170(param_1[0xd],param_1[0xe],*param_1,param_1[1],param_1[2],param_1[3],0);
          }
          else {
            FUN_006b4170(param_1[0xc] + 0x4c,param_1[0xe],*param_1,param_1[1],param_1[2],param_1[3],
                         0);
          }
          break;
        case 0xf:
          local_44 = (byte *)((int)piVar16 + 6);
          local_2c = param_1[3];
          while (local_2c = local_2c + -1, -1 < (int)local_2c) {
            local_60 = local_38;
            local_40 = (uint)*local_44;
            local_44 = local_44 + 1;
            while (local_40 = local_40 - 1, -1 < (int)local_40) {
              pbVar11 = local_44 + 1;
              uVar8 = (uint)(char)*local_44;
              if ((char)*local_44 < '\x01') {
                pbVar13 = pbVar11;
                pbVar15 = local_60;
                for (uVar9 = -uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *(undefined4 *)pbVar15 = *(undefined4 *)pbVar13;
                  pbVar13 = pbVar13 + 4;
                  pbVar15 = pbVar15 + 4;
                }
                for (uVar9 = -uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *pbVar15 = *pbVar13;
                  pbVar13 = pbVar13 + 1;
                  pbVar15 = pbVar15 + 1;
                }
                local_60 = local_60 + -uVar8;
                local_44 = pbVar11 + -uVar8;
              }
              else {
                bVar1 = *pbVar11;
                pbVar11 = local_60;
                for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *(uint *)pbVar11 = CONCAT22(CONCAT11(bVar1,bVar1),CONCAT11(bVar1,bVar1));
                  pbVar11 = pbVar11 + 4;
                }
                for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *pbVar11 = bVar1;
                  pbVar11 = pbVar11 + 1;
                }
                local_60 = local_60 + uVar8;
                local_44 = local_44 + 2;
              }
            }
            local_38 = local_38 + local_34;
          }
        }
switchD_006c4bef_caseD_8:
        piVar16 = (int *)((int)piVar16 + *piVar16);
      }
      goto LAB_006c4f61;
    }
    local_20 = (int *)((int)local_20 + *local_20);
  } while (local_20 <= (int *)param_1[9]);
  local_30 = -5;
LAB_006c4f61:
  local_8 = 0xffffffff;
  if (param_1[0xc] != 0) {
    FUN_006bb980(param_1[0xc]);
  }
  if (local_30 == 0) {
    iVar7 = param_1[6];
    param_1[6] = iVar7 + 1;
    if (iVar7 + 1 < param_1[5]) {
      param_1[8] = *local_20 + (int)local_20;
    }
    else {
      param_1[6] = 0;
      param_1[8] = param_1[0xb];
    }
  }
  ExceptionList = local_14;
  return local_30;
}

