#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::IsAgAtt
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined4
   __thiscall IsAgAtt(STGroupBoatC * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=004A8853 RET | 004A885C RET */

undefined4 __thiscall STGroupBoatC::IsAgAtt(STGroupBoatC *this)

{
  uint uVar1;
  STGameObjC *pSVar3;
  int iVar4;
  undefined4 uVar5;
  uint index;
  uint uVar6;
  undefined1 local_8 [4];

  uVar6 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar1 = *(uint *)(this->field_0029 + 0xc);
  if (uVar1 != 0) {
    index = 0;
    do {
      DArrayGetElement((DArrayTy *)this->field_0029,index,local_8);
      if (STPiece<0,2>(local_8) != 0xffff) {
        pSVar3 = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,this->field_0024,STPiece<0,2>(local_8),CASE_1);
        if (pSVar3 == nullptr) {
          iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x1758,0,0,
                                     "%s","STGroupBoatC::IsAgAtt");
          if (iVar4 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0x1759);
        }
        if (pSVar3->field_07EA == 0) {
          return 0;
        }
      }
      uVar6 = uVar6 + 1;
      index = uVar6 & 0xffff;
    } while (index < uVar1);
  }
  return 1;
}

