
void __fastcall FUN_00627700(AnonShape_00627700_6F319351 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;

  if (DAT_008117bc != (undefined4 *)0x0) {
    puVar2 = local_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_10 = param_1->field_0024;
    local_e = param_1->field_0032;
    local_c = param_1->field_0262;
    if (param_1->field_02A1 == 0) {
      local_a = 0xffff;
    }
    else {
      local_a = param_1->field_02A5;
    }
    local_14 = 0x5de3;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*DAT_008117bc)(local_24);
  }
  return;
}

