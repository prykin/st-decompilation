
void __fastcall FUN_0065d630(AnonShape_0065DA10_8B0AA883 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_24 [8];

  thunk_FUN_0065e6c0(param_1,param_2);
  thunk_FUN_0065d600((int)param_1);
  uVar1 = *(undefined4 *)&param_1->field_0x8;
  puVar3 = local_24;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_24[2] = *(undefined4 *)(*(int *)&param_1->field_0xc + 0x14);
  local_24[3] = 0;
  local_24[4] = 10;
  local_24[5] = uVar1;
  sub_006E60A0(param_1,local_24);
  return;
}

