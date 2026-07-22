
void __fastcall FUN_0048df40(AnonShape_0048DF40_8D46D7E8 *param_1,undefined4 param_2)

{
  short sVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EAX;
  int iVar2;

  sVar1 = param_1->field_04E1 + 1;
  /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
  iVar2 = STBoatC::sub_0048DFD0
                    ((STBoatC *)param_1,param_1->field_04DD,param_1->field_04DF,sVar1,
                     param_1->field_04DD,param_1->field_04DF,
                     (int *)CONCAT22((short)((uint)in_EAX >> 0x10),sVar1),2,&param_1->field_04FC,
                     &param_1->field_04FE,&param_1->field_0500);
  if (iVar2 == 0) {
    param_1->field_04FC = param_1->field_04DD;
    param_1->field_04FE = param_1->field_04DF;
    param_1->field_0500 = param_1->field_04E1 + 1;
  }
  return;
}

