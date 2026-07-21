
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00654266
   -> TEST TEST EAX,EAX | 00652810 @ 00654434 -> TEST TEST EAX,EAX */

int __cdecl FUN_0064ef90(AnonShape_0064EF90_4909407D *param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if (*(char *)((int)&param_1[8].field_0010 + iVar1) != '\b') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  iVar1 = 3;
  do {
    if (*(char *)((int)&param_1[8].field_0010 + iVar1) != '\n') {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if ((-1 < param_1->field_0010) && (param_1->field_0010 < 0x100)) {
    return (uint)(param_1->field_0014 != 0);
  }
  return 0;
}

