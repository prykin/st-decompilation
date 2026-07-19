
void __thiscall FSGSTy::InfoCtrls(FSGSTy *this,void *param_1)

{
  byte bVar1;
  code *pcVar2;
  FSGSTy *this_00;
  byte *pbVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  byte *pbVar7;
  void *unaff_EDI;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 auStack_8dc [11];
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  InternalExceptionFrame IStack_50;
  FSGSTy *pFStack_c;
  int iStack_8;
  
  pbVar3 = *(byte **)(this + 0x1b0c);
  if (pbVar3 != (byte *)0x0) {
    pbVar7 = &DAT_00807e1d;
    puVar8 = auStack_8dc;
    pFStack_c = this;
    for (iVar6 = 0x223; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    do {
      bVar1 = *pbVar3;
      bVar9 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_0059d77b:
        iStack_8 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_0059d780;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar9 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_0059d77b;
      pbVar3 = pbVar3 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iStack_8 = 0;
LAB_0059d780:
    IStack_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_50;
    iVar6 = __setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar6 == 0) {
      puVar4 = FUN_006b54f0((uint *)0x0,1,1);
      this_00 = pFStack_c;
      *(uint **)(pFStack_c + 0x1af8) = puVar4;
      FUN_006b5aa0((int)puVar4,&DAT_008016a0);
      puVar4 = FUN_006b54f0((uint *)0x0,1,1);
      *(uint **)(this_00 + 0x1afc) = puVar4;
      FUN_006b5aa0((int)puVar4,&DAT_008016a0);
      puVar4 = FUN_006b54f0((uint *)0x0,1,1);
      *(uint **)(this_00 + 0x1b00) = puVar4;
      FUN_006b5aa0((int)puVar4,&DAT_008016a0);
      puVar4 = FUN_006b54f0((uint *)0x0,1,1);
      *(uint **)(this_00 + 0x1b04) = puVar4;
      FUN_006b5aa0((int)puVar4,&DAT_008016a0);
      puVar8 = auStack_8dc;
      for (iVar6 = 0x223; iVar5 = iStack_8, iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      auStack_8dc[0] = 1;
      auStack_8dc[1] = 0x89;
      if (iStack_8 != 0) {
        auStack_8dc[1] = 0x99;
      }
      auStack_8dc[2] = *(undefined4 *)(this_00 + 0x1a73);
      auStack_8dc[8] = *(undefined4 *)(this_00 + 0x1af8);
      uStack_8b0 = *(undefined4 *)(this_00 + 8);
      uStack_68 = 2;
      uStack_8ac = 2;
      uStack_88c = 2;
      auStack_8dc[3] = 0xd2;
      auStack_8dc[4] = 0xb5;
      auStack_8dc[5] = 100;
      auStack_8dc[6] = 0x14;
      auStack_8dc[7] = 0x1ff;
      uStack_8a8 = 0x68ff;
      uStack_888 = 0x697f;
      uStack_64 = 0x6955;
      uStack_890 = uStack_8b0;
      uStack_6c = uStack_8b0;
      (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,this_00 + 0x1ad8,0,auStack_8dc,0);
      auStack_8dc[8] = *(undefined4 *)(this_00 + 0x1afc);
      auStack_8dc[3] = 0x15e;
      (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,this_00 + 0x1adc,0,auStack_8dc,0);
      auStack_8dc[8] = *(undefined4 *)(this_00 + 0x1b00);
      auStack_8dc[3] = 0x1ea;
      (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,this_00 + 0x1ae0,0,auStack_8dc,0);
      auStack_8dc[1] = 200;
      if (iVar5 != 0) {
        auStack_8dc[1] = 0xcc;
      }
      auStack_8dc[8] = *(undefined4 *)(this_00 + 0x1b04);
      auStack_8dc[3] = 0xd2;
      auStack_8dc[4] = 0xdd;
      auStack_8dc[5] = 0x17c;
      auStack_8dc[6] = 0x4b;
      uStack_888 = 0x6981;
      (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,this_00 + 0x1ae4,0,auStack_8dc,0);
      *(undefined4 *)(this_00 + 0x2d) = 0x61;
      *(undefined4 *)(this_00 + 0x35) = 0;
      FUN_006e6080(this_00,0xf,0,(undefined4 *)(this_00 + 0x1d));
      g_currentExceptionFrame = IStack_50.previous;
      return;
    }
    g_currentExceptionFrame = IStack_50.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x69c,0,iVar6,&DAT_007a4ccc
                               ,s_FSGSTy__InfoCtrls_007cc33c);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x69c);
  }
  return;
}

