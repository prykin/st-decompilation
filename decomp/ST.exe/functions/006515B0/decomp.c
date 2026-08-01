
undefined4 __cdecl FUN_006515b0(RecoveredRecord_AiEventClassTy_006515B0 *param_1)

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
    param_1->field_0018 = 0;
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
    *(undefined4 *)&param_1->field_0x20 = 0x19;
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
    *(undefined4 *)&param_1->field_0x28 = 0xffffffff;
  }
  else if (param_1->field_0xd8 != '\b') {
    return 0;
  }
  if (sVar1 < 10) {
    *(undefined4 *)&param_1->field_0x2c = 0xffffffff;
  }
  else if (param_1->field_00D9 != '\b') {
    return 0;
  }
  if (sVar1 < 0xb) {
    *(undefined4 *)&param_1->field_0x30 = 8;
  }
  else if (param_1->field_0xda != '\b') {
    return 0;
  }
  if (sVar1 < 0xc) {
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  else if (param_1->field_00DB != '\n') {
    return 0;
  }
  if (param_1->field_0010 < 0) {
    return 0;
  }
  if (*(int *)&param_1->field_0x20 < 0) {
    *(undefined4 *)&param_1->field_0x20 = 0;
  }
  if (0x32 < *(int *)&param_1->field_0x20) {
    *(undefined4 *)&param_1->field_0x20 = 0x32;
  }
  if (*(int *)&param_1->field_0x30 < -1) {
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
  }
  if (8 < *(int *)&param_1->field_0x30) {
    *(undefined4 *)&param_1->field_0x30 = 8;
  }
  return 1;
}

