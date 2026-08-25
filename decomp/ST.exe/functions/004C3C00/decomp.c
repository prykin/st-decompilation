#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bfire.cpp
   TLOBaseTy::fireFindCheckTarget */

int __thiscall TLOBaseTy::fireFindCheckTarget(TLOBaseTy *this,int param_1,int param_2)

{
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
  iVar7 = Library::MSVCRT::__setjmp3(local_b8.jumpBuffer,0);
  this_00 = local_60;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_b8.previous;
    iVar16 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_bfire.cpp",0x126,0,iVar7,
                                "%s","TLOBaseTy::fireFindCheckTarget error");
    if (iVar16 == 0) {
      RaiseInternalException(iVar7,0,"E:\\__titans\\Artem\\TLO_bfire.cpp",0x127);
      return iVar7;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  ppTVar16 = &local_60->vtable + param_1 * 0x20;
  STField<AnonShape_005EFAE0_B406B78B *>(ppTVar16,0x28d) = nullptr;
  STField<AnonPointee_TLOBaseTy_0291 *>(ppTVar16,0x291) = nullptr;
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
  local_10 = ppTVar16;
  if (*(int *)(&DAT_00792a90 + (param_1 + local_60->field_0235 * 2) * 4) == 1) {
    local_58 = thunk_FUN_004e81b0((int)local_60->field_0024,local_60->field_0235,param_1);
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
                 local_EAX_288 = FUN_006aced8(iVar17,iVar15,iVar9,this_00->field_05B4),
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
                        local_8 = (STFishC *)
                                  STGridAt3D(g_worldGrid, sVar6, sVar14, sVar5).objects
                                  [0];
                        iVar15 = local_18;
                      }
                      if (((((TLOBaseTy *)local_8 != nullptr) &&
                           ((TLOBaseTy *)local_8 != this_00)) &&
                          /* ST_CALLSITE[004C3DF8]: CALL dword ptr [EDX + 0xf8] */
                          (dVar7 = (*((TLOBaseTy *)local_8)->vtable->slot_F8)((TLOBaseTy *)local_8),
                          iVar15 = local_18, iVar17 = local_28, dVar7 != 0)) &&
                         ((local_8->field_0024 != 0xff &&
                          /* ST_CALLSITE[004C3E1C]: CALL dword ptr [EAX + 0xf4] */
                          (iVar9 = (*local_8->vtable->vfunc_F4)(this_00->field_0024),
                          iVar15 = local_18, iVar17 = local_28, iVar9 != 0)))) {
                        /* ST_CALLSITE[004C3E39]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
                        STFishC::sub_004162B0(local_8,&local_12,&local_14,&local_a);
                        thunk_FUN_00416270(local_8,(uint *)local_40,local_38,local_1c);
                        iVar15 = (short)local_30;
                        iVar8 = FUN_006acf0d((int)local_40[0],(int)local_38[0],(int)local_1c[0],
                                             (int)local_2c,(int)local_34,iVar15);
                        uVar10 = local_1c[0] - iVar15;
                        uVar13 = (int)uVar10 >> 0x1f;
                        iVar15 = local_18;
                        iVar17 = local_28;
                        if ((int)(((uVar10 ^ uVar13) - uVar13) * 10) / iVar8 <=
                            STField<int>(local_10,0x281)) {
                          STField<uint>(local_10,0x295) = g_playSystem_00802A38->field_00E4;
                          if ((param_2 == 0) || (this_00->field_0255 == 0)) goto LAB_004c4080;
                          /* ST_CALLSITE[004C3EE9]: CALL dword ptr [EDX + 0x10] */
                          sVar6 = (*this_00->vtable->vfunc_10)
                                            (*(short *)&local_8->field_0x41,
                                             *(short *)&local_8->field_0x43,
                                             STReplaceLowWord((uint32_t)(_local_34), (uint16_t)(*(undefined2 *)&local_8->field_0x45)),
                                             (short)_local_2c,(short)_local_34,local_30);
                          iVar9 = ((sVar6 + 0xb4) % 0x168) / 0xf;
                          uVar10 = (int)*(uint *)(&DAT_007be8c8 +
                                                 (this_00->field_0259 / 0xf + iVar9 * 0x18) * 4) >>
                                   0x1f;
                          iVar15 = local_18;
                          iVar17 = local_28;
                          if ((int)((*(uint *)(&DAT_007be8c8 +
                                              (this_00->field_0259 / 0xf + iVar9 * 0x18) * 4) ^
                                    uVar10) - uVar10) <= STField<int>(local_10,0x279)) {
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
                                    /* ST_CALLSITE[004C41A9]: CALL dword ptr [EAX + 0xf0] */
                                    iVar9 = local_8->vfunc_F0();
                                    iVar15 = local_18;
                                    iVar17 = local_28;
                                    if (iVar9 != 0) {
                                      local_EAX_1496 =
                                           FUN_006aadd0(this_00->field_05B0,this_00->field_05B4,
                                                        this_00->field_05B8,local_28,local_18,
                                                        local_3c);
                                      ppTVar16 = local_10;
                                      if (STField<int>(local_10,0x269) == 0) {
                                        iVar9 = *(int *)&local_8->field_0x215;
                                      }
                                      else {
                                        /* ST_CALLSITE[004C41F1]: CALL dword ptr [EDX + 0x7c] */
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
                                  puVar12 = thunk_FUN_0041dc40(local_74,(short)*(undefined4 *)
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
                                  iVar17 = STSprGameObjC::CheckRay
                                                     ((STSprGameObjC *)this_00,
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
    STField<AnonShape_005EFAE0_B406B78B *>(ppTVar16,0x28d) =
         (AnonShape_005EFAE0_B406B78B *)local_20->field_0018;
    STField<STFishC *>(ppTVar16,0x291) = local_20;
    if ((((STField<byte>(ppTVar16,0x265) & 2) != 0) &&
        (STField<AnonShape_005EFAE0_B406B78B *>(ppTVar16,0x28d) !=
         STField<AnonShape_005EFAE0_B406B78B *>(ppTVar16,0x26d))) &&
       (iVar15_mg5 = STPlaySystemC::sub_006E62D0
                               (g_playSystem_00802A38,
                                STField<AnonShape_005EFAE0_B406B78B *>(ppTVar16,0x26d),
                                (int *)&local_8), iVar15_mg5 != 0)) {
      STField<uint>(ppTVar16,0x265) = STField<int>(ppTVar16,0x265) & 0xfffffffd;
      STField<undefined4>(ppTVar16,0x26d) = 0;
    }
  }
  g_currentExceptionFrame = local_b8.previous;
  return 0;
}

