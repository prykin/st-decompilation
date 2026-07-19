
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::LicCtrls */

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
  int local_8c4 [5];
  int local_8b0;
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_8a4;
  undefined4 local_8a0;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  undefined4 local_808 [4];
  undefined4 local_7f8;
  undefined4 local_7f4;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_68c;
  undefined4 local_688 [4];
  undefined4 local_678;
  undefined4 local_674;
  undefined4 local_620;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;
  
  piVar9 = local_8c4;
  local_8 = this;
  for (iVar7 = 0x21e; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar7 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar7 == 0) {
    pFVar1 = local_8 + 0x1e8e;
    if (*(int *)(local_8 + 0x1e8e) != 0) {
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
    ptVar5 = Library::DKW::DDX::FUN_006c4880(DAT_0080759c,0x22,0x72,0x2e1,0x14c,8);
    iVar7 = *(int *)pFVar1;
    *(LPBITMAPINFO *)(this_00 + 0x1e92) = ptVar5;
    if ((iVar7 != 0) && (ptVar5 != (LPBITMAPINFO)0x0)) {
      iVar7 = *(int *)(this_00 + 0x1a73);
      local_8c4[0] = 0;
      local_8c4[3] = 0;
      local_8c4[4] = 0x2c8 - *(int *)(this_00 + 0x1b4c);
      local_8c4[1] = 2;
      local_8a4 = 0x28;
      local_8a0 = 0x73;
      local_8c4[2] = 1;
      if (*(int *)(iVar7 + 0xa0) != 0) {
        FUN_00710790(iVar7);
      }
      local_8b0 = *(int *)(iVar7 + 0x8a);
      local_8a8 = (undefined4)(0x149 / (longlong)local_8b0);
      local_808[3] = *(undefined4 *)(this_00 + 0x1bd9);
      local_810 = 0;
      local_808[0] = 0;
      local_808[2] = *(undefined4 *)(this_00 + 0x1bd5);
      local_888 = 2;
      local_80c = 2;
      local_808[1] = 2;
      local_7f8 = *(undefined4 *)(this_00 + 0x1bdd);
      local_7a4 = 2;
      local_68c = 2;
      local_8ac = 1;
      local_884 = 0x6982;
      local_814 = 4;
      local_7f4 = *(undefined4 *)(this_00 + 0x1be1);
      local_6f8 = 500;
      local_6f4 = 0x32;
      local_7a0 = 0x6334;
      uVar2 = *(undefined4 *)(this_00 + 0x1b48);
      local_88c = *(undefined4 *)(this_00 + 8);
      local_7a8 = local_88c;
      puVar8 = local_808;
      puVar10 = local_688;
      for (iVar7 = 0x5f; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      local_688[2] = *(undefined4 *)(this_00 + 0x1b44);
      local_674 = *(undefined4 *)(this_00 + 0x1b50);
      local_678 = *(undefined4 *)(this_00 + 0x1b4c);
      local_4fc = *(undefined4 *)(this_00 + 0x1c66);
      local_4f4 = *(undefined4 *)(this_00 + 0x1c6e);
      local_4f8 = *(undefined4 *)(this_00 + 0x1c6a);
      local_620 = 0x6333;
      local_50c = 3;
      local_508 = 1;
      local_500 = 0;
      local_4f0 = 0xe7;
      local_4ec = 0xe;
      local_4b4 = 2;
      local_4b0 = 0x6335;
      local_688[3] = uVar2;
      local_4b8 = local_88c;
      (**(code **)(**(int **)(this_00 + 0xc) + 8))(8,this_00 + 0x1b14,0,local_8c4,0);
      *(undefined4 *)(this_00 + 0x2d) = 5;
      FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1b14),(undefined4 *)(this_00 + 0x1d));
      if (*(uint *)(this_00 + 0x1b2c) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)(this_00 + 0x1b70),*(uint *)(this_00 + 0x1b2c),0xfffffffe,
                   *(uint *)(this_00 + 0x1b44),*(uint *)(this_00 + 0x1b48));
      }
      if (*(uint *)(this_00 + 0x1bbd) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)(this_00 + 0x1c01),*(uint *)(this_00 + 0x1bbd),0xfffffffe,
                   *(uint *)(this_00 + 0x1bd5),*(uint *)(this_00 + 0x1bd9));
      }
      if (*(uint *)(this_00 + 0x1c4e) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)(this_00 + 0x1c92),*(uint *)(this_00 + 0x1c4e),0xfffffffe,
                   *(uint *)(this_00 + 0x1c66),*(uint *)(this_00 + 0x1c6a));
      }
    }
    *(undefined4 *)(this_00 + 0x2d) = 0x61;
    *(undefined4 *)(this_00 + 0x35) = 0;
    FUN_006e6080(this_00,0xf,0,(undefined4 *)(this_00 + 0x1d));
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
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

