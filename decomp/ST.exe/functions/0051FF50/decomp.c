#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::InitInfocPanel */

void __thiscall InfocPanelTy::InitInfocPanel(InfocPanelTy *this)

{
  InfocPanelTy *this_00;
  int iVar2;
  int iVar6;
  LPSTR pCVar3;
  ushort *puVar4;
  ccFntTy *pcVar5;
  int iVar9;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  UINT UVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 local_430 [224];
  InternalExceptionFrame local_b0;
  undefined4 local_6c [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  InfocPanelTy *local_10;
  int local_c;
  int local_8;

  puVar17 = local_6c;
  local_10 = this;
  for (iVar7 = 0x16; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar17 = 0;
    puVar17 = puVar17 + 1;
  }
  memset(local_430, 0, 0x380); /* compiler bulk-zero initialization */
  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  iVar6 = Library::MSVCRT::__setjmp3(local_b0.jumpBuffer,0);
  this_00 = local_10;
  if (iVar6 == 0) {
    uVar16 = 0x8b;
    uVar15 = 0xd8;
    UVar14 = 0x36bf;
    iVar13 = 0xb;
    iVar10 = 0xbf;
    uVar9 = 3;
    iVar7 = 0x40;
    g_infocPanel_00801698 = local_10;
    pCVar3 = thunk_FUN_00571240("BKG_INFOCENTERW",0);
    /* ST_CALLSITE[0051FFDE]: CALL 0x00403800; direct=00403800 SpecPanelTy::InitPanel */
    SpecPanelTy::InitPanel
              ((SpecPanelTy *)this_00,pCVar3,iVar7,uVar9,iVar10,iVar13,UVar14,uVar15,uVar16);
    puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806794,CASE_B,"BUT_CHPLAYER",0xffffffff,0,1,0,
                        nullptr);
    this_00->field_03C4 = puVar4;
    puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806794,CASE_B,"GAME_ALLY",0xffffffff,0,1,0,nullptr);
    this_00->field_03C8 = puVar4;
    puVar17 = nullptr;
    iVar10 = 0;
    iVar7 = 1;
    bVar12 = 0;
    uVar11 = 0xffffffff;
    pCVar3 = thunk_FUN_00571240("IND_PNT",0);
    puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806794,CASE_B,pCVar3,uVar11,bVar12,iVar7,iVar10,puVar17);
    this_00->field_03CC = puVar4;
    /* ST_CALLSITE[0052006D]: CALL 0x0070ceb0; direct=0070CEB0 ccFntTy::operator_new */
    pcVar5 = (ccFntTy *)ccFntTy::operator_new(0x19d,g_cMf32_00806790,"MONEY_FONT",0);
    this_00->field_03D5 = pcVar5;
    pcVar5->field_0058 = 1;
    pcVar5->field_005C = 0;
    local_c = this_00->field_005C;
    local_14 = this_00->field_003C + 0x1d;
    iVar10 = 0;
    iVar7 = 1;
    puVar17 = local_430 + 1;
    local_8 = 7;
    do {
      iVar13 = local_14;
      puVar17[-1] = iVar7;
      *puVar17 = 2;
      puVar17[2] = iVar13;
      iVar2 = local_c;
      puVar17[4] = 0x11;
      iVar13 = DAT_00806734;
      if (iVar2 != 0) {
        iVar13 = this_00->field_0044;
      }
      iVar7 = iVar7 + 1;
      puVar17[3] = iVar10 + 0x23 + iVar13;
      puVar17[5] = 0xc;
      iVar10 = iVar10 + 0xd;
      puVar17 = puVar17 + 0x1c;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    local_5c = this_00->field_0008;
    local_24 = local_430;
    local_58 = 2;
    local_38 = 2;
    local_6c[0] = 1;
    local_20 = 1;
    local_54 = 0xb208;
    local_34 = 0xb209;
    local_1c = 1;
    local_18 = 1;
    local_3c = local_5c;
    /* ST_CALLSITE[00520136]: CALL dword ptr [EAX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,5,&this_00->field_03D0,nullptr,local_6c,0);
    this_00->field_02D4 = 0x56;
    this_00->field_02D8 = 0x17;
    this_00->field_02DC = 0x31;
    this_00->field_02E0 = 0x20;
    this_00->field_02E4 = 0x2760;
    this_00->field_02E8 = 0x88;
    this_00->field_02EC = 0x17;
    this_00->field_02F0 = 0x31;
    this_00->field_02F4 = 0x20;
    this_00->field_02F8 = 0x2761;
    this_00->field_02FC = 0xba;
    this_00->field_0300 = 0x17;
    this_00->field_0304 = 0x31;
    this_00->field_0308 = 0x20;
    this_00->field_030C = 0x2762;
    this_00->field_0310 = 0xee;
    this_00->field_0314 = 0x17;
    this_00->field_0318 = 0x31;
    this_00->field_031C = 0x20;
    this_00->field_0320 = 0x2763;
    this_00->field_0324 = 0x58;
    this_00->field_0328 = 0x3e;
    this_00->field_032C = 0x31;
    this_00->field_0330 = 0x20;
    this_00->field_0334 = 0x2764;
    this_00->field_0338 = 0x88;
    this_00->field_033C = 0x3e;
    this_00->field_0340 = 0x31;
    this_00->field_0344 = 0x20;
    this_00->field_0348 = 0x2765;
    this_00->field_034C = 0xba;
    this_00->field_0350 = 0x3e;
    this_00->field_0354 = 0x31;
    this_00->field_0358 = 0x20;
    this_00->field_0364 = 0x3e;
    this_00->field_0368 = 0x31;
    this_00->field_036C = 0x20;
    this_00->field_035C = 0x2766;
    this_00->field_0360 = 0xee;
    this_00->field_0370 = 0x2767;
    this_00->field_0374 = 0x56;
    this_00->field_0378 = 0x65;
    this_00->field_037C = 0x1f;
    this_00->field_0380 = 0x19;
    this_00->field_0384 = 0x271f;
    this_00->field_0388 = 0x75;
    this_00->field_038C = 0x65;
    this_00->field_0390 = 0x2a;
    this_00->field_0394 = 0x19;
    this_00->field_03A8 = 0x19;
    this_00->field_03BC = 0x19;
    this_00->field_0398 = 0x271d;
    this_00->field_039C = 0x9f;
    this_00->field_03A0 = 0x65;
    this_00->field_03A4 = 0x2a;
    this_00->field_03AC = 0x2768;
    this_00->field_03B0 = 0xcc;
    this_00->field_03B4 = 0x65;
    this_00->field_03B8 = 0x53;
    this_00->field_03C0 = 0x2769;
    iVar7 = 0xc;
    piVar8 = &this_00->field_02D8;
    do {
      piVar8[-1] = piVar8[-1] + this_00->field_003C;
      iVar7 = iVar7 + -1;
      *piVar8 = *piVar8 + (this_00->field_0058 - this_00->field_0048) + this_00->field_0050;
      piVar8 = piVar8 + 5;
    } while (iVar7 != 0);
    g_currentExceptionFrame = local_b0.previous;
    return;
  }
  g_currentExceptionFrame = local_b0.previous;
  iVar9 = ReportDebugMessage("E:\\__titans\\Andrey\\infocen.cpp",0x3e,0,iVar6,"%s",
                             "InfocPanelTy::InitInfocPanel");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar6,0,"E:\\__titans\\Andrey\\infocen.cpp",0x3e);
  return;
}

