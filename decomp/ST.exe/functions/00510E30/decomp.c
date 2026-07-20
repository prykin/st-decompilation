
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
  char *pcVar9;
  LPSTR pCVar10;
  ushort *puVar11;
  ccFntTy *pcVar12;
  undefined4 uVar13;
  AnonPointee_HelpPanelTy_0218 *pAVar14;
  int *piVar15;
  undefined4 *puVar16;
  UINT *pUVar17;
  ccFntTy *this_01;
  uint uVar18;
  uint uVar19;
  UINT *pUVar20;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar21;
  undefined4 uVar22;
  int iVar23;
  short sVar24;
  undefined2 uVar25;
  byte bVar26;
  undefined4 uVar27;
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
  uVar19 = 0;
  if (*(int *)sizeHelp_exref != 0) {
    piVar15 = (int *)(this_00->field_01C7 + 0xd);
    do {
      if (*(char *)((int)piVar15 + -5) == '\b') {
        iVar4 = *piVar15;
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
      uVar19 = uVar19 + 1;
      piVar15 = (int *)((int)piVar15 + 0x11);
    } while (uVar19 < *(uint *)sizeHelp_exref);
  }
  local_8 = 0;
  if (*(int *)sizeHelp_exref != 0) {
    local_c = (undefined4 *)0x0;
    do {
      puVar16 = (undefined4 *)((int)local_c + this_00->field_01C7);
      if (*(char *)(puVar16 + 2) != '\0') {
        pDVar6 = this_00->field_01BB;
        bVar3 = true;
        uVar19 = 0;
        local_14 = (char *)0x1;
        if (pDVar6->count != 0) {
          if (pDVar6->count == 0) {
            pvVar8 = (void *)0x0;
            goto LAB_00510f80;
          }
          do {
            pvVar8 = (void *)(pDVar6->elementSize * uVar19 + (int)pDVar6->data);
LAB_00510f80:
            if (((*(char *)((int)pvVar8 + 8) == *(char *)(puVar16 + 2)) &&
                (*(int *)((int)pvVar8 + 9) == *(int *)((int)puVar16 + 9))) &&
               (*(int *)((int)pvVar8 + 0xd) == *(int *)((int)puVar16 + 0xd))) {
              bVar3 = false;
              goto LAB_00510fa9;
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 < pDVar6->count);
          bVar3 = true;
        }
LAB_00510fa9:
        if (bVar3) {
          local_28 = *puVar16;
          local_24 = puVar16[1];
          local_20 = puVar16[2];
          local_1c = puVar16[3];
          local_18 = *(undefined1 *)(puVar16 + 4);
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
    uVar19 = pDVar6->count;
    uVar18 = 0;
    if (uVar19 != 1) {
      do {
        if (uVar18 < uVar19) {
          pUVar20 = (UINT *)(pDVar6->elementSize * uVar18 + (int)pDVar6->data);
        }
        else {
          pUVar20 = (UINT *)0x0;
        }
        local_8 = uVar18 + 1;
        if (local_8 < uVar19) {
          pUVar17 = (UINT *)(pDVar6->elementSize * local_8 + (int)pDVar6->data);
        }
        else {
          pUVar17 = (UINT *)0x0;
        }
        if ((pUVar20 != (UINT *)0x0) && (pUVar17 != (UINT *)0x0)) {
          local_14 = (char *)FUN_006b0140(*pUVar17,HINSTANCE_00807618);
          pcVar9 = (char *)FUN_006b0140(*pUVar20,HINSTANCE_00807618);
          iVar4 = Library::MSVCRT::__strcmpi(pcVar9,local_14);
          if (0 < iVar4) {
            FUN_006b0cd0((AnonShape_006B0CD0_C8D121FA *)this_00->field_01BB,uVar18,local_8);
            local_c = (undefined4 *)0x1;
          }
        }
        pDVar6 = this_00->field_01BB;
        uVar19 = pDVar6->count;
        uVar18 = local_8;
      } while (local_8 < uVar19 - 1);
    }
  } while (local_c != (undefined4 *)0x0);
  iVar4 = 1;
  piVar15 = (int *)0x0;
  pCVar10 = thunk_FUN_00571240(s_BKG_HELPW_007c390c,0);
  puVar11 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar10,piVar15,iVar4);
  this_00->field_01DC = puVar11;
  puVar11 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_HLP_OBJ_BKG_007c38fc,(int *)0x0,1);
  iVar4 = 1;
  piVar15 = (int *)0x0;
  this_00->field_021C = puVar11;
  pCVar10 = thunk_FUN_00571240(s_BUT_HLPLINK_007c38ec,0);
  puVar11 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar10,piVar15,iVar4);
  this_00->field_024C = puVar11;
  pcVar12 = (ccFntTy *)
            ccFntTy::operator(*(ccFntTy **)&PTR_00802a28->field_0x28,0x19d,
                              (int)*(ccFntTy **)&PTR_00802a28->field_0x28);
  this_00->field_01E0 = pcVar12;
  pcVar12->field_0058 = 0;
  pcVar12->field_005C = 0;
  pcVar12 = (ccFntTy *)ccFntTy::operator(this_01,0x19d,*(int *)&PTR_00802a28->field_0x2c);
  this_00->field_01E4 = pcVar12;
  pcVar12->field_0058 = 1;
  pcVar12->field_005C = 0;
  pcVar12 = (ccFntTy *)
            ccFntTy::operator(DAT_00806790,0x19d,(cMf32 *)DAT_00806790,s_MONEY_FONT_007c211c,0);
  this_00->field_01E8 = pcVar12;
  pcVar12->field_0058 = 1;
  pcVar12->field_005C = 0;
  puVar16 = (undefined4 *)0x0;
  iVar28 = 0;
  iVar4 = 1;
  bVar26 = 0;
  uVar19 = 0xffffffff;
  pCVar10 = thunk_FUN_00571240(s_HLPTRACK_007c38e0,0);
  puVar11 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806794,CASE_B,pCVar10,uVar19,bVar26,iVar4,iVar28,puVar16);
  this_00->field_0220 = puVar11;
  puVar11 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806794,CASE_B,s_BKG_HLPTTREE_007c38d0,0xffffffff,0,1,0,
                       (undefined4 *)0x0);
  this_00->field_0224 = puVar11;
  puVar11 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806794,CASE_B,&DAT_007c20a0,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_0230 = puVar11;
  puVar11 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806794,CASE_B,&DAT_007c38c8,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_0234 = puVar11;
  puVar11 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806794,CASE_B,s_HLP_UPG_007c38bc,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_0228 = puVar11;
  puVar11 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806794,CASE_B,s_HLP_UPGD_007c38b0,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_022C = puVar11;
  puVar11 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806794,CASE_B,&DAT_007c2048,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_0238 = puVar11;
  puVar11 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806794,CASE_B,s_HLP_FRAME_007c38a4,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_0248 = puVar11;
  puVar11 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806794,CASE_B,s_BOATS_R_007c206c,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_023C = puVar11;
  puVar11 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806794,CASE_B,&DAT_007c1910,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_0240 = puVar11;
  puVar11 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806794,CASE_B,s_INF_WEAP_007c20bc,0xffffffff,0,1,0,(undefined4 *)0x0);
  pcVar12 = this_00->field_01E4;
  this_00->field_0244 = puVar11;
  if (pcVar12->field_00A0 != 0) {
    FUN_00710790((uint *)pcVar12);
  }
  iVar4 = *(int *)&pcVar12->field_0x8a;
  iVar28 = 1;
  puVar11 = this_00->field_01DC + 0x14;
  uVar19 = FUN_006b4fe0((int)this_00->field_01DC);
  uVar13 = FUN_006b50c0(0x19c,iVar4 + 1,(uint)this_00->field_01DC[7],uVar19,(undefined4 *)puVar11,
                        iVar28);
  this_00->field_01EC = uVar13;
  iVar4 = 1;
  puVar11 = this_00->field_01DC + 0x14;
  uVar19 = FUN_006b4fe0((int)this_00->field_01DC);
  pAVar14 = (AnonPointee_HelpPanelTy_0218 *)
            FUN_006b50c0(0x19c,600,(uint)this_00->field_01DC[7],uVar19,(undefined4 *)puVar11,iVar4);
  this_00->field_0218 = pAVar14;
  pAVar1 = this_00->field_0068;
  uVar19 = pAVar1->field_0014;
  if (uVar19 == 0) {
    uVar19 = ((uint)(ushort)pAVar1->field_000E * pAVar1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
             pAVar1->field_0008;
  }
  puVar16 = (undefined4 *)FUN_006b4fa0((int)pAVar1);
  for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
    *puVar16 = 0xffffffff;
    puVar16 = puVar16 + 1;
  }
  for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
    *(undefined1 *)puVar16 = 0xff;
    puVar16 = (undefined4 *)((int)puVar16 + 1);
  }
  DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0068,0,0,'\x01',(byte *)this_00->field_01DC);
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0068,0,0x6c,2,0x117,0xc);
  uVar13 = 0;
  iVar28 = -1;
  iVar4 = -2;
  puVar7 = (uint *)FUN_006b0140(0x2734,HINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_01E0,puVar7,iVar4,iVar28,uVar13);
  uVar30 = 0;
  uVar29 = 0;
  pcVar9 = (char *)0x0;
  uVar27 = 0;
  uVar25 = 0;
  sVar24 = 0;
  uVar22 = 0xc000;
  uVar13 = 0xbfff;
  pCVar10 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
  uVar13 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x195,0x17b,1,(int)pCVar10,uVar13,uVar22,
                               sVar24,uVar25,uVar27,pcVar9,uVar29,uVar30);
  local_c = &this_00->field_0180;
  this_00->field_017C = uVar13;
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
    uVar27 = 0;
    iVar21 = iVar4 + 0xc09f;
    uVar22 = 0;
    pcVar9 = (char *)0x0;
    uVar13 = 10000;
    uVar25 = 0;
    iVar23 = iVar4 + 0xc0af;
    sVar24 = 2;
    pCVar10 = thunk_FUN_00571240(s_BUT_HLPHOME_007c3884,0);
    uVar13 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,iVar28,0x151,1,(int)pCVar10,iVar21,iVar23,
                                 sVar24,uVar25,uVar13,pcVar9,uVar22,uVar27);
    iVar4 = iVar4 + 1;
    iVar28 = iVar28 + 0x2c;
    *local_c = uVar13;
    local_c = local_c + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  PrepMissObj(this_00);
  HomeBut(this_00);
  g_currentExceptionFrame = local_6c.previous;
  return;
}

