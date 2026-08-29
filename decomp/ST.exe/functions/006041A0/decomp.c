#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Expl.cpp
   STExplosionC::CreateGroupPart */

int __thiscall STExplosionC::CreateGroupPart(STExplosionC *this,int param_1)

{
  STExplosionC *pSVar2;
  int iVar3;
  HoloTy *pHVar3;
  int iVar5;
  int iVar4;
  HoloTy **ppHVar5;
  InternalExceptionFrame local_50;
  STExplosionC *local_c;
  int local_8;

  iVar4 = 0;
  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pSVar2 = local_c;
  if (iVar3 == 0) {
    if (0 < param_1) {
      ppHVar5 = &local_c->field_0219;
      do {
        /* ST_CALLSITE[006041E3]: CALL 0x0040257c; direct=0040257C thunk_FUN_00629010; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/HoloTy; signature=__stdcall;pointer:/HoloTy */
        pHVar3 = thunk_FUN_00629010();
        *ppHVar5 = pHVar3;
        *(STExplosionC **)&pHVar3[4].field_0002 = pSVar2;
        pHVar3 = *ppHVar5;
        ppHVar5 = ppHVar5 + 1;
        *(int *)&pHVar3[4].field_0x6 = iVar4;
        local_8 = local_8 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_1);
    }
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  if (0 < local_8) {
    ppHVar5 = &local_c->field_0219;
    iVar4 = local_8;
    do {
      Library::MSVCRT::FUN_0072e2b0(*ppHVar5);
      ppHVar5 = ppHVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }

  iVar5 = ReportDebugMessage("E:\\__titans\\nick\\to_Expl.cpp",0x1f6,0,iVar3,"%s",
                             "STExplosionC::CreateGroupPart");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\nick\\to_Expl.cpp",0x1f8);
  return 0xffff;
}

