#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::CreateBoat */

uint __thiscall STAllPlayersC::CreateBoat(STAllPlayersC *this,undefined4 *param_1)

{
  ushort uVar2;
  int local_EAX_40;
  int iVar3;
  uint uVar3;
  int local_EAX_166;
  int local_EAX_284;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EAX;
  int iVar5;
  uint uVar4;
  int iVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  InternalExceptionFrame local_58;
  uint local_14;
  STAllPlayersC *local_10;
  int local_c;
  STGroupC *local_8;

  local_14 = 0xffffffff;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  local_EAX_40 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  if (local_EAX_40 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x27df,0,local_EAX_40,
                               "%s","STAllPlayersC::CreateBoat");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_40,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x27e0);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    return CONCAT22(extraout_var,(undefined2)local_14);
  }
  if (7 < (uint)param_1[1]) {
    iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x27b5,0,0,"%s",
                               "STAllPlayersC::CreateBoat - incorrect player number");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException
              (-0x5001fffe,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x27b6);
  }
  if ((7 < (uint)param_1[5]) && (param_1[5] != 0xffffffff)) {
    local_EAX_166 =
         ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x27c2,0,0,"%s",
                            "STAllPlayersC::CreateBoat - incorrect player color");
    if (local_EAX_166 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException
              (-0x5001fffe,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x27c3);
  }
  if ((((*(short *)(param_1 + 7) < 0) || (g_worldGrid.sizeX <= *(short *)(param_1 + 7))) ||
      (STField<short>(param_1,0x1e) < 0)) ||
     (((g_worldGrid.sizeY <= STField<short>(param_1,0x1e) || (*(short *)(param_1 + 8) < 0)) ||
      (g_worldGrid.sizeZ <= *(short *)(param_1 + 8))))) {
    local_EAX_284 =
         ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x27c8,0,0,"%s",
                            "STAllPlayersC::CreateBoat - incorrect position");
    if (local_EAX_284 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException
              (-0x5001fff5,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x27c9);
  }
  *param_1 = 0x14;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  if (param_1[5] == -1) {
    param_1[5] = param_1[1];
  }
  local_8 = (STGroupC *)thunk_FUN_0042b760(((char *)param_1)[1],*(ushort *)(param_1 + 9));
  if ((STGroupBoatC *)local_8 == nullptr) {
    uVar2 = thunk_FUN_00435850(((char *)param_1)[1],0,(int *)&local_8);
    *(ushort *)(param_1 + 9) = uVar2;
    if (local_8 == nullptr) {
      RaiseInternalException
                (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                 0x27d8);
    }
  }
  /* ST_CALLSITE[0044578E]: CALL 0x00401bc2; direct=00401BC2 STPlaySystemC::CreateGameObject */
  STPlaySystemC::CreateGameObject(g_playSystem_00802A38,0x14,0,&local_c,param_1,0);
  iVar5 = local_c;
  if (local_c == 0) {
    RaiseInternalException
              (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x27db);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    iVar5 = extraout_EAX;
  }
  /* ST_CALLSITE[004457C2]: CALL 0x0040340e; direct=0040340E STGroupC::AddObj */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar4 = STGroupC::AddObj(local_8,STReplaceLowWord((uint32_t)(iVar5), (uint16_t)(*(undefined2 *)(local_c + 0x32))),0);
  g_currentExceptionFrame = local_58.previous;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return STReplaceLowWord((uint32_t)(uVar4), (uint16_t)(*(undefined2 *)(local_c + 0x32)));
}

