
undefined4 * __fastcall FUN_004f4f90(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  STGroupBoatC::sub_006E5FB0((STGroupBoatC *)param_1);
  *param_1 = &PTR_GetMessage_0079ac18;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4c] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4b] = 1;
  piVar1 = param_1 + 0x25;
  puVar2 = param_1 + 0xf;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  piVar4 = piVar1;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  puVar2 = param_1 + 0x1a;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x30;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (DAT_0080874e == '\x03') {
    param_1[0x1a] = 0x53;
    *piVar1 = DAT_00806734;
    param_1[0x30] = 0x43;
    param_1[0x1b] = 0x53;
    param_1[0x26] = *piVar1 + param_1[0x30];
    param_1[0x31] = 0x58;
    param_1[0x1d] = 0xd2;
    param_1[0x28] = DAT_00806734;
    param_1[0x33] = 0x9b;
    param_1[0x1e] = 0x97;
    param_1[0x29] = DAT_00806734;
    param_1[0x34] = 0x9b;
    param_1[0x1f] = 0xe9;
    param_1[0x2a] = DAT_00806734;
    param_1[0x35] = 0x9b;
    uVar5 = 0x53;
  }
  else {
    param_1[0x1a] = 0x51;
    *piVar1 = DAT_00806734;
    param_1[0x30] = 0x43;
    param_1[0x1b] = 0x51;
    param_1[0x26] = *piVar1 + param_1[0x30];
    param_1[0x31] = 0x58;
    param_1[0x1c] = 0x1a;
    param_1[0x27] = DAT_00806734;
    param_1[0x32] = 0x9b;
    param_1[0x1d] = 0xbb;
    param_1[0x28] = DAT_00806734;
    param_1[0x33] = 0x9b;
    param_1[0x1e] = 0x95;
    param_1[0x29] = DAT_00806734;
    param_1[0x34] = 0x9b;
    param_1[0x1f] = 0xd2;
    param_1[0x2a] = DAT_00806734;
    param_1[0x35] = 0x9b;
    param_1[0x20] = 0x1a;
    param_1[0x2b] = DAT_00806734;
    param_1[0x36] = 0x9b;
    uVar5 = 0x51;
  }
  param_1[0x21] = uVar5;
  param_1[0x2c] = *piVar1 + param_1[0x30];
  param_1[0x37] = 0x58;
  param_1[0x22] = uVar5;
  param_1[0x2d] = DAT_00806734;
  param_1[0x38] = 0x43;
  param_1[0x2e] = DAT_00806734;
  param_1[0x39] = 0x9b;
  param_1[0x2f] = DAT_00806734;
  param_1[0x3a] = 0x9b;
  param_1[0x3c] = 0x1e;
  param_1[0x41] = 0x22b;
  puVar2 = param_1 + 0x60;
  iVar3 = 0xb;
  do {
    puVar2[-0xe] = 0xffffffff;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[0x5f] = 0xffffffff;
  param_1[0x5e] = 0xffffffff;
  param_1[0x5d] = 0xffffffff;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  *(int *)((int)param_1 + 0x213) = (int)param_1 + 0x1e1;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  *(undefined2 *)((int)param_1 + 0x23f) = 1;
  *(undefined4 *)((int)param_1 + 0x24b) = 0;
  *(undefined4 *)((int)param_1 + 0x24f) = 0;
  *(undefined4 *)((int)param_1 + 599) = 0;
  *(undefined4 *)((int)param_1 + 0x253) = 0;
  param_1[0x76] = 0;
  *(undefined4 *)((int)param_1 + 0x25b) = 0;
  *(undefined1 *)((int)param_1 + 0x25f) = 0;
  *(undefined1 *)(param_1 + 0x98) = 2;
  *(undefined4 *)((int)param_1 + 0x261) = 0;
  *(undefined1 *)((int)param_1 + 0x265) = 0;
  *(undefined1 *)((int)param_1 + 0x285) = 1;
  *(undefined4 *)((int)param_1 + 0x28a) = 0;
  *(undefined4 *)((int)param_1 + 0x286) = 0;
  *(undefined4 *)((int)param_1 + 0x2ce) = 0;
  *(undefined4 *)((int)param_1 + 0x2de) = 0;
  *(undefined4 *)((int)param_1 + 0x2da) = 0;
  *(undefined4 *)((int)param_1 + 0x2d6) = 0;
  *(undefined4 *)((int)param_1 + 0x2d2) = 0;
  param_1[0x273] = 0;
  param_1[0x272] = 0;
  *(undefined4 *)((int)param_1 + 0x2ca) = 0;
  *(undefined4 *)((int)param_1 + 0x2c6) = 0;
  *(undefined4 *)((int)param_1 + 0x2c2) = 0;
  *(undefined4 *)((int)param_1 + 0x2ba) = 0;
  *(undefined4 *)((int)param_1 + 0x2b6) = 0;
  *(undefined4 *)((int)param_1 + 0x2b2) = 0;
  *(undefined4 *)((int)param_1 + 0x2a2) = 0;
  *(undefined4 *)((int)param_1 + 0x29e) = 0;
  *(undefined4 *)((int)param_1 + 0x29a) = 0;
  *(undefined4 *)((int)param_1 + 0x296) = 0;
  *(undefined4 *)((int)param_1 + 0x292) = 0;
  *(undefined4 *)((int)param_1 + 0x28e) = 0;
  *(undefined4 *)((int)param_1 + 0x2e2) = 0;
  *(undefined4 *)((int)param_1 + 0x2e6) = 0;
  iVar3 = 0;
  *(undefined4 *)((int)param_1 + 0xb4b) = 0;
  *(undefined4 *)((int)param_1 + 0xb4f) = 0;
  *(undefined4 *)((int)param_1 + 0xb53) = 0;
  *(undefined4 *)((int)param_1 + 0xb57) = 0;
  *(undefined4 *)((int)param_1 + 0xb5b) = 0;
  *(undefined4 *)((int)param_1 + 0xb5f) = 0;
  puVar2 = (undefined4 *)((int)param_1 + 0x2fe);
  do {
    *(undefined4 *)((int)puVar2 + 10) = 0;
    *puVar2 = 0;
    *(undefined1 *)((int)param_1 + iVar3 + 0x306) = 1;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 2);
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  puVar2 = param_1 + 199;
  for (iVar3 = 0x118; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x1df] = 0;
  *(undefined2 *)(param_1 + 0xaa) = 0xffff;
  param_1[0x256] = 0;
  param_1[0x255] = 0;
  param_1[599] = 0;
  puVar2 = (undefined4 *)((int)param_1 + 0xb63);
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  puVar2 = param_1 + 0x25d;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)((int)param_1 + 0xb99);
  for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[600] = 0;
  param_1[0x259] = 0;
  param_1[0x25a] = 0;
  param_1[0x25b] = 0;
  param_1[0x25c] = 0;
  param_1[0x265] = 0;
  param_1[0x267] = 0;
  param_1[0x266] = 0;
  param_1[0x268] = (uint)PTR_00802a38->field_00E4 / 0x19;
  puVar2 = param_1 + 0x269;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x270] = 0;
  param_1[0x271] = 0;
  *(undefined4 *)((int)param_1 + 0xdb3) = 0;
  *(undefined4 *)((int)param_1 + 0xdb7) = 0;
  *(undefined4 *)((int)param_1 + 0xdbb) = 0;
  *(undefined4 *)((int)param_1 + 0xdbf) = 0;
  *(undefined4 *)((int)param_1 + 0xdc3) = 0;
  *(undefined4 *)((int)param_1 + 0x227) = 0;
  *(undefined4 *)((int)param_1 + 0x22b) = 0;
  *(undefined4 *)((int)param_1 + 0x22f) = 0;
  *(undefined4 *)((int)param_1 + 0x233) = 0;
  *(undefined4 *)((int)param_1 + 0x23b) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x237) = 0xffffffff;
  puVar2 = (undefined4 *)((int)param_1 + 0x9d9);
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)((int)param_1 + 0xbf5);
  for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x274] = 0;
  *(undefined1 *)(param_1 + 0x275) = 1;
  puVar2 = (undefined4 *)((int)param_1 + 0xa15);
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)param_1 + 0xb1b) = 0;
  *(undefined4 *)((int)param_1 + 0x9d5) = 0;
  *(undefined4 *)((int)param_1 + 0xb17) = 0;
  puVar2 = (undefined4 *)((int)param_1 + 0xb1f);
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)param_1 + 0xb37) = 0;
  *(undefined4 *)((int)param_1 + 0xb3b) = 0;
  *(undefined4 *)((int)param_1 + 0xb3f) = 0;
  *(undefined4 *)((int)param_1 + 0xb47) = 0;
  *(undefined4 *)((int)param_1 + 0xb43) = 0;
  puVar2 = (undefined4 *)((int)param_1 + 0xc51);
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  puVar2 = (undefined4 *)((int)param_1 + 0xc87);
  for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)((int)param_1 + 0xd0b);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}

