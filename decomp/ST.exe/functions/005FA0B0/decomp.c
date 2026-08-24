#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005F5F20 -> 005FA0B0 @ 005F6290

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall FUN_005fa0b0(STColl3C *param_1)

{
  STColl3CVTable_at_1D5 **this;
  uint uVar1;

  this = &param_1->vtable_at_1d5;
  uVar1 = ((0x18 - (int)param_1->field_006C / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18;
  /* ST_CALLSITE[005FA0FE]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
  STT3DSprC::SetCurFase((STT3DSprC *)this,'\x0e',uVar1);
  /* ST_CALLSITE[005FA108]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
  STT3DSprC::SetCurFase((STT3DSprC *)this,'\f',uVar1);
  /* ST_CALLSITE[005FA138]: CALL 0x004052fe; direct=004052FE STT3DSprC::SetCurShad */
  STT3DSprC::SetCurShad((STT3DSprC *)this,'\x0e',(0x18 - (int)param_1->field_006C / 0xf) % 0x18);
  /* ST_CALLSITE[005FA141]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
  STT3DSprC::ShowCurFase((STT3DSprC *)this,'\x0e');
  return;
}

