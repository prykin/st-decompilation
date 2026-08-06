#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::InitHelpPanel */

void __thiscall HelpPanelTy::InitHelpPanel(HelpPanelTy *this)

{
  AnonPointee_HelpPanelTy_0068 *pAVar1;
  bool bVar3;
  HelpPanelTy *this_00;
  int local_EAX_35;
  DArrayTy *local_EAX_72;
  DArrayTy *pDVar5;
  DArrayTy *local_EAX_113;
  DArrayTy *local_EAX_132;
  void *pvVar4;
  DArrayTy *pDVar6;
  char *pcVar7_mg0;
  int iVar4;
  LPSTR pCVar7;
  ushort *local_EAX_679;
  ushort *puVar9;
  ushort *local_EAX_739;
  ccFntTy *pcVar8;
  ushort *local_EAX_881;
  ushort *local_EAX_911;
  ushort *local_EAX_945;
  ushort *local_EAX_976;
  ushort *local_EAX_1009;
  ushort *local_EAX_1040;
  ushort *local_EAX_1074;
  ushort *local_EAX_1104;
  ushort *local_EAX_1138;
  ushort *local_EAX_1169;
  ushort *local_EAX_1202;
  int uVar17;
  int local_EAX_1285;
  int local_EAX_1308;
  AnonPointee_HelpPanelTy_0218 *pAVar9;
  char *pcVar7_mg1;
  int iVar26;
  byte *pbVar10;
  UINT *pUVar11;
  uint uVar12;
  uint uVar13;
  UINT *pUVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar18;
  int iVar19;
  short sVar20;
  ushort uVar21;
  byte bVar22;
  undefined4 uVar23;
  char *pcVar24;
  int *piVar25;
  int iVar27;
  ushort *puVar28;
  undefined4 uVar29;
  int iVar30;
  undefined4 *puVar31;
  undefined4 uVar32;
  InternalExceptionFrame local_6c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  byte local_18;
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
  local_EAX_35 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  this_00 = local_10;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar26 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0xac,0,local_EAX_35,
                                "%s","HelpPanelTy::InitHelpPanel");
    if (iVar26 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_35,0,"E:\\__titans\\Andrey\\helppan.cpp",0xac);
    return;
  }
  g_helpPanel_00801690 = local_10;
  local_EAX_72 = Library::DKW::TBL::DArrayCreate(nullptr,300,0x14,0x32);
  this_00->field_01B3 = (AnonPointee_HelpPanelTy_01B3 *)local_EAX_72;
  pDVar5 = Library::DKW::TBL::DArrayCreate(nullptr,200,0x14,0x32);
  this_00->field_01BB = pDVar5;
  local_EAX_113 = Library::DKW::TBL::DArrayCreate(nullptr,100,9,0x32);
  this_00->field_01CB = local_EAX_113;
  local_EAX_132 = Library::DKW::TBL::DArrayCreate(nullptr,0x14,0x19,0x14);
  this_00->field_01D7 = local_EAX_132;
  this_00->field_0253 = 0;
  this_00->field_0252 = 0;
  this_00->field_0251 = 0;
  this_00->field_0250 = 0;
  uVar13 = 0;
  if (*(int *)sizeHelp_exref != 0) {
    pbVar10 = this_00->field_01C7 + 0xd;
    do {
      if (pbVar10[-5] == 8) {
        iVar30 = *(int *)pbVar10;
        if (iVar30 == 1) {
          this_00->field_0251 = this_00->field_0251 + '\x01';
        }
        else if (iVar30 == 2) {
          this_00->field_0252 = this_00->field_0252 + '\x01';
        }
        else if (iVar30 == 3) {
          this_00->field_0253 = this_00->field_0253 + '\x01';
        }
        else {
          this_00->field_0250 = this_00->field_0250 + '\x01';
        }
      }
      uVar13 = uVar13 + 1;
      pbVar10 = pbVar10 + 0x11;
    } while (uVar13 < *(uint *)sizeHelp_exref);
  }
  local_8 = 0;
  if (*(int *)sizeHelp_exref != 0) {
    local_c = nullptr;
    do {
      pbVar10 = this_00->field_01C7 + (int)local_c;
      if (pbVar10[8] != 0) {
        pDVar6 = this_00->field_01BB;
        bVar3 = true;
        uVar13 = 0;
        local_14 = (char *)0x1;
        if (pDVar6->count != 0) {
          if (pDVar6->count == 0) {
            pvVar4 = nullptr;
            goto LAB_00510f80;
          }
          do {
            pvVar4 = DArrayAt<void>(pDVar6, uVar13);
LAB_00510f80:
            if (((STField<byte>(pvVar4,8) == pbVar10[8]) &&
                (STField<int>(pvVar4,9) == *(int *)(pbVar10 + 9))) &&
               (STField<int>(pvVar4,0xd) == *(int *)(pbVar10 + 0xd))) {
              bVar3 = false;
              goto LAB_00510fa9;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < pDVar6->count);
          bVar3 = true;
        }
LAB_00510fa9:
        if (bVar3) {
          local_28 = *(undefined4 *)pbVar10;
          local_24 = *(undefined4 *)(pbVar10 + 4);
          local_20 = *(undefined4 *)(pbVar10 + 8);
          local_1c = *(undefined4 *)(pbVar10 + 0xc);
          local_18 = pbVar10[0x10];
          local_17 = 0;
          local_16 = 0;
          local_15 = 0;
          Library::DKW::TBL::DArrayAppend(pDVar6,&local_28);
        }
      }
      local_8 = local_8 + 1;
      local_c = (undefined4 *)((int)local_c + 0x11);
    } while (local_8 < *(uint *)sizeHelp_exref);
  }
  do {
    pDVar6 = this_00->field_01BB;
    local_c = nullptr;
    uVar13 = pDVar6->count;
    uVar12 = 0;
    if (uVar13 != 1) {
      do {
        if (uVar12 < uVar13) {
          pUVar14 = DArrayAt<UINT>(pDVar6, uVar12);
        }
        else {
          pUVar14 = nullptr;
        }
        local_8 = uVar12 + 1;
        if (local_8 < uVar13) {
          pUVar11 = DArrayAt<UINT>(pDVar6, local_8);
        }
        else {
          pUVar11 = nullptr;
        }
        if ((pUVar14 != nullptr) && (pUVar11 != nullptr)) {
          local_14 = LoadResourceString(*pUVar11,g_hINSTANCE_00807618);
          pcVar7_mg0 = LoadResourceString(*pUVar14,g_hINSTANCE_00807618);
          iVar4 = Library::MSVCRT::__strcmpi(pcVar7_mg0,local_14);
          if (0 < iVar4) {
            FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)this_00->field_01BB,uVar12,local_8);
            local_c = (undefined4 *)0x1;
          }
        }
        pDVar6 = this_00->field_01BB;
        uVar13 = pDVar6->count;
        uVar12 = local_8;
      } while (local_8 < uVar13 - 1);
    }
  } while (local_c != nullptr);
  iVar30 = 1;
  piVar25 = nullptr;
  pCVar7 = thunk_FUN_00571240("BKG_HELPW",0);
  local_EAX_679 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar25,iVar30);
  this_00->field_01DC = local_EAX_679;
  puVar9 = cMf32::RecGet(g_cMf32_00806790,1,"HLP_OBJ_BKG",nullptr,1);
  iVar30 = 1;
  piVar25 = nullptr;
  this_00->field_021C = puVar9;
  pCVar7 = thunk_FUN_00571240("BUT_HLPLINK",0);
  local_EAX_739 = cMf32::RecGet(g_cMf32_00806790,1,pCVar7,piVar25,iVar30);
  this_00->field_024C = local_EAX_739;
  pcVar8 = (ccFntTy *)ccFntTy::operator_new(0x19d,g_interSystem_00802A28->field_0028);
  this_00->field_01E0 = pcVar8;
  pcVar8->field_0058 = 0;
  pcVar8->field_005C = 0;
  pcVar8 = (ccFntTy *)ccFntTy::operator_new(0x19d,(ccFntTy *)g_interSystem_00802A28->field_002C);
  this_00->field_01E4 = pcVar8;
  pcVar8->field_0058 = 1;
  pcVar8->field_005C = 0;
  pcVar8 = (ccFntTy *)ccFntTy::operator_new(0x19d,g_cMf32_00806790,"MONEY_FONT",0);
  this_00->field_01E8 = pcVar8;
  pcVar8->field_0058 = 1;
  pcVar8->field_005C = 0;
  puVar31 = nullptr;
  iVar27 = 0;
  iVar30 = 1;
  bVar22 = 0;
  uVar13 = 0xffffffff;
  pCVar7 = thunk_FUN_00571240("HLPTRACK",0);
  local_EAX_881 =
       Library::Ourlib::MFRLOAD::mfRLoad
                 (PTR_00806794,CASE_B,pCVar7,uVar13,bVar22,iVar30,iVar27,puVar31);
  this_00->field_0220 = local_EAX_881;
  local_EAX_911 =
       Library::Ourlib::MFRLOAD::mfRLoad
                 (PTR_00806794,CASE_B,"BKG_HLPTTREE",0xffffffff,0,1,0,nullptr);
  this_00->field_0224 = local_EAX_911;
  local_EAX_945 =
       Library::Ourlib::MFRLOAD::mfRLoad
                 (PTR_00806794,CASE_B,&DAT_007c20a0,0xffffffff,0,1,0,nullptr);
  this_00->field_0230 = local_EAX_945;
  local_EAX_976 =
       Library::Ourlib::MFRLOAD::mfRLoad
                 (PTR_00806794,CASE_B,&DAT_007c38c8,0xffffffff,0,1,0,nullptr);
  this_00->field_0234 = local_EAX_976;
  local_EAX_1009 =
       Library::Ourlib::MFRLOAD::mfRLoad
                 (PTR_00806794,CASE_B,"HLP_UPG",0xffffffff,0,1,0,nullptr);
  this_00->field_0228 = local_EAX_1009;
  local_EAX_1040 =
       Library::Ourlib::MFRLOAD::mfRLoad
                 (PTR_00806794,CASE_B,"HLP_UPGD",0xffffffff,0,1,0,nullptr);
  this_00->field_022C = local_EAX_1040;
  local_EAX_1074 =
       Library::Ourlib::MFRLOAD::mfRLoad
                 (PTR_00806794,CASE_B,&DAT_007c2048,0xffffffff,0,1,0,nullptr);
  this_00->field_0238 = local_EAX_1074;
  local_EAX_1104 =
       Library::Ourlib::MFRLOAD::mfRLoad
                 (PTR_00806794,CASE_B,"HLP_FRAME",0xffffffff,0,1,0,nullptr);
  this_00->field_0248 = local_EAX_1104;
  local_EAX_1138 =
       Library::Ourlib::MFRLOAD::mfRLoad
                 (PTR_00806794,CASE_B,"BOATS_R",0xffffffff,0,1,0,nullptr);
  this_00->field_023C = local_EAX_1138;
  local_EAX_1169 =
       Library::Ourlib::MFRLOAD::mfRLoad
                 (PTR_00806794,CASE_B,&DAT_007c1910,0xffffffff,0,1,0,nullptr);
  this_00->field_0240 = local_EAX_1169;
  local_EAX_1202 =
       Library::Ourlib::MFRLOAD::mfRLoad
                 (PTR_00806794,CASE_B,"INF_WEAP",0xffffffff,0,1,0,nullptr);
  pcVar8 = this_00->field_01E4;
  this_00->field_0244 = local_EAX_1202;
  if (pcVar8->field_00A0 != 0) {
    FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar8);
  }
  iVar30 = *(int *)&pcVar8->field_0x8a;
  iVar27 = 1;
  puVar28 = this_00->field_01DC + 0x14;
  uVar17 = FUN_006b4fe0((int)this_00->field_01DC);
  local_EAX_1285 =
       FUN_006b50c0(0x19c,iVar30 + 1,(uint)this_00->field_01DC[7],uVar17,(undefined4 *)puVar28,
                    iVar27);
  this_00->field_01EC = local_EAX_1285;
  iVar30 = 1;
  puVar28 = this_00->field_01DC + 0x14;
  local_EAX_1308 = FUN_006b4fe0((int)this_00->field_01DC);
  pAVar9 = (AnonPointee_HelpPanelTy_0218 *)
           FUN_006b50c0(0x19c,600,(uint)this_00->field_01DC[7],local_EAX_1308,(undefined4 *)puVar28,
                        iVar30);
  this_00->field_0218 = pAVar9;
  pAVar1 = this_00->field_0068;
  uVar13 = pAVar1->field_0014;
  if (uVar13 == 0) {
    uVar13 = ((uint)(ushort)pAVar1->field_000E * pAVar1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
             pAVar1->field_0008;
  }
  puVar31 = (undefined4 *)FUN_006b4fa0((int *)pAVar1);
  for (uVar12 = uVar13 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *puVar31 = 0xffffffff;
    puVar31 = puVar31 + 1;
  }
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined1 *)puVar31 = 0xff;
    puVar31 = (undefined4 *)((int)puVar31 + 1);
  }
  DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0,'\x01',(byte *)this_00->field_01DC
        );
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0068,0,0x6c,2,0x117,0xc);
  uVar13 = 0;
  iVar27 = -1;
  iVar30 = -2;
  pcVar7_mg1 = LoadResourceString(0x2734,g_hINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_01E0,pcVar7_mg1,iVar30,iVar27,uVar13);
  uVar32 = 0;
  uVar29 = 0;
  pcVar24 = nullptr;
  uVar23 = 0;
  uVar21 = 0;
  sVar20 = 0;
  uVar18 = 0xc000;
  uVar15 = 0xbfff;
  pCVar7 = thunk_FUN_00571240("BUT_MEDIUM",0);
  uVar15 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x195,0x17b,1,pCVar7,uVar15,uVar18,sVar20,
                               uVar21,uVar23,pcVar24,uVar29,uVar32);
  local_c = &this_00->field_0180;
  this_00->field_017C = uVar15;
  iVar30 = 0;
  iVar27 = 0x1e;
  local_8 = 7;
  do {
    if (iVar27 < 0x127) {
                    /* WARNING: Could not recover jumptable at 0x0051146f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)(&PTR_LAB_00511560)[iVar30])();
      return;
    }
    uVar23 = 0;
    iVar16 = iVar30 + 0xc09f;
    uVar18 = 0;
    pcVar24 = nullptr;
    uVar15 = 10000;
    uVar21 = 0;
    iVar19 = iVar30 + 0xc0af;
    sVar20 = 2;
    pCVar7 = thunk_FUN_00571240("BUT_HLPHOME",0);
    uVar15 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,iVar27,0x151,1,pCVar7,iVar16,iVar19,sVar20,
                                 uVar21,uVar15,pcVar24,uVar18,uVar23);
    iVar30 = iVar30 + 1;
    iVar27 = iVar27 + 0x2c;
    *local_c = uVar15;
    local_c = local_c + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  PrepMissObj(this_00);
  HomeBut(this_00);
  g_currentExceptionFrame = local_6c.previous;
  return;
}

