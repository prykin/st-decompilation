
void __fastcall thunk_FUN_005c0230(void *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  bool bVar7;
  int aiStack_4bc [280];
  undefined4 auStack_5c [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_14;
  undefined4 uStack_10;
  
  puVar5 = auStack_5c;
  for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  piVar2 = aiStack_4bc;
  for (iVar4 = 0x118; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x353) = 0x7d;
  *(undefined4 *)((int)param_1 + 0x357) = 0x7e;
  *(undefined4 *)((int)param_1 + 0x35b) = 0x93;
  *(undefined4 *)((int)param_1 + 0x35f) = 0x54;
  *(undefined4 *)((int)param_1 + 0x36b) = 0x2446;
  *(undefined4 *)((int)param_1 + 0x36f) = 0x111;
  *(undefined4 *)((int)param_1 + 0x373) = 0x7e;
  *(undefined4 *)((int)param_1 + 0x377) = 0x91;
  *(undefined4 *)((int)param_1 + 0x37b) = 0x54;
  *(undefined4 *)((int)param_1 + 0x387) = 0x2447;
  *(undefined4 *)((int)param_1 + 0x38b) = 0x1a3;
  *(undefined4 *)((int)param_1 + 0x38f) = 0x7e;
  *(undefined4 *)((int)param_1 + 0x393) = 0x93;
  *(undefined4 *)((int)param_1 + 0x397) = 0x54;
  *(undefined4 *)((int)param_1 + 0x3a3) = 0x2448;
  *(undefined4 *)((int)param_1 + 0x3a7) = 0x239;
  *(undefined4 *)((int)param_1 + 0x3ab) = 0x7e;
  *(undefined4 *)((int)param_1 + 0x3af) = 0x95;
  *(undefined4 *)((int)param_1 + 0x3b3) = 0x54;
  *(undefined4 *)((int)param_1 + 0x3bf) = 0x2449;
  *(undefined4 *)((int)param_1 + 0x3cb) = 0x93;
  *(undefined4 *)((int)param_1 + 0x403) = 0x93;
  *(undefined4 *)((int)param_1 + 0x3c3) = 0x7d;
  *(undefined4 *)((int)param_1 + 0x3c7) = 0xdf;
  *(undefined4 *)((int)param_1 + 0x3cf) = 0x54;
  *(undefined4 *)((int)param_1 + 0x3e3) = 0xdf;
  *(undefined4 *)((int)param_1 + 0x3eb) = 0x54;
  *(undefined4 *)((int)param_1 + 0x3ff) = 0xdf;
  *(undefined4 *)((int)param_1 + 0x407) = 0x54;
  *(undefined4 *)((int)param_1 + 0x41b) = 0xdf;
  *(undefined4 *)((int)param_1 + 0x423) = 0x54;
  *(undefined4 *)((int)param_1 + 0x433) = 0x7d;
  *(undefined4 *)((int)param_1 + 0x3db) = 0x244a;
  *(undefined4 *)((int)param_1 + 0x3df) = 0x111;
  *(undefined4 *)((int)param_1 + 999) = 0x91;
  *(undefined4 *)((int)param_1 + 0x3f7) = 0x244b;
  *(undefined4 *)((int)param_1 + 0x3fb) = 0x1a3;
  *(undefined4 *)((int)param_1 + 0x413) = 0x244c;
  *(undefined4 *)((int)param_1 + 0x417) = 0x239;
  *(undefined4 *)((int)param_1 + 0x41f) = 0x95;
  *(undefined4 *)((int)param_1 + 0x42f) = 0x244d;
  *(undefined4 *)((int)param_1 + 0x437) = 0x13f;
  *(undefined4 *)((int)param_1 + 0x43b) = 0x251;
  *(undefined4 *)((int)param_1 + 0x43f) = 0x43;
  *(undefined4 *)((int)param_1 + 1099) = 0x244e;
  puVar5 = (undefined4 *)((int)param_1 + 0x1d);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x2d) = 0x13;
  *(undefined4 *)((int)param_1 + 0x31) = *(undefined4 *)((int)param_1 + 8);
  FUN_006e6000(param_1,3,1,(undefined4 *)((int)param_1 + 0x1d));
  if (*(char *)((int)param_1 + 0x66) == '\x01') {
    uVar1 = thunk_FUN_005c0980(1,1,0x2d,0x226,0x91,0x28,0x6201,0x6213);
    *(undefined4 *)((int)param_1 + 0x93) = uVar1;
    uVar1 = thunk_FUN_005c0980(1,1,0x1e,0x1bd,300,0x1e,0x6202,0x6214);
    *(undefined4 *)((int)param_1 + 0x97) = uVar1;
  }
  else {
    uVar1 = thunk_FUN_005c0980(1,1,0x262,0x226,0x91,0x28,0x6200,0x6212);
    *(undefined4 *)((int)param_1 + 0x8f) = uVar1;
  }
  bVar3 = 0;
  iVar6 = 1;
  iVar4 = 0x4b;
  piVar2 = aiStack_4bc + 1;
  do {
    piVar2[-1] = iVar6;
    bVar7 = bVar3 != 0;
    bVar3 = bVar3 + 1;
    *piVar2 = bVar7 + 1;
    piVar2[2] = 0x1a;
    piVar2[4] = 0x2e;
    piVar2[3] = iVar4;
    piVar2[5] = 0x24;
    iVar6 = iVar6 + 1;
    iVar4 = iVar4 + 0x26;
    piVar2 = piVar2 + 0x1c;
  } while (bVar3 < 9);
  piStack_14 = aiStack_4bc;
  auStack_5c[0] = 1;
  uStack_10 = 1;
  uStack_4c = *(undefined4 *)((int)param_1 + 8);
  uStack_48 = 2;
  uStack_28 = 2;
  uStack_44 = 0xb208;
  uStack_24 = 0xb209;
  uStack_2c = uStack_4c;
  (**(code **)(**(int **)((int)param_1 + 0xc) + 8))(5,(int)param_1 + 0x9f,0,auStack_5c,0);
  thunk_FUN_005c0e00();
  return;
}

