
void thunk_FUN_005de270(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  int *piVar5;
  void *unaff_EDI;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 auStack_8c4 [5];
  int iStack_8b0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined4 uStack_8a0;
  int iStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  int aiStack_808 [4];
  undefined4 uStack_7f8;
  undefined4 uStack_7f4;
  int iStack_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_68c;
  int aiStack_688 [4];
  int iStack_678;
  int iStack_674;
  undefined4 uStack_620;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int *piStack_8;
  
  puVar6 = auStack_8c4;
  for (iVar3 = 0x21e; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    auStack_8c4[0] = 0;
    auStack_8c4[1] = 2;
    iVar3 = piStack_8[0xd];
    uStack_8a4 = 0xcd;
    uStack_8a0 = 499;
    auStack_8c4[2] = 1;
    auStack_8c4[3] = 0;
    auStack_8c4[4] = *(undefined4 *)(*(int *)((int)piStack_8 + 0x67e) + 4);
    if (*(int *)(iVar3 + 0xa0) != 0) {
      FUN_00710790(iVar3);
    }
    iStack_8b0 = *(int *)(iVar3 + 0x8a);
    uStack_8a8 = (undefined4)(0x49 / (longlong)iStack_8b0);
    aiStack_808[2] = *(undefined4 *)((int)piStack_8 + 0x609);
    aiStack_808[3] = *(undefined4 *)((int)piStack_8 + 0x60d);
    uStack_7f8 = *(undefined4 *)((int)piStack_8 + 0x611);
    uStack_888 = 0;
    uStack_810 = 0;
    uStack_80c = 2;
    aiStack_808[0] = 0;
    aiStack_808[1] = 2;
    uStack_7a4 = 0;
    uStack_68c = 2;
    uStack_8ac = 1;
    uStack_884 = 0x633f;
    uStack_814 = 4;
    uStack_7f4 = *(undefined4 *)((int)piStack_8 + 0x615);
    iVar3 = piStack_8[0x160];
    uStack_6f8 = 500;
    uStack_6f4 = 0x32;
    uStack_7a0 = 0x6341;
    iStack_88c = piStack_8[5];
    iStack_7a8 = iStack_88c;
    iVar2 = piStack_8[0x15e];
    piVar5 = aiStack_808;
    piVar7 = aiStack_688;
    for (iVar4 = 0x5f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar7 = piVar7 + 1;
    }
    aiStack_688[3] = piStack_8[0x15f];
    iStack_674 = piStack_8[0x161];
    uStack_620 = 0x6340;
    aiStack_688[2] = iVar2;
    iStack_678 = iVar3;
    (**(code **)(*piStack_8 + 8))(8,piStack_8 + 0x154,0,auStack_8c4,0);
    FUN_006b3430(DAT_008075a8,piStack_8[0x156]);
    if (piStack_8[0x158] != 0xffffffff) {
      FUN_006b34d0((uint *)piStack_8[0x169],piStack_8[0x158],0xfffffffe,piStack_8[0x15e],
                   piStack_8[0x15f]);
    }
    if (*(uint *)((int)piStack_8 + 0x5f1) != 0xffffffff) {
      FUN_006b34d0(*(uint **)((int)piStack_8 + 0x635),*(uint *)((int)piStack_8 + 0x5f1),0xfffffffe,
                   *(uint *)((int)piStack_8 + 0x609),*(uint *)((int)piStack_8 + 0x60d));
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar2 = FUN_006ad4d0(s_E____titans_Start_startsys_cpp_007cd718,0x3f9,0,iVar3,&DAT_007a4ccc);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7cd718,0x3f9);
  return;
}

