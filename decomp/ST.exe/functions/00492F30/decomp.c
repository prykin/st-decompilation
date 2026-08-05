
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00476CE0 -> 00492F30 @ 00477659; STBoatC::Capture this; stable alias EBX | 00476CE0 ->
   00492F30 @ 00477A56; STBoatC::Capture this; stable alias EBX | 00476CE0 -> 00492F30 @ 00477B01;
   STBoatC::Capture this; stable alias EBX

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __fastcall FUN_00492f30(STBoatC *param_1,undefined4 param_2)

{
  short sVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EAX;
  int iVar2;

  sVar1 = param_1->field_0607 + 1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar2 = STBoatC::sub_0048DFD0
                    (param_1,param_1->field_0603,param_1->field_0605,sVar1,param_1->field_0603,
                     param_1->field_0605,(int *)STReplaceLowWord((uint32_t)(in_EAX), (uint16_t)(sVar1)),2,
                     &param_1->field_0609,&param_1->field_060B,&param_1->field_060D);
  if (iVar2 == 0) {
    param_1->field_0609 = param_1->field_0603;
    param_1->field_060B = param_1->field_0605;
    param_1->field_060D = param_1->field_0607;
  }
  return;
}

