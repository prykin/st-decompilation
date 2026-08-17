#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::StartReceiveOrderSound
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall StartReceiveOrderSound(STGroupBoatC * this) Evidence: every machine RET purges exactly
   0 explicit stack bytes; current signature describes 4; removed trailing parameter slots have no
   listing references; ret_sites=004A865B RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall STGroupBoatC::StartReceiveOrderSound(STGroupBoatC *this)

{
  uint uVar1;
  STGameObjC *pSVar3;
  int iVar4;
  uint index;
  uint uVar5;
  undefined1 local_8 [4];

  uVar5 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar1 = *(uint *)(this->field_0029 + 0xc);
  if (uVar1 != 0) {
    index = 0;
    do {
      DArrayGetElement((DArrayTy *)this->field_0029,index,local_8);
      if (STPiece<0,2>(local_8) != 0xffff) {
        /* ST_CALLSITE[004A85F2]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
        pSVar3 = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,this->field_0024,STPiece<0,2>(local_8),CASE_1);
        if (pSVar3 == nullptr) {
          iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x172d,0,0,
                                     "%s","STGroupBoatC::StartReceiveOrderSound NULL");
          if (iVar4 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0x172e);
        }
        thunk_FUN_00493d10((int *)pSVar3);
      }
      uVar5 = uVar5 + 1;
      index = uVar5 & 0xffff;
    } while (index < uVar1);
  }
  return;
}

