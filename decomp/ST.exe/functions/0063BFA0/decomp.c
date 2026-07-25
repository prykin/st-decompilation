
/* [STReturnSemanticsApplier] typed_pointer_return.
   Evidence: all 1 value-return path(s) forward Listing variable param_1 with evidence-backed
   structure /SubmarineTitans/Recovered/PointerShapes/AnonShape_0063BFA0_2C9DA96E (current recovered
   extent=888) */

AnonShape_0063BFA0_2C9DA96E * __fastcall FUN_0063bfa0(AnonShape_0063BFA0_2C9DA96E *param_1)

{
  STGameObjC::STGameObjC((STGameObjC *)param_1);
  thunk_FUN_004ab810((AnonShape_004AB810_8E5693D5 *)&param_1->field_01D5);
  param_1->field_01D5 = &VTable_0079D49C;
  param_1->field_0292 = 0;
  param_1->field_029A = 0;
  param_1->field_029F = 0;
  param_1->field_0336 = 0;
  *(VTable_0079D33C **)param_1 = &VTable_0079D33C;
  param_1->field_033A = 0xffffffff;
  param_1->field_0353 = 0xffffffff;
  param_1->field_0363 = 0xffffffff;
  param_1->field_0373 = 0xffffffff;
  param_1->field_0265 = 4;
  return param_1;
}

