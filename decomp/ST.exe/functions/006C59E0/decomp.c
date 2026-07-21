
uint __cdecl FUN_006c59e0(uint param_1)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uint in_EAX;
  int iVar1;
  bool bVar2;

  iVar1 = 0x20;
  do {
    bVar2 = (param_1 & 1) != 0;
    param_1 = param_1 >> 1 | (uint)bVar2 << 0x1f;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    in_EAX = in_EAX << 1 | (uint)bVar2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  return in_EAX;
}

