#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_jbomb_m.Cpp
   JumpManagC::CheckSystrm
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall CheckSystrm(JumpManagC * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=00617988 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall JumpManagC::CheckSystrm(JumpManagC *this)

{
  code *pcVar1;
  DArrayTy *pDVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  bool bVar7;
  int local_8;

  pDVar2 = this->field_005E;
  iVar4 = 1;
  if (pDVar2 != nullptr) {
    uVar6 = 0;
    if (0 < (int)pDVar2->count) {
      bVar7 = pDVar2->count != 0;
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, uVar6) (runtime stride) */
        if ((bVar7) &&
           (pvVar5 = (void *)(pDVar2->elementSize * uVar6 + (int)pDVar2->data),
           pvVar5 != nullptr)) {
          if (*(int *)((int)pvVar5 + 0x18) == 0) {
            iVar4 = -2;
          }
          else {
            iVar3 = STPlaySystemC::sub_006E62D0
                              (g_playSystem_00802A38,
                               *(AnonShape_005EFAE0_B406B78B **)((int)pvVar5 + 0x1c),&local_8);
            if (iVar3 == -4) {
              iVar4 = -3;
            }
            else if (*(int *)((int)pvVar5 + 0x18) == local_8) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(int *)(local_8 + 0x8b) != *(int *)((int)pvVar5 + 0x20)) {
                iVar4 = -5;
              }
            }
            else {
              iVar4 = -4;
            }
          }
        }
        else {
          iVar4 = -1;
        }
        uVar6 = uVar6 + 1;
        pDVar2 = this->field_005E;
        bVar7 = uVar6 < pDVar2->count;
      } while ((int)uVar6 < (int)pDVar2->count);
      if (iVar4 == 0) {
        iVar4 = ReportDebugMessage("E:\\__titans\\nick\\to_jbomb_m.Cpp",0x8a,0,0,
                                   "JumpManagC::CheckSystrm CheckProblem =  %d",0);
        if (iVar4 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
    }
  }
  return;
}

