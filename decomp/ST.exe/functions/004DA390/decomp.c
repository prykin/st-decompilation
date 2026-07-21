
undefined4 __thiscall FUN_004da390(void *this,uint param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  byte playerId;
  undefined4 *puVar12;
  bool bVar13;
  undefined4 local_280 [78];
  undefined4 local_148 [3];
  undefined2 local_13c;
  int local_138;
  int local_134;
  undefined4 local_130;
  undefined2 local_12c;
  byte local_10;
  undefined3 uStack_f;
  void *local_c;
  byte *local_8;
  
  pbVar3 = param_2;
  param_2[1] = 0xff;
  param_2[2] = 0xff;
  param_2[3] = 0xff;
  param_2[4] = 0xff;
  local_8 = &DAT_008087e9;
  param_2[5] = 0xff;
  param_2[6] = 0xff;
  param_2[7] = 0xff;
  param_2[8] = 0xff;
  *param_2 = 0;
  local_c = this;
  do {
    pbVar4 = local_8;
    playerId = (byte)param_1;
    if (*local_8 != 0xff) {
      uVar6 = GetPlayerRaceId(*local_8);
      uVar6 = uVar6 & 0xff;
      if (uVar6 == 1) {
        param_2 = (byte *)0x3d;
      }
      else if (uVar6 == 2) {
        param_2 = (byte *)0x8d;
      }
      else if (uVar6 == 3) {
        param_2 = (byte *)0x49;
      }
      else {
        param_2 = (byte *)0x0;
      }
      bVar1 = *pbVar4;
      if (((bVar1 != 0xff) && (bVar1 != param_1)) && (pbVar4[-1] != 0)) {
        if (param_3 != 0) {
          _local_10 = CONCAT31(uStack_f,bVar1);
          if (DAT_00808a8f == '\0') {
            if (bVar1 == playerId) {
LAB_004da4d3:
              iVar7 = 0;
            }
            else {
              uVar6 = param_1 & 0xff;
              bVar2 = g_playerRelationMatrix[bVar1][uVar6];
              if ((bVar2 == 0) && (g_playerRelationMatrix[uVar6][bVar1] == 0)) {
                iVar7 = -2;
              }
              else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar6][bVar1] == 0)) {
                iVar7 = -1;
              }
              else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar6][bVar1] == 1)) {
                iVar7 = 1;
              }
              else {
                if ((bVar2 != 1) || (g_playerRelationMatrix[uVar6][bVar1] != 1)) goto LAB_004da4d3;
                iVar7 = 2;
              }
            }
            bVar13 = iVar7 < 0;
          }
          else {
            bVar13 = (&DAT_008087ea)[(param_1 & 0xff) * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51]
            ;
          }
          if ((bVar13) &&
             ((g_playerRuntime[param_1].field2180_0xa0e != 3 ||
              (iVar7 = thunk_FUN_004e60d0((uint)bVar1,(int)param_2),
              (uint)((&DAT_00798f74)[iVar7] + g_playerRuntime[param_1].field2183_0xa1a) <=
              (uint)PTR_00802a38->field_00E4)))) goto LAB_004da71f;
        }
        bVar1 = *local_8;
        uVar6 = (uint)bVar1;
        uVar8 = thunk_FUN_004d8870(bVar1);
        *(undefined4 *)(pbVar3 + (uint)*pbVar3 * 0x10 + 9) = uVar8;
        uVar8 = thunk_FUN_004d89b0(bVar1);
        *(undefined4 *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0xd) = uVar8;
        iVar7 = GetPlayerRaceId(bVar1);
        if ((char)iVar7 == '\x03') {
          uVar8 = thunk_FUN_004e4410(uVar6);
        }
        else {
          uVar8 = thunk_FUN_004d8af0(bVar1);
        }
        *(undefined4 *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x11) = uVar8;
        iVar7 = GetPlayerRaceId(bVar1);
        if ((char)iVar7 == '\x03') {
          iVar11 = thunk_FUN_004e41c0(param_1);
          iVar7 = thunk_FUN_004e4180(param_1);
          iVar7 = (iVar11 * 0x14) / iVar7;
          if (0x14 < iVar7) {
            iVar7 = 0x14;
          }
        }
        else {
          iVar11 = g_playerRuntime[uVar6].field2108_0x972;
          iVar9 = iVar11 - g_playerRuntime[uVar6].field2109_0x976;
          iVar7 = 0;
          if (iVar9 != 0) {
            if (iVar11 == 0) {
              iVar7 = -0xd;
            }
            else {
              iVar7 = (iVar9 * 0xd) / iVar11;
            }
          }
        }
        *(int *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x15) = iVar7;
        puVar10 = (undefined4 *)thunk_FUN_0043e420(local_280,bVar1);
        puVar12 = local_148;
        for (iVar7 = 0x4e; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar12 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar12 = puVar12 + 1;
        }
        sVar5 = (short)local_148[1] + (short)local_148[0];
        *(short *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x89) = sVar5 + (short)local_148[2];
        *(short *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x8b) = sVar5;
        *(short *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x8d) = (short)local_148[2];
        *(undefined2 *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x8f) = local_13c;
        sVar5 = (short)local_134 + (short)local_138;
        *(short *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x91) = sVar5 + (short)local_130;
        *(short *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x93) = sVar5;
        *(short *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x95) = (short)local_130;
        *(undefined2 *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x97) = local_12c;
        pbVar3[*pbVar3 + 1] = bVar1;
        *pbVar3 = *pbVar3 + 1;
      }
    }
LAB_004da71f:
    local_8 = local_8 + 0x51;
    if (0x808a70 < (int)local_8) {
      uVar8 = thunk_FUN_004d8870(playerId);
      *(undefined4 *)(pbVar3 + 0x79) = uVar8;
      uVar8 = thunk_FUN_004d89b0(playerId);
      *(undefined4 *)(pbVar3 + 0x7d) = uVar8;
      iVar7 = GetPlayerRaceId(playerId);
      if ((char)iVar7 == '\x03') {
        uVar8 = thunk_FUN_004e4410(param_1);
      }
      else {
        uVar8 = thunk_FUN_004d8af0(playerId);
      }
      *(undefined4 *)(pbVar3 + 0x81) = uVar8;
      iVar7 = g_playerRuntime[param_1].field2108_0x972;
      iVar9 = iVar7 - g_playerRuntime[param_1].field2109_0x976;
      iVar11 = 0;
      if (iVar9 != 0) {
        if (iVar7 == 0) {
          iVar11 = -0xd;
        }
        else {
          iVar11 = (iVar9 * 0xd) / iVar7;
        }
      }
      *(int *)(pbVar3 + 0x85) = iVar11;
      puVar10 = (undefined4 *)thunk_FUN_0043e420(local_280,playerId);
      puVar12 = local_148;
      for (iVar7 = 0x4e; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      sVar5 = (short)local_148[1] + (short)local_148[0];
      *(short *)(pbVar3 + 0xfb) = sVar5;
      *(short *)(pbVar3 + 0xfd) = (short)local_148[2];
      *(short *)(pbVar3 + 0xf9) = sVar5 + (short)local_148[2];
      *(undefined2 *)(pbVar3 + 0xff) = local_13c;
      sVar5 = (short)(local_134 + local_138);
      *(short *)(pbVar3 + 0x103) = sVar5;
      *(short *)(pbVar3 + 0x105) = (short)local_130;
      *(short *)(pbVar3 + 0x101) = sVar5 + (short)local_130;
      *(undefined2 *)(pbVar3 + 0x107) = local_12c;
      pbVar3[8] = playerId;
      return 0;
    }
  } while( true );
}

