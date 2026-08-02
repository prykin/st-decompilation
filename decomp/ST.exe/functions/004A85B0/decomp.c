#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::StartReceiveOrderSound */

void __thiscall STGroupBoatC::StartReceiveOrderSound(STGroupBoatC *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
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
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if (local_8._0_2_ != 0xffff) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        pSVar3 = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,this->field_0024,local_8._0_2_,CASE_1);
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

