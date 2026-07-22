#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpMove */

undefined4 __thiscall STGroupBoatC::GrpMove(STGroupBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  STGroupC *this_00;
  int iVar4;
  DArrayTy *array;
  STBoatC *this_01;
  STGameObjC *objPtr;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  InternalExceptionFrame local_64;
  uint local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  STGroupC *local_14;
  uint local_10;
  uint local_c;
  undefined4 local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_10 = *(uint *)(this->field_0029 + 0xc);
  uVar8 = 0;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_14 = (STGroupC *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  this_00 = local_14;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x642,0,iVar4,"%s",
                               "STGroupBoatC::GrpMove");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x643);
    return 0xffffffff;
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&local_14[2].field_0xf, 0, 0x54); /* compiler bulk-zero initialization */
    sVar1 = *(short *)((int)&local_14[3].field_0029 + 1);
    sVar2 = *(short *)((int)&local_14[3].field_0027 + 1);
    local_14[1].vtable = (int)*(short *)((int)&local_14[3].field_0025 + 1);
    uVar6 = *(undefined4 *)((int)&local_14[3].field_0029 + 3);
    *(int *)&local_14[1].field_0x8 = (int)sVar1;
    *(undefined4 *)((int)&local_14[1].field_0027 + 1) = 0;
    *(int *)&local_14[1].field_0x4 = (int)sVar2;
    *(undefined4 *)((int)&local_14[0xc].field_0031 + 1) = uVar6;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    array = (DArrayTy *)STGroupC::GetGroupContent(local_14,unaff_EDI);
    InitWay((STGroupBoatC *)this_00,array,this_00[1].vtable,*(int *)&this_00[1].field_0x4,
            *(int *)&this_00[1].field_0x8);
    DArrayDestroy(array);
    local_20 = g_playSystem_00802A38->field_00E4;
    local_1c = 0xffff;
    local_1a = 0xffff;
    local_18 = 0xffff;
    if (local_10 != 0) {
      uVar7 = 0;
      do {
        DArrayGetElement((DArrayTy *)this_00->field_0029,uVar7,&local_c);
        if ((short)local_c != -1) {
          this_01 = (STBoatC *)
                    STAllPlayersC::GetObjPtr
                              (g_allPlayers_007FA174,this_00->field_0024,local_c,CASE_1);
          if (this_01 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x629);
          }
          STBoatC::CmdToObj(this_01,CASE_1,&local_20);
        }
        uVar8 = uVar8 + 1;
        uVar7 = uVar8 & 0xffff;
      } while (uVar7 < local_10);
    }
    local_8 = 2;
  }
  if (param_1 == 2) {
    if (g_playSystem_00802A38->field_00E4 % 3 == 0) {
      uVar7 = 0;
      local_8 = 0;
      uVar8 = 0;
      if (local_10 != 0) {
        do {
          DArrayGetElement((DArrayTy *)this_00->field_0029,uVar8,&local_c);
          if ((short)local_c != -1) {
            objPtr = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,this_00->field_0024,local_c,CASE_1);
            if (objPtr == (STGameObjC *)0x0) {
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
          uVar7 = uVar7 + 1;
          uVar8 = uVar7 & 0xffff;
          if (local_10 <= uVar8) {
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

