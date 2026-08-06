#include "st/generated.hpp"
// Generated translation unit: source/original/Artem/TLO_bfire.cpp

// 004C3570 TLOBaseTy::fireProc
#line 1 "decomp/ST.exe/functions/004C3570/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bfire.cpp
   TLOBaseTy::fireProc */

int __thiscall st::fn_004C3570(TLOBaseTy *this)

{
  AnonPointee_TLOBaseTy_0291 *pAVar1;
  TLOBaseTy *this_00;
  short sVar3;
  int iVar4;
  uint uVar5;
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
  undefined4 local_c;
  int *local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar4 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  this_00 = local_18;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar6 = st::fn_006AD4D0("E:\\__titans\\Artem\\TLO_bfire.cpp",0xb2,0,iVar4,"%s"
                               ,"TLOBaseTy::fireProc error");
    if (iVar6 == 0) {
      st::fn_006A5E40(iVar4,0,"E:\\__titans\\Artem\\TLO_bfire.cpp",0xb3);
      return iVar4;
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
            uVar5 = g_playSystem_00802A38->field_00E4;
            bVar9 = uVar5 < puVar8[1] + *(int *)(&DAT_00792040 + this_00->field_0235 * 4) * 10;
            if (!bVar9) {
              puVar8[1] = uVar5;
              st::fn_0040239C(this_00,(int)local_8,0);
            }
            if ((AnonShape_005EFAE0_B406B78B *)puVar8[2] != nullptr) {
              puVar8[0xc] = g_playSystem_00802A38->field_00E4;
              puVar8[0xd] = 100;
              if ((bVar9) ||
                 ((AnonPointee_TLOBaseTy_0291 *)puVar8[3] == nullptr)) {
                puVar8[3] = 0;
                st::fn_006E62D0
                          (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)puVar8[2],
                           (int *)(puVar8 + 3));
              }
              pAVar1 = (AnonPointee_TLOBaseTy_0291 *)puVar8[3];
              if (pAVar1 != nullptr) {
                if (&stack0x00000000 != (undefined1 *)0x14) {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_14 = CONCAT22(uStack_12,this_00->field_0041);
                }
                if (&stack0x00000000 != (undefined1 *)0x10) {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_10 = CONCAT22(uStack_e,this_00->field_0043);
                }
                if (&stack0x00000000 != &DAT_0000000c) {
                  local_c = STReplaceLowWord((uint32_t)(local_c), (uint16_t)(this_00->field_0045));
                }
                sVar3 = (*this_00->vtable->vfunc_10)
                                  (pAVar1->field_0041,pAVar1->field_0043,
                                   STReplaceLowWord((uint32_t)(_local_14), (uint16_t)(pAVar1->field_0045)),
                                   (short)_local_14,(short)_local_10,local_c);
                iVar4 = (sVar3 + 0xb4) % 0x168;
                if (puVar8[-2] == 8) {
                  iVar4 = (iVar4 / 0x2d) * 0x2d;
                }
                st::fn_004035A3(this_00,iVar4);
              }
            }
          }
          if (((this_00->field_0255 != 0) && (puVar8[-4] != 0)) &&
             ((AnonShape_005EFAE0_B406B78B *)puVar8[2] == nullptr)) {
            if (puVar8[0xb] == 0) {
              if (puVar8[0xd] + puVar8[0xc] <= g_playSystem_00802A38->field_00E4) {
                puVar8[0xc] = g_playSystem_00802A38->field_00E4;
                puVar8[0xb] = 1;
                do {
                  uVar5 = this_00->field_001C * 0x41c64e6d + 0x3039;
                  this_00->field_001C = uVar5;
                  uVar5 = ((uVar5 >> 0x10) % 0x18) * 0xf;
                  puVar8[0xe] = uVar5;
                } while (uVar5 == this_00->field_0259);
                if (*(int *)(&DAT_00795afc + this_00->field_0235 * 4) != 0) {
                  this_00->vfunc_90(3,(short)*(int *)(&DAT_00795afc + this_00->field_0235 * 4));
                }
              }
            }
            else {
              uVar5 = st::fn_004035A3(this_00,puVar8[0xe]);
              puVar8[0xb] = uVar5;
              if (uVar5 == 0) {
                puVar8[0xc] = g_playSystem_00802A38->field_00E4;
                uVar5 = this_00->field_001C * 0x41c64e6d + 0x3039;
                this_00->field_001C = uVar5;
                puVar8[0xd] = (uVar5 >> 0x10) % 0x4c + 0x19;
              }
            }
          }
        }
        uVar5 = g_playSystem_00802A38->field_00E4;
        iVar4 = st::fn_00404309((int)this_00->field_0024,this_00->field_0235,(int)local_8);
        piVar7 = local_8;
        if (iVar4 + puVar8[-5] <= uVar5) {
          puVar8[-5] = uVar5;
          iVar4 = (int)local_8 + this_00->field_0235 * 2;
          if (((*(int *)(&DAT_00793e28 + iVar4 * 4) == 0) ||
              (*(int *)(&DAT_007932d0 + iVar4 * 0x16) <= (int)puVar8[0x10])) ||
             ((puVar8[0x10] != 0 && (0 < (int)local_8)))) {
            st::fn_0040239C(this_00,(int)local_8,1);
            if (((*(int *)(&DAT_00792a90 + ((int)piVar7 + this_00->field_0235 * 2) * 4) == 2) ||
                ((*(int *)(&DAT_00792a90 + ((int)piVar7 + this_00->field_0235 * 2) * 4) == 3 &&
                 (iVar4 = st::fn_00401087(this_00,piVar7), iVar4 != 0)))) ||
               ((AnonShape_005EFAE0_B406B78B *)puVar8[2] != nullptr)) {
              puVar8[0xc] = g_playSystem_00802A38->field_00E4;
              puVar8[0xd] = 100;
              if ((AnonShape_005EFAE0_B406B78B *)puVar8[2] != nullptr) {
                if ((AnonPointee_TLOBaseTy_0291 *)puVar8[3] == nullptr) {
                  st::fn_006E62D0
                            (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)puVar8[2],
                             (int *)(puVar8 + 3));
                }
                puVar8[8] = (int)((AnonPointee_TLOBaseTy_0291 *)puVar8[3])->field_0041;
                puVar8[9] = (int)((AnonPointee_TLOBaseTy_0291 *)puVar8[3])->field_0043;
                puVar8[10] = (int)((AnonPointee_TLOBaseTy_0291 *)puVar8[3])->field_0045;
              }
              puVar8[6] = 0;
              if (*(int *)(&DAT_007915f0 + ((int)piVar7 + this_00->field_0235 * 2) * 4) == 0) {
                st::fn_00403EFE(this_00,piVar7);
              }
              else {
                st::fn_004010AA(this_00,5,1);
              }
            }
          }
          iVar4 = (int)piVar7 + this_00->field_0235 * 2;
          if (*(int *)(&DAT_00793e28 + iVar4 * 4) == 1) {
            piVar7 = local_8;
            if ((int)puVar8[0x10] < *(int *)(&DAT_00794038 + iVar4 * 4)) {
              iVar4 = st::fn_0040428C(this_00->field_0024,(&DAT_00792ca0)[iVar4 * 3],
                                         *(int *)(&DAT_00794038 + iVar4 * 4) - puVar8[0x10]);
              puVar8[0x10] = puVar8[0x10] + iVar4;
              piVar7 = local_8;
              goto LAB_004c3985;
            }
          }
          if (*(int *)(&DAT_00793e28 + iVar4 * 4) == 2) {
            if ((int)puVar8[0x10] < *(int *)(&DAT_00794038 + iVar4 * 4)) {
              iVar4 = st::fn_0040225C((uint)this_00->field_0024,
                                         *(int *)(&DAT_00794038 + iVar4 * 4) - puVar8[0x10],
                                         *(int *)(&DAT_00793ff0 +
                                                 (&DAT_00792ca0)[this_00->field_0235 * 6] * 4));
              puVar8[0x10] = puVar8[0x10] + iVar4;
            }
          }
        }
LAB_004c3985:
        iVar4 = ((int)piVar7 + this_00->field_0235 * 2) * 4;
        if (((*(int *)(&DAT_00793e28 + iVar4) == 2) &&
            ((int)puVar8[0x10] < *(int *)(&DAT_00794038 + iVar4))) &&
           (iVar4 = st::fn_00404309((int)this_00->field_0024,this_00->field_0235,(int)piVar7),
           puVar8[0x11] + iVar4 * 10 <= g_playSystem_00802A38->field_00E4)) {
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
#line 1 "decomp/ST.exe/functions/004C3C00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bfire.cpp
   TLOBaseTy::fireFindCheckTarget */

int __thiscall st::fn_004C3C00(TLOBaseTy *this,int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  TLOBaseTy *this_00;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  dword dVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  short sVar14;
  TLOBaseTyVTable **ppTVar15;
  int iVar16;
  bool bVar17;
  InternalExceptionFrame local_b8;
  undefined4 local_74 [2];
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
  undefined4 local_30;
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
    iVar16 = st::fn_006AD4D0("E:\\__titans\\Artem\\TLO_bfire.cpp",0x126,0,iVar7,
                                "%s","TLOBaseTy::fireFindCheckTarget error");
    if (iVar16 == 0) {
      st::fn_006A5E40(iVar7,0,"E:\\__titans\\Artem\\TLO_bfire.cpp",0x127);
      return iVar7;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  ppTVar15 = &local_60->vtable + param_1 * 0x20;
  STField<AnonShape_005EFAE0_B406B78B *>(ppTVar15,0x28d) = nullptr;
  STField<AnonPointee_TLOBaseTy_0291 *>(ppTVar15,0x291) = nullptr;
  if (&stack0x00000000 != (undefined1 *)0x2c) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_2c = CONCAT22(uStack_2a,local_60->field_0041);
  }
  if (&stack0x00000000 != (undefined1 *)0x34) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_34 = CONCAT22(uStack_32,local_60->field_0043);
  }
  if (&stack0x00000000 != (undefined1 *)0x30) {
    local_30 = STReplaceLowWord((uint32_t)(local_30), (uint16_t)(local_60->field_0045));
  }
  local_10 = ppTVar15;
  if (*(int *)(&DAT_00792a90 + (param_1 + local_60->field_0235 * 2) * 4) == 1) {
    local_58 = st::fn_00405C45((int)local_60->field_0024,local_60->field_0235,param_1);
    iVar7 = this_00->field_05B4 + -8;
    local_18 = iVar7;
    if (iVar7 <= this_00->field_05B4 + 8) {
      do {
        if ((-1 < iVar7) && (iVar7 < g_worldGrid.sizeY)) {
          iVar8 = this_00->field_05B0;
          iVar16 = iVar8 + -8;
          local_28 = iVar16;
          local_18 = iVar7;
          if (iVar16 <= iVar8 + 8) {
            do {
              if (((-1 < iVar16) && (iVar16 < g_worldGrid.sizeX)) &&
                 (local_28 = iVar16, iVar8 = st::fn_006ACED8(iVar16,iVar7,iVar8,this_00->field_05B4),
                 iVar8 <= local_58)) {
                local_24 = iVar8 / 3;
                if (3 < STField<int>(local_10,0x281)) {
                  local_24 = 5;
                }
                local_3c = (this_00->field_05B8 - local_24) + -1;
                if (local_3c <= this_00->field_05B8 + 1 + local_24) {
                  do {
                    if ((-1 < local_3c) && (local_3c < 5)) {
                      sVar6 = (short)iVar16;
                      if (((sVar6 < 0) ||
                          ((g_worldGrid.sizeX <= sVar6 || (sVar14 = (short)iVar7, sVar14 < 0)))) ||
                         ((g_worldGrid.sizeY <= sVar14 ||
                          ((sVar5 = (short)local_3c, sVar5 < 0 || (g_worldGrid.sizeZ <= sVar5))))))
                      {
                        local_8 = nullptr;
                      }
                      else {
                        local_8 = (STFishC *)
                                  STGridAt3D(g_worldGrid, sVar6, sVar14, sVar5).objects
                                  [0];
                        iVar7 = local_18;
                      }
                      if (((((TLOBaseTy *)local_8 != nullptr) &&
                           ((TLOBaseTy *)local_8 != this_00)) &&
                          (dVar9 = (*((TLOBaseTy *)local_8)->vtable->slot_F8)((TLOBaseTy *)local_8),
                          iVar7 = local_18, iVar16 = local_28, dVar9 != 0)) &&
                         ((local_8->field_0024 != 0xff &&
                          (iVar8 = (*local_8->vtable->vfunc_F4)(this_00->field_0024),
                          iVar7 = local_18, iVar16 = local_28, iVar8 != 0)))) {
                        st::fn_004018C5(local_8,&local_12,&local_14,&local_a);
                        st::fn_004031E3(local_8,local_40,(int *)local_38,(int *)local_1c);
                        iVar7 = (int)(short)local_30;
                        iVar8 = st::fn_006ACF0D((int)local_40[0],(int)local_38[0],(int)local_1c[0],
                                             (int)local_2c,(int)local_34,iVar7);
                        uVar10 = local_1c[0] - iVar7;
                        uVar13 = (int)uVar10 >> 0x1f;
                        iVar7 = local_18;
                        iVar16 = local_28;
                        if ((int)(((uVar10 ^ uVar13) - uVar13) * 10) / iVar8 <=
                            STField<int>(local_10,0x281)) {
                          STField<uint>(local_10,0x295) = g_playSystem_00802A38->field_00E4;
                          if ((param_2 == 0) || (this_00->field_0255 == 0)) goto LAB_004c4080;
                          sVar6 = (*this_00->vtable->vfunc_10)
                                            (*(short *)&local_8->field_0x41,
                                             *(short *)&local_8->field_0x43,
                                             STReplaceLowWord((uint32_t)(_local_34), (uint16_t)(*(undefined2 *)&local_8->field_0x45)),
                                             (short)_local_2c,(short)_local_34,local_30);
                          iVar8 = ((sVar6 + 0xb4) % 0x168) / 0xf;
                          uVar10 = (int)*(uint *)(&DAT_007be8c8 +
                                                 (this_00->field_0259 / 0xf + iVar8 * 0x18) * 4) >>
                                   0x1f;
                          iVar7 = local_18;
                          iVar16 = local_28;
                          if ((int)((*(uint *)(&DAT_007be8c8 +
                                              (this_00->field_0259 / 0xf + iVar8 * 0x18) * 4) ^
                                    uVar10) - uVar10) <= STField<int>(local_10,0x279)) {
                            iVar12 = param_1 + this_00->field_0235 * 2;
                            if ((&DAT_00792ca0)[iVar12 * 3] == 0xb0) {
                              if (iVar8 % 3 == 0) {
LAB_004c4080:
                                if (((STField<uint>(local_10,0x265) & 2) != 0) &&
                                   (local_8->field_0018 == STField<int>(local_10,0x26d))) {
                                  STField<int>(local_10,0x2d5) = (int)local_12;
                                  STField<int>(local_10,0x2d9) = (int)local_14;
                                  local_20 = local_8;
                                  STField<int>(local_10,0x2dd) = (int)local_a;
                                  ppTVar15 = local_10;
                                  goto LAB_004c42b5;
                                }
                                iVar7 = local_18;
                                iVar16 = local_28;
                                if ((STField<uint>(local_10,0x265) & 1) != 0) {
                                  if (this_00->field_0420 == 0) {
                                    if (((uint)local_8->field_0024 < 8) &&
                                       ((g_playSystem_00802A38 == nullptr ||
                                        (g_bulkInitializedRecords_008087C7[local_8->field_0024].
                                         field_0022 < 8)))) {
                                      bVar1 = *(byte *)&local_8->field_0024;
                                      bVar2 = *(byte *)&this_00->field_0024;
                                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                      _local_50 = CONCAT31(uStack_4f,bVar1);
                                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                                      _local_54 = CONCAT31(uStack_53,bVar2);
                                      if (DAT_00808a8f == '\0') {
                                        if (bVar1 == bVar2) {
LAB_004c4192:
                                          iVar8 = 0;
                                        }
                                        else {
                                          bVar3 = g_playerRelationMatrix[bVar1][bVar2];
                                          if ((bVar3 == 0) &&
                                             (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                                            iVar8 = -2;
                                          }
                                          else if ((bVar3 == 1) &&
                                                  (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                                            iVar8 = -1;
                                          }
                                          else if ((bVar3 == 0) &&
                                                  (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
                                            iVar8 = 1;
                                          }
                                          else {
                                            if ((bVar3 != 1) ||
                                               (g_playerRelationMatrix[bVar2][bVar1] != 1))
                                            goto LAB_004c4192;
                                            iVar8 = 2;
                                          }
                                        }
                                        bVar17 = iVar8 < 0;
                                      }
                                      else {
                                        bVar17 = g_bulkInitializedRecords_008087C7[bVar2].field_0023
                                                 != g_bulkInitializedRecords_008087C7[bVar1].
                                                    field_0023;
                                      }
                                      if (bVar17) goto LAB_004c41a5;
                                    }
                                  }
                                  else {
LAB_004c41a5:
                                    iVar8 = local_8->vfunc_F0();
                                    iVar7 = local_18;
                                    iVar16 = local_28;
                                    if (iVar8 != 0) {
                                      iVar8 = st::fn_006AADD0(this_00->field_05B0,this_00->field_05B4,
                                                           this_00->field_05B8,local_28,local_18,
                                                           local_3c);
                                      ppTVar15 = local_10;
                                      if (STField<int>(local_10,0x269) == 0) {
                                        iVar12 = *(int *)&local_8->field_0x215;
                                      }
                                      else {
                                        iVar12 = (*local_8->vtable->vfunc_7C)();
                                      }
                                      iVar7 = local_18;
                                      iVar16 = local_28;
                                      if (((local_20 == nullptr) || (local_6c < iVar12)) ||
                                         ((iVar12 == local_6c &&
                                          (ppTVar15 = local_10, iVar8 < local_5c)))) {
                                        local_20 = local_8;
                                        STField<int>(ppTVar15,0x2d5) = (int)local_12;
                                        STField<int>(ppTVar15,0x2d9) = (int)local_14;
                                        STField<int>(ppTVar15,0x2dd) = (int)local_a;
                                        local_6c = iVar12;
                                        local_5c = iVar8;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            else {
                              local_48 = 0;
                              local_4c = 0;
                              iVar12 = iVar12 * 0x16;
                              if (0 < *(int *)(&DAT_007932d0 + iVar12)) {
                                iVar7 = 0;
                                do {
                                  puVar11 = (undefined4 *)
                                            st::fn_0040342C(local_74,(short)*(undefined4 *)
                                                                                (&DAT_007932d4 +
                                                                                iVar7 + iVar12),
                                                               *(ushort *)
                                                                ((int)(&DAT_007932d4 +
                                                                      iVar7 + iVar12) + 4),
                                                               -(short)this_00->field_0259);
                                  local_68 = (short)*puVar11;
                                  sStack_66 = (short)((uint)*puVar11 >> 0x10);
                                  local_64 = *(short *)(puVar11 + 1);
                                  iVar16 = st::fn_00405907
                                                     ((STSprGameObjC *)this_00,
                                                      local_68 + (short)_local_2c,
                                                      sStack_66 + (short)_local_34,
                                                      local_64 + (short)local_30,local_40[0],
                                                      local_38[0],local_1c[0],
                                                      (&DAT_00792ca0)
                                                      [(param_1 + this_00->field_0235 * 2) * 3],
                                                      &local_44,this_00->field_0420);
                                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                                  if ((iVar16 != 0) ||
                                     ((((STField<byte>(local_10,0x265) & 2) != 0 &&
                                       (local_44 != 0)) &&
                                      (*(int *)(local_44 + 0x18) == STField<int>(local_10,0x26d))
                                      ))) {
                                    local_48 = 1;
                                  }
                                  local_4c = local_4c + 1;
                                  iVar7 = iVar7 + 6;
                                  iVar12 = (param_1 + this_00->field_0235 * 2) * 0x16;
                                } while (local_4c < *(int *)(&DAT_007932d0 + iVar12));
                              }
                              iVar7 = local_18;
                              iVar16 = local_28;
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
              iVar8 = this_00->field_05B0;
              iVar16 = iVar16 + 1;
              local_28 = iVar16;
            } while (iVar16 <= iVar8 + 8);
          }
        }
        iVar7 = iVar7 + 1;
        ppTVar15 = local_10;
        local_18 = iVar7;
      } while (iVar7 <= this_00->field_05B4 + 8);
    }
  }
LAB_004c42b5:
  if (local_20 != nullptr) {
    STField<AnonShape_005EFAE0_B406B78B *>(ppTVar15,0x28d) =
         (AnonShape_005EFAE0_B406B78B *)local_20->field_0018;
    STField<STFishC *>(ppTVar15,0x291) = local_20;
    if ((((STField<byte>(ppTVar15,0x265) & 2) != 0) &&
        (STField<AnonShape_005EFAE0_B406B78B *>(ppTVar15,0x28d) !=
         STField<AnonShape_005EFAE0_B406B78B *>(ppTVar15,0x26d))) &&
       (iVar7 = st::fn_006E62D0
                          (g_playSystem_00802A38,
                           STField<AnonShape_005EFAE0_B406B78B *>(ppTVar15,0x26d),(int *)&local_8)
       , iVar7 != 0)) {
      STField<uint>(ppTVar15,0x265) = STField<uint>(ppTVar15,0x265) & 0xfffffffd;
      STField<undefined4>(ppTVar15,0x26d) = 0;
    }
  }
  g_currentExceptionFrame = local_b8.previous;
  return 0;
}

