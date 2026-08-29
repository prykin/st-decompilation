#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=9, used=0), and
   decompilation contains no value return */

void __fastcall FUN_005ef5f0(RecoveredRecord_005EF5F0_8C51B92F *param_1)

{
  byte *this;
  this = &param_1[4].field_0x1d;
  /* ST_CALLSITE[005EF640]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
  STT3DSprC::SetCurFase
            ((STT3DSprC *)this,'\x0e',
             ((0x18 - (int)param_1->field_006C / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18);
  /* ST_CALLSITE[005EF670]: CALL 0x004052fe; direct=004052FE STT3DSprC::SetCurShad */
  STT3DSprC::SetCurShad((STT3DSprC *)this,'\x0e',(0x18 - (int)param_1->field_006C / 0xf) % 0x18);
  /* ST_CALLSITE[005EF679]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
  STT3DSprC::ShowCurFase((STT3DSprC *)this,'\x0e');
  return;
}

