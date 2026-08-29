#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0070C900 -> 007527A0 @ 0070C965 | 0070C900 -> 00752CF0 @ 0070C94A

   [STTypeFamilyApplier] SOURCE_FUNCTION_FAMILY.
   Evidence: one script-owned pointer shape is anchored by one library source basename, multiple
   semantic function names, and exact first-argument call flow */

undefined4 * __cdecl
FUN_0070c900(RecoveredSourceFamily_dibcopy *param_1,uint *param_2,char param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  InternalExceptionFrame local_4c;
  uint local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;

  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    if (param_4 < 0) {
      puVar4 = &local_8;
      iVar3 = -1 - param_4;

      iVar1 = FUN_006b4fa0((RecoveredRecord_006B4FA0_DAC3A217 *)param_1);
      /* ST_CALLSITE[0070C94A]: CALL 0x00752cf0; direct=00752CF0 FUN_00752cf0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/undefined4; signature=__stdcall;pointer:/undefined4;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredSourceFamily_dibcopy;/int;/int;/char;pointer:/uint */
      puVar2 = FUN_00752cf0(param_1,iVar1,iVar3,param_3,puVar4);
    }
    else {
      puVar4 = &local_8;

      iVar1 = FUN_006b4fa0((RecoveredRecord_006B4FA0_DAC3A217 *)param_1);

      puVar2 = FUN_007527a0(param_1,iVar1,param_4,param_3,puVar4);
    }
    if (param_2 != nullptr) {
      *param_2 = local_8;
    }
    g_currentExceptionFrame = local_4c.previous;
    return puVar2;
  }
  g_currentExceptionFrame = local_4c.previous;
  return nullptr;
}

