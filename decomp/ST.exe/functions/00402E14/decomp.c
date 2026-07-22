
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0064CD80 -> 00402E14 @ 0064CF3E */

void __fastcall FUN_00402e14(AiEventClassTy *param_1)

{
  AnonShape_0065D030_CB0F82F0 *pAVar1;

  if (param_1 == (AiEventClassTy *)0x0) {
    pAVar1 = (AnonShape_0065D030_CB0F82F0 *)0x0;
  }
  else {
    pAVar1 = (AnonShape_0065D030_CB0F82F0 *)&param_1->field_008C;
  }
  thunk_FUN_0065d030(pAVar1);
  if (param_1->field_05B3 != (DArrayTy *)0x0) {
    FUN_006b5570(param_1->field_05B3);
    param_1->field_05B3 = (DArrayTy *)0x0;
  }
  return;
}

