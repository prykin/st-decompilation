#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::LadderCtrls */

void __thiscall FSGSTy::LadderCtrls(FSGSTy *this)

{
  FSGSTy *this_00;
  int iVar6;
  DArrayTy *pDVar2;
  uint uVar3;
  int local_EAX_198;
  LPBITMAPINFO ptVar4;
  undefined4 uVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  ccFntTy **ppcVar10;
  ushort *puVar11;
  ccFntTy *local_8e0 [8];
  DArrayTy *local_8c0;
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

  ppcVar10 = local_8e0;
  local_10 = this;
  for (iVar8 = 0x223; iVar8 != 0; iVar8 = iVar8 + -1) {
    *ppcVar10 = nullptr;
    ppcVar10 = ppcVar10 + 1;
  }
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar6 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar6 == 0) {
    if (local_10->field_1AE8 != nullptr) {
      FUN_006b5570(local_10->field_1AE8);
    }
    pDVar2 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
    this_00->field_1AE8 = pDVar2;
    Library::DKW::TBL::FUN_006b5aa0(pDVar2,&CHAR_00h_008016a0);
    if (this_00->field_1E8E != 0) {
      FreeAndNull(&this_00->field_1E8E);
    }
    if (this_00->field_1E92 != nullptr) {
      FreeAndNull(&this_00->field_1E92);
    }
    iVar8 = 1;
    puVar11 = this_00->field_005D + 0x14;
    uVar3 = FUN_006b4fe0((int)this_00->field_005D);
    local_EAX_198 =
         FUN_006b50c0(0x2e1,0x175,(uint)this_00->field_005D[7],uVar3,(undefined4 *)puVar11,iVar8);
    this_00->field_1E8E = local_EAX_198;
    ptVar4 = Library::DKW::DDX::FUN_006c4880(g_dDXContext_0080759C,0x22,0x5e,0x2e1,0x175,8);
    this_00->field_1E92 = ptVar4;
    uVar5 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x2c,0x90,0x96,0x19,0x6906,0x698e);
    this_00->field_1EB6 = uVar5;
    uVar5 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,199,0x90,0x96,0x19,0x6907,0x698f);
    this_00->field_1EBA = uVar5;
    uVar5 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,0,0x16c,0x90,0x19,0x19,0x6908,0x6990);
    this_00->field_1ED3 = uVar5;
    uVar5 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,499,0x90,0x19,0x19,0x6909,0x6991);
    this_00->field_1ED7 = uVar5;
    uVar5 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x2b6,0x90,0x41,0x19,0x690a,0x6992);
    this_00->field_1B24 = uVar5;
    iVar9 = 0x6913;
    iVar8 = 0xdb;
    local_8 = &this_00->field_1EE7;
    local_c = 0xf;
    do {
      uVar5 = MMObjTy::CreateSprBut((MMObjTy *)this_00,1,1,0x50,iVar8,0xe9,0x10,iVar9,0);
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 0x10;
      *local_8 = uVar5;
      local_8 = local_8 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    local_c = 0;
    ppcVar10 = local_8e0;
    for (iVar8 = 0x223; iVar8 != 0; iVar8 = iVar8 + -1) {
      *ppcVar10 = nullptr;
      ppcVar10 = ppcVar10 + 1;
    }
    local_8e0[2] = this_00->field_1A73;
    local_8c0 = this_00->field_1AE8;
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
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,6,&this_00->field_1AC4,nullptr,local_8e0,0);
    this_00->field_002D = 0x61;
    *(undefined4 *)&this_00->field_0x35 = 0;
    FUN_006e6080(this_00,0xf,0,(undefined4 *)&this_00->field_0x1d);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar7 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x81d,0,iVar6,"%s",
                             "FSGSTy::LadderCtrls");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar6,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x81d);
  return;
}

