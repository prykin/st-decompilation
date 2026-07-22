
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0062E3A0 -> 005FB030 @ 0062E405 */

void __fastcall FUN_005fb030(AnonShape_005FB030_9C7404C6 *param_1)

{
  switch(param_1->field_02DD) {
  case 1:
    param_1->field_02EA = 1;
    param_1->field_02EE = 0;
    return;
  case 3:
  case 6:
  case 0xc:
    param_1->field_02EF = 0;
  case 2:
  case 4:
    param_1->field_02EA = 1;
    param_1->field_02EE = 1;
    return;
  case 5:
    param_1->field_02EA = 1;
    param_1->field_02EE = 1;
  case 8:
  case 9:
  case 10:
  case 0xb:
    param_1->field_02EA = 1;
    param_1->field_02EE = 1;
    return;
  default:
    return;
  }
}

