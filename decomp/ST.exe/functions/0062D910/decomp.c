#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_rab3m.cpp
   STManRub3C::AddNewDock */

uint __thiscall
STManRub3C::AddNewDock
          (STManRub3C *this,int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
          int param_5,undefined2 param_6,int *param_7)

{
  uint *puVar1;
  code *pcVar2;
  STManRub3C *pSVar3;
  int iVar4;
  DArrayTy *pDVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  InternalExceptionFrame local_7c;
  int local_38;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined4 local_18;
  uint local_10;
  int local_c;
  STManRub3C *local_8;

  *param_7 = 0;
  local_10 = 0xffffffff;
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0);
  pSVar3 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\nick\\to_rab3m.cpp",0x1c8,0,iVar4,"%s",
                               "STManRub3C::AddNewDock");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\nick\\to_rab3m.cpp",0x1ca);
    return 0xffff;
  }
  if (*(int *)(&local_8->field_0x50 + param_1 * 4) == 0) {
    pDVar5 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x28,10);
    *(DArrayTy **)(&pSVar3->field_0x50 + param_1 * 4) = pDVar5;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_c = *(int *)(*(int *)(&local_8->field_0x50 + param_1 * 4) + 0xc);
    uVar7 = 0;
    if (0 < local_c) {
      do {
        iVar4 = *(int *)(&local_8->field_0x50 + param_1 * 4);
        if (uVar7 < *(uint *)(iVar4 + 0xc)) {
          piVar6 = (int *)(*(int *)(iVar4 + 8) * uVar7 + *(int *)(iVar4 + 0x1c));
        }
        else {
          piVar6 = (int *)0x0;
        }
        if ((piVar6 != (int *)0x0) && (*piVar6 == param_5)) {
          piVar6[3] = 0;
          *(undefined2 *)(piVar6 + 1) = param_6;
          *(undefined2 *)((int)piVar6 + 6) = param_2;
          *(undefined2 *)(piVar6 + 2) = param_3;
          *(undefined2 *)((int)piVar6 + 10) = param_4;
          piVar6[8] = 0;
          *param_7 = 1;
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < local_c);
    }
  }
  puVar1 = *(uint **)(&pSVar3->field_0x50 + param_1 * 4);
  if ((puVar1 != (uint *)0x0) && (*param_7 == 0)) {
    memset(&local_38, 0, 0x28); /* compiler bulk-zero initialization */
    local_34 = param_6;
    local_38 = param_5;
    local_30 = param_3;
    local_32 = param_2;
    local_2e = param_4;
    local_2c = 0;
    local_18 = 0;
    uVar7 = Library::DKW::TBL::FUN_006ae1c0(puVar1,&local_38);
    g_currentExceptionFrame = local_7c.previous;
    return uVar7;
  }
  g_currentExceptionFrame = local_7c.previous;
  return local_10;
}

