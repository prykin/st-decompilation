#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Igor\to_sat.cpp
   Diagnostic line evidence: 283 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STReturnSemanticsApplier] repair_false_machine_eax_return.
   Evidence: the earlier machine return was admitted only because a self-zeroing XOR/SUB was
   misclassified as reading the call result; every resolved caller now proves an exact EAX kill;
   machine CFG audit: used=0, ignored=3, unknown=0 */

void __thiscall FUN_0058c560(void *this,int param_1,int param_2)

{
  int local_EAX_74;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;

  iVar3 = STField<int>(this,0x231);
  STField<int>(this,0x249) = param_1;
  STField<int>(this,0x24d) = param_2;
  if (iVar3 == 1) {
    STField<undefined4>(this,0x231) = 2;
    STField<int>(this,0x239) = PTR_00806724->entryCount + -1;
    STField<undefined4>(this,0x235) = 1;
    STField<undefined4>(this,0x23d) = 0x4b6;
    iVar2 = FUN_006aced8(STField<int>(this,0x251) << 7,STField<int>(this,0x255) << 7,
                         param_1 << 7,param_2 << 7);
    if (iVar2 != 0) {
      STField<undefined4>(this,0x271) = 0x3e2;
      iVar3 = ((STField<int>(this,0x251) - STField<int>(this,0x249)) * 0x8000) / iVar2;
      STField<undefined4>(this,0x265) = 0;
      STField<undefined4>(this,0x261) = 0;
      STField<int>(this,0x259) = iVar3;
      iVar4 = ((STField<int>(this,0x255) - STField<int>(this,0x24d)) * 0x8000) / iVar2;
      sVar5 = (short)((uint)(iVar3 * 0x4b6) >> 8) + 100 + STField<short>(this,0x249) * 0xc9;
      STField<short>(this,0x41) = sVar5;
      STField<int>(this,0x25d) = iVar4;
      STField<int>(this,0x269) = (int)sVar5;
      sVar5 = (short)((uint)(iVar4 * 0x4b6) >> 8) + 100 + STField<short>(this,0x24d) * 0xc9;
      STField<short>(this,0x43) = sVar5;
      STField<int>(this,0x26d) = (int)sVar5;
    }
  }
  else {
    if (iVar3 == 0) {
      STField<undefined4>(this,0x231) = 3;
      return;
    }
    if (iVar3 == 2) {
      local_EAX_74 = ReportDebugMessage("E:\\__titans\\Igor\\to_sat.cpp",0x11b,0,0,
                                        "%s","For Artem : already has athe target");
      if (local_EAX_74 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
  }
  return;
}

