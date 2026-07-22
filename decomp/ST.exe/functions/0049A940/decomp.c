#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpMove */

undefined4 __thiscall STGroupBoatC::GrpMove(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  STBoatC *this_00;
  int iVar4;
  undefined4 uVar5;
  uint index;
  uint uVar7;
  InternalExceptionFrame local_58;
  STGroupBoatC *local_14;
  uint local_10;
  uint local_c;
  uint local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_10 = *(uint *)(this->field_0029 + 0xc);
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  pSVar2 = local_14;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      memset(&local_14->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
      uVar7 = 0;
      local_14->field_0065 = 0;
      local_8 = g_playSystem_00802A38->field_00E4;
      if (local_10 != 0) {
        index = 0;
        do {
          DArrayGetElement((DArrayTy *)pSVar2->field_0029,index,&local_c);
          if ((short)local_c != -1) {
            this_00 = (STBoatC *)
                      STAllPlayersC::GetObjPtr
                                (g_allPlayers_007FA174,pSVar2->field_0024,local_c,CASE_1);
            if (this_00 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0x65e);
            }
            STBoatC::CmdToObj(this_00,CASE_3,&local_8);
          }
          uVar7 = uVar7 + 1;
          index = uVar7 & 0xffff;
        } while (index < local_10);
      }
    }
    g_currentExceptionFrame = local_58.previous;
    return 2;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x665,0,iVar3,"%s",
                             "STGroupBoatC::GrpMove");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x666);
  return 0xffffffff;
}

