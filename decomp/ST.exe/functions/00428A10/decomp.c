#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_00428a10(uint param_1)

{
  char *text;
  int iVar1;

  if (g_cLoading_00802A58 == nullptr) {
    return 0xffffffff;
  }
  if ((int)param_1 < 0) {
    DAT_007f4e00 = -param_1;
    iVar1 = DAT_007f4e00;
    text = LoadResourceString(0x2684,g_hINSTANCE_00807618);
    /* ST_CALLSITE[00428A4A]: CALL 0x00404d8b; direct=00404D8B cLoadingTy::SetProcess */
    cLoadingTy::SetProcess(g_cLoading_00802A58,0,text,iVar1);
    /* ST_CALLSITE[00428A5B]: CALL 0x00403472; direct=00403472 cLoadingTy::SetState */
    cLoadingTy::SetState(g_cLoading_00802A58,CASE_0,0,nullptr);
    return 0;
  }
  /* ST_CALLSITE[00428A69]: CALL 0x00403472; direct=00403472 cLoadingTy::SetState */
  cLoadingTy::SetState(g_cLoading_00802A58,CASE_1,param_1,nullptr);
  return 0;
}

