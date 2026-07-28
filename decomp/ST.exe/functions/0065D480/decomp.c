
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0065D2A0 -> 0065D480 @ 0065D3D6

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall FUN_0065d480(AiFltClassTy *param_1)

{
  if (param_1 != (AiFltClassTy *)0x0) {
    thunk_FUN_00668670((int)&param_1->field_0020);
    return;
  }
  thunk_FUN_00668670(0);
  return;
}

