#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STAllPlayersC.
   Evidence: this_call_owners=[STAllPlayersC]; agreed_this_calls=2; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=46; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

undefined4 __thiscall
STAllPlayersC::sub_004DA390(STAllPlayersC *this,uint param_1,byte *param_2,int param_3)

{
  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  short sVar5;
  int uVar5;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  int iVar6;
  byte *puVar10;
  int iVar11;
  byte recordIndex;
  uint uVar12;
  byte *puVar13;
  bool bVar14;
  uint local_280 [78];
  uint local_148 [3];
  ushort local_13c;
  int local_138;
  int local_134;
  uint local_130;
  ushort local_12c;
  byte local_10;
  undefined3 uStack_f;
  STAllPlayersC *local_c;
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
    pbVar8 = local_8;
    recordIndex = (byte)param_1;
    if (*local_8 != 0xff) {
      /* ST_CALLSITE[004DA3C6]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      uVar5 = LookupRecordByte(*local_8);
      uVar5 = (int)(byte)uVar5;
      if (uVar5 == 1) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = (byte *)0x3d;
      }
      else if (uVar5 == 2) {
        param_2 = (byte *)0x8d;
      }
      else if (uVar5 == 3) {
        param_2 = (byte *)0x49;
      }
      else {
        param_2 = nullptr;
      }
      bVar4 = *pbVar8;
      if (((bVar4 != 0xff) && (bVar4 != param_1)) && (pbVar8[-1] != 0)) {
        if (param_3 != 0) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          _local_10 = CONCAT31(uStack_f,bVar4);
          if (DAT_00808a8f == '\0') {
            if (bVar4 == recordIndex) {
LAB_004da4d3:
              iVar7 = 0;
            }
            else {
              uVar12 = param_1 & 0xff;
              bVar2 = g_playerRelationMatrix[bVar4][uVar12];
              if ((bVar2 == 0) && (g_playerRelationMatrix[uVar12][bVar4] == 0)) {
                iVar7 = -2;
              }
              else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar12][bVar4] == 0)) {
                iVar7 = -1;
              }
              else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar12][bVar4] == 1)) {
                iVar7 = 1;
              }
              else {
                if ((bVar2 != 1) || (g_playerRelationMatrix[uVar12][bVar4] != 1)) goto LAB_004da4d3;
                iVar7 = 2;
              }
            }
            bVar14 = iVar7 < 0;
          }
          else {
            bVar14 = g_bulkInitializedRecords_008087C7[param_1 & 0xff].field_0023 !=
                     g_bulkInitializedRecords_008087C7[bVar4].field_0023;
          }
          if ((bVar14) &&
             ((g_packedRecords_A62x8[param_1].field1982_0xa0e != 3 ||

              (iVar7 = thunk_FUN_004e60d0((uint)bVar4,(int)param_2),
              (uint)((&DAT_00798f74)[iVar7] + g_packedRecords_A62x8[param_1].field1985_0xa1a) <=
              g_playSystem_00802A38->field_00E4)))) goto LAB_004da71f;
        }
        bVar1 = *local_8;
        pbVar8 = (byte *)(uint)(byte)bVar1;

        iVar7 = thunk_FUN_004d8870(bVar1);
        *(int *)(pbVar3 + (uint)*pbVar3 * 0x10 + 9) = iVar7;

        iVar7 = thunk_FUN_004d89b0(bVar1);
        *(int *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0xd) = iVar7;
        /* ST_CALLSITE[004DA577]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        bVar4 = LookupRecordByte(bVar1);
        if (bVar4 == 3) {

          iVar7 = thunk_FUN_004e4410(pbVar8);
        }
        else {

          iVar7 = thunk_FUN_004d8af0(bVar1);
        }
        *(int *)(pbVar3 + (uint)*pbVar3 * 0x10 + 0x11) = iVar7;
        /* ST_CALLSITE[004DA5B5]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        bVar4 = LookupRecordByte(bVar1);
        if (bVar4 == 3) {

          uVar10 = thunk_FUN_004e41c0(param_1);

          iVar6 = thunk_FUN_004e4180(param_1);
          iVar7 = (int)(uVar10 * 0x14) / iVar6;
          if (0x14 < iVar7) {
            iVar7 = 0x14;
          }
        }
        else {
          iVar11 = g_packedRecords_A62x8[(int)pbVar8].field1940_0x972;
          iVar9 = iVar11 - g_packedRecords_A62x8[(int)pbVar8].field1941_0x976;
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

        puVar10 = (byte *)(thunk_FUN_0043e420(local_280,bVar1));
        puVar13 = (byte *)(local_148);
        memmove(puVar13, puVar10, 0x138); /* compiler REP MOVS byte copy */
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

      iVar7 = thunk_FUN_004d8870(recordIndex);
      *(int *)(pbVar3 + 0x79) = iVar7;

      iVar7 = thunk_FUN_004d89b0(recordIndex);
      *(int *)(pbVar3 + 0x7d) = iVar7;
      /* ST_CALLSITE[004DA762]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
      bVar4 = LookupRecordByte(recordIndex);
      if (bVar4 == 3) {

        iVar7 = thunk_FUN_004e4410((byte *)param_1);
      }
      else {

        iVar7 = thunk_FUN_004d8af0(recordIndex);
      }
      *(int *)(pbVar3 + 0x81) = iVar7;
      iVar7 = g_packedRecords_A62x8[param_1].field1940_0x972;
      iVar9 = iVar7 - g_packedRecords_A62x8[param_1].field1941_0x976;
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

      puVar10 = (byte *)(thunk_FUN_0043e420(local_280,recordIndex));
      puVar13 = (byte *)(local_148);
      memmove(puVar13, puVar10, 0x138); /* compiler REP MOVS byte copy */
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

