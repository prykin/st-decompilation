#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::ResetActivityFromTmp

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=45, used=0), and
   decompilation contains no value return */

void __thiscall
STAllPlayersC::ResetActivityFromTmp
          (STAllPlayersC *this,char param_1,int param_2,int param_3,int param_4)

{
  int local_EAX_45;
  int iVar3;
  int iVar2;
  int *piVar4;
  DArrayTy *pDVar5;
  uint uVar6;

  if (param_2 == 0) {
    iVar3 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x163);
  }
  else {
    if (param_2 != 1) {

      local_EAX_45 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x44d,0,0,
                                        "%s","STAllPlayersC::ResetActivityFromTmp invalid panel number");
      if (local_EAX_45 == 0) {
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar3 = STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x1B3);
  }
  piVar4 = (int *)(param_3 * 0x10 + iVar3);
  iVar3 = *piVar4;
  if (iVar3 < 0x19b) {
    if (iVar3 != 0x19a) {
      if (iVar3 < 0x5b) {
        if (iVar3 != 0x5a) {
          if (iVar3 == 0) goto LAB_0042d5ff;
          if (iVar3 != 0x3c) goto cf_common_exit_0042D5BC;
          goto LAB_0042d599;
        }
      }
      else if (iVar3 != 0x172) goto cf_common_exit_0042D5BC;
      goto LAB_0042d5e8;
    }
LAB_0042d599:
    pDVar5 = STField<DArrayTy *>(piVar4,10);
    uVar6 = 0xffff;
  }
  else {
    if (((iVar3 != 0x1a4) && (iVar3 != 0x1ae)) && (iVar3 != 0x1b8)) {
cf_common_exit_0042D5BC:

      iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x45f,0,0,"%s",
                                 "STAllPlayersC::ResetActivityFromTmp invalid type");
      if (iVar2 == 0) {
        return;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
LAB_0042d5e8:
    uVar6 = STReplaceLowWord((uint32_t)(param_4), (uint16_t)((short)piVar4[2]));
    pDVar5 = nullptr;
  }
  /* ST_CALLSITE[0042D5FA]: CALL 0x004027c0; direct=004027C0 STAllPlayersC::ResetActivityFromObjs */
  ResetActivityFromObjs
            (this,STReplaceLowByte((uint32_t)(iVar3), (uint8_t)((char)piVar4[1])),iVar3,pDVar5,uVar6,param_4);
LAB_0042d5ff:
  if (param_3 == 0) {
    if (param_2 == 0) {
      thunk_FUN_0043fc50(CASE_1,0);
      thunk_FUN_0043fc50(CASE_2,0);
      return;
    }
    if (param_2 == 1) {
      thunk_FUN_0043fc50(CASE_5,0);
      thunk_FUN_0043fc50(CASE_4,0);
    }
  }
  return;
}

