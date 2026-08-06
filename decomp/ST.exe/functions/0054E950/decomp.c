#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::AddToRep

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall STPlaySystemC::AddToRep(STPlaySystemC *this,undefined4 *param_1,uint param_2)

{
  STPlaySystemC *pSVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  byte *puVar7;
  InternalExceptionFrame local_50;
  STPlaySystemC *local_c;
  int *local_8;

  if ((param_1 != nullptr) && (param_2 != 0)) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
    if (iVar3 == 0) {
      pvVar4 = Library::DKW::LIB::MemAllocClear(param_2 + 8);
      pSVar2 = local_c;
      STField<uint>(pvVar4,4) = param_2;
      puVar7 = (byte *)((int)pvVar4 + 8);
      memmove(puVar7, param_1, param_2); /* compiler REP MOVS byte copy */
      puVar7 = (byte *)(&local_c->field_0065);
      FUN_006b9910(puVar7,(int)pvVar4);
      uVar6 = pSVar2->field_0069 + 1;
      pSVar2->field_0069 = uVar6;
      if (0xd2 < uVar6) {
        local_8 = (int *)*puVar7;
        iVar3 = FUN_006b98c0(puVar7,local_8);
        if (iVar3 != 0) {
          if (local_8 != nullptr) {
            FreeAndNull(&local_8);
          }
          pSVar2->field_0069 = pSVar2->field_0069 - 1;
        }
      }
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\tplaysys.cpp",0x482,0,iVar3,
                               "%s","STPlaySystemC::AddToRep");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\tplaysys.cpp",0x484);
  }
  return;
}

