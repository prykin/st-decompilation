
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0052D370 -> 006B2800 @ 0052D53C | 0052D690 -> 006B2800 @ 0052D7A8 | 0052D690 ->
   006B2800 @ 0052D7E9 | 0052D980 -> 006B2800 @ 0052DA55 | 0052D980 -> 006B2800 @ 0052DA96 |
   0052DB90 -> 006B2800 @ 0052DC56 | 0052DD20 -> 006B2800 @ 0052E158 | 0052DD20 -> 006B2800 @
   0052E199 | 005449B0 -> 006B2800 @ 00544CE1 | 005449B0 -> 006B2800 @ 0054500E | 005449B0 ->
   006B2800 @ 00546028 | 005449B0 -> 006B2800 @ 005460BB | 005999C0 -> 006B2800 @ 00599AA9 |
   005AACB0 -> 006B2800 @ 005AADE6 | 005AACB0 -> 006B2800 @ 005AAE05 | 005E1330 -> 006B2800 @
   005E1E3B | 005E1330 -> 006B2800 @ 005E21BE | 005E1330 -> 006B2800 @ 005E281E */

void FUN_006b2800(AnonShape_006B1B10_121F236C *param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;

  if ((param_2 < param_1->field_01A0) &&
     (puVar1 = *(uint **)(param_1->field_01B0 + param_2 * 4), (*puVar1 & 0xc000) == 0xc000)) {
    puVar1[0xe] = param_3;
    puVar1[0xc] = param_3;
    puVar1[8] = param_3;
    puVar1[0xf] = param_4;
    puVar1[0xd] = param_4;
    puVar1[9] = param_4;
    FUN_006b23e0((int)param_1,puVar1);
  }
  return;
}

