#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_rab3m.cpp
   STManRub3C::AddNewRub3 */

uint __thiscall STManRub3C::AddNewRub3(STManRub3C *this,int *param_1)

{
  STManRub3C *pSVar2;
  int *piVar3;
  int iVar4;
  DArrayTy *pDVar4;
  int uVar6;
  int iVar6;
  uint uVar5;
  InternalExceptionFrame local_74;
  int local_30 [4];
  int local_20;
  int local_1c;
  int local_18;
  uint local_10;
  STManRub3C *local_c;
  int *local_8;

  local_10 = 0xffffffff;
  if (param_1 == nullptr) {
    return 0xffffffff;
  }
  local_8 = param_1;
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0);
  piVar3 = local_8;
  pSVar2 = local_c;
  if (iVar4 == 0) {
    if (local_c->field_0030[*local_8] == 0) {
      pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x20,10);
      pSVar2->field_0030[*piVar3] = (uint)pDVar4;
    }
    if (pSVar2->field_0030[*piVar3] != 0) {
      memset(local_30, 0, 0x20); /* compiler bulk-zero initialization */
      local_20 = piVar3[4];
      local_18 = piVar3[6];
      local_1c = piVar3[5];
      local_30[1] = piVar3[1];
      local_30[2] = piVar3[2];
      local_30[3] = piVar3[3];
      uVar6 = Library::DKW::TBL::DArrayAppend((DArrayTy *)pSVar2->field_0030[*piVar3],local_30);
      g_currentExceptionFrame = local_74.previous;
      return uVar6;
    }
    g_currentExceptionFrame = local_74.previous;
    return local_10;
  }
  g_currentExceptionFrame = local_74.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\nick\\to_rab3m.cpp",0x86,0,iVar4,"%s",
                             "STManRub3C::AddNewRub3");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\nick\\to_rab3m.cpp",0x88);
  return 0xffff;
}

