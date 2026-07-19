
void __thiscall FSGSTy::LadderCtrls(FSGSTy *this)

{
  code *pcVar1;
  FSGSTy *this_00;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  LPBITMAPINFO ptVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar7;
  undefined4 *puVar8;
  undefined4 auStack_8e0 [19];
  undefined4 uStack_894;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  undefined4 uStack_854;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  InternalExceptionFrame IStack_54;
  FSGSTy *pFStack_10;
  int iStack_c;
  MMObjTy *pMStack_8;
  
  puVar8 = auStack_8e0;
  pFStack_10 = this;
  for (iVar6 = 0x223; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  IStack_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_54;
  iVar6 = Library::MSVCRT::__setjmp3(IStack_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pFStack_10;
  if (iVar6 == 0) {
    if (*(byte **)(pFStack_10 + 0x1ae8) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(pFStack_10 + 0x1ae8));
    }
    puVar2 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)(this_00 + 0x1ae8) = puVar2;
    Library::DKW::TBL::FUN_006b5aa0((int)puVar2,&DAT_008016a0);
    if (*(int *)(this_00 + 0x1e8e) != 0) {
      FUN_006ab060((undefined4 *)(this_00 + 0x1e8e));
    }
    if (*(int *)(this_00 + 0x1e92) != 0) {
      FUN_006ab060((undefined4 *)(this_00 + 0x1e92));
    }
    iVar6 = 1;
    puVar8 = (undefined4 *)(*(int *)(this_00 + 0x5d) + 0x28);
    uVar3 = FUN_006b4fe0(*(int *)(this_00 + 0x5d));
    uVar4 = FUN_006b50c0(0x2e1,0x175,(uint)*(ushort *)(*(int *)(this_00 + 0x5d) + 0xe),uVar3,puVar8,
                         iVar6);
    *(undefined4 *)(this_00 + 0x1e8e) = uVar4;
    ptVar5 = Library::DKW::DDX::FUN_006c4880(DAT_0080759c,0x22,0x5e,0x2e1,0x175,8);
    *(LPBITMAPINFO *)(this_00 + 0x1e92) = ptVar5;
    uVar4 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x2c,0x90,0x96,0x19,0x6906,0x698e);
    *(undefined4 *)(this_00 + 0x1eb6) = uVar4;
    uVar4 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,199,0x90,0x96,0x19,0x6907,0x698f);
    *(undefined4 *)(this_00 + 0x1eba) = uVar4;
    uVar4 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,0,0x16c,0x90,0x19,0x19,0x6908,0x6990);
    *(undefined4 *)(this_00 + 0x1ed3) = uVar4;
    uVar4 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,499,0x90,0x19,0x19,0x6909,0x6991);
    *(undefined4 *)(this_00 + 0x1ed7) = uVar4;
    uVar4 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x2b6,0x90,0x41,0x19,0x690a,0x6992);
    *(undefined4 *)(this_00 + 0x1b24) = uVar4;
    iVar7 = 0x6913;
    iVar6 = 0xdb;
    pMStack_8 = (MMObjTy *)(this_00 + 0x1ee7);
    iStack_c = 0xf;
    do {
      uVar4 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x50,iVar6,0xe9,0x10,iVar7,0);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x10;
      *(undefined4 *)pMStack_8 = uVar4;
      pMStack_8 = pMStack_8 + 4;
      iStack_c = iStack_c + -1;
    } while (iStack_c != 0);
    iStack_c = 0;
    puVar8 = auStack_8e0;
    for (iVar6 = 0x223; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    auStack_8e0[2] = *(undefined4 *)(this_00 + 0x1a73);
    auStack_8e0[8] = *(undefined4 *)(this_00 + 0x1ae8);
    uStack_894 = *(undefined4 *)(this_00 + 8);
    uStack_850 = 2;
    uStack_890 = 2;
    auStack_8e0[0] = 1;
    auStack_8e0[1] = 0x89;
    auStack_8e0[3] = 0x21c;
    auStack_8e0[4] = 0x90;
    auStack_8e0[5] = 0x94;
    auStack_8e0[6] = 0x17;
    auStack_8e0[7] = 0x10;
    uStack_84c = 0x690a;
    uStack_88c = 0x6988;
    uStack_854 = uStack_894;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(6,(MMObjTy *)(this_00 + 0x1ac4),0,auStack_8e0,0);
    *(undefined4 *)(this_00 + 0x2d) = 0x61;
    *(undefined4 *)(this_00 + 0x35) = 0;
    FUN_006e6080(this_00,0xf,0,(undefined4 *)(this_00 + 0x1d));
    g_currentExceptionFrame = IStack_54.previous;
    return;
  }
  g_currentExceptionFrame = IStack_54.previous;
  iVar7 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x81d,0,iVar6,&DAT_007a4ccc,
                             s_FSGSTy__LadderCtrls_007cc3a4);
  if (iVar7 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar6,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x81d);
  return;
}

