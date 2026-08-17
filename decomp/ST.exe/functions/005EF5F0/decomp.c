#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=9, used=0), and
   decompilation contains no value return */

void __fastcall FUN_005ef5f0(int param_1)

{
  STT3DSprC *this;

  this = (STT3DSprC *)(param_1 + 0x1d5);
  /* ST_CALLSITE[005EF640]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  STT3DSprC::SetCurFase
            (this,'\x0e',
             ((0x18 - (int)*(short *)(param_1 + 0x6c) / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18
            );
  /* ST_CALLSITE[005EF670]: CALL 0x004052fe; direct=004052FE STT3DSprC::SetCurShad */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  STT3DSprC::SetCurShad(this,'\x0e',(0x18 - (int)*(short *)(param_1 + 0x6c) / 0xf) % 0x18);
  /* ST_CALLSITE[005EF679]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
  STT3DSprC::ShowCurFase(this,'\x0e');
  return;
}

