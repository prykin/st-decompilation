
uint __fastcall FUN_0074fef7(AnonShape_0074FEF7_7E5655A4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 local_30 [32];
  undefined1 local_10 [4];
  int *local_c;
  int *local_8;

  if (param_1->field_0010 == 0) {
    uVar1 = 0x80040234;
  }
  else {
    uVar1 = FUN_0074e337((int *)&param_1->field_0x48,param_1->field_0020,(int *)0x0,0,
                         (int *)&local_8);
    if (-1 < (int)uVar1) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar1 = (**(code **)*param_1->field_0014)(param_1->field_0014,param_1->field_0020,&local_c);
      if ((int)uVar1 < 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*local_8 + 8))(local_8);
      }
      else {
        /* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable/callback call with explicit __thiscall receiver; expected named packed member, bit extract/compose, or unaligned load */
        uVar2 = (**(code **)(*local_8 + 0x2c))
                          (local_8,local_c,param_1->field_0024,
                           CONCAT22((short)((uint)&param_1->field_0x34 >> 0x10),param_1->field_0028)
                           ,&param_1->field_0x34,param_1->field_002C,local_30,local_10);
        param_1->field_004C = uVar2;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*local_c + 8))(local_c);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*local_8 + 8))(local_8);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar1 = (**(code **)(*(int *)param_1->field_0010 + 0xc))(param_1);
        param_1->field_0010 = 0;
      }
    }
  }
  return uVar1;
}

