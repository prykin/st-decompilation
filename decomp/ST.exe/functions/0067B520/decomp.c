#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::ExecTech
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall ExecTech(AiPlrClassTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0067B8E6 RET | 0067B92E RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall AiPlrClassTy::ExecTech(AiPlrClassTy *this)

{
  short sVar1;
  AiPlrClassTy *this_00;
  bool bVar13;
  int local_EAX_119;
  AiPlrClassTy_field_06A1DArray *array;
  int local_EAX_259;
  int local_EAX_300;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int local_EAX_427;
  uint uVar3;
  uint *puVar4;
  int iVar4;
  int local_EAX_824;
  int iVar9;
  DArrayTy *pDVar5;
  uint uVar6;
  void *pvVar7;
  int iVar8;
  STGameObjC *pSVar9;
  RecoveredRecordView_0068FD00_630BE91E *pRVar10;
  bool bVar11;
  int local_c8 [7];
  int local_ac [7];
  InternalExceptionFrame local_90;
  RecoveredRecordView_0068FD00_630BE91E local_4c [3];
  AiPlrClassTy *local_18;
  int local_14;
  uint local_10;
  uint local_c;
  STGameObjC *local_8;

  if (((this->field_0695 != nullptr) && (g_allPlayers_007FA174 != nullptr)) &&
     ((this->field_066E == 0 || ((uint)(this->field_0672 + this->field_066E) <= this->field_06FE))))
  {
    this->field_0672 = this->field_06FE;
    local_90.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_90;
    local_18 = this;

    local_EAX_119 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0);
    this_00 = local_18;
    if (local_EAX_119 == 0) {
      local_10 = 0;
      array = local_18->field_06A1;
      if (0 < (int)array->count) {
        bVar11 = array->count != 0;
        do {
          uVar3 = local_10;
          if (bVar11) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pvVar7 = (void *)((int)&array->data->field_0000 + array->elementSize * local_10);
          }
          else {
            pvVar7 = nullptr;
          }
          switch(STField<undefined1>(pvVar7,7)) {
          case 0:
            sVar1 = STField<short>(pvVar7,3);

            iVar8 = thunk_FUN_004e60d0(this_00->field_05D7,(int)STField<short>(pvVar7,1));
            if (iVar8 < sVar1) {

              local_EAX_259 =
                   thunk_FUN_004e5f90(this_00->field_05D7,(int)STField<short>(pvVar7,1));
              if (local_EAX_259 == 0) {
                pSVar9 = (STGameObjC *)(int)STField<short>(pvVar7,1);
                local_14 = (int)STField<short>(pvVar7,3);
                local_8 = pSVar9;

                local_EAX_300 = thunk_FUN_004e5910(this_00->field_05D7,(uint)pSVar9);
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                if ((local_EAX_300 == 0) ||
                   (bVar13 = thunk_FUN_004e5c40((byte *)this_00->field_05D7,(uint)pSVar9),
                   CONCAT31(extraout_var,bVar13) == 0)) {
LAB_0067b6db:
                  bVar11 = false;
                }
                else {

                  local_c = thunk_FUN_004e6140(this_00->field_05D7,(int)pSVar9);

                  iVar8 = thunk_FUN_004e60d0(this_00->field_05D7,(int)pSVar9);
                  if (((int)local_c <= iVar8) ||

                     ((iVar8 = thunk_FUN_004e60d0(this_00->field_05D7,(int)pSVar9),
                      iVar8 != local_14 + -1 ||

                      (local_EAX_427 = thunk_FUN_004e5f90(this_00->field_05D7,(uint)pSVar9),
                      local_EAX_427 != 0)))) goto LAB_0067b6db;
                  bVar11 = true;
                }
                if (bVar11) {
                  pDVar5 = this_00->field_0695;
                  local_c = 0;
                  uVar3 = pDVar5->count;
                  if (0 < (int)uVar3) {
                    do {
                      uVar6 = local_c;
                      if (((pDVar5 == nullptr) || ((int)local_c < 0)) ||
                         ((int)uVar3 <= (int)local_c)) {
LAB_0067b724:
                        local_8 = nullptr;
                      }
                      else {
                        if (local_c < uVar3) {
                          puVar4 = DArrayAt<undefined4>(pDVar5, local_c);
                        }
                        else {
                          puVar4 = nullptr;
                        }
                        if (puVar4[1] == 0) goto LAB_0067b724;
                        local_8 = (STGameObjC *)*puVar4;
                      }
                      if (local_8 != nullptr) {
                        pRVar10 = local_4c;
                        for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
                          *(undefined4 *)pRVar10 = 0;
                          pRVar10 = (RecoveredRecordView_0068FD00_630BE91E *)&pRVar10->field_0x4;
                        }
                        STPiece<4,4>(local_4c[0]) = this_00->field_06FE;
                        STPiece<0,4>(local_4c[0]) = 0x73;
                        local_4c[0].field_0009 = 1;
                        local_4c[0].field_000A = pvVar7;
                        if (&stack0x00000000 != (undefined1 *)0x4c) {
                          /* ST_CALLSITE[0067B75D]: CALL 0x004010e1; direct=004010E1 AiTactClassTy::GetAiMess */
                          AiTactClassTy::GetAiMess((AiTactClassTy *)local_8,local_4c);
                          uVar6 = local_c;
                        }
                        if ('\0' < (char)STPiece<8,1>(local_4c[0])) {
                          STField<undefined1>(pvVar7,7) = 1;
                          STField<undefined2>(pvVar7,8) = STPiece<14,2>(local_4c[0]);
                          break;
                        }
                      }
                      pDVar5 = this_00->field_0695;
                      local_c = uVar6 + 1;
                      uVar3 = pDVar5->count;
                    } while ((int)local_c < (int)uVar3);
                  }
                }
              }
            }
            else {
              STField<undefined1>(pvVar7,7) = 2;
            }
            break;
          case 1:
            if (g_allPlayers_007FA174 == nullptr) {
              local_8 = nullptr;
            }
            else {
              /* ST_CALLSITE[0067B7B1]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
              local_8 = STAllPlayersC::GetObjPtr
                                  (g_allPlayers_007FA174,(char)this_00->field_05D7,
                                   STField<ushort>(pvVar7,8),CASE_1);
            }
            if (local_8 == nullptr) {
              STField<undefined1>(pvVar7,7) = 0;
              STField<undefined2>(pvVar7,8) = 0;
            }
            else {
              sVar1 = STField<short>(pvVar7,3);

              iVar8 = thunk_FUN_004e60d0(this_00->field_05D7,(int)STField<short>(pvVar7,1));
              if (iVar8 < sVar1) {

                iVar4 = thunk_FUN_004e3800(local_8,(int)STField<short>(pvVar7,1),
                                           (int)STField<short>(pvVar7,3));
                if (iVar4 == 0) {
                  STField<undefined1>(pvVar7,7) = 0;
                  STField<undefined2>(pvVar7,8) = 0;
                }
              }
              else {
                STField<undefined1>(pvVar7,7) = 2;
              }
            }
            break;
          case 2:
          case 3:

            DArrayRemoveAt((DArrayTy *)array,local_10);
            local_10 = uVar3 - 1;
          }
          array = this_00->field_06A1;
          local_10 = local_10 + 1;
          bVar11 = local_10 < array->count;
        } while ((int)local_10 < (int)array->count);
      }
      if (((g_allPlayers_007FA174 != nullptr) && (this_00->field_0662 == '\x01')) &&

         (local_EAX_824 = thunk_FUN_0067b1a0(this_00,(int)this_00->field_0660),
         local_EAX_824 < (int)((-(uint)(this_00->field_05EC != 3) & 0xfffffffc) + 5))) {
        thunk_FUN_004e7230(this_00->field_05D7,(int)this_00->field_0660,local_c8,local_ac);
        iVar8 = 0;
        do {
          if (*(int *)((int)local_c8 + iVar8) == 0) {
            g_currentExceptionFrame = local_90.previous;
            return;
          }
          /* ST_CALLSITE[0067B8C7]: CALL 0x00402e37; direct=00402E37 AiPlrClassTy::SetTech */
          SetTech(this_00,*(int *)((int)local_c8 + iVar8),*(int *)((int)local_ac + iVar8),
                  (int)this_00->field_0663,(char)this_00->field_0660);
          iVar8 = iVar8 + 4;
        } while (iVar8 < 0x1c);
      }
      g_currentExceptionFrame = local_90.previous;
      return;
    }
    g_currentExceptionFrame = local_90.previous;

    iVar9 = ReportDebugMessage("E:\\__titans\\ai\\ai_plr.cpp",0x40d,0,local_EAX_119,
                               "%s","AiPlrClassTy::ExecTech");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_119,0,"E:\\__titans\\ai\\ai_plr.cpp",0x40e);
  }
  return;
}

