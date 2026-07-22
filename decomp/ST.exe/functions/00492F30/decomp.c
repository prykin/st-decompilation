
void __fastcall FUN_00492f30(AnonShape_00492F30_E8F69762 *param_1,undefined4 param_2)

{
  short sVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EAX;
  int iVar2;

  sVar1 = param_1->field_0607 + 1;
  /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
  iVar2 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0048DFD0::sub_0048DFD0
                    ((AnonReceiver_0048DFD0 *)param_1,param_1->field_0603,param_1->field_0605,sVar1,
                     param_1->field_0603,param_1->field_0605,
                     (int *)CONCAT22((short)((uint)in_EAX >> 0x10),sVar1),2,&param_1->field_0609,
                     &param_1->field_060B,&param_1->field_060D);
  if (iVar2 == 0) {
    param_1->field_0609 = param_1->field_0603;
    param_1->field_060B = param_1->field_0605;
    param_1->field_060D = param_1->field_0607;
  }
  return;
}

