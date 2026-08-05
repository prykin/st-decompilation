#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_004da390(void *this,uint param_1,byte *param_2,int param_3)

{
  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  short sVar5;
  int uVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  byte *puVar11;
  int iVar12;
  byte recordIndex;
  byte *puVar13;
  bool bVar14;
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
  char bVar1;

  pbVar3 = param_2;
  param_2[1] = 0xff;
  param_2[2] = 0xff;
  param_2[3] = 0xff;
  param_2[4] = 0xff;
  local_8 = &g_bulkInitializedRecords_008087C7[0].field_0022;
  param_2[5] = 0xff;
  param_2[6] = 0xff;
  param_2[7] = 0xff;
  param_2[8] = 0xff;
  *param_2 = 0;
  local_c = this;
  do {
    pbVar7 = local_8;
    recordIndex = (byte)param_1;
    if (*local_8 != 0xff) {
      uVar5 = LookupRecordByte(*local_8);
      uVar5 = (int)(byte)uVar5;
      if (uVar5 == 1) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = (byte *)0x3d;
      }
      else if (uVar5 == 2) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = (byte *)0x8d;
      }
      else if (uVar5 == 3) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = (byte *)0x49;
      }
      else {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = nullptr;
      }
      bVar4 = *pbVar7;
      if (((bVar4 != 0xff) && (bVar4 != param_1)) && (pbVar7[-1] != 0)) {
        if (param_3 != 0) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          _local_10 = CONCAT31(uStack_f,bVar4);
          if (DAT_00808a8f == '\0') {
            if (bVar4 == recordIndex) {
LAB_004da4d3:
              iVar6 = 0;
            }
            else {
              uVar10 = param_1 & 0xff;
              bVar2 = g_playerRelationMatrix[bVar4][uVar10];
              if ((bVar2 == 0) && (g_playerRelationMatrix[uVar10][bVar4] == 0)) {
                iVar6 = -2;
              }
              else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar10][bVar4] == 0)) {
                iVar6 = -1;
              }
              else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar10][bVar4] == 1)) {
                iVar6 = 1;
              }
              else {
                if ((bVar2 != 1) || (g_playerRelationMatrix[uVar10][bVar4] != 1)) goto LAB_004da4d3;
                iVar6 = 2;
              }
            }
            bVar14 = iVar6 < 0;
          }
          else {
            bVar14 = g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023 !=
                     g_bulkInitializedRecords_008087C7[bVar4].field_0023;
          }
          if ((bVar14) &&
             ((g_packedRecords_A62x8[param_1].field1982_0xa0e != 3 ||
              (iVar6 = thunk_FUN_004e60d0((uint)bVar4,(int)param_2),
              (uint)((&DAT_00798f74)[iVar6] + g_packedRecords_A62x8[param_1].field1985_0xa1a) <=
              g_playSystem_00802A38->field_00E4)))) goto LAB_004da71f;
        }
        bVar1 = *local_8;
        pbVar7 = (byte *)(uint)(byte)bVar1;
        uVar8 = thunk_FUN_004d8870(bVar1);
        *(undefined4 *)(pbVar3 + (uint)*pbVar3 * 0x10 + 9) = uVar8;
        uVar8 = thunk_FUN_004d89b0(bVar1);
        *(undefined4 *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0xd) = uVar8;
        bVar4 = LookupRecordByte(bVar1);
        if (bVar4 == 3) {
          uVar8 = thunk_FUN_004e4410(pbVar7);
        }
        else {
          uVar8 = thunk_FUN_004d8af0(bVar1);
        }
        *(undefined4 *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x11) = uVar8;
        bVar4 = LookupRecordByte(bVar1);
        if (bVar4 == 3) {
          uVar10 = thunk_FUN_004e41c0(param_1);
          iVar6 = thunk_FUN_004e4180(param_1);
          iVar6 = (int)(uVar10 * 0x14) / iVar6;
          if (0x14 < iVar6) {
            iVar6 = 0x14;
          }
        }
        else {
          iVar12 = g_packedRecords_A62x8[(int)pbVar7].field1940_0x972;
          iVar9 = iVar12 - g_packedRecords_A62x8[(int)pbVar7].field1941_0x976;
          iVar6 = 0;
          if (iVar9 != 0) {
            if (iVar12 == 0) {
              iVar6 = -0xd;
            }
            else {
              iVar6 = (iVar9 * 0xd) / iVar12;
            }
          }
        }
        *(int *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x15) = iVar6;
        puVar11 = (byte *)thunk_FUN_0043e420(local_280,bVar1);
        puVar13 = (byte *)(local_148);
        memmove(puVar13, puVar11, 0x138); /* compiler REP MOVS byte copy */
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
      uVar8 = thunk_FUN_004d8870(recordIndex);
      *(undefined4 *)(pbVar3 + 0x79) = uVar8;
      uVar8 = thunk_FUN_004d89b0(recordIndex);
      *(undefined4 *)(pbVar3 + 0x7d) = uVar8;
      bVar4 = LookupRecordByte(recordIndex);
      if (bVar4 == 3) {
        uVar8 = thunk_FUN_004e4410((byte *)param_1);
      }
      else {
        uVar8 = thunk_FUN_004d8af0(recordIndex);
      }
      *(undefined4 *)(pbVar3 + 0x81) = uVar8;
      iVar6 = g_packedRecords_A62x8[param_1].field1940_0x972;
      iVar9 = iVar6 - g_packedRecords_A62x8[param_1].field1941_0x976;
      iVar12 = 0;
      if (iVar9 != 0) {
        if (iVar6 == 0) {
          iVar12 = -0xd;
        }
        else {
          iVar12 = (iVar9 * 0xd) / iVar6;
        }
      }
      *(int *)(pbVar3 + 0x85) = iVar12;
      puVar11 = (byte *)thunk_FUN_0043e420(local_280,recordIndex);
      puVar13 = (byte *)(local_148);
      memmove(puVar13, puVar11, 0x138); /* compiler REP MOVS byte copy */
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
      pbVar3[8] = recordIndex;
      return 0;
    }
  } while( true );
}

