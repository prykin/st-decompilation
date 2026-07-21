#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_bfire.cpp
   TLOBaseTy::fireFindCheckTarget */

int __thiscall TLOBaseTy::fireFindCheckTarget(TLOBaseTy *this,int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
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
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
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

  local_8 = (STFishC *)0x0;
  local_20 = (STFishC *)0x0;
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
  ppTVar15 = &local_60->vtable + param_1 * 0x20;
  *(undefined4 *)((int)ppTVar15 + 0x28d) = 0;
  *(AnonPointee_TLOBaseTy_0291 **)((int)ppTVar15 + 0x291) = (AnonPointee_TLOBaseTy_0291 *)0x0;
  if (&stack0x00000000 != (undefined1 *)0x2c) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_2c = CONCAT22(local_2c._2_2_,local_60->field_0041);
  }
  if (&stack0x00000000 != (undefined1 *)0x34) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_34 = CONCAT22(local_34._2_2_,local_60->field_0043);
  }
  if (&stack0x00000000 != (undefined1 *)0x30) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_30 = CONCAT22(local_30._2_2_,local_60->field_0045);
  }
  local_10 = ppTVar15;
  if (*(int *)(&DAT_00792a90 + (param_1 + local_60->field_0235 * 2) * 4) == 1) {
    local_58 = thunk_FUN_004e81b0(local_60->field_0024,local_60->field_0235,param_1);
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
                 (local_28 = iVar16, iVar8 = FUN_006aced8(iVar16,iVar7,iVar8,this_00->field_05B4),
                 iVar8 <= local_58)) {
                local_24 = iVar8 / 3;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                if (3 < *(int *)((int)local_10 + 0x281)) {
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
                        local_8 = (STFishC *)0x0;
                      }
                      else {
                        local_8 = (STFishC *)
                                  g_worldGrid.cells
                                  [(int)sVar14 * (int)g_worldGrid.sizeX +
                                   (int)sVar5 * (int)g_worldGrid.planeStride + (int)sVar6].objects
                                  [0];
                        iVar7 = local_18;
                      }
                      if (((((TLOBaseTy *)local_8 != (TLOBaseTy *)0x0) &&
                           ((TLOBaseTy *)local_8 != this_00)) &&
                          (dVar9 = (*((TLOBaseTy *)local_8)->vtable->slot_F8)((TLOBaseTy *)local_8),
                          iVar7 = local_18, iVar16 = local_28, dVar9 != 0)) &&
                         ((local_8->field_0024 != 0xff &&
                          (iVar8 = (*local_8->vtable->vfunc_F4)(this_00->field_0024),
                          iVar7 = local_18, iVar16 = local_28, iVar8 != 0)))) {
                        STFishC::sub_004162B0(local_8,&local_12,&local_14,&local_a);
                        thunk_FUN_00416270(local_8,local_40,(int *)local_38,(int *)local_1c);
                        iVar7 = (int)(short)local_30;
                        iVar8 = FUN_006acf0d((int)local_40[0],(int)local_38[0],(int)local_1c[0],
                                             (int)(short)local_2c,(int)(short)local_34,iVar7);
                        uVar10 = local_1c[0] - iVar7;
                        uVar13 = (int)uVar10 >> 0x1f;
                        iVar7 = local_18;
                        iVar16 = local_28;
                        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                        if ((int)(((uVar10 ^ uVar13) - uVar13) * 10) / iVar8 <=
                            *(int *)((int)local_10 + 0x281)) {
                          *(undefined4 *)((int)local_10 + 0x295) = PTR_00802a38->field_00E4;
                          if ((param_2 == 0) || (this_00->field_0255 == 0)) goto LAB_004c4080;
                          sVar6 = (*this_00->vtable->vfunc_10)
                                            (*(undefined2 *)&local_8->field_0x41,
                                             *(undefined2 *)&local_8->field_0x43,
                                             *(undefined2 *)&local_8->field_0x45,local_2c,local_34,
                                             local_30);
                          iVar8 = ((sVar6 + 0xb4) % 0x168) / 0xf;
                          uVar10 = (int)*(uint *)(&DAT_007be8c8 +
                                                 ((int)this_00->field_0259 / 0xf + iVar8 * 0x18) * 4
                                                 ) >> 0x1f;
                          iVar7 = local_18;
                          iVar16 = local_28;
                          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                          if ((int)((*(uint *)(&DAT_007be8c8 +
                                              ((int)this_00->field_0259 / 0xf + iVar8 * 0x18) * 4) ^
                                    uVar10) - uVar10) <= *(int *)((int)local_10 + 0x279)) {
                            iVar12 = param_1 + this_00->field_0235 * 2;
                            if ((&DAT_00792ca0)[iVar12 * 3] == 0xb0) {
                              if (iVar8 % 3 == 0) {
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_004c4080:
                                if (((*(uint *)((int)local_10 + 0x265) & 2) != 0) &&
                                   (local_8->field_0018 == *(int *)((int)local_10 + 0x26d))) {
                                  *(int *)((int)local_10 + 0x2d5) = (int)local_12;
                                  *(int *)((int)local_10 + 0x2d9) = (int)local_14;
                                  local_20 = local_8;
                                  *(int *)((int)local_10 + 0x2dd) = (int)local_a;
                                  ppTVar15 = local_10;
                                  goto LAB_004c42b5;
                                }
                                iVar7 = local_18;
                                iVar16 = local_28;
                                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                                if ((*(uint *)((int)local_10 + 0x265) & 1) != 0) {
                                  if (this_00->field_0420 == 0) {
                                    if (((uint)local_8->field_0024 < 8) &&
                                       ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                                        ((byte)(&DAT_008087e9)[local_8->field_0024 * 0x51] < 8)))) {
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
                                        bVar17 = (&DAT_008087ea)[(uint)bVar2 * 0x51] !=
                                                 (&DAT_008087ea)[(uint)bVar1 * 0x51];
                                      }
                                      if (bVar17) goto LAB_004c41a5;
                                    }
                                  }
                                  else {
LAB_004c41a5:
                                    iVar8 = (*local_8->vtable->vfunc_F0)();
                                    iVar7 = local_18;
                                    iVar16 = local_28;
                                    if (iVar8 != 0) {
                                      iVar8 = FUN_006aadd0(this_00->field_05B0,this_00->field_05B4,
                                                           this_00->field_05B8,local_28,local_18,
                                                           local_3c);
                                      ppTVar15 = local_10;
                                      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                                      if (*(int *)((int)local_10 + 0x269) == 0) {
                                        iVar12 = *(int *)&local_8->field_0x215;
                                      }
                                      else {
                                        iVar12 = (*local_8->vtable->vfunc_7C)();
                                      }
                                      iVar7 = local_18;
                                      iVar16 = local_28;
                                      if (((local_20 == (STFishC *)0x0) || (local_6c < iVar12)) ||
                                         ((iVar12 == local_6c &&
                                          (ppTVar15 = local_10, iVar8 < local_5c)))) {
                                        local_20 = local_8;
                                        *(int *)((int)ppTVar15 + 0x2d5) = (int)local_12;
                                        *(int *)((int)ppTVar15 + 0x2d9) = (int)local_14;
                                        *(int *)((int)ppTVar15 + 0x2dd) = (int)local_a;
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
                                            thunk_FUN_0041dc40(local_74,(short)*(undefined4 *)
                                                                                (&DAT_007932d4 +
                                                                                iVar7 + iVar12),
                                                               *(undefined2 *)
                                                                ((int)(&DAT_007932d4 +
                                                                      iVar7 + iVar12) + 4),
                                                               -*(short *)&this_00->field_0259);
                                  local_68 = (short)*puVar11;
                                  sStack_66 = (short)((uint)*puVar11 >> 0x10);
                                  local_64 = *(short *)(puVar11 + 1);
                                  iVar16 = STSprGameObjC::CheckRay
                                                     ((STSprGameObjC *)this_00,
                                                      local_68 + (short)local_2c,
                                                      sStack_66 + (short)local_34,
                                                      local_64 + (short)local_30,local_40[0],
                                                      local_38[0],local_1c[0],
                                                      (&DAT_00792ca0)
                                                      [(param_1 + this_00->field_0235 * 2) * 3],
                                                      &local_44,this_00->field_0420);
                                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                                  if ((iVar16 != 0) ||
                                     ((((*(byte *)((int)local_10 + 0x265) & 2) != 0 &&
                                       (local_44 != 0)) &&
                                      (*(int *)(local_44 + 0x18) == *(int *)((int)local_10 + 0x26d))
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
  if (local_20 != (STFishC *)0x0) {
    *(undefined4 *)((int)ppTVar15 + 0x28d) = local_20->field_0018;
    *(STFishC **)((int)ppTVar15 + 0x291) = local_20;
    if ((((*(byte *)((int)ppTVar15 + 0x265) & 2) != 0) &&
        (*(int *)((int)ppTVar15 + 0x28d) != *(int *)((int)ppTVar15 + 0x26d))) &&
       (iVar7 = FUN_006e62d0(PTR_00802a38,*(int *)((int)ppTVar15 + 0x26d),(int *)&local_8),
       iVar7 != 0)) {
      *(uint *)((int)ppTVar15 + 0x265) = *(uint *)((int)ppTVar15 + 0x265) & 0xfffffffd;
      *(undefined4 *)((int)ppTVar15 + 0x26d) = 0;
    }
  }
  g_currentExceptionFrame = local_b8.previous;
  return 0;
}

