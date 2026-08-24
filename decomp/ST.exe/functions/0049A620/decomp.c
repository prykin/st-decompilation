#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpMove */

undefined4 __thiscall STGroupBoatC::GrpMove(STGroupBoatC *this,int param_1)

{
  ushort uVar2;
  STGroupBoatC *this_00;
  int iVar2;
  DArrayTy *array;
  STBoatC *this_01;
  STGameObjC *objPtr;
  int iVar3;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  InternalExceptionFrame local_64;
  uint local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  STGroupBoatC *local_14;
  uint local_10;
  undefined1 local_c [4];
  undefined4 local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_10 = *(uint *)(this->field_0029 + 0xc);
  uVar6 = 0;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_14 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  this_00 = local_14;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x642,0,iVar2,"%s",
                               "STGroupBoatC::GrpMove");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x643);
    return 0xffffffff;
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&local_14->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    local_14->field_003D = (int)local_14->field_00DD;
    uVar2 = local_14->field_00E5;
    local_14->field_0045 = (int)*(short *)&local_14->field_0xe1;
    local_14->field_0065 = 0;
    local_14->field_0041 = (int)local_14->field_00DF;
    *(undefined2 *)&local_14->field_0x30e = *(undefined2 *)&local_14->field_0xe3;
    *(undefined2 *)&local_14->field_0x310 = uVar2;
    /* ST_CALLSITE[0049A6B0]: CALL 0x00402db5; direct=00402DB5 STGroupC::GetGroupContent */
    array = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)local_14);
    /* ST_CALLSITE[0049A6CD]: CALL 0x00405d7b; direct=00405D7B STGroupBoatC::InitWay */
    InitWay(this_00,array,this_00->field_003D,this_00->field_0041,this_00->field_0045);
    DArrayDestroy(array);
    local_20 = g_playSystem_00802A38->field_00E4;
    local_1c = 0xffff;
    local_1a = 0xffff;
    local_18 = 0xffff;
    if (local_10 != 0) {
      uVar5 = 0;
      do {
        DArrayGetElement((DArrayTy *)this_00->field_0029,uVar5,local_c);
        if (STPiece<0,2>(local_c) != 0xffff) {
          this_01 = (STBoatC *)
                    /* ST_CALLSITE[0049A721]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                    STAllPlayersC::GetObjPtr
                              (g_allPlayers_007FA174,this_00->field_0024,STPiece<0,2>(local_c),CASE_1);
          if (this_01 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x629);
          }
          /* ST_CALLSITE[0049A74F]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          STBoatC::CmdToObj(this_01,CASE_1,&local_20);
        }
        uVar6 = uVar6 + 1;
        uVar5 = uVar6 & 0xffff;
      } while (uVar5 < local_10);
    }
    local_8 = 2;
  }
  if (param_1 == 2) {
    if (g_playSystem_00802A38->field_00E4 % 3 == 0) {
      uVar5 = 0;
      local_8 = 0;
      uVar6 = 0;
      if (local_10 != 0) {
        do {
          DArrayGetElement((DArrayTy *)this_00->field_0029,uVar6,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[0049A7C6]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            objPtr = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,this_00->field_0024,STPiece<0,2>(local_c),CASE_1);
            if (objPtr == nullptr) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0x638);
            }
            iVar4 = thunk_FUN_0045ff30((int)objPtr);
            if (iVar4 != 0) goto cf_common_exit_0049A832;
            iVar4 = thunk_FUN_0045ff10(objPtr);
            if (iVar4 == 1) goto cf_common_exit_0049A832;
            iVar4 = thunk_FUN_0045ff10(objPtr);
            if (iVar4 == 0) goto cf_common_exit_0049A832;
          }
          uVar5 = uVar5 + 1;
          uVar6 = uVar5 & 0xffff;
          if (local_10 <= uVar6) {
            g_currentExceptionFrame = local_64.previous;
            return local_8;
          }
        } while( true );
      }
    }
    else {
cf_common_exit_0049A832:
      local_8 = 2;
    }
  }
  g_currentExceptionFrame = local_64.previous;
  return local_8;
}

