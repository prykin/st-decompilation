
void FUN_0075d0b0(AnonShape_0075D0B0_63617DB8 *param_1)

{
  AnonNested_0075D0B0_019E_9C9AA260 *pAVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_stack_00000014;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *in_stack_00000018;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_stack_0000001c;

  pAVar1 = param_1->field_019E;
  if (pAVar1->field_0018 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar2 = (**(code **)(*(int *)param_1 + 0x1c))
                      (param_1,pAVar1->field_0008,pAVar1->field_0014,pAVar1->field_0010,0);
    pAVar1->field_000C = uVar2;
  }
  uVar4 = pAVar1->field_0010 - pAVar1->field_0018;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uVar3 = in_stack_0000001c - *in_stack_00000018;
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  uVar3 = *(int *)&param_1->field_0x6c - pAVar1->field_0014;
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  /* ST_PSEUDO[unresolved_register_input,raw_indirect_call]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(param_1->field_01BA + 4))
            (param_1,pAVar1->field_000C + pAVar1->field_0018 * 4,
             in_stack_00000014 + *in_stack_00000018 * 4,uVar4);
  *in_stack_00000018 = *in_stack_00000018 + uVar4;
  uVar4 = pAVar1->field_0018 + uVar4;
  pAVar1->field_0018 = uVar4;
  if ((uint)pAVar1->field_0010 <= uVar4) {
    pAVar1->field_0018 = 0;
    pAVar1->field_0014 = pAVar1->field_0014 + pAVar1->field_0010;
  }
  return;
}

