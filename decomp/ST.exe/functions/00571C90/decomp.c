
/* [STPrototypeApplier] Propagated return.
   Evidence: 00571C90 returns zeroed full register at 00571CB0 @ 00571CB3 */

uint FUN_00571c90(int param_1)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STSprGameObjC *in_ECX;

  /* ST_CALLSITE[00571C98]: CALL 0x00404f07; direct=00404F07 STSprGameObjC::GetMessage */
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar1 = STSprGameObjC::GetMessage(in_ECX,(STMessage *)param_1);
  if (iVar1 == 0xffff) {
    return 0xffff;
  }
  return 0;
}

