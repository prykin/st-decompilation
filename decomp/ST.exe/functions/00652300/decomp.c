
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00652810 @ 0065916C
   -> TEST TEST EAX,EAX */

int __cdecl FUN_00652300(RecoveredRecord_AiEventClassTy_00652300 *param_1)

{
  short sVar1;
  int iVar2;

  iVar2 = 0;
  do {
    if ((&param_1->field_0xd0)[iVar2] != '\b') {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  sVar1 = *(short *)param_1;
  if (sVar1 < 5) {
    *(undefined4 *)&param_1->field_0x18 = 0xffffffff;
  }
  else if (param_1->field_0xd4 != '\b') {
    return 0;
  }
  if (sVar1 < 6) {
    *(undefined4 *)&param_1->field_0x1c = 0xffffffff;
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
    *(undefined4 *)&param_1->field_0x24 = 0xffffffff;
  }
  else if (param_1->field_00D7 != '\b') {
    return 0;
  }
  if (sVar1 < 9) {
    *(undefined4 *)&param_1->field_0x28 = 0;
  }
  else if (param_1->field_0xd8 != '\n') {
    return 0;
  }
  if (sVar1 < 10) {
    *(undefined4 *)&param_1->field_0x2c = 0;
  }
  else if (param_1->field_00D9 != '\b') {
    return 0;
  }
  if (sVar1 < 0xb) {
    *(undefined4 *)&param_1->field_0x30 = 0;
  }
  else if (param_1->field_0xda != '\b') {
    return 0;
  }
  if (0xb < sVar1) {
    if (param_1->field_00DB == '\b') {
      return (uint)(-1 < *(int *)&param_1->field_0x10);
    }
    return 0;
  }
  *(undefined4 *)&param_1->field_0x34 = 0;
  return (uint)(-1 < *(int *)&param_1->field_0x10);
}

