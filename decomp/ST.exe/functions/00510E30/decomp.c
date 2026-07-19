
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::InitHelpPanel */

void __thiscall HelpPanelTy::InitHelpPanel(HelpPanelTy *this)

{
  code *pcVar1;
  bool bVar2;
  HelpPanelTy *this_00;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  LPSTR pCVar6;
  ushort *puVar7;
  ccFntTy *pcVar8;
  byte *pbVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  UINT *pUVar13;
  ccFntTy *this_01;
  uint uVar14;
  uint uVar15;
  UINT *pUVar16;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar17;
  undefined4 uVar18;
  int iVar19;
  short sVar20;
  undefined2 uVar21;
  byte bVar22;
  undefined4 uVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 uVar26;
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
  HelpPanelTy *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar24 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0xac,0,iVar3,&DAT_007a4ccc
                                ,s_HelpPanelTy__InitHelpPanel_007c3864);
    if (iVar24 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Andrey_helppan_cpp_007c383c,0xac);
    return;
  }
  DAT_00801690 = local_10;
  puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,300,0x14,0x32);
  this_00->field_01B3 = puVar4;
  puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,200,0x14,0x32);
  this_00->field_01BB = puVar4;
  puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,100,9,0x32);
  this_00->field_01CB = puVar4;
  puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,0x19,0x14);
  this_00->field_01D7 = puVar4;
  this_00->field_0253 = 0;
  this_00->field_0252 = 0;
  this_00->field_0251 = 0;
  this_00->field_0250 = 0;
  uVar15 = 0;
  if (*(int *)sizeHelp_exref != 0) {
    piVar11 = (int *)(this_00->field_01C7 + 0xd);
    do {
      if (*(char *)((int)piVar11 + -5) == '\b') {
        iVar3 = *piVar11;
        if (iVar3 == 1) {
          this_00->field_0251 = this_00->field_0251 + '\x01';
        }
        else if (iVar3 == 2) {
          this_00->field_0252 = this_00->field_0252 + '\x01';
        }
        else if (iVar3 == 3) {
          this_00->field_0253 = this_00->field_0253 + '\x01';
        }
        else {
          this_00->field_0250 = this_00->field_0250 + '\x01';
        }
      }
      uVar15 = uVar15 + 1;
      piVar11 = (int *)((int)piVar11 + 0x11);
    } while (uVar15 < *(uint *)sizeHelp_exref);
  }
  local_8 = 0;
  if (*(int *)sizeHelp_exref != 0) {
    local_c = (undefined4 *)0x0;
    do {
      puVar12 = (undefined4 *)((int)local_c + this_00->field_01C7);
      if (*(char *)(puVar12 + 2) != '\0') {
        puVar4 = (uint *)this_00->field_01BB;
        bVar2 = true;
        uVar15 = 0;
        local_14 = (char *)0x1;
        if (puVar4[3] != 0) {
          if (puVar4[3] == 0) {
            iVar3 = 0;
            goto LAB_00510f80;
          }
          do {
            iVar3 = puVar4[2] * uVar15 + puVar4[7];
LAB_00510f80:
            if (((*(char *)(iVar3 + 8) == *(char *)(puVar12 + 2)) &&
                (*(int *)(iVar3 + 9) == *(int *)((int)puVar12 + 9))) &&
               (*(int *)(iVar3 + 0xd) == *(int *)((int)puVar12 + 0xd))) {
              bVar2 = false;
              goto LAB_00510fa9;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < puVar4[3]);
          bVar2 = true;
        }
LAB_00510fa9:
        if (bVar2) {
          local_28 = *puVar12;
          local_24 = puVar12[1];
          local_20 = puVar12[2];
          local_1c = puVar12[3];
          local_18 = *(undefined1 *)(puVar12 + 4);
          local_17 = 0;
          local_16 = 0;
          local_15 = 0;
          Library::DKW::TBL::FUN_006ae1c0(puVar4,&local_28);
        }
      }
      local_8 = local_8 + 1;
      local_c = (undefined4 *)((int)local_c + 0x11);
    } while (local_8 < *(uint *)sizeHelp_exref);
  }
  do {
    iVar3 = this_00->field_01BB;
    local_c = (undefined4 *)0x0;
    uVar15 = *(uint *)(iVar3 + 0xc);
    uVar14 = 0;
    if (uVar15 != 1) {
      do {
        if (uVar14 < uVar15) {
          pUVar16 = (UINT *)(*(int *)(iVar3 + 8) * uVar14 + *(int *)(iVar3 + 0x1c));
        }
        else {
          pUVar16 = (UINT *)0x0;
        }
        local_8 = uVar14 + 1;
        if (local_8 < uVar15) {
          pUVar13 = (UINT *)(*(int *)(iVar3 + 8) * local_8 + *(int *)(iVar3 + 0x1c));
        }
        else {
          pUVar13 = (UINT *)0x0;
        }
        if ((pUVar16 != (UINT *)0x0) && (pUVar13 != (UINT *)0x0)) {
          local_14 = (char *)FUN_006b0140(*pUVar13,DAT_00807618);
          pcVar5 = (char *)FUN_006b0140(*pUVar16,DAT_00807618);
          iVar3 = Library::MSVCRT::__strcmpi(pcVar5,local_14);
          if (0 < iVar3) {
            FUN_006b0cd0(this_00->field_01BB,uVar14,local_8);
            local_c = (undefined4 *)0x1;
          }
        }
        iVar3 = this_00->field_01BB;
        uVar15 = *(uint *)(iVar3 + 0xc);
        uVar14 = local_8;
      } while (local_8 < uVar15 - 1);
    }
  } while (local_c != (undefined4 *)0x0);
  iVar3 = 1;
  piVar11 = (int *)0x0;
  pCVar6 = thunk_FUN_00571240(s_BKG_HELPW_007c390c,0);
  puVar7 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar11,iVar3);
  this_00->field_01DC = puVar7;
  puVar7 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_HLP_OBJ_BKG_007c38fc,(int *)0x0,1);
  iVar3 = 1;
  piVar11 = (int *)0x0;
  this_00->field_021C = puVar7;
  pCVar6 = thunk_FUN_00571240(s_BUT_HLPLINK_007c38ec,0);
  puVar7 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar11,iVar3);
  this_00->field_024C = puVar7;
  pcVar8 = (ccFntTy *)
           ccFntTy::operator(*(ccFntTy **)(DAT_00802a28 + 0x28),0x19d,
                             (int)*(ccFntTy **)(DAT_00802a28 + 0x28));
  this_00->field_01E0 = pcVar8;
  pcVar8->field_0058 = 0;
  pcVar8->field_005C = 0;
  pcVar8 = (ccFntTy *)ccFntTy::operator(this_01,0x19d,*(int *)(DAT_00802a28 + 0x2c));
  this_00->field_01E4 = pcVar8;
  pcVar8->field_0058 = 1;
  pcVar8->field_005C = 0;
  pcVar8 = (ccFntTy *)ccFntTy::operator(DAT_00806790,0x19d,DAT_00806790,s_MONEY_FONT_007c211c,0);
  this_00->field_01E8 = pcVar8;
  pcVar8->field_0058 = 1;
  pcVar8->field_005C = 0;
  puVar12 = (undefined4 *)0x0;
  iVar24 = 0;
  iVar3 = 1;
  bVar22 = 0;
  uVar15 = 0xffffffff;
  pbVar9 = (byte *)thunk_FUN_00571240(s_HLPTRACK_007c38e0,0);
  puVar7 = mfRLoad(DAT_00806794,CASE_B,pbVar9,uVar15,bVar22,iVar3,iVar24,puVar12);
  this_00->field_0220 = puVar7;
  puVar7 = mfRLoad(DAT_00806794,CASE_B,(byte *)s_BKG_HLPTTREE_007c38d0,0xffffffff,0,1,0,
                   (undefined4 *)0x0);
  this_00->field_0224 = puVar7;
  puVar7 = mfRLoad(DAT_00806794,CASE_B,&DAT_007c20a0,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_0230 = puVar7;
  puVar7 = mfRLoad(DAT_00806794,CASE_B,&DAT_007c38c8,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_0234 = puVar7;
  puVar7 = mfRLoad(DAT_00806794,CASE_B,(byte *)s_HLP_UPG_007c38bc,0xffffffff,0,1,0,(undefined4 *)0x0
                  );
  this_00->field_0228 = puVar7;
  puVar7 = mfRLoad(DAT_00806794,CASE_B,(byte *)s_HLP_UPGD_007c38b0,0xffffffff,0,1,0,
                   (undefined4 *)0x0);
  this_00->field_022C = puVar7;
  puVar7 = mfRLoad(DAT_00806794,CASE_B,&DAT_007c2048,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_0238 = puVar7;
  puVar7 = mfRLoad(DAT_00806794,CASE_B,(byte *)s_HLP_FRAME_007c38a4,0xffffffff,0,1,0,
                   (undefined4 *)0x0);
  this_00->field_0248 = puVar7;
  puVar7 = mfRLoad(DAT_00806794,CASE_B,(byte *)s_BOATS_R_007c206c,0xffffffff,0,1,0,(undefined4 *)0x0
                  );
  this_00->field_023C = puVar7;
  puVar7 = mfRLoad(DAT_00806794,CASE_B,&DAT_007c1910,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_0240 = puVar7;
  puVar7 = mfRLoad(DAT_00806794,CASE_B,(byte *)s_INF_WEAP_007c20bc,0xffffffff,0,1,0,
                   (undefined4 *)0x0);
  pcVar8 = this_00->field_01E4;
  this_00->field_0244 = puVar7;
  if (pcVar8->field_00A0 != 0) {
    FUN_00710790((int)pcVar8);
  }
  iVar3 = *(int *)&pcVar8->field_0x8a;
  iVar24 = 1;
  puVar12 = (undefined4 *)(this_00->field_01DC + 0x28);
  uVar15 = FUN_006b4fe0(this_00->field_01DC);
  uVar10 = FUN_006b50c0(0x19c,iVar3 + 1,(uint)*(ushort *)(this_00->field_01DC + 0xe),uVar15,puVar12,
                        iVar24);
  this_00->field_01EC = uVar10;
  iVar3 = 1;
  puVar12 = (undefined4 *)(this_00->field_01DC + 0x28);
  uVar15 = FUN_006b4fe0(this_00->field_01DC);
  uVar10 = FUN_006b50c0(0x19c,600,(uint)*(ushort *)(this_00->field_01DC + 0xe),uVar15,puVar12,iVar3)
  ;
  this_00->field_0218 = uVar10;
  iVar3 = this_00->field_0068;
  uVar15 = *(uint *)(iVar3 + 0x14);
  if (uVar15 == 0) {
    uVar15 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
             *(int *)(iVar3 + 8);
  }
  puVar12 = (undefined4 *)FUN_006b4fa0(iVar3);
  for (uVar14 = uVar15 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *puVar12 = 0xffffffff;
    puVar12 = puVar12 + 1;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined1 *)puVar12 = 0xff;
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  }
  DibPut((undefined4 *)this_00->field_0068,0,0,'\x01',(byte *)this_00->field_01DC);
  ccFntTy::SetSurf(this_00->field_01E0,this_00->field_0068,0,0x6c,2,0x117,0xc);
  uVar10 = 0;
  iVar24 = -1;
  iVar3 = -2;
  puVar4 = (uint *)FUN_006b0140(0x2734,DAT_00807618);
  ccFntTy::WrStr(this_00->field_01E0,puVar4,iVar3,iVar24,uVar10);
  uVar26 = 0;
  uVar25 = 0;
  pcVar5 = (char *)0x0;
  uVar23 = 0;
  uVar21 = 0;
  sVar20 = 0;
  uVar18 = 0xc000;
  uVar10 = 0xbfff;
  pCVar6 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
  uVar10 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x195,0x17b,1,(int)pCVar6,uVar10,uVar18,
                               sVar20,uVar21,uVar23,pcVar5,uVar25,uVar26);
  local_c = &this_00->field_0180;
  this_00->field_017C = uVar10;
  iVar3 = 0;
  iVar24 = 0x1e;
  local_8 = 7;
  do {
    if (iVar24 < 0x127) {
                    /* WARNING: Could not recover jumptable at 0x0051146f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&PTR_LAB_00511560)[iVar3])();
      return;
    }
    uVar23 = 0;
    iVar17 = iVar3 + 0xc09f;
    uVar18 = 0;
    pcVar5 = (char *)0x0;
    uVar10 = 10000;
    uVar21 = 0;
    iVar19 = iVar3 + 0xc0af;
    sVar20 = 2;
    pCVar6 = thunk_FUN_00571240(s_BUT_HLPHOME_007c3884,0);
    uVar10 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,iVar24,0x151,1,(int)pCVar6,iVar17,iVar19,
                                 sVar20,uVar21,uVar10,pcVar5,uVar18,uVar23);
    iVar3 = iVar3 + 1;
    iVar24 = iVar24 + 0x2c;
    *local_c = uVar10;
    local_c = local_c + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  PrepMissObj(this_00);
  HomeBut(this_00);
  g_currentExceptionFrame = local_6c.previous;
  return;
}

