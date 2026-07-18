
void __thiscall STBoatC::RestoreBoatData(STBoatC *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  STBoatC *pSVar4;
  int iVar5;
  undefined4 unaff_ESI;
  undefined4 *puVar6;
  STBoatC *pSVar7;
  void *unaff_EDI;
  int *piVar8;
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  int iStack_10;
  int iStack_c;
  STBoatC *pSStack_8;
  
  iStack_10 = param_1;
  uStack_54 = DAT_00858df8;
  DAT_00858df8 = &uStack_54;
  pSStack_8 = this;
  iVar2 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  iVar5 = iStack_10;
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_54;
    iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x4ed4,0,iVar2,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7a9d3c,0x4ed5);
    return;
  }
  puVar6 = (undefined4 *)(iStack_10 + 0x5c);
  pSVar7 = pSStack_8 + 0x6f3;
  for (iVar2 = 0x5a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pSVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    pSVar7 = pSVar7 + 4;
  }
  *(undefined2 *)pSVar7 = *(undefined2 *)puVar6;
  pSVar7[2] = *(STBoatC *)((int)puVar6 + 2);
  pSVar7 = (STBoatC *)(iStack_10 + 0x1c7);
  pSVar4 = pSStack_8 + 0x2c0;
  for (iVar2 = 0x65; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pSVar4 = *(undefined4 *)pSVar7;
    pSVar7 = pSVar7 + 4;
    pSVar4 = pSVar4 + 4;
  }
  *pSVar4 = *pSVar7;
  *(undefined4 *)(pSStack_8 + 0x455) = *(undefined4 *)(iStack_10 + 0x35c);
  *(undefined4 *)(pSStack_8 + 0x459) = *(undefined4 *)(iStack_10 + 0x360);
  *(undefined4 *)(pSStack_8 + 0x45d) = *(undefined4 *)(iStack_10 + 0x364);
  *(undefined4 *)(pSStack_8 + 0x461) = *(undefined4 *)(iStack_10 + 0x368);
  *(undefined2 *)(pSStack_8 + 0x469) = *(undefined2 *)(iStack_10 + 0x36c);
  *(undefined2 *)(pSStack_8 + 0x46f) = *(undefined2 *)(iStack_10 + 0x36e);
  *(undefined4 *)(pSStack_8 + 0x471) = *(undefined4 *)(iStack_10 + 0x370);
  *(undefined2 *)(pSStack_8 + 0x475) = *(undefined2 *)(iStack_10 + 0x374);
  *(undefined2 *)(pSStack_8 + 0x477) = *(undefined2 *)(iStack_10 + 0x376);
  *(undefined2 *)(pSStack_8 + 0x479) = *(undefined2 *)(iStack_10 + 0x378);
  *(undefined4 *)(pSStack_8 + 0x47f) = *(undefined4 *)(iStack_10 + 0x382);
  *(undefined4 *)(pSStack_8 + 0x483) = *(undefined4 *)(iStack_10 + 0x386);
  *(undefined4 *)(pSStack_8 + 0x487) = *(undefined4 *)(iStack_10 + 0x38a);
  *(undefined4 *)(pSStack_8 + 0x48b) = *(undefined4 *)(iStack_10 + 0x38e);
  *(undefined4 *)(pSStack_8 + 0x48f) = *(undefined4 *)(iStack_10 + 0x392);
  *(undefined4 *)(pSStack_8 + 0x493) = *(undefined4 *)(iStack_10 + 0x396);
  *(undefined4 *)(pSStack_8 + 0x497) = *(undefined4 *)(iStack_10 + 0x39a);
  puVar6 = (undefined4 *)(iStack_10 + 0x39e);
  pSVar7 = pSStack_8 + 0x49b;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pSVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    pSVar7 = pSVar7 + 4;
  }
  *(undefined2 *)pSVar7 = *(undefined2 *)puVar6;
  puVar6 = (undefined4 *)(iStack_10 + 0x3e0);
  pSVar7 = pSStack_8 + 0x4dd;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pSVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    pSVar7 = pSVar7 + 4;
  }
  *(undefined2 *)pSVar7 = *(undefined2 *)puVar6;
  pSVar7[2] = *(STBoatC *)((int)puVar6 + 2);
  puVar6 = (undefined4 *)(iStack_10 + 0x413);
  pSVar7 = pSStack_8 + 0x510;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pSVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    pSVar7 = pSVar7 + 4;
  }
  puVar6 = (undefined4 *)(iStack_10 + 0x42f);
  pSVar7 = pSStack_8 + 0x52c;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pSVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    pSVar7 = pSVar7 + 4;
  }
  puVar6 = (undefined4 *)(iStack_10 + 0x457);
  pSVar7 = pSStack_8 + 0x554;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pSVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    pSVar7 = pSVar7 + 4;
  }
  puVar6 = (undefined4 *)(iStack_10 + 0x48b);
  pSVar7 = pSStack_8 + 0x588;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pSVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    pSVar7 = pSVar7 + 4;
  }
  puVar6 = (undefined4 *)(iStack_10 + 0x4a3);
  pSVar7 = pSStack_8 + 0x5a0;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pSVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    pSVar7 = pSVar7 + 4;
  }
  *(undefined2 *)pSVar7 = *(undefined2 *)puVar6;
  *(undefined4 *)(pSStack_8 + 0x5ca) = *(undefined4 *)(iStack_10 + 0x4cd);
  iStack_c = 9;
  *(undefined4 *)(pSStack_8 + 0x5ce) = *(undefined4 *)(iStack_10 + 0x4d1);
  *(undefined4 *)(pSStack_8 + 0x5d2) = *(undefined4 *)(iStack_10 + 0x4d5);
  *(undefined4 *)(pSStack_8 + 0x5d6) = *(undefined4 *)(iStack_10 + 0x4d9);
  *(undefined2 *)(pSStack_8 + 0x5da) = *(undefined2 *)(iStack_10 + 0x4dd);
  *(undefined4 *)(pSStack_8 + 0x5dc) = *(undefined4 *)(iStack_10 + 0x4df);
  *(undefined4 *)(pSStack_8 + 0x5e0) = *(undefined4 *)(iStack_10 + 0x4e3);
  *(undefined4 *)(pSStack_8 + 0x5e4) = *(undefined4 *)(iStack_10 + 0x4e7);
  *(undefined4 *)(pSStack_8 + 0x5e8) = *(undefined4 *)(iStack_10 + 0x4eb);
  *(undefined4 *)(pSStack_8 + 0x5ec) = *(undefined4 *)(iStack_10 + 0x4ef);
  *(undefined4 *)(pSStack_8 + 0x5f0) = *(undefined4 *)(iStack_10 + 0x4f3);
  *(undefined4 *)(pSStack_8 + 0x5f4) = *(undefined4 *)(iStack_10 + 0x4f7);
  *(undefined4 *)(pSStack_8 + 0x5f8) = *(undefined4 *)(iStack_10 + 0x4fb);
  pSVar7 = (STBoatC *)(iStack_10 + 0x4ff);
  pSVar4 = pSStack_8 + 0x5fc;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pSVar4 = *(undefined4 *)pSVar7;
    pSVar7 = pSVar7 + 4;
    pSVar4 = pSVar4 + 4;
  }
  *pSVar4 = *pSVar7;
  puVar6 = (undefined4 *)(iStack_10 + 0x51c);
  pSVar7 = pSStack_8 + 0x619;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pSVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    pSVar7 = pSVar7 + 4;
  }
  puVar6 = (undefined4 *)(iStack_10 + 0x538);
  pSVar7 = pSStack_8 + 0x635;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pSVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    pSVar7 = pSVar7 + 4;
  }
  *(undefined2 *)pSVar7 = *(undefined2 *)puVar6;
  puVar6 = (undefined4 *)(iStack_10 + 0x56e);
  pSVar7 = pSStack_8 + 0x66b;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pSVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    pSVar7 = pSVar7 + 4;
  }
  puVar6 = (undefined4 *)(iStack_10 + 0x58e);
  pSVar7 = pSStack_8 + 0x68b;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pSVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    pSVar7 = pSVar7 + 4;
  }
  *(undefined2 *)pSVar7 = *(undefined2 *)puVar6;
  puVar6 = (undefined4 *)(iStack_10 + 0x5ac);
  pSVar7 = pSStack_8 + 0x6a9;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pSVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    pSVar7 = pSVar7 + 4;
  }
  *(undefined2 *)pSVar7 = *(undefined2 *)puVar6;
  puVar6 = (undefined4 *)(iStack_10 + 0x5ce);
  pSVar7 = pSStack_8 + 0x6cb;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pSVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    pSVar7 = pSVar7 + 4;
  }
  pSVar7 = pSStack_8 + 0x282;
  *(undefined4 *)(pSStack_8 + 0x6eb) = *(undefined4 *)(iStack_10 + 0x5ee);
  *(undefined4 *)(pSStack_8 + 0x6ef) = *(undefined4 *)(iStack_10 + 0x5f2);
  piVar8 = (int *)(iStack_10 + 0x14);
  pSVar4 = pSStack_8;
  do {
    if (*piVar8 == -1) {
      *(undefined4 *)pSVar7 = 0;
    }
    else {
      uVar3 = FUN_006b0060((uint *)0x0,(uint *)(*piVar8 + iVar5));
      *(undefined4 *)pSVar7 = uVar3;
      pSVar4 = pSStack_8;
    }
    piVar8 = piVar8 + 2;
    pSVar7 = pSVar7 + 4;
    iStack_c = iStack_c + -1;
  } while (iStack_c != 0);
  if (*(int *)(iVar5 + 0x37a) != -1) {
    uVar3 = FUN_006b0060((uint *)0x0,(uint *)(*(int *)(iVar5 + 0x37a) + iVar5));
    *(undefined4 *)(pSStack_8 + 0x47b) = uVar3;
    DAT_00858df8 = (undefined4 *)uStack_54;
    return;
  }
  *(undefined4 *)(pSVar4 + 0x47b) = 0;
  DAT_00858df8 = (undefined4 *)uStack_54;
  return;
}

