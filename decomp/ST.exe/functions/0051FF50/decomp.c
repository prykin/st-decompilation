
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
  int iVar6;
  SpecPanelTy *pSVar7;
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
  InfocPanelTy *local_10;
  int local_c;
  int local_8;
  
  puVar17 = local_6c;
  local_10 = this;
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
  iVar6 = __setjmp3(local_b0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar6 == 0) {
    uVar16 = 0x8b;
    uVar15 = 0xd8;
    UVar14 = 0x36bf;
    iVar13 = 0xb;
    iVar6 = 0xbf;
    uVar10 = 3;
    uVar9 = 0x40;
    DAT_00801698 = (SpecPanelTy *)local_10;
    pCVar3 = thunk_FUN_00571240(s_BKG_INFOCENTERW_007c3f18,0);
    SpecPanelTy::InitPanel
              ((SpecPanelTy *)this_00,pCVar3,uVar9,uVar10,iVar6,iVar13,UVar14,uVar15,uVar16);
    puVar4 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_BUT_CHPLAYER_007c3f08,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)(this_00 + 0x3c4) = puVar4;
    puVar4 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_GAME_ALLY_007c3efc,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)(this_00 + 0x3c8) = puVar4;
    puVar17 = (undefined4 *)0x0;
    iVar13 = 0;
    iVar6 = 1;
    bVar12 = 0;
    uVar11 = 0xffffffff;
    pbVar5 = (byte *)thunk_FUN_00571240(s_IND_PNT_007c2078,0);
    puVar4 = FUN_00709af0(DAT_00806794,0xb,pbVar5,uVar11,bVar12,iVar6,iVar13,puVar17);
    *(ushort **)(this_00 + 0x3cc) = puVar4;
    puVar17 = FUN_0070ceb0(0x19d,DAT_00806790,s_MONEY_FONT_007c211c,0);
    *(undefined4 **)(this_00 + 0x3d5) = puVar17;
    puVar17[0x16] = 1;
    puVar17[0x17] = 0;
    local_c = *(int *)(this_00 + 0x5c);
    local_14 = *(int *)(this_00 + 0x3c) + 0x1d;
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
        iVar8 = *(int *)(this_00 + 0x44);
      }
      iVar6 = iVar6 + 1;
      puVar17[3] = iVar13 + 0x23 + iVar8;
      puVar17[5] = 0xc;
      iVar13 = iVar13 + 0xd;
      puVar17 = puVar17 + 0x1c;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    local_5c = *(undefined4 *)(this_00 + 8);
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
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(5,(SpecPanelTy *)(this_00 + 0x3d0),0,local_6c,0);
    *(undefined4 *)(this_00 + 0x2d4) = 0x56;
    *(int *)(this_00 + 0x2d8) = 0x17;
    *(undefined4 *)(this_00 + 0x2dc) = 0x31;
    *(undefined4 *)(this_00 + 0x2e0) = 0x20;
    *(undefined4 *)(this_00 + 0x2e4) = 0x2760;
    *(undefined4 *)(this_00 + 0x2e8) = 0x88;
    *(undefined4 *)(this_00 + 0x2ec) = 0x17;
    *(undefined4 *)(this_00 + 0x2f0) = 0x31;
    *(undefined4 *)(this_00 + 0x2f4) = 0x20;
    *(undefined4 *)(this_00 + 0x2f8) = 0x2761;
    *(undefined4 *)(this_00 + 0x2fc) = 0xba;
    *(undefined4 *)(this_00 + 0x300) = 0x17;
    *(undefined4 *)(this_00 + 0x304) = 0x31;
    *(undefined4 *)(this_00 + 0x308) = 0x20;
    *(undefined4 *)(this_00 + 0x30c) = 0x2762;
    *(undefined4 *)(this_00 + 0x310) = 0xee;
    *(undefined4 *)(this_00 + 0x314) = 0x17;
    *(undefined4 *)(this_00 + 0x318) = 0x31;
    *(undefined4 *)(this_00 + 0x31c) = 0x20;
    *(undefined4 *)(this_00 + 800) = 0x2763;
    *(undefined4 *)(this_00 + 0x324) = 0x58;
    *(undefined4 *)(this_00 + 0x328) = 0x3e;
    *(undefined4 *)(this_00 + 0x32c) = 0x31;
    *(undefined4 *)(this_00 + 0x330) = 0x20;
    *(undefined4 *)(this_00 + 0x334) = 0x2764;
    *(undefined4 *)(this_00 + 0x338) = 0x88;
    *(undefined4 *)(this_00 + 0x33c) = 0x3e;
    *(undefined4 *)(this_00 + 0x340) = 0x31;
    *(undefined4 *)(this_00 + 0x344) = 0x20;
    *(undefined4 *)(this_00 + 0x348) = 0x2765;
    *(undefined4 *)(this_00 + 0x34c) = 0xba;
    *(undefined4 *)(this_00 + 0x350) = 0x3e;
    *(undefined4 *)(this_00 + 0x354) = 0x31;
    *(undefined4 *)(this_00 + 0x358) = 0x20;
    *(undefined4 *)(this_00 + 0x364) = 0x3e;
    *(undefined4 *)(this_00 + 0x368) = 0x31;
    *(undefined4 *)(this_00 + 0x36c) = 0x20;
    *(undefined4 *)(this_00 + 0x35c) = 0x2766;
    *(undefined4 *)(this_00 + 0x360) = 0xee;
    *(undefined4 *)(this_00 + 0x370) = 0x2767;
    *(undefined4 *)(this_00 + 0x374) = 0x56;
    *(undefined4 *)(this_00 + 0x378) = 0x65;
    *(undefined4 *)(this_00 + 0x37c) = 0x1f;
    *(undefined4 *)(this_00 + 0x380) = 0x19;
    *(undefined4 *)(this_00 + 900) = 0x271f;
    *(undefined4 *)(this_00 + 0x388) = 0x75;
    *(undefined4 *)(this_00 + 0x38c) = 0x65;
    *(undefined4 *)(this_00 + 0x390) = 0x2a;
    *(undefined4 *)(this_00 + 0x394) = 0x19;
    *(undefined4 *)(this_00 + 0x3a8) = 0x19;
    *(undefined4 *)(this_00 + 0x3bc) = 0x19;
    *(undefined4 *)(this_00 + 0x398) = 0x271d;
    *(undefined4 *)(this_00 + 0x39c) = 0x9f;
    *(undefined4 *)(this_00 + 0x3a0) = 0x65;
    *(undefined4 *)(this_00 + 0x3a4) = 0x2a;
    *(undefined4 *)(this_00 + 0x3ac) = 0x2768;
    *(undefined4 *)(this_00 + 0x3b0) = 0xcc;
    *(undefined4 *)(this_00 + 0x3b4) = 0x65;
    *(undefined4 *)(this_00 + 0x3b8) = 0x53;
    *(undefined4 *)(this_00 + 0x3c0) = 0x2769;
    iVar6 = 0xc;
    pSVar7 = (SpecPanelTy *)(this_00 + 0x2d8);
    do {
      *(int *)(pSVar7 + -4) = *(int *)(pSVar7 + -4) + *(int *)(this_00 + 0x3c);
      iVar6 = iVar6 + -1;
      *(int *)pSVar7 =
           *(int *)pSVar7 +
           (*(int *)(this_00 + 0x58) - *(int *)(this_00 + 0x48)) + *(int *)(this_00 + 0x50);
      pSVar7 = pSVar7 + 0x14;
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

