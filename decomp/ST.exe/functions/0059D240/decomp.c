
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::LicCtrls */

void __thiscall FSGSTy::LicCtrls(FSGSTy *this)

{
  code *pcVar1;
  FSGSTy *this_00;
  uint uVar2;
  undefined4 uVar3;
  LPBITMAPINFO ptVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  undefined4 *puVar7;
  void *unaff_EDI;
  int *piVar8;
  undefined4 *puVar9;
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
  
  piVar8 = local_8c4;
  local_8 = this;
  for (iVar6 = 0x21e; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar6 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar6 == 0) {
    puVar7 = &local_8->field_1E8E;
    if (local_8->field_1E8E != 0) {
      FUN_006ab060(puVar7);
    }
    if (this_00->field_1E92 != 0) {
      FUN_006ab060(&this_00->field_1E92);
    }
    iVar6 = 1;
    puVar9 = (undefined4 *)(*(int *)&this_00->field_0x5d + 0x28);
    uVar2 = FUN_006b4fe0(*(int *)&this_00->field_0x5d);
    uVar3 = FUN_006b50c0(0x2c8 - *(int *)&this_00->field_0x1b4c,0x149,
                         (uint)*(ushort *)(*(int *)&this_00->field_0x5d + 0xe),uVar2,puVar9,iVar6);
    *puVar7 = uVar3;
    ptVar4 = Library::DKW::DDX::FUN_006c4880(DAT_0080759c,0x22,0x72,0x2e1,0x14c,8);
    iVar6 = *puVar7;
    this_00->field_1E92 = ptVar4;
    if ((iVar6 != 0) && (ptVar4 != (LPBITMAPINFO)0x0)) {
      iVar6 = *(int *)&this_00->field_0x1a73;
      local_8c4[0] = 0;
      local_8c4[3] = 0;
      local_8c4[4] = 0x2c8 - *(int *)&this_00->field_0x1b4c;
      local_8c4[1] = 2;
      local_8a4 = 0x28;
      local_8a0 = 0x73;
      local_8c4[2] = 1;
      if (*(int *)(iVar6 + 0xa0) != 0) {
        FUN_00710790(iVar6);
      }
      local_8b0 = *(int *)(iVar6 + 0x8a);
      local_8a8 = (undefined4)(0x149 / (longlong)local_8b0);
      local_808[3] = *(undefined4 *)&this_00->field_0x1bd9;
      local_810 = 0;
      local_808[0] = 0;
      local_808[2] = *(undefined4 *)&this_00->field_0x1bd5;
      local_888 = 2;
      local_80c = 2;
      local_808[1] = 2;
      local_7f8 = *(undefined4 *)&this_00->field_0x1bdd;
      local_7a4 = 2;
      local_68c = 2;
      local_8ac = 1;
      local_884 = 0x6982;
      local_814 = 4;
      local_7f4 = *(undefined4 *)&this_00->field_0x1be1;
      local_6f8 = 500;
      local_6f4 = 0x32;
      local_7a0 = 0x6334;
      uVar3 = *(undefined4 *)&this_00->field_0x1b48;
      local_88c = *(undefined4 *)&this_00->field_0x8;
      local_7a8 = local_88c;
      puVar7 = local_808;
      puVar9 = local_688;
      for (iVar6 = 0x5f; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      local_688[2] = *(undefined4 *)&this_00->field_0x1b44;
      local_674 = *(undefined4 *)&this_00->field_0x1b50;
      local_678 = *(undefined4 *)&this_00->field_0x1b4c;
      local_4fc = *(undefined4 *)&this_00->field_0x1c66;
      local_4f4 = *(undefined4 *)&this_00->field_0x1c6e;
      local_4f8 = *(undefined4 *)&this_00->field_0x1c6a;
      local_620 = 0x6333;
      local_50c = 3;
      local_508 = 1;
      local_500 = 0;
      local_4f0 = 0xe7;
      local_4ec = 0xe;
      local_4b4 = 2;
      local_4b0 = 0x6335;
      local_688[3] = uVar3;
      local_4b8 = local_88c;
      (**(code **)(**(int **)&this_00->field_0xc + 8))(8,&this_00->field_0x1b14,0,local_8c4,0);
      *(undefined4 *)&this_00->field_0x2d = 5;
      FUN_006e6080(this_00,2,*(undefined4 *)&this_00->field_0x1b14,
                   (undefined4 *)&this_00->field_0x1d);
      if (*(uint *)&this_00->field_0x1b2c != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)&this_00->field_0x1b70,*(uint *)&this_00->field_0x1b2c,0xfffffffe,
                   *(uint *)&this_00->field_0x1b44,*(uint *)&this_00->field_0x1b48);
      }
      if (*(uint *)&this_00->field_0x1bbd != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)&this_00->field_0x1c01,*(uint *)&this_00->field_0x1bbd,0xfffffffe,
                   *(uint *)&this_00->field_0x1bd5,*(uint *)&this_00->field_0x1bd9);
      }
      if (*(uint *)&this_00->field_0x1c4e != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)&this_00->field_0x1c92,*(uint *)&this_00->field_0x1c4e,0xfffffffe,
                   *(uint *)&this_00->field_0x1c66,*(uint *)&this_00->field_0x1c6a);
      }
    }
    *(undefined4 *)&this_00->field_0x2d = 0x61;
    *(undefined4 *)&this_00->field_0x35 = 0;
    FUN_006e6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x666,0,iVar6,&DAT_007a4ccc,
                             s_FSGSTy__LicCtrls_007cc328);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar6,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x666);
  return;
}

