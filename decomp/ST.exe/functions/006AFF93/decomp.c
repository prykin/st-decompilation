
uint FUN_006aff93(void)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uint in_EAX;
  uint uVar1;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if (0x5a < in_EAX) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    in_EAX = -(in_EAX - 0xb4);
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uVar1 = (uint)*(ushort *)(&DAT_006ce9a0 + in_EAX * 2);
  if (DAT_007eda8c == 100) {
    uVar1 = uVar1 / 100;
  }
  return uVar1;
}

