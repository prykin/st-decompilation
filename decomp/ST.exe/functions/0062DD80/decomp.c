#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_rab3m.cpp
   STManRub3C::AddNewColl3 */

uint __thiscall
STManRub3C::AddNewColl3(STManRub3C *this,int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  code *pcVar3;
  STManRub3C *pSVar4;
  int iVar5;
  DArrayTy *pDVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
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
  iVar5 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
  pSVar4 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\nick\\to_rab3m.cpp",0x24d,0,iVar5,"%s",
                               "STManRub3C::AddNewColl3");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\nick\\to_rab3m.cpp",0x24f);
    return 0xffff;
  }
  if (local_c->field_0030[param_1 + 0x10] == 0) {
    pDVar6 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0xc,10);
    pSVar4->field_0030[param_1 + 0x10] = (uint)pDVar6;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar5 = *(int *)(local_c->field_0030[param_1 + 0x10] + 0xc);
    uVar8 = 0;
    if (0 < iVar5) {
      do {
        uVar1 = local_c->field_0030[param_1 + 0x10];
        if (uVar8 < *(uint *)(uVar1 + 0xc)) {
          piVar7 = (int *)(*(int *)(uVar1 + 8) * uVar8 + *(int *)(uVar1 + 0x1c));
        }
        else {
          piVar7 = (int *)0x0;
        }
        if ((piVar7 != (int *)0x0) && (*piVar7 == param_2)) {
          local_8 = 1;
          piVar7[1] = param_3;
          piVar7[2] = param_4;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < iVar5);
    }
  }
  puVar2 = (uint *)pSVar4->field_0030[param_1 + 0x10];
  if ((puVar2 != (uint *)0x0) && (local_8 == 0)) {
    local_1c = param_2;
    local_18 = param_3;
    local_14 = param_4;
    uVar8 = Library::DKW::TBL::FUN_006ae1c0(puVar2,&local_1c);
    g_currentExceptionFrame = local_60.previous;
    return uVar8;
  }
  g_currentExceptionFrame = local_60.previous;
  return local_10;
}

