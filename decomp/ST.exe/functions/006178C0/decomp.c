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
  DArrayTy *pDVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  bool bVar8;
  int local_8;

  pDVar2 = this->field_005E;
  iVar5 = 1;
  if (pDVar2 != nullptr) {
    uVar7 = 0;
    if (0 < (int)pDVar2->count) {
      bVar8 = pDVar2->count != 0;
      do {
        if ((bVar8) &&
           (pvVar6 = DArrayAt<void>(pDVar2, uVar7),
           pvVar6 != nullptr)) {
          if (STField<int>(pvVar6,0x18) == 0) {
            iVar5 = -2;
          }
          else {
            iVar3 = STPlaySystemC::sub_006E62D0
                              (g_playSystem_00802A38,
                               STField<AnonShape_005EFAE0_B406B78B *>(pvVar6,0x1c),&local_8);
            if (iVar3 == -4) {
              iVar5 = -3;
            }
            else if (STField<int>(pvVar6,0x18) == local_8) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(int *)(local_8 + 0x8b) != STField<int>(pvVar6,0x20)) {
                iVar5 = -5;
              }
            }
            else {
              iVar5 = -4;
            }
          }
        }
        else {
          iVar5 = -1;
        }
        uVar7 = uVar7 + 1;
        pDVar2 = this->field_005E;
        bVar8 = uVar7 < pDVar2->count;
      } while ((int)uVar7 < (int)pDVar2->count);
      if (iVar5 == 0) {
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

