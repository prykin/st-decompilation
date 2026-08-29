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
  HelpPanelTy_field_01BBDArray *pHVar5;
  char *pcVar7_mg0;
  int iVar4;
  LPSTR pCVar6;
  ushort *local_EAX_679;
  ushort *puVar9;
  ushort *local_EAX_739;
  ccFntTy *pcVar7;
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
  int pAVar8;
  char *pcVar7_mg1;
  int iVar26;
  byte *pbVar8;
  HelpPanelTy_field_01BBElement *element_01bb;
  uint uVar10;
  uint uVar11;
  HelpPanelTy_field_01BBElement *element_01bb_2;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  short sVar17;
  ushort uVar18;
  byte bVar19;
  uint uVar20;
  char *pcVar21;
  int *piVar22;
  int iVar23;
  ushort *puVar24;
  uint uVar25;
  int iVar27;
  uint *puVar28;
  uint uVar29;
  InternalExceptionFrame local_6c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  byte local_18;
  byte local_17;
  byte local_16;
  byte local_15;
  char *local_14;
  HelpPanelTy *local_10;
  uint *local_c;
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
  /* ST_CALLSITE[00510E78]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_HelpPanelTy_01B3; source view only; no Ghidra override */
  local_EAX_72 = Library::DKW::TBL::DArrayCreate(nullptr,300,0x14,0x32);
  this_00->field_01B3 = (AnonPointee_HelpPanelTy_01B3 *)local_EAX_72;
  /* ST_CALLSITE[00510E8E]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/HelpPanelTy_field_01BBDArray; source view only; no Ghidra override */
  pDVar5 = Library::DKW::TBL::DArrayCreate(nullptr,200,0x14,0x32);
  this_00->field_01BB = (HelpPanelTy_field_01BBDArray *)pDVar5;
  /* ST_CALLSITE[00510EA1]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/HelpPanelTy_field_01CBDArray; source view only; no Ghidra override */
  local_EAX_113 = Library::DKW::TBL::DArrayCreate(nullptr,100,9,0x32);
  this_00->field_01CB = (HelpPanelTy_field_01CBDArray *)local_EAX_113;
  /* ST_CALLSITE[00510EB4]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/HelpPanelTy_field_01D7DArray; source view only; no Ghidra override */
  local_EAX_132 = Library::DKW::TBL::DArrayCreate(nullptr,0x14,0x19,0x14);
  this_00->field_01D7 = (HelpPanelTy_field_01D7DArray *)local_EAX_132;
  this_00->field_0253 = 0;
  this_00->field_0252 = 0;
  this_00->field_0251 = 0;
  this_00->field_0250 = 0;
  uVar11 = 0;
  if (*(int *)sizeHelp_exref != 0) {
    pbVar8 = this_00->field_01C7 + 0xd;
    do {
      if (pbVar8[-5] == 8) {
        iVar27 = *(int *)pbVar8;
        if (iVar27 == 1) {
          this_00->field_0251 = this_00->field_0251 + '\x01';
        }
        else if (iVar27 == 2) {
          this_00->field_0252 = this_00->field_0252 + '\x01';
        }
        else if (iVar27 == 3) {
          this_00->field_0253 = this_00->field_0253 + '\x01';
        }
        else {
          this_00->field_0250 = this_00->field_0250 + '\x01';
        }
      }
      uVar11 = uVar11 + 1;
      pbVar8 = pbVar8 + 0x11;
    } while (uVar11 < *(uint *)sizeHelp_exref);
  }
  local_8 = 0;
  if (*(int *)sizeHelp_exref != 0) {
    local_c = nullptr;
    do {
      pbVar8 = this_00->field_01C7 + (int)local_c;
      if (pbVar8[8] != 0) {
        pHVar5 = this_00->field_01BB;
        bVar3 = true;
        uVar11 = 0;
        local_14 = (char *)0x1;
        if (pHVar5->count != 0) {
          if (pHVar5->count == 0) {
            pvVar4 = nullptr;
            goto LAB_00510f80;
          }
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pvVar4 = (void *)((int)&pHVar5->data->resourceId + pHVar5->elementSize * uVar11);
LAB_00510f80:
            if (((STField<byte>(pvVar4,8) == pbVar8[8]) &&
                (STField<int>(pvVar4,9) == *(int *)(pbVar8 + 9))) &&
               (STField<int>(pvVar4,0xd) == *(int *)(pbVar8 + 0xd))) {
              bVar3 = false;
              goto LAB_00510fa9;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < pHVar5->count);
          bVar3 = true;
        }
LAB_00510fa9:
        if (bVar3) {
          local_28 = *(undefined4 *)pbVar8;
          local_24 = *(undefined4 *)(pbVar8 + 4);
          local_20 = *(undefined4 *)(pbVar8 + 8);
          local_1c = *(undefined4 *)(pbVar8 + 0xc);
          local_18 = pbVar8[0x10];
          local_17 = 0;
          local_16 = 0;
          local_15 = 0;

          Library::DKW::TBL::DArrayAppend((DArrayTy *)pHVar5,&local_28);
        }
      }
      local_8 = local_8 + 1;
      local_c = (uint *)((int)local_c + 0x11);
    } while (local_8 < *(uint *)sizeHelp_exref);
  }
  do {
    pHVar5 = this_00->field_01BB;
    local_c = nullptr;
    uVar11 = pHVar5->count;
    uVar10 = 0;
    if (uVar11 != 1) {
      do {
        if (uVar10 < uVar11) {
          element_01bb_2 = DArrayAt<HelpPanelTy_field_01BBElement>(pHVar5, uVar10);
        }
        else {
          element_01bb_2 = nullptr;
        }
        local_8 = uVar10 + 1;
        if (local_8 < uVar11) {
          element_01bb = DArrayAt<HelpPanelTy_field_01BBElement>(pHVar5, local_8);
        }
        else {
          element_01bb = nullptr;
        }
        if ((element_01bb_2 != nullptr) && (element_01bb != nullptr)) {
          local_14 = LoadResourceString(element_01bb->resourceId,g_hINSTANCE_00807618);
          pcVar7_mg0 = LoadResourceString(element_01bb_2->resourceId,g_hINSTANCE_00807618);

          iVar4 = Library::MSVCRT::__strcmpi(pcVar7_mg0,local_14);
          if (0 < iVar4) {

            FUN_006b0cd0((RecoveredRecordView_00413AF0_B98DB3AE *)this_00->field_01BB,uVar10,local_8
                        );
            local_c = (uint *)0x1;
          }
        }
        pHVar5 = this_00->field_01BB;
        uVar11 = pHVar5->count;
        uVar10 = local_8;
      } while (local_8 < uVar11 - 1);
    }
  } while (local_c != nullptr);
  iVar27 = 1;
  piVar22 = nullptr;
  pCVar6 = thunk_FUN_00571240("BKG_HELPW",0);
  local_EAX_679 = cMf32::RecGet(g_cMf32_00806790,1,pCVar6,piVar22,iVar27);
  this_00->field_01DC = local_EAX_679;
  puVar9 = cMf32::RecGet(g_cMf32_00806790,1,"HLP_OBJ_BKG",nullptr,1);
  iVar27 = 1;
  piVar22 = nullptr;
  this_00->field_021C = puVar9;
  pCVar6 = thunk_FUN_00571240("BUT_HLPLINK",0);
  local_EAX_739 = cMf32::RecGet(g_cMf32_00806790,1,pCVar6,piVar22,iVar27);
  this_00->field_024C = local_EAX_739;
  /* ST_CALLSITE[0051112C]: CALL 0x0070df00; direct=0070DF00 ccFntTy::operator_new; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/uint;pointer:/ccFntTy */
  pcVar7 = ccFntTy::operator_new(0x19d,(ccFntTy *)g_interSystem_00802A28->field_0028);
  this_00->field_01E0 = pcVar7;
  pcVar7->field_0058 = 0;
  pcVar7->field_005C = 0;
  /* ST_CALLSITE[0051114C]: CALL 0x0070df00; direct=0070DF00 ccFntTy::operator_new; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/uint;pointer:/ccFntTy */
  pcVar7 = ccFntTy::operator_new(0x19d,(ccFntTy *)g_interSystem_00802A28->field_002C);
  this_00->field_01E4 = pcVar7;
  pcVar7->field_0058 = 1;
  pcVar7->field_005C = 0;
  /* ST_CALLSITE[0051116F]: CALL 0x0070ceb0; direct=0070CEB0 ccFntTy::operator_new; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/uint;pointer:/cMf32;pointer:/char;/byte */
  pcVar7 = ccFntTy::operator_new(0x19d,g_cMf32_00806790,"MONEY_FONT",0);
  this_00->field_01E8 = pcVar7;
  pcVar7->field_0058 = 1;
  pcVar7->field_005C = 0;
  puVar28 = nullptr;
  iVar23 = 0;
  iVar27 = 1;
  bVar19 = 0;
  uVar11 = 0xffffffff;
  /* ST_CALLSITE[0051118F]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/char; source view only; no Ghidra override */
  pCVar6 = thunk_FUN_00571240("HLPTRACK",0);
  local_EAX_881 =
       Library::Ourlib::MFRLOAD::mfRLoad
                 (PTR_00806794,CASE_B,pCVar6,uVar11,bVar19,iVar27,iVar23,puVar28);
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
  pcVar7 = this_00->field_01E4;
  this_00->field_0244 = local_EAX_1202;
  if (pcVar7->field_00A0 != 0) {
    FUN_00710790((RecoveredRecordView_00710790_7768A573 *)pcVar7);
  }
  iVar27 = *(int *)&pcVar7->field_0x8a;
  iVar23 = 1;
  puVar24 = this_00->field_01DC + 0x14;

  uVar17 = FUN_006b4fe0(this_00->field_01DC);
  local_EAX_1285 =
       /* ST_CALLSITE[00511335]: CALL 0x006b50c0; direct=006B50C0 FUN_006b50c0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ushort; signature=__stdcall;pointer:/ushort;/int;/int;/int;/uint;pointer:/undefined4;/int */
       (int)FUN_006b50c0(0x19c,iVar27 + 1,(uint)this_00->field_01DC[7],uVar17,(undefined4 *)puVar24,
                         iVar23);
  this_00->field_01EC = (ushort *)local_EAX_1285;
  iVar27 = 1;
  puVar24 = this_00->field_01DC + 0x14;

  local_EAX_1308 = FUN_006b4fe0(this_00->field_01DC);
  /* ST_CALLSITE[00511369]: CALL 0x006b50c0; direct=006B50C0 FUN_006b50c0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_HelpPanelTy_0218; signature=__stdcall;pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_HelpPanelTy_0218;/int;/int;/int;/uint;pointer:/undefined4;/int */
  pAVar8 = (int)FUN_006b50c0(0x19c,600,(uint)this_00->field_01DC[7],local_EAX_1308,
                             (undefined4 *)puVar24,iVar27);
  this_00->field_0218 = (AnonPointee_HelpPanelTy_0218 *)pAVar8;
  pAVar1 = this_00->field_0068;
  uVar11 = pAVar1->field_0014;
  if (uVar11 == 0) {
    uVar11 = ((uint)(ushort)pAVar1->field_000E * pAVar1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
             pAVar1->field_0008;
  }

  puVar28 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0((RecoveredRecord_006B4FA0_DAC3A217 *)pAVar1));
  for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar28 = 0xffffffff;
    puVar28 = puVar28 + 1;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined1 *)puVar28 = 0xff;
    puVar28 = (undefined4 *)((int)puVar28 + 1);
  }
  /* ST_CALLSITE[005113C2]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0,'\x01',
         (RecoveredRecordView_006B84D0_87AF9D9B *)this_00->field_01DC);

  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0068,0,0x6c,2,0x117,0xc);
  uVar11 = 0;
  iVar23 = -1;
  iVar27 = -2;
  /* ST_CALLSITE[005113F7]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar7_mg1 = LoadResourceString(0x2734,g_hINSTANCE_00807618);

  ccFntTy::WrStr(this_00->field_01E0,pcVar7_mg1,iVar27,iVar23,uVar11);
  uVar29 = 0;
  uVar25 = 0;
  pcVar21 = nullptr;
  uVar20 = 0;
  uVar18 = 0;
  sVar17 = 0;
  uVar15 = 0xc000;
  uVar13 = 0xbfff;
  pCVar6 = thunk_FUN_00571240("BUT_MEDIUM",0);
  /* ST_CALLSITE[00511440]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
  iVar27 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x195,0x17b,1,pCVar6,uVar13,uVar15,sVar17,
                               uVar18,uVar20,pcVar21,uVar25,uVar29);
  local_c = this_00->field_0180;
  this_00->field_017C = iVar27;
  iVar27 = 0;
  iVar23 = 0x1e;
  local_8 = 7;
  do {
    if (iVar23 < 0x127) {
                    /* WARNING: Could not recover jumptable at 0x0051146f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (*(code *)(&PTR_LAB_00511560)[iVar27])();
      return;
    }
    uVar20 = 0;
    iVar14 = iVar27 + 0xc09f;
    uVar15 = 0;
    pcVar21 = nullptr;
    uVar13 = 10000;
    uVar18 = 0;
    iVar16 = iVar27 + 0xc0af;
    sVar17 = 2;
    pCVar6 = thunk_FUN_00571240("BUT_HLPHOME",0);
    /* ST_CALLSITE[005114D9]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
    uVar11 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,iVar23,0x151,1,pCVar6,iVar14,iVar16,sVar17,
                                 uVar18,uVar13,pcVar21,uVar15,uVar20);
    iVar27 = iVar27 + 1;
    iVar23 = iVar23 + 0x2c;
    *local_c = uVar11;
    local_c = local_c + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  /* ST_CALLSITE[005114FC]: CALL 0x004027ac; direct=004027AC HelpPanelTy::PrepMissObj */
  PrepMissObj(this_00);
  /* ST_CALLSITE[00511503]: CALL 0x004029c8; direct=004029C8 HelpPanelTy::HomeBut */
  HomeBut(this_00);
  g_currentExceptionFrame = local_6c.previous;
  return;
}

