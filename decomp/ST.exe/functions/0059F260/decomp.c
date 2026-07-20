
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::LadderCtrls */

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
  ccFntTy **ppcVar8;
  undefined4 *puVar9;
  ccFntTy *local_8e0 [19];
  undefined4 local_894;
  undefined4 local_890;
  undefined4 local_88c;
  undefined4 local_854;
  undefined4 local_850;
  undefined4 local_84c;
  InternalExceptionFrame local_54;
  FSGSTy *local_10;
  int local_c;
  undefined4 *local_8;
  
  ppcVar8 = local_8e0;
  local_10 = this;
  for (iVar6 = 0x223; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppcVar8 = (ccFntTy *)0x0;
    ppcVar8 = ppcVar8 + 1;
  }
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar6 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar6 == 0) {
    if ((byte *)local_10->field_1AE8 != (byte *)0x0) {
      FUN_006b5570((byte *)local_10->field_1AE8);
    }
    puVar2 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00->field_1AE8 = puVar2;
    Library::DKW::TBL::FUN_006b5aa0(puVar2,&DAT_008016a0);
    if (this_00->field_1E8E != 0) {
      FUN_006ab060((LPVOID *)&this_00->field_1E8E);
    }
    if (this_00->field_1E92 != 0) {
      FUN_006ab060((LPVOID *)&this_00->field_1E92);
    }
    iVar6 = 1;
    puVar9 = (undefined4 *)(this_00->field_005D + 0x28);
    uVar3 = FUN_006b4fe0(this_00->field_005D);
    uVar4 = FUN_006b50c0(0x2e1,0x175,(uint)*(ushort *)(this_00->field_005D + 0xe),uVar3,puVar9,iVar6
                        );
    this_00->field_1E8E = uVar4;
    ptVar5 = Library::DKW::DDX::FUN_006c4880(DAT_0080759c,0x22,0x5e,0x2e1,0x175,8);
    this_00->field_1E92 = ptVar5;
    uVar4 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x2c,0x90,0x96,0x19,0x6906,0x698e);
    this_00->field_1EB6 = uVar4;
    uVar4 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,199,0x90,0x96,0x19,0x6907,0x698f);
    this_00->field_1EBA = uVar4;
    uVar4 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,0,0x16c,0x90,0x19,0x19,0x6908,0x6990);
    this_00->field_1ED3 = uVar4;
    uVar4 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,499,0x90,0x19,0x19,0x6909,0x6991);
    this_00->field_1ED7 = uVar4;
    uVar4 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x2b6,0x90,0x41,0x19,0x690a,0x6992);
    this_00->field_1B24 = uVar4;
    iVar7 = 0x6913;
    iVar6 = 0xdb;
    local_8 = &this_00->field_1EE7;
    local_c = 0xf;
    do {
      uVar4 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x50,iVar6,0xe9,0x10,iVar7,0);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x10;
      *local_8 = uVar4;
      local_8 = local_8 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    local_c = 0;
    ppcVar8 = local_8e0;
    for (iVar6 = 0x223; iVar6 != 0; iVar6 = iVar6 + -1) {
      *ppcVar8 = (ccFntTy *)0x0;
      ppcVar8 = ppcVar8 + 1;
    }
    local_8e0[2] = this_00->field_1A73;
    local_8e0[8] = (ccFntTy *)this_00->field_1AE8;
    local_894 = this_00->field_0008;
    local_850 = 2;
    local_890 = 2;
    local_8e0[0] = (ccFntTy *)0x1;
    local_8e0[1] = (ccFntTy *)0x89;
    local_8e0[3] = (ccFntTy *)0x21c;
    local_8e0[4] = (ccFntTy *)0x90;
    local_8e0[5] = (ccFntTy *)0x94;
    local_8e0[6] = (ccFntTy *)0x17;
    local_8e0[7] = (ccFntTy *)0x10;
    local_84c = 0x690a;
    local_88c = 0x6988;
    local_854 = local_894;
    (**(code **)(*(int *)this_00->field_000C + 8))(6,&this_00->field_1AC4,0,local_8e0,0);
    this_00->field_002D = 0x61;
    *(undefined4 *)&this_00->field_0x35 = 0;
    FUN_006e6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
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

