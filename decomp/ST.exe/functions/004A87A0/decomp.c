#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::IsAgAtt */

undefined4 __thiscall STGroupBoatC::IsAgAtt(STGroupBoatC *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  STGameObjC *pSVar3;
  int iVar4;
  undefined4 uVar5;
  uint index;
  uint uVar6;
  uint local_8;

  uVar6 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar1 = *(uint *)(this->field_0029 + 0xc);
  if (uVar1 != 0) {
    index = 0;
    do {
      DArrayGetElement((DArrayTy *)this->field_0029,index,&local_8);
      if ((short)local_8 != -1) {
        pSVar3 = STAllPlayersC::GetObjPtr(g_sTAllPlayers_007FA174,this->field_0024,local_8,CASE_1);
        if (pSVar3 == (STGameObjC *)0x0) {
          iVar4 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1758,0,0,
                                     &DAT_007a4ccc,s_STGroupBoatC__IsAgAtt_007ac564);
          if (iVar4 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c
                     ,0x1759);
        }
        if (*(int *)&pSVar3[4].field_0xa6 == 0) {
          return 0;
        }
      }
      uVar6 = uVar6 + 1;
      index = uVar6 & 0xffff;
    } while (index < uVar1);
  }
  return 1;
}

