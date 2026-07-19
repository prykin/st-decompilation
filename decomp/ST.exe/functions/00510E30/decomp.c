
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::InitHelpPanel */

void __thiscall HelpPanelTy::InitHelpPanel(HelpPanelTy *this)

{
  code *pcVar1;
  bool bVar2;
  UPanelTy *this_00;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  LPSTR pCVar6;
  ushort *puVar7;
  byte *pbVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  UINT *pUVar12;
  ccFntTy *this_01;
  uint uVar13;
  uint uVar14;
  UINT *pUVar15;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  short sVar19;
  undefined2 uVar20;
  byte bVar21;
  undefined4 uVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  InternalExceptionFrame local_6c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  char *local_14;
  UPanelTy *local_10;
  UPanelTy *local_c;
  uint local_8;
  
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_10 = (UPanelTy *)this;
  iVar3 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar23 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0xac,0,iVar3,&DAT_007a4ccc
                                ,s_HelpPanelTy__InitHelpPanel_007c3864);
    if (iVar23 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_helppan_cpp_007c383c,0xac);
    return;
  }
  DAT_00801690 = local_10;
  puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,300,0x14,0x32);
  *(uint **)(this_00 + 0x1b3) = puVar4;
  puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,200,0x14,0x32);
  *(uint **)(this_00 + 0x1bb) = puVar4;
  puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,100,9,0x32);
  *(uint **)(this_00 + 0x1cb) = puVar4;
  puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,0x19,0x14);
  *(uint **)(this_00 + 0x1d7) = puVar4;
  this_00[0x253] = (UPanelTy)0x0;
  this_00[0x252] = (UPanelTy)0x0;
  this_00[0x251] = (UPanelTy)0x0;
  this_00[0x250] = (UPanelTy)0x0;
  uVar14 = 0;
  if (*(int *)sizeHelp_exref != 0) {
    piVar10 = (int *)(*(int *)(this_00 + 0x1c7) + 0xd);
    do {
      if (*(char *)((int)piVar10 + -5) == '\b') {
        iVar3 = *piVar10;
        if (iVar3 == 1) {
          this_00[0x251] = (UPanelTy)((char)this_00[0x251] + '\x01');
        }
        else if (iVar3 == 2) {
          this_00[0x252] = (UPanelTy)((char)this_00[0x252] + '\x01');
        }
        else if (iVar3 == 3) {
          this_00[0x253] = (UPanelTy)((char)this_00[0x253] + '\x01');
        }
        else {
          this_00[0x250] = (UPanelTy)((char)this_00[0x250] + '\x01');
        }
      }
      uVar14 = uVar14 + 1;
      piVar10 = (int *)((int)piVar10 + 0x11);
    } while (uVar14 < *(uint *)sizeHelp_exref);
  }
  local_8 = 0;
  if (*(int *)sizeHelp_exref != 0) {
    local_c = (UPanelTy *)0x0;
    do {
      puVar11 = (undefined4 *)((int)local_c + *(int *)(this_00 + 0x1c7));
      if (*(char *)(puVar11 + 2) != '\0') {
        puVar4 = *(uint **)(this_00 + 0x1bb);
        bVar2 = true;
        uVar14 = 0;
        local_14 = (char *)0x1;
        if (puVar4[3] != 0) {
          if (puVar4[3] == 0) {
            iVar3 = 0;
            goto LAB_00510f80;
          }
          do {
            iVar3 = puVar4[2] * uVar14 + puVar4[7];
LAB_00510f80:
            if (((*(char *)(iVar3 + 8) == *(char *)(puVar11 + 2)) &&
                (*(int *)(iVar3 + 9) == *(int *)((int)puVar11 + 9))) &&
               (*(int *)(iVar3 + 0xd) == *(int *)((int)puVar11 + 0xd))) {
              bVar2 = false;
              goto LAB_00510fa9;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < puVar4[3]);
          bVar2 = true;
        }
LAB_00510fa9:
        if (bVar2) {
          local_28 = *puVar11;
          local_24 = puVar11[1];
          local_20 = puVar11[2];
          local_1c = puVar11[3];
          local_18 = *(undefined1 *)(puVar11 + 4);
          local_17 = 0;
          local_16 = 0;
          local_15 = 0;
          Library::DKW::TBL::FUN_006ae1c0(puVar4,&local_28);
        }
      }
      local_8 = local_8 + 1;
      local_c = (UPanelTy *)((int)local_c + 0x11);
    } while (local_8 < *(uint *)sizeHelp_exref);
  }
  do {
    iVar3 = *(int *)(this_00 + 0x1bb);
    local_c = (UPanelTy *)0x0;
    uVar14 = *(uint *)(iVar3 + 0xc);
    uVar13 = 0;
    if (uVar14 != 1) {
      do {
        if (uVar13 < uVar14) {
          pUVar15 = (UINT *)(*(int *)(iVar3 + 8) * uVar13 + *(int *)(iVar3 + 0x1c));
        }
        else {
          pUVar15 = (UINT *)0x0;
        }
        local_8 = uVar13 + 1;
        if (local_8 < uVar14) {
          pUVar12 = (UINT *)(*(int *)(iVar3 + 8) * local_8 + *(int *)(iVar3 + 0x1c));
        }
        else {
          pUVar12 = (UINT *)0x0;
        }
        if ((pUVar15 != (UINT *)0x0) && (pUVar12 != (UINT *)0x0)) {
          local_14 = (char *)FUN_006b0140(*pUVar12,DAT_00807618);
          pcVar5 = (char *)FUN_006b0140(*pUVar15,DAT_00807618);
          iVar3 = Library::MSVCRT::__strcmpi(pcVar5,local_14);
          if (0 < iVar3) {
            FUN_006b0cd0(*(int *)(this_00 + 0x1bb),uVar13,local_8);
            local_c = (UPanelTy *)0x1;
          }
        }
        iVar3 = *(int *)(this_00 + 0x1bb);
        uVar14 = *(uint *)(iVar3 + 0xc);
        uVar13 = local_8;
      } while (local_8 < uVar14 - 1);
    }
  } while (local_c != (UPanelTy *)0x0);
  iVar3 = 1;
  piVar10 = (int *)0x0;
  pCVar6 = thunk_FUN_00571240(s_BKG_HELPW_007c390c,0);
  puVar7 = cMf32::RecGet(DAT_00806790,1,pCVar6,piVar10,iVar3);
  *(ushort **)(this_00 + 0x1dc) = puVar7;
  puVar7 = cMf32::RecGet(DAT_00806790,1,s_HLP_OBJ_BKG_007c38fc,(int *)0x0,1);
  iVar3 = 1;
  piVar10 = (int *)0x0;
  *(ushort **)(this_00 + 0x21c) = puVar7;
  pCVar6 = thunk_FUN_00571240(s_BUT_HLPLINK_007c38ec,0);
  puVar7 = cMf32::RecGet(DAT_00806790,1,pCVar6,piVar10,iVar3);
  *(ushort **)(this_00 + 0x24c) = puVar7;
  puVar11 = ccFntTy::operator(*(ccFntTy **)(DAT_00802a28 + 0x28),0x19d,
                              (int)*(ccFntTy **)(DAT_00802a28 + 0x28));
  *(undefined4 **)(this_00 + 0x1e0) = puVar11;
  puVar11[0x16] = 0;
  puVar11[0x17] = 0;
  puVar11 = ccFntTy::operator(this_01,0x19d,*(int *)(DAT_00802a28 + 0x2c));
  *(undefined4 **)(this_00 + 0x1e4) = puVar11;
  puVar11[0x16] = 1;
  puVar11[0x17] = 0;
  puVar11 = ccFntTy::operator((ccFntTy *)DAT_00806790,0x19d,DAT_00806790,s_MONEY_FONT_007c211c,0);
  *(undefined4 **)(this_00 + 0x1e8) = puVar11;
  puVar11[0x16] = 1;
  puVar11[0x17] = 0;
  puVar11 = (undefined4 *)0x0;
  iVar23 = 0;
  iVar3 = 1;
  bVar21 = 0;
  uVar14 = 0xffffffff;
  pbVar8 = (byte *)thunk_FUN_00571240(s_HLPTRACK_007c38e0,0);
  puVar7 = FUN_00709af0(DAT_00806794,0xb,pbVar8,uVar14,bVar21,iVar3,iVar23,puVar11);
  *(ushort **)(this_00 + 0x220) = puVar7;
  puVar7 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_BKG_HLPTTREE_007c38d0,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)(this_00 + 0x224) = puVar7;
  puVar7 = FUN_00709af0(DAT_00806794,0xb,&DAT_007c20a0,0xffffffff,0,1,0,(undefined4 *)0x0);
  *(ushort **)(this_00 + 0x230) = puVar7;
  puVar7 = FUN_00709af0(DAT_00806794,0xb,&DAT_007c38c8,0xffffffff,0,1,0,(undefined4 *)0x0);
  *(ushort **)(this_00 + 0x234) = puVar7;
  puVar7 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_HLP_UPG_007c38bc,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)(this_00 + 0x228) = puVar7;
  puVar7 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_HLP_UPGD_007c38b0,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)(this_00 + 0x22c) = puVar7;
  puVar7 = FUN_00709af0(DAT_00806794,0xb,&DAT_007c2048,0xffffffff,0,1,0,(undefined4 *)0x0);
  *(ushort **)(this_00 + 0x238) = puVar7;
  puVar7 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_HLP_FRAME_007c38a4,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)(this_00 + 0x248) = puVar7;
  puVar7 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_BOATS_R_007c206c,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)(this_00 + 0x23c) = puVar7;
  puVar7 = FUN_00709af0(DAT_00806794,0xb,&DAT_007c1910,0xffffffff,0,1,0,(undefined4 *)0x0);
  *(ushort **)(this_00 + 0x240) = puVar7;
  puVar7 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_INF_WEAP_007c20bc,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  iVar3 = *(int *)(this_00 + 0x1e4);
  *(ushort **)(this_00 + 0x244) = puVar7;
  if (*(int *)(iVar3 + 0xa0) != 0) {
    FUN_00710790(iVar3);
  }
  iVar3 = *(int *)(iVar3 + 0x8a);
  iVar23 = 1;
  puVar11 = (undefined4 *)(*(int *)(this_00 + 0x1dc) + 0x28);
  uVar14 = FUN_006b4fe0(*(int *)(this_00 + 0x1dc));
  uVar9 = FUN_006b50c0(0x19c,iVar3 + 1,(uint)*(ushort *)(*(int *)(this_00 + 0x1dc) + 0xe),uVar14,
                       puVar11,iVar23);
  *(undefined4 *)(this_00 + 0x1ec) = uVar9;
  iVar3 = 1;
  puVar11 = (undefined4 *)(*(int *)(this_00 + 0x1dc) + 0x28);
  uVar14 = FUN_006b4fe0(*(int *)(this_00 + 0x1dc));
  uVar9 = FUN_006b50c0(0x19c,600,(uint)*(ushort *)(*(int *)(this_00 + 0x1dc) + 0xe),uVar14,puVar11,
                       iVar3);
  *(undefined4 *)(this_00 + 0x218) = uVar9;
  iVar3 = *(int *)(this_00 + 0x68);
  uVar14 = *(uint *)(iVar3 + 0x14);
  if (uVar14 == 0) {
    uVar14 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
             *(int *)(iVar3 + 8);
  }
  puVar11 = (undefined4 *)FUN_006b4fa0(iVar3);
  for (uVar13 = uVar14 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *puVar11 = 0xffffffff;
    puVar11 = puVar11 + 1;
  }
  for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined1 *)puVar11 = 0xff;
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x68),0,0,'\x01',*(byte **)(this_00 + 0x1dc));
  ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1e0),*(int *)(this_00 + 0x68),0,0x6c,2,0x117,0xc);
  uVar9 = 0;
  iVar23 = -1;
  iVar3 = -2;
  puVar4 = (uint *)FUN_006b0140(0x2734,DAT_00807618);
  ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1e0),puVar4,iVar3,iVar23,uVar9);
  uVar25 = 0;
  uVar24 = 0;
  pcVar5 = (char *)0x0;
  uVar22 = 0;
  uVar20 = 0;
  sVar19 = 0;
  uVar17 = 0xc000;
  uVar9 = 0xbfff;
  pCVar6 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
  uVar9 = UPanelTy::CreateBut(this_00,0,1,0x195,0x17b,1,(int)pCVar6,uVar9,uVar17,sVar19,uVar20,
                              uVar22,pcVar5,uVar24,uVar25);
  local_c = this_00 + 0x180;
  *(undefined4 *)(this_00 + 0x17c) = uVar9;
  iVar3 = 0;
  iVar23 = 0x1e;
  local_8 = 7;
  do {
    if (iVar23 < 0x127) {
                    /* WARNING: Could not recover jumptable at 0x0051146f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&PTR_LAB_00511560)[iVar3])();
      return;
    }
    uVar22 = 0;
    iVar16 = iVar3 + 0xc09f;
    uVar17 = 0;
    pcVar5 = (char *)0x0;
    uVar9 = 10000;
    uVar20 = 0;
    iVar18 = iVar3 + 0xc0af;
    sVar19 = 2;
    pCVar6 = thunk_FUN_00571240(s_BUT_HLPHOME_007c3884,0);
    uVar9 = UPanelTy::CreateBut(this_00,0,1,iVar23,0x151,1,(int)pCVar6,iVar16,iVar18,sVar19,uVar20,
                                uVar9,pcVar5,uVar17,uVar22);
    iVar3 = iVar3 + 1;
    iVar23 = iVar23 + 0x2c;
    *(undefined4 *)local_c = uVar9;
    local_c = local_c + 4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  PrepMissObj((HelpPanelTy *)this_00);
  HomeBut((HelpPanelTy *)this_00);
  g_currentExceptionFrame = local_6c.previous;
  return;
}

