
void __thiscall FSGSTy::NewGameCtrls(FSGSTy *this)

{
  code *pcVar1;
  FSGSTy *this_00;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar6;
  undefined4 auStack_8d8 [11];
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined4 uStack_84c;
  undefined4 uStack_848;
  undefined4 uStack_844;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  InternalExceptionFrame IStack_4c;
  FSGSTy *pFStack_8;
  
  puVar6 = auStack_8d8;
  pFStack_8 = this;
  for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  iVar5 = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar5 == 0) {
    puVar2 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00 = pFStack_8;
    *(uint **)(pFStack_8 + 0x1ae8) = puVar2;
    Library::DKW::TBL::FUN_006b5aa0((int)puVar2,&DAT_00807e1d);
    puVar2 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)(this_00 + 0x1aec) = puVar2;
    Library::DKW::TBL::FUN_006b5aa0((int)puVar2,&DAT_008016a0);
    puVar6 = auStack_8d8;
    for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    auStack_8d8[2] = *(undefined4 *)(this_00 + 0x1a73);
    auStack_8d8[8] = *(undefined4 *)(this_00 + 0x1ae8);
    uStack_8ac = *(undefined4 *)(this_00 + 8);
    uStack_848 = 2;
    uStack_64 = 2;
    uStack_8a8 = 2;
    uStack_888 = 2;
    auStack_8d8[0] = 1;
    auStack_8d8[1] = 0x89;
    auStack_8d8[3] = 0xd2;
    auStack_8d8[4] = 0x106;
    auStack_8d8[5] = 0x17c;
    auStack_8d8[6] = 0x19;
    auStack_8d8[7] = 0x20;
    uStack_8a4 = 0x68ff;
    uStack_884 = 0x697f;
    uStack_60 = 0x6955;
    uStack_844 = 0x63ff;
    uStack_88c = uStack_8ac;
    uStack_84c = uStack_8ac;
    uStack_68 = uStack_8ac;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,(MMObjTy *)(this_00 + 0x1ac4),0,auStack_8d8,0);
    auStack_8d8[8] = *(undefined4 *)(this_00 + 0x1aec);
    auStack_8d8[4] = 0x13d;
    auStack_8d8[5] = 0xaa;
    auStack_8d8[6] = 0x14;
    auStack_8d8[7] = 0x10;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,(MMObjTy *)(this_00 + 0x1ac8),0,auStack_8d8,0);
    *(undefined4 *)(this_00 + 0x1ec2) = 0x100;
    *(undefined4 *)(this_00 + 0x1ec6) = 0xffffffff;
    *(undefined4 *)(this_00 + 0x1eca) = 0;
    uVar3 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0xcd,0x16f,0x186,0x19,0x6904,0x698b);
    *(undefined4 *)(this_00 + 0x1eb6) = uVar3;
    *(undefined4 *)(this_00 + 0x2d) = 0x61;
    *(undefined4 *)(this_00 + 0x35) = 0;
    FUN_006e6080(this_00,0xf,0,(undefined4 *)(this_00 + 0x1d));
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x782,0,iVar5,&DAT_007a4ccc,
                             s_FSGSTy__NewGameCtrls_007cc36c);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar5,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x782);
  return;
}

