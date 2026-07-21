
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 006536B8
   -> TEST TEST EAX,EAX */

int __cdecl FUN_0064ec80(AnonShape_0064EC80_53C284F2 *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if ((&param_1[7].field_0xc)[iVar1] != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  if (param_1->field_0014 < 0) {
    return 0;
  }
  return (uint)(param_1->field_0014 <= param_1->field_0018);
}

