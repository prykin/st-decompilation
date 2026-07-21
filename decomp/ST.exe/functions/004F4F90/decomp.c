#include "../../pseudocode_runtime.h"


undefined4 * __fastcall FUN_004f4f90(AnonShape_004F4F90_2D6E0DDA *param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;

  sub_006E5FB0(param_1);
  *(VTable_0079AC18 **)param_1 = &VTable_0079AC18;
  *(undefined4 *)&param_1->field_0x134 = 0;
  *(undefined4 *)&param_1->field_0x138 = 0;
  *(undefined4 *)&param_1->field_0x130 = 0;
  *(undefined4 *)&param_1->field_0x140 = 0;
  *(undefined4 *)&param_1->field_0x13c = 0;
  *(undefined4 *)&param_1->field_0x12c = 1;
  puVar1 = &param_1->field_0x94;
  memset(&param_1->field_0x3c, 0, 0x2c); /* compiler bulk-zero initialization */
  iVar3 = 0;
  memset((void *)puVar1, 0, 0x2c); /* compiler bulk-zero initialization */
  iVar3 = 0;
  memset(&param_1->field_0x68, 0, 0x2c); /* compiler bulk-zero initialization */
  iVar3 = 0;
  memset(&param_1->field_0xc0, 0, 0x2c); /* compiler bulk-zero initialization */
  if (DAT_0080874e == '\x03') {
    *(undefined4 *)&param_1->field_0x68 = 0x53;
    *(undefined4 *)puVar1 = DAT_00806734;
    *(undefined4 *)&param_1->field_0xc0 = 0x43;
    *(undefined4 *)&param_1->field_0x6c = 0x53;
    *(int *)&param_1->field_0098 = *(int *)puVar1 + *(int *)&param_1->field_0xc0;
    *(undefined4 *)&param_1->field_0xc4 = 0x58;
    *(undefined4 *)&param_1->field_0x74 = 0xd2;
    *(undefined4 *)&param_1->field_0xa0 = DAT_00806734;
    *(undefined4 *)&param_1->field_0xcc = 0x9b;
    *(undefined4 *)&param_1->field_0x78 = 0x97;
    *(undefined4 *)&param_1->field_0xa4 = DAT_00806734;
    *(undefined4 *)&param_1->field_0xd0 = 0x9b;
    *(undefined4 *)&param_1->field_0x7c = 0xe9;
    *(undefined4 *)&param_1->field_0xa8 = DAT_00806734;
    *(undefined4 *)&param_1->field_0xd4 = 0x9b;
    uVar4 = 0x53;
  }
  else {
    *(undefined4 *)&param_1->field_0x68 = 0x51;
    *(undefined4 *)puVar1 = DAT_00806734;
    *(undefined4 *)&param_1->field_0xc0 = 0x43;
    *(undefined4 *)&param_1->field_0x6c = 0x51;
    *(int *)&param_1->field_0098 = *(int *)puVar1 + *(int *)&param_1->field_0xc0;
    *(undefined4 *)&param_1->field_0xc4 = 0x58;
    *(undefined4 *)&param_1->field_0x70 = 0x1a;
    *(undefined4 *)&param_1->field_0x9c = DAT_00806734;
    *(undefined4 *)&param_1->field_0xc8 = 0x9b;
    *(undefined4 *)&param_1->field_0x74 = 0xbb;
    *(undefined4 *)&param_1->field_0xa0 = DAT_00806734;
    *(undefined4 *)&param_1->field_0xcc = 0x9b;
    *(undefined4 *)&param_1->field_0x78 = 0x95;
    *(undefined4 *)&param_1->field_0xa4 = DAT_00806734;
    *(undefined4 *)&param_1->field_0xd0 = 0x9b;
    *(undefined4 *)&param_1->field_0x7c = 0xd2;
    *(undefined4 *)&param_1->field_0xa8 = DAT_00806734;
    *(undefined4 *)&param_1->field_0xd4 = 0x9b;
    *(undefined4 *)&param_1->field_0x80 = 0x1a;
    *(undefined4 *)&param_1->field_0xac = DAT_00806734;
    *(undefined4 *)&param_1->field_0xd8 = 0x9b;
    uVar4 = 0x51;
  }
  *(undefined4 *)&param_1->field_0x84 = uVar4;
  *(int *)&param_1->field_0xb0 = *(int *)puVar1 + *(int *)&param_1->field_0xc0;
  *(undefined4 *)&param_1->field_0xdc = 0x58;
  *(undefined4 *)&param_1->field_0x88 = uVar4;
  *(undefined4 *)&param_1->field_0xb4 = DAT_00806734;
  *(undefined4 *)&param_1->field_0xe0 = 0x43;
  *(undefined4 *)&param_1->field_0xb8 = DAT_00806734;
  *(undefined4 *)&param_1->field_0xe4 = 0x9b;
  *(undefined4 *)&param_1->field_0xbc = DAT_00806734;
  *(undefined4 *)&param_1->field_0xe8 = 0x9b;
  *(undefined4 *)&param_1->field_0xf0 = 0x1e;
  *(undefined4 *)&param_1->field_0x104 = 0x22b;
  puVar2 = (undefined4 *)&param_1->field_0x180;
  iVar3 = 0xb;
  do {
    puVar2[-0xe] = 0xffffffff;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)&param_1->field_0x17c = 0xffffffff;
  *(undefined4 *)&param_1->field_0x178 = 0xffffffff;
  *(undefined4 *)&param_1->field_0x174 = 0xffffffff;
  *(undefined4 *)&param_1->field_0x1b4 = 0;
  *(undefined4 *)&param_1->field_0x1b0 = 0;
  *(undefined4 *)&param_1->field_0x1ac = 0;
  *(undefined4 *)&param_1->field_0x1c8 = 0;
  *(undefined4 *)&param_1->field_0x1c4 = 0;
  *(undefined4 *)&param_1->field_0x1c0 = 0;
  *(undefined4 *)&param_1->field_0x1bc = 0;
  *(undefined4 *)&param_1->field_0x1b8 = 0;
  param_1->field_0213 = (int)&param_1->field_0x1e1;
  *(undefined4 *)&param_1->field_0x1d4 = 0;
  *(undefined4 *)&param_1->field_0x1d0 = 0;
  *(undefined4 *)&param_1->field_0x1cc = 0;
  param_1->field_023F = 1;
  param_1->field_024B = 0;
  param_1->field_024F = 0;
  param_1->field_0257 = 0;
  param_1->field_0253 = 0;
  *(undefined4 *)&param_1->field_0x1d8 = 0;
  param_1->field_025B = 0;
  param_1->field_025F = 0;
  param_1->field_0x260 = 2;
  param_1->field_0261 = 0;
  param_1->field_0265 = 0;
  param_1->field_0285 = 1;
  param_1->field_028A = 0;
  param_1->field_0286 = 0;
  param_1->field_02CE = 0;
  param_1->field_02DE = 0;
  param_1->field_02DA = 0;
  param_1->field_02D6 = 0;
  param_1->field_02D2 = 0;
  *(undefined4 *)&param_1->field_0x9cc = 0;
  *(undefined4 *)&param_1->field_0x9c8 = 0;
  param_1->field_02CA = 0;
  param_1->field_02C6 = 0;
  param_1->field_02C2 = 0;
  param_1->field_02BA = 0;
  param_1->field_02B6 = 0;
  param_1->field_02B2 = 0;
  param_1->field_02A2 = 0;
  param_1->field_029E = 0;
  param_1->field_029A = 0;
  param_1->field_0296 = 0;
  param_1->field_0292 = 0;
  param_1->field_028E = 0;
  param_1->field_02E2 = 0;
  param_1->field_02E6 = 0;
  iVar3 = 0;
  param_1->field_0B4B = 0;
  param_1->field_0B4F = 0;
  param_1->field_0B53 = 0;
  param_1->field_0B57 = 0;
  param_1->field_0B5B = 0;
  param_1->field_0B5F = 0;
  puVar2 = (undefined4 *)&param_1->field_0x2fe;
  do {
    *(undefined4 *)((int)puVar2 + 10) = 0;
    *puVar2 = 0;
    (&param_1->field_0x306)[iVar3] = 1;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 2);
  *(undefined4 *)&param_1->field_0x310 = 0;
  *(undefined4 *)&param_1->field_0x314 = 0;
  *(undefined4 *)&param_1->field_0x318 = 0;
  memset(&param_1->field_0x31c, 0, 0x460); /* compiler bulk-zero initialization */
  iVar3 = 0;
  *(undefined4 *)&param_1->field_0x77c = 0;
  *(undefined2 *)&param_1->field_0x2a8 = 0xffff;
  *(undefined4 *)&param_1->field_0x958 = 0;
  *(undefined4 *)&param_1->field_0x954 = 0;
  *(undefined4 *)&param_1->field_0x95c = 0;
  memset(&param_1->field_0xb63, 0, 0x36); /* compiler bulk-zero initialization */
  iVar3 = 0;
  memset(&param_1->field_0x974, 0, 0x20); /* compiler bulk-zero initialization */
  iVar3 = 0;
  memset(&param_1->field_0xb99, 0, 0x5c); /* compiler bulk-zero initialization */
  iVar3 = 0;
  *(undefined4 *)&param_1->field_0x960 = 0;
  *(undefined4 *)&param_1->field_0x964 = 0;
  *(undefined4 *)&param_1->field_0x968 = 0;
  *(undefined4 *)&param_1->field_0x96c = 0;
  *(undefined4 *)&param_1->field_0x970 = 0;
  *(undefined4 *)&param_1->field_0x994 = 0;
  *(undefined4 *)&param_1->field_0x99c = 0;
  *(undefined4 *)&param_1->field_0x998 = 0;
  *(uint *)&param_1->field_0x9a0 = PTR_00802a38->field_00E4 / 0x19;
  memset(&param_1->field_0x9a4, 0, 0x1c); /* compiler bulk-zero initialization */
  iVar3 = 0;
  *(undefined4 *)&param_1->field_0x9c0 = 0;
  *(undefined4 *)&param_1->field_0x9c4 = 0;
  param_1->field_0DB3 = 0;
  param_1->field_0DB7 = 0;
  param_1->field_0DBB = 0;
  param_1->field_0DBF = 0;
  param_1->field_0DC3 = 0;
  param_1->field_0227 = 0;
  param_1->field_022B = 0;
  param_1->field_022F = 0;
  param_1->field_0233 = 0;
  param_1->field_023B = 0xffffffff;
  param_1->field_0237 = 0xffffffff;
  memset(&param_1->field_0x9d9, 0, 0x3c); /* compiler bulk-zero initialization */
  iVar3 = 0;
  memset(&param_1->field_0xbf5, 0, 0x5c); /* compiler bulk-zero initialization */
  iVar3 = 0;
  *(undefined4 *)&param_1->field_0x9d0 = 0;
  param_1->field_0x9d4 = 1;
  memset(&param_1->field_0xa15, 0, 0x18); /* compiler bulk-zero initialization */
  iVar3 = 0;
  param_1->field_0B1B = 0;
  param_1->field_09D5 = 0;
  param_1->field_0B17 = 0;
  memset(&param_1->field_0xb1f, 0, 0x18); /* compiler bulk-zero initialization */
  iVar3 = 0;
  param_1->field_0B37 = 0;
  param_1->field_0B3B = 0;
  param_1->field_0B3F = 0;
  param_1->field_0B47 = 0;
  param_1->field_0B43 = 0;
  memset(&param_1->field_0xc51, 0, 0x36); /* compiler bulk-zero initialization */
  iVar3 = 0;
  memset(&param_1->field_0xc87, 0, 0x84); /* compiler bulk-zero initialization */
  iVar3 = 0;
  memset(&param_1->field_0xd0b, 0, 0x30); /* compiler bulk-zero initialization */
  return (undefined4 *)param_1;
}

