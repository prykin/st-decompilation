#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::PrepareAFT

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall
SettMapMTy::PrepareAFT
          (SettMapMTy *this,RecoveredRecordView_005D4990_99479A9B *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar3;
  uint uVar4;
  byte *puVar5;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  if ((param_1 != nullptr) && (param_2 != nullptr)) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;

    iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    if (iVar2 == 0) {
      if (*param_2 != 0xffffffff) {
        uVar4 = *(uint *)&(local_8->array_00BC[0xc].field_01DB)->field_0x6a6;
        puVar5 = (byte *)param_1->field_0008;
        memset(puVar5, 0, uVar4); /* compiler bulk-zero initialization */
        uVar4 = *param_2;
        iVar1 = param_1->field_0008;
        uVar3 = 0;
        param_1->field_0004 = uVar4;
        if (uVar4 != 0) {
          do {
            param_2 = param_2 + 1;
            if (*param_2 < *(uint *)&(local_8->array_00BC[0xc].field_01DB)->field_0x6a6) {
              *(undefined1 *)(*param_2 + iVar1) = 1;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < (uint)param_1->field_0004);
        }
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      uVar4 = *(uint *)&(local_8->array_00BC[0xc].field_01DB)->field_0x6a6;
      puVar5 = (byte *)param_1->field_0008;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = 0x1010101;
        puVar5 = (byte *)(puVar5 + 1);
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar5 = 1;
        puVar5 = (byte *)((int)puVar5 + 1);
      }
      param_1->field_0004 = *(undefined4 *)&(local_8->array_00BC[0xc].field_01DB)->field_0x6a6;
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;

    iVar3 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x9af,0,iVar2,"%s"
                               ,"SettMapMTy::PrepareAFT");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,"E:\\__titans\\Start\\settmobj.cpp",0x9af);
  }
  return;
}

