#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::ReplaceObject
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0043553B MOVSX ECX,byte ptr [EBP + 0x8] | 00435596 MOVSX
   EAX,byte ptr [EBP + 0x8]
   [STAbiConsistencyApplier] stack_parameter_width_revert target=parameter:1: parameter=/undefined4
   Evidence: previous automatic narrow-width proof no longer qualifies; restoring generated baseline
   /undefined4
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/char
   previous_type=/undefined4 Evidence: restoring an automation-owned narrow ABI from its exact
   surviving MOVSX/MOVZX machine anchor; downstream prototype churn is not contradictory width
   evidence */

void __thiscall
STAllPlayersC::ReplaceObject(STAllPlayersC *this,char param_1,undefined4 param_2,undefined4 param_3)

{
  DArrayTy *pDVar1;
  DArrayOf_STGameObjCPtr *pDVar2;
  int iVar4;
  int iVar5;
  DArrayOf_STGameObjCPtr **ppDVar4;
  uint uVar5;
  uint index;
  STGameObjC **ppSVar6;
  dword dVar7;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000005;
  InternalExceptionFrame local_64;
  DArrayTy *local_20 [3];
  dword local_14;
  DArrayTy *local_10;
  void *local_c;
  uint local_8;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;

  iVar4 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_64.previous;
    if (iVar4 != -0x5001fff7) {

      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x117c,0,iVar4,
                                 "%s","STAllPlayersC::ReplaceObject");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar4,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x117d);
    }
    return;
  }
  local_10 = nullptr;
  do {
    uVar5 = (uint)DAT_0080874d;
    if ((*(int *)((int)&g_packedRecords_A62x8[uVar5].field201_0x207 + (int)local_10) == 0x19a) &&
       (*(int *)((int)&g_packedRecords_A62x8[uVar5].field202_0x20b + (int)local_10) == (int)param_1)
       ) {
      pDVar1 = *(DArrayTy **)((int)&g_packedRecords_A62x8[uVar5].field204_0x211 + (int)local_10);
      uVar5 = 0;
      dVar7 = pDVar1->count;
      if (0 < (int)dVar7) {
        do {

          DArrayGetElement(pDVar1,uVar5,&local_8);
          if ((short)local_8 == (short)param_2) {
            local_8 = param_3;

            Library::DKW::TBL::DArrayPut(pDVar1,uVar5,&local_8);
            break;
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)dVar7);
      }
    }
    local_10 = (DArrayTy *)((int)local_10 + 0x10);
  } while ((int)local_10 < 0x91);
  local_10 = (DArrayTy *)g_packedRecords_A62x8[param_1].field1976_0x9f6;
  if (((local_10 != nullptr) && (local_14 = local_10->count, local_14 != 0)) &&
     (uVar5 = 0, 0 < (int)local_14)) {
    do {

      DArrayGetElement(local_10,uVar5,local_20);
      if (local_20[0] != nullptr) {
        dVar7 = local_20[0]->count;
        index = 0;
        if (0 < (int)dVar7) {
          do {

            DArrayGetElement(local_20[0],index,&local_8);
            if ((short)local_8 == (short)param_2) {

              Library::DKW::TBL::DArrayPut(local_20[0],index,&param_3);
              break;
            }
            index = index + 1;
          } while ((int)index < (int)dVar7);
        }
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)local_14);
  }
  local_10 = (DArrayTy *)&g_packedRecords_A62x8[0].field2_0x5;
  do {
    pDVar1 = *(DArrayTy **)local_10;
    uVar5 = 0;
    dVar7 = pDVar1->count;
    if (0 < (int)dVar7) {
      do {

        DArrayGetElement(pDVar1,uVar5,&local_c);
        if (local_c != nullptr) {
          thunk_FUN_004a8220(local_c,param_1,(short)param_2,(ushort)param_3);
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)dVar7);
    }
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    local_10 = (DArrayTy *)((int)local_10 + 0xa62);
  } while ((int)local_10 < 0x7fa135);
  ppDVar4 = &g_packedRecords_A62x8[0].field3_0x9;
  do {
    pDVar2 = *ppDVar4;
    if (((pDVar2 != nullptr) && (dVar7 = pDVar2->count, dVar7 != 0)) &&
       (ppSVar6 = pDVar2->data, 0 < (int)dVar7)) {
      do {
        if (*ppSVar6 != nullptr) {
          /* ST_CALLSITE[0043569B]: CALL dword ptr [EAX + 0x8c] */
          (*(*ppSVar6)->vtable->vfunc_8C)(_param_1,param_2,param_3);
        }
        ppSVar6 = ppSVar6 + 1;
        dVar7 = dVar7 - 1;
      } while (dVar7 != 0);
    }
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    ppDVar4 = (DArrayOf_STGameObjCPtr **)((int)ppDVar4 + 0xa62);
  } while ((int)ppDVar4 < 0x7fa139);
  g_currentExceptionFrame = local_64.previous;
  return;
}

