
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::InitInfocPanel */

void __thiscall InfocPanelTy::InitInfocPanel(InfocPanelTy *this)

{
  code *pcVar1;
  InfocPanelTy *this_00;
  int iVar2;
  LPSTR pCVar3;
  ushort *puVar4;
  byte *pbVar5;
  ccFntTy *pcVar6;
  int iVar7;
  ccFntTy *this_01;
  int *piVar8;
  int iVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  UINT UVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
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
  
  puVar18 = local_6c;
  local_10 = this;
  for (iVar7 = 0x16; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar18 = 0;
    puVar18 = puVar18 + 1;
  }
  puVar18 = local_430;
  for (iVar7 = 0xe0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar18 = 0;
    puVar18 = puVar18 + 1;
  }
  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  iVar7 = Library::MSVCRT::__setjmp3(local_b0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar7 == 0) {
    uVar17 = 0x8b;
    uVar16 = 0xd8;
    UVar15 = 0x36bf;
    iVar14 = 0xb;
    iVar7 = 0xbf;
    uVar11 = 3;
    uVar10 = 0x40;
    DAT_00801698 = local_10;
    pCVar3 = thunk_FUN_00571240(s_BKG_INFOCENTERW_007c3f18,0);
    SpecPanelTy::InitPanel
              ((SpecPanelTy *)this_00,pCVar3,uVar10,uVar11,iVar7,iVar14,UVar15,uVar16,uVar17);
    puVar4 = mfRLoad(DAT_00806794,CASE_B,(byte *)s_BUT_CHPLAYER_007c3f08,0xffffffff,0,1,0,
                     (undefined4 *)0x0);
    this_00->field_03C4 = puVar4;
    puVar4 = mfRLoad(DAT_00806794,CASE_B,(byte *)s_GAME_ALLY_007c3efc,0xffffffff,0,1,0,
                     (undefined4 *)0x0);
    this_00->field_03C8 = puVar4;
    puVar18 = (undefined4 *)0x0;
    iVar14 = 0;
    iVar7 = 1;
    bVar13 = 0;
    uVar12 = 0xffffffff;
    pbVar5 = (byte *)thunk_FUN_00571240(s_IND_PNT_007c2078,0);
    puVar4 = mfRLoad(DAT_00806794,CASE_B,pbVar5,uVar12,bVar13,iVar7,iVar14,puVar18);
    this_00->field_03CC = puVar4;
    pcVar6 = (ccFntTy *)ccFntTy::operator(this_01,0x19d,DAT_00806790,s_MONEY_FONT_007c211c,0);
    this_00->field_03D5 = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    local_c = this_00->field_005C;
    local_14 = this_00->field_003C + 0x1d;
    iVar14 = 0;
    iVar7 = 1;
    puVar18 = local_430 + 1;
    local_8 = 7;
    do {
      iVar9 = local_14;
      puVar18[-1] = iVar7;
      *puVar18 = 2;
      puVar18[2] = iVar9;
      iVar2 = local_c;
      puVar18[4] = 0x11;
      iVar9 = DAT_00806734;
      if (iVar2 != 0) {
        iVar9 = this_00->field_0044;
      }
      iVar7 = iVar7 + 1;
      puVar18[3] = iVar14 + 0x23 + iVar9;
      puVar18[5] = 0xc;
      iVar14 = iVar14 + 0xd;
      puVar18 = puVar18 + 0x1c;
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
    (**(code **)(*(int *)this_00->field_000C + 8))(5,&this_00->field_03D0,0,local_6c,0);
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
  iVar14 = ReportDebugMessage(s_E____titans_Andrey_infocen_cpp_007c3eb0,0x3e,0,iVar7,&DAT_007a4ccc,
                              s_InfocPanelTy__InitInfocPanel_007c3ed8);
  if (iVar14 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar7,0,s_E____titans_Andrey_infocen_cpp_007c3eb0,0x3e);
  return;
}

