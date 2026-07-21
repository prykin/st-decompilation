#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpGoToDeep */

undefined4 __thiscall STGroupBoatC::GrpGoToDeep(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  STBoatC *this_00;
  STGameObjC *pSVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar9;
  InternalExceptionFrame local_6c;
  uint local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  STGroupBoatC *local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  undefined2 local_a;
  short local_8;
  short local_6;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_18 = *(uint *)(this->field_0029 + 0xc);
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_1c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  pSVar2 = local_1c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x73c,0,iVar3,"%s",
                               "STGroupBoatC::GrpGoToDeep");
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x73d);
      return 0xffffffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&local_1c->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    uVar9 = 0;
    *(undefined4 *)&local_1c->field_0x222 = local_1c->field_00FF;
    local_1c->field_0065 = 0;
    if (local_18 != 0) {
      uVar7 = 0;
      do {
        DArrayGetElement((DArrayTy *)pSVar2->field_0029,uVar7,&local_14);
        if ((short)local_14 != -1) {
          this_00 = (STBoatC *)
                    STAllPlayersC::GetObjPtr
                              (g_sTAllPlayers_007FA174,pSVar2->field_0024,local_14,CASE_1);
          if (this_00 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x720);
          }
          STFishC::sub_004162B0((STFishC *)this_00,&local_8,&local_6,&local_a);
          STBoatC::sub_00481520
                    (this_00,(int)local_8,(int)local_6,*(undefined4 *)&pSVar2->field_0x222);
          local_28 = PTR_00802a38->field_00E4;
          local_24 = 0xffff;
          local_22 = 0xffff;
          local_20 = 0xffff;
          STBoatC::CmdToObj(this_00,CASE_1,&local_28);
        }
        uVar9 = uVar9 + 1;
        uVar7 = uVar9 & 0xffff;
      } while (uVar7 < local_18);
    }
    local_10 = 2;
  }
  uVar6 = local_10;
  if (param_1 == 2) {
    if (PTR_00802a38->field_00E4 % 3 == 0) {
      uVar7 = 0;
      uVar9 = 0;
      local_10 = 0;
      uVar6 = 0;
      if (local_18 != 0) {
        do {
          DArrayGetElement((DArrayTy *)pSVar2->field_0029,uVar9,&local_14);
          if ((short)local_14 != -1) {
            pSVar4 = STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,pSVar2->field_0024,local_14,CASE_1);
            if (pSVar4 == (STGameObjC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0x732);
            }
            iVar3 = thunk_FUN_0045ff30((int)pSVar4);
            if (((iVar3 != 0) || (iVar3 = thunk_FUN_0045ff10((int)pSVar4), iVar3 == 1)) ||
               (iVar3 = thunk_FUN_0045ff10((int)pSVar4), iVar3 == 0)) goto LAB_0049b6c1;
          }
          uVar7 = uVar7 + 1;
          uVar9 = uVar7 & 0xffff;
          if (local_18 <= uVar9) {
            g_currentExceptionFrame = local_6c.previous;
            return local_10;
          }
        } while( true );
      }
    }
    else {
LAB_0049b6c1:
      local_10 = 2;
      uVar6 = local_10;
    }
  }
  local_10 = uVar6;
  g_currentExceptionFrame = local_6c.previous;
  return local_10;
}

