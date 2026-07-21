
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::LicCtrls */

void __thiscall FSGSTy::LicCtrls(FSGSTy *this)

{
  ccFntTy *pcVar1;
  code *pcVar2;
  FSGSTy *this_00;
  uint uVar3;
  undefined4 uVar4;
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
    puVar8 = &local_8->field_1E8E;
    if (local_8->field_1E8E != 0) {
      FreeAndNull((void **)puVar8);
    }
    if (this_00->field_1E92 != 0) {
      FreeAndNull((void **)&this_00->field_1E92);
    }
    iVar7 = 1;
    puVar10 = (undefined4 *)(this_00->field_005D + 0x28);
    uVar3 = FUN_006b4fe0(this_00->field_005D);
    uVar4 = FUN_006b50c0(0x2c8 - this_00->field_1B4C,0x149,
                         (uint)*(ushort *)(this_00->field_005D + 0xe),uVar3,puVar10,iVar7);
    *puVar8 = uVar4;
    ptVar5 = Library::DKW::DDX::FUN_006c4880(DAT_0080759c,0x22,0x72,0x2e1,0x14c,8);
    iVar7 = *puVar8;
    this_00->field_1E92 = ptVar5;
    if ((iVar7 != 0) && (ptVar5 != (LPBITMAPINFO)0x0)) {
      pcVar1 = this_00->field_1A73;
      local_8c4[0] = 0;
      local_8c4[3] = 0;
      local_8c4[4] = 0x2c8 - this_00->field_1B4C;
      local_8c4[1] = 2;
      local_8a4 = 0x28;
      local_8a0 = 0x73;
      local_8c4[2] = 1;
      if (pcVar1->field_00A0 != 0) {
        FUN_00710790((uint *)pcVar1);
      }
      local_8b0 = *(int *)&pcVar1->field_0x8a;
      local_8a8 = (undefined4)(0x149 / (longlong)local_8b0);
      local_808[3] = this_00->field_1BD9;
      local_810 = 0;
      local_808[0] = 0;
      local_808[2] = this_00->field_1BD5;
      local_888 = 2;
      local_80c = 2;
      local_808[1] = 2;
      local_7f8 = this_00->field_1BDD;
      local_7a4 = 2;
      local_68c = 2;
      local_8ac = 1;
      local_884 = 0x6982;
      local_814 = 4;
      local_7f4 = this_00->field_1BE1;
      local_6f8 = 500;
      local_6f4 = 0x32;
      local_7a0 = 0x6334;
      uVar4 = this_00->field_1B48;
      local_88c = this_00->field_0008;
      local_7a8 = local_88c;
      puVar8 = local_808;
      puVar10 = local_688;
      for (iVar7 = 0x5f; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      local_688[2] = this_00->field_1B44;
      local_674 = this_00->field_1B50;
      local_678 = this_00->field_1B4C;
      local_4fc = this_00->field_1C66;
      local_4f4 = this_00->field_1C6E;
      local_4f8 = this_00->field_1C6A;
      local_620 = 0x6333;
      local_50c = 3;
      local_508 = 1;
      local_500 = 0;
      local_4f0 = 0xe7;
      local_4ec = 0xe;
      local_4b4 = 2;
      local_4b0 = 0x6335;
      local_688[3] = uVar4;
      local_4b8 = local_88c;
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,8,&this_00->field_1B14,(int *)0x0,local_8c4,0)
      ;
      this_00->field_002D = 5;
      FUN_006e6080(this_00,2,this_00->field_1B14,(undefined4 *)&this_00->field_0x1d);
      if (this_00->field_1B2C != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)this_00->field_1B70,this_00->field_1B2C,0xfffffffe,this_00->field_1B44,
                   this_00->field_1B48);
      }
      if (this_00->field_1BBD != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)this_00->field_1C01,this_00->field_1BBD,0xfffffffe,this_00->field_1BD5,
                   this_00->field_1BD9);
      }
      if (this_00->field_1C4E != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)this_00->field_1C92,this_00->field_1C4E,0xfffffffe,this_00->field_1C66,
                   this_00->field_1C6A);
      }
    }
    this_00->field_002D = 0x61;
    *(undefined4 *)&this_00->field_0x35 = 0;
    FUN_006e6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x666,0,iVar7,&DAT_007a4ccc,
                             s_FSGSTy__LicCtrls_007cc328);
  if (iVar6 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar7,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x666);
  return;
}

