
void __fastcall FUN_00492fc0(AnonShape_00492FC0_E6F586EF *param_1)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EAX;
  STGameObjC *pSVar1;
  int iVar2;

  if ((param_1->field_045D == 9) && (param_1->field_0611 == 3)) {
    /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
    pSVar1 = STAllPlayersC::GetObjPtr
                       (g_sTAllPlayers_007FA174,param_1->field_05FC,
                        CONCAT22((short)((uint)in_EAX >> 0x10),param_1->field_05FD),CASE_1);
    if ((pSVar1 != (STGameObjC *)0x0) && (pSVar1->field_0018 == param_1->field_05FF)) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)&pSVar1->vtable[1].field_0x38)(param_1->field_0024);
      if (iVar2 != 0) {
        thunk_FUN_004cd450((AnonShape_004CC900_31EE9CAA *)pSVar1);
      }
    }
  }
  return;
}

