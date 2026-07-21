
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::InitHelpPanel */

void __thiscall HelpPanelTy::InitHelpPanel(HelpPanelTy *this)

{
  AnonPointee_HelpPanelTy_0068 *pAVar1;
  code *pcVar2;
  bool bVar3;
  HelpPanelTy *this_00;
  int iVar4;
  AnonPointee_HelpPanelTy_01B3 *pAVar5;
  DArrayTy *pDVar6;
  uint *puVar7;
  void *pvVar8;
  char *extraout_EAX;
  char *_Str1;
  LPSTR pCVar9;
  ushort *puVar10;
  ccFntTy *pcVar11;
  undefined4 uVar12;
  AnonPointee_HelpPanelTy_0218 *pAVar13;
  uint *extraout_EAX_00;
  int *piVar14;
  undefined4 *puVar15;
  UINT *pUVar16;
  ccFntTy *this_01;
  uint uVar17;
  uint uVar18;
  UINT *pUVar19;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar20;
  undefined4 uVar21;
  int iVar22;
  short sVar23;
  undefined2 uVar24;
  byte bVar25;
  undefined4 uVar26;
  char *pcVar27;
  int iVar28;
  undefined4 uVar29;
  undefined4 uVar30;
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
  iVar4 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar28 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0xac,0,iVar4,&DAT_007a4ccc
                                ,s_HelpPanelTy__InitHelpPanel_007c3864);
    if (iVar28 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_helppan_cpp_007c383c,0xac);
    return;
  }
  DAT_00801690 = local_10;
  pAVar5 = (AnonPointee_HelpPanelTy_01B3 *)
           Library::DKW::TBL::FUN_006ae290((uint *)0x0,300,0x14,0x32);
  this_00->field_01B3 = pAVar5;
  pDVar6 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,200,0x14,0x32);
  this_00->field_01BB = pDVar6;
  pDVar6 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,100,9,0x32);
  this_00->field_01CB = pDVar6;
  puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,0x19,0x14);
  this_00->field_01D7 = puVar7;
  this_00->field_0253 = 0;
  this_00->field_0252 = 0;
  this_00->field_0251 = 0;
  this_00->field_0250 = 0;
  uVar18 = 0;
  if (*(int *)sizeHelp_exref != 0) {
    piVar14 = (int *)(this_00->field_01C7 + 0xd);
    do {
      if (*(char *)((int)piVar14 + -5) == '\b') {
        iVar4 = *piVar14;
        if (iVar4 == 1) {
          this_00->field_0251 = this_00->field_0251 + '\x01';
        }
        else if (iVar4 == 2) {
          this_00->field_0252 = this_00->field_0252 + '\x01';
        }
        else if (iVar4 == 3) {
          this_00->field_0253 = this_00->field_0253 + '\x01';
        }
        else {
          this_00->field_0250 = this_00->field_0250 + '\x01';
        }
      }
      uVar18 = uVar18 + 1;
      piVar14 = (int *)((int)piVar14 + 0x11);
    } while (uVar18 < *(uint *)sizeHelp_exref);
  }
  local_8 = 0;
  if (*(int *)sizeHelp_exref != 0) {
    local_c = (undefined4 *)0x0;
    do {
      puVar15 = (undefined4 *)((int)local_c + this_00->field_01C7);
      if (*(char *)(puVar15 + 2) != '\0') {
        pDVar6 = this_00->field_01BB;
        bVar3 = true;
        uVar18 = 0;
        local_14 = (char *)0x1;
        if (pDVar6->count != 0) {
          if (pDVar6->count == 0) {
            pvVar8 = (void *)0x0;
            goto LAB_00510f80;
          }
          do {
            pvVar8 = (void *)(pDVar6->elementSize * uVar18 + (int)pDVar6->data);
LAB_00510f80:
            if (((*(char *)((int)pvVar8 + 8) == *(char *)(puVar15 + 2)) &&
                (*(int *)((int)pvVar8 + 9) == *(int *)((int)puVar15 + 9))) &&
               (*(int *)((int)pvVar8 + 0xd) == *(int *)((int)puVar15 + 0xd))) {
              bVar3 = false;
              goto LAB_00510fa9;
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < pDVar6->count);
          bVar3 = true;
        }
LAB_00510fa9:
        if (bVar3) {
          local_28 = *puVar15;
          local_24 = puVar15[1];
          local_20 = puVar15[2];
          local_1c = puVar15[3];
          local_18 = *(undefined1 *)(puVar15 + 4);
          local_17 = 0;
          local_16 = 0;
          local_15 = 0;
          Library::DKW::TBL::FUN_006ae1c0(&pDVar6->flags,&local_28);
        }
      }
      local_8 = local_8 + 1;
      local_c = (undefined4 *)((int)local_c + 0x11);
    } while (local_8 < *(uint *)sizeHelp_exref);
  }
  do {
    pDVar6 = this_00->field_01BB;
    local_c = (undefined4 *)0x0;
    uVar18 = pDVar6->count;
    uVar17 = 0;
    if (uVar18 != 1) {
      do {
        if (uVar17 < uVar18) {
          pUVar19 = (UINT *)(pDVar6->elementSize * uVar17 + (int)pDVar6->data);
        }
        else {
          pUVar19 = (UINT *)0x0;
        }
        local_8 = uVar17 + 1;
        if (local_8 < uVar18) {
          pUVar16 = (UINT *)(pDVar6->elementSize * local_8 + (int)pDVar6->data);
        }
        else {
          pUVar16 = (UINT *)0x0;
        }
        if ((pUVar19 != (UINT *)0x0) && (pUVar16 != (UINT *)0x0)) {
          LoadResourceString(*pUVar16,HINSTANCE_00807618);
          local_14 = extraout_EAX;
          LoadResourceString(*pUVar19,HINSTANCE_00807618);
          iVar4 = Library::MSVCRT::__strcmpi(_Str1,local_14);
          if (0 < iVar4) {
            FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)this_00->field_01BB,uVar17,local_8);
            local_c = (undefined4 *)0x1;
          }
        }
        pDVar6 = this_00->field_01BB;
        uVar18 = pDVar6->count;
        uVar17 = local_8;
      } while (local_8 < uVar18 - 1);
    }
  } while (local_c != (undefined4 *)0x0);
  iVar4 = 1;
  piVar14 = (int *)0x0;
  pCVar9 = thunk_FUN_00571240(s_BKG_HELPW_007c390c,0);
  puVar10 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar9,piVar14,iVar4);
  this_00->field_01DC = puVar10;
  puVar10 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_HLP_OBJ_BKG_007c38fc,(int *)0x0,1);
  iVar4 = 1;
  piVar14 = (int *)0x0;
  this_00->field_021C = puVar10;
  pCVar9 = thunk_FUN_00571240(s_BUT_HLPLINK_007c38ec,0);
  puVar10 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar9,piVar14,iVar4);
  this_00->field_024C = puVar10;
  pcVar11 = (ccFntTy *)
            ccFntTy::operator(*(ccFntTy **)&PTR_00802a28->field_0x28,0x19d,
                              (int)*(ccFntTy **)&PTR_00802a28->field_0x28);
  this_00->field_01E0 = pcVar11;
  pcVar11->field_0058 = 0;
  pcVar11->field_005C = 0;
  pcVar11 = (ccFntTy *)ccFntTy::operator(this_01,0x19d,*(int *)&PTR_00802a28->field_0x2c);
  this_00->field_01E4 = pcVar11;
  pcVar11->field_0058 = 1;
  pcVar11->field_005C = 0;
  pcVar11 = (ccFntTy *)
            ccFntTy::operator(DAT_00806790,0x19d,(cMf32 *)DAT_00806790,s_MONEY_FONT_007c211c,0);
  this_00->field_01E8 = pcVar11;
  pcVar11->field_0058 = 1;
  pcVar11->field_005C = 0;
  puVar15 = (undefined4 *)0x0;
  iVar28 = 0;
  iVar4 = 1;
  bVar25 = 0;
  uVar18 = 0xffffffff;
  pCVar9 = thunk_FUN_00571240(s_HLPTRACK_007c38e0,0);
  puVar10 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806794,CASE_B,pCVar9,uVar18,bVar25,iVar4,iVar28,puVar15);
  this_00->field_0220 = puVar10;
  puVar10 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806794,CASE_B,s_BKG_HLPTTREE_007c38d0,0xffffffff,0,1,0,
                       (undefined4 *)0x0);
  this_00->field_0224 = puVar10;
  puVar10 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806794,CASE_B,&DAT_007c20a0,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_0230 = puVar10;
  puVar10 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806794,CASE_B,&DAT_007c38c8,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_0234 = puVar10;
  puVar10 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806794,CASE_B,s_HLP_UPG_007c38bc,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_0228 = puVar10;
  puVar10 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806794,CASE_B,s_HLP_UPGD_007c38b0,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_022C = puVar10;
  puVar10 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806794,CASE_B,&DAT_007c2048,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_0238 = puVar10;
  puVar10 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806794,CASE_B,s_HLP_FRAME_007c38a4,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_0248 = puVar10;
  puVar10 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806794,CASE_B,s_BOATS_R_007c206c,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_023C = puVar10;
  puVar10 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806794,CASE_B,&DAT_007c1910,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_0240 = puVar10;
  puVar10 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806794,CASE_B,s_INF_WEAP_007c20bc,0xffffffff,0,1,0,(undefined4 *)0x0);
  pcVar11 = this_00->field_01E4;
  this_00->field_0244 = puVar10;
  if (pcVar11->field_00A0 != 0) {
    FUN_00710790((uint *)pcVar11);
  }
  iVar4 = *(int *)&pcVar11->field_0x8a;
  iVar28 = 1;
  puVar10 = this_00->field_01DC + 0x14;
  uVar18 = FUN_006b4fe0((int)this_00->field_01DC);
  uVar12 = FUN_006b50c0(0x19c,iVar4 + 1,(uint)this_00->field_01DC[7],uVar18,(undefined4 *)puVar10,
                        iVar28);
  this_00->field_01EC = uVar12;
  iVar4 = 1;
  puVar10 = this_00->field_01DC + 0x14;
  uVar18 = FUN_006b4fe0((int)this_00->field_01DC);
  pAVar13 = (AnonPointee_HelpPanelTy_0218 *)
            FUN_006b50c0(0x19c,600,(uint)this_00->field_01DC[7],uVar18,(undefined4 *)puVar10,iVar4);
  this_00->field_0218 = pAVar13;
  pAVar1 = this_00->field_0068;
  uVar18 = pAVar1->field_0014;
  if (uVar18 == 0) {
    uVar18 = ((uint)(ushort)pAVar1->field_000E * pAVar1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
             pAVar1->field_0008;
  }
  puVar15 = (undefined4 *)FUN_006b4fa0((int)pAVar1);
  for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
    *puVar15 = 0xffffffff;
    puVar15 = puVar15 + 1;
  }
  for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
    *(undefined1 *)puVar15 = 0xff;
    puVar15 = (undefined4 *)((int)puVar15 + 1);
  }
  DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0,0,'\x01',(byte *)this_00->field_01DC);
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0068,0,0x6c,2,0x117,0xc);
  uVar12 = 0;
  iVar28 = -1;
  iVar4 = -2;
  LoadResourceString(0x2734,HINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_01E0,extraout_EAX_00,iVar4,iVar28,uVar12);
  uVar30 = 0;
  uVar29 = 0;
  pcVar27 = (char *)0x0;
  uVar26 = 0;
  uVar24 = 0;
  sVar23 = 0;
  uVar21 = 0xc000;
  uVar12 = 0xbfff;
  pCVar9 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
  uVar12 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x195,0x17b,1,(int)pCVar9,uVar12,uVar21,
                               sVar23,uVar24,uVar26,pcVar27,uVar29,uVar30);
  local_c = &this_00->field_0180;
  this_00->field_017C = uVar12;
  iVar4 = 0;
  iVar28 = 0x1e;
  local_8 = 7;
  do {
    if (iVar28 < 0x127) {
                    /* WARNING: Could not recover jumptable at 0x0051146f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&PTR_LAB_00511560)[iVar4])();
      return;
    }
    uVar26 = 0;
    iVar20 = iVar4 + 0xc09f;
    uVar21 = 0;
    pcVar27 = (char *)0x0;
    uVar12 = 10000;
    uVar24 = 0;
    iVar22 = iVar4 + 0xc0af;
    sVar23 = 2;
    pCVar9 = thunk_FUN_00571240(s_BUT_HLPHOME_007c3884,0);
    uVar12 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,iVar28,0x151,1,(int)pCVar9,iVar20,iVar22,
                                 sVar23,uVar24,uVar12,pcVar27,uVar21,uVar26);
    iVar4 = iVar4 + 1;
    iVar28 = iVar28 + 0x2c;
    *local_c = uVar12;
    local_c = local_c + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  PrepMissObj(this_00);
  HomeBut(this_00);
  g_currentExceptionFrame = local_6c.previous;
  return;
}

