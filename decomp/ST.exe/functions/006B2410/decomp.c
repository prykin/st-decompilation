
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005999C0 -> 006B2410 @ 00599A8C */

void FUN_006b2410(AnonShape_006B1B10_121F236C *param_1,uint param_2,uint param_3)

{
  uint *puVar1;

  if ((param_2 < param_1->field_01A0) &&
     (puVar1 = *(uint **)(param_1->field_01B0 + param_2 * 4), (*puVar1 & 0xc000) == 0xc000)) {
    puVar1[0x30] = param_3;
    FUN_006b23e0((int)param_1,puVar1);
  }
  return;
}

