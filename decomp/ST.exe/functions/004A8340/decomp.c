#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GetDepotForAttack */

void __thiscall
STGroupBoatC::GetDepotForAttack
          (STGroupBoatC *this,uint param_1,undefined1 *param_2,short *param_3,short *param_4,
          short *param_5,short *param_6)

{
  code *pcVar1;
  int iVar2;
  STGameObjC *pSVar3;
  int iVar4;
  uint index;
  STGroupBoatC *pSVar5;
  InternalExceptionFrame local_68;
  char local_24;
  char cStack_23;
  short sStack_22;
  undefined2 uStack_20;
  int local_1c;
  int local_18;
  STGroupBoatC *local_14;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;

  local_18 = 1000000;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_14 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  pSVar5 = local_14;
  if (iVar2 == 0) {
    *param_3 = -1;
    if ((local_14->field_01E6 != CASE_2) || (local_14->field_020E == 0)) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0x1708);
    }
    pSVar3 = STAllPlayersC::GetObjPtr(g_sTAllPlayers_007FA174,pSVar5->field_0024,param_1,CASE_1);
    STFishC::sub_004162B0((STFishC *)pSVar3,&local_10,&local_e,&local_c);
    index = 0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_1c = *(int *)(pSVar5->field_020E + 0xc);
    iVar2 = local_18;
    if (0 < local_1c) {
      do {
        DArrayGetElement((DArrayTy *)pSVar5->field_020E,index,&local_24);
        if (sStack_22 != -1) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          pSVar3 = STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,local_24,CONCAT22(uStack_20,sStack_22),
                              (int)cStack_23);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar4 = (**(code **)&pSVar3->vtable->field_0x2c)();
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if ((iVar4 == 0x3b) ||
             (iVar4 = (**(code **)&pSVar3->vtable->field_0x2c)(), pSVar5 = local_14, iVar4 == 0x60))
          {
            STFishC::sub_004162B0((STFishC *)pSVar3,&local_8,&local_6,&local_a);
            iVar4 = FUN_006aadd0((int)local_10,(int)local_e,(int)local_c,(int)local_8,(int)local_6,
                                 (int)local_a);
            pSVar5 = local_14;
            if (iVar4 < iVar2) {
              *param_2 = local_24;
              *param_3 = sStack_22;
              *param_4 = local_8;
              *param_5 = local_6;
              *param_6 = local_a;
              iVar2 = iVar4;
              local_18 = iVar4;
            }
          }
        }
        index = index + 1;
      } while ((int)index < local_1c);
    }
    g_currentExceptionFrame = local_68.previous;
    return;
  }
  g_currentExceptionFrame = local_68.previous;
  if (iVar2 != -0x5001fff7) {
    iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x171b,0,iVar2,"%s",
                               "STGroupBoatC::GetDepotForAttack");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x171c);
  }
  return;
}

