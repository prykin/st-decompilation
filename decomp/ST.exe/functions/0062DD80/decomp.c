#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_rab3m.cpp
   STManRub3C::AddNewColl3 */

uint __thiscall
STManRub3C::AddNewColl3(STManRub3C *this,int param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  code *pcVar2;
  STManRub3C *pSVar3;
  int iVar4;
  DArrayTy *pDVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
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
    iVar8 = ReportDebugMessage("E:\\__titans\\nick\\to_rab3m.cpp",0x24d,0,iVar4,"%s",
                               "STManRub3C::AddNewColl3");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\nick\\to_rab3m.cpp",0x24f);
    return 0xffff;
  }
  if (*(int *)(&local_c->field_0x70 + param_1 * 4) == 0) {
    pDVar5 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0xc,10);
    *(DArrayTy **)(&pSVar3->field_0x70 + param_1 * 4) = pDVar5;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar4 = *(int *)(*(int *)(&local_c->field_0x70 + param_1 * 4) + 0xc);
    uVar7 = 0;
    if (0 < iVar4) {
      do {
        iVar8 = *(int *)(&local_c->field_0x70 + param_1 * 4);
        if (uVar7 < *(uint *)(iVar8 + 0xc)) {
          piVar6 = (int *)(*(int *)(iVar8 + 8) * uVar7 + *(int *)(iVar8 + 0x1c));
        }
        else {
          piVar6 = (int *)0x0;
        }
        if ((piVar6 != (int *)0x0) && (*piVar6 == param_2)) {
          local_8 = 1;
          piVar6[1] = param_3;
          piVar6[2] = param_4;
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar4);
    }
  }
  puVar1 = *(uint **)(&pSVar3->field_0x70 + param_1 * 4);
  if ((puVar1 != (uint *)0x0) && (local_8 == 0)) {
    local_1c = param_2;
    local_18 = param_3;
    local_14 = param_4;
    uVar7 = Library::DKW::TBL::FUN_006ae1c0(puVar1,&local_1c);
    g_currentExceptionFrame = local_60.previous;
    return uVar7;
  }
  g_currentExceptionFrame = local_60.previous;
  return local_10;
}

