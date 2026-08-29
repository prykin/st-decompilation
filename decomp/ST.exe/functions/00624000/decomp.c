#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006239A0 -> 00624000 @ 00623A79; STMineSetC::sub_006239A0 this; stable alias ESI

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __fastcall FUN_00624000(STMineSetC *param_1)

{
  undefined4 *this;
  STMineSetC_field_02ADState SVar1;
  ushort *puVar2;

  this = &param_1->field_01D5;
  /* ST_CALLSITE[0062400E]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
  STT3DSprC::StopShow((STT3DSprC *)this,0xe);
  if (param_1->field_0352 != '\0') {
    /* ST_CALLSITE[00624021]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
    STT3DSprC::StopShow((STT3DSprC *)this,0xc);
    SVar1 = param_1->field_02AD;
    if (((SVar1 == CASE_0) || (SVar1 == CASE_1)) || (SVar1 == CASE_2)) {
      /* ST_CALLSITE[0062403C]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
      STT3DSprC::StopShow((STT3DSprC *)this,0xc);
    }
  }
  /* ST_CALLSITE[00624064]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
  puVar2 = Library::Ourlib::MFRLOAD::mfRLoad
                     (PTR_00806774,CASE_1D,(&PTR_s_expdeep_007d0354)[param_1->field_02AD],0xffffffff
                      ,0,1,0,nullptr);
  param_1->field_02CE = 0;
  param_1->field_02D2 = *(int *)puVar2;
  /* ST_CALLSITE[0062409D]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
  puVar2 = Library::Ourlib::MFRLOAD::mfRLoad
                     (PTR_00806764,CASE_1D,(&PTR_CHAR_e_007d0374)[param_1->field_02AD],0xffffffff,0,
                      1,0,nullptr);
  param_1->field_02DB = 0;
  param_1->field_02D7 = *(int *)puVar2;
  puVar2 = Library::Ourlib::MFRLOAD::mfRLoad
                     (PTR_00806774,CASE_1D,(&PTR_CHAR_e_007d0364)[param_1->field_02AD],0xffffffff,0,
                      1,0,nullptr);
  param_1->field_02E1 = 0;
  param_1->field_02E5 = *(undefined4 *)puVar2;
  return;
}

