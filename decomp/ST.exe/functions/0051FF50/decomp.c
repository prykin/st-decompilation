
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::InitInfocPanel */

void __thiscall InfocPanelTy::InitInfocPanel(InfocPanelTy *this)

{
  code *pcVar1;
  SpecPanelTy *this_00;
  int iVar2;
  LPSTR pCVar3;
  ushort *puVar4;
  byte *pbVar5;
  int iVar6;
  ccFntTy *this_01;
  int *piVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  UINT UVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
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
  SpecPanelTy *local_10;
  int local_c;
  int local_8;
  
  puVar17 = local_6c;
  local_10 = (SpecPanelTy *)this;
  for (iVar6 = 0x16; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar17 = 0;
    puVar17 = puVar17 + 1;
  }
  puVar17 = local_430;
  for (iVar6 = 0xe0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar17 = 0;
    puVar17 = puVar17 + 1;
  }
  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  iVar6 = Library::MSVCRT::__setjmp3(local_b0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar6 == 0) {
    uVar16 = 0x8b;
    uVar15 = 0xd8;
    UVar14 = 0x36bf;
    iVar13 = 0xb;
    iVar6 = 0xbf;
    uVar10 = 3;
    uVar9 = 0x40;
    DAT_00801698 = local_10;
    pCVar3 = thunk_FUN_00571240(s_BKG_INFOCENTERW_007c3f18,0);
    SpecPanelTy::InitPanel(this_00,pCVar3,uVar9,uVar10,iVar6,iVar13,UVar14,uVar15,uVar16);
    puVar4 = FUN_00709af0(DAT_00806794,CASE_B,(byte *)s_BUT_CHPLAYER_007c3f08,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)&this_00[2].field_0xba = puVar4;
    puVar4 = FUN_00709af0(DAT_00806794,CASE_B,(byte *)s_GAME_ALLY_007c3efc,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)&this_00[2].field_0xbe = puVar4;
    puVar17 = (undefined4 *)0x0;
    iVar13 = 0;
    iVar6 = 1;
    bVar12 = 0;
    uVar11 = 0xffffffff;
    pbVar5 = (byte *)thunk_FUN_00571240(s_IND_PNT_007c2078,0);
    puVar4 = FUN_00709af0(DAT_00806794,CASE_B,pbVar5,uVar11,bVar12,iVar6,iVar13,puVar17);
    *(ushort **)&this_00[2].field_0xc2 = puVar4;
    puVar17 = ccFntTy::operator(this_01,0x19d,DAT_00806790,s_MONEY_FONT_007c211c,0);
    *(undefined4 **)&this_00[2].field_0xcb = puVar17;
    puVar17[0x16] = 1;
    puVar17[0x17] = 0;
    local_c = this_00->field_005C;
    local_14 = *(int *)&this_00->field_0x3c + 0x1d;
    iVar13 = 0;
    iVar6 = 1;
    puVar17 = local_430 + 1;
    local_8 = 7;
    do {
      iVar8 = local_14;
      puVar17[-1] = iVar6;
      *puVar17 = 2;
      puVar17[2] = iVar8;
      iVar2 = local_c;
      puVar17[4] = 0x11;
      iVar8 = DAT_00806734;
      if (iVar2 != 0) {
        iVar8 = *(int *)&this_00->field_0x44;
      }
      iVar6 = iVar6 + 1;
      puVar17[3] = iVar13 + 0x23 + iVar8;
      puVar17[5] = 0xc;
      iVar13 = iVar13 + 0xd;
      puVar17 = puVar17 + 0x1c;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    local_5c = *(undefined4 *)&this_00->field_0x8;
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
    (**(code **)(**(int **)&this_00->field_0xc + 8))(5,&this_00[2].field_0xc6,0,local_6c,0);
    *(undefined4 *)&this_00[1].field_0x14f = 0x56;
    *(undefined4 *)&this_00[1].field_0x153 = 0x17;
    *(undefined4 *)&this_00[1].field_0x157 = 0x31;
    *(undefined4 *)&this_00[1].field_0x15b = 0x20;
    *(undefined4 *)&this_00[1].field_0x15f = 0x2760;
    *(undefined4 *)&this_00[1].field_0x163 = 0x88;
    *(undefined4 *)&this_00[1].field_0x167 = 0x17;
    *(undefined4 *)&this_00[1].field_0x16b = 0x31;
    *(undefined4 *)&this_00[1].field_0x16f = 0x20;
    *(undefined4 *)&this_00[1].field_0x173 = 0x2761;
    *(undefined4 *)((int)&this_00[1].field_0174 + 3) = 0xba;
    *(undefined4 *)&this_00[1].field_0x17b = 0x17;
    *(undefined4 *)&this_00[1].field_0x17f = 0x31;
    *(undefined4 *)&this_00[1].field_0x183 = 0x20;
    *(undefined4 *)&this_00[2].field_0x2 = 0x2762;
    *(undefined4 *)&this_00[2].field_0x6 = 0xee;
    *(undefined4 *)&this_00[2].field_0xa = 0x17;
    *(undefined4 *)&this_00[2].field_0xe = 0x31;
    *(undefined4 *)&this_00[2].field_0x12 = 0x20;
    *(undefined4 *)&this_00[2].field_0x16 = 0x2763;
    *(undefined4 *)&this_00[2].field_0x1a = 0x58;
    *(undefined4 *)&this_00[2].field_0x1e = 0x3e;
    *(undefined4 *)&this_00[2].field_0x22 = 0x31;
    *(undefined4 *)&this_00[2].field_0x26 = 0x20;
    *(undefined4 *)((int)&this_00[2].field_0028 + 2) = 0x2764;
    *(undefined4 *)&this_00[2].field_002E = 0x88;
    *(undefined4 *)&this_00[2].field_0x32 = 0x3e;
    *(undefined4 *)&this_00[2].field_0x36 = 0x31;
    *(undefined4 *)&this_00[2].field_0x3a = 0x20;
    *(undefined4 *)&this_00[2].field_0x3e = 0x2765;
    *(undefined4 *)&this_00[2].field_0x42 = 0xba;
    *(undefined4 *)&this_00[2].field_0x46 = 0x3e;
    *(undefined4 *)&this_00[2].field_0x4a = 0x31;
    *(undefined4 *)&this_00[2].field_0x4e = 0x20;
    *(undefined4 *)&this_00[2].field_0x5a = 0x3e;
    *(undefined4 *)((int)&this_00[2].field_005C + 2) = 0x31;
    *(undefined4 *)&this_00[2].field_0x62 = 0x20;
    *(undefined4 *)&this_00[2].field_0x52 = 0x2766;
    *(undefined4 *)&this_00[2].field_0x56 = 0xee;
    *(undefined4 *)&this_00[2].field_0x66 = 0x2767;
    *(undefined4 *)&this_00[2].field_0x6a = 0x56;
    *(undefined4 *)&this_00[2].field_0x6e = 0x65;
    *(undefined4 *)&this_00[2].field_0x72 = 0x1f;
    *(undefined4 *)&this_00[2].field_0x76 = 0x19;
    *(undefined4 *)&this_00[2].field_0x7a = 0x271f;
    *(undefined4 *)&this_00[2].field_0x7e = 0x75;
    *(undefined4 *)&this_00[2].field_0x82 = 0x65;
    *(undefined4 *)&this_00[2].field_0x86 = 0x2a;
    *(undefined4 *)&this_00[2].field_0x8a = 0x19;
    *(undefined4 *)&this_00[2].field_0x9e = 0x19;
    *(undefined4 *)&this_00[2].field_0xb2 = 0x19;
    *(undefined4 *)&this_00[2].field_0x8e = 0x271d;
    *(undefined4 *)&this_00[2].field_0x92 = 0x9f;
    *(undefined4 *)&this_00[2].field_0x96 = 0x65;
    *(undefined4 *)&this_00[2].field_0x9a = 0x2a;
    *(undefined4 *)&this_00[2].field_0xa2 = 0x2768;
    *(undefined4 *)&this_00[2].field_0xa6 = 0xcc;
    *(undefined4 *)&this_00[2].field_0xaa = 0x65;
    *(undefined4 *)&this_00[2].field_0xae = 0x53;
    *(undefined4 *)&this_00[2].field_0xb6 = 0x2769;
    iVar6 = 0xc;
    piVar7 = (int *)&this_00[1].field_0x153;
    do {
      piVar7[-1] = piVar7[-1] + *(int *)&this_00->field_0x3c;
      iVar6 = iVar6 + -1;
      *piVar7 = *piVar7 + (*(int *)&this_00->field_0x58 - *(int *)&this_00->field_0x48) +
                          *(int *)&this_00->field_0x50;
      piVar7 = piVar7 + 5;
    } while (iVar6 != 0);
    g_currentExceptionFrame = local_b0.previous;
    return;
  }
  g_currentExceptionFrame = local_b0.previous;
  iVar13 = ReportDebugMessage(s_E____titans_Andrey_infocen_cpp_007c3eb0,0x3e,0,iVar6,&DAT_007a4ccc,
                              s_InfocPanelTy__InitInfocPanel_007c3ed8);
  if (iVar13 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar6,0,s_E____titans_Andrey_infocen_cpp_007c3eb0,0x3e);
  return;
}

