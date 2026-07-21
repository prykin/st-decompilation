
void __thiscall FUN_005d00b0(void *this,AnonShape_005D00B0_9E7CC102 *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_1a;
  undefined4 local_19;
  undefined1 local_15;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puVar1 = param_1->field_0050;
  puVar3 = &local_64;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_64._3_1_ = param_1->field_0003;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_64._2_1_ = param_1->field_0002;
  local_60 = 1;
  Library::DKW::TBL::FUN_006afe40(&local_14,puVar1);
  local_10 = param_1->field_0054;
  local_1a = param_1->field_004A;
  local_c = param_1->field_0058;
  local_8 = param_1->field_005C;
  local_19 = 0;
  local_15 = 0;
  Library::DKW::TBL::FUN_006b11d0(*(uint **)((int)this + 0x1f84),param_2,&local_64);
  return;
}

