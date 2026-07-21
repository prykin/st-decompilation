
void FUN_0074c8a9(AnonShape_0074C8A9_0F993FDC *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_24 [6];

  iVar1 = param_1->field_0090->field_0000;
  puVar3 = (undefined4 *)&stack0x0000000c;
  puVar4 = auStack_24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(iVar1 + 0x40))();
  if (iVar1 == 1) {
    FUN_007489f8(param_1->field_0090->field_008C,(undefined4 *)&stack0xfffffff4);
  }
  return;
}

