
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005C2760 -> 0070B3A0 @ 005C27B7 */

undefined4 __cdecl FUN_0070b3a0(AnonShape_GLOBAL_0081175C_57F682DD *param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < param_1->field_0023)) {
    return *(undefined4 *)(&param_1[1].field_0x4 + param_2 * 4);
  }
  return 0;
}

