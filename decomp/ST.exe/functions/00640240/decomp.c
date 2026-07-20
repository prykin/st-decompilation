
void __fastcall FUN_00640240(AnonShape_00640240_D1DBDD81 *param_1)

{
  uint *puVar1;
  
  if ((int *)param_1->field_037F != (int *)0x0) {
    FUN_006e8660(param_1->field_0211,(int *)param_1->field_037F,0,0,0,0,0,0,0);
    FUN_006e9520(param_1->field_0211,*(uint *)param_1->field_037F,0,0x640320,
                 (uint)param_1->field_037F);
    FUN_006e9720(param_1->field_0211,*(uint *)param_1->field_037F,
                 (uint)*(byte *)((int)param_1->field_037F + 0x15) * 0x100 + DAT_008032b8);
    puVar1 = (uint *)param_1->field_037F;
    FUN_006ea960(param_1->field_0211,*puVar1,(float)puVar1[1],(float)puVar1[2],49.829998);
    FUN_006eaaa0(param_1->field_0211,*(uint *)param_1->field_037F,0);
  }
  return;
}

