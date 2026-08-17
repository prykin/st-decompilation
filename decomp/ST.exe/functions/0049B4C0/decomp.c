#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpGoToDeep */

undefined4 __thiscall STGroupBoatC::GrpGoToDeep(STGroupBoatC *this,int param_1)

{
  STGroupBoatC *pSVar2;
  int iVar3;
  STBoatC *this_00;
  STGameObjC *objPtr;
  int iVar4;
  undefined4 uVar3;
  int iVar5;
  uint uVar6;
  uint uVar8;
  InternalExceptionFrame local_6c;
  uint local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  STGroupBoatC *local_1c;
  uint local_18;
  undefined1 local_14 [4];
  undefined4 local_10;
  short local_a;
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
    iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x73c,0,iVar3,"%s",
                               "STGroupBoatC::GrpGoToDeep");
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x73d);
      return 0xffffffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&local_1c->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    uVar8 = 0;
    *(undefined4 *)&local_1c->field_0x222 = *(undefined4 *)&local_1c->field_0xff;
    local_1c->field_0065 = 0;
    if (local_18 != 0) {
      uVar6 = 0;
      do {
        DArrayGetElement((DArrayTy *)pSVar2->field_0029,uVar6,local_14);
        if (STPiece<0,2>(local_14) != 0xffff) {
          this_00 = (STBoatC *)
                    /* ST_CALLSITE[0049B564]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                    STAllPlayersC::GetObjPtr
                              (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_14),CASE_1);
          if (this_00 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x720);
          }
          /* ST_CALLSITE[0049B597]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
          STFishC::sub_004162B0((STFishC *)this_00,&local_8,&local_6,&local_a);
          /* ST_CALLSITE[0049B5AF]: CALL 0x00404f6b; direct=00404F6B STBoatC::sub_00481520 */
          STBoatC::sub_00481520(this_00,(int)local_8,(int)local_6,*(int *)&pSVar2->field_0x222);
          local_28 = g_playSystem_00802A38->field_00E4;
          local_24 = 0xffff;
          local_22 = 0xffff;
          local_20 = 0xffff;
          /* ST_CALLSITE[0049B5DA]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          STBoatC::CmdToObj(this_00,CASE_1,&local_28);
        }
        uVar8 = uVar8 + 1;
        uVar6 = uVar8 & 0xffff;
      } while (uVar6 < local_18);
    }
    local_10 = 2;
  }
  uVar3 = local_10;
  if (param_1 == 2) {
    if (g_playSystem_00802A38->field_00E4 % 3 == 0) {
      uVar6 = 0;
      uVar8 = 0;
      local_10 = 0;
      uVar3 = 0;
      if (local_18 != 0) {
        do {
          DArrayGetElement((DArrayTy *)pSVar2->field_0029,uVar8,local_14);
          if (STPiece<0,2>(local_14) != 0xffff) {
            /* ST_CALLSITE[0049B655]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            objPtr = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_14),CASE_1);
            if (objPtr == nullptr) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0x732);
            }
            iVar5 = thunk_FUN_0045ff30((int)objPtr);
            if (((iVar5 != 0) || (iVar5 = thunk_FUN_0045ff10(objPtr), iVar5 == 1)) ||
               (iVar5 = thunk_FUN_0045ff10(objPtr), iVar5 == 0)) goto LAB_0049b6c1;
          }
          uVar6 = uVar6 + 1;
          uVar8 = uVar6 & 0xffff;
          if (local_18 <= uVar8) {
            g_currentExceptionFrame = local_6c.previous;
            return local_10;
          }
        } while( true );
      }
    }
    else {
LAB_0049b6c1:
      local_10 = 2;
      uVar3 = local_10;
    }
  }
  local_10 = uVar3;
  g_currentExceptionFrame = local_6c.previous;
  return local_10;
}

