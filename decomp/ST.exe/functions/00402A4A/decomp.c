
void thunk_FUN_005ddc70(void)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  void *unaff_EDI;
  int *piVar6;
  undefined4 *puVar7;
  int aiStack_8c4 [6];
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
  undefined4 auStack_808 [4];
  undefined4 uStack_7f8;
  undefined4 uStack_7f4;
  int iStack_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_68c;
  undefined4 auStack_688 [4];
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_620;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  int iStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int *piStack_8;
  
  piVar6 = aiStack_8c4;
  for (iVar4 = 0x21e; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar4 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    aiStack_8c4[0] = 0;
    aiStack_8c4[1] = 2;
    iVar4 = piStack_8[0xd];
    uStack_8a4 = 0xd;
    uStack_8a0 = 0xb9;
    aiStack_8c4[2] = 1;
    aiStack_8c4[3] = 0;
    aiStack_8c4[4] = 0xd5;
    if (*(int *)(iVar4 + 0xa0) != 0) {
      FUN_00710790(iVar4);
    }
    aiStack_8c4[5] = *(int *)(iVar4 + 0x8a);
    uStack_8a8 = (undefined4)(0x119 / (longlong)aiStack_8c4[5]);
    auStack_808[2] = *(undefined4 *)((int)piStack_8 + 0x43a);
    auStack_808[3] = *(undefined4 *)((int)piStack_8 + 0x43e);
    uStack_7f8 = *(undefined4 *)((int)piStack_8 + 0x442);
    uStack_888 = 0;
    uStack_810 = 0;
    uStack_80c = 2;
    auStack_808[0] = 0;
    auStack_808[1] = 2;
    uStack_7a4 = 0;
    uStack_68c = 2;
    uStack_7f4 = *(undefined4 *)((int)piStack_8 + 0x446);
    uVar1 = *(undefined4 *)((int)piStack_8 + 0x3ad);
    uStack_8ac = 1;
    uStack_884 = 0x6332;
    uStack_814 = 4;
    uStack_6f8 = 500;
    uStack_6f4 = 0x32;
    uStack_7a0 = 0x6334;
    iStack_88c = piStack_8[5];
    iStack_7a8 = iStack_88c;
    puVar5 = auStack_808;
    puVar7 = auStack_688;
    for (iVar4 = 0x5f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    auStack_688[2] = *(undefined4 *)((int)piStack_8 + 0x3a9);
    uStack_674 = *(undefined4 *)((int)piStack_8 + 0x3b5);
    uStack_678 = *(undefined4 *)((int)piStack_8 + 0x3b1);
    uStack_4fc = *(undefined4 *)((int)piStack_8 + 0x4cb);
    uStack_4f8 = *(undefined4 *)((int)piStack_8 + 0x4cf);
    uStack_4f4 = *(undefined4 *)((int)piStack_8 + 0x4d3);
    uStack_500 = 0;
    uStack_4b4 = 0;
    uStack_620 = 0x6333;
    uStack_50c = 3;
    uStack_508 = 1;
    uStack_4f0 = 0xdb;
    uStack_4ec = 0xe;
    uStack_4b0 = 0x6335;
    auStack_688[3] = uVar1;
    iStack_4b8 = iStack_88c;
    (**(code **)(*piStack_8 + 8))(8,(int)piStack_8 + 0x389,0,aiStack_8c4,0);
    FUN_006b3430(DAT_008075a8,piStack_8[0x150]);
    if (*(uint *)((int)piStack_8 + 0x391) != 0xffffffff) {
      FUN_006b34d0(*(uint **)((int)piStack_8 + 0x3d5),*(uint *)((int)piStack_8 + 0x391),0xfffffffe,
                   *(uint *)((int)piStack_8 + 0x3a9),*(uint *)((int)piStack_8 + 0x3ad));
    }
    if (*(uint *)((int)piStack_8 + 0x422) != 0xffffffff) {
      FUN_006b34d0(*(uint **)((int)piStack_8 + 0x466),*(uint *)((int)piStack_8 + 0x422),0xfffffffe,
                   *(uint *)((int)piStack_8 + 0x43a),*(uint *)((int)piStack_8 + 0x43e));
    }
    if (*(uint *)((int)piStack_8 + 0x4b3) != 0xffffffff) {
      FUN_006b34d0(*(uint **)((int)piStack_8 + 0x4f7),*(uint *)((int)piStack_8 + 0x4b3),0xfffffffe,
                   *(uint *)((int)piStack_8 + 0x4cb),*(uint *)((int)piStack_8 + 0x4cf));
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_startsys_cpp_007cd718,0x3b8,0,iVar4,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar4,0,0x7cd718,0x3b8);
  return;
}

