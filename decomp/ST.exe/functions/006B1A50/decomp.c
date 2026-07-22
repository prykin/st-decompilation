
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004F5690 -> 006B1A50 @ 004F67A3 | 0051DDD0 -> 006B1A50 @ 0051DE24 | 00521900 ->
   006B1A50 @ 00521944 | 0052E500 -> 006B1A50 @ 0052E541 | 005381B0 -> 006B1A50 @ 0053825F |
   0053AFB0 -> 006B1A50 @ 0053B001 | 0053EB70 -> 006B1A50 @ 0053EBC2 | 0053EE30 -> 006B1A50 @
   0053EE71 | 0056FA60 -> 006B1A50 @ 005700F0 */

void FUN_006b1a50(AnonShape_006B1B10_121F236C *param_1,int param_2,undefined4 *param_3,
                 undefined4 *param_4)

{
  if (-1 < param_2) {
    *param_4 = *(undefined4 *)(&param_1->field_0x14 + param_2 * 0x10);
    param_4[1] = *(undefined4 *)(&param_1->field_0x18 + param_2 * 0x10);
    param_4[2] = *(int *)(&param_1->field_0x1c + param_2 * 0x10) -
                 *(int *)(&param_1->field_0x14 + param_2 * 0x10);
    param_4[3] = *(int *)(&param_1->field_0x20 + param_2 * 0x10) -
                 *(int *)(&param_1->field_0x18 + param_2 * 0x10);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(&param_1->field_0xc4 + param_2 * 4);
    }
  }
  return;
}

