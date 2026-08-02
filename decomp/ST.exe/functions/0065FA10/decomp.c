
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00664960 -> 0065FA10 @ 00665541; MOVSX at 00665534 establishes signed source width 2 |
   00664960 -> 0065FA10 @ 006657D4; MOVSX at 006657C1 establishes signed source width 2 | 00664960
   -> 0065FA10 @ 00666A37; MOVSX at 00666A24 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00664960 -> 0065FA10 @ 00665541; MOVSX at 00665538 establishes signed source width 2 |
   00664960 -> 0065FA10 @ 006657D4; MOVSX at 006657C8 establishes signed source width 2 | 00664960
   -> 0065FA10 @ 00666A37; MOVSX at 00666A2B establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00664960 -> 0065FA10 @ 00665541; MOVSX at 00665534 establishes signed source width 2 |
   00664960 -> 0065FA10 @ 006657D4; MOVSX at 006657C1 establishes signed source width 2 | 00664960
   -> 0065FA10 @ 00666A37; MOVSX at 00666A24 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00664960 -> 0065FA10 @ 00665541; MOVSX at 00665530 establishes signed source width 2 |
   00664960 -> 0065FA10 @ 006657D4; MOVSX at 006657BA establishes signed source width 2 | 00664960
   -> 0065FA10 @ 00666A37; MOVSX at 00666A1D establishes signed source width 2

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=10, used=0), and
   decompilation contains no value return */

void __fastcall
FUN_0065fa10(AnonShape_0065FA10_37C5A4D3 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  STGroupBoatC *arg_1;

  if ((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
    arg_1 = thunk_FUN_0042b760(param_1->field_0024,param_1->field_007D);
    if (arg_1 != nullptr) {
      arg_1->vfunc_18(param_3,param_4,param_5);
    }
  }
  return;
}

