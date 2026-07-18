
void __thiscall FSGSTy::NewIDCtrls(FSGSTy *this)

{
  code *pcVar1;
  FSGSTy *this_00;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar5;
  undefined4 auStack_8d8 [11];
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  FSGSTy *pFStack_8;
  
  puVar5 = auStack_8d8;
  pFStack_8 = this;
  for (iVar4 = 0x223; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar4 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    puVar2 = FUN_006b54f0((uint *)0x0,1,1);
    this_00 = pFStack_8;
    *(uint **)(pFStack_8 + 0x1ae8) = puVar2;
    FUN_006b5aa0((int)puVar2,&DAT_00807e1d);
    puVar2 = FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)(this_00 + 0x1aec) = puVar2;
    FUN_006b5aa0((int)puVar2,&DAT_008016a0);
    puVar2 = FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)(this_00 + 0x1af0) = puVar2;
    FUN_006b5aa0((int)puVar2,&DAT_008016a0);
    puVar2 = FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)(this_00 + 0x1af8) = puVar2;
    FUN_006b5aa0((int)puVar2,&DAT_008016a0);
    puVar2 = FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)(this_00 + 0x1afc) = puVar2;
    FUN_006b5aa0((int)puVar2,&DAT_008016a0);
    puVar2 = FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)(this_00 + 0x1b00) = puVar2;
    FUN_006b5aa0((int)puVar2,&DAT_008016a0);
    puVar2 = FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)(this_00 + 0x1b04) = puVar2;
    FUN_006b5aa0((int)puVar2,&DAT_008016a0);
    puVar5 = auStack_8d8;
    for (iVar4 = 0x223; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    auStack_8d8[2] = *(undefined4 *)(this_00 + 0x1a73);
    auStack_8d8[8] = *(undefined4 *)(this_00 + 0x1ae8);
    uStack_8ac = *(undefined4 *)(this_00 + 8);
    auStack_8d8[0] = 1;
    auStack_8d8[1] = 0x89;
    auStack_8d8[3] = 0xd2;
    auStack_8d8[4] = 0xd9;
    auStack_8d8[5] = 0x17c;
    auStack_8d8[6] = 0x19;
    auStack_8d8[7] = 0x10;
    uStack_64 = 2;
    uStack_8a8 = 2;
    uStack_888 = 2;
    uStack_8a4 = 0x68ff;
    uStack_884 = 0x697f;
    uStack_60 = 0x6955;
    uStack_88c = uStack_8ac;
    uStack_68 = uStack_8ac;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,this_00 + 0x1ac4,0,auStack_8d8,0);
    auStack_8d8[8] = *(undefined4 *)(this_00 + 0x1aec);
    auStack_8d8[1] = 0xa9;
    auStack_8d8[4] = 0x106;
    auStack_8d8[5] = 0xaa;
    auStack_8d8[6] = 0x14;
    auStack_8d8[7] = 0x10;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,this_00 + 0x1ac8,0,auStack_8d8,0);
    auStack_8d8[8] = *(undefined4 *)(this_00 + 0x1af0);
    auStack_8d8[3] = 0x1a4;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,this_00 + 0x1acc,0,auStack_8d8,0);
    auStack_8d8[8] = *(undefined4 *)(this_00 + 0x1af8);
    auStack_8d8[1] = 0x89;
    auStack_8d8[3] = 0xd2;
    auStack_8d8[4] = 0x12e;
    auStack_8d8[5] = 100;
    auStack_8d8[7] = 0x1ff;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,this_00 + 0x1ad8,0,auStack_8d8,0);
    auStack_8d8[8] = *(undefined4 *)(this_00 + 0x1afc);
    auStack_8d8[3] = 0x15e;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,this_00 + 0x1adc,0,auStack_8d8,0);
    auStack_8d8[8] = *(undefined4 *)(this_00 + 0x1b00);
    auStack_8d8[3] = 0x1ea;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,this_00 + 0x1ae0,0,auStack_8d8,0);
    auStack_8d8[8] = *(undefined4 *)(this_00 + 0x1b04);
    auStack_8d8[1] = 200;
    auStack_8d8[3] = 0xd2;
    auStack_8d8[4] = 0x156;
    auStack_8d8[5] = 0x17c;
    auStack_8d8[6] = 0x4b;
    uStack_884 = 0x6981;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,this_00 + 0x1ae4,0,auStack_8d8,0);
    *(undefined4 *)(this_00 + 0x2d) = 0x61;
    *(undefined4 *)(this_00 + 0x35) = 0;
    FUN_006e6080(this_00,0xf,0,(undefined4 *)(this_00 + 0x1d));
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar3 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x5f4,0,iVar4,&DAT_007a4ccc);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar4,0,0x7cbf70,0x5f4);
  return;
}

