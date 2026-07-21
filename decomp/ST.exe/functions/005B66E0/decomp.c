
void __fastcall FUN_005b66e0(AnonShape_005B66E0_174166E5 *param_1)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = (undefined4 *)&param_1->field_0x1d;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  param_1->field_0025 = *(undefined4 *)(param_1->field_000C + 0x14);
  param_1->field_0029 = 0;
  param_1->field_002D = 10;
  param_1->field_0031 = param_1->field_0008;
  sub_006E60A0(param_1,(undefined4 *)&param_1->field_0x1d);
  return;
}

