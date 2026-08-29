#include "st/generated.hpp"
// Generated translation unit: source/original/Artem/TLO_bfire.cpp

// 004C3570 TLOBaseTy::fireProc
#line 4 "decomp/ST.exe/functions/004C3570/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bfire.cpp
   TLOBaseTy::fireProc */

int __thiscall st::fn_004C3570(TLOBaseTy *this)

{
  alignas(4) byte st_stack_frame[100];

  uint32_t _local_10;
  uint32_t _local_14;

  AnonPointee_TLOBaseTy_0291 *pAVar1;
  TLOBaseTy *this_00;
  short sVar3;
  int local_EAX_35;
  uint uVar4;
  int iVar4;
  int local_EAX_1247;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  bool bVar9;
  InternalExceptionFrame local_5c;
  TLOBaseTy *local_18;
  short local_14;
  undefined2 uStack_12;
  short local_10;
  undefined2 uStack_e;
  uint local_c;
  int *local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;

  local_EAX_35 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  this_00 = local_18;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_5c.previous;

    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Artem\\TLO_bfire.cpp"),0xb2,0,local_EAX_35,
                               st::mutable_c_string("%s"),"TLOBaseTy::fireProc error");
    if (iVar5 == 0) {
      st::fn_006A5E40(local_EAX_35,0,st::mutable_c_string("E:\\__titans\\Artem\\TLO_bfire.cpp"),0xb3);
      return local_EAX_35;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (0 < local_18->field_025D) {
    puVar8 = &local_18->field_0285;
    local_8 = nullptr;
    do {
      if (puVar8[-8] != 0) {
        if (this_00->field_0255 != 0) {
          if ((puVar8[-4] != 0) &&
             (*(int *)(&DAT_00792040 + this_00->field_0235 * 4) + *puVar8 <=
              g_playSystem_00802A38->field_00E4)) {
            *puVar8 = g_playSystem_00802A38->field_00E4;
            uVar4 = g_playSystem_00802A38->field_00E4;
            bVar9 = uVar4 < puVar8[1] + *(int *)(&DAT_00792040 + this_00->field_0235 * 4) * 10;
            if (!bVar9) {
              puVar8[1] = uVar4;
              /* ST_CALLSITE[004C363A]: CALL 0x0040239c; direct=0040239C TLOBaseTy::fireFindCheckTarget */
              st::fn_0040239C(this_00,(int)local_8,0);
            }
            if ((RecoveredRecordView_005EFAE0_855D930D *)puVar8[2] !=
                0) {
              puVar8[0xc] = g_playSystem_00802A38->field_00E4;
              puVar8[0xd] = 100;
              if ((bVar9) ||
                 ((AnonPointee_TLOBaseTy_0291 *)puVar8[3] == 0)) {
                puVar8[3] = 0;

                st::fn_006E62D0
                          (g_playSystem_00802A38,(RecoveredRecordView_005EFAE0_855D930D *)puVar8[2],
                           reinterpret_cast<int *>((puVar8 + 3)));
              }
              pAVar1 = (AnonPointee_TLOBaseTy_0291 *)puVar8[3];
              if (pAVar1 != nullptr) {
                if (st::machine_word_boundary_cast<uint>((st_stack_frame + 96)) != st::machine_word_boundary_cast<uint>((undefined1 *)0x14)) {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_14 = CONCAT22(uStack_12,this_00->field_0041);
                }
                if (st::machine_word_boundary_cast<uint>((st_stack_frame + 96)) != st::machine_word_boundary_cast<uint>((undefined1 *)0x10)) {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_10 = CONCAT22(uStack_e,this_00->field_0043);
                }
                if (st::machine_word_boundary_cast<uint>((st_stack_frame + 96)) != st::machine_word_boundary_cast<uint>(&DAT_0000000c)) {
                  local_c = STReplaceLowWord(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_c)), (uint16_t)(this_00->field_0045));
                }
                /* ST_CALLSITE[004C36E1]: CALL dword ptr [EDX + 0x10] */
                sVar3 = (*this_00->vtable->vfunc_10)
                                  (pAVar1->field_0041,pAVar1->field_0043,
                                   STReplaceLowWord(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(_local_14)), (uint16_t)(pAVar1->field_0045)),
                                   (short)_local_14,(short)_local_10,local_c);
                iVar6 = (sVar3 + 0xb4) % 0x168;
                if (puVar8[-2] == 8) {
                  iVar6 = (iVar6 / 0x2d) * 0x2d;
                }
                /* ST_CALLSITE[004C3726]: CALL 0x004035a3; direct=004035A3 TLOBaseTy::sub_004C34A0 */
                st::fn_004035A3(this_00,iVar6);
              }
            }
          }
          if (((this_00->field_0255 != 0) && (puVar8[-4] != 0)) &&
             ((RecoveredRecordView_005EFAE0_855D930D *)puVar8[2] ==
              0)) {
            if (puVar8[0xb] == 0) {
              if (puVar8[0xd] + puVar8[0xc] <= g_playSystem_00802A38->field_00E4) {
                puVar8[0xc] = g_playSystem_00802A38->field_00E4;
                puVar8[0xb] = 1;
                do {
                  uVar4 = this_00->field_001C * 0x41c64e6d + 0x3039;
                  this_00->field_001C = uVar4;
                  uVar4 = ((uVar4 >> 0x10) % 0x18) * 0xf;
                  puVar8[0xe] = uVar4;
                } while (uVar4 == this_00->field_0259);
                if (*(int *)(&DAT_00795afc + this_00->field_0235 * 4) != 0) {
                  /* ST_CALLSITE[004C380C]: CALL dword ptr [EDX + 0x90] */
                  this_00->vfunc_90(3,(short)*(int *)(&DAT_00795afc + this_00->field_0235 * 4));
                }
              }
            }
            else {
              /* ST_CALLSITE[004C375C]: CALL 0x004035a3; direct=004035A3 TLOBaseTy::sub_004C34A0 */
              uVar4 = st::fn_004035A3(this_00,puVar8[0xe]);
              puVar8[0xb] = uVar4;
              if (uVar4 == 0) {
                puVar8[0xc] = g_playSystem_00802A38->field_00E4;
                uVar4 = this_00->field_001C * 0x41c64e6d + 0x3039;
                this_00->field_001C = uVar4;
                puVar8[0xd] = (uVar4 >> 0x10) % 0x4c + 0x19;
              }
            }
          }
        }
        uVar4 = g_playSystem_00802A38->field_00E4;

        iVar6 = st::fn_00404309((int)this_00->field_0024,this_00->field_0235,(int)local_8);
        piVar7 = local_8;
        if (iVar6 + puVar8[-5] <= uVar4) {
          puVar8[-5] = uVar4;
          iVar6 = (int)local_8 + this_00->field_0235 * 2;
          if (((*(int *)(&DAT_00793e28 + iVar6 * 4) == 0) ||
              (*(int *)(&DAT_007932d0 + iVar6 * 0x16) <= (int)puVar8[0x10])) ||
             ((puVar8[0x10] != 0 && (0 < (int)local_8)))) {
            /* ST_CALLSITE[004C3882]: CALL 0x0040239c; direct=0040239C TLOBaseTy::fireFindCheckTarget */
            st::fn_0040239C(this_00,(int)local_8,1);
            if (((*(int *)(&DAT_00792a90 + ((int)piVar7 + this_00->field_0235 * 2) * 4) == 2) ||
                ((*(int *)(&DAT_00792a90 + ((int)piVar7 + this_00->field_0235 * 2) * 4) == 3 &&
                 /* ST_CALLSITE[004C38A4]: CALL 0x00401087; direct=00401087 TLOBaseTy::sub_004C56B0 */
                 (iVar6 = st::fn_00401087(this_00,piVar7), iVar6 != 0)))) ||
               ((RecoveredRecordView_005EFAE0_855D930D *)puVar8[2] !=
                0)) {
              puVar8[0xc] = g_playSystem_00802A38->field_00E4;
              puVar8[0xd] = 100;
              if ((RecoveredRecordView_005EFAE0_855D930D *)puVar8[2] !=
                  0) {
                if ((AnonPointee_TLOBaseTy_0291 *)puVar8[3] == 0) {

                  st::fn_006E62D0
                            (g_playSystem_00802A38,
                             (RecoveredRecordView_005EFAE0_855D930D *)puVar8[2],reinterpret_cast<int *>((puVar8 + 3)));
                }
                puVar8[8] = (int)((AnonPointee_TLOBaseTy_0291 *)puVar8[3])->field_0041;
                puVar8[9] = (int)((AnonPointee_TLOBaseTy_0291 *)puVar8[3])->field_0043;
                puVar8[10] = (int)((AnonPointee_TLOBaseTy_0291 *)puVar8[3])->field_0045;
              }
              puVar8[6] = 0;
              if (*(int *)(&DAT_007915f0 + ((int)piVar7 + this_00->field_0235 * 2) * 4) == 0) {
                /* ST_CALLSITE[004C3934]: CALL 0x00403efe; direct=00403EFE TLOBaseTy::sub_004C4550 */
                st::fn_00403EFE(this_00,piVar7);
              }
              else {
                /* ST_CALLSITE[004C392A]: CALL 0x004010aa; direct=004010AA TLOBaseTy::SetState */
                st::fn_004010AA(this_00,5,1);
              }
            }
          }
          iVar6 = (int)piVar7 + this_00->field_0235 * 2;
          if (*(int *)(&DAT_00793e28 + iVar6 * 4) == 1) {
            piVar7 = local_8;
            if ((int)puVar8[0x10] < *(int *)(&DAT_00794038 + iVar6 * 4)) {

              iVar4 = st::fn_0040428C(this_00->field_0024,(&DAT_00792ca0)[iVar6 * 3],
                                         *(int *)(&DAT_00794038 + iVar6 * 4) - puVar8[0x10]);
              puVar8[0x10] = puVar8[0x10] + iVar4;
              piVar7 = local_8;
              goto LAB_004c3985;
            }
          }
          if (*(int *)(&DAT_00793e28 + iVar6 * 4) == 2) {
            if ((int)puVar8[0x10] < *(int *)(&DAT_00794038 + iVar6 * 4)) {

              local_EAX_1247 =
                   st::fn_0040225C((uint)this_00->field_0024,
                                      *(int *)(&DAT_00794038 + iVar6 * 4) - puVar8[0x10],
                                      *(RecoveredRecord_004DFB90_1056A84E **)
                                       (&DAT_00793ff0 + (&DAT_00792ca0)[this_00->field_0235 * 6] * 4
                                       ));
              puVar8[0x10] = puVar8[0x10] + local_EAX_1247;
            }
          }
        }
LAB_004c3985:
        iVar6 = ((int)piVar7 + this_00->field_0235 * 2) * 4;
        if (((*(int *)(&DAT_00793e28 + iVar6) == 2) &&
            ((int)puVar8[0x10] < *(int *)(&DAT_00794038 + iVar6))) &&

           (iVar6 = st::fn_00404309((int)this_00->field_0024,this_00->field_0235,(int)piVar7),
           puVar8[0x11] + iVar6 * 10 <= g_playSystem_00802A38->field_00E4)) {
          puVar8[0x10] = puVar8[0x10] + 1;
          puVar8[0x11] = g_playSystem_00802A38->field_00E4;
        }
      }
      local_8 = (int *)((int)local_8 + 1);
      puVar8 = puVar8 + 0x20;
    } while ((int)local_8 < this_00->field_025D);
  }
  g_currentExceptionFrame = local_5c.previous;
  return 0;
}

// 004C3C00 TLOBaseTy::fireFindCheckTarget
#line 4 "decomp/ST.exe/functions/004C3C00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bfire.cpp
   TLOBaseTy::fireFindCheckTarget */

int __thiscall st::fn_004C3C00(TLOBaseTy *this,int param_1,int param_2)

{
  alignas(4) byte st_stack_frame[200];

  uint32_t _local_2c;
  uint32_t _local_34;
  uint32_t _local_50;
  uint32_t _local_54;

  byte bVar1;
  byte bVar2;
  byte bVar3;
  TLOBaseTy *this_00;
  short sVar5;
  int iVar7;
  int local_EAX_288;
  dword dVar7;
  int iVar9;
  int iVar8;
  short sVar6;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  int local_EAX_1496;
  int iVar15_mg5;
  int iVar16;
  uint uVar13;
  short sVar14;
  int iVar15;
  TLOBaseTyVTable **ppTVar16;
  int iVar17;
  bool bVar18;
  InternalExceptionFrame local_b8;
  uint local_74 [2];
  int local_6c;
  short local_68;
  short sStack_66;
  short local_64;
  TLOBaseTy *local_60;
  int local_5c;
  int local_58;
  byte local_54;
  undefined3 uStack_53;
  byte local_50;
  undefined3 uStack_4f;
  int local_4c;
  int local_48;
  int local_44;
  short local_40 [2];
  int local_3c;
  short local_38 [2];
  short local_34;
  undefined2 uStack_32;
  uint local_30;
  short local_2c;
  undefined2 uStack_2a;
  int local_28;
  int local_24;
  STFishC *local_20;
  short local_1c [2];
  int local_18;
  short local_14;
  short local_12;
  TLOBaseTyVTable **local_10;
  short local_a;
  STFishC *local_8;

  local_8 = nullptr;
  local_20 = nullptr;
  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  local_60 = this;

  iVar7 = st::fn_0072D7F0(local_b8.jumpBuffer,0);
  this_00 = local_60;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_b8.previous;

    iVar16 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Artem\\TLO_bfire.cpp"),0x126,0,iVar7,
                                st::mutable_c_string("%s"),"TLOBaseTy::fireFindCheckTarget error");
    if (iVar16 == 0) {
      st::fn_006A5E40(iVar7,0,st::mutable_c_string("E:\\__titans\\Artem\\TLO_bfire.cpp"),0x127);
      return iVar7;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  ppTVar16 = &local_60->vtable + param_1 * 0x20;
  STField<RecoveredRecordView_005EFAE0_855D930D *>(ppTVar16,0x28d) =
       nullptr;
  STField<AnonPointee_TLOBaseTy_0291 *>(ppTVar16,0x291) = nullptr;
  if (st::machine_word_boundary_cast<uint>((st_stack_frame + 196)) != st::machine_word_boundary_cast<uint>((undefined1 *)0x2c)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_2c = CONCAT22(uStack_2a,local_60->field_0041);
  }
  if (st::machine_word_boundary_cast<uint>((st_stack_frame + 196)) != st::machine_word_boundary_cast<uint>((undefined1 *)0x34)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_34 = CONCAT22(uStack_32,local_60->field_0043);
  }
  if (st::machine_word_boundary_cast<uint>((st_stack_frame + 196)) != st::machine_word_boundary_cast<uint>((undefined1 *)0x30)) {
    local_30 = STReplaceLowWord(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_30)), (uint16_t)(local_60->field_0045));
  }
  local_10 = ppTVar16;
  if (*(int *)(&DAT_00792a90 + (param_1 + local_60->field_0235 * 2) * 4) == 1) {

    local_58 = st::fn_00405C45((int)local_60->field_0024,local_60->field_0235,param_1);
    iVar15 = this_00->field_05B4 + -8;
    local_18 = iVar15;
    if (iVar15 <= this_00->field_05B4 + 8) {
      do {
        if ((-1 < iVar15) && (iVar15 < g_worldGrid.sizeY)) {
          iVar9 = this_00->field_05B0;
          iVar17 = iVar9 + -8;
          local_28 = iVar17;
          local_18 = iVar15;
          if (iVar17 <= iVar9 + 8) {
            do {
              if (((-1 < iVar17) && (iVar17 < g_worldGrid.sizeX)) &&
                 (local_28 = iVar17,

                 local_EAX_288 = st::fn_006ACED8(iVar17,iVar15,iVar9,this_00->field_05B4),
                 local_EAX_288 <= local_58)) {
                local_24 = local_EAX_288 / 3;
                if (3 < STField<int>(local_10,0x281)) {
                  local_24 = 5;
                }
                local_3c = (this_00->field_05B8 - local_24) + -1;
                if (local_3c <= this_00->field_05B8 + 1 + local_24) {
                  do {
                    if ((-1 < local_3c) && (local_3c < 5)) {
                      sVar6 = (short)iVar17;
                      if (((sVar6 < 0) ||
                          ((g_worldGrid.sizeX <= sVar6 || (sVar14 = (short)iVar15, sVar14 < 0)))) ||
                         ((g_worldGrid.sizeY <= sVar14 ||
                          ((sVar5 = (short)local_3c, sVar5 < 0 || (g_worldGrid.sizeZ <= sVar5))))))
                      {
                        local_8 = nullptr;
                      }
                      else {
                        local_8 = reinterpret_cast<STFishC *>(STGridAt3D(g_worldGrid, sVar6, sVar14, sVar5).objects
                                  [0]);
                        iVar15 = local_18;
                      }
                      if (((((TLOBaseTy *)local_8 != nullptr) &&
                           (st::machine_word_boundary_cast<uint>((TLOBaseTy *)local_8) != st::machine_word_boundary_cast<uint>(this_00))) &&
                          /* ST_CALLSITE[004C3DF8]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=structural-presentation; signature=__thiscall;/dword;pointer:/TLOBaseTy */
                          (dVar7 = (*((TLOBaseTy *)local_8)->vtable->vfunc_F8)((TLOBaseTy *)local_8)
                          , iVar15 = local_18, iVar17 = local_28, dVar7 != 0)) &&
                         ((local_8->field_0024 != 0xff &&
                          /* ST_CALLSITE[004C3E1C]: CALL dword ptr [EAX + 0xf4] */
                          (iVar9 = (*local_8->vtable->vfunc_F4)(st::machine_word_boundary_cast<undefined4>(this_00->field_0024)),
                          iVar15 = local_18, iVar17 = local_28, iVar9 != 0)))) {
                        /* ST_CALLSITE[004C3E39]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
                        st::fn_004018C5(local_8,&local_12,&local_14,&local_a);
                        st::fn_004031E3(local_8,reinterpret_cast<uint *>(local_40),local_38,local_1c);
                        iVar15 = (short)local_30;

                        iVar8 = st::fn_006ACF0D((int)local_40[0],(int)local_38[0],(int)local_1c[0],
                                             (int)local_2c,(int)local_34,iVar15);
                        uVar10 = local_1c[0] - iVar15;
                        uVar13 = (int)uVar10 >> 0x1f;
                        iVar15 = local_18;
                        iVar17 = local_28;
                        if (st::storage_bit_cast<int>(static_cast<uint32_t>(((uVar10 ^ uVar13) - uVar13) * 10)) / iVar8 <=
                            STField<int>(local_10,0x281)) {
                          STField<uint>(local_10,0x295) = g_playSystem_00802A38->field_00E4;
                          if ((param_2 == 0) || (this_00->field_0255 == 0)) goto LAB_004c4080;
                          /* ST_CALLSITE[004C3EE9]: CALL dword ptr [EDX + 0x10] */
                          sVar6 = (*this_00->vtable->vfunc_10)
                                            (local_8->field_0041,local_8->field_0043,
                                             STReplaceLowWord(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(_local_34)), (uint16_t)(local_8->field_0045)),(short)_local_2c,
                                             (short)_local_34,local_30);
                          iVar9 = ((sVar6 + 0xb4) % 0x168) / 0xf;
                          uVar10 = (int)*(uint *)(&DAT_007be8c8 +
                                                 (this_00->field_0259 / 0xf + iVar9 * 0x18) * 4) >>
                                   0x1f;
                          iVar15 = local_18;
                          iVar17 = local_28;
                          if (st::storage_bit_cast<int>(static_cast<uint32_t>((*(uint *)(&DAT_007be8c8 +
                                              (this_00->field_0259 / 0xf + iVar9 * 0x18) * 4) ^
                                    uVar10) - uVar10)) <= STField<int>(local_10,0x279)) {
                            iVar11 = param_1 + this_00->field_0235 * 2;
                            if ((&DAT_00792ca0)[iVar11 * 3] == 0xb0) {
                              if (iVar9 % 3 == 0) {
LAB_004c4080:
                                if (((STField<int>(local_10,0x265) & 2U) != 0) &&
                                   (local_8->field_0018 == STField<int>(local_10,0x26d))) {
                                  STField<int>(local_10,0x2d5) = (int)local_12;
                                  STField<int>(local_10,0x2d9) = (int)local_14;
                                  local_20 = local_8;
                                  STField<int>(local_10,0x2dd) = (int)local_a;
                                  ppTVar16 = local_10;
                                  goto LAB_004c42b5;
                                }
                                iVar15 = local_18;
                                iVar17 = local_28;
                                if ((STField<int>(local_10,0x265) & 1U) != 0) {
                                  if (this_00->field_0420 == 0) {
                                    if (((uint)local_8->field_0024 < 8) &&
                                       ((g_playSystem_00802A38 == nullptr ||
                                        (g_bulkInitializedRecords_008087C7[local_8->field_0024].
                                         field_0022 < 8)))) {
                                      bVar1 = (byte)local_8->field_0024;
                                      bVar2 = *(byte *)&this_00->field_0024;
                                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                      _local_50 = CONCAT31(uStack_4f,bVar1);
                                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                      _local_54 = CONCAT31(uStack_53,bVar2);
                                      if (DAT_00808a8f == '\0') {
                                        if (bVar1 == bVar2) {
LAB_004c4192:
                                          iVar9 = 0;
                                        }
                                        else {
                                          bVar3 = g_playerRelationMatrix[bVar1][bVar2];
                                          if ((bVar3 == 0) &&
                                             (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                                            iVar9 = -2;
                                          }
                                          else if ((bVar3 == 1) &&
                                                  (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                                            iVar9 = -1;
                                          }
                                          else if ((bVar3 == 0) &&
                                                  (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
                                            iVar9 = 1;
                                          }
                                          else {
                                            if ((bVar3 != 1) ||
                                               (g_playerRelationMatrix[bVar2][bVar1] != 1))
                                            goto LAB_004c4192;
                                            iVar9 = 2;
                                          }
                                        }
                                        bVar18 = iVar9 < 0;
                                      }
                                      else {
                                        bVar18 = g_bulkInitializedRecords_008087C7[bVar2].field_0023
                                                 != g_bulkInitializedRecords_008087C7[bVar1].
                                                    field_0023;
                                      }
                                      if (bVar18) goto LAB_004c41a5;
                                    }
                                  }
                                  else {
LAB_004c41a5:
                                    /* ST_CALLSITE[004C41A9]: CALL dword ptr [EAX + 0xf0]; [STIndirectCallsiteApplier] exact slot 0xF0; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STFishC */
                                    iVar9 = local_8->vfunc_F0();
                                    iVar15 = local_18;
                                    iVar17 = local_28;
                                    if (iVar9 != 0) {

                                      local_EAX_1496 =
                                           st::fn_006AADD0(this_00->field_05B0,this_00->field_05B4,
                                                        this_00->field_05B8,local_28,local_18,
                                                        local_3c);
                                      ppTVar16 = local_10;
                                      if (STField<int>(local_10,0x269) == 0) {
                                        iVar9 = *(int *)&local_8->field_0x215;
                                      }
                                      else {
                                        /* ST_CALLSITE[004C41F1]: CALL dword ptr [EDX + 0x7c]; [STIndirectCallsiteApplier] exact slot 0x7C; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STFishC */
                                        iVar9 = local_8->vfunc_7C();
                                      }
                                      iVar15 = local_18;
                                      iVar17 = local_28;
                                      if (((local_20 == nullptr) || (local_6c < iVar9)) ||
                                         ((iVar9 == local_6c &&
                                          (ppTVar16 = local_10, local_EAX_1496 < local_5c)))) {
                                        local_20 = local_8;
                                        STField<int>(ppTVar16,0x2d5) = (int)local_12;
                                        STField<int>(ppTVar16,0x2d9) = (int)local_14;
                                        STField<int>(ppTVar16,0x2dd) = (int)local_a;
                                        local_6c = iVar9;
                                        local_5c = local_EAX_1496;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            else {
                              local_48 = 0;
                              local_4c = 0;
                              iVar11 = iVar11 * 0x16;
                              if (0 < *(int *)(&DAT_007932d0 + iVar11)) {
                                iVar15 = 0;
                                do {

                                  puVar12 = st::fn_0040342C(local_74,(short)*(undefined4 *)
                                                                                (&DAT_007932d4 +
                                                                                iVar15 + iVar11),
                                                               *(ushort *)
                                                                ((int)(&DAT_007932d4 +
                                                                      iVar15 + iVar11) + 4),
                                                               -(short)this_00->field_0259);
                                  local_68 = (short)*puVar12;
                                  sStack_66 = (short)((uint)*puVar12 >> 0x10);
                                  local_64 = *(short *)(puVar12 + 1);
                                  /* ST_CALLSITE[004C401E]: CALL 0x00405907; direct=00405907 STSprGameObjC::CheckRay */
                                  iVar17 = st::fn_00405907
                                                     (reinterpret_cast<STSprGameObjC *>(this_00),
                                                      local_68 + (short)_local_2c,
                                                      sStack_66 + (short)_local_34,
                                                      local_64 + (short)local_30,local_40[0],
                                                      local_38[0],local_1c[0],
                                                      (&DAT_00792ca0)
                                                      [(param_1 + this_00->field_0235 * 2) * 3],
                                                      &local_44,this_00->field_0420);
                                  if ((iVar17 != 0) ||
                                     ((((STField<byte>(local_10,0x265) & 2) != 0 &&
                                       (local_44 != 0)) &&
                                      (STField<int>(local_44,0x18) == STField<int>(local_10,0x26d))
                                      ))) {
                                    local_48 = 1;
                                  }
                                  local_4c = local_4c + 1;
                                  iVar15 = iVar15 + 6;
                                  iVar11 = (param_1 + this_00->field_0235 * 2) * 0x16;
                                } while (local_4c < *(int *)(&DAT_007932d0 + iVar11));
                              }
                              iVar15 = local_18;
                              iVar17 = local_28;
                              if (local_48 != 0) goto LAB_004c4080;
                            }
                          }
                        }
                      }
                    }
                    local_3c = local_3c + 1;
                  } while (local_3c <= this_00->field_05B8 + 1 + local_24);
                }
              }
              iVar9 = this_00->field_05B0;
              iVar17 = iVar17 + 1;
              local_28 = iVar17;
            } while (iVar17 <= iVar9 + 8);
          }
        }
        iVar15 = iVar15 + 1;
        ppTVar16 = local_10;
        local_18 = iVar15;
      } while (iVar15 <= this_00->field_05B4 + 8);
    }
  }
LAB_004c42b5:
  if (local_20 != nullptr) {
    STField<RecoveredRecordView_005EFAE0_855D930D *>(ppTVar16,0x28d) =
         (RecoveredRecordView_005EFAE0_855D930D *)local_20->field_0018;
    STField<STFishC *>(ppTVar16,0x291) = local_20;
    if ((((STField<byte>(ppTVar16,0x265) & 2) != 0) &&
        (STField<RecoveredRecordView_005EFAE0_855D930D *>(ppTVar16,0x28d) !=
         STField<RecoveredRecordView_005EFAE0_855D930D *>(ppTVar16,0x26d))) &&

       (iVar15_mg5 = st::fn_006E62D0
                               (g_playSystem_00802A38,
                                STField<RecoveredRecordView_005EFAE0_855D930D *>(ppTVar16,0x26d),
                                reinterpret_cast<int *>(&local_8)), iVar15_mg5 != 0)) {
      STField<uint>(ppTVar16,0x265) = STField<int>(ppTVar16,0x265) & 0xfffffffd;
      STField<undefined4>(ppTVar16,0x26d) = 0;
    }
  }
  g_currentExceptionFrame = local_b8.previous;
  return 0;
}
