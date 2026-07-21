#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::Offensive */

void __thiscall AiPlrClassTy::Offensive(AiPlrClassTy *this,void *param_1)

{
  STFishC *pSVar1;
  code *pcVar2;
  AiPlrClassTy *this_00;
  undefined2 uVar3;
  int iVar4;
  DArrayTy *array;
  short *psVar5;
  int *piVar6;
  int iVar7;
  IMAGE_DOS_HEADER *pIVar8;
  undefined4 *puVar9;
  dword dVar10;
  uint uVar11;
  DArrayTy *pDVar12;
  ushort *puVar13;
  uint uVar14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX;
  bool bVar15;
  InternalExceptionFrame local_80;
  undefined4 local_3c;
  short local_38 [6];
  undefined4 local_2c;
  IMAGE_DOS_HEADER *local_28;
  undefined2 local_24;
  AiPlrClassTy *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  DArrayTy *local_c;
  uint local_8;

  local_c = (DArrayTy *)0x0;
  if ((((this->field_0676 != '\0') && (this->field_0640 != 0xff)) &&
      (this->field_0695 != (DArrayTy *)0x0)) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    local_80.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_80;
    local_20 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
    this_00 = local_20;
    if (iVar4 == 0) {
      iVar4 = local_20->field_0681;
      if (local_20->field_0689 == 0) {
        if ((iVar4 == 0) || (iVar4 * 3 + local_20->field_0685 <= local_20->field_06FE)) {
          local_20->field_0685 = local_20->field_06FE;
          array = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,5,0x10,5);
          local_c = array;
          thunk_FUN_0067a240(this_00,&LAB_00403544,&array->flags);
          uVar11 = array->count;
          uVar14 = 0;
          iVar4 = 0;
          bVar15 = uVar11 != 0;
          local_10 = 0;
          local_1c = 0;
          if (0 < (int)uVar11) {
            do {
              if (bVar15) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, uVar14) (runtime stride) */
                psVar5 = (short *)(array->elementSize * uVar14 + (int)array->data);
              }
              else {
                psVar5 = (short *)0x0;
              }
              if ((psVar5 != (short *)0x0) && (*psVar5 != 0)) {
                iVar4 = iVar4 + psVar5[1];
                local_10 = local_10 + *(int *)(psVar5 + 2);
              }
              uVar11 = array->count;
              uVar14 = uVar14 + 1;
              bVar15 = uVar14 < uVar11;
              local_1c = iVar4;
            } while ((int)uVar14 < (int)uVar11);
          }
          if ((((this_00->field_0677 <= local_1c) && (0 < (int)uVar11)) && (0 < local_1c)) &&
             ((0 < local_10 &&
              (iVar4 = thunk_FUN_0042a990(*(char *)&this_00->field_0640), local_18 = iVar4,
              iVar4 != 0)))) {
            bVar15 = *(int *)(iVar4 + 0xc) != 0;
            local_14 = 0;
            local_8 = 0;
            if (0 < *(int *)(iVar4 + 0xc)) {
              do {
                if (bVar15) {
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  piVar6 = (int *)(*(int *)(iVar4 + 8) * local_8 + *(int *)(iVar4 + 0x1c));
                }
                else {
                  piVar6 = (int *)0x0;
                }
                piVar6 = (int *)*piVar6;
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                if ((piVar6 != (int *)0x0) && (iVar7 = (**(code **)(*piVar6 + 0xf8))(), iVar7 != 0))
                {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar7 = (**(code **)(*piVar6 + 0x2c))();
                  pIVar8 = thunk_FUN_00674fb0(iVar7);
                  if ((((uint)pIVar8 & 3) != 0) || (((uint)pIVar8 & 0x630000) != 0)) {
                    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                    iVar7 = (**(code **)(*piVar6 + 0xd4))();
                    local_14 = local_14 + iVar7;
                  }
                }
                local_8 = local_8 + 1;
                bVar15 = local_8 < *(uint *)(iVar4 + 0xc);
                array = local_c;
              } while ((int)local_8 < (int)*(uint *)(iVar4 + 0xc));
            }
            if (((this_00->field_0679 <= local_1c) || (local_14 < 1)) ||
               ((int)this_00->field_067B < (local_10 * 100) / local_14)) {
              local_8 = 0;
              this_00->field_06AD[3] = 0;
              bVar15 = *(int *)(iVar4 + 0xc) != 0;
              if (0 < *(int *)(iVar4 + 0xc)) {
                do {
                  if (bVar15) {
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    puVar9 = (undefined4 *)(*(int *)(iVar4 + 8) * local_8 + *(int *)(iVar4 + 0x1c));
                  }
                  else {
                    puVar9 = (undefined4 *)0x0;
                  }
                  pSVar1 = (STFishC *)*puVar9;
                  if ((pSVar1 != (STFishC *)0x0) &&
                     (iVar7 = (*pSVar1->vtable->vfunc_F8)(), iVar7 != 0)) {
                    memset(&local_3c, 0, 0x1c); /* compiler bulk-zero initialization */
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    local_3c._0_2_ = (undefined2)local_8;
                    dVar10 = (*pSVar1->vtable->slot_2C)(pSVar1);
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    local_3c._2_2_ = (short)dVar10;
                    thunk_FUN_0067bda0(local_38,pSVar1);
                    local_2c = (*pSVar1->vtable->vfunc_D4)();
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    local_28 = thunk_FUN_00674fb0((int)local_3c._2_2_);
                    uVar11 = thunk_FUN_00675430((Global_sub_00675430_param_1Enum)local_28);
                    local_24 = (undefined2)uVar11;
                    Library::DKW::TBL::FUN_006ae1c0(this_00->field_06AD,&local_3c);
                    iVar4 = local_18;
                  }
                  local_8 = local_8 + 1;
                  bVar15 = local_8 < *(uint *)(iVar4 + 0xc);
                  array = local_c;
                } while ((int)local_8 < (int)*(uint *)(iVar4 + 0xc));
              }
              thunk_FUN_00676c40((DArrayTy *)this_00->field_06AD,&LAB_004026fd);
              thunk_FUN_00676c40(array,&LAB_004029b4);
              thunk_FUN_0067bfd0(this_00,array,(AnonShape_00413AF0_B6B4EE9A *)this_00->field_06AD);
              this_00->field_0689 = 1;
            }
          }
LAB_0067c61b:
          if (array != (DArrayTy *)0x0) {
            DArrayDestroy(array);
          }
          g_currentExceptionFrame = local_80.previous;
          return;
        }
      }
      else {
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar11 = extraout_EDX;
        if ((iVar4 == 0) || (uVar11 = local_20->field_0685 + iVar4, uVar11 <= local_20->field_06FE))
        {
          local_20->field_0685 = local_20->field_06FE;
          thunk_FUN_0067be20((int)local_20,uVar11,(DArrayTy *)local_20->field_06AD);
          iVar4 = thunk_FUN_0067bd50((DArrayTy *)this_00->field_06AD);
          pDVar12 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,5,0x10,5);
          local_c = pDVar12;
          thunk_FUN_0067a240(this_00,&LAB_00403544,&pDVar12->flags);
          iVar4 = iVar4 + pDVar12->count;
          if (iVar4 == 0) {
            thunk_FUN_0067c110((AnonReceiver_006799B0 *)this_00);
            array = local_c;
          }
          else {
            array = local_c;
            if (0 < (int)pDVar12->count) {
              if ((int)this_00->field_06AD[3] < iVar4) {
                iVar4 = thunk_FUN_0042a990(*(char *)&this_00->field_0640);
                local_18 = iVar4;
                if (iVar4 != 0) {
                  local_8 = 0;
                  if (0 < *(int *)(iVar4 + 0xc)) {
                    bVar15 = *(int *)(iVar4 + 0xc) != 0;
                    do {
                      uVar11 = local_8;
                      if (bVar15) {
                        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                        puVar9 = (undefined4 *)
                                 (*(int *)(iVar4 + 8) * local_8 + *(int *)(iVar4 + 0x1c));
                      }
                      else {
                        puVar9 = (undefined4 *)0x0;
                      }
                      pSVar1 = (STFishC *)*puVar9;
                      if (((pSVar1 != (STFishC *)0x0) &&
                          (iVar7 = (*pSVar1->vtable->vfunc_F8)(), iVar4 = local_18, iVar7 != 0)) &&
                         (puVar13 = thunk_FUN_0067bd00((DArrayTy *)this_00->field_06AD,uVar11),
                         iVar4 = local_18, puVar13 == (ushort *)0x0)) {
                        uVar3 = (undefined2)local_8;
                        memset(&local_3c, 0, 0x1c); /* compiler bulk-zero initialization */
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_3c._0_2_ = uVar3;
                        dVar10 = (*pSVar1->vtable->slot_2C)(pSVar1);
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_3c._2_2_ = (short)dVar10;
                        thunk_FUN_0067bda0(local_38,pSVar1);
                        local_2c = (*pSVar1->vtable->vfunc_D4)();
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        local_28 = thunk_FUN_00674fb0((int)local_3c._2_2_);
                        uVar11 = thunk_FUN_00675430((Global_sub_00675430_param_1Enum)local_28);
                        local_24 = (undefined2)uVar11;
                        Library::DKW::TBL::FUN_006ae1c0(this_00->field_06AD,&local_3c);
                        iVar4 = local_18;
                        uVar11 = local_8;
                      }
                      local_8 = uVar11 + 1;
                      bVar15 = local_8 < *(uint *)(iVar4 + 0xc);
                    } while ((int)local_8 < (int)*(uint *)(iVar4 + 0xc));
                  }
                }
                thunk_FUN_00676c40((DArrayTy *)this_00->field_06AD,&LAB_004026fd);
              }
              if (((AnonShape_00413AF0_B6B4EE9A *)this_00->field_06AD)->field_000C == 0) {
                thunk_FUN_0067c110((AnonReceiver_006799B0 *)this_00);
                array = local_c;
              }
              else {
                thunk_FUN_0067bfd0(this_00,local_c,
                                   (AnonShape_00413AF0_B6B4EE9A *)this_00->field_06AD);
                array = local_c;
              }
            }
          }
          goto LAB_0067c61b;
        }
      }
    }
    else {
      g_currentExceptionFrame = local_80.previous;
      iVar7 = ReportDebugMessage("E:\\__titans\\ai\\ai_plr.cpp",0x570,0,iVar4,"%s",
                                 "AiPlrClassTy::Offensive");
      if (iVar7 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (local_c != (DArrayTy *)0x0) {
        DArrayDestroy(local_c);
        local_c = (DArrayTy *)0x0;
      }
      RaiseInternalException(iVar4,0,"E:\\__titans\\ai\\ai_plr.cpp",0x573);
    }
  }
  return;
}

