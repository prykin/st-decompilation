
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 00658B99
   -> TEST TEST EAX,EAX */

int __cdecl FUN_00651ed0(RecoveredRecord_AiEventClassTy_00651ED0 *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  sVar1 = *(short *)param_1;
  if (sVar1 < 4) {
    *(undefined4 *)&param_1->field_0x14 = 0xff;
  }
  else if (param_1->field_00D3 != '\b') {
    return 0;
  }
  if (sVar1 < 5) {
    *(undefined4 *)&param_1->field_0x18 = 0x3fffffff;
  }
  else if (param_1->field_0xd4 != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    *(undefined4 *)&param_1->field_0x1c = 0;
  }
  else if (param_1->field_00D5 != '\b') {
    return 0;
  }
  if (sVar1 < 7) {
    *(undefined4 *)&param_1->field_0x20 = 0xffffffff;
  }
  else if (param_1->field_0xd6 != '\b') {
    return 0;
  }
  if (sVar1 < 8) {
    *(undefined4 *)&param_1->field_0x24 = 0;
  }
  else if (param_1->field_00D7 != '\n') {
    return 0;
  }
  if (sVar1 < 9) {
    *(undefined4 *)&param_1->field_0x28 = 0;
  }
  else if (param_1->field_0xd8 != '\b') {
    return 0;
  }
  if (sVar1 < 10) {
    *(undefined4 *)&param_1->field_0x2c = 0;
  }
  else if (param_1->field_00D9 != '\b') {
    return 0;
  }
  if (10 < sVar1) {
    if (*(char *)(param_1 + 1) == '\b') {
      return (uint)(-1 < *(int *)&param_1->field_0x10);
    }
    return 0;
  }
  *(undefined4 *)&param_1->field_0x30 = 0;
  return (uint)(-1 < *(int *)&param_1->field_0x10);
}

