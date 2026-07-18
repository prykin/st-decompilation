
void thunk_FUN_004900e0(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  void *unaff_EDI;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_10 = param_1;
  uStack_54 = DAT_00858df8;
  DAT_00858df8 = &uStack_54;
  iVar2 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  iVar4 = iStack_10;
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_54;
    iVar4 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4ed4,0,iVar2,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7a9d3c,0x4ed5);
    return;
  }
  puVar5 = (undefined4 *)(iStack_10 + 0x5c);
  puVar6 = (undefined4 *)(iStack_8 + 0x6f3);
  for (iVar2 = 0x5a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
  *(undefined1 *)((int)puVar6 + 2) = *(undefined1 *)((int)puVar5 + 2);
  puVar5 = (undefined4 *)(iStack_10 + 0x1c7);
  puVar6 = (undefined4 *)(iStack_8 + 0x2c0);
  for (iVar2 = 0x65; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
  *(undefined4 *)(iStack_8 + 0x455) = *(undefined4 *)(iStack_10 + 0x35c);
  *(undefined4 *)(iStack_8 + 0x459) = *(undefined4 *)(iStack_10 + 0x360);
  *(undefined4 *)(iStack_8 + 0x45d) = *(undefined4 *)(iStack_10 + 0x364);
  *(undefined4 *)(iStack_8 + 0x461) = *(undefined4 *)(iStack_10 + 0x368);
  *(undefined2 *)(iStack_8 + 0x469) = *(undefined2 *)(iStack_10 + 0x36c);
  *(undefined2 *)(iStack_8 + 0x46f) = *(undefined2 *)(iStack_10 + 0x36e);
  *(undefined4 *)(iStack_8 + 0x471) = *(undefined4 *)(iStack_10 + 0x370);
  *(undefined2 *)(iStack_8 + 0x475) = *(undefined2 *)(iStack_10 + 0x374);
  *(undefined2 *)(iStack_8 + 0x477) = *(undefined2 *)(iStack_10 + 0x376);
  *(undefined2 *)(iStack_8 + 0x479) = *(undefined2 *)(iStack_10 + 0x378);
  *(undefined4 *)(iStack_8 + 0x47f) = *(undefined4 *)(iStack_10 + 0x382);
  *(undefined4 *)(iStack_8 + 0x483) = *(undefined4 *)(iStack_10 + 0x386);
  *(undefined4 *)(iStack_8 + 0x487) = *(undefined4 *)(iStack_10 + 0x38a);
  *(undefined4 *)(iStack_8 + 0x48b) = *(undefined4 *)(iStack_10 + 0x38e);
  *(undefined4 *)(iStack_8 + 0x48f) = *(undefined4 *)(iStack_10 + 0x392);
  *(undefined4 *)(iStack_8 + 0x493) = *(undefined4 *)(iStack_10 + 0x396);
  *(undefined4 *)(iStack_8 + 0x497) = *(undefined4 *)(iStack_10 + 0x39a);
  puVar5 = (undefined4 *)(iStack_10 + 0x39e);
  puVar6 = (undefined4 *)(iStack_8 + 0x49b);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
  puVar5 = (undefined4 *)(iStack_10 + 0x3e0);
  puVar6 = (undefined4 *)(iStack_8 + 0x4dd);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
  *(undefined1 *)((int)puVar6 + 2) = *(undefined1 *)((int)puVar5 + 2);
  puVar5 = (undefined4 *)(iStack_10 + 0x413);
  puVar6 = (undefined4 *)(iStack_8 + 0x510);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(iStack_10 + 0x42f);
  puVar6 = (undefined4 *)(iStack_8 + 0x52c);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(iStack_10 + 0x457);
  puVar6 = (undefined4 *)(iStack_8 + 0x554);
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(iStack_10 + 0x48b);
  puVar6 = (undefined4 *)(iStack_8 + 0x588);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(iStack_10 + 0x4a3);
  puVar6 = (undefined4 *)(iStack_8 + 0x5a0);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
  *(undefined4 *)(iStack_8 + 0x5ca) = *(undefined4 *)(iStack_10 + 0x4cd);
  iStack_c = 9;
  *(undefined4 *)(iStack_8 + 0x5ce) = *(undefined4 *)(iStack_10 + 0x4d1);
  *(undefined4 *)(iStack_8 + 0x5d2) = *(undefined4 *)(iStack_10 + 0x4d5);
  *(undefined4 *)(iStack_8 + 0x5d6) = *(undefined4 *)(iStack_10 + 0x4d9);
  *(undefined2 *)(iStack_8 + 0x5da) = *(undefined2 *)(iStack_10 + 0x4dd);
  *(undefined4 *)(iStack_8 + 0x5dc) = *(undefined4 *)(iStack_10 + 0x4df);
  *(undefined4 *)(iStack_8 + 0x5e0) = *(undefined4 *)(iStack_10 + 0x4e3);
  *(undefined4 *)(iStack_8 + 0x5e4) = *(undefined4 *)(iStack_10 + 0x4e7);
  *(undefined4 *)(iStack_8 + 0x5e8) = *(undefined4 *)(iStack_10 + 0x4eb);
  *(undefined4 *)(iStack_8 + 0x5ec) = *(undefined4 *)(iStack_10 + 0x4ef);
  *(undefined4 *)(iStack_8 + 0x5f0) = *(undefined4 *)(iStack_10 + 0x4f3);
  *(undefined4 *)(iStack_8 + 0x5f4) = *(undefined4 *)(iStack_10 + 0x4f7);
  *(undefined4 *)(iStack_8 + 0x5f8) = *(undefined4 *)(iStack_10 + 0x4fb);
  puVar5 = (undefined4 *)(iStack_10 + 0x4ff);
  puVar6 = (undefined4 *)(iStack_8 + 0x5fc);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
  puVar5 = (undefined4 *)(iStack_10 + 0x51c);
  puVar6 = (undefined4 *)(iStack_8 + 0x619);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(iStack_10 + 0x538);
  puVar6 = (undefined4 *)(iStack_8 + 0x635);
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
  puVar5 = (undefined4 *)(iStack_10 + 0x56e);
  puVar6 = (undefined4 *)(iStack_8 + 0x66b);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(iStack_10 + 0x58e);
  puVar6 = (undefined4 *)(iStack_8 + 0x68b);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
  puVar5 = (undefined4 *)(iStack_10 + 0x5ac);
  puVar6 = (undefined4 *)(iStack_8 + 0x6a9);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
  puVar5 = (undefined4 *)(iStack_10 + 0x5ce);
  puVar6 = (undefined4 *)(iStack_8 + 0x6cb);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(iStack_8 + 0x282);
  *(undefined4 *)(iStack_8 + 0x6eb) = *(undefined4 *)(iStack_10 + 0x5ee);
  *(undefined4 *)(iStack_8 + 0x6ef) = *(undefined4 *)(iStack_10 + 0x5f2);
  piVar7 = (int *)(iStack_10 + 0x14);
  iVar2 = iStack_8;
  do {
    if (*piVar7 == -1) {
      *puVar5 = 0;
    }
    else {
      uVar3 = FUN_006b0060((uint *)0x0,(uint *)(*piVar7 + iVar4));
      *puVar5 = uVar3;
      iVar2 = iStack_8;
    }
    piVar7 = piVar7 + 2;
    puVar5 = puVar5 + 1;
    iStack_c = iStack_c + -1;
  } while (iStack_c != 0);
  if (*(int *)(iVar4 + 0x37a) != -1) {
    uVar3 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)(iVar4 + 0x37a) + iVar4));
    *(undefined4 *)(iStack_8 + 0x47b) = uVar3;
    DAT_00858df8 = (undefined4 *)uStack_54;
    return;
  }
  *(undefined4 *)(iVar2 + 0x47b) = 0;
  DAT_00858df8 = (undefined4 *)uStack_54;
  return;
}

