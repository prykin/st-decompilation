#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_rab3m.cpp
   STManRub3C::AddNewColl3 */

uint __thiscall
STManRub3C::AddNewColl3(STManRub3C *this,int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  STManRub3C *pSVar3;
  int iVar4;
  DArrayTy *pDVar5;
  int *piVar6;
  int uVar7;
  int iVar7;
  uint uVar8;
  InternalExceptionFrame local_60;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  STManRub3C *local_c;
  int local_8;

  local_10 = 0xffffffff;
  local_8 = 0;
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
  pSVar3 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\nick\\to_rab3m.cpp",0x24d,0,iVar4,"%s",
                               "STManRub3C::AddNewColl3");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\nick\\to_rab3m.cpp",0x24f);
    return 0xffff;
  }
  if (local_c->field_0030[param_1 + 0x10] == 0) {
    pDVar5 = Library::DKW::TBL::DArrayCreate(nullptr,10,0xc,10);
    pSVar3->field_0030[param_1 + 0x10] = (uint)pDVar5;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar4 = *(int *)(local_c->field_0030[param_1 + 0x10] + 0xc);
    uVar8 = 0;
    if (0 < iVar4) {
      do {
        uVar1 = local_c->field_0030[param_1 + 0x10];
        if (uVar8 < *(uint *)(uVar1 + 0xc)) {
          piVar6 = (int *)(*(int *)(uVar1 + 8) * uVar8 + *(int *)(uVar1 + 0x1c));
        }
        else {
          piVar6 = nullptr;
        }
        if ((piVar6 != nullptr) && (*piVar6 == param_2)) {
          local_8 = 1;
          piVar6[1] = param_3;
          piVar6[2] = param_4;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < iVar4);
    }
  }
  pDVar5 = (DArrayTy *)pSVar3->field_0030[param_1 + 0x10];
  if ((pDVar5 != nullptr) && (local_8 == 0)) {
    local_1c = param_2;
    local_18 = param_3;
    local_14 = param_4;
    uVar7 = Library::DKW::TBL::DArrayAppend(pDVar5,&local_1c);
    g_currentExceptionFrame = local_60.previous;
    return uVar7;
  }
  g_currentExceptionFrame = local_60.previous;
  return local_10;
}

