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
  uint local_8;

  uVar5 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar1 = *(uint *)(this->field_0029 + 0xc);
  if (uVar1 != 0) {
    index = 0;
    do {
      DArrayGetElement((DArrayTy *)this->field_0029,index,&local_8);
      if ((short)local_8 != -1) {
        pSVar3 = STAllPlayersC::GetObjPtr(g_sTAllPlayers_007FA174,this->field_0024,local_8,CASE_1);
        if (pSVar3 == (STGameObjC *)0x0) {
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

