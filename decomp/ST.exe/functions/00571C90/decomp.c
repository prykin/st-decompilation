
undefined4 FUN_00571c90(int param_1)

{
  int iVar1;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  STSprGameObjC *in_ECX;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar1 = STSprGameObjC::GetMessage(in_ECX,(AnonShape_0041AF40_F59F8577 *)param_1);
  if (iVar1 == 0xffff) {
    return 0xffff;
  }
  return 0;
}

