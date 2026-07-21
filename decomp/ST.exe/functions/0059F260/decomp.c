#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::LadderCtrls */

void __thiscall FSGSTy::LadderCtrls(FSGSTy *this)

{
  code *pcVar1;
  FSGSTy *this_00;
  DArrayTy *pDVar2;
  uint uVar3;
  undefined4 uVar4;
  LPBITMAPINFO ptVar5;
  int iVar6;
  int iVar7;
  ccFntTy **ppcVar8;
  ushort *puVar9;
  ccFntTy *local_8e0 [8];
  uint *local_8c0;
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
  iVar6 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar6 == 0) {
    if ((AnonShape_006B5570_4D68B99C *)local_10->field_1AE8 != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)local_10->field_1AE8);
    }
    pDVar2 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,1,1);
    this_00->field_1AE8 = &pDVar2->flags;
    Library::DKW::TBL::FUN_006b5aa0(&pDVar2->flags,&DAT_008016a0);
    if (this_00->field_1E8E != 0) {
      FreeAndNull((void **)&this_00->field_1E8E);
    }
    if (this_00->field_1E92 != (tagBITMAPINFO *)0x0) {
      FreeAndNull(&this_00->field_1E92);
    }
    iVar6 = 1;
    puVar9 = this_00->field_005D + 0x14;
    uVar3 = FUN_006b4fe0((int)this_00->field_005D);
    uVar4 = FUN_006b50c0(0x2e1,0x175,(uint)this_00->field_005D[7],uVar3,(undefined4 *)puVar9,iVar6);
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
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)this_00->field_000C->vtable->field_0008)(6,&this_00->field_1AC4,0,local_8e0,0);
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

