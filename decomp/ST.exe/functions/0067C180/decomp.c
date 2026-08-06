#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::Offensive
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall Offensive(AiPlrClassTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0067C634 RET | 0067C687 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall AiPlrClassTy::Offensive(AiPlrClassTy *this)

{
  STFishC *pSVar1;
  AiPlrClassTy *this_00;
  undefined2 uVar3;
  int local_EAX_93;
  DArrayTy *array;
  short *psVar4;
  int *piVar5;
  int iVar6;
  IMAGE_DOS_HEADER *pIVar7;
  undefined4 *puVar8;
  dword dVar9;
  int iVar4;
  DArrayTy *pDVar10;
  ushort *puVar11;
  int iVar7;
  uint uVar12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EDX;
  int iVar13;
  uint uVar14;
  bool bVar15;
  InternalExceptionFrame local_80;
  undefined4 local_3c;
  short local_38 [6];
  undefined4 local_2c;
  IMAGE_DOS_HEADER *local_28;
  ushort local_24;
  AiPlrClassTy *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  DArrayTy *local_c;
  uint local_8;

  local_c = nullptr;
  if ((((this->field_0676 != '\0') && (this->field_0640 != 0xff)) &&
      (this->field_0695 != nullptr)) && (g_allPlayers_007FA174 != nullptr)) {
    local_80.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_80;
    local_20 = this;
    local_EAX_93 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
    this_00 = local_20;
    if (local_EAX_93 == 0) {
      iVar13 = local_20->field_0681;
      if (local_20->field_0689 == 0) {
        if ((iVar13 == 0) || (iVar13 * 3 + local_20->field_0685 <= local_20->field_06FE)) {
          local_20->field_0685 = local_20->field_06FE;
          array = Library::DKW::TBL::DArrayCreate(nullptr,5,0x10,5);
          local_c = array;
          sub_0067A240(this_00,thunk_FUN_0067ba50,array);
          uVar14 = array->count;
          uVar12 = 0;
          iVar13 = 0;
          bVar15 = uVar14 != 0;
          local_10 = 0;
          local_1c = 0;
          if (0 < (int)uVar14) {
            do {
              if (bVar15) {
                psVar4 = DArrayAt<short>(array, uVar12);
              }
              else {
                psVar4 = nullptr;
              }
              if ((psVar4 != nullptr) && (*psVar4 != 0)) {
                iVar13 = iVar13 + psVar4[1];
                local_10 = local_10 + *(int *)(psVar4 + 2);
              }
              uVar14 = array->count;
              uVar12 = uVar12 + 1;
              bVar15 = uVar12 < uVar14;
              local_1c = iVar13;
            } while ((int)uVar12 < (int)uVar14);
          }
          if ((((this_00->field_0677 <= local_1c) && (0 < (int)uVar14)) && (0 < local_1c)) &&
             ((0 < local_10 &&
              (iVar13 = thunk_FUN_0042a990(*(char *)&this_00->field_0640), local_18 = iVar13,
              iVar13 != 0)))) {
            bVar15 = *(int *)(iVar13 + 0xc) != 0;
            local_14 = 0;
            local_8 = 0;
            if (0 < *(int *)(iVar13 + 0xc)) {
              do {
                if (bVar15) {
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  piVar5 = (int *)(*(int *)(iVar13 + 8) * local_8 + *(int *)(iVar13 + 0x1c));
                }
                else {
                  piVar5 = nullptr;
                }
                piVar5 = (int *)*piVar5;
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                if ((piVar5 != nullptr) && (iVar6 = (**(code **)(*piVar5 + 0xf8))(), iVar6 != 0))
                {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar6 = (**(code **)(*piVar5 + 0x2c))();
                  pIVar7 = thunk_FUN_00674fb0(iVar6);
                  if ((((uint)pIVar7 & 3) != 0) || (((uint)pIVar7 & 0x630000) != 0)) {
                    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                    iVar6 = (**(code **)(*piVar5 + 0xd4))();
                    local_14 = local_14 + iVar6;
                  }
                }
                local_8 = local_8 + 1;
                bVar15 = local_8 < *(uint *)(iVar13 + 0xc);
                array = local_c;
              } while ((int)local_8 < (int)*(uint *)(iVar13 + 0xc));
            }
            if (((this_00->field_0679 <= local_1c) || (local_14 < 1)) ||
               ((int)this_00->field_067B < (local_10 * 100) / local_14)) {
              local_8 = 0;
              this_00->field_06AD->count = 0;
              bVar15 = *(int *)(iVar13 + 0xc) != 0;
              if (0 < *(int *)(iVar13 + 0xc)) {
                do {
                  if (bVar15) {
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    puVar8 = (undefined4 *)
                             (*(int *)(iVar13 + 8) * local_8 + *(int *)(iVar13 + 0x1c));
                  }
                  else {
                    puVar8 = nullptr;
                  }
                  pSVar1 = (STFishC *)*puVar8;
                  if ((pSVar1 != nullptr) &&
                     (iVar6 = (*pSVar1->vtable->vfunc_F8)(), iVar6 != 0)) {
                    memset(&local_3c, 0, 0x1c); /* compiler bulk-zero initialization */
                    STPiece<0,2>(local_3c) = (undefined2)local_8;
                    dVar9 = pSVar1->slot_2C();
                    STPiece<2,2>(local_3c) = (short)dVar9;
                    thunk_FUN_0067bda0(local_38,pSVar1);
                    local_2c = pSVar1->vfunc_D4();
                    local_28 = thunk_FUN_00674fb0((int)STPiece<2,2>(local_3c));
                    local_24 = thunk_FUN_00675430((Global_sub_00675430_param_1Enum)local_28);
                    Library::DKW::TBL::DArrayAppend(this_00->field_06AD,&local_3c);
                    iVar13 = local_18;
                  }
                  local_8 = local_8 + 1;
                  bVar15 = local_8 < *(uint *)(iVar13 + 0xc);
                  array = local_c;
                } while ((int)local_8 < (int)*(uint *)(iVar13 + 0xc));
              }
              thunk_FUN_00676c40(this_00->field_06AD,thunk_FUN_0067baf0);
              thunk_FUN_00676c40(array,thunk_FUN_0067bb20);
              sub_0067BFD0(this_00,array,this_00->field_06AD);
              this_00->field_0689 = 1;
            }
          }
LAB_0067c61b:
          if (array != nullptr) {
            DArrayDestroy(array);
          }
          g_currentExceptionFrame = local_80.previous;
          return;
        }
      }
      else {
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar14 = extraout_EDX;
        if ((iVar13 == 0) ||
           (uVar14 = local_20->field_0685 + iVar13, uVar14 <= local_20->field_06FE)) {
          local_20->field_0685 = local_20->field_06FE;
          thunk_FUN_0067be20((int)local_20,uVar14,local_20->field_06AD);
          iVar4 = thunk_FUN_0067bd50(this_00->field_06AD);
          pDVar10 = Library::DKW::TBL::DArrayCreate(nullptr,5,0x10,5);
          local_c = pDVar10;
          sub_0067A240(this_00,thunk_FUN_0067ba50,pDVar10);
          iVar13 = iVar4 + pDVar10->count;
          if (iVar13 == 0) {
            sub_0067C110(this_00);
            array = local_c;
          }
          else {
            array = local_c;
            if (0 < (int)pDVar10->count) {
              if ((int)this_00->field_06AD->count < iVar13) {
                iVar13 = thunk_FUN_0042a990(*(char *)&this_00->field_0640);
                local_18 = iVar13;
                if (iVar13 != 0) {
                  local_8 = 0;
                  if (0 < *(int *)(iVar13 + 0xc)) {
                    bVar15 = *(int *)(iVar13 + 0xc) != 0;
                    do {
                      uVar14 = local_8;
                      if (bVar15) {
                        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                        puVar8 = (undefined4 *)
                                 (*(int *)(iVar13 + 8) * local_8 + *(int *)(iVar13 + 0x1c));
                      }
                      else {
                        puVar8 = nullptr;
                      }
                      pSVar1 = (STFishC *)*puVar8;
                      if (((pSVar1 != nullptr) &&
                          (iVar6 = (*pSVar1->vtable->vfunc_F8)(), iVar13 = local_18, iVar6 != 0)) &&
                         (puVar11 = thunk_FUN_0067bd00(this_00->field_06AD,uVar14),
                         iVar13 = local_18, puVar11 == nullptr)) {
                        uVar3 = (undefined2)local_8;
                        memset(&local_3c, 0, 0x1c); /* compiler bulk-zero initialization */
                        STPiece<0,2>(local_3c) = uVar3;
                        dVar9 = pSVar1->slot_2C();
                        STPiece<2,2>(local_3c) = (short)dVar9;
                        thunk_FUN_0067bda0(local_38,pSVar1);
                        local_2c = pSVar1->vfunc_D4();
                        local_28 = thunk_FUN_00674fb0((int)STPiece<2,2>(local_3c));
                        local_24 = thunk_FUN_00675430((Global_sub_00675430_param_1Enum)local_28);
                        Library::DKW::TBL::DArrayAppend(this_00->field_06AD,&local_3c);
                        iVar13 = local_18;
                        uVar14 = local_8;
                      }
                      local_8 = uVar14 + 1;
                      bVar15 = local_8 < *(uint *)(iVar13 + 0xc);
                    } while ((int)local_8 < (int)*(uint *)(iVar13 + 0xc));
                  }
                }
                thunk_FUN_00676c40(this_00->field_06AD,thunk_FUN_0067baf0);
              }
              if (this_00->field_06AD->count == 0) {
                sub_0067C110(this_00);
                array = local_c;
              }
              else {
                sub_0067BFD0(this_00,local_c,this_00->field_06AD);
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
      iVar7 = ReportDebugMessage("E:\\__titans\\ai\\ai_plr.cpp",0x570,0,local_EAX_93,
                                 "%s","AiPlrClassTy::Offensive");
      if (iVar7 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (local_c != nullptr) {
        DArrayDestroy(local_c);
        local_c = nullptr;
      }
      RaiseInternalException(local_EAX_93,0,"E:\\__titans\\ai\\ai_plr.cpp",0x573);
    }
  }
  return;
}

