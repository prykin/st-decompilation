
void __thiscall FSGSTy::LicCtrls(FSGSTy *this)

{
  FSGSTy *pFVar1;
  undefined4 uVar2;
  code *pcVar3;
  FSGSTy *this_00;
  uint uVar4;
  LPBITMAPINFO ptVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  void *unaff_EDI;
  int *piVar9;
  undefined4 *puVar10;
  int aiStack_8c4 [5];
  int iStack_8b0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined4 uStack_8a0;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 auStack_808 [4];
  undefined4 uStack_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7a8;
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
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  InternalExceptionFrame IStack_4c;
  FSGSTy *pFStack_8;
  
  piVar9 = aiStack_8c4;
  pFStack_8 = this;
  for (iVar7 = 0x21e; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  iVar7 = __setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = pFStack_8;
  if (iVar7 == 0) {
    pFVar1 = pFStack_8 + 0x1e8e;
    if (*(int *)(pFStack_8 + 0x1e8e) != 0) {
      FUN_006ab060((undefined4 *)pFVar1);
    }
    if (*(int *)(this_00 + 0x1e92) != 0) {
      FUN_006ab060((undefined4 *)(this_00 + 0x1e92));
    }
    iVar7 = 1;
    puVar8 = (undefined4 *)(*(int *)(this_00 + 0x5d) + 0x28);
    uVar4 = FUN_006b4fe0(*(int *)(this_00 + 0x5d));
    iVar7 = FUN_006b50c0(0x2c8 - *(int *)(this_00 + 0x1b4c),0x149,
                         (uint)*(ushort *)(*(int *)(this_00 + 0x5d) + 0xe),uVar4,puVar8,iVar7);
    *(int *)pFVar1 = iVar7;
    ptVar5 = FUN_006c4880(DAT_0080759c,0x22,0x72,0x2e1,0x14c,8);
    iVar7 = *(int *)pFVar1;
    *(LPBITMAPINFO *)(this_00 + 0x1e92) = ptVar5;
    if ((iVar7 != 0) && (ptVar5 != (LPBITMAPINFO)0x0)) {
      iVar7 = *(int *)(this_00 + 0x1a73);
      aiStack_8c4[0] = 0;
      aiStack_8c4[3] = 0;
      aiStack_8c4[4] = 0x2c8 - *(int *)(this_00 + 0x1b4c);
      aiStack_8c4[1] = 2;
      uStack_8a4 = 0x28;
      uStack_8a0 = 0x73;
      aiStack_8c4[2] = 1;
      if (*(int *)(iVar7 + 0xa0) != 0) {
        FUN_00710790(iVar7);
      }
      iStack_8b0 = *(int *)(iVar7 + 0x8a);
      uStack_8a8 = (undefined4)(0x149 / (longlong)iStack_8b0);
      auStack_808[3] = *(undefined4 *)(this_00 + 0x1bd9);
      uStack_810 = 0;
      auStack_808[0] = 0;
      auStack_808[2] = *(undefined4 *)(this_00 + 0x1bd5);
      uStack_888 = 2;
      uStack_80c = 2;
      auStack_808[1] = 2;
      uStack_7f8 = *(undefined4 *)(this_00 + 0x1bdd);
      uStack_7a4 = 2;
      uStack_68c = 2;
      uStack_8ac = 1;
      uStack_884 = 0x6982;
      uStack_814 = 4;
      uStack_7f4 = *(undefined4 *)(this_00 + 0x1be1);
      uStack_6f8 = 500;
      uStack_6f4 = 0x32;
      uStack_7a0 = 0x6334;
      uVar2 = *(undefined4 *)(this_00 + 0x1b48);
      uStack_88c = *(undefined4 *)(this_00 + 8);
      uStack_7a8 = uStack_88c;
      puVar8 = auStack_808;
      puVar10 = auStack_688;
      for (iVar7 = 0x5f; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      auStack_688[2] = *(undefined4 *)(this_00 + 0x1b44);
      uStack_674 = *(undefined4 *)(this_00 + 0x1b50);
      uStack_678 = *(undefined4 *)(this_00 + 0x1b4c);
      uStack_4fc = *(undefined4 *)(this_00 + 0x1c66);
      uStack_4f4 = *(undefined4 *)(this_00 + 0x1c6e);
      uStack_4f8 = *(undefined4 *)(this_00 + 0x1c6a);
      uStack_620 = 0x6333;
      uStack_50c = 3;
      uStack_508 = 1;
      uStack_500 = 0;
      uStack_4f0 = 0xe7;
      uStack_4ec = 0xe;
      uStack_4b4 = 2;
      uStack_4b0 = 0x6335;
      auStack_688[3] = uVar2;
      uStack_4b8 = uStack_88c;
      (**(code **)(**(int **)(this_00 + 0xc) + 8))(8,this_00 + 0x1b14,0,aiStack_8c4,0);
      *(undefined4 *)(this_00 + 0x2d) = 5;
      FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1b14),(undefined4 *)(this_00 + 0x1d));
      if (*(uint *)(this_00 + 0x1b2c) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(this_00 + 0x1b70),*(uint *)(this_00 + 0x1b2c),0xfffffffe,
                     *(uint *)(this_00 + 0x1b44),*(uint *)(this_00 + 0x1b48));
      }
      if (*(uint *)(this_00 + 0x1bbd) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(this_00 + 0x1c01),*(uint *)(this_00 + 0x1bbd),0xfffffffe,
                     *(uint *)(this_00 + 0x1bd5),*(uint *)(this_00 + 0x1bd9));
      }
      if (*(uint *)(this_00 + 0x1c4e) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(this_00 + 0x1c92),*(uint *)(this_00 + 0x1c4e),0xfffffffe,
                     *(uint *)(this_00 + 0x1c66),*(uint *)(this_00 + 0x1c6a));
      }
    }
    *(undefined4 *)(this_00 + 0x2d) = 0x61;
    *(undefined4 *)(this_00 + 0x35) = 0;
    FUN_006e6080(this_00,0xf,0,(undefined4 *)(this_00 + 0x1d));
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x666,0,iVar7,&DAT_007a4ccc,
                             s_FSGSTy__LicCtrls_007cc328);
  if (iVar6 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  RaiseInternalException(iVar7,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x666);
  return;
}

