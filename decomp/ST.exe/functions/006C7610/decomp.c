
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 005C0B00 -> 006C7610 @ 005C0BD2; literal 76 at 005C0BBE | 005C8A40 -> 006C7610 @
   005CA877; literal 103 at 005CA84D | 005E11D0 -> 006C7610 @ 005E1259; literal 0 at 005E124C |
   005E4300 -> 006C7610 @ 005E43E7; literal 0 at 005E43D1 | 005E4570 -> 006C7610 @ 005E4D1D; literal
   0 at 005E4D07 | 005E4570 -> 006C7610 @ 005E4EEC; literal 0 at 005E4ED4 | 005E4570 -> 006C7610 @
   005E5100; literal 0 at 005E50E8 | 006C7610 -> 006D7A30 @ 006C7675 */

void FUN_006c7610(AnonShape_006B5B10_E0D06CF1 *param_1,int param_2,int param_3,int param_4,
                 uint param_5,uint param_6,int param_7,byte param_8)

{
  uint uVar1;

  if (((param_7 != 0) && (param_7 * 2 <= (int)param_5)) && (param_7 * 2 <= (int)param_6)) {
    if (param_2 == 0) {
      param_2 = FUN_006b4fa0((int *)param_1);
    }
    uVar1 = (uint)param_1->field_000E * param_1->field_0004 + 0x1f >> 3 & 0x1ffffffc;
    FUN_006d7a30(((param_1->field_0008 - param_4) + -1) * uVar1 + param_2 + param_3,-uVar1,param_5,
                 param_6,param_7,param_8);
    return;
  }
  FUN_006b4170(param_1,param_2,param_3,param_4,param_5,param_6,param_8);
  return;
}

