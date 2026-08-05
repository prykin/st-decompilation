#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Expl.cpp
   STExplosionC::CreateGroupPart */

int __thiscall STExplosionC::CreateGroupPart(STExplosionC *this,int param_1)

{
  STExplosionC *pSVar2;
  int iVar3;
  HoloTy *pHVar4;
  int iVar5;
  HoloTy **ppHVar6;
  InternalExceptionFrame local_50;
  STExplosionC *local_c;
  int local_8;

  iVar5 = 0;
  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pSVar2 = local_c;
  if (iVar3 == 0) {
    if (0 < param_1) {
      ppHVar6 = &local_c->field_0219;
      do {
        pHVar4 = (HoloTy *)thunk_FUN_00629010();
        *ppHVar6 = pHVar4;
        *(STExplosionC **)&pHVar4[4].field_0002 = pSVar2;
        pHVar4 = *ppHVar6;
        ppHVar6 = ppHVar6 + 1;
        *(int *)&pHVar4[4].field_0x6 = iVar5;
        local_8 = local_8 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_1);
    }
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  if (0 < local_8) {
    ppHVar6 = &local_c->field_0219;
    iVar5 = local_8;
    do {
      Library::MSVCRT::FUN_0072e2b0(*ppHVar6);
      ppHVar6 = ppHVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = ReportDebugMessage("E:\\__titans\\nick\\to_Expl.cpp",0x1f6,0,iVar3,"%s",
                             "STExplosionC::CreateGroupPart");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\nick\\to_Expl.cpp",0x1f8);
  return 0xffff;
}

