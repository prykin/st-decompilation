#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::SaveTmp */

void __thiscall STAllPlayersC::SaveTmp(STAllPlayersC *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  InternalExceptionFrame local_50;
  undefined4 *local_c;
  int *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    if (iVar4 != -0x5001fff7) {
      iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x16fd,0,0,"%s",
                                 "STAllPlayersC::SaveTmp");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar4,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x16fe);
    }
    return;
  }
  if ((param_1 < 0) || (9 < param_1)) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x16d8);
  }
  uVar5 = (uint)DAT_0080874d;
  /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
  iVar4 = uVar5 * 0xa62;
  if (g_packedRecords_A62x8[uVar5].field448_0x203 == 0) {
    local_8 = &g_packedRecords_A62x8[uVar5].field332_0x163;
  }
  else if (g_packedRecords_A62x8[uVar5].field448_0x203 == 1) {
    local_8 = &g_packedRecords_A62x8[uVar5].field390_0x1b3;
  }
  else {
    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x16dd,0,0,"%s",
                               "STAllPlayersC::SaveTmp invalid panel number");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x16de);
  }
  piVar3 = local_8;
  if (*local_8 != 0) {
    local_c = (undefined4 *)(param_1 * 0x10 + 0x7f5027 + iVar4);
    if (*(DArrayTy **)((int)local_c + 10) != (DArrayTy *)0x0) {
      DArrayDestroy(*(DArrayTy **)((int)local_c + 10));
      *(undefined4 *)((int)local_c + 10) = 0;
      *local_c = 0;
    }
  }
  iVar6 = *piVar3;
  if (0x19a < iVar6) {
    if (((iVar6 == 0x1a4) || (iVar6 == 0x1ae)) || (iVar6 == 0x1b8)) goto cf_common_exit_00438FE7;
    goto LAB_00438fb0;
  }
  if (iVar6 == 0x19a) {
LAB_00438f65:
    piVar1 = (int *)(param_1 * 0x10 + 0x7f5027 + iVar4);
    *piVar1 = iVar6;
    piVar1[1] = piVar3[1];
    *(undefined2 *)((int)piVar1 + 0xe) = *(undefined2 *)((int)piVar3 + 0xe);
    Library::DKW::TBL::FUN_006afe40((int *)((int)piVar1 + 10),*(uint **)((int)piVar3 + 10));
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  if (iVar6 < 0x5b) {
    if (iVar6 == 0x5a) {
cf_common_exit_00438FE7:
      piVar1 = (int *)(param_1 * 0x10 + 0x7f5027 + iVar4);
      *piVar1 = iVar6;
      piVar1[1] = piVar3[1];
      *(short *)(piVar1 + 2) = (short)piVar3[2];
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (iVar6 == 0) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (iVar6 == 0x3c) goto LAB_00438f65;
  }
  else if (iVar6 == 0x172) goto cf_common_exit_00438FE7;
LAB_00438fb0:
  iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x16f9,0,0,"%s",
                             "STAllPlayersC::SaveTmp invalid game type");
  if (iVar4 == 0) {
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

