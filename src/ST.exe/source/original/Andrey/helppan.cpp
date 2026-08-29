#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/helppan.cpp

// 00510E30 HelpPanelTy::InitHelpPanel
#line 4 "decomp/ST.exe/functions/00510E30/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::InitHelpPanel */

void __thiscall st::fn_00510E30(HelpPanelTy *this)

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

  local_EAX_35 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
  this_00 = local_10;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_6c.previous;

    iVar26 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0xac,0,local_EAX_35,
                                st::mutable_c_string("%s"),"HelpPanelTy::InitHelpPanel");
    if (iVar26 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_35,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0xac);
    return;
  }
  g_helpPanel_00801690 = local_10;
  /* ST_CALLSITE[00510E78]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_HelpPanelTy_01B3; source view only; no Ghidra override */
  local_EAX_72 = st::fn_006AE290(nullptr,300,0x14,0x32);
  this_00->field_01B3 = reinterpret_cast<AnonPointee_HelpPanelTy_01B3 *>(local_EAX_72);
  /* ST_CALLSITE[00510E8E]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/HelpPanelTy_field_01BBDArray; source view only; no Ghidra override */
  pDVar5 = st::fn_006AE290(nullptr,200,0x14,0x32);
  this_00->field_01BB = reinterpret_cast<HelpPanelTy_field_01BBDArray *>(pDVar5);
  /* ST_CALLSITE[00510EA1]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/HelpPanelTy_field_01CBDArray; source view only; no Ghidra override */
  local_EAX_113 = st::fn_006AE290(nullptr,100,9,0x32);
  this_00->field_01CB = reinterpret_cast<HelpPanelTy_field_01CBDArray *>(local_EAX_113);
  /* ST_CALLSITE[00510EB4]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/HelpPanelTy_field_01D7DArray; source view only; no Ghidra override */
  local_EAX_132 = st::fn_006AE290(nullptr,0x14,0x19,0x14);
  this_00->field_01D7 = reinterpret_cast<HelpPanelTy_field_01D7DArray *>(local_EAX_132);
  this_00->field_0253 = 0;
  this_00->field_0252 = 0;
  this_00->field_0251 = 0;
  this_00->field_0250 = 0;
  uVar11 = 0;
  if (*(int *)PTR_sizeHelp_0085c118 != 0) {
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
    } while (uVar11 < *(uint *)PTR_sizeHelp_0085c118);
  }
  local_8 = 0;
  if (*(int *)PTR_sizeHelp_0085c118 != 0) {
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

          st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(pHVar5),&local_28);
        }
      }
      local_8 = local_8 + 1;
      local_c = (uint *)((int)local_c + 0x11);
    } while (local_8 < *(uint *)PTR_sizeHelp_0085c118);
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
          local_14 = st::fn_006B0140(element_01bb->resourceId,g_hINSTANCE_00807618);
          pcVar7_mg0 = st::fn_006B0140(element_01bb_2->resourceId,g_hINSTANCE_00807618);

          iVar4 = st::fn_0072E620(pcVar7_mg0,local_14);
          if (0 < iVar4) {

            st::fn_006B0CD0(reinterpret_cast<RecoveredRecordView_00413AF0_B98DB3AE *>(this_00->field_01BB),uVar10,local_8
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
  pCVar6 = st::fn_0040577C(st::mutable_c_string("BKG_HELPW"),0);
  local_EAX_679 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar6),piVar22,iVar27);
  this_00->field_01DC = local_EAX_679;
  puVar9 = st::fn_006F1CE0(g_cMf32_00806790,1,st::mutable_c_string("HLP_OBJ_BKG"),nullptr,1);
  iVar27 = 1;
  piVar22 = nullptr;
  this_00->field_021C = puVar9;
  pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_HLPLINK"),0);
  local_EAX_739 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar6),piVar22,iVar27);
  this_00->field_024C = local_EAX_739;
  /* ST_CALLSITE[0051112C]: CALL 0x0070df00; direct=0070DF00 ccFntTy::operator_new; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/uint;pointer:/ccFntTy */
  pcVar7 = st::pointer_boundary_cast<ccFntTy *>(st::fn_0070DF00(0x19d,reinterpret_cast<ccFntTy *>(g_interSystem_00802A28->field_0028)));
  this_00->field_01E0 = pcVar7;
  pcVar7->field_0058 = 0;
  pcVar7->field_005C = 0;
  /* ST_CALLSITE[0051114C]: CALL 0x0070df00; direct=0070DF00 ccFntTy::operator_new; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/uint;pointer:/ccFntTy */
  pcVar7 = st::pointer_boundary_cast<ccFntTy *>(st::fn_0070DF00(0x19d,reinterpret_cast<ccFntTy *>(g_interSystem_00802A28->field_002C)));
  this_00->field_01E4 = pcVar7;
  pcVar7->field_0058 = 1;
  pcVar7->field_005C = 0;
  /* ST_CALLSITE[0051116F]: CALL 0x0070ceb0; direct=0070CEB0 ccFntTy::operator_new; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/uint;pointer:/cMf32;pointer:/char;/byte */
  pcVar7 = st::pointer_boundary_cast<ccFntTy *>(st::fn_0070CEB0(0x19d,g_cMf32_00806790,st::mutable_c_string("MONEY_FONT"),0));
  this_00->field_01E8 = pcVar7;
  pcVar7->field_0058 = 1;
  pcVar7->field_005C = 0;
  puVar28 = nullptr;
  iVar23 = 0;
  iVar27 = 1;
  bVar19 = 0;
  uVar11 = 0xffffffff;
  /* ST_CALLSITE[0051118F]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/char; source view only; no Ghidra override */
  pCVar6 = st::fn_0040577C(st::mutable_c_string("HLPTRACK"),0);
  local_EAX_881 =
       st::fn_00709AF0
                 (PTR_00806794,CASE_B,reinterpret_cast<char *>(pCVar6),uVar11,bVar19,iVar27,iVar23,puVar28);
  this_00->field_0220 = local_EAX_881;
  local_EAX_911 =
       st::fn_00709AF0
                 (PTR_00806794,CASE_B,st::mutable_c_string("BKG_HLPTTREE"),0xffffffff,0,1,0,nullptr);
  this_00->field_0224 = local_EAX_911;
  local_EAX_945 =
       st::fn_00709AF0
                 (PTR_00806794,CASE_B,reinterpret_cast<char *>(&DAT_007c20a0),0xffffffff,0,1,0,nullptr);
  this_00->field_0230 = local_EAX_945;
  local_EAX_976 =
       st::fn_00709AF0
                 (PTR_00806794,CASE_B,reinterpret_cast<char *>(&DAT_007c38c8),0xffffffff,0,1,0,nullptr);
  this_00->field_0234 = local_EAX_976;
  local_EAX_1009 =
       st::fn_00709AF0
                 (PTR_00806794,CASE_B,st::mutable_c_string("HLP_UPG"),0xffffffff,0,1,0,nullptr);
  this_00->field_0228 = local_EAX_1009;
  local_EAX_1040 =
       st::fn_00709AF0
                 (PTR_00806794,CASE_B,st::mutable_c_string("HLP_UPGD"),0xffffffff,0,1,0,nullptr);
  this_00->field_022C = local_EAX_1040;
  local_EAX_1074 =
       st::fn_00709AF0
                 (PTR_00806794,CASE_B,reinterpret_cast<char *>(&DAT_007c2048),0xffffffff,0,1,0,nullptr);
  this_00->field_0238 = local_EAX_1074;
  local_EAX_1104 =
       st::fn_00709AF0
                 (PTR_00806794,CASE_B,st::mutable_c_string("HLP_FRAME"),0xffffffff,0,1,0,nullptr);
  this_00->field_0248 = local_EAX_1104;
  local_EAX_1138 =
       st::fn_00709AF0
                 (PTR_00806794,CASE_B,st::mutable_c_string("BOATS_R"),0xffffffff,0,1,0,nullptr);
  this_00->field_023C = st::machine_word_boundary_cast<undefined4>(local_EAX_1138);
  local_EAX_1169 =
       st::fn_00709AF0
                 (PTR_00806794,CASE_B,reinterpret_cast<char *>(&DAT_007c1910),0xffffffff,0,1,0,nullptr);
  this_00->field_0240 = st::machine_word_boundary_cast<undefined4>(local_EAX_1169);
  local_EAX_1202 =
       st::fn_00709AF0
                 (PTR_00806794,CASE_B,st::mutable_c_string("INF_WEAP"),0xffffffff,0,1,0,nullptr);
  pcVar7 = this_00->field_01E4;
  this_00->field_0244 = local_EAX_1202;
  if (pcVar7->field_00A0 != 0) {
    st::fn_00710790(reinterpret_cast<RecoveredRecordView_00710790_7768A573 *>(pcVar7));
  }
  iVar27 = *(int *)&pcVar7->field_0x8a;
  iVar23 = 1;
  puVar24 = this_00->field_01DC + 0x14;

  uVar17 = st::fn_006B4FE0(this_00->field_01DC);
  local_EAX_1285 =
       /* ST_CALLSITE[00511335]: CALL 0x006b50c0; direct=006B50C0 FUN_006b50c0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ushort; signature=__stdcall;pointer:/ushort;/int;/int;/int;/uint;pointer:/undefined4;/int */
       (int)st::fn_006B50C0(0x19c,iVar27 + 1,(uint)this_00->field_01DC[7],uVar17,reinterpret_cast<undefined4 *>(puVar24),
                         iVar23);
  this_00->field_01EC = (ushort *)local_EAX_1285;
  iVar27 = 1;
  puVar24 = this_00->field_01DC + 0x14;

  local_EAX_1308 = st::fn_006B4FE0(this_00->field_01DC);
  /* ST_CALLSITE[00511369]: CALL 0x006b50c0; direct=006B50C0 FUN_006b50c0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_HelpPanelTy_0218; signature=__stdcall;pointer:/SubmarineTitans/Recovered/ClassPointees/AnonPointee_HelpPanelTy_0218;/int;/int;/int;/uint;pointer:/undefined4;/int */
  pAVar8 = (int)st::fn_006B50C0(0x19c,600,(uint)this_00->field_01DC[7],local_EAX_1308,
                             reinterpret_cast<undefined4 *>(puVar24),iVar27);
  this_00->field_0218 = (AnonPointee_HelpPanelTy_0218 *)pAVar8;
  pAVar1 = this_00->field_0068;
  uVar11 = pAVar1->field_0014;
  if (uVar11 == 0) {
    uVar11 = ((uint)(ushort)pAVar1->field_000E * pAVar1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
             pAVar1->field_0008;
  }

  puVar28 = STPointerBoundaryCast<undefined4 *>(st::fn_006B4FA0(reinterpret_cast<RecoveredRecord_006B4FA0_DAC3A217 *>(pAVar1)));
  for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar28 = 0xffffffff;
    puVar28 = puVar28 + 1;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined1 *)puVar28 = 0xff;
    puVar28 = (undefined4 *)((int)puVar28 + 1);
  }
  /* ST_CALLSITE[005113C2]: CALL 0x00403229; direct=00403229 DibPut */
  st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0068),0,0,'\x01',
         reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_01DC));

  st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0068,0,0x6c,2,0x117,0xc);
  uVar11 = 0;
  iVar23 = -1;
  iVar27 = -2;
  /* ST_CALLSITE[005113F7]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar7_mg1 = st::fn_006B0140(0x2734,g_hINSTANCE_00807618);

  st::fn_007119C0(this_00->field_01E0,pcVar7_mg1,iVar27,iVar23,uVar11);
  uVar29 = 0;
  uVar25 = 0;
  pcVar21 = nullptr;
  uVar20 = 0;
  uVar18 = 0;
  sVar17 = 0;
  uVar15 = 0xc000;
  uVar13 = 0xbfff;
  pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_MEDIUM"),0);
  /* ST_CALLSITE[00511440]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
  iVar27 = st::fn_0040398B(reinterpret_cast<UPanelTy *>(this_00),0,1,0x195,0x17b,1,pCVar6,uVar13,uVar15,sVar17,
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
    pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_HLPHOME"),0);
    /* ST_CALLSITE[005114D9]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
    uVar11 = st::fn_0040398B(reinterpret_cast<UPanelTy *>(this_00),0,1,iVar23,0x151,1,pCVar6,iVar14,iVar16,sVar17,
                                 uVar18,uVar13,pcVar21,uVar15,uVar20);
    iVar27 = iVar27 + 1;
    iVar23 = iVar23 + 0x2c;
    *local_c = uVar11;
    local_c = local_c + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  /* ST_CALLSITE[005114FC]: CALL 0x004027ac; direct=004027AC HelpPanelTy::PrepMissObj */
  st::fn_004027AC(this_00);
  /* ST_CALLSITE[00511503]: CALL 0x004029c8; direct=004029C8 HelpPanelTy::HomeBut */
  st::fn_004029C8(this_00);
  g_currentExceptionFrame = local_6c.previous;
  return;
}

// 00511760 HelpPanelTy::DoneHelpPanel
#line 4 "decomp/ST.exe/functions/00511760/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DoneHelpPanel */

void __thiscall st::fn_00511760(HelpPanelTy *this)

{
  HelpPanelTy *pHVar2;
  int errorCode;
  int iVar3;
  uint *puVar4;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;

  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pHVar2 = local_c;
  if (errorCode == 0) {
    if (local_c->field_017C != 0) {
      st::fn_006E56B0(local_c->field_000C,local_c->field_017C);
    }
    pHVar2->field_017C = 0;
    puVar4 = pHVar2->field_0180;
    local_8 = 7;
    do {
      if (*puVar4 != 0) {
        st::fn_006E56B0(pHVar2->field_000C,*puVar4);
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (pHVar2->field_019C != 0) {
      st::fn_006E56B0(pHVar2->field_000C,pHVar2->field_019C);
    }
    pHVar2->field_019C = 0;
    if ((DArrayTy *)pHVar2->field_01B3 != nullptr) {
      st::fn_006AE110(reinterpret_cast<DArrayTy *>(pHVar2->field_01B3));
    }
    pHVar2->field_01B3 = nullptr;
    if (pHVar2->field_01BB != nullptr) {
      st::fn_006AE110(reinterpret_cast<DArrayTy *>(pHVar2->field_01BB));
    }
    pHVar2->field_01BB = nullptr;
    if (pHVar2->field_01CB != nullptr) {
      st::fn_006AE110(reinterpret_cast<DArrayTy *>(pHVar2->field_01CB));
    }
    pHVar2->field_01CB = nullptr;
    if (pHVar2->field_01D7 != nullptr) {
      st::fn_006AE110(reinterpret_cast<DArrayTy *>(pHVar2->field_01D7));
    }
    pHVar2->field_01D7 = nullptr;
    if ((DArrayTy *)pHVar2->field_01D3 != nullptr) {
      st::fn_006B5570(reinterpret_cast<DArrayTy *>(pHVar2->field_01D3));
    }
    pHVar2->field_01D3 = nullptr;
    puVar4 = pHVar2->field_01F0;
    local_8 = 10;
    do {
      if (*puVar4 != 0) {
        st::fn_006F20E0(g_cMf32_00806790,puVar4);
      }
      puVar4 = puVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    pHVar2->field_0238 = nullptr;
    pHVar2->field_0248 = nullptr;
    pHVar2->field_022C = nullptr;
    pHVar2->field_0228 = nullptr;
    pHVar2->field_0234 = nullptr;
    pHVar2->field_0230 = nullptr;
    pHVar2->field_0224 = nullptr;
    pHVar2->field_0220 = nullptr;
    pHVar2->field_0244 = nullptr;
    pHVar2->field_0240 = 0;
    pHVar2->field_023C = 0;
    if (pHVar2->field_01E0 != nullptr) {
      st::fn_00710560(reinterpret_cast<uint *>(pHVar2->field_01E0));
      pHVar2->field_01E0 = nullptr;
    }
    if (pHVar2->field_01E4 != nullptr) {
      st::fn_00710560(reinterpret_cast<uint *>(pHVar2->field_01E4));
      pHVar2->field_01E4 = nullptr;
    }
    if (pHVar2->field_01E8 != nullptr) {
      st::fn_00710560(reinterpret_cast<uint *>(pHVar2->field_01E8));
      pHVar2->field_01E8 = nullptr;
    }
    if (pHVar2->field_0218 != nullptr) {
      st::fn_006AB060(&pHVar2->field_0218);
    }
    if (pHVar2->field_01EC != nullptr) {
      st::fn_006AB060(&pHVar2->field_01EC);
    }
    if (pHVar2->field_024C != nullptr) {
      st::fn_006F20E0(g_cMf32_00806790,reinterpret_cast<uint *>(&pHVar2->field_024C));
    }
    if (pHVar2->field_01DC != nullptr) {
      st::fn_006F20E0(g_cMf32_00806790,reinterpret_cast<uint *>(&pHVar2->field_01DC));
    }
    if (pHVar2->field_021C != nullptr) {
      st::fn_006F20E0(g_cMf32_00806790,reinterpret_cast<uint *>(&pHVar2->field_021C));
    }
    g_helpPanel_00801690 = nullptr;
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;

  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0xcf,0,errorCode,
                             st::mutable_c_string("%s"),"HelpPanelTy::DoneHelpPanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0xcf);
  return;
}

// 00511AB0 HelpPanelTy::CheckBkView
#line 4 "decomp/ST.exe/functions/00511AB0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::CheckBkView
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:2: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=00511ACA MOV ECX,dword ptr [EBP + 0xc];
   first-use mask

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=12, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_00511AB0(HelpPanelTy *this,int param_1,ushort param_2)

{
  AnonPointee_HelpPanelTy_0218 **slotStorage;
  AnonPointee_HelpPanelTy_0218 *pAVar1;
  HelpPanelTy *pHVar3;
  int iVar4;
  int uVar5;
  AnonPointee_HelpPanelTy_0218 *pAVar4;
  uint *puVar5;
  int iVar8;
  uint uVar6;
  ushort *puVar7;
  int iVar9;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  uint local_8;

  if ((this->field_0218 != nullptr) &&
     ((int)this->field_0218->field_0008 < st::storage_bit_cast<int>(static_cast<uint32_t>((uint)param_2 + param_1)))) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;

    iVar4 = st::fn_0072D7F0(local_50.jumpBuffer,0);
    pHVar3 = local_c;
    if (iVar4 == 0) {
      iVar9 = 1;
      pAVar4 = local_c->field_0218;
      slotStorage = &local_c->field_0218;
      puVar7 = local_c->field_01DC + 0x14;

      uVar5 = st::fn_006B4FE0(local_c->field_01DC);
      pAVar4 = (AnonPointee_HelpPanelTy_0218 *)

               st::fn_006B50C0(pAVar4->field_0004,pAVar4->field_0008 + 0x32,(uint)pHVar3->field_01DC[7]
                            ,uVar5,reinterpret_cast<undefined4 *>(puVar7),iVar9);
      local_8 = pAVar4->field_0014;
      if (local_8 == 0) {
        local_8 = ((uint)(ushort)pAVar4->field_000E * pAVar4->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                  pAVar4->field_0008;
      }

      puVar5 = STPointerBoundaryCast<undefined4 *>(st::fn_006B4FA0(reinterpret_cast<RecoveredRecord_006B4FA0_DAC3A217 *>(pAVar4)));
      for (uVar6 = local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
      }
      for (uVar6 = local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar5 = 0xff;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      pAVar1 = *slotStorage;

      st::fn_006B55F0
                (reinterpret_cast<RecoveredSourceFamily_dibcopy *>(pAVar4),0,0,0,
                 reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pAVar1),0,0,0,pAVar1->field_0004,
                 pAVar1->field_0008);
      st::fn_006AB060(slotStorage);
      *slotStorage = pAVar4;
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;

    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0xdc,0,iVar4,st::mutable_c_string("%s"),
                               "HelpPanelTy::CheckBkView");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0xdc);
  }
  return;
}

// 00511C70 HelpPanelTy::ShiftControls
#line 4 "decomp/ST.exe/functions/00511C70/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::ShiftControls

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_00511C70(HelpPanelTy *this,int param_1)

{
  HelpPanelTy *this_00;
  short sVar2;
  int iVar4;
  int iVar3;
  int iVar5;
  uint *puVar6;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  if (param_1 != this->field_005C) {
    this->field_005C = param_1;
    memset(&this->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
    sVar2 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 == 0) {
      sVar2 = -sVar2;
    }
    *(short *)&this->field_0x2e = sVar2;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    this_00 = local_8;
    if (iVar4 == 0) {
      if (local_8->field_017C != 0) {
        st::fn_006E6080(local_8,2,local_8->field_017C,reinterpret_cast<undefined4 *>(&local_8->field_0x18));
      }
      puVar6 = this_00->field_0180;
      iVar5 = 7;
      do {
        if (*puVar6 != 0) {
          st::fn_006E6080(this_00,2,*puVar6,reinterpret_cast<undefined4 *>(&this_00->field_0x18));
        }
        puVar6 = puVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (this_00->field_019C != 0) {
        st::fn_006E6080(this_00,2,this_00->field_019C,reinterpret_cast<undefined4 *>(&this_00->field_0x18));
        memset(&this_00->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0xf2,0,iVar4,st::mutable_c_string("%s"),
                               "HelpPanelTy::ShiftControls");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0xf2);
  }
  return;
}

// 00511DF0 HelpPanelTy::SwitchOptPanel
#line 4 "decomp/ST.exe/functions/00511DF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::SwitchOptPanel

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STSwitchEnumApplier] Switch target field_0172 uses
   /SubmarineTitans/Recovered/Enums/HelpPanelTy_field_0172State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

void __thiscall st::fn_00511DF0(HelpPanelTy *this,int param_1)

{
  HelpPanelTy_field_0172State HVar1;
  int iVar2;
  HelpPanelTy *this_00;
  int iVar3_mg0;
  int iVar3_mg0_2;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3_mg0 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3_mg0 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3_mg0_2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x10f,0,iVar3_mg0,
                                     st::mutable_c_string("%s"),"HelpPanelTy::SwitchOptPanel");
    if (iVar3_mg0_2 == 0) {
      st::fn_006A5E40(iVar3_mg0,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x10f);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  HVar1 = local_8->field_0172;
  if (HVar1 == CASE_1) {
    if (param_1 != 0) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    STPiece<0,2>(iVar2) = local_8->field_0178;
    STPiece<2,2>(iVar2) = local_8->field_017A;
    if (iVar2 != 0) {
      local_8->field_0028 = 0x4202;
      *(undefined2 *)&local_8->field_0x2c = 0;
      *(undefined2 *)&local_8->field_0x2e = 2;
      local_8->field_0030 = (undefined2)iVar2;
      local_8->field_0032 = STPiece<2,2>(iVar2);
      if (g_cursorClass_00802A30 != nullptr) {
        /* ST_CALLSITE[00511EC2]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
        g_cursorClass_00802A30->GetMessage((STMessage *)&local_8->field_0x18);
      }
    }
    /* ST_CALLSITE[00511EC8]: CALL 0x00404fd9; direct=00404FD9 HelpPanelTy::ShiftControls */
    st::fn_00404FD9(this_00,0);
  }
  else {
    if (HVar1 == CASE_2) {
      if (param_1 == 0) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      local_8->field_0172 = CASE_3;
      st::fn_00405E2F(CASE_AF);
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      /* ST_CALLSITE[00511E7B]: CALL 0x00402ed2; direct=00402ED2 CPanelTy::ShiftControls */
      st::fn_00402ED2(g_cPanel_00801688,0);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    if (HVar1 != CASE_3) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  }
  if (param_1 == 0) {
    this_00->field_0172 = CASE_4;
    st::fn_00405E2F(CASE_B0);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 00511FA0 HelpPanelTy::SetPanel
#line 4 "decomp/ST.exe/functions/00511FA0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::SetPanel */

undefined4 __thiscall st::fn_00511FA0(HelpPanelTy *this,char param_1)

{
  HelpPanelTy *this_00;
  int errorCode;
  int iVar2;
  uint uVar3;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  if (this->field_01A0 == param_1) {
    return 0;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    local_8->field_01A0 = param_1;
    if (param_1 != '\0') {
      if (g_researchPanel_008016E8 != nullptr) {
        /* ST_CALLSITE[0051200A]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
        st::fn_00401A73(g_researchPanel_008016E8,'\0');
      }
      if (g_bldBoatPanel_0080167C != nullptr) {
        /* ST_CALLSITE[0051201B]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
        st::fn_00401A73(g_bldBoatPanel_0080167C,'\0');
      }
      if (g_bldObjPanel_00801684 != nullptr) {
        /* ST_CALLSITE[0051202C]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
        st::fn_00401A73(g_bldObjPanel_00801684,'\0');
      }
      if (g_infocPanel_00801698 != nullptr) {
        /* ST_CALLSITE[0051203F]: CALL dword ptr [EDX + 0x1c] */
        (*g_infocPanel_00801698->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_infocPanel_00801698),'\0');
      }
      if (g_tradePanel_00802A44 != nullptr) {
        /* ST_CALLSITE[00512050]: CALL 0x00404af7; direct=00404AF7 TradePanelTy::sub_00552160 */
        st::fn_00404AF7(g_tradePanel_00802A44,'\0','\0');
      }
      if (g_behPanel_00801678 != nullptr) {
        /* ST_CALLSITE[00512063]: CALL dword ptr [EAX + 0x1c] */
        (*g_behPanel_00801678->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_behPanel_00801678),'\0');
      }
      if (g_sAMPanel_008016EC != nullptr) {
        /* ST_CALLSITE[00512074]: CALL dword ptr [EDX + 0x1c] */
        (*g_sAMPanel_008016EC->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_sAMPanel_008016EC),'\0');
      }
      if (g_upgPanel_00802A48 != nullptr) {
        /* ST_CALLSITE[00512085]: CALL dword ptr [EAX + 0x1c] */
        (*g_upgPanel_00802A48->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_upgPanel_00802A48),'\0');
      }
      if (g_bldLabPanel_00801680 != nullptr) {
        /* ST_CALLSITE[00512094]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
        st::fn_00401A73(g_bldLabPanel_00801680,'\0');
      }
      if (g_frmPanel_0080168C != nullptr) {
        /* ST_CALLSITE[005120A7]: CALL dword ptr [EDX + 0x1c] */
        (*g_frmPanel_0080168C->vtable->SetPanel)(reinterpret_cast<SpecPanelTy *>(g_frmPanel_0080168C),'\0');
      }
      if (g_playPanel_008016E4 != nullptr) {
        /* ST_CALLSITE[005120B6]: CALL 0x0040425f; direct=0040425F PlayPanelTy::SetPanel */
        st::fn_0040425F(g_playPanel_008016E4,'\0');
      }
      if (g_optPanel_008016DC != nullptr) {
        /* ST_CALLSITE[005120C5]: CALL 0x00402630; direct=00402630 OptPanelTy::SwitchOptPanelOff */
        st::fn_00402630(g_optPanel_008016DC);
      }
      /* ST_CALLSITE[005120CE]: CALL 0x00405c3b; direct=00405C3B HelpPanelTy::SwitchOptPanel */
      st::fn_00405C3B(this_00,1);
      g_currentExceptionFrame = local_4c.previous;
      return 1;
    }
    if ((g_cPanel_00801688 != nullptr) && (g_cPanel_00801688->field_023F == CASE_1)) {
      /* ST_CALLSITE[005120FD]: CALL 0x00402ed2; direct=00402ED2 CPanelTy::ShiftControls */
      st::fn_00402ED2(g_cPanel_00801688,1);
    }
    /* ST_CALLSITE[00512106]: CALL 0x00405c3b; direct=00405C3B HelpPanelTy::SwitchOptPanel */
    st::fn_00405C3B(this_00,0);
    g_currentExceptionFrame = local_4c.previous;
    return 1;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x12e,0,errorCode,
                             st::mutable_c_string("%s"),"HelpPanelTy::SetPanel");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x12e);
  return 1;
}

// 005123A0 HelpPanelTy::CreateList
#line 4 "decomp/ST.exe/functions/005123A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::CreateList

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005123A0(HelpPanelTy *this)

{
  HelpPanelTy *this_00;
  int iVar3;
  HelpPanelTy_field_01BBDArray *pHVar2;
  int iVar4;
  int iVar5;
  int *piVar7;
  int *piVar8;
  int local_520 [4];
  uint local_510;
  uint local_50c;
  dword local_508;
  uint local_504;
  uint local_4f8;
  uint local_4f4;
  uint local_4f0;
  uint local_4d8;
  uint local_4d4;
  uint local_4d0;
  uint local_4b8;
  uint local_4b4;
  uint local_4b0;
  uint local_498;
  uint local_494;
  uint local_490;
  uint local_3f4;
  int local_3f0 [4];
  uint local_3e0;
  uint local_3dc;
  uint local_390;
  uint local_38c;
  uint local_388;
  uint local_2e8;
  uint local_2e4;
  uint local_2e0;
  uint local_2dc;
  ushort *local_2cc;
  int local_2c8;
  uint local_274;
  int local_270 [26];
  uint local_208;
  ushort *local_14c;
  int local_148;
  uint local_f4;
  uint local_f0;
  uint local_e8;
  int local_e4;
  int local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_60;
  uint local_5c;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  piVar7 = local_520;
  local_8 = this;
  for (iVar5 = 0x135; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;

  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 == 0) {
    if (local_8->field_019C != 0) {
      st::fn_006E56B0(local_8->field_000C,local_8->field_019C);
    }

    st::fn_006B55F0
              (reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0068),0,0x21,0x16,
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_01DC),0,0x21,0x16,0x19c,0x118);
    local_520[0] = 0;
    local_520[2] = this_00->field_003C + 0x21;
    if (this_00->field_005C == 0) {
      local_520[3] = -this_00->field_0048;
    }
    else {
      local_520[3] = this_00->field_0044;
    }
    local_520[3] = local_520[3] + 0x16;
    local_510 = 0x19c;
    local_50c = 0x118;
    if (this_00->field_01A1 == 0) {
      pHVar2 = reinterpret_cast<HelpPanelTy_field_01BBDArray *>(this_00->field_01B3);
    }
    else {
      pHVar2 = this_00->field_01BB;
    }
    local_508 = pHVar2->count;
    local_504 = 0;
    local_4f8 = this_00->field_0008;
    local_3f0[0] = 0;
    local_3f0[2] = this_00->field_003C + 0x1c3;
    local_4f4 = 2;
    local_4f0 = 0x8160;
    local_4d4 = 2;
    local_4d0 = 0x8161;
    local_4b4 = 2;
    local_4b0 = 0x8162;
    local_494 = 2;
    local_490 = 0x8163;
    local_3f4 = 2;
    local_3f0[1] = 2;
    local_2e8 = 1;
    local_2e4 = 1;
    if (this_00->field_005C == 0) {
      local_3f0[3] = -this_00->field_0048;
    }
    else {
      local_3f0[3] = this_00->field_0044;
    }
    local_3f0[3] = local_3f0[3] + 0x16;
    local_3e0 = 0x11;
    local_3dc = 0x24;
    local_4d8 = local_4f8;
    local_4b8 = local_4f8;
    local_498 = local_4f8;
    local_2cc = st::fn_0070AA70(g_cMf32_00806790,st::mutable_c_string("BUT_MSLUP"),0,1);

    local_2c8 = st::fn_0070A6F0(g_cMf32_00806790,0x12,st::mutable_c_string("BUT_MSLUP"),1);
    local_390 = this_00->field_0008;
    iVar5 = this_00->field_005C;
    local_38c = 2;
    local_274 = 2;
    local_2e0 = 500;
    local_2dc = 0x32;
    local_388 = 0x8164;
    piVar7 = local_3f0;
    piVar8 = local_270;
    memmove(piVar8, piVar7, 0x17c); /* compiler REP MOVS byte copy */
    if (iVar5 == 0) {
      local_270[3] = -this_00->field_0048;
    }
    else {
      local_270[3] = this_00->field_0044;
    }
    local_270[3] = local_270[3] + 0x109;
    local_14c = st::fn_0070AA70(g_cMf32_00806790,st::mutable_c_string("BUT_MSLDN"),0,1);

    local_148 = st::fn_0070A6F0(g_cMf32_00806790,0x12,st::mutable_c_string("BUT_MSLDN"),1);
    local_e4 = this_00->field_003C + 0x1c3;
    local_208 = 0x8165;
    local_f4 = 3;
    local_f0 = 1;
    local_e8 = 0;
    if (this_00->field_005C == 0) {
      local_e0 = -this_00->field_0048;
    }
    else {
      local_e0 = this_00->field_0044;
    }
    local_a0 = this_00->field_0008;
    local_e0 = local_e0 + 0x3d;
    local_dc = 0x11;
    local_d8 = 0xc9;
    local_d4 = 0x15;
    local_9c = 2;
    local_98 = 0x8166;
    local_60 = 1;
    local_5c = 1;
    /* ST_CALLSITE[005126BE]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              (reinterpret_cast<SystemClassTy *>(this_00->field_000C),7,&this_00->field_019C,nullptr,st::machine_word_boundary_cast<undefined4>(local_520),0);
    iVar5 = this_00->field_019C;
    if (iVar5 != 0) {
      this_00->field_0028 = 0x20;
      *(undefined4 *)&this_00->field_0x2c = 1;
      st::fn_006E6080(this_00,2,iVar5,reinterpret_cast<undefined4 *>(&this_00->field_0x18));
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x1a5,0,iVar3,st::mutable_c_string("%s"),
                             "HelpPanelTy::CreateList");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x1a5);
  return;
}

// 00512830 HelpPanelTy::CreateSlider
#line 4 "decomp/ST.exe/functions/00512830/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::CreateSlider

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_00512830(HelpPanelTy *this,int param_1)

{
  HelpPanelTy *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar6;
  int *piVar7;
  int local_424 [6];
  uint local_40c;
  uint local_408;
  uint local_3bc;
  uint local_3b8;
  uint local_3b4;
  uint local_314;
  uint local_310;
  uint local_30c;
  uint local_308;
  ushort *local_2f8;
  int local_2f4;
  uint local_2a0;
  int local_29c [26];
  uint local_234;
  ushort *local_178;
  int local_174;
  uint local_120;
  uint local_11c;
  uint local_114;
  int local_110;
  int local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_8c;
  uint local_88;
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_64;
  uint local_60;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  piVar6 = local_424;
  local_8 = this;
  for (iVar4 = 0xf6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    if (local_8->field_019C != 0) {
      st::fn_006E56B0(local_8->field_000C,local_8->field_019C);
    }
    local_7c = this_00->field_0008;
    local_64 = param_1;
    local_424[4] = this_00->field_003C + 0x1c3;
    this_00->field_01C3 = 0;
    local_424[0] = 0;
    local_60 = 0;
    local_78 = 2;
    local_74 = 0x6200;
    local_424[1] = 2;
    local_424[2] = 0;
    local_424[3] = 2;
    if (this_00->field_005C == 0) {
      local_424[5] = -this_00->field_0048;
    }
    else {
      local_424[5] = this_00->field_0044;
    }
    local_424[5] = local_424[5] + 0x109;
    local_40c = 0x11;
    local_408 = 0x24;
    local_30c = 500;
    local_308 = 0x32;
    local_2f8 = st::fn_0070AA70(g_cMf32_00806790,st::mutable_c_string("BUT_MSLDN"),0,1);
    local_2f4 = st::fn_0070A6F0(g_cMf32_00806790,0x12,st::mutable_c_string("BUT_MSLDN"),1);
    iVar4 = this_00->field_005C;
    local_3b8 = 2;
    local_314 = 1;
    local_310 = 1;
    local_2a0 = 2;
    local_3bc = this_00->field_0008;
    local_3b4 = 0x8165;
    piVar6 = local_424 + 2;
    piVar7 = local_29c;
    memmove(piVar7, piVar6, 0x17c); /* compiler REP MOVS byte copy */
    if (iVar4 == 0) {
      local_29c[3] = -this_00->field_0048;
    }
    else {
      local_29c[3] = this_00->field_0044;
    }
    local_29c[3] = local_29c[3] + 0x16;
    local_178 = st::fn_0070AA70(g_cMf32_00806790,st::mutable_c_string("BUT_MSLUP"),0,1);
    local_174 = st::fn_0070A6F0(g_cMf32_00806790,0x12,st::mutable_c_string("BUT_MSLUP"),1);
    local_110 = this_00->field_003C + 0x1c3;
    local_234 = 0x8164;
    local_120 = 3;
    local_11c = 1;
    local_114 = 0;
    if (this_00->field_005C == 0) {
      local_10c = -this_00->field_0048;
    }
    else {
      local_10c = this_00->field_0044;
    }
    local_10c = local_10c + 0x3d;
    local_cc = this_00->field_0008;
    local_108 = 0x11;
    local_104 = 0xc9;
    local_100 = 0x15;
    local_c8 = 2;
    local_c4 = 0x8166;
    local_8c = 1;
    local_88 = 1;
    /* ST_CALLSITE[00512A98]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              (reinterpret_cast<SystemClassTy *>(this_00->field_000C),4,&this_00->field_019C,nullptr,st::machine_word_boundary_cast<undefined4>(local_424),0);
    iVar4 = this_00->field_019C;
    if ((iVar4 != 0) && (param_1 != 0)) {
      this_00->field_0028 = 0x20;
      *(undefined4 *)&this_00->field_0x2c = 1;
      st::fn_006E6080(this_00,2,iVar4,reinterpret_cast<undefined4 *>(&this_00->field_0x18));
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x1df,0,iVar2,st::mutable_c_string("%s"),
                             "HelpPanelTy::CreateSlider");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x1df);
  return;
}

// 00512BE0 HelpPanelTy::sub_00512BE0
#line 4 "decomp/ST.exe/functions/00512BE0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\helppan.cpp
   Diagnostic line evidence: 544 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_004EEFB0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=22; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=12; single_call_corroborated_by_receiver_family

   [STMethodOwnerApplier] Structural method owner recovered as HelpPanelTy.
   Evidence: this_call_owners=[HelpPanelTy]; agreed_this_calls=1; incoming_this_accesses=22;
   incoming_edx_uses=0; incoming_stack_parameter_uses=54; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
st::fn_00512BE0(HelpPanelTy *this,RecoveredRecord_00512BE0_263FD6FB *param_1)

{
  ccFntTy *pcVar1;
  HelpPanelTy *this_00;
  int iVar3;
  int iVar4;
  int *piVar6;
  int *piVar7;
  int local_8c4 [4];
  uint local_8b4;
  int local_8b0;
  uint local_8ac;
  uint local_8a8;
  int local_8a4;
  int local_8a0;
  uint local_88c;
  uint local_888;
  uint local_884;
  uint local_814;
  uint local_810;
  uint local_80c;
  int local_808 [4];
  uint local_7f8;
  uint local_7f4;
  uint local_7a8;
  uint local_7a4;
  uint local_7a0;
  uint local_700;
  uint local_6fc;
  uint local_6f8;
  uint local_6f4;
  ushort *local_6e4;
  int local_6e0;
  uint local_68c;
  int local_688 [26];
  uint local_620;
  ushort *local_564;
  int local_560;
  uint local_50c;
  uint local_508;
  uint local_500;
  int local_4fc;
  int local_4f8;
  uint local_4f4;
  uint local_4f0;
  uint local_4ec;
  uint local_4b8;
  uint local_4b4;
  uint local_4b0;
  uint local_478;
  uint local_474;
  uint local_5c;
  uint local_58;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  piVar6 = local_8c4;
  local_8 = this;
  for (iVar4 = 0x21e; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;

  local_8c4[0] = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (local_8c4[0] == 0) {
    local_8c4[1] = 2;
    local_8a4 = local_8->field_003C + 0x21;
    if (local_8->field_005C == 0) {
      local_8a0 = -local_8->field_0048;
    }
    else {
      local_8a0 = local_8->field_0044;
    }
    pcVar1 = local_8->field_01E4;
    local_8a0 = local_8a0 + 0x16;
    local_8c4[2] = 1;
    local_8c4[3] = param_1->field_0008;
    local_8b4 = 0x19c;
    if (pcVar1->field_00A0 != 0) {
      st::fn_00710790(reinterpret_cast<RecoveredRecordView_00710790_7768A573 *>(pcVar1));
    }
    local_8b0 = *(int *)&pcVar1->field_0x8a;
    local_8a8 = (undefined4)(0x118 / (longlong)local_8b0);
    local_808[2] = this_00->field_003C + 0x1c3;
    local_8ac = 1;
    local_888 = 2;
    local_884 = 0x6332;
    local_814 = 4;
    local_810 = 0;
    local_80c = 2;
    local_808[0] = 0;
    local_808[1] = 2;
    local_88c = this_00->field_0008;
    if (this_00->field_005C == 0) {
      local_808[3] = -this_00->field_0048;
    }
    else {
      local_808[3] = this_00->field_0044;
    }
    local_808[3] = local_808[3] + 0x109;
    local_7f8 = 0x11;
    local_7f4 = 0x24;
    local_6f8 = 500;
    local_6f4 = 0x32;
    local_7a4 = 2;
    local_7a0 = 0x8165;
    local_7a8 = local_88c;
    local_6e4 = st::fn_0070AA70(g_cMf32_00806790,st::mutable_c_string("BUT_MSLDN"),0,1);

    local_6e0 = st::fn_0070A6F0(g_cMf32_00806790,0x12,st::mutable_c_string("BUT_MSLDN"),1);
    iVar4 = this_00->field_005C;
    local_700 = 1;
    local_6fc = 1;
    local_68c = 2;
    piVar6 = local_808;
    piVar7 = local_688;
    memmove(piVar7, piVar6, 0x17c); /* compiler REP MOVS byte copy */
    if (iVar4 == 0) {
      local_688[3] = -this_00->field_0048;
    }
    else {
      local_688[3] = this_00->field_0044;
    }
    local_688[3] = local_688[3] + 0x16;
    local_620 = 0x8164;
    local_564 = st::fn_0070AA70(g_cMf32_00806790,st::mutable_c_string("BUT_MSLUP"),0,1);

    local_560 = st::fn_0070A6F0(g_cMf32_00806790,0x12,st::mutable_c_string("BUT_MSLUP"),1);
    local_4fc = this_00->field_003C + 0x1c3;
    local_50c = 3;
    local_508 = 1;
    local_500 = 0;
    if (this_00->field_005C == 0) {
      local_4f8 = -this_00->field_0048;
    }
    else {
      local_4f8 = this_00->field_0044;
    }
    local_4b8 = this_00->field_0008;
    local_4f8 = local_4f8 + 0x3d;
    local_4f4 = 0x11;
    local_4f0 = 0xc9;
    local_4ec = 0x15;
    local_4b4 = 2;
    local_4b0 = 0x8166;
    local_478 = 1;
    local_474 = 1;
    local_58 = 1;
    local_5c = 1;
    /* ST_CALLSITE[00512ECD]: CALL dword ptr [EAX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              (reinterpret_cast<SystemClassTy *>(this_00->field_000C),8,&this_00->field_019C,nullptr,st::machine_word_boundary_cast<undefined4>(local_8c4),0);
    iVar4 = this_00->field_019C;
    if (iVar4 != 0) {
      this_00->field_0028 = 0x20;
      *(undefined4 *)&this_00->field_0x2c = 1;
      st::fn_006E6080(this_00,2,iVar4,reinterpret_cast<undefined4 *>(&this_00->field_0x18));
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x220,0,local_8c4[0],
                             st::mutable_c_string("%s"),"HelpPanelTy ::CreateVText");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(local_8c4[0],0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x220);
  return;
}

// 00513030 HelpPanelTy::ChangeTree
#line 4 "decomp/ST.exe/functions/00513030/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::ChangeTree */

void __thiscall st::fn_00513030(HelpPanelTy *this,int *param_1,int param_2)

{
  byte *puVar1;
  DArrayTy *array;
  AnonPointee_HelpPanelTy_01B3 *pAVar2;
  bool bVar4;
  HelpPanelTy *this_00;
  byte bVar5;
  int iVar7;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  int iVar10;
  byte *pbVar9;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar15;
  int local_d0 [20];
  InternalExceptionFrame local_80;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  byte local_2c;
  char local_2b;
  byte local_2a;
  byte local_29;
  uint local_28;
  uint local_24;
  HelpPanelTy *local_20;
  uint local_1c;
  uint local_18;
  int *local_14;
  uint local_10;
  uint local_c;
  byte local_6;
  char local_5;

  local_18 = param_2 + 1;
  local_14 = param_1;
  local_1c = 0;
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_20 = this;

  iVar7 = st::fn_0072D7F0(local_80.jumpBuffer,0);
  piVar13 = local_14;
  this_00 = local_20;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_80.previous;

    iVar10 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x26d,0,iVar7,
                                st::mutable_c_string("%s"),"HelpPanelTy::ChangeTree");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar7,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x26d);
    return;
  }
  if (STField<char>(local_14,0x12) == '\0') {
    uVar7 = 0;
    memset(local_d0, 0, 0x50); /* compiler bulk-zero initialization */
    local_10 = local_10 & 0xffffff00;
    local_5 = '\0';
    if (*(uint *)PTR_sizeHelp_0085c118 != 0) {
      pbVar9 = this_00->field_01C7;
      do {
        if ((*(int *)pbVar9 == *piVar13) && (*(int *)(pbVar9 + 4) == piVar13[1])) {
          local_1c = uVar7;
          break;
        }
        uVar7 = uVar7 + 1;
        pbVar9 = pbVar9 + 0x11;
      } while (uVar7 < *(uint *)PTR_sizeHelp_0085c118);
    }
    iVar8 = piVar13[1];
    local_24 = local_1c & 0xffff;
    iVar11 = local_24 - 1;
    local_c = local_24;
    if (0 < iVar11) {
      iVar15 = iVar11 * 0x11;
      do {
        if (iVar8 == 0) break;
        pbVar9 = this_00->field_01C7;
        if (*(int *)(pbVar9 + iVar15) == iVar8) {
          local_d0[local_10 & 0xff] = iVar8;
          iVar8 = *(int *)(pbVar9 + iVar15 + 4);
          local_10 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_10)), (uint8_t)((byte)local_10 + '\x01'));
          local_24 = local_c;
        }
        iVar11 = iVar11 + -1;
        iVar15 = iVar15 + -0x11;
      } while (0 < iVar11);
    }
    local_24 = local_24 + 1;
    uVar7 = local_18;
    if (local_24 < *(uint *)PTR_sizeHelp_0085c118) {
      uVar12 = local_24 * 0x11;
      local_c = uVar12;
      do {
        iVar11 = *(int *)(this_00->field_01C7 + uVar12 + 4);
        pbVar9 = this_00->field_01C7 + uVar12;
        local_c = uVar12;
        if (iVar11 == *local_14) {
          local_3c = *(undefined4 *)pbVar9;
          local_38 = *(undefined4 *)(pbVar9 + 4);
          local_34 = *(undefined4 *)(pbVar9 + 8);
          local_30 = *(undefined4 *)(pbVar9 + 0xc);
          local_2c = pbVar9[0x10];
          local_2b = STField<char>(local_14,0x11) + '\x01';
          local_2a = 0;
          local_29 = 0;

          st::fn_006B11D0(reinterpret_cast<uint *>(this_00->field_01B3),uVar7 & 0xffff,&local_3c);
          uVar7 = uVar7 + 1;
          local_5 = '\x01';
          local_18 = uVar7;
        }
        else {
          if (iVar11 == 0) break;
          bVar4 = false;
          bVar5 = 0;
          local_6 = 0;
          local_28 = local_28 & 0xffffff00;
          if ((byte)local_10 != 0) {
            do {
              if (local_d0[local_28 & 0xff] == iVar11) {
                bVar4 = true;
                goto LAB_00513233;
              }
              bVar5 = bVar5 + 1;
              local_28 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_28)), (uint8_t)(bVar5));
            } while (bVar5 < (byte)local_10);
            bVar4 = false;
          }
LAB_00513233:
          if (bVar4) break;
        }
        local_24 = local_24 + 1;
        uVar12 = uVar12 + 0x11;
        local_c = uVar12;
      } while (local_24 < *(uint *)PTR_sizeHelp_0085c118);
    }
    piVar13 = local_14;
    if (local_5 != '\0') {
      pAVar2 = this_00->field_01B3;
      if ((uVar7 & 0xffff) - 1 < *(uint *)&pAVar2->field_0xc) {
        iVar11 = ((uVar7 & 0xffff) - 1) * pAVar2->field_0008 + pAVar2->field_001C;
      }
      else {
        iVar11 = 0;
      }
      if (iVar11 != 0) {
        STField<undefined1>(iVar11,0x13) = 1;
      }
    }
  }
  else {
    array = reinterpret_cast<DArrayTy *>(local_20->field_01B3);
    uVar7 = param_2 + 1;
    uVar12 = array->count;
    while (((uVar7 < uVar12 &&
            (pvVar6 = DArrayAt<void>(array, uVar7), pvVar6 != nullptr
            )) && (STField<byte>(piVar13,0x11) < STField<byte>(pvVar6,0x11)))) {

      st::fn_006B0C70(array,uVar7);
      array = reinterpret_cast<DArrayTy *>(this_00->field_01B3);
      uVar12 = array->count;
    }
  }
  STField<bool>(piVar13,0x12) = STField<char>(piVar13,0x12) == '\0';
  if ((this_00->field_019C != 0) && (this_00->field_01A1 == 0)) {

    st::fn_006B55F0
              (reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0068),0,0x21,0x16,
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_01DC),0,0x21,0x16,0x19c,0x118);
    puVar1 = &this_00->field_0x18;
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    uVar7 = this_00->field_01B7;
    this_00->field_0028 = 0x28;
    *(undefined2 *)&this_00->field_0x2c = *(undefined2 *)&this_00->field_01B3->field_0xc;
    this_00->field_0030 = 1;
    st::fn_006E6080(this_00,2,this_00->field_019C,reinterpret_cast<undefined4 *>(puVar1));
    this_00->field_0030 = 1;
    this_00->field_0032 = 1;
    this_00->field_0028 = 0x22;
    *(short *)&this_00->field_0x2c = (short)uVar7;
    st::fn_006E6080(this_00,2,this_00->field_019C,reinterpret_cast<undefined4 *>(puVar1));
    this_00->field_0028 = 5;
    st::fn_006E6080(this_00,2,this_00->field_019C,reinterpret_cast<undefined4 *>(puVar1));
  }
  g_currentExceptionFrame = local_80.previous;
  return;
}

// 005134B0 HelpPanelTy::PutToSHlp
#line 4 "decomp/ST.exe/functions/005134B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::PutToSHlp
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall PutToSHlp(HelpPanelTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=00513566 RET | 005135AB RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_005134B0(HelpPanelTy *this)

{
  dword dVar1;
  HelpPanelTy *pHVar3;
  int iVar4;
  int iVar5;
  uint index;
  InternalExceptionFrame local_58;
  HelpPanelTy_field_01A1State local_14;
  void *local_13;
  uint local_f;
  HelpPanelTy *local_8;

  local_14 = this->field_01A1;
  local_13 = this->field_01A3;
  local_f = this->field_01A7;
  if (this->field_01CB != nullptr) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_8 = this;
    iVar4 = st::fn_0072D7F0(local_58.jumpBuffer,0);
    pHVar3 = local_8;
    if (iVar4 == 0) {
      iVar4 = local_8->field_01CF;
      while (-1 < iVar4) {
        dVar1 = pHVar3->field_01CB->count;
        if ((int)(dVar1 - 1) <= iVar4) break;
        st::fn_006B0C70(reinterpret_cast<DArrayTy *>(pHVar3->field_01CB),dVar1 - 1);
        iVar4 = pHVar3->field_01CF;
      }
      index = pHVar3->field_01CF + 1;
      pHVar3->field_01CF = index;
      st::fn_006AE140(reinterpret_cast<DArrayTy *>(pHVar3->field_01CB),index,&local_14);
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x27c,0,iVar4,st::mutable_c_string("%s")
                               ,"HelpPanelTy::PutToSHlp");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x27c);
  }
  return;
}

// 005135F0 HelpPanelTy::HomeBut
#line 4 "decomp/ST.exe/functions/005135F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::HomeBut

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005135F0(HelpPanelTy *this)

{
  HelpPanelTy_field_01A1State HVar1;
  HelpPanelTy *this_00;
  int iVar3;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_64;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  byte local_10;
  byte local_f;
  byte local_e;
  byte local_d;
  HelpPanelTy *local_c;
  uint local_8;

  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_c = this;

  iVar3 = st::fn_0072D7F0(local_64.jumpBuffer,0);
  this_00 = local_c;
  if (iVar3 == 0) {
    HVar1 = local_c->field_01A1;
    if (((HVar1 == 0) || (HVar1 == CASE_6)) || (HVar1 == CASE_A)) {
      local_c->field_01A2 = HVar1;
      local_c->field_01AB = st::machine_word_boundary_cast<undefined4>(local_c->field_01A3);
    }
    else {
      local_c->field_01A2 = 0;
      local_c->field_01AB = 0;
    }
    STPiece<0,2>(iVar5) = local_c->field_0178;
    STPiece<2,2>(iVar5) = local_c->field_017A;
    local_c->field_01A1 = 0;
    local_c->field_01A3 = nullptr;
    if (iVar5 != 0) {
      local_c->field_0028 = 0x4202;
      *(undefined2 *)&local_c->field_0x2c = 0;
      *(undefined2 *)&local_c->field_0x2e = 2;
      local_c->field_0030 = (undefined2)iVar5;
      local_c->field_0032 = STPiece<2,2>(iVar5);
      if (g_cursorClass_00802A30 != nullptr) {
        /* ST_CALLSITE[00513695]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
        g_cursorClass_00802A30->GetMessage((STMessage *)&local_c->field_0x18);
      }
    }
    this_00->field_01CF = 0xffffffff;
    this_00->field_01CB->count = 0;

    st::fn_006B55F0
              (reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0068),0,0x21,0x16,
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_01DC),0,0x21,0x16,0x1b8,0x118);
    local_8 = 0;
    *(undefined4 *)&this_00->field_01B3->field_0xc = 0;
    this_00->field_01B7 = 0;
    if (*(int *)PTR_sizeHelp_0085c118 != 0) {
      iVar5 = 0;
      do {
        pbVar3 = this_00->field_01C7 + iVar5;
        if (*(int *)(pbVar3 + 4) == 0) {
          local_20 = *(undefined4 *)pbVar3;
          local_1c = *(undefined4 *)(pbVar3 + 4);
          local_18 = *(undefined4 *)(pbVar3 + 8);
          local_14 = *(undefined4 *)(pbVar3 + 0xc);
          local_10 = pbVar3[0x10];
          local_f = 0;
          local_e = 0;
          local_d = 0;

          st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01B3),&local_20);
        }
        local_8 = local_8 + 1;
        iVar5 = iVar5 + 0x11;
      } while (local_8 < *(uint *)PTR_sizeHelp_0085c118);
    }
    /* ST_CALLSITE[00513747]: CALL 0x00401acd; direct=00401ACD HelpPanelTy::CreateList */
    st::fn_00401ACD(this_00);
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  g_currentExceptionFrame = local_64.previous;

  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x295,0,iVar3,st::mutable_c_string("%s"),
                             "HelpPanelTy::HomeBut");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x295);
  return;
}

// 00513810 HelpPanelTy::BackBut
#line 4 "decomp/ST.exe/functions/00513810/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::BackBut
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall BackBut(HelpPanelTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=005138AF RET | 005138D5 RET | 0051397C RET | 005139C2 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_00513810(HelpPanelTy *this)

{
  HelpPanelTy_field_01A1State HVar1;
  HelpPanelTy *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  void *local_8;

  if (this->field_01A1 != this->field_01A2) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;

    iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
    this_00 = local_c;
    if (iVar3 == 0) {
      STPiece<0,2>(iVar5) = local_c->field_0178;
      STPiece<2,2>(iVar5) = local_c->field_017A;
      if (iVar5 != 0) {
        local_c->field_0028 = 0x4202;
        *(undefined2 *)&local_c->field_0x2c = 0;
        *(undefined2 *)&local_c->field_0x2e = 2;
        local_c->field_0030 = (undefined2)iVar5;
        local_c->field_0032 = STPiece<2,2>(iVar5);
        if (g_cursorClass_00802A30 != nullptr) {
          /* ST_CALLSITE[0051388D]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
          g_cursorClass_00802A30->GetMessage((STMessage *)&local_c->field_0x18);
        }
      }
      HVar1 = this_00->field_01A2;
      if (HVar1 != 0) {
        if (HVar1 == CASE_6) {
          /* ST_CALLSITE[005138BB]: CALL 0x00405e61; direct=00405E61 HelpPanelTy::TTreeProc */
          st::fn_00405E61(this_00,this_00->field_01AB,'\0');
          /* ST_CALLSITE[005138C2]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
          st::fn_00405100(this_00);
          g_currentExceptionFrame = local_50.previous;
          return;
        }
        if (HVar1 != CASE_A) {
          g_currentExceptionFrame = local_50.previous;
          return;
        }
      }
      this_00->field_01A1 = HVar1;
      this_00->field_01A3 = local_8;

      st::fn_006B55F0
                (reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0068),0,0x21,0x16,
                 reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_01DC),0,0x21,0x16,0x1b8,
                 0x118);
      /* ST_CALLSITE[0051390D]: CALL 0x00401acd; direct=00401ACD HelpPanelTy::CreateList */
      st::fn_00401ACD(this_00);
      if (this_00->field_01A2 == '\0') {
        local_8 = (void *)this_00->field_01B7;
      }
      else {
        local_8 = (void *)this_00->field_01BF;
      }
      if (this_00->field_019C != 0) {
        memset(&this_00->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
        this_00->field_0028 = 0x22;
        *(short *)&this_00->field_0x2c = (short)local_8;
        this_00->field_0030 = 1;
        this_00->field_0032 = 1;
        st::fn_006E6080(this_00,2,this_00->field_019C,reinterpret_cast<undefined4 *>(&this_00->field_0x18));
      }
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;

    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x2b3,0,iVar3,st::mutable_c_string("%s")
                               ,"HelpPanelTy::BackBut");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x2b3);
  }
  return;
}

// 00513A40 HelpPanelTy::IndexBut
#line 4 "decomp/ST.exe/functions/00513A40/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::IndexBut

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_00513A40(HelpPanelTy *this)

{
  HelpPanelTy_field_01A1State HVar1;
  int iVar2;
  HelpPanelTy *this_00;
  int iVar3_mg0;
  int iVar3_mg0_2;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar3_mg0 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3_mg0 == 0) {
    HVar1 = local_8->field_01A1;
    if (((HVar1 == 0) || (HVar1 == CASE_6)) || (HVar1 == CASE_A)) {
      local_8->field_01A2 = HVar1;
      local_8->field_01AB = st::machine_word_boundary_cast<undefined4>(local_8->field_01A3);
    }
    else {
      local_8->field_01A2 = 0;
      local_8->field_01AB = 0;
    }
    local_8->field_01A1 = CASE_A;
    local_8->field_01A3 = nullptr;

    st::fn_006B55F0
              (reinterpret_cast<RecoveredSourceFamily_dibcopy *>(local_8->field_0068),0,0x21,0x16,
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(local_8->field_01DC),0,0x21,0x16,0x1b8,0x118);
    STPiece<0,2>(iVar2) = this_00->field_0178;
    STPiece<2,2>(iVar2) = this_00->field_017A;
    if (iVar2 != 0) {
      this_00->field_0028 = 0x4202;
      *(undefined2 *)&this_00->field_0x2c = 0;
      *(undefined2 *)&this_00->field_0x2e = 2;
      this_00->field_0030 = (undefined2)iVar2;
      this_00->field_0032 = STPiece<2,2>(iVar2);
      if (g_cursorClass_00802A30 != nullptr) {
        /* ST_CALLSITE[00513B09]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
        g_cursorClass_00802A30->GetMessage((STMessage *)&this_00->field_0x18);
      }
    }
    /* ST_CALLSITE[00513B0D]: CALL 0x00401acd; direct=00401ACD HelpPanelTy::CreateList */
    st::fn_00401ACD(this_00);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar3_mg0_2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x2c0,0,iVar3_mg0,
                                   st::mutable_c_string("%s"),"HelpPanelTy::IndexBut");
  if (iVar3_mg0_2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3_mg0,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x2c0);
  return;
}

// 00513BC0 HelpPanelTy::PrevBut
#line 4 "decomp/ST.exe/functions/00513BC0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::PrevBut */

void __thiscall st::fn_00513BC0(HelpPanelTy *this)

{
  uint uVar1;
  AnonPointee_HelpPanelTy_01B3 *pAVar2;
  void *pvVar3;
  HelpPanelTy *this_00;
  int iVar4;
  int *piVar5;
  int iVar5;
  int iVar6;
  uint uVar7;
  InternalExceptionFrame local_50;
  uint local_c;
  HelpPanelTy *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x2e9,0,iVar4,st::mutable_c_string("%s")
                               ,"HelpPanelTy::PrevBut");
    if (iVar5 == 0) {
      st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x2e9);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  uVar1 = local_8->field_01B7;
  pAVar2 = local_8->field_01B3;
  if (uVar1 == 0) {
    iVar6 = *(int *)&pAVar2->field_0xc;
    if (iVar6 == 0) {
      piVar5 = nullptr;
    }
    else {
      piVar5 = (int *)pAVar2->field_001C;
    }
    if ((char)piVar5[2] != '\0') {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (STField<char>(piVar5,0x12) != '\0') {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = uVar1 - 1;
    if (uVar7 < *(uint *)&pAVar2->field_0xc) {
      piVar5 = (int *)(pAVar2->field_0008 * (uVar1 - 1) + pAVar2->field_001C);
    }
    else {
      piVar5 = nullptr;
    }
    if (piVar5 == nullptr) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    local_c = uVar7;
    if ((char)piVar5[2] != '\0') {
      local_8->field_01B7 = uVar7;
      local_8->field_01A1 = 0;
      local_8->field_01A7 = 0;
      local_8->field_01A3 = nullptr;
      uVar1 = STField<uint>(piVar5,0xd);
      pvVar3 = STField<void *>(piVar5,9);
      switch((char)piVar5[2]) {
      case '\x01':
        /* ST_CALLSITE[00513CD2]: CALL 0x00404e85; direct=00404E85 HelpPanelTy::RCProc */
        st::fn_00404E85(local_8,(int)pvVar3,uVar1,'\0');
        /* ST_CALLSITE[00513CD9]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x02':
        /* ST_CALLSITE[00513D58]: CALL 0x00403747; direct=00403747 HelpPanelTy::ObjProc */
        st::fn_00403747(local_8,(int)pvVar3,uVar1,'\0');
        /* ST_CALLSITE[00513D5F]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x03':
        /* ST_CALLSITE[00513D36]: CALL 0x00403878; direct=00403878 HelpPanelTy::SubProc */
        st::fn_00403878(local_8,(int)pvVar3,'\0');
        /* ST_CALLSITE[00513D3D]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x04':
        /* ST_CALLSITE[00513D7A]: CALL 0x004057e0; direct=004057E0 HelpPanelTy::ArmProc */
        st::fn_004057E0(local_8,(int)pvVar3,uVar1,'\0');
        /* ST_CALLSITE[00513D81]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x05':
        /* ST_CALLSITE[00513D15]: CALL 0x00402833; direct=00402833 HelpPanelTy::TechProc */
        st::fn_00402833(local_8,(uint)pvVar3,(byte)uVar1,'\0');
        /* ST_CALLSITE[00513D1C]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x06':
        /* ST_CALLSITE[00513CF3]: CALL 0x00405e61; direct=00405E61 HelpPanelTy::TTreeProc */
        st::fn_00405E61(local_8,(uint)pvVar3,'\0');
        /* ST_CALLSITE[00513CFA]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\a':
        /* ST_CALLSITE[00513CB0]: CALL 0x004011fe; direct=004011FE HelpPanelTy::MObjProc */
        st::fn_004011FE(local_8);
        /* ST_CALLSITE[00513CB7]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\b':
        /* ST_CALLSITE[00513DDF]: CALL 0x004020b8; direct=004020B8 HelpPanelTy::TipProc */
        st::fn_004020B8(local_8,pvVar3,uVar1,'\0');
        break;
      case '\n':
        /* ST_CALLSITE[00513C92]: CALL 0x00405803; direct=00405803 HelpPanelTy::IndexBut */
        st::fn_00405803(local_8);
        /* ST_CALLSITE[00513C99]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\v':
        /* ST_CALLSITE[00513D9C]: CALL 0x00402cac; direct=00402CAC HelpPanelTy::SpecProc */
        st::fn_00402CAC(local_8,(int)pvVar3,uVar1,'\0');
        /* ST_CALLSITE[00513DA3]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\f':
        /* ST_CALLSITE[00513DBD]: CALL 0x00403bc0; direct=00403BC0 HelpPanelTy::NatProc */
        st::fn_00403BC0(local_8,(int)pvVar3,'\0');
        /* ST_CALLSITE[00513DC4]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
      /* ST_CALLSITE[00513DE6]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
      st::fn_00405100(this_00);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    iVar6 = *(uint *)&pAVar2->field_0xc - uVar1;
    if (STField<char>(piVar5,0x12) != '\0') {
      local_8->field_01B7 = uVar7;
      goto LAB_00513e3e;
    }
  }
  /* ST_CALLSITE[00513E28]: CALL 0x00405362; direct=00405362 HelpPanelTy::ChangeTree */
  st::fn_00405362(local_8,piVar5,uVar7);
  this_00->field_01B7 = *(int *)&this_00->field_01B3->field_0xc - iVar6;
LAB_00513e3e:
  /* ST_CALLSITE[00513E40]: CALL 0x00403b43; direct=00403B43 HelpPanelTy::PrevBut */
  st::fn_00403B43(this_00);
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 00513FA0 HelpPanelTy::NextBut
#line 4 "decomp/ST.exe/functions/00513FA0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::NextBut

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_00513FA0(HelpPanelTy *this)

{
  AnonPointee_HelpPanelTy_01B3 *pAVar1;
  uint uVar2;
  void *pvVar3;
  HelpPanelTy *this_00;
  int errorCode;
  int *piVar5;
  int iVar6;
  uint uVar7;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x307,0,errorCode,
                               st::mutable_c_string("%s"),"HelpPanelTy::NextBut");
    if (iVar6 == 0) {
      st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x307);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  pAVar1 = local_8->field_01B3;
  uVar7 = local_8->field_01B7;
  uVar2 = *(uint *)&pAVar1->field_0xc;
  if (uVar7 < uVar2 - 1) {
    uVar7 = uVar7 + 1;
    if (uVar7 < uVar2) {
      piVar5 = (int *)(pAVar1->field_0008 * uVar7 + pAVar1->field_001C);
    }
    else {
      piVar5 = nullptr;
    }
    if (piVar5 == nullptr) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    local_8->field_01B7 = uVar7;
    if ((char)piVar5[2] != '\0') {
      local_8->field_01A1 = 0;
      local_8->field_01A7 = 0;
      local_8->field_01A3 = nullptr;
      uVar7 = STField<uint>(piVar5,0xd);
      pvVar3 = STField<void *>(piVar5,9);
      switch((char)piVar5[2]) {
      case '\x01':
        /* ST_CALLSITE[005140A0]: CALL 0x00404e85; direct=00404E85 HelpPanelTy::RCProc */
        st::fn_00404E85(local_8,(int)pvVar3,uVar7,'\0');
        /* ST_CALLSITE[005140A7]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\x02':
        /* ST_CALLSITE[0051411E]: CALL 0x00403747; direct=00403747 HelpPanelTy::ObjProc */
        st::fn_00403747(local_8,(int)pvVar3,uVar7,'\0');
        /* ST_CALLSITE[00514125]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\x03':
        /* ST_CALLSITE[005140FE]: CALL 0x00403878; direct=00403878 HelpPanelTy::SubProc */
        st::fn_00403878(local_8,(int)pvVar3,'\0');
        /* ST_CALLSITE[00514105]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\x04':
        /* ST_CALLSITE[0051413E]: CALL 0x004057e0; direct=004057E0 HelpPanelTy::ArmProc */
        st::fn_004057E0(local_8,(int)pvVar3,uVar7,'\0');
        /* ST_CALLSITE[00514145]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\x05':
        /* ST_CALLSITE[005140DF]: CALL 0x00402833; direct=00402833 HelpPanelTy::TechProc */
        st::fn_00402833(local_8,(uint)pvVar3,(byte)uVar7,'\0');
        /* ST_CALLSITE[005140E6]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\x06':
        /* ST_CALLSITE[005140BF]: CALL 0x00405e61; direct=00405E61 HelpPanelTy::TTreeProc */
        st::fn_00405E61(local_8,(uint)pvVar3,'\0');
        /* ST_CALLSITE[005140C6]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\a':
        /* ST_CALLSITE[00514080]: CALL 0x004011fe; direct=004011FE HelpPanelTy::MObjProc */
        st::fn_004011FE(local_8);
        /* ST_CALLSITE[00514087]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\b':
        /* ST_CALLSITE[0051419D]: CALL 0x004020b8; direct=004020B8 HelpPanelTy::TipProc */
        st::fn_004020B8(local_8,pvVar3,uVar7,'\0');
        break;
      case '\n':
        /* ST_CALLSITE[00514064]: CALL 0x00405803; direct=00405803 HelpPanelTy::IndexBut */
        st::fn_00405803(local_8);
        /* ST_CALLSITE[0051406B]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\v':
        /* ST_CALLSITE[0051415E]: CALL 0x00402cac; direct=00402CAC HelpPanelTy::SpecProc */
        st::fn_00402CAC(local_8,(int)pvVar3,uVar7,'\0');
        /* ST_CALLSITE[00514165]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\f':
        /* ST_CALLSITE[0051417D]: CALL 0x00403bc0; direct=00403BC0 HelpPanelTy::NatProc */
        st::fn_00403BC0(local_8,(int)pvVar3,'\0');
        /* ST_CALLSITE[00514184]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      /* ST_CALLSITE[005141A4]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
      st::fn_00405100(this_00);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    if (STField<char>(piVar5,0x12) != '\0') goto LAB_005141e1;
  }
  else {
    if (uVar7 < uVar2) {
      piVar5 = (int *)(pAVar1->field_0008 * uVar7 + pAVar1->field_001C);
    }
    else {
      piVar5 = nullptr;
    }
    if ((char)piVar5[2] != '\0') {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    if (STField<char>(piVar5,0x12) != '\0') {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  }
  /* ST_CALLSITE[005141DC]: CALL 0x00405362; direct=00405362 HelpPanelTy::ChangeTree */
  st::fn_00405362(local_8,piVar5,uVar7);
LAB_005141e1:
  /* ST_CALLSITE[005141E3]: CALL 0x00401a1e; direct=00401A1E HelpPanelTy::NextBut */
  st::fn_00401A1E(this_00);
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 00514330 HelpPanelTy::BwdBut
#line 4 "decomp/ST.exe/functions/00514330/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::BwdBut */

void __thiscall st::fn_00514330(HelpPanelTy *this)

{
  HelpPanelTy_field_01CBDArray *pHVar1;
  void *pvVar2;
  int errorCode;
  uint uVar4;
  int iVar5;
  HelpPanelTy_field_01CBElement *element_01cb;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    if (0 < (int)local_8->field_01CF) {
      pHVar1 = local_8->field_01CB;
      uVar4 = local_8->field_01CF - 1;
      local_8->field_01CF = uVar4;
      if (uVar4 < pHVar1->count) {
        element_01cb = DArrayAt<HelpPanelTy_field_01CBElement>(pHVar1, uVar4);
      }
      else {
        element_01cb = nullptr;
      }
      if (element_01cb != nullptr) {
        local_8->field_01A1 = 0;
        local_8->field_01A7 = 0;
        local_8->field_01A3 = nullptr;
        uVar4 = element_01cb->variant_0005;
        pvVar2 = st::pointer_boundary_cast<void *>(element_01cb->variant_0001);
        switch(element_01cb->field_0000) {
        case 0:
          /* ST_CALLSITE[005143D1]: CALL 0x004029c8; direct=004029C8 HelpPanelTy::HomeBut */
          st::fn_004029C8(local_8);
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 1:
          /* ST_CALLSITE[0051440E]: CALL 0x00404e85; direct=00404E85 HelpPanelTy::RCProc */
          st::fn_00404E85(local_8,(int)pvVar2,uVar4,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 2:
          /* ST_CALLSITE[00514468]: CALL 0x00403747; direct=00403747 HelpPanelTy::ObjProc */
          st::fn_00403747(local_8,(int)pvVar2,uVar4,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 3:
          /* ST_CALLSITE[00514451]: CALL 0x00403878; direct=00403878 HelpPanelTy::SubProc */
          st::fn_00403878(local_8,(int)pvVar2,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 4:
          /* ST_CALLSITE[0051447F]: CALL 0x004057e0; direct=004057E0 HelpPanelTy::ArmProc */
          st::fn_004057E0(local_8,(int)pvVar2,uVar4,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 5:
          /* ST_CALLSITE[0051443B]: CALL 0x00402833; direct=00402833 HelpPanelTy::TechProc */
          st::fn_00402833(local_8,(uint)pvVar2,(byte)uVar4,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 6:
          /* ST_CALLSITE[00514424]: CALL 0x00405e61; direct=00405E61 HelpPanelTy::TTreeProc */
          st::fn_00405E61(local_8,(uint)pvVar2,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 7:
          /* ST_CALLSITE[005143F7]: CALL 0x004011fe; direct=004011FE HelpPanelTy::MObjProc */
          st::fn_004011FE(local_8);
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 8:
          /* ST_CALLSITE[005144C3]: CALL 0x004020b8; direct=004020B8 HelpPanelTy::TipProc */
          st::fn_004020B8(local_8,pvVar2,uVar4,'\0');
          break;
        case 10:
          /* ST_CALLSITE[005143E4]: CALL 0x00405803; direct=00405803 HelpPanelTy::IndexBut */
          st::fn_00405803(local_8);
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 0xb:
          /* ST_CALLSITE[00514496]: CALL 0x00402cac; direct=00402CAC HelpPanelTy::SpecProc */
          st::fn_00402CAC(local_8,(int)pvVar2,uVar4,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 0xc:
          /* ST_CALLSITE[005144AC]: CALL 0x00403bc0; direct=00403BC0 HelpPanelTy::NatProc */
          st::fn_00403BC0(local_8,(int)pvVar2,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        }
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x317,0,errorCode,
                             st::mutable_c_string("%s"),"HelpPanelTy::BwdBut");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x317);
  return;
}

// 005145E0 HelpPanelTy::FwdBut
#line 4 "decomp/ST.exe/functions/005145E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::FwdBut */

void __thiscall st::fn_005145E0(HelpPanelTy *this)

{
  HelpPanelTy_field_01CBDArray *pHVar1;
  void *pvVar2;
  int errorCode;
  int iVar4;
  uint uVar5;
  HelpPanelTy_field_01CBElement *element_01cb;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    pHVar1 = local_8->field_01CB;
    if ((int)local_8->field_01CF < (int)(pHVar1->count - 1)) {
      uVar5 = local_8->field_01CF + 1;
      local_8->field_01CF = uVar5;
      if (uVar5 < pHVar1->count) {
        element_01cb = DArrayAt<HelpPanelTy_field_01CBElement>(pHVar1, uVar5);
      }
      else {
        element_01cb = nullptr;
      }
      if (element_01cb != nullptr) {
        local_8->field_01A1 = 0;
        local_8->field_01A7 = 0;
        local_8->field_01A3 = nullptr;
        uVar5 = element_01cb->variant_0005;
        pvVar2 = st::pointer_boundary_cast<void *>(element_01cb->variant_0001);
        switch(element_01cb->field_0000) {
        case 0:
          /* ST_CALLSITE[00514687]: CALL 0x004029c8; direct=004029C8 HelpPanelTy::HomeBut */
          st::fn_004029C8(local_8);
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 1:
          /* ST_CALLSITE[005146C4]: CALL 0x00404e85; direct=00404E85 HelpPanelTy::RCProc */
          st::fn_00404E85(local_8,(int)pvVar2,uVar5,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 2:
          /* ST_CALLSITE[0051471E]: CALL 0x00403747; direct=00403747 HelpPanelTy::ObjProc */
          st::fn_00403747(local_8,(int)pvVar2,uVar5,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 3:
          /* ST_CALLSITE[00514707]: CALL 0x00403878; direct=00403878 HelpPanelTy::SubProc */
          st::fn_00403878(local_8,(int)pvVar2,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 4:
          /* ST_CALLSITE[00514735]: CALL 0x004057e0; direct=004057E0 HelpPanelTy::ArmProc */
          st::fn_004057E0(local_8,(int)pvVar2,uVar5,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 5:
          /* ST_CALLSITE[005146F1]: CALL 0x00402833; direct=00402833 HelpPanelTy::TechProc */
          st::fn_00402833(local_8,(uint)pvVar2,(byte)uVar5,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 6:
          /* ST_CALLSITE[005146DA]: CALL 0x00405e61; direct=00405E61 HelpPanelTy::TTreeProc */
          st::fn_00405E61(local_8,(uint)pvVar2,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 7:
          /* ST_CALLSITE[005146AD]: CALL 0x004011fe; direct=004011FE HelpPanelTy::MObjProc */
          st::fn_004011FE(local_8);
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 8:
          /* ST_CALLSITE[00514779]: CALL 0x004020b8; direct=004020B8 HelpPanelTy::TipProc */
          st::fn_004020B8(local_8,pvVar2,uVar5,'\0');
          break;
        case 10:
          /* ST_CALLSITE[0051469A]: CALL 0x00405803; direct=00405803 HelpPanelTy::IndexBut */
          st::fn_00405803(local_8);
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 0xb:
          /* ST_CALLSITE[0051474C]: CALL 0x00402cac; direct=00402CAC HelpPanelTy::SpecProc */
          st::fn_00402CAC(local_8,(int)pvVar2,uVar5,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 0xc:
          /* ST_CALLSITE[00514762]: CALL 0x00403bc0; direct=00403BC0 HelpPanelTy::NatProc */
          st::fn_00403BC0(local_8,(int)pvVar2,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        }
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x327,0,errorCode,
                             st::mutable_c_string("%s"),"HelpPanelTy::FwdBut");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x327);
  return;
}

// 005149B0 HelpPanelTy::LinkAct
#line 4 "decomp/ST.exe/functions/005149B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::LinkAct

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005149B0(HelpPanelTy *this,int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  AnonPointee_HelpPanelTy_01B3 *pAVar3;
  int iVar6;
  HelpPanelTy *pHVar7;
  int iVar5;
  int *piVar8;
  uint uVar9;
  int iVar8;
  uint uVar10;
  HelpPanelTy *pHVar11;
  InternalExceptionFrame local_54;
  byte *local_10;
  uint local_c;
  HelpPanelTy *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar5 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x350,0,iVar5,st::mutable_c_string("%s")
                               ,"HelpPanelTy::LinkAct");
    if (iVar8 == 0) {
      st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x350);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_c = *(uint *)PTR_sizeHelp_0085c118;
  if (local_c != 0) {
    uVar9 = 0;
    pHVar11 = local_8;
    do {
      pHVar7 = local_8;
      pbVar2 = pHVar11->field_01C7;
      iVar6 = uVar9 * 0x11;
      bVar1 = pbVar2[iVar6 + 8];
      switch(bVar1) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      case 1:
      case 2:
      case 3:
      case 4:
      case 0xb:
      case 0xc:
        if ((*(int *)(pbVar2 + iVar6 + 9) != param_1) ||
           (((bVar1 != 3 && (bVar1 != 0xc)) && (*(int *)(pbVar2 + iVar6 + 0xd) != param_2))))
        goto switchD_00514a29_caseD_5;
        /* ST_CALLSITE[00514A58]: CALL 0x00401a37; direct=00401A37 HelpPanelTy::sub_005148A0 */
        st::fn_00401A37(local_8,uVar9);
        pAVar3 = pHVar7->field_01B3;
        uVar10 = 0;
        uVar9 = *(uint *)&pAVar3->field_0xc;
        if (uVar9 == 0) {
LAB_00514ab9:
          uVar9 = *(uint *)PTR_sizeHelp_0085c118;
          pHVar11 = pHVar7;
          local_c = uVar9;
        }
        else {
          local_10 = pHVar7->field_01C7 + iVar6;
          if (uVar9 == 0) {
            piVar8 = nullptr;
            goto LAB_00514a8f;
          }
          do {
            piVar8 = (int *)(pAVar3->field_0008 * uVar10 + pAVar3->field_001C);
LAB_00514a8f:
            if ((*piVar8 == *(int *)local_10) && (piVar8[1] == *(int *)(local_10 + 4))) {
              pHVar7->field_01B7 = uVar10;
              goto LAB_00514ab9;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar9);
          uVar9 = *(uint *)PTR_sizeHelp_0085c118;
          pHVar11 = pHVar7;
          local_c = uVar9;
        }
        break;
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
switchD_00514a29_caseD_5:
        pHVar11 = pHVar7;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_c);
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

// 00514F10 HelpPanelTy::PrepMissObj
#line 4 "decomp/ST.exe/functions/00514F10/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::PrepMissObj */

void __thiscall st::fn_00514F10(HelpPanelTy *this)

{
  byte *puVar1;
  HelpPanelTy *this_00;
  int iVar3;
  DArrayTy *pDVar4;
  char *pcVar5;
  uint *puVar6;
  int iVar7;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;

    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x39b,0,iVar3,st::mutable_c_string("%s")
                               ,"HelpPanelTy::PrepMissObj");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x39b);
    return;
  }
  if ((DArrayTy *)local_8->field_01D3 != nullptr) {
    st::fn_006B5570(reinterpret_cast<DArrayTy *>(local_8->field_01D3));
  }
  /* ST_CALLSITE[00514F5D]: CALL 0x006b54f0; direct=006B54F0 Library::DKW::TBL::SArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
  pDVar4 = st::fn_006B54F0(nullptr,10,10);
  this_00->field_01D3 = &pDVar4->flags;
  iVar3 = 0;
  if (0 < (int)g_dArray_0080C4CB->elementSize) {
    if ((int)g_dArray_0080C4CB->elementSize < 1) {
      pcVar5 = nullptr;
      goto LAB_00514f85;
    }
    do {
      pcVar5 = *(char **)(g_dArray_0080C4CB->growCapacity + iVar3 * 4);
LAB_00514f85:
      st::fn_004015A0(reinterpret_cast<DArrayTy *>(this_00->field_01D3),pcVar5,st::mutable_c_string("@- %s@ "));
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)g_dArray_0080C4CB->elementSize);
  }
  puVar6 = st::fn_007126E0
                     (this_00->field_01E4,reinterpret_cast<DArrayTy *>(this_00->field_01D3),st::mutable_c_string(" ,.;:!?/\\()[]{}"),
                      reinterpret_cast<uint *>(&DAT_007c21ec),0x19c,0,0xffffffff,nullptr,1);
  if ((DArrayTy *)this_00->field_01D3 != nullptr) {
    st::fn_006B5570(reinterpret_cast<DArrayTy *>(this_00->field_01D3));
  }
  this_00->field_01D3 = puVar6;
  if (puVar6 == nullptr) {
    /* ST_CALLSITE[00514FF2]: CALL 0x006b54f0; direct=006B54F0 Library::DKW::TBL::SArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
    pDVar4 = st::fn_006B54F0(nullptr,10,10);
    this_00->field_01D3 = &pDVar4->flags;

    st::fn_006B5AA0(pDVar4,&st_global_007C3B5C);
  }
  puVar6 = this_00->field_01D3;
  if (puVar6[2] != 0) {
    st::fn_007129D0(this_00->field_01E4,puVar6,puVar6);
  }
  if ((this_00->field_01A1 == CASE_7) && (this_00->field_019C != 0)) {
    puVar1 = &this_00->field_0x18;
    this_00->field_0028 = 0x28;
    *(undefined2 *)&this_00->field_0x2c = 1;
    *(short *)&this_00->field_0x2e = (short)this_00->field_01D3[2];
    st::fn_006E6080(this_00,2,this_00->field_019C,reinterpret_cast<undefined4 *>(puVar1));
    *(undefined2 *)&this_00->field_0x2e = 0;
    *(undefined2 *)&this_00->field_0x2c = 0;
    this_00->field_0028 = 0x22;
    st::fn_006E6080(this_00,2,this_00->field_019C,reinterpret_cast<undefined4 *>(puVar1));
    this_00->field_0028 = 0x20;
    *(undefined4 *)&this_00->field_0x2c = 1;
    st::fn_006E6080(this_00,2,this_00->field_019C,reinterpret_cast<undefined4 *>(puVar1));
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 00515310 HelpPanelTy::DrawTitle
#line 4 "decomp/ST.exe/functions/00515310/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DrawTitle

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00515310(HelpPanelTy *this,UINT param_1,int param_2,UINT param_3)

{
  char cVar1;
  AnonPointee_HelpPanelTy_0218 *pAVar2;
  HelpPanelTy *pHVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7_mg0;
  char *pcVar7_mg1;
  char *pcVar7_mg2;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  char *pcVar10;
  UINT resourceId;
  char *pcVar11;
  int iVar12;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  uint local_8;

  local_8 = 0x16;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;

  iVar5 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pHVar4 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_50.previous;

    iVar12 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x3d3,0,iVar5,
                                st::mutable_c_string("%s"),"HelpPanelTy::DrawTitle");
    if (iVar12 == 0) {
      st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x3d3);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_c->field_019C != 0) {
    st::fn_006E56B0(local_c->field_000C,local_c->field_019C);
  }
  pHVar4->field_01D7->count = 0;
  pHVar4->field_01DB = 0;

  st::fn_006B55F0
            (reinterpret_cast<RecoveredSourceFamily_dibcopy *>(pHVar4->field_0068),0,0x21,0x16,
             reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pHVar4->field_01DC),0,0x21,0x16,0x1b8,0x118);
  uVar9 = local_8;

  st::fn_00710A90(pHVar4->field_01E4,(int)pHVar4->field_0068,0,0x21,local_8,0x19c,0x14);
  if (DAT_0080874e == '\x03') {
    uVar6 = 5;
  }
  else {
    uVar6 = (-(uint)(DAT_0080874e != '\x01') & 6) + 1;
  }
  iVar12 = -1;
  iVar5 = -1;
  /* ST_CALLSITE[005153E4]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar7_mg0 = st::fn_006B0140(param_1,g_hINSTANCE_00807618);

  st::fn_007119C0(pHVar4->field_01E4,pcVar7_mg0,iVar5,iVar12,uVar6);
  local_8 = uVar9 + 0x14;
  if (param_2 != 0) {
    if (param_2 == 1) {
      resourceId = 0x5604;
    }
    else if (param_2 == 2) {
      resourceId = 0x5605;
    }
    else {
      resourceId = 0x5606;
    }

    st::fn_00710A90(pHVar4->field_01E0,(int)pHVar4->field_0068,0,0x21,local_8,0x19c,0xf);
    uVar6 = 3;
    iVar12 = -1;
    iVar5 = -1;
    /* ST_CALLSITE[00515444]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar7_mg1 = st::fn_006B0140(resourceId,g_hINSTANCE_00807618);

    st::fn_007119C0(pHVar4->field_01E0,pcVar7_mg1,iVar5,iVar12,uVar6);
    local_8 = uVar9 + 0x23;
  }
  if (param_3 != 0) {

    st::fn_00710A90(pHVar4->field_01E0,(int)pHVar4->field_0068,0,0x21,local_8,0x19c,0xf);
    pcVar7_mg2 = st::fn_006B0140(param_3,g_hINSTANCE_00807618);
    uVar9 = 0xffffffff;
    do {
      pcVar10 = pcVar7_mg2;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar10 = pcVar7_mg2 + 1;
      cVar1 = *pcVar7_mg2;
      pcVar7_mg2 = pcVar10;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    pcVar10 = pcVar10 + -uVar9;
    pcVar11 = reinterpret_cast<char *>(&DAT_0080f33a);
    memmove(pcVar11, pcVar10, uVar9); /* compiler REP MOVS byte copy */
    uVar6 = 0;
    for (puVar7 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar7 != nullptr;
        puVar7 = st::fn_0072E560(puVar7,'\n')) {
      *(undefined1 *)puVar7 = 0x20;
    }

    st::fn_007119C0(pHVar4->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),-1,-1,(DAT_0080874e != '\x03') - 1 & 5);
    local_8 = local_8 + 0xf;
  }
  pAVar2 = pHVar4->field_0218;
  uVar9 = pAVar2->field_0014;
  if (uVar9 == 0) {
    uVar9 = ((uint)(ushort)pAVar2->field_000E * pAVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
            pAVar2->field_0008;
  }

  puVar8 = STPointerBoundaryCast<undefined4 *>(st::fn_006B4FA0(reinterpret_cast<RecoveredRecord_006B4FA0_DAC3A217 *>(pAVar2)));
  for (uVar6 = uVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar8 = 0xffffffff;
    puVar8 = puVar8 + 1;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar8 = 0xff;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 00515650 HelpPanelTy::DrawObj
#line 4 "decomp/ST.exe/functions/00515650/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DrawObj

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00515650 -> 0044C130 @ 005156B3 | 00515650 -> 00526BA0 @ 0051578E */

void __thiscall
st::fn_00515650
          (HelpPanelTy *this,int *param_1,STAllPlayersC_GetTOBJImage_param_2Enum *param_2,
          byte param_3,int param_4)

{
  HelpPanelTy *pHVar2;
  int iVar3;
  BITMAPINFO *pBVar3;
  int iVar5;
  int iVar4;
  InternalExceptionFrame local_58;
  int local_14;
  HelpPanelTy *local_10;
  int local_c;
  AnonShape_00515650_BBDC7053 *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;

  iVar3 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  pHVar2 = local_10;
  if (iVar3 == 0) {
    if (g_allPlayers_007FA174 != nullptr) {
      *param_1 = *param_1 + 2;
      local_8 = (AnonShape_00515650_BBDC7053 *)
                /* ST_CALLSITE[005156B3]: CALL 0x00404499; direct=00404499 STAllPlayersC::GetTOBJImage */
                st::fn_00404499
                          (g_allPlayers_007FA174,(uint)param_3,
                           (STAllPlayersC_GetTOBJImage_param_2Enum)param_2);
      if (local_8 != nullptr) {
        local_14 = local_8->field_0004;
        local_c = local_8->field_0008;
        iVar4 = (0x19c - local_14) / 2;

        st::fn_006B55F0
                  (reinterpret_cast<RecoveredSourceFamily_dibcopy *>(pHVar2->field_0218),0,iVar4,*param_1,
                   reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pHVar2->field_021C),0,
                   (*(int *)(pHVar2->field_021C + 2) - local_14) / 2,
                   (*(int *)(pHVar2->field_021C + 4) - local_c) / 2,local_14,local_c);
        st::fn_006B5440(reinterpret_cast<ushort *>(pHVar2->field_0218),0,iVar4,*param_1,reinterpret_cast<tagBITMAPINFO *>(local_8),0,0xff);
        st::fn_006B5EE0(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(pHVar2->field_0218),0,iVar4 + -2,*param_1 + -2,
                     local_14 + 4,local_c + 4,0x6f,0xd);
        *param_1 = *param_1 + local_c + 10;
        st::fn_006AB060(&local_8);
      }
    }
    if (param_4 != 0) {

      iVar4 = st::fn_004056F5((Global_sub_00526BA0_param_1Enum)param_2,param_3);
      local_8 = (AnonShape_00515650_BBDC7053 *)
                /* ST_CALLSITE[00515795]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
                st::fn_0070B3A0((RecoveredGlobalRecordView_0081175C *)param_4,iVar4);
      if ((BITMAPINFO *)local_8 != nullptr) {
        iVar4 = (0x19c - (((BITMAPINFO *)local_8)->bmiHeader).biWidth) / 2;
        /* ST_CALLSITE[005157C5]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(pHVar2->field_0218),iVar4,*param_1,'\x01',
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(local_8));
        /* ST_CALLSITE[005157D3]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
        pBVar3 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(pHVar2->field_0248),4);
        /* ST_CALLSITE[005157EC]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(pHVar2->field_0218),iVar4 + -2,*param_1 + -2,'\x06',
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar3));
        pBVar3 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(pHVar2->field_0248),4);
        *param_1 = *param_1 + (pBVar3->bmiHeader).biHeight;
      }
    }
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;

  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x3f3,0,iVar3,st::mutable_c_string("%s"),
                             "HelpPanelTy::DrawObj");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x3f3);
  return;
}

// 00515900 HelpPanelTy::DrawWeapon
#line 4 "decomp/ST.exe/functions/00515900/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DrawWeapon
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:5: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=00515A93 MOV EDX,dword ptr [EBP + 0x18];
   first-use mask */

undefined4 __thiscall
st::fn_00515900
          (HelpPanelTy *this,int param_1,int *param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  int iVar3;
  BITMAPINFO *pBVar4;
  UINT UVar5;
  char *pcVar6;
  int iVar7;
  uint uVar7;
  Global_sub_005259B0_param_1Enum GVar8;
  HINSTANCE pHVar9;
  InternalExceptionFrame local_6c;
  int local_28;
  int local_24;
  LONG local_20;
  LONG local_1c;
  byte local_18;
  int local_17;
  uint local_13;
  uint local_c;
  HelpPanelTy *local_8;

  local_c = 0;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_8 = this;

  iVar3 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_6c.previous;

    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x412,0,iVar3,st::mutable_c_string("%s")
                               ,"HelpPanelTy::DrawWeapon");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x412);
    return 0;
  }
  if (param_3 != 0) {
    GVar8 = (Global_sub_005259B0_param_1Enum)param_3;

    iVar3 = st::fn_0040137F(GVar8,0,'\x01');
    /* ST_CALLSITE[0051595B]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
    pBVar4 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(local_8->field_0244),iVar3);
    if (pBVar4 != nullptr) {
      iVar3 = (pBVar4->bmiHeader).biHeight + -0xf;
      if (iVar3 < 1) {
        iVar3 = 0;
      }
      else {
        iVar3 = iVar3 / 2;
      }
      iVar1 = *param_2;
      *param_2 = iVar1 + iVar3;

      st::fn_00710A90(local_8->field_01E0,(int)local_8->field_0218,0,param_1,iVar1 + iVar3,
                       0x19c - param_1,0xf);
      if (param_4 == 0) {
        pHVar9 = g_hINSTANCE_00807618;

        UVar5 = st::fn_00404494(GVar8);
        pcVar6 = st::fn_006B0140(UVar5,pHVar9);
        /* ST_CALLSITE[00515A0C]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s"),pcVar6);
      }
      else {
        pHVar9 = g_hINSTANCE_00807618;

        UVar5 = st::fn_00404494(GVar8);
        pcVar6 = st::fn_006B0140(UVar5,pHVar9);
        /* ST_CALLSITE[005159DD]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s (%d)"),pcVar6,param_4);
      }

      st::fn_007119C0(local_8->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,(DAT_0080874e != '\x03') - 1 & 5
                    );
      /* ST_CALLSITE[00515A6B]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(local_8->field_0218),
             (param_1 - (pBVar4->bmiHeader).biWidth) + -5,
             (0xf - (pBVar4->bmiHeader).biHeight) / 2 + *param_2,'\x06',
             reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar4));
      local_28 = (param_1 - (pBVar4->bmiHeader).biWidth) + -5;
      local_20 = (pBVar4->bmiHeader).biWidth;
      local_24 = (0xf - (pBVar4->bmiHeader).biHeight) / 2 + *param_2;
      local_1c = (pBVar4->bmiHeader).biHeight;
      local_17 = param_3;
      local_13 = (uint)param_5;
      local_18 = 4;

      st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(local_8->field_01D7),&local_28);
      iVar3 = (pBVar4->bmiHeader).biHeight;
      if (iVar3 < 0x10) {
        iVar3 = 0xf;
      }
      *param_2 = *param_2 + iVar3;
      g_currentExceptionFrame = local_6c.previous;
      return 1;
    }
  }
  g_currentExceptionFrame = local_6c.previous;
  return local_c;
}

// 00515C00 HelpPanelTy::DrawDescription
#line 4 "decomp/ST.exe/functions/00515C00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DrawDescription

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00515C00(HelpPanelTy *this,int *param_1,UINT param_2)

{
  char cVar1;
  HelpPanelTy *this_00;
  int iVar3;
  char *pcVar4_mg1;
  char *pcVar4_mg0;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;

    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x425,0,iVar3,st::mutable_c_string("%s")
                               ,"HelpPanelTy::DrawDescription");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x425);
    return;
  }
  if (param_2 != 10000) {

    st::fn_00710A90(local_8->field_01E0,(int)local_8->field_0218,0,0,*param_1,0x19c,0xf);
    uVar8 = 3;
    iVar7 = -1;
    iVar3 = -1;
    /* ST_CALLSITE[00515C7C]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar4_mg1 = st::fn_006B0140(0x55f5,g_hINSTANCE_00807618);

    st::fn_007119C0(this_00->field_01E0,pcVar4_mg1,iVar3,iVar7,uVar8);
    *param_1 = *param_1 + 0xf;
    pcVar4_mg0 = st::fn_006B0140(param_2,g_hINSTANCE_00807618);
    uVar8 = 0xffffffff;
    do {
      pcVar5 = pcVar4_mg0;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar5 = pcVar4_mg0 + 1;
      cVar1 = *pcVar4_mg0;
      pcVar4_mg0 = pcVar5;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar5 = pcVar5 + -uVar8;
    pcVar6 = reinterpret_cast<char *>(&DAT_0080f33a);
    memmove(pcVar6, pcVar5, uVar8); /* compiler REP MOVS byte copy */
    st::fn_00712D30
              (this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),&DAT_0080f33a,st::mutable_c_string(" ,.;:!?/\\()[]{}"),
               reinterpret_cast<uint *>(&DAT_007c21ec),0x19c,reinterpret_cast<char *>(&DAT_007c2198),1);

    iVar3 = st::fn_007113E0(this_00->field_01E0,&DAT_0080f33a);
    /* ST_CALLSITE[00515D08]: CALL 0x00401870; direct=00401870 HelpPanelTy::CheckBkView */
    st::fn_00401870(this_00,*param_1,(ushort)iVar3);

    st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,*param_1,0x19c,iVar3 + 2);

    st::fn_00711B70(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,(DAT_0080874e != '\x03') - 1 & 5,
                   -1,-1);
    *param_1 = *param_1 + iVar3;
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 00515E30 HelpPanelTy::AddLinks
#line 4 "decomp/ST.exe/functions/00515E30/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::AddLinks */

void __thiscall
st::fn_00515E30(HelpPanelTy *this,int *param_1,char param_2,int param_3,int param_4)

{
  char cVar1;
  HelpPanelTy *this_00;
  int iVar3;
  char *pcVar5;
  byte *pbVar3;
  char *pcVar6;
  uint *puVar4;
  int iVar8;
  int *piVar5;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  InternalExceptionFrame local_88;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  byte local_34;
  int local_33;
  int local_2f;
  uint local_28;
  uint local_24;
  HelpPanelTy *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int *local_c;
  byte local_5;

  local_28 = *(undefined4 *)(this->field_024C + 4);
  local_18 = *(int *)(this->field_024C + 2);
  local_14 = 1;
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_20 = this;

  iVar3 = st::fn_0072D7F0(local_88.jumpBuffer,0);
  this_00 = local_20;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_88.previous;

    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x460,0,iVar3,st::mutable_c_string("%s")
                               ,"HelpPanelTy::AddLinks");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x460);
    return;
  }
  if (DAT_007e68a0 != '\0') {
    pcVar7 = (char *)&DAT_007e68a0;
    local_10 = reinterpret_cast<int *>(&DAT_007e68a5);
    do {
      if (((*pcVar7 == param_2) && (local_10[-1] == param_3)) && (*local_10 == param_4)) {
        local_c = (int *)((int)local_10 + 5);
        local_1c = 1;
LAB_00515ee1:
        if ((*(char *)((int)local_c + -1) != '\0') && (uVar8 = 0, *local_c != 0)) {
          if (local_14 != 0) {
            /* ST_CALLSITE[00515F07]: CALL 0x00401870; direct=00401870 HelpPanelTy::CheckBkView */
            st::fn_00401870(this_00,*param_1,0xf);

            st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,*param_1,0x19c,0xf);
            uVar12 = 3;
            iVar11 = -1;
            iVar10 = -1;
            /* ST_CALLSITE[00515F3C]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
            pcVar5 = st::fn_006B0140(0x55f6,g_hINSTANCE_00807618);

            st::fn_007119C0(this_00->field_01E0,pcVar5,iVar10,iVar11,uVar12);
            local_14 = 0;
            *param_1 = *param_1 + 0xf;
          }
          /* ST_CALLSITE[00515F72]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0x50,*param_1 + 1,'\x01',
                 reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_024C));
          local_24 = *(uint *)PTR_sizeHelp_0085c118;
          if (local_24 != 0) {
            local_5 = *(byte *)((int)local_c + -1);
            pbVar3 = this_00->field_01C7 + 9;
            do {
              if (((pbVar3[-1] == local_5) && (*(int *)pbVar3 == *local_c)) &&
                 (*(int *)(pbVar3 + 4) == local_c[1])) {

                st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,local_18 + 0x5f,
                                 *param_1,0x13d - local_18,0xf);
                pcVar6 = st::fn_006B0140(*(UINT *)(this_00->field_01C7 + uVar8 * 0x11),
                                            g_hINSTANCE_00807618);
                uVar8 = 0xffffffff;
                goto code_r0x00516013;
              }
              uVar8 = uVar8 + 1;
              pbVar3 = pbVar3 + 0x11;
            } while (uVar8 < local_24);
          }
          goto LAB_0051607e;
        }
      }
LAB_005160da:
      piVar5 = (int *)((int)local_10 + 0x36);
      pcVar9 = (char *)((int)local_10 + 0x31);
      pcVar7 = (char *)((int)local_10 + 0x31);
      local_10 = piVar5;
    } while (*pcVar9 != '\0');
  }
  /* ST_CALLSITE[005160F8]: CALL 0x00401870; direct=00401870 HelpPanelTy::CheckBkView */
  st::fn_00401870(this_00,*param_1,10);
  iVar10 = (*param_1 / 10 + 1) * 10;
  *param_1 = iVar10;
  iVar10 = ((ushort)this_00->field_01AF - 0x118) + iVar10;
  if (iVar10 < 1) {
    iVar10 = 0;
  }
  else {
    iVar10 = iVar10 / (int)(uint)(ushort)this_00->field_01B1 + 1;
  }
  /* ST_CALLSITE[00516141]: CALL 0x00402eeb; direct=00402EEB HelpPanelTy::CreateSlider */
  st::fn_00402EEB(this_00,iVar10);
  st::fn_006B5110
            ((int)this_00->field_0068,0,0x21,(ushort)this_00->field_01AF + 0x16,
             reinterpret_cast<BITMAPINFO *>(this_00->field_0218),0,0,0,0x19c,0x117 - (uint)(ushort)this_00->field_01AF
             ,0xff);

  st::fn_006B3640
            (reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_0060,0xffffffff,this_00->field_003C,
             this_00->field_0044);
  g_currentExceptionFrame = local_88.previous;
  return;
  while( true ) {
    uVar8 = uVar8 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
    if (cVar1 == '\0') break;
code_r0x00516013:
    pcVar7 = pcVar6;
    if (uVar8 == 0) break;
  }
  uVar8 = ~uVar8;
  pcVar7 = pcVar7 + -uVar8;
  pcVar9 = reinterpret_cast<char *>(&DAT_0080f33a);
  memmove(pcVar9, pcVar7, uVar8); /* compiler REP MOVS byte copy */
  for (puVar4 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar4 != nullptr;
      puVar4 = st::fn_0072E560(puVar4,'\n')) {
    *(undefined1 *)puVar4 = 0x20;
  }

  st::fn_007119C0(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,(DAT_0080874e != '\x03') - 1 & 5);
LAB_0051607e:
  local_40 = *param_1;
  local_3c = local_18;
  local_34 = *(undefined1 *)((int)local_c + -1);
  local_38 = local_28;
  local_33 = *local_c;
  local_2f = local_c[1];
  local_44 = 0x50;

  st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),&local_44);
  local_1c = local_1c + 1;
  local_c = (int *)((int)local_c + 9);
  *param_1 = *param_1 + 0xf;
  if (5 < local_1c) goto LAB_005160da;
  goto LAB_00515ee1;
}

// 00516300 HelpPanelTy::MObjProc
#line 4 "decomp/ST.exe/functions/00516300/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::MObjProc

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00516300(HelpPanelTy *this)

{
  HelpPanelTy_field_01A1State HVar1;
  int iVar2;
  HelpPanelTy *this_00;
  int iVar3_mg0;
  int iVar3_mg0_2;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar3_mg0 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3_mg0 == 0) {
    HVar1 = local_8->field_01A1;
    if (((HVar1 == 0) || (HVar1 == CASE_6)) || (HVar1 == CASE_A)) {
      local_8->field_01A2 = HVar1;
      local_8->field_01AB = st::machine_word_boundary_cast<undefined4>(local_8->field_01A3);
    }
    else {
      local_8->field_01A2 = 0;
      local_8->field_01AB = 0;
    }
    STPiece<0,2>(iVar2) = local_8->field_0178;
    STPiece<2,2>(iVar2) = local_8->field_017A;
    local_8->field_01A1 = CASE_7;
    local_8->field_01A7 = 0;
    local_8->field_01A3 = nullptr;
    local_8->field_01AF = 0;
    local_8->field_01B1 = 0;
    if (iVar2 != 0) {
      local_8->field_0028 = 0x4202;
      *(undefined2 *)&local_8->field_0x2c = 0;
      *(undefined2 *)&local_8->field_0x2e = 2;
      local_8->field_0030 = (undefined2)iVar2;
      local_8->field_0032 = STPiece<2,2>(iVar2);
      if (g_cursorClass_00802A30 != nullptr) {
        /* ST_CALLSITE[005163B9]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
        g_cursorClass_00802A30->GetMessage((STMessage *)&local_8->field_0x18);
      }
    }
    if (this_00->field_019C != 0) {
      st::fn_006E56B0(this_00->field_000C,this_00->field_019C);
    }
    /* ST_CALLSITE[005163D7]: CALL 0x00402194; direct=00402194 HelpPanelTy::sub_00512BE0 */
    st::fn_00402194(this_00,reinterpret_cast<RecoveredRecord_00512BE0_263FD6FB *>(this_00->field_01D3));
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar3_mg0_2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x46e,0,iVar3_mg0,
                                   st::mutable_c_string("%s"),"HelpPanelTy::MObjProc");
  if (iVar3_mg0_2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3_mg0,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x46e);
  return;
}

// 00516480 HelpPanelTy::TTreeProc
#line 4 "decomp/ST.exe/functions/00516480/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::TTreeProc */

void __thiscall st::fn_00516480(HelpPanelTy *this,uint param_1,char param_2)

{
  HelpPanelTy_field_01A1State HVar1;
  AnonPointee_HelpPanelTy_0218 *pAVar2;
  HelpPanelTy *this_00;
  int local_EAX_36;
  uint uVar4;
  char *pcVar5;
  uint *puVar6;
  BITMAPINFO *pBVar7;
  int iVar5;
  uint uVar6;
  int local_EAX_828;
  int local_EAX_861;
  int iVar12;
  uint uVar8;
  UINT resourceId;
  RecoveredGlobalRecordView_0081175C *pRVar9;
  byte *pbVar10;
  int iVar11;
  int iVar13;
  InternalExceptionFrame local_58;
  HelpPanelTy *local_14;
  undefined4 *local_10;
  uint local_c;
  BITMAPINFO *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;

  local_EAX_36 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  this_00 = local_14;
  if (local_EAX_36 != 0) {
    g_currentExceptionFrame = local_58.previous;

    iVar12 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x4aa,0,local_EAX_36,
                                st::mutable_c_string("%s"),"HelpPanelTy::TTreeProc");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_36,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x4aa);
    return;
  }
  if (param_2 == '\0') {
    HVar1 = local_14->field_01A1;
    if (((HVar1 == 0) || (HVar1 == CASE_6)) || (HVar1 == CASE_A)) {
      local_14->field_01A2 = HVar1;
      local_14->field_01AB = st::machine_word_boundary_cast<undefined4>(local_14->field_01A3);
    }
    else {
      local_14->field_01A2 = 0;
      local_14->field_01AB = 0;
    }
    STPiece<0,2>(iVar11) = local_14->field_0178;
    STPiece<2,2>(iVar11) = local_14->field_017A;
    local_14->field_01A1 = CASE_6;
    local_14->field_01A3 = (void *)param_1;
    local_14->field_01AF = 0x23;
    local_14->field_01B1 = 10;
    if (iVar11 != 0) {
      local_14->field_0028 = 0x4202;
      *(undefined2 *)&local_14->field_0x2c = 0;
      *(undefined2 *)&local_14->field_0x2e = 2;
      local_14->field_0030 = (undefined2)iVar11;
      local_14->field_0032 = STPiece<2,2>(iVar11);
      if (g_cursorClass_00802A30 != nullptr) {
        /* ST_CALLSITE[0051654A]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
        g_cursorClass_00802A30->GetMessage((STMessage *)&local_14->field_0x18);
      }
    }
  }
  if (this_00->field_019C != 0) {
    st::fn_006E56B0(this_00->field_000C,this_00->field_019C);
  }

  st::fn_006B55F0
            (reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0068),0,0x21,0x16,
             reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_01DC),0,0x21,0x16,0x1b8,0x118);
  if (param_1 == 1) {
    local_8 = (BITMAPINFO *)((uint)STPiece<1,3>(local_8) << 8);
    resourceId = 0x5604;
    local_10 = reinterpret_cast<undefined4 *>(&DAT_007c2b58);
    local_c = 0x33;
  }
  else if (param_1 == 2) {
    local_8 = (BITMAPINFO *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(1));
    resourceId = 0x5605;
    local_10 = reinterpret_cast<undefined4 *>(&DAT_007c2df0);
    local_c = 0x39;
  }
  else {
    local_8 = (BITMAPINFO *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(2));
    resourceId = 0x5606;
    local_10 = &DAT_007c30d8;
    local_c = 0x46;
  }

  st::fn_00710A90(this_00->field_01E4,(int)this_00->field_0068,0,0x21,0x16,0x19c,0x14);
  if (DAT_0080874e == 3) {
    uVar4 = 5;
  }
  else {
    uVar4 = (-(uint)(DAT_0080874e != 1) & 6) + 1;
  }
  iVar13 = -1;
  iVar11 = -1;
  /* ST_CALLSITE[0051661A]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar5 = st::fn_006B0140(0x55f4,g_hINSTANCE_00807618);

  st::fn_007119C0(this_00->field_01E4,pcVar5,iVar11,iVar13,uVar4);

  st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0068,0,0x21,0x2a,0x19c,0xf);
  uVar4 = (DAT_0080874e != 3) - 1 & 5;
  iVar13 = -1;
  iVar11 = -1;
  /* ST_CALLSITE[00516665]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar5 = st::fn_006B0140(resourceId,g_hINSTANCE_00807618);

  st::fn_007119C0(this_00->field_01E0,pcVar5,iVar11,iVar13,uVar4);
  pAVar2 = this_00->field_0218;
  uVar4 = pAVar2->field_0014;
  if (uVar4 == 0) {
    uVar4 = ((uint)(ushort)pAVar2->field_000E * pAVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
            pAVar2->field_0008;
  }

  puVar6 = STPointerBoundaryCast<undefined4 *>(st::fn_006B4FA0(reinterpret_cast<RecoveredRecord_006B4FA0_DAC3A217 *>(pAVar2)));
  for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar6 = 0xffffffff;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = 0xff;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  /* ST_CALLSITE[005166C8]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
  pBVar7 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0224),
                        (uint)local_8 & 0xff);
  local_8 = pBVar7;
  /* ST_CALLSITE[005166E0]: CALL 0x00403229; direct=00403229 DibPut */
  st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0,0,'\x06',
         reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar7));
  if ((param_1 == DAT_0080874e) && ((short)local_c != 0)) {
    pbVar10 = reinterpret_cast<byte *>((local_10 + 1));
    local_10 = (undefined4 *)(local_c & 0xffff);
    do {

      iVar5 = st::fn_0040524F((uint)DAT_0080874d,*(uint *)(pbVar10 + -4));
      if (iVar5 == 0) {
LAB_00516776:
        pRVar9 = reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_022C);
      }
      else {

        iVar11 = st::fn_0040530D((uint)DAT_0080874d,*(int *)(pbVar10 + -4));
        if (iVar11 < (int)(uint)*pbVar10) goto LAB_00516776;

        iVar11 = st::fn_0040186B((uint)DAT_0080874d,*(int *)(pbVar10 + -4));
        if (iVar11 < (int)(uint)*pbVar10) goto LAB_00516776;
        pRVar9 = reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0228);
      }

      uVar6 = st::fn_004033F0(pbVar10[-4],*pbVar10);
      /* ST_CALLSITE[0051678A]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
      pBVar7 = st::fn_0070B3A0(pRVar9,uVar6);
      /* ST_CALLSITE[005167A1]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),*(int *)(pbVar10 + 1),
             *(int *)(pbVar10 + 5),'\x01',reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar7));

      local_EAX_828 = st::fn_0040524F((uint)DAT_0080874d,*(uint *)(pbVar10 + -4));
      if (local_EAX_828 != 0) {
        /* ST_CALLSITE[005167DD]: CALL 0x00403f8f; direct=00403F8F STAllPlayersC::sub_004E5CC0 */
        local_EAX_861 =
             st::fn_00403F8F
                       (g_allPlayers_007FA174,(uint)DAT_0080874d,*(uint *)(pbVar10 + -4),
                        (uint)*pbVar10);
        if (local_EAX_861 != 0) {
          /* ST_CALLSITE[005167EF]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
          pBVar7 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0248),0);
          /* ST_CALLSITE[00516806]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),*(int *)(pbVar10 + 1),
                 *(int *)(pbVar10 + 5),'\x06',reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar7));
        }
      }
      pbVar10 = pbVar10 + 0xd;
      local_10 = (undefined4 *)((int)local_10 - 1);
    } while (local_10 != nullptr);
    local_10 = nullptr;
    pBVar7 = local_8;
  }
  iVar11 = (pBVar7->bmiHeader).biHeight + -0x118 + (uint)(ushort)this_00->field_01AF;
  if (iVar11 < 1) {
    iVar11 = 0;
  }
  else {
    iVar11 = (uint)(iVar11 % (int)(uint)(ushort)this_00->field_01B1 != 0) +
             iVar11 / (int)(uint)(ushort)this_00->field_01B1;
  }
  /* ST_CALLSITE[0051685C]: CALL 0x00402eeb; direct=00402EEB HelpPanelTy::CreateSlider */
  st::fn_00402EEB(this_00,iVar11);
  st::fn_006B5110
            ((int)this_00->field_0068,0,0x21,(ushort)this_00->field_01AF + 0x16,
             reinterpret_cast<BITMAPINFO *>(this_00->field_0218),0,0,0,0x19c,0x117 - (uint)(ushort)this_00->field_01AF
             ,0xff);

  st::fn_006B3640
            (reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_0060,0xffffffff,this_00->field_003C,
             this_00->field_0044);
  g_currentExceptionFrame = local_58.previous;
  return;
}

// 00516A40 HelpPanelTy::TechProc
#line 4 "decomp/ST.exe/functions/00516A40/decomp.c"
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffec : 0x00517361 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::TechProc */

void __thiscall st::fn_00516A40(HelpPanelTy *this,uint param_1,byte param_2,char param_3)

{
  char cVar1;
  HelpPanelTy_field_01A1State HVar2;
  HelpPanelTy *this_00;
  BITMAPINFO *pBVar4;
  ushort uVar5;
  int local_EAX_70;
  UINT UVar6;
  uint uVar12;
  BITMAPINFO *pBVar7_mg0;
  char *pcVar8_mg0;
  int local_EAX_506;
  int local_EAX_624;
  int local_EAX_687;
  char *pcVar8_mg7;
  char *pcVar8_mg6;
  char *pcVar8_mg5;
  char *pcVar8_mg8;
  char *pcVar8_mg4;
  int iVar6;
  char *pcVar8_mg3;
  BITMAPINFO *pBVar7_mg1;
  char *pcVar8_mg2;
  char *pcVar8_mg1;
  char *pcVar8_mg9;
  char *pcVar8_mgA;
  char *pcVar8_mgB;
  char *pcVar8_mgC;
  char *pcVar8_mgD;
  char *pcVar8_mgE;
  char *pcVar8_mgF;
  char *pcVar8_mg10;
  uint *puVar7;
  uint local_EAX_2640;
  BITMAPINFO *pBVar7_mg3;
  char *pcVar8_mg12;
  uint local_EAX_2991;
  BITMAPINFO *pBVar7_mg5;
  int iVar15;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  AnonPointee_HelpPanelTy_0068 *pAVar12;
  HINSTANCE pHVar13;
  int iVar14;
  Global_sub_00528A30_param_1Enum GVar15;
  int iVar16;
  int iVar17;
  InternalExceptionFrame local_88;
  HelpPanelTy *local_44;
  BITMAPINFO *local_40;
  BITMAPINFO *local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  LONG local_2c;
  LONG local_28;
  byte local_24;
  Global_sub_00526BA0_param_1Enum local_23;
  uint local_1f;
  uint local_18;
  Global_sub_00526BA0_param_1Enum local_14;
  Global_sub_00526BA0_param_1Enum local_10;
  uint local_c;
  uint local_8;

  local_c = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_c)), (uint8_t)(1));
  local_8 = 0;
  local_44 = this;
  local_3c = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this->field_0248),4);
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;

  local_EAX_70 = st::fn_0072D7F0(local_88.jumpBuffer,0);
  this_00 = local_44;
  if (local_EAX_70 != 0) {
    g_currentExceptionFrame = local_88.previous;

    iVar15 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x55a,0,local_EAX_70,
                                st::mutable_c_string("%s"),"HelpPanelTy::TechProc");
    if (iVar15 == 0) {
      st::fn_006A5E40(local_EAX_70,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x55a);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_3 == '\0') {
    HVar2 = local_44->field_01A1;
    if (((HVar2 == 0) || (HVar2 == CASE_6)) || (HVar2 == CASE_A)) {
      local_44->field_01A2 = HVar2;
      local_44->field_01AB = st::machine_word_boundary_cast<undefined4>(local_44->field_01A3);
    }
    else {
      local_44->field_01A2 = 0;
      local_44->field_01AB = 0;
    }
    STPiece<0,2>(iVar14) = local_44->field_0178;
    STPiece<2,2>(iVar14) = local_44->field_017A;
    local_44->field_01A1 = CASE_5;
    local_44->field_01A3 = (void *)param_1;
    local_44->field_01A7 = (uint)param_2;
    local_44->field_01AF = 0x32;
    local_44->field_01B1 = 5;
    if (iVar14 != 0) {
      local_44->field_0028 = 0x4202;
      *(undefined2 *)&local_44->field_0x2c = 0;
      *(undefined2 *)&local_44->field_0x2e = 2;
      local_44->field_0030 = (undefined2)iVar14;
      local_44->field_0032 = STPiece<2,2>(iVar14);
      if (g_cursorClass_00802A30 != nullptr) {
        /* ST_CALLSITE[00516B38]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
        g_cursorClass_00802A30->GetMessage((STMessage *)&local_44->field_0x18);
      }
    }
  }
  uVar5 = 0;
  do {
    if ((&PTR_DAT_007bfc04)[uVar5][param_1] != '\0') {
      local_c = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_c)), (uint8_t)((char)local_c + (char)uVar5));
      break;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 3);
  uVar9 = local_c & 0xff;
  GVar15 = (Global_sub_00528A30_param_1Enum)param_1;
  local_18 = uVar9;

  UVar6 = st::fn_00404B29(GVar15,param_2);
  /* ST_CALLSITE[00516B84]: CALL 0x00403ef9; direct=00403EF9 HelpPanelTy::DrawTitle */
  st::fn_00403EF9(this_00,0x55fc,uVar9,UVar6);

  uVar12 = st::fn_004033F0(GVar15,param_2);
  /* ST_CALLSITE[00516B9B]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
  pBVar7_mg0 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0230),uVar12);
  /* ST_CALLSITE[00516BAB]: CALL 0x00403229; direct=00403229 DibPut */
  st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0068),0x35,0x2a,'\x01',
         reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar7_mg0));

  st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar9 = 3;
  iVar16 = -1;
  iVar14 = -3;
  /* ST_CALLSITE[00516BE6]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar8_mg0 = st::fn_006B0140(0x5622,g_hINSTANCE_00807618);

  st::fn_007119C0(this_00->field_01E0,pcVar8_mg0,iVar14,iVar16,uVar9);

  st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
  if ((char)local_c == DAT_0080874e) {

    local_EAX_506 = st::fn_0040524F((uint)DAT_0080874d,param_1);
    if (local_EAX_506 != 0) {
      local_38 = (uint)param_2;

      iVar14 = st::fn_0040530D((uint)DAT_0080874d,param_1);
      if ((int)(uint)param_2 <= iVar14) {

        iVar14 = st::fn_0040530D((uint)DAT_0080874d,param_1);

        iVar16 = st::fn_0040186B((uint)DAT_0080874d,param_1);
        if (iVar14 <= iVar16) {
          uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar16 = -1;
          iVar14 = 1;
          /* ST_CALLSITE[00516D8C]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
          pcVar8_mg5 = st::fn_006B0140(0x5d56,g_hINSTANCE_00807618);

          st::fn_007119C0(this_00->field_01E0,pcVar8_mg5,iVar14,iVar16,uVar9);
          iVar14 = 2;
          goto LAB_00516f08;
        }

        local_EAX_624 = st::fn_00401E1F((uint)DAT_0080874d,param_1);
        if (local_EAX_624 == 0) {
          /* ST_CALLSITE[00516CEF]: CALL 0x00403f8f; direct=00403F8F STAllPlayersC::sub_004E5CC0 */
          local_EAX_687 =
               st::fn_00403F8F
                         (g_allPlayers_007FA174,(uint)DAT_0080874d,param_1,local_38);
          if (local_EAX_687 == 0) {
            uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
            iVar16 = -1;
            iVar14 = 1;
            /* ST_CALLSITE[00516D53]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
            pcVar8_mg6 = st::fn_006B0140(0x5d55,g_hINSTANCE_00807618);

            st::fn_007119C0(this_00->field_01E0,pcVar8_mg6,iVar14,iVar16,uVar9);
            iVar14 = 1;
            goto LAB_00516eb8;
          }
          UVar6 = 0x5d53;
        }
        else {
          UVar6 = 0x5d54;
        }
        uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar16 = -1;
        iVar14 = 1;
        /* ST_CALLSITE[00516D18]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar8_mg7 = st::fn_006B0140(UVar6,g_hINSTANCE_00807618);

        st::fn_007119C0(this_00->field_01E0,pcVar8_mg7,iVar14,iVar16,uVar9);
        iVar14 = 3;
        goto LAB_00516f54;
      }
    }
    uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar16 = -1;
    iVar14 = 1;
    /* ST_CALLSITE[00516DC4]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar8_mg8 = st::fn_006B0140(0x5d52,g_hINSTANCE_00807618);

    st::fn_007119C0(this_00->field_01E0,pcVar8_mg8,iVar14,iVar16,uVar9);
    iVar14 = 1;
  }
  else {

    iVar14 = st::fn_0040530D((uint)DAT_0080874d,param_1);

    iVar16 = st::fn_0040186B((uint)DAT_0080874d,param_1);
    if (iVar16 < iVar14) {
      /* ST_CALLSITE[00516E27]: CALL 0x00402342; direct=00402342 STAllPlayersC::sub_004E7F20 */
      iVar14 = st::fn_00402342
                         (g_allPlayers_007FA174,(uint)DAT_0080874d,param_1,(uint)param_2);
      if (iVar14 == 0) {
        uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar16 = -1;
        iVar14 = 1;
        /* ST_CALLSITE[00516E51]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar8_mg4 = st::fn_006B0140(0x5d52,g_hINSTANCE_00807618);

        st::fn_007119C0(this_00->field_01E0,pcVar8_mg4,iVar14,iVar16,uVar9);
        iVar14 = 1;
      }
      else {

        iVar6 = st::fn_00401E1F((uint)DAT_0080874d,param_1);
        if (iVar6 != 0) {
          uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar16 = -1;
          iVar14 = 1;
          /* ST_CALLSITE[00516EA5]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
          pcVar8_mg3 = st::fn_006B0140(0x5d54,g_hINSTANCE_00807618);

          st::fn_007119C0(this_00->field_01E0,pcVar8_mg3,iVar14,iVar16,uVar9);
          iVar14 = 3;
LAB_00516eb8:
          pBVar7_mg1 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0248),iVar14
                                   );
          pAVar12 = this_00->field_0068;
          goto LAB_00516f6b;
        }
        uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar16 = -1;
        iVar14 = 1;
        /* ST_CALLSITE[00516EF5]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar8_mg2 = st::fn_006B0140(0x5d53,g_hINSTANCE_00807618);

        st::fn_007119C0(this_00->field_01E0,pcVar8_mg2,iVar14,iVar16,uVar9);
        iVar14 = 3;
      }
LAB_00516f08:
      pBVar7_mg1 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0248),iVar14);
      pAVar12 = this_00->field_0068;
      goto LAB_00516f6b;
    }
    uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar16 = -1;
    iVar14 = 1;
    /* ST_CALLSITE[00516F41]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar8_mg1 = st::fn_006B0140(0x5d56,g_hINSTANCE_00807618);

    st::fn_007119C0(this_00->field_01E0,pcVar8_mg1,iVar14,iVar16,uVar9);
    iVar14 = 2;
  }
LAB_00516f54:
  /* ST_CALLSITE[00516F5B]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
  pBVar7_mg1 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0248),iVar14);
  pAVar12 = this_00->field_0068;
LAB_00516f6b:
  /* ST_CALLSITE[00516F6B]: CALL 0x00403229; direct=00403229 DibPut */
  st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(pAVar12),0x33,0x28,'\x06',
         reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar7_mg1));
  local_8 = local_8 + 0xf;

  st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar9 = 3;
  iVar16 = -1;
  iVar14 = -3;
  /* ST_CALLSITE[00516FAC]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar8_mg9 = st::fn_006B0140(0x5623,g_hINSTANCE_00807618);

  st::fn_007119C0(this_00->field_01E0,pcVar8_mg9,iVar14,iVar16,uVar9);

  st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
  uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
  iVar16 = -1;
  iVar14 = 1;
  pHVar13 = g_hINSTANCE_00807618;

  UVar6 = st::fn_00402789(GVar15);
  /* ST_CALLSITE[00517007]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar8_mgA = st::fn_006B0140(UVar6,pHVar13);

  st::fn_007119C0(this_00->field_01E0,pcVar8_mgA,iVar14,iVar16,uVar9);
  local_8 = local_8 + 0xf;

  st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar9 = 3;
  iVar16 = -1;
  iVar14 = -3;
  /* ST_CALLSITE[00517051]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar8_mgB = st::fn_006B0140(0x55f7,g_hINSTANCE_00807618);

  st::fn_007119C0(this_00->field_01E0,pcVar8_mgB,iVar14,iVar16,uVar9);

  st::fn_00710A90(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
  local_38 = (uint)param_2;
  iVar14 = (local_38 + param_1 * 4) * 4;
  /* ST_CALLSITE[005170AC]: CALL dword ptr [0x0085bde8] */
  st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%4d"),*(undefined4 *)(&DAT_007e4818 + iVar14));

  st::fn_007119C0(this_00->field_01E8,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,
                 (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 3);
  /* ST_CALLSITE[005170F3]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; source view only; no Ghidra override */
  local_40 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0238),
                          (-st::storage_bit_cast<uint>(static_cast<uint32_t>((char)local_c != '\x03')) & 0xfffffffe) + 4);
  if (local_40 != nullptr) {
    st::fn_006B5440(reinterpret_cast<ushort *>(this_00->field_0218),0,0xb4,local_8,reinterpret_cast<tagBITMAPINFO *>(local_40),0,0x3a);
    local_34 = 0xb4;
    local_2c = (local_40->bmiHeader).biWidth;
    local_30 = local_8;
    local_28 = (local_40->bmiHeader).biHeight;
    local_23 = (-st::storage_bit_cast<uint>(static_cast<uint32_t>((char)local_c != '\x03')) & 0xfffffffc) + 0xe0;
    local_24 = 1;
    local_1f = local_18;

    st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),&local_34);
  }
  local_8 = local_8 + 0xf;

  st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar9 = 3;
  iVar17 = -1;
  iVar16 = -3;
  /* ST_CALLSITE[005171A2]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar8_mgC = st::fn_006B0140(0x5624,g_hINSTANCE_00807618);

  st::fn_007119C0(this_00->field_01E0,pcVar8_mgC,iVar16,iVar17,uVar9);

  st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
  iVar14 = (*(int *)(&DAT_007e5474 + iVar14) / 0x19) % 0xe10;
  /* ST_CALLSITE[00517223]: CALL dword ptr [0x0085bde8] */
  st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%02d:%02d"),iVar14 / 0x3c,iVar14 % 0x3c);

  st::fn_007119C0(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,2);
  local_8 = local_8 + 0xf;

  st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar9 = 3;
  iVar16 = -1;
  iVar14 = -3;
  /* ST_CALLSITE[0051727B]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar8_mgD = st::fn_006B0140(0x5625,g_hINSTANCE_00807618);

  st::fn_007119C0(this_00->field_01E0,pcVar8_mgD,iVar14,iVar16,uVar9);

  st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
  UVar6 = 0x5d57;
  if ((&DAT_007e53bc)[param_1] != '\0') {
    if ((char)local_c == '\x02') {
      UVar6 = 0x5d58;
    }
    else if ((char)local_c == '\x01') {
      UVar6 = 0x5d59;
    }
  }
  uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
  iVar16 = -1;
  iVar14 = 1;
  /* ST_CALLSITE[005172F7]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar8_mgE = st::fn_006B0140(UVar6,g_hINSTANCE_00807618);

  st::fn_007119C0(this_00->field_01E0,pcVar8_mgE,iVar14,iVar16,uVar9);
  local_8 = local_8 + 0xf;
  if ((g_allPlayers_007FA174 != nullptr) &&
     ((st::fn_00405448(local_18,param_1,reinterpret_cast<undefined4 *>(&local_10),reinterpret_cast<undefined4 *>(&local_14)), local_10 != 0 || (local_14 != 0))))
  {

    st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
    uVar9 = 3;
    iVar16 = -1;
    iVar14 = -3;
    /* ST_CALLSITE[005173B2]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar8_mgF = st::fn_006B0140(0x5626,g_hINSTANCE_00807618);

    st::fn_007119C0(this_00->field_01E0,pcVar8_mgF,iVar14,iVar16,uVar9);
    if (local_10 != 0) {

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      pHVar13 = g_hINSTANCE_00807618;

      UVar6 = st::fn_00403684(local_10,(char)local_c,0);
      pcVar8_mg10 = st::fn_006B0140(UVar6,pHVar13);
      uVar9 = 0xffffffff;
      do {
        pcVar10 = pcVar8_mg10;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar10 = pcVar8_mg10 + 1;
        cVar1 = *pcVar8_mg10;
        pcVar8_mg10 = pcVar10;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      pcVar10 = pcVar10 + -uVar9;
      pcVar11 = reinterpret_cast<char *>(&DAT_0080f33a);
      memmove(pcVar11, pcVar10, uVar9); /* compiler REP MOVS byte copy */
      uVar8 = 0;
      for (puVar7 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar7 != nullptr;
          puVar7 = st::fn_0072E560(puVar7,'\n')) {
        *(undefined1 *)puVar7 = 0x20;
      }

      st::fn_007119C0(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,(DAT_0080874e != '\x03') - 1 & 5
                    );
      local_8 = local_8 + 0xf;

      local_EAX_2640 = st::fn_004056F5(local_10,(char)local_c);
      /* ST_CALLSITE[0051749D]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
      pBVar7_mg3 = st::fn_0070B3A0((RecoveredGlobalRecordView_0081175C *)this_00->field_0240,
                                local_EAX_2640);
      /* ST_CALLSITE[005174B5]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0x96,local_8,'\x01',
             reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar7_mg3));
      pBVar4 = local_3c;
      /* ST_CALLSITE[005174D3]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0x94,local_8 - 2,'\x06',
             reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(local_3c));
      local_34 = 0x94;
      local_2c = (pBVar4->bmiHeader).biWidth;
      local_30 = local_8 - 2;
      local_28 = (pBVar4->bmiHeader).biHeight;
      local_23 = local_10;
      local_24 = 2;
      local_1f = local_18;

      st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),&local_34);
      local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
    }
    if (local_14 != 0) {

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      pHVar13 = g_hINSTANCE_00807618;

      UVar6 = st::fn_00403684(local_14,(char)local_c,0);
      pcVar8_mg12 = st::fn_006B0140(UVar6,pHVar13);
      uVar9 = 0xffffffff;
      do {
        pcVar10 = pcVar8_mg12;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar10 = pcVar8_mg12 + 1;
        cVar1 = *pcVar8_mg12;
        pcVar8_mg12 = pcVar10;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      pcVar10 = pcVar10 + -uVar9;
      pcVar11 = reinterpret_cast<char *>(&DAT_0080f33a);
      memmove(pcVar11, pcVar10, uVar9); /* compiler REP MOVS byte copy */
      for (puVar7 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar7 != nullptr;
          puVar7 = st::fn_0072E560(puVar7,'\n')) {
        *(undefined1 *)puVar7 = 0x20;
      }

      st::fn_007119C0(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,(DAT_0080874e != '\x03') - 1 & 5
                    );
      local_8 = local_8 + 0xf;

      local_EAX_2991 = st::fn_004056F5(local_14,(char)local_c);
      /* ST_CALLSITE[005175FC]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
      pBVar7_mg5 = st::fn_0070B3A0((RecoveredGlobalRecordView_0081175C *)this_00->field_023C,
                                local_EAX_2991);
      /* ST_CALLSITE[00517614]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0x96,local_8,'\x01',
             reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar7_mg5));
      pBVar4 = local_3c;
      /* ST_CALLSITE[00517632]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0x94,local_8 - 2,'\x06',
             reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(local_3c));
      local_34 = 0x94;
      local_2c = (pBVar4->bmiHeader).biWidth;
      local_30 = local_8 - 2;
      local_28 = (pBVar4->bmiHeader).biHeight;
      local_23 = local_14;
      local_24 = 3;
      local_1f = local_18;

      st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),&local_34);
      local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
    }
  }
  /* ST_CALLSITE[00517689]: CALL 0x00403576; direct=00403576 thunk_FUN_00528a30; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
  UVar6 = st::fn_00403576(GVar15,param_2);
  /* ST_CALLSITE[00517698]: CALL 0x00402dab; direct=00402DAB HelpPanelTy::DrawDescription */
  st::fn_00402DAB(this_00,reinterpret_cast<int *>(&local_8),UVar6);
  /* ST_CALLSITE[005176AA]: CALL 0x0040506f; direct=0040506F HelpPanelTy::AddLinks */
  st::fn_0040506F(this_00,reinterpret_cast<int *>(&local_8),'\x05',param_1,local_38);
  g_currentExceptionFrame = local_88.previous;
  return;
}

// 00517A50 HelpPanelTy::RCProc
#line 4 "decomp/ST.exe/functions/00517A50/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::RCProc */

void __thiscall st::fn_00517A50(HelpPanelTy *this,int param_1,uint param_2,char param_3)

{
  alignas(4) byte st_stack_frame[148];

  char cVar1;
  HelpPanelTy_field_01A1State HVar2;
  HelpPanelTy *this_00;
  BITMAPINFO *pBVar4;
  int iVar4;
  UINT UVar5;
  char *pcVar5_mg1;
  char *pcVar5_mg2;
  char *pcVar5_mg3;
  char *pcVar5_mg0;
  uint *puVar6;
  uint uVar18;
  BITMAPINFO *pBVar7_mg1;
  char *pcVar5_mg5;
  char *pcVar5_mg6;
  char *pcVar5_mg8;
  char *pcVar5_mg7;
  uint local_EAX_1380;
  BITMAPINFO *pBVar7_mg3;
  char *pcVar5_mgA;
  char *pcVar5_mgB;
  uint local_EAX_1813;
  BITMAPINFO *pBVar7_mg5;
  char *pcVar5_mgD;
  char *pcVar5_mgE;
  char *pcVar5_mg10;
  char *pcVar5_mgF;
  int uVar17;
  char *pcVar5_mg12;
  char *pcVar5_mg13;
  char *pcVar5_mg15;
  char *pcVar5_mg14;
  uint local_EAX_2923;
  BITMAPINFO *pBVar7;
  char *pcVar5_mg18;
  char *pcVar5_mg17;
  BITMAPINFO *pBVar7_mg8;
  uint local_EAX_3381;
  BITMAPINFO *pBVar7_mg9;
  int iVar14;
  uint uVar8;
  ushort uVar9;
  AnonShape_00517A50_98726C61 *pAVar10;
  char *pcVar11;
  Global_sub_00526BA0_param_1Enum *pGVar12;
  char *pcVar13;
  int iVar15;
  byte bVar16;
  int iVar17;
  uint uVar19;
  HINSTANCE pHVar20;
  InternalExceptionFrame *pIVar21;
  int local_7c [16];
  uint local_3c;
  uint local_38;
  LONG local_34;
  LONG local_30;
  byte local_2c;
  Global_sub_00526BA0_param_1Enum local_2b;
  uint local_27;
  HelpPanelTy *local_20;
  int local_1c;
  char *local_18;
  Global_sub_00526BA0_param_1Enum *local_14;
  BITMAPINFO *local_10;
  AnonShape_00517A50_98726C61 *local_c;
  uint local_8;
  InternalExceptionFrame *pIVar21_mg0;

  pAVar10 = nullptr;
  local_8 = 0;
  local_c = nullptr;
  local_20 = this;
  local_10 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this->field_0248),4);
  uVar9 = 0;
  do {
    if ((*(int *)((int)&DAT_007c3469 + (uint)uVar9 * 0x27) == param_1) &&
       ((byte)(&DAT_007c3468)[(uint)uVar9 * 0x27] == param_2)) {
      pAVar10 = reinterpret_cast<AnonShape_00517A50_98726C61 *>((&DAT_007c3468 + (uint)uVar9 * 0x27));
      local_c = pAVar10;
      break;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0xb);
  if (pAVar10 != nullptr) {
    pIVar21_mg0 = g_currentExceptionFrame;
    g_currentExceptionFrame = reinterpret_cast<InternalExceptionFrame *>((st_stack_frame + 16));

    iVar4 = st::fn_0072D7F0(local_7c,0);
    this_00 = local_20;
    if (iVar4 == 0) {
      if (param_3 == '\0') {
        HVar2 = local_20->field_01A1;
        if (((HVar2 == 0) || (HVar2 == CASE_6)) || (HVar2 == CASE_A)) {
          local_20->field_01A2 = HVar2;
          local_20->field_01AB = st::machine_word_boundary_cast<undefined4>(local_20->field_01A3);
        }
        else {
          local_20->field_01A2 = 0;
          local_20->field_01AB = 0;
        }
        STPiece<0,2>(iVar15) = local_20->field_0178;
        STPiece<2,2>(iVar15) = local_20->field_017A;
        local_20->field_01A1 = CASE_1;
        local_20->field_01A3 = (void *)param_1;
        local_20->field_01A7 = param_2;
        local_20->field_01AF = 0x32;
        local_20->field_01B1 = 5;
        if (iVar15 != 0) {
          local_20->field_0028 = 0x4202;
          *(undefined2 *)&local_20->field_0x2c = 0;
          *(undefined2 *)&local_20->field_0x2e = 2;
          local_20->field_0030 = (undefined2)iVar15;
          local_20->field_0032 = STPiece<2,2>(iVar15);
          if (g_cursorClass_00802A30 != nullptr) {
            /* ST_CALLSITE[00517B91]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
            g_cursorClass_00802A30->GetMessage((STMessage *)&local_20->field_0x18);
          }
        }
      }

      UVar5 = st::fn_004019BF(param_1);
      /* ST_CALLSITE[00517BAD]: CALL 0x00403ef9; direct=00403EF9 HelpPanelTy::DrawTitle */
      st::fn_00403EF9(this_00,0x55fe,param_2,UVar5);
      bVar16 = (byte)param_2;
      /* ST_CALLSITE[00517BBC]: CALL 0x00403d78; direct=00403D78 HelpPanelTy::DrawObj */
      st::fn_00403D78(this_00,reinterpret_cast<int *>(&local_8),(STAllPlayersC_GetTOBJImage_param_2Enum *)param_1,bVar16,0);

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar19 = 3;
      iVar17 = -1;
      iVar15 = -3;
      /* ST_CALLSITE[00517BF4]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar5_mg1 = st::fn_006B0140(0x5627,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar5_mg1,iVar15,iVar17,uVar19);

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
      pAVar10 = local_c;
      uVar19 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar17 = -1;
      iVar15 = 1;
      /* ST_CALLSITE[00517C4E]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar5_mg2 = st::fn_006B0140(local_c->field_0005,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar5_mg2,iVar15,iVar17,uVar19);
      local_8 = local_8 + 0xf;

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar19 = 3;
      iVar17 = -1;
      iVar15 = -3;
      /* ST_CALLSITE[00517C98]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar5_mg3 = st::fn_006B0140(0x5628,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar5_mg3,iVar15,iVar17,uVar19);

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
      pHVar20 = g_hINSTANCE_00807618;

      UVar5 = st::fn_00403684(pAVar10->field_0009,bVar16,0);
      pcVar5_mg0 = st::fn_006B0140(UVar5,pHVar20);
      uVar19 = 0xffffffff;
      do {
        pcVar11 = pcVar5_mg0;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar11 = pcVar5_mg0 + 1;
        cVar1 = *pcVar5_mg0;
        pcVar5_mg0 = pcVar11;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      pcVar11 = pcVar11 + -uVar19;
      pcVar13 = reinterpret_cast<char *>(&DAT_0080f33a);
      memmove(pcVar13, pcVar11, uVar19); /* compiler REP MOVS byte copy */
      uVar8 = 0;
      for (puVar6 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar6 != nullptr;
          puVar6 = st::fn_0072E560(puVar6,'\n')) {
        *(undefined1 *)puVar6 = 0x20;
      }

      st::fn_007119C0(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,(DAT_0080874e != '\x03') - 1 & 5
                    );
      pAVar10 = local_c;
      local_8 = local_8 + 0xf;

      uVar18 = st::fn_004056F5(local_c->field_0009,*(char *)local_c);
      /* ST_CALLSITE[00517D77]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
      pBVar7_mg1 = st::fn_0070B3A0((RecoveredGlobalRecordView_0081175C *)this_00->field_0240,uVar18);
      /* ST_CALLSITE[00517D8F]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0xcd,local_8,'\x01',
             reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar7_mg1));
      pBVar4 = local_10;
      /* ST_CALLSITE[00517DAD]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0xcb,local_8 - 2,'\x06',
             reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(local_10));
      local_3c = 0xcb;
      local_34 = (pBVar4->bmiHeader).biWidth;
      local_38 = local_8 - 2;
      local_30 = (pBVar4->bmiHeader).biHeight;
      local_2c = 2;
      local_2b = pAVar10->field_0009;
      local_27 = param_2;

      st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),&local_3c);
      local_8 = local_8 + (pBVar4->bmiHeader).biHeight;

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar19 = 3;
      iVar17 = -1;
      iVar15 = -3;
      /* ST_CALLSITE[00517E2C]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar5_mg5 = st::fn_006B0140(0x5629,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar5_mg5,iVar15,iVar17,uVar19);

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
      uVar19 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar17 = -1;
      iVar15 = 1;
      /* ST_CALLSITE[00517E8A]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar5_mg6 = st::fn_006B0140(0x273f - (pAVar10->field_000D != 0),g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar5_mg6,iVar15,iVar17,uVar19);
      local_8 = local_8 + 0xf;
      if (pAVar10->field_000D != 0) {

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
        uVar19 = 3;
        iVar17 = -1;
        iVar15 = -3;
        /* ST_CALLSITE[00517EDF]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar5_mg8 = st::fn_006B0140(0x562a,g_hINSTANCE_00807618);

        st::fn_007119C0(this_00->field_01E0,pcVar5_mg8,iVar15,iVar17,uVar19);

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
        pHVar20 = g_hINSTANCE_00807618;

        UVar5 = st::fn_00403684(pAVar10->field_000D,bVar16,0);
        pcVar5_mg7 = st::fn_006B0140(UVar5,pHVar20);
        uVar19 = 0xffffffff;
        do {
          pcVar11 = pcVar5_mg7;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar11 = pcVar5_mg7 + 1;
          cVar1 = *pcVar5_mg7;
          pcVar5_mg7 = pcVar11;
        } while (cVar1 != '\0');
        uVar19 = ~uVar19;
        pcVar11 = pcVar11 + -uVar19;
        pcVar13 = reinterpret_cast<char *>(&DAT_0080f33a);
        memmove(pcVar13, pcVar11, uVar19); /* compiler REP MOVS byte copy */
        uVar8 = 0;
        for (puVar6 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar6 != nullptr;
            puVar6 = st::fn_0072E560(puVar6,'\n')) {
          *(undefined1 *)puVar6 = 0x20;
        }

        st::fn_007119C0(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,
                       (DAT_0080874e != '\x03') - 1 & 5);
        pAVar10 = local_c;
        local_8 = local_8 + 0xf;

        local_EAX_1380 = st::fn_004056F5(local_c->field_000D,*(char *)local_c);
        /* ST_CALLSITE[00517FC1]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
        pBVar7_mg3 = st::fn_0070B3A0((RecoveredGlobalRecordView_0081175C *)this_00->field_023C,
                                  local_EAX_1380);
        /* ST_CALLSITE[00517FD9]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0xcd,local_8,'\x01',
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar7_mg3));
        pBVar4 = local_10;
        /* ST_CALLSITE[00517FF4]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0xcd,local_8,'\x06',
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(local_10));
        local_3c = 0xcd;
        local_34 = (pBVar4->bmiHeader).biWidth;
        local_38 = local_8;
        local_30 = (pBVar4->bmiHeader).biHeight;
        local_2c = 3;
        local_2b = pAVar10->field_000D;
        local_27 = (uint)*(byte *)pAVar10;

        st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),&local_3c);
        local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
      }

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar19 = 3;
      iVar17 = -1;
      iVar15 = -3;
      /* ST_CALLSITE[00518073]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar5_mgA = st::fn_006B0140(0x562b,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar5_mgA,iVar15,iVar17,uVar19);
      local_18 = (char *)&pAVar10->field_0x19;
      pGVar12 = reinterpret_cast<Global_sub_00526BA0_param_1Enum *>(&pAVar10->field_0x11);
      local_1c = 2;
      do {
        local_14 = pGVar12;
        if (*pGVar12 != 0) {

          st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
          pHVar20 = g_hINSTANCE_00807618;

          UVar5 = st::fn_00403684(*pGVar12,bVar16,0);
          pcVar5_mgB = st::fn_006B0140(UVar5,pHVar20);
          uVar19 = 0xffffffff;
          do {
            pcVar11 = pcVar5_mgB;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar11 = pcVar5_mgB + 1;
            cVar1 = *pcVar5_mgB;
            pcVar5_mgB = pcVar11;
          } while (cVar1 != '\0');
          uVar19 = ~uVar19;
          pcVar11 = pcVar11 + -uVar19;
          pcVar13 = reinterpret_cast<char *>(&DAT_0080f33a);
          memmove(pcVar13, pcVar11, uVar19); /* compiler REP MOVS byte copy */
          uVar8 = 0;
          for (puVar6 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar6 != nullptr;
              puVar6 = st::fn_0072E560(puVar6,'\n')) {
            *(undefined1 *)puVar6 = 0x20;
          }

          st::fn_007119C0(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,
                         (DAT_0080874e != '\x03') - 1 & 5);
          pGVar12 = local_14;
          local_8 = local_8 + 0xf;

          local_EAX_1813 = st::fn_004056F5(*local_14,*(char *)local_c);
          /* ST_CALLSITE[00518172]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
          pBVar7_mg5 = st::fn_0070B3A0((RecoveredGlobalRecordView_0081175C *)this_00->field_0240,
                                    local_EAX_1813);
          /* ST_CALLSITE[0051818A]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0xcd,local_8,'\x01',
                 reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar7_mg5));
          pBVar4 = local_10;
          /* ST_CALLSITE[005181A8]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0xcb,local_8 - 2,'\x06',
                 reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(local_10));
          local_3c = 0xcb;
          local_34 = (pBVar4->bmiHeader).biWidth;
          local_38 = local_8 - 2;
          local_30 = (pBVar4->bmiHeader).biHeight;
          local_2c = 2;
          local_2b = *pGVar12;
          local_27 = (uint)*(byte *)local_c;

          st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),&local_3c);
          local_8 = local_8 + (pBVar4->bmiHeader).biHeight;

          st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
          pIVar21 = (InternalExceptionFrame *)0x3;
          iVar17 = -1;
          iVar15 = -3;
          /* ST_CALLSITE[00518229]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
          pcVar5_mgD = st::fn_006B0140(0x562c,g_hINSTANCE_00807618);

          st::fn_007119C0(this_00->field_01E0,pcVar5_mgD,iVar15,iVar17,(uint)pIVar21);

          st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
          pIVar21_mg0 = (InternalExceptionFrame *)((DAT_0080874e != '\x03') - 1 & 5);
          iVar17 = -1;
          iVar15 = 1;
          /* ST_CALLSITE[0051828D]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
          pcVar5_mgE = st::fn_006B0140((-(uint)(*local_18 != '\0') & 0xffffffef) + 0x5641,
                                          g_hINSTANCE_00807618);

          st::fn_007119C0(this_00->field_01E0,pcVar5_mgE,iVar15,iVar17,(uint)pIVar21_mg0);
          local_8 = local_8 + 0xf;
          pAVar10 = local_c;
        }
        pGVar12 = local_14 + 1;
        local_18 = local_18 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
      local_14 = pGVar12;

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar19 = 3;
      iVar17 = -1;
      iVar15 = -3;
      /* ST_CALLSITE[005182F9]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar5_mg10 = st::fn_006B0140(0x562d,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar5_mg10,iVar15,iVar17,uVar19);
      pcVar5_mgF = st::fn_006B0140(*(UINT *)&pAVar10->field_0x1b,g_hINSTANCE_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar11 = pcVar5_mgF;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar11 = pcVar5_mgF + 1;
        cVar1 = *pcVar5_mgF;
        pcVar5_mgF = pcVar11;
      } while (cVar1 != '\0');
      uVar19 = ~uVar19;
      pcVar11 = pcVar11 + -uVar19;
      pcVar13 = reinterpret_cast<char *>(&DAT_0080f33a);
      memmove(pcVar13, pcVar11, uVar19); /* compiler REP MOVS byte copy */
      uVar8 = 0;
      st::fn_00712C10(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),&DAT_0080f33a,
                        st::mutable_c_string(" ,.;:!?/\\()[]{}"),0xcf,1);

      uVar17 = st::fn_007113E0(this_00->field_01E0,&DAT_0080f33a);
      /* ST_CALLSITE[00518376]: CALL 0x00401870; direct=00401870 HelpPanelTy::CheckBkView */
      st::fn_00401870(this_00,local_8,(ushort)uVar17);
      uVar19 = uVar17 & 0xffff;

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,uVar19 + 2);

      st::fn_00711B70(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,(DAT_0080874e != '\x03') - 1 & 5
                     ,-1,-1);
      if ((ushort)uVar17 < 0x10) {
        uVar19 = 0xf;
      }
      local_8 = local_8 + uVar19;

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar19 = 3;
      iVar17 = -1;
      iVar15 = -3;
      /* ST_CALLSITE[00518415]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar5_mg12 = st::fn_006B0140(0x562e,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar5_mg12,iVar15,iVar17,uVar19);

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
      pAVar10 = local_c;
      uVar19 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar17 = -1;
      iVar15 = 1;
      /* ST_CALLSITE[00518478]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar5_mg13 = st::fn_006B0140(0x273f - (local_c->field_001F != 0),g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar5_mg13,iVar15,iVar17,uVar19);
      local_8 = local_8 + 0xf;
      if (pAVar10->field_001F != 0) {
        /* ST_CALLSITE[005184A2]: CALL 0x00401870; direct=00401870 HelpPanelTy::CheckBkView */
        st::fn_00401870(this_00,local_8,0xf);

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
        uVar19 = 3;
        iVar17 = -1;
        iVar15 = -3;
        /* ST_CALLSITE[005184D9]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar5_mg15 = st::fn_006B0140(0x562a,g_hINSTANCE_00807618);

        st::fn_007119C0(this_00->field_01E0,pcVar5_mg15,iVar15,iVar17,uVar19);

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
        pHVar20 = g_hINSTANCE_00807618;

        UVar5 = st::fn_00403684(pAVar10->field_001F,bVar16,0);
        pcVar5_mg14 = st::fn_006B0140(UVar5,pHVar20);
        uVar19 = 0xffffffff;
        do {
          pcVar11 = pcVar5_mg14;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar11 = pcVar5_mg14 + 1;
          cVar1 = *pcVar5_mg14;
          pcVar5_mg14 = pcVar11;
        } while (cVar1 != '\0');
        uVar19 = ~uVar19;
        pcVar11 = pcVar11 + -uVar19;
        pcVar13 = reinterpret_cast<char *>(&DAT_0080f33a);
        memmove(pcVar13, pcVar11, uVar19); /* compiler REP MOVS byte copy */
        uVar8 = 0;
        for (puVar6 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar6 != nullptr;
            puVar6 = st::fn_0072E560(puVar6,'\n')) {
          *(undefined1 *)puVar6 = 0x20;
        }

        st::fn_007119C0(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,
                       (DAT_0080874e != '\x03') - 1 & 5);
        pBVar4 = local_10;
        local_8 = local_8 + 0xf;
        /* ST_CALLSITE[005185AC]: CALL 0x00401870; direct=00401870 HelpPanelTy::CheckBkView */
        st::fn_00401870(this_00,local_8,(ushort)(local_10->bmiHeader).biHeight);
        pAVar10 = local_c;

        local_EAX_2923 = st::fn_004056F5(local_c->field_001F,*(char *)local_c);
        /* ST_CALLSITE[005185C8]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
        pBVar7 = st::fn_0070B3A0((RecoveredGlobalRecordView_0081175C *)this_00->field_023C,
                              local_EAX_2923);
        /* ST_CALLSITE[005185E0]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0xcd,local_8,'\x01',
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar7));
        /* ST_CALLSITE[005185F8]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0xcd,local_8,'\x06',
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar4));
        local_3c = 0xcd;
        local_34 = (pBVar4->bmiHeader).biWidth;
        local_38 = local_8;
        local_30 = (pBVar4->bmiHeader).biHeight;
        local_2c = 0xb;
        local_2b = pAVar10->field_001F;
        local_27 = (uint)*(byte *)pAVar10;

        st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),&local_3c);
        local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
      }
      if (pAVar10->field_0023 != 0) {
        /* ST_CALLSITE[00518657]: CALL 0x00401870; direct=00401870 HelpPanelTy::CheckBkView */
        st::fn_00401870(this_00,local_8,0xf);

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
        uVar19 = 3;
        iVar17 = -1;
        iVar15 = -3;
        /* ST_CALLSITE[0051868F]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar5_mg18 = st::fn_006B0140(0x562f,g_hINSTANCE_00807618);

        st::fn_007119C0(this_00->field_01E0,pcVar5_mg18,iVar15,iVar17,uVar19);

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
        pHVar20 = g_hINSTANCE_00807618;

        UVar5 = st::fn_00403684(pAVar10->field_0023,bVar16,0);
        pcVar5_mg17 = st::fn_006B0140(UVar5,pHVar20);
        uVar19 = 0xffffffff;
        do {
          pcVar11 = pcVar5_mg17;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar11 = pcVar5_mg17 + 1;
          cVar1 = *pcVar5_mg17;
          pcVar5_mg17 = pcVar11;
        } while (cVar1 != '\0');
        uVar19 = ~uVar19;
        pcVar11 = pcVar11 + -uVar19;
        pcVar13 = reinterpret_cast<char *>(&DAT_0080f33a);
        memmove(pcVar13, pcVar11, uVar19); /* compiler REP MOVS byte copy */
        for (puVar6 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar6 != nullptr;
            puVar6 = st::fn_0072E560(puVar6,'\n')) {
          *(undefined1 *)puVar6 = 0x20;
        }

        st::fn_007119C0(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,
                       (DAT_0080874e != '\x03') - 1 & 5);
        local_8 = local_8 + 0xf;
        pBVar7_mg8 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0248),4);
        /* ST_CALLSITE[00518776]: CALL 0x00401870; direct=00401870 HelpPanelTy::CheckBkView */
        st::fn_00401870(this_00,local_8,(ushort)(pBVar7_mg8->bmiHeader).biHeight);
        pAVar10 = local_c;

        local_EAX_3381 = st::fn_004056F5(local_c->field_0023,*(char *)local_c);
        /* ST_CALLSITE[00518792]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
        pBVar7_mg9 = st::fn_0070B3A0((RecoveredGlobalRecordView_0081175C *)this_00->field_0240,
                                  local_EAX_3381);
        /* ST_CALLSITE[005187AA]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0xcd,local_8,'\x01',
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar7_mg9));
        pBVar4 = local_10;
        /* ST_CALLSITE[005187C8]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0xcb,local_8 - 2,'\x06',
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(local_10));
        local_3c = 0xcb;
        local_34 = (pBVar4->bmiHeader).biWidth;
        local_38 = local_8 - 2;
        local_30 = (pBVar4->bmiHeader).biHeight;
        local_2c = 2;
        local_2b = pAVar10->field_0023;
        local_27 = (uint)*(byte *)pAVar10;

        st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),&local_3c);
        local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
      }
      /* ST_CALLSITE[00518828]: CALL 0x0040506f; direct=0040506F HelpPanelTy::AddLinks */
      st::fn_0040506F(this_00,reinterpret_cast<int *>(&local_8),'\x01',param_1,param_2);
      g_currentExceptionFrame = pIVar21_mg0;
      return;
    }
    g_currentExceptionFrame = pIVar21_mg0;

    iVar14 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x5f8,0,iVar4,
                                st::mutable_c_string("%s"),"HelpPanelTy::RCProc");
    if (iVar14 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x5f8);
  }
  return;
}

// 00518C20 HelpPanelTy::SubProc
#line 4 "decomp/ST.exe/functions/00518C20/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::SubProc */

void __thiscall st::fn_00518C20(HelpPanelTy *this,int param_1,char param_2)

{
  uint32_t _local_20;

  HelpPanelTy_field_01A1State HVar1;
  HelpPanelTy *this_00;
  Global_sub_00528060_param_1Enum *pGVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int local_EAX_243;
  UINT UVar6;
  char *pcVar7;
  BITMAPINFO *pBVar8;
  int iVar12;
  int *piVar9;
  bool bVar10;
  HINSTANCE pHVar11;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  InternalExceptionFrame local_a4;
  uint local_60;
  uint local_5c;
  LONG local_58;
  LONG local_54;
  byte local_50;
  uint local_4f;
  uint local_4b;
  int local_44;
  HelpPanelTy *local_40;
  uint local_3c;
  uint local_38;
  LONG local_34;
  LONG local_30;
  byte local_2c;
  int local_2b;
  uint local_27;
  char local_20;
  undefined3 uStack_1f;
  uint local_1c;
  Global_sub_00528060_param_1Enum *local_18;
  AnonShape_00518C20_0B2995D2 *local_14;
  char local_d;
  UINT local_c;
  uint local_8;

  local_8 = 0;
  local_d = '\0';
  if (g_allPlayers_007FA174 != nullptr) {
    local_a4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a4;
    local_40 = this;

    iVar6 = st::fn_0072D7F0(local_a4.jumpBuffer,0);
    this_00 = local_40;
    if (iVar6 == 0) {
      if (param_2 == '\0') {
        HVar1 = local_40->field_01A1;
        if (((HVar1 == 0) || (HVar1 == CASE_6)) || (HVar1 == CASE_A)) {
          local_40->field_01A2 = HVar1;
          local_40->field_01AB = st::machine_word_boundary_cast<undefined4>(local_40->field_01A3);
        }
        else {
          local_40->field_01A2 = 0;
          local_40->field_01AB = 0;
        }
        STPiece<0,2>(iVar13) = local_40->field_0178;
        STPiece<2,2>(iVar13) = local_40->field_017A;
        local_40->field_01A1 = CASE_3;
        local_40->field_01A3 = (void *)param_1;
        local_40->field_01AF = 0x32;
        local_40->field_01B1 = 5;
        if (iVar13 != 0) {
          local_40->field_0028 = 0x4202;
          *(undefined2 *)&local_40->field_0x2c = 0;
          *(undefined2 *)&local_40->field_0x2e = 2;
          local_40->field_0030 = (undefined2)iVar13;
          local_40->field_0032 = STPiece<2,2>(iVar13);
          if (g_cursorClass_00802A30 != nullptr) {
            /* ST_CALLSITE[00518D05]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
            g_cursorClass_00802A30->GetMessage((STMessage *)&local_40->field_0x18);
          }
        }
      }

      local_EAX_243 = st::fn_00401F5A(param_1);
      cVar5 = (char)local_EAX_243;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_20 = CONCAT31(uStack_1f,cVar5);
      local_1c = local_EAX_243 & 0xff;

      UVar6 = st::fn_00403684(param_1,cVar5,0);
      /* ST_CALLSITE[00518D43]: CALL 0x00403ef9; direct=00403EF9 HelpPanelTy::DrawTitle */
      st::fn_00403EF9(this_00,0x55fb,local_1c,UVar6);
      /* ST_CALLSITE[00518D5A]: CALL 0x00403d78; direct=00403D78 HelpPanelTy::DrawObj */
      st::fn_00403D78(this_00,reinterpret_cast<int *>(&local_8),(STAllPlayersC_GetTOBJImage_param_2Enum *)param_1,
              (byte)_local_20,this_00->field_023C);

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar16 = 3;
      iVar14 = -1;
      iVar13 = -1;
      /* ST_CALLSITE[00518D92]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(0x564a,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      local_8 = local_8 + 0xf;
      local_c = 0;

      iVar13 = st::fn_006B0FD0(0x801450);
      if (iVar13 == 0) {

        iVar13 = st::fn_006B0FD0(0x801480);
        if (iVar13 == 0) {

          iVar13 = st::fn_006B0FD0(0x800f10);
          if (iVar13 != 0) {
            local_c = 0x3aa2;
          }
        }
        else {
          local_c = 0x3aa0;
        }
      }
      else {
        local_c = 0x3a9f;
      }
      if (local_c != 0) {

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar16 = 3;
        iVar14 = -1;
        iVar13 = -3;
        /* ST_CALLSITE[00518E4F]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar7 = st::fn_006B0140(0x5654,g_hINSTANCE_00807618);

        st::fn_007119C0(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar14 = -1;
        iVar13 = 1;
        /* ST_CALLSITE[00518EA6]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar7 = st::fn_006B0140(local_c,g_hINSTANCE_00807618);

        st::fn_007119C0(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
        local_8 = local_8 + 0xf;
      }

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 3;
      iVar14 = -1;
      iVar13 = -3;
      /* ST_CALLSITE[00518EED]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(0x5656,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      if (local_1c == 1) {
        UVar6 = 0x5604;
      }
      else if (local_1c == 2) {
        UVar6 = 0x5605;
      }
      else {
        UVar6 = 0x5606;
      }
      uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar13 = 1;
      /* ST_CALLSITE[00518F5D]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(UVar6,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      local_8 = local_8 + 0xf;
      local_14 = nullptr;

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 3;
      iVar14 = -1;
      iVar13 = -3;
      /* ST_CALLSITE[00518FAE]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(0x55f7,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      if (cVar5 == '\x03') {
        local_c = *(UINT *)(&DAT_007e09dc + param_1 * 4);
      }
      else {
        local_c = *(UINT *)(&DAT_007e079c + param_1 * 4);
      }
      if (local_c != 0) {

        st::fn_00710A90(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
        /* ST_CALLSITE[0051901A]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%4d"),local_c);

        st::fn_007119C0(this_00->field_01E8,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        /* ST_CALLSITE[00519062]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; source view only; no Ghidra override */
        pBVar8 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0238),
                              (-(uint)(cVar5 != '\x03') & 0xfffffffe) + 3);
        st::fn_006B5440(reinterpret_cast<ushort *>(this_00->field_0218),0,0xb4,local_8,reinterpret_cast<tagBITMAPINFO *>(pBVar8),0,0x3a);
        local_3c = 0xb4;
        local_34 = (pBVar8->bmiHeader).biWidth;
        local_38 = local_8;
        local_30 = (pBVar8->bmiHeader).biHeight;
        local_2b = (-(uint)(cVar5 != '\x03') & 0xfffffffc) + 0xe2;
        local_2c = 1;
        local_27 = local_1c;

        st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),&local_3c);
        local_8 = local_8 + 0x14;
        local_14 = (AnonShape_00518C20_0B2995D2 *)0x1;
      }
      local_c = *(UINT *)(&DAT_007e055c + param_1 * 4);
      if (local_c != 0) {

        st::fn_00710A90(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
        /* ST_CALLSITE[00519129]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%4d"),local_c);

        st::fn_007119C0(this_00->field_01E8,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,
                       (DAT_0080874e != '\x03') - 1 & 4);
        local_14 = (AnonShape_00518C20_0B2995D2 *)
                   /* ST_CALLSITE[00519162]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; source view only; no Ghidra override */
                   st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0238),0);
        st::fn_006B5440(reinterpret_cast<ushort *>(this_00->field_0218),0,0xb4,local_8,reinterpret_cast<tagBITMAPINFO *>(local_14),0,0x3a);
        local_3c = 0xb4;
        local_34 = local_14->field_0004;
        local_38 = local_8;
        local_30 = local_14->field_0008;
        local_2c = 1;
        local_2b = 0xdd;
        local_27 = local_1c;

        st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),&local_3c);
        local_14 = (AnonShape_00518C20_0B2995D2 *)0x1;
        local_8 = local_8 + 0x14;
      }
      local_c = *(UINT *)(&DAT_00854428 + param_1 * 4);
      if (local_c != 0) {

        st::fn_00710A90(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
        /* ST_CALLSITE[0051921A]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%4d"),local_c);

        st::fn_007119C0(this_00->field_01E8,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 6);
        local_14 = (AnonShape_00518C20_0B2995D2 *)
                   /* ST_CALLSITE[00519251]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; source view only; no Ghidra override */
                   st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0238),2);
        st::fn_006B5440(reinterpret_cast<ushort *>(this_00->field_0218),0,0xb4,local_8,reinterpret_cast<tagBITMAPINFO *>(local_14),0,0x3a);
        local_3c = 0xb4;
        local_34 = local_14->field_0004;
        local_38 = local_8;
        local_30 = local_14->field_0008;
        local_2c = 1;
        local_2b = 0xdd;
        local_27 = local_1c;

        st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),&local_3c);
        local_14 = (AnonShape_00518C20_0B2995D2 *)0x1;
        local_8 = local_8 + 0x14;
      }
      if (local_14 == nullptr) {
        local_8 = local_8 + 0xf;
      }
      local_c = 1;
      local_14 = (AnonShape_00518C20_0B2995D2 *)0x1;
      local_44 = param_1 * 3;
      do {
        local_18 = reinterpret_cast<Global_sub_00528060_param_1Enum *>(&DAT_007c0dd1 + local_44 + ((uint)local_14 & 0xffff));
        if (*local_18 == CASE_0) break;
        if (local_c != 0) {

          st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
          uVar16 = 3;
          iVar14 = -1;
          iVar13 = -3;
          /* ST_CALLSITE[00519338]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
          pcVar7 = st::fn_006B0140(0x5657,g_hINSTANCE_00807618);

          st::fn_007119C0(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
          local_c = 0;
        }

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        pGVar3 = local_18;
        uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar14 = -1;
        iVar13 = 1;
        pHVar11 = g_hINSTANCE_00807618;

        UVar6 = st::fn_00404B29(*local_18,'\0');
        /* ST_CALLSITE[005193A2]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar7 = st::fn_006B0140(UVar6,pHVar11);

        st::fn_007119C0(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
        local_8 = local_8 + 0xf;

        iVar13 = st::fn_004033F0(*pGVar3,0);
        /* ST_CALLSITE[005193CE]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
        pBVar8 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0230),iVar13);
        /* ST_CALLSITE[005193E8]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0x96,local_8,'\x01',
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar8));
        local_60 = 0x96;
        local_58 = (pBVar8->bmiHeader).biWidth;
        local_5c = local_8;
        local_54 = (pBVar8->bmiHeader).biHeight;
        local_4f = (uint)*local_18;
        local_50 = 5;
        local_4b = 0;

        st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),&local_60);
        local_8 = local_8 + 5 + (pBVar8->bmiHeader).biHeight;
        local_14 = reinterpret_cast<AnonShape_00518C20_0B2995D2 *>(reinterpret_cast<byte *>(local_14) + 0x1);
      } while ((ushort)local_14 < 3);

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar16 = 3;
      iVar14 = -1;
      iVar13 = -1;
      /* ST_CALLSITE[0051947F]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(0x564b,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      local_8 = local_8 + 0xf;

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar13 = 1;
      /* ST_CALLSITE[005194DD]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(0x564c,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      /* ST_CALLSITE[00519521]: CALL dword ptr [0x0085bde8] */
      st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%d"),*(undefined4 *)(&DAT_007dfbac + param_1 * 4));

      st::fn_007119C0(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),-3,-1,2);
      local_8 = local_8 + 0xf;

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar13 = 1;
      /* ST_CALLSITE[0051958D]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(0x5658,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      piVar9 = reinterpret_cast<int *>(&DAT_007dfc70);
      local_c = DAT_007dfc70;
      local_18 = (Global_sub_00528060_param_1Enum *)0x28;
      iVar13 = DAT_007dfc70;
      do {
        if (*piVar9 < (int)local_c) {
          local_c = *piVar9;
        }
        if (iVar13 < *piVar9) {
          iVar13 = *piVar9;
        }
        piVar9 = piVar9 + 1;
        local_18 = (Global_sub_00528060_param_1Enum *)((int)local_18 + -1);
      } while (local_18 != nullptr);
      iVar13 = st::storage_bit_cast<int>(static_cast<uint32_t>(iVar13 - local_c)) / 3;
      if (*(int *)(&DAT_007dfc6c + param_1 * 4) < st::storage_bit_cast<int>(static_cast<uint32_t>(local_c + iVar13))) {
        local_c = 0x5615;
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_c = (*(int *)(&DAT_007dfc6c + param_1 * 4) < st::storage_bit_cast<int>(static_cast<uint32_t>(local_c + iVar13 * 2))) + 0x5613;
      }

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 2;
      iVar14 = -1;
      iVar13 = -3;
      /* ST_CALLSITE[00519643]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(local_c,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      local_8 = local_8 + 0xf;

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar13 = 1;
      /* ST_CALLSITE[005196A1]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(0x564d,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      piVar9 = reinterpret_cast<int *>(&DAT_007e04a0);
      local_c = DAT_007e04a0;
      local_18 = (Global_sub_00528060_param_1Enum *)0x28;
      iVar13 = DAT_007e04a0;
      do {
        if (*piVar9 < (int)local_c) {
          local_c = *piVar9;
        }
        if (iVar13 < *piVar9) {
          iVar13 = *piVar9;
        }
        piVar9 = piVar9 + 1;
        local_18 = (Global_sub_00528060_param_1Enum *)((int)local_18 + -1);
      } while (local_18 != nullptr);
      iVar13 = st::storage_bit_cast<int>(static_cast<uint32_t>((iVar13 - local_c) + ((int)(iVar13 - local_c) >> 0x1f & 3U))) >> 2;
      if (*(int *)(&DAT_007e049c + param_1 * 4) < st::storage_bit_cast<int>(static_cast<uint32_t>(local_c + iVar13))) {
        local_c = 0x5613;
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_c = ((st::storage_bit_cast<int>(static_cast<uint32_t>(local_c + iVar13 * 2)) <= *(int *)(&DAT_007e049c + param_1 * 4)) - 1 &
                  0xfffffffe) + 0x5616;
      }

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 2;
      iVar14 = -1;
      iVar13 = -3;
      /* ST_CALLSITE[00519754]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(local_c,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      local_8 = local_8 + 0xf;
      /* ST_CALLSITE[0051978D]: CALL 0x00403f17; direct=00403F17 HelpPanelTy::DrawWeapon */
      iVar13 = st::fn_00403F17(this_00,0x96,reinterpret_cast<int *>(&local_8),*(int *)(&DAT_007a8b18 + param_1 * 4),
                          *(int *)(&DAT_007a8bb8 + param_1 * 4),(byte)_local_20);
      cVar4 = local_d;
      if ((iVar13 != 0) || (local_d = '\0', cVar4 != '\0')) {
        local_d = '\x01';
      }
      /* ST_CALLSITE[005197C4]: CALL 0x00403f17; direct=00403F17 HelpPanelTy::DrawWeapon */
      iVar13 = st::fn_00403F17(this_00,0x96,reinterpret_cast<int *>(&local_8),*(int *)(&DAT_007a8cf8 + param_1 * 4),
                          *(int *)(&DAT_007a8d98 + param_1 * 4),(byte)_local_20);
      cVar4 = local_d;
      if ((iVar13 != 0) || (local_d = '\0', cVar4 != '\0')) {
        local_d = '\x01';
      }

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar13 = 1;
      /* ST_CALLSITE[00519821]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(0x5659,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 2;
      iVar15 = -1;
      iVar14 = -3;
      pHVar11 = g_hINSTANCE_00807618;

      iVar13 = st::fn_006B0FD0(0x800f10);
      /* ST_CALLSITE[0051987D]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(0x273f - (iVar13 != 0),pHVar11);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar14,iVar15,uVar16);
      local_8 = local_8 + 0xf;

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar13 = 1;
      /* ST_CALLSITE[005198D9]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(0x564e,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 2;
      iVar14 = -1;
      iVar13 = -3;
      /* ST_CALLSITE[00519926]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140((cVar5 != '\x03') + 0x273e,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      local_8 = local_8 + 0xf;
      if (local_d != '\0') {
        bVar10 = false;
        if (*(int *)(&DAT_007a8b18 + param_1 * 4) != 0) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          bVar10 = (&DAT_007bf678)[*(int *)(&DAT_007a8b18 + param_1 * 4) * 3 + -0x1c2] != 0;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((*(int *)(&DAT_007a8cf8 + param_1 * 4) != 0) &&
           ((bVar10 || ((&DAT_007bf678)[*(int *)(&DAT_007a8cf8 + param_1 * 4) * 3 + -0x1c2] != 0))))
        {
          bVar10 = true;
        }

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar14 = -1;
        iVar13 = 1;
        /* ST_CALLSITE[005199DD]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar7 = st::fn_006B0140(0x564f,g_hINSTANCE_00807618);

        st::fn_007119C0(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar16 = 2;
        iVar14 = -1;
        iVar13 = -3;
        /* ST_CALLSITE[00519A27]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar7 = st::fn_006B0140(0x273f - bVar10,g_hINSTANCE_00807618);

        st::fn_007119C0(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
        local_8 = local_8 + 0xf;
      }

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar13 = 1;
      /* ST_CALLSITE[00519A88]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(0x5650,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      local_c = *(UINT *)(&DAT_007e085c + param_1 * 4);

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 2;
      iVar14 = -1;
      iVar13 = -3;
      /* ST_CALLSITE[00519ADF]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(0x273f - (local_c != 0),g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);
      local_8 = local_8 + 0xf;
      if (local_c != 0) {

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar14 = -1;
        iVar13 = 1;
        /* ST_CALLSITE[00519B47]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar7 = st::fn_006B0140(0x5651,g_hINSTANCE_00807618);

        st::fn_007119C0(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar16);

        st::fn_00710A90(this_00->field_01E8,(int)this_00->field_0218,0,0x5f,local_8 - 3,0x16,0x14);
        /* ST_CALLSITE[00519B87]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%4d"),local_c);

        st::fn_007119C0(this_00->field_01E8,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        /* ST_CALLSITE[00519BCF]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; source view only; no Ghidra override */
        pBVar8 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0238),
                              (-(uint)(cVar5 != '\x03') & 0xfffffffe) + 3);
        st::fn_006B5440(reinterpret_cast<ushort *>(this_00->field_0218),0,0x7a,local_8,reinterpret_cast<tagBITMAPINFO *>(pBVar8),0,0x3a);
        local_3c = 0x7a;
        local_34 = (pBVar8->bmiHeader).biWidth;
        local_38 = local_8;
        local_30 = (pBVar8->bmiHeader).biHeight;
        local_2b = (-(uint)(cVar5 != '\x03') & 0xfffffffc) + 0xe2;
        local_2c = 1;
        local_27 = local_1c;

        st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),&local_3c);
        local_8 = local_8 + 0x14;
      }
      /* ST_CALLSITE[00519C4B]: CALL 0x00403684; direct=00403684 thunk_FUN_00523410; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
      UVar6 = st::fn_00403684(param_1,(char)_local_20,2);
      /* ST_CALLSITE[00519C5A]: CALL 0x00402dab; direct=00402DAB HelpPanelTy::DrawDescription */
      st::fn_00402DAB(this_00,reinterpret_cast<int *>(&local_8),UVar6);
      /* ST_CALLSITE[00519C6A]: CALL 0x0040506f; direct=0040506F HelpPanelTy::AddLinks */
      st::fn_0040506F(this_00,reinterpret_cast<int *>(&local_8),'\x03',param_1,0);
      g_currentExceptionFrame = local_a4.previous;
      return;
    }
    g_currentExceptionFrame = local_a4.previous;

    iVar12 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x6f4,0,iVar6,
                                st::mutable_c_string("%s"),"HelpPanelTy::SubProc");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x6f4);
  }
  return;
}

// 0051A100 HelpPanelTy::ObjProc
#line 4 "decomp/ST.exe/functions/0051A100/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::ObjProc */

void __thiscall st::fn_0051A100(HelpPanelTy *this,int param_1,uint param_2,char param_3)

{
  Global_sub_00528060_param_1Enum *pGVar1;
  HelpPanelTy_field_01A1State HVar2;
  HelpPanelTy *this_00;
  char cVar4;
  ushort uVar5;
  int iVar6;
  UINT UVar6;
  char *pcVar7;
  BITMAPINFO *pBVar8;
  int iVar12;
  bool bVar9;
  HINSTANCE module;
  int iVar10;
  byte bVar11;
  int iVar13;
  int iVar14;
  uint uVar15;
  InternalExceptionFrame local_a0;
  uint local_5c;
  uint local_58;
  LONG local_54;
  LONG local_50;
  byte local_4c;
  uint local_4b;
  uint local_47;
  HelpPanelTy *local_40;
  Global_sub_00528060_param_1Enum *local_3c;
  uint local_38;
  uint local_34;
  LONG local_30;
  LONG local_2c;
  byte local_28;
  int local_27;
  uint local_23;
  int *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  char local_9;
  uint local_8;

  local_8 = 0;
  local_9 = '\0';
  if (g_allPlayers_007FA174 != nullptr) {
    local_a0.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a0;
    local_40 = this;

    iVar6 = st::fn_0072D7F0(local_a0.jumpBuffer,0);
    this_00 = local_40;
    if (iVar6 == 0) {
      if (param_3 == '\0') {
        HVar2 = local_40->field_01A1;
        if (((HVar2 == 0) || (HVar2 == CASE_6)) || (HVar2 == CASE_A)) {
          local_40->field_01A2 = HVar2;
          local_40->field_01AB = st::machine_word_boundary_cast<undefined4>(local_40->field_01A3);
        }
        else {
          local_40->field_01A2 = 0;
          local_40->field_01AB = 0;
        }
        STPiece<0,2>(iVar10) = local_40->field_0178;
        STPiece<2,2>(iVar10) = local_40->field_017A;
        local_40->field_01A1 = CASE_2;
        local_40->field_01A3 = (void *)param_1;
        local_40->field_01A7 = param_2;
        local_40->field_01AF = 0x32;
        local_40->field_01B1 = 5;
        if (iVar10 != 0) {
          local_40->field_0028 = 0x4202;
          *(undefined2 *)&local_40->field_0x2c = 0;
          *(undefined2 *)&local_40->field_0x2e = 2;
          local_40->field_0030 = (undefined2)iVar10;
          local_40->field_0032 = STPiece<2,2>(iVar10);
          if (g_cursorClass_00802A30 != nullptr) {
            /* ST_CALLSITE[0051A1F2]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
            g_cursorClass_00802A30->GetMessage((STMessage *)&local_40->field_0x18);
          }
        }
      }
      bVar11 = (byte)param_2;

      UVar6 = st::fn_00403684(param_1,bVar11,0);
      /* ST_CALLSITE[0051A20E]: CALL 0x00403ef9; direct=00403EF9 HelpPanelTy::DrawTitle */
      st::fn_00403EF9(this_00,0x55fa,param_2,UVar6);
      /* ST_CALLSITE[0051A222]: CALL 0x00403d78; direct=00403D78 HelpPanelTy::DrawObj */
      st::fn_00403D78(this_00,reinterpret_cast<int *>(&local_8),(STAllPlayersC_GetTOBJImage_param_2Enum *)param_1,bVar11,
              this_00->field_0240);

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar10 = -1;
      /* ST_CALLSITE[0051A25A]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(0x564a,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);
      local_8 = local_8 + 0xf;
      UVar6 = 0;

      iVar10 = st::fn_006B0FD0(0x8014a0);
      if (iVar10 == 0) {

        iVar10 = st::fn_006B0FD0(0x800f90);
        if (iVar10 == 0) {

          iVar10 = st::fn_006B0FD0(0x801360);
          if (iVar10 == 0) {

            iVar10 = st::fn_006B0FD0(0x800f80);
            if (iVar10 != 0) {
              UVar6 = 0x3a9d;
            }
          }
          else {
            UVar6 = 0x3aa8;
          }
        }
        else {
          UVar6 = 0x3a9c;
        }
      }
      else {
        UVar6 = 0x3a9b;
      }
      if (UVar6 != 0) {

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar15 = 3;
        iVar13 = -1;
        iVar10 = -3;
        /* ST_CALLSITE[0051A332]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar7 = st::fn_006B0140(0x5654,g_hINSTANCE_00807618);

        st::fn_007119C0(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar13 = -1;
        iVar10 = 1;
        /* ST_CALLSITE[0051A386]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar7 = st::fn_006B0140(UVar6,g_hINSTANCE_00807618);

        st::fn_007119C0(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);
        local_8 = local_8 + 0xf;
      }

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar10 = -3;
      /* ST_CALLSITE[0051A3CE]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(0x5656,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      if (param_2 == 1) {
        UVar6 = 0x5604;
      }
      else if (param_2 == 2) {
        UVar6 = 0x5605;
      }
      else {
        UVar6 = 0x5606;
      }
      uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar10 = 1;
      /* ST_CALLSITE[0051A43D]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(UVar6,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);
      local_8 = local_8 + 0xf;

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar10 = -3;
      /* ST_CALLSITE[0051A487]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(0x55f7,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);
      local_14 = param_1 * 3;
      if (param_2 == 3) {
        iVar10 = *(int *)(&DAT_007e2f10 + param_1 * 0xc);
      }
      else {
        iVar10 = *(int *)(&DAT_007e22a0 + (local_14 + param_2) * 4);
      }
      if (iVar10 != 0) {

        st::fn_00710A90(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
        /* ST_CALLSITE[0051A4F4]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%4d"),iVar10);

        st::fn_007119C0(this_00->field_01E8,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        /* ST_CALLSITE[0051A53C]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; source view only; no Ghidra override */
        pBVar8 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0238),
                              (-(uint)(param_2 != 3) & 0xfffffffe) + 3);
        st::fn_006B5440(reinterpret_cast<ushort *>(this_00->field_0218),0,0xb4,local_8,reinterpret_cast<tagBITMAPINFO *>(pBVar8),0,0x3a);
        local_38 = 0xb4;
        local_30 = (pBVar8->bmiHeader).biWidth;
        local_34 = local_8;
        local_2c = (pBVar8->bmiHeader).biHeight;
        local_27 = (-(uint)(param_2 != 3) & 0xfffffffc) + 0xe2;
        local_28 = 1;
        local_23 = param_2;

        st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),&local_38);
        local_8 = local_8 + 0x14;
      }
      local_14 = local_14 + -0x97 + param_2;
      iVar13 = *(int *)(&DAT_007e1c50 + local_14 * 4);
      if (iVar13 != 0) {

        st::fn_00710A90(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
        /* ST_CALLSITE[0051A603]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%4d"),iVar13);

        st::fn_007119C0(this_00->field_01E8,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,
                       (DAT_0080874e != '\x03') - 1 & 4);
        /* ST_CALLSITE[0051A63A]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; source view only; no Ghidra override */
        pBVar8 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0238),0);
        st::fn_006B5440(reinterpret_cast<ushort *>(this_00->field_0218),0,0xb4,local_8,reinterpret_cast<tagBITMAPINFO *>(pBVar8),0,0x3a);
        local_38 = 0xb4;
        local_30 = (pBVar8->bmiHeader).biWidth;
        local_34 = local_8;
        local_2c = (pBVar8->bmiHeader).biHeight;
        local_28 = 1;
        local_27 = 0xdd;
        local_23 = param_2;

        st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),&local_38);
        local_8 = local_8 + 0x14;
      }
      iVar14 = *(int *)(&DAT_008545ac + local_14 * 4);
      if (iVar14 != 0) {

        st::fn_00710A90(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
        /* ST_CALLSITE[0051A6E6]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%4d"),iVar14);

        st::fn_007119C0(this_00->field_01E8,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 6);
        /* ST_CALLSITE[0051A720]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; source view only; no Ghidra override */
        pBVar8 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0238),2);
        st::fn_006B5440(reinterpret_cast<ushort *>(this_00->field_0218),0,0xb4,local_8,reinterpret_cast<tagBITMAPINFO *>(pBVar8),0,0x3a);
        local_38 = 0xb4;
        local_30 = (pBVar8->bmiHeader).biWidth;
        local_34 = local_8;
        local_2c = (pBVar8->bmiHeader).biHeight;
        local_28 = 1;
        local_27 = 0xdc;
        local_23 = param_2;

        st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),&local_38);
        local_8 = local_8 + 0x14;
      }
      if (iVar14 == 0 && (iVar13 == 0 && iVar10 == 0)) {
        local_8 = local_8 + 0xf;
      }
      local_1c = (int *)0x1;
      local_10 = 1;
      local_18 = (param_1 + -0x74 + param_2 * 0x42) * 3;
      do {
        pGVar1 = reinterpret_cast<Global_sub_00528060_param_1Enum *>(&DAT_007c0e4c + local_18 + (local_10 & 0xffff));
        local_3c = pGVar1;
        if (*pGVar1 == CASE_0) break;
        if (local_1c != nullptr) {

          st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
          uVar15 = 3;
          iVar13 = -1;
          iVar10 = -3;
          /* ST_CALLSITE[0051A80A]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
          pcVar7 = st::fn_006B0140(0x5657,g_hINSTANCE_00807618);

          st::fn_007119C0(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);
          local_1c = nullptr;
        }

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar13 = -1;
        iVar10 = 1;
        module = g_hINSTANCE_00807618;

        UVar6 = st::fn_00404B29(*pGVar1,'\0');
        /* ST_CALLSITE[0051A872]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar7 = st::fn_006B0140(UVar6,module);

        st::fn_007119C0(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);
        local_8 = local_8 + 0xf;

        iVar10 = st::fn_004033F0(*pGVar1,0);
        /* ST_CALLSITE[0051A89E]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
        pBVar8 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0230),iVar10);
        /* ST_CALLSITE[0051A8B8]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0x96,local_8,'\x01',
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar8));
        local_5c = 0x96;
        local_54 = (pBVar8->bmiHeader).biWidth;
        local_58 = local_8;
        local_50 = (pBVar8->bmiHeader).biHeight;
        local_4b = (uint)*local_3c;
        local_4c = 5;
        local_47 = 0;

        st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),&local_5c);
        local_10 = local_10 + 1;
        local_8 = local_8 + 5 + (pBVar8->bmiHeader).biHeight;
      } while ((ushort)local_10 < 3);

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar10 = -1;
      /* ST_CALLSITE[0051A94C]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(0x564b,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);
      local_8 = local_8 + 0xf;

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar10 = 1;
      /* ST_CALLSITE[0051A9AA]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(0x564c,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      iVar13 = local_14;
      /* ST_CALLSITE[0051A9F1]: CALL dword ptr [0x0085bde8] */
      st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%d"),*(undefined4 *)(&DAT_007e417c + local_14 * 4));

      st::fn_007119C0(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),-3,-1,2);
      local_8 = local_8 + 0xf;

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar10 = 1;
      /* ST_CALLSITE[0051AA5D]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(0x564d,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar10,iVar14,uVar15);
      iVar10 = *(int *)(&DAT_007e3dc0 + param_2 * 4);
      local_1c = reinterpret_cast<int *>((&DAT_007e3dc0 + param_2 * 4));
      local_18 = 0x42;
      local_10 = iVar10;
      do {
        iVar14 = *local_1c;
        if (iVar14 < (int)local_10) {
          local_10 = iVar14;
        }
        if (iVar10 < iVar14) {
          iVar10 = iVar14;
        }
        local_1c = local_1c + 3;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      iVar10 = st::storage_bit_cast<int>(static_cast<uint32_t>((iVar10 - local_10) + ((int)(iVar10 - local_10) >> 0x1f & 3U))) >> 2;
      if (*(int *)(&DAT_007e3dc4 + iVar13 * 4) < st::storage_bit_cast<int>(static_cast<uint32_t>(local_10 + iVar10))) {
        local_10 = 0x5613;
      }
      else {
        local_10 = ((st::storage_bit_cast<int>(static_cast<uint32_t>(local_10 + iVar10 * 2)) <= *(int *)(&DAT_007e3dc4 + iVar13 * 4)) - 1 &
                   0xfffffffe) + 0x5616;
      }

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar14 = -1;
      iVar10 = -3;
      /* ST_CALLSITE[0051AB20]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(local_10,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar10,iVar14,uVar15);
      local_8 = local_8 + 0xf;

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar10 = 1;
      /* ST_CALLSITE[0051AB7B]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(0x565a,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar10,iVar14,uVar15);

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar14 = -1;
      iVar10 = -3;
      /* ST_CALLSITE[0051ABCB]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(0x273f - (*(int *)(&DAT_00791b18 + iVar13 * 4) != 0),
                                  g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar10,iVar14,uVar15);
      local_8 = local_8 + 0xf;
      iVar10 = param_1 + -0x32;
      if (*(int *)(&DAT_00793e28 + iVar10 * 8) == 0) {
        iVar14 = 0;
      }
      else {
        iVar14 = *(int *)(&DAT_00794038 + iVar10 * 8);
      }
      local_18 = iVar10 * 0x18;
      /* ST_CALLSITE[0051AC1E]: CALL 0x00403f17; direct=00403F17 HelpPanelTy::DrawWeapon */
      iVar10 = st::fn_00403F17(this_00,0x96,reinterpret_cast<int *>(&local_8),(&DAT_00792ca0)[iVar10 * 6],iVar14,bVar11);
      cVar4 = local_9;
      if ((iVar10 != 0) || (local_9 = '\0', cVar4 != '\0')) {
        local_9 = '\x01';
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(&DAT_00793e2c + (param_1 + -0x32) * 8) == 0) {
        iVar10 = 0;
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar10 = *(int *)(&DAT_0079403c + (param_1 + -0x32) * 8);
      }
      /* ST_CALLSITE[0051AC69]: CALL 0x00403f17; direct=00403F17 HelpPanelTy::DrawWeapon */
      iVar10 = st::fn_00403F17(this_00,0x96,reinterpret_cast<int *>(&local_8),*(int *)((int)&DAT_00792cac + local_18),
                          iVar10,bVar11);
      cVar4 = local_9;
      if ((iVar10 != 0) || (local_9 = '\0', cVar4 != '\0')) {
        local_9 = '\x01';
      }

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar10 = 1;
      /* ST_CALLSITE[0051ACC5]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(0x564e,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar10,iVar14,uVar15);

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar14 = -1;
      iVar10 = -3;
      /* ST_CALLSITE[0051AD12]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140((param_2 != 3) + 0x273e,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar10,iVar14,uVar15);
      local_8 = local_8 + 0xf;
      if (local_9 != '\0') {
        bVar9 = false;

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar13 = -1;
        iVar10 = 1;
        /* ST_CALLSITE[0051AD7E]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar7 = st::fn_006B0140(0x564f,g_hINSTANCE_00807618);

        st::fn_007119C0(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        if (*(int *)((int)&DAT_00792ca0 + local_18) != 0) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          bVar9 = (&DAT_007bf678)[*(int *)((int)&DAT_00792ca0 + local_18) * 3 + -0x1c2] != 0;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((*(int *)((int)&DAT_00792cac + local_18) != 0) &&
           ((bVar9 || ((&DAT_007bf678)[*(int *)((int)&DAT_00792cac + local_18) * 3 + -0x1c2] != 0)))
           ) {
          bVar9 = true;
        }
        uVar15 = 2;
        iVar13 = -1;
        iVar10 = -3;
        /* ST_CALLSITE[0051AE0F]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar7 = st::fn_006B0140(0x273f - bVar9,g_hINSTANCE_00807618);

        st::fn_007119C0(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);
        local_8 = local_8 + 0xf;
        iVar13 = local_14;
      }
      if (param_2 != 3) {

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar14 = -1;
        iVar10 = 1;
        /* ST_CALLSITE[0051AE79]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar7 = st::fn_006B0140(0x5650,g_hINSTANCE_00807618);

        st::fn_007119C0(this_00->field_01E0,pcVar7,iVar10,iVar14,uVar15);
        iVar10 = *(int *)(&DAT_007e29f0 + iVar13 * 4);

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar15 = 2;
        iVar14 = -1;
        iVar13 = -3;
        /* ST_CALLSITE[0051AECB]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar7 = st::fn_006B0140(0x273f - (iVar10 != 0),g_hINSTANCE_00807618);

        st::fn_007119C0(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar15);
        local_8 = local_8 + 0xf;
        iVar13 = local_14;
        if (iVar10 != 0) {

          st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
          uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar14 = -1;
          iVar13 = 1;
          /* ST_CALLSITE[0051AF31]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
          pcVar7 = st::fn_006B0140(0x5651,g_hINSTANCE_00807618);

          st::fn_007119C0(this_00->field_01E0,pcVar7,iVar13,iVar14,uVar15);

          st::fn_00710A90(this_00->field_01E8,(int)this_00->field_0218,0,0x5f,local_8 - 3,0x16,0x14
                          );
          /* ST_CALLSITE[0051AF6E]: CALL dword ptr [0x0085bde8] */
          st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%4d"),iVar10);

          st::fn_007119C0(this_00->field_01E8,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
          /* ST_CALLSITE[0051AFA8]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; source view only; no Ghidra override */
          pBVar8 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0238),1);
          st::fn_006B5440(reinterpret_cast<ushort *>(this_00->field_0218),0,0x7a,local_8,reinterpret_cast<tagBITMAPINFO *>(pBVar8),0,0x3a);
          local_38 = 0x7a;
          local_30 = (pBVar8->bmiHeader).biWidth;
          local_34 = local_8;
          local_2c = (pBVar8->bmiHeader).biHeight;
          local_28 = 1;
          local_27 = 0xde;
          local_23 = param_2;

          st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),&local_38);
          local_8 = local_8 + 0x14;
          iVar13 = local_14;
        }
      }

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar14 = -1;
      iVar10 = 1;
      /* ST_CALLSITE[0051B050]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(0x565b,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar10,iVar14,uVar15);
      local_10 = 0;
      uVar5 = 0;
      do {
        if ((&DAT_007e1988)[iVar13 * 3 + (uint)uVar5] != '\0') {
          local_10 = 0x273e;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 3);
      if (local_10 == 0) {
        local_10 = 0x273f;
      }

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar13 = -1;
      iVar10 = -3;
      /* ST_CALLSITE[0051B0D0]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7 = st::fn_006B0140(local_10,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7,iVar10,iVar13,uVar15);
      local_8 = local_8 + 0xf;
      /* ST_CALLSITE[0051B0F1]: CALL 0x00403684; direct=00403684 thunk_FUN_00523410; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
      UVar6 = st::fn_00403684(param_1,bVar11,2);
      /* ST_CALLSITE[0051B100]: CALL 0x00402dab; direct=00402DAB HelpPanelTy::DrawDescription */
      st::fn_00402DAB(this_00,reinterpret_cast<int *>(&local_8),UVar6);
      /* ST_CALLSITE[0051B10F]: CALL 0x0040506f; direct=0040506F HelpPanelTy::AddLinks */
      st::fn_0040506F(this_00,reinterpret_cast<int *>(&local_8),'\x02',param_1,param_2);
      g_currentExceptionFrame = local_a0.previous;
      return;
    }
    g_currentExceptionFrame = local_a0.previous;

    iVar12 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x7ec,0,iVar6,
                                st::mutable_c_string("%s"),"HelpPanelTy::ObjProc");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x7ec);
  }
  return;
}

// 0051B5A0 HelpPanelTy::ArmProc
#line 4 "decomp/ST.exe/functions/0051B5A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::ArmProc

   [STSwitchEnumApplier] Switch target field_06F7 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06F7State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40;CASE_31=49;CASE_32=50;CASE_34=52
    */

void __thiscall st::fn_0051B5A0(HelpPanelTy *this,int param_1,int param_2,char param_3)

{
  alignas(4) byte st_stack_frame[184];

  char cVar1;
  HelpPanelTy_field_01A1State HVar2;
  HelpPanelTy *this_00;
  BITMAPINFO *pBVar4;
  int local_EAX_88;
  UINT UVar5;
  uint local_EAX_296;
  BITMAPINFO *pBVar5_mg0;
  char *pcVar6_mg0;
  int iVar4;
  char *pcVar6_mg4;
  char *pcVar7_mg3;
  char *pcVar6_mg3;
  char *pcVar7_mg2;
  char *pcVar6_mg2;
  char *pcVar7_mg1;
  char *pcVar6_mg1;
  char *pcVar7_mg0;
  int local_EAX_917;
  char *pcVar6_mg5;
  char *pcVar6_mg6;
  uint uVar6;
  BITMAPINFO *pBVar5_mg1;
  char *pcVar6_mg7;
  BITMAPINFO *pBVar5_mg2;
  char *pcVar6_mg8;
  char *pcVar6_mg9;
  char *pcVar6_mgA;
  char *pcVar6_mgB;
  char *pcVar6_mgC;
  char *pcVar6_mgD;
  uint *puVar6;
  uint local_EAX_2416;
  BITMAPINFO *pBVar5_mg4;
  char *pcVar6_mgF;
  int local_EAX_2664;
  char *pcVar6_mg10;
  uint local_EAX_2872;
  BITMAPINFO *pBVar5_mg6;
  int local_EAX_3080;
  char *pcVar6_mg12;
  uint local_EAX_3288;
  BITMAPINFO *pBVar5_mg8;
  int local_EAX_3503;
  char *pcVar6_mg14;
  uint local_EAX_3708;
  BITMAPINFO *pBVar5_mgA;
  int iVar17;
  uint uVar7;
  char *pcVar8;
  STBoatC_field_06F7State SVar9;
  int *piVar10;
  char *pcVar11;
  HINSTANCE pHVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar18;
  Global_sub_005259B0_param_1Enum GVar19;
  uint uVar20;
  InternalExceptionFrame *element;
  int local_a0 [16];
  uint local_60;
  uint local_5c;
  LONG local_58;
  LONG local_54;
  byte local_50;
  uint local_4f;
  uint local_4b;
  HelpPanelTy *local_44;
  int local_40;
  int local_3c;
  BITMAPINFO *local_38;
  InternalExceptionFrame *local_34;
  uint local_30;
  LONG local_2c;
  LONG local_28;
  byte local_24;
  STBoatC_field_06F7State local_23;
  int local_1f;
  int local_18;
  int *local_14;
  char local_d;
  STBoatC_field_06F7State local_c;
  uint local_8;

  local_8 = 0;
  local_44 = this;
  local_38 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this->field_0248),4);
  if (g_allPlayers_007FA174 != nullptr) {
    element = g_currentExceptionFrame;
    g_currentExceptionFrame = reinterpret_cast<InternalExceptionFrame *>((st_stack_frame + 16));

    local_EAX_88 = st::fn_0072D7F0(local_a0,0);
    this_00 = local_44;
    if (local_EAX_88 == 0) {
      if (param_3 == '\0') {
        HVar2 = local_44->field_01A1;
        if (((HVar2 == 0) || (HVar2 == CASE_6)) || (HVar2 == CASE_A)) {
          local_44->field_01A2 = HVar2;
          local_44->field_01AB = st::machine_word_boundary_cast<undefined4>(local_44->field_01A3);
        }
        else {
          local_44->field_01A2 = 0;
          local_44->field_01AB = 0;
        }
        STPiece<0,2>(iVar14) = local_44->field_0178;
        STPiece<2,2>(iVar14) = local_44->field_017A;
        local_44->field_01A1 = CASE_4;
        local_44->field_01A3 = (void *)param_1;
        local_44->field_01A7 = param_2;
        local_44->field_01AF = 0x32;
        local_44->field_01B1 = 5;
        if (iVar14 != 0) {
          local_44->field_0028 = 0x4202;
          *(undefined2 *)&local_44->field_0x2c = 0;
          *(undefined2 *)&local_44->field_0x2e = 2;
          local_44->field_0030 = (undefined2)iVar14;
          local_44->field_0032 = STPiece<2,2>(iVar14);
          if (g_cursorClass_00802A30 != nullptr) {
            /* ST_CALLSITE[0051B6AA]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
            g_cursorClass_00802A30->GetMessage((STMessage *)&local_44->field_0x18);
          }
        }
      }
      GVar19 = (Global_sub_005259B0_param_1Enum)param_1;

      UVar5 = st::fn_00404494(GVar19);
      /* ST_CALLSITE[0051B6BE]: CALL 0x00403ef9; direct=00403EF9 HelpPanelTy::DrawTitle */
      st::fn_00403EF9(this_00,0x55fd,param_2,UVar5);

      local_EAX_296 = st::fn_0040137F(GVar19,0,'\x01');
      /* ST_CALLSITE[0051B6D5]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
      pBVar5_mg0 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0244),
                                local_EAX_296);
      if (pBVar5_mg0 != nullptr) {
        /* ST_CALLSITE[0051B6FF]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0068),0x35,
               (0x1e - (pBVar5_mg0->bmiHeader).biHeight) / 2 + 0x2a,'\x06',
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar5_mg0));
      }

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar20 = 3;
      iVar16 = -1;
      iVar14 = -3;
      /* ST_CALLSITE[0051B73A]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar6_mg0 = st::fn_006B0140(0x55f8,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar6_mg0,iVar14,iVar16,uVar20);
      iVar14 = 0;

      iVar4 = st::fn_00405C72(param_1);
      if (0 < iVar4) {
        do {

          iVar16 = st::fn_0040273E(param_1,iVar14,reinterpret_cast<undefined4 *>(&local_c),reinterpret_cast<undefined4 *>(&local_14),reinterpret_cast<undefined4 *>(&local_18));
          if (iVar16 != 0) {

            st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
            if ((local_14 == nullptr) || (local_18 == 0)) {
              if (iVar14 == 0) {
                pcVar6_mg1 = st::fn_006B0140(0x565c,g_hINSTANCE_00807618);
                uVar15 = 2;
                pcVar7_mg0 = st::fn_006B0140(0x564c,g_hINSTANCE_00807618);
                /* ST_CALLSITE[0051B911]: CALL EDI */
                st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("&%d%d &%d%s &%d(%s)"),2,local_c,
                          (DAT_0080874e != '\x03') - 1 & 5,pcVar7_mg0,uVar15,pcVar6_mg1);
              }
              else {
                pcVar6_mg2 = st::fn_006B0140(0x565d,g_hINSTANCE_00807618);
                uVar15 = 2;
                iVar16 = iVar14;
                pcVar7_mg1 = st::fn_006B0140(0x564c,g_hINSTANCE_00807618);
                /* ST_CALLSITE[0051B8C4]: CALL EDI */
                st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("&%d%d &%d%s &%d(%d %s)"),2,local_c,
                          (DAT_0080874e != '\x03') - 1 & 5,pcVar7_mg1,uVar15,iVar16,pcVar6_mg2);
              }
            }
            else if (iVar14 == 0) {
              pcVar6_mg3 = st::fn_006B0140(0x565c,g_hINSTANCE_00807618);
              uVar15 = 2;
              pcVar7_mg2 = st::fn_006B0140(0x564c,g_hINSTANCE_00807618);
              /* ST_CALLSITE[0051B86C]: CALL EDI */
              st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("&%d%d/%d*%d &%d%s &%d(%s)"),2,local_c,local_14
                        ,local_18,(DAT_0080874e != '\x03') - 1 & 5,pcVar7_mg2,uVar15,pcVar6_mg3);
            }
            else {
              pcVar6_mg4 = st::fn_006B0140(0x565d,g_hINSTANCE_00807618);
              uVar15 = 2;
              iVar16 = iVar14;
              pcVar7_mg3 = st::fn_006B0140(0x564c,g_hINSTANCE_00807618);
              /* ST_CALLSITE[0051B818]: CALL EDI */
              st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("&%d%d/%d*%d &%d%s &%d(%d %s)"),2,local_c,
                        local_14,local_18,(DAT_0080874e != '\x03') - 1 & 5,pcVar7_mg3,uVar15,iVar16,
                        pcVar6_mg4);
            }

            st::fn_007119C0(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,0);
            local_8 = local_8 + 0xf;
          }
          iVar14 = iVar14 + 1;

          local_EAX_917 = st::fn_00405C72(param_1);
        } while (iVar14 < local_EAX_917);
      }
      iVar14 = param_1 * 3 + -0x1c2;
      local_14 = (int *)(iVar14 * 4);
      if ((&DAT_007bf67c)[iVar14] != 0) {

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar20 = 3;
        iVar16 = -1;
        iVar14 = -3;
        /* ST_CALLSITE[0051B995]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar6_mg5 = st::fn_006B0140(0x5657,g_hINSTANCE_00807618);

        st::fn_007119C0(this_00->field_01E0,pcVar6_mg5,iVar14,iVar16,uVar20);

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        piVar10 = local_14;
        uVar20 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar16 = -1;
        iVar14 = 1;
        pHVar12 = g_hINSTANCE_00807618;

        UVar5 = st::fn_00404B29(*(Global_sub_00528060_param_1Enum *)
                                    ((int)&DAT_007bf67c + (int)local_14),'\0');
        /* ST_CALLSITE[0051B9FD]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar6_mg6 = st::fn_006B0140(UVar5,pHVar12);

        st::fn_007119C0(this_00->field_01E0,pcVar6_mg6,iVar14,iVar16,uVar20);
        local_8 = local_8 + 0xf;

        uVar6 = st::fn_004033F0(*(Global_sub_005276E0_param_1Enum *)
                                    ((int)&DAT_007bf67c + (int)piVar10),0);
        /* ST_CALLSITE[0051BA2D]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
        pBVar5_mg1 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0230),uVar6);
        /* ST_CALLSITE[0051BA47]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0x96,local_8,'\x01',
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar5_mg1));
        local_60 = 0x96;
        local_58 = (pBVar5_mg1->bmiHeader).biWidth;
        local_5c = local_8;
        local_54 = (pBVar5_mg1->bmiHeader).biHeight;
        local_50 = 5;
        local_4b = 0;
        local_4f = *(undefined4 *)((int)&DAT_007bf67c + (int)local_14);

        st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),&local_60);
        local_8 = local_8 + 5 + (pBVar5_mg1->bmiHeader).biHeight;
      }
      iVar14 = (&DAT_007e6024)[param_1 * 5 + -0x2ee];
      if (iVar14 != 0) {

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar20 = 3;
        iVar18 = -1;
        iVar16 = -3;
        /* ST_CALLSITE[0051BAE8]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar6_mg7 = st::fn_006B0140(0x55f7,g_hINSTANCE_00807618);

        st::fn_007119C0(this_00->field_01E0,pcVar6_mg7,iVar16,iVar18,uVar20);

        st::fn_00710A90(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
        /* ST_CALLSITE[0051BB2B]: CALL EDI */
        st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%4d"),iVar14);

        st::fn_007119C0(this_00->field_01E8,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,
                       (DAT_0080874e != '\x03') - 1 & 4);
        /* ST_CALLSITE[0051BB5E]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; source view only; no Ghidra override */
        pBVar5_mg2 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0238),0);
        st::fn_006B5440(reinterpret_cast<ushort *>(this_00->field_0218),0,0xb4,local_8,reinterpret_cast<tagBITMAPINFO *>(pBVar5_mg2),0,0x3a);
        local_34 = (InternalExceptionFrame *)0xb4;
        local_2c = (pBVar5_mg2->bmiHeader).biWidth;
        local_30 = local_8;
        local_28 = (pBVar5_mg2->bmiHeader).biHeight;
        local_24 = 1;
        local_23 = 0xdd;
        local_1f = param_2;

        st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),&local_34);
        local_8 = local_8 + 0x14;
      }

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      pcVar6_mg8 = st::fn_006B0140(0x5658,g_hINSTANCE_00807618);
      /* ST_CALLSITE[0051BBFF]: CALL EDI */
      st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s:"),pcVar6_mg8);

      st::fn_007119C0(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),-3,-1,3);
      iVar14 = *(int *)(&DAT_007d1fdc + param_1 * 4);
      if (iVar14 == -1) {
        UVar5 = 0x5617;
      }
      else {
        iVar16 = 0;
        piVar10 = reinterpret_cast<int *>(&DAT_007d2234);
        do {
          if (*piVar10 != -1) {
            local_40 = (&DAT_007d2234)[iVar16];
            local_3c = local_40;
            break;
          }
          piVar10 = piVar10 + 1;
          iVar16 = iVar16 + 1;
        } while ((int)piVar10 < 0x7d22e8);
        piVar10 = reinterpret_cast<int *>(&DAT_007d2234);
        do {
          iVar16 = *piVar10;
          if (iVar16 != -1) {
            if (iVar16 < local_3c) {
              local_3c = iVar16;
            }
            if (local_40 < iVar16) {
              local_40 = iVar16;
            }
          }
          piVar10 = piVar10 + 1;
        } while ((int)piVar10 < 0x7d22e8);
        iVar16 = (local_40 - local_3c) / 3;
        if (iVar14 < iVar16 + local_3c) {
          UVar5 = 0x5615;
        }
        else {
          UVar5 = (iVar14 < local_3c + iVar16 * 2) + 0x5613;
        }
      }

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar20 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar16 = -1;
      iVar14 = 1;
      /* ST_CALLSITE[0051BCFA]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar6_mg9 = st::fn_006B0140(UVar5,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar6_mg9,iVar14,iVar16,uVar20);
      local_8 = local_8 + 0xf;

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar20 = 3;
      iVar16 = -1;
      iVar14 = -3;
      /* ST_CALLSITE[0051BD44]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar6_mgA = st::fn_006B0140(0x565e,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar6_mgA,iVar14,iVar16,uVar20);

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar20 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar16 = -1;
      iVar14 = 1;
      /* ST_CALLSITE[0051BDA9]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar6_mgB = st::fn_006B0140(0x273f - (*(int *)("blast_p" + param_1 * 4) != 0),
                                      g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar6_mgB,iVar14,iVar16,uVar20);
      piVar10 = local_14;
      local_8 = local_8 + 0xf;
      cVar13 = (char)param_2;
      if (*(int *)((int)&DAT_007bf678 + (int)local_14) != 0) {
        local_c = CASE_34;

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar20 = 3;
        iVar16 = -1;
        iVar14 = -3;
        /* ST_CALLSITE[0051BE0C]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar6_mgC = st::fn_006B0140(0x565f,g_hINSTANCE_00807618);

        st::fn_007119C0(this_00->field_01E0,pcVar6_mgC,iVar14,iVar16,uVar20);

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        switch(*(undefined4 *)((int)&DAT_007bf678 + (int)piVar10)) {
        case 1:
          local_c = CASE_34;
          break;
        case 2:
          local_c = 0x5b;
          break;
        case 3:
          local_c = 0x44;
          break;
        case 4:
          local_c = 0x4e;
        }
        pHVar12 = g_hINSTANCE_00807618;

        UVar5 = st::fn_00403684(local_c,cVar13,0);
        pcVar6_mgD = st::fn_006B0140(UVar5,pHVar12);
        uVar20 = 0xffffffff;
        do {
          pcVar8 = pcVar6_mgD;
          if (uVar20 == 0) break;
          uVar20 = uVar20 - 1;
          pcVar8 = pcVar6_mgD + 1;
          cVar1 = *pcVar6_mgD;
          pcVar6_mgD = pcVar8;
        } while (cVar1 != '\0');
        uVar20 = ~uVar20;
        pcVar8 = pcVar8 + -uVar20;
        pcVar11 = reinterpret_cast<char *>(&DAT_0080f33a);
        memmove(pcVar11, pcVar8, uVar20); /* compiler REP MOVS byte copy */
        uVar7 = 0;
        for (puVar6 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar6 != nullptr;
            puVar6 = st::fn_0072E560(puVar6,'\n')) {
          *(undefined1 *)puVar6 = 0x20;
        }

        st::fn_007119C0(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,
                       (DAT_0080874e != '\x03') - 1 & 5);
        SVar9 = local_c;
        local_8 = local_8 + 0xf;

        local_EAX_2416 = st::fn_004056F5(local_c,cVar13);
        /* ST_CALLSITE[0051BF1D]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
        pBVar5_mg4 = st::fn_0070B3A0((RecoveredGlobalRecordView_0081175C *)this_00->field_0240,
                                  local_EAX_2416);
        /* ST_CALLSITE[0051BF35]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0x96,local_8,'\x01',
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar5_mg4));
        pBVar4 = local_38;
        /* ST_CALLSITE[0051BF53]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0x94,local_8 - 2,'\x06',
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(local_38));
        local_34 = (InternalExceptionFrame *)0x94;
        local_2c = (pBVar4->bmiHeader).biWidth;
        local_30 = local_8 - 2;
        local_28 = (pBVar4->bmiHeader).biHeight;
        local_24 = 2;
        local_23 = SVar9;
        local_1f = param_2;

        st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),&local_34);
        local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
      }
      local_d = '\0';

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar20 = 3;
      iVar16 = -1;
      iVar14 = -3;
      /* ST_CALLSITE[0051BFD3]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar6_mgF = st::fn_006B0140(0x5660,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar6_mgF,iVar14,iVar16,uVar20);
      local_14 = reinterpret_cast<int *>(&DAT_007a8b1c);
      local_c = CASE_1;
      do {
        SVar9 = local_c;
        if ((*local_14 == param_1) &&

           (local_EAX_2664 = st::fn_00401F5A(local_c), local_EAX_2664 == param_2)) {

          st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
          pHVar12 = g_hINSTANCE_00807618;

          UVar5 = st::fn_00403684(local_c,cVar13,0);
          pcVar6_mg10 = st::fn_006B0140(UVar5,pHVar12);
          uVar20 = 0xffffffff;
          do {
            pcVar8 = pcVar6_mg10;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar8 = pcVar6_mg10 + 1;
            cVar1 = *pcVar6_mg10;
            pcVar6_mg10 = pcVar8;
          } while (cVar1 != '\0');
          uVar20 = ~uVar20;
          pcVar8 = pcVar8 + -uVar20;
          pcVar11 = reinterpret_cast<char *>(&DAT_0080f33a);
          memmove(pcVar11, pcVar8, uVar20); /* compiler REP MOVS byte copy */
          uVar7 = 0;
          for (puVar6 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar6 != nullptr;
              puVar6 = st::fn_0072E560(puVar6,'\n')) {
            *(undefined1 *)puVar6 = 0x20;
          }

          st::fn_007119C0(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,
                         (DAT_0080874e != '\x03') - 1 & 5);
          SVar9 = local_c;
          local_8 = local_8 + 0xf;

          local_EAX_2872 = st::fn_004056F5(local_c,cVar13);
          /* ST_CALLSITE[0051C0E5]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
          pBVar5_mg6 = st::fn_0070B3A0((RecoveredGlobalRecordView_0081175C *)this_00->field_023C,
                                    local_EAX_2872);
          /* ST_CALLSITE[0051C0FD]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0x96,local_8,'\x01',
                 reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar5_mg6));
          pBVar4 = local_38;
          /* ST_CALLSITE[0051C11B]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0x94,local_8 - 2,'\x06',
                 reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(local_38));
          local_34 = (InternalExceptionFrame *)0x94;
          local_2c = (pBVar4->bmiHeader).biWidth;
          local_30 = local_8 - 2;
          local_28 = (pBVar4->bmiHeader).biHeight;
          element = reinterpret_cast<InternalExceptionFrame *>(&local_34);
          local_24 = 3;
          local_23 = SVar9;
          local_1f = param_2;

          st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),element);
          local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
          local_d = '\x01';
        }
        local_14 = local_14 + 1;
        local_c = SVar9 + CASE_1;
      } while ((int)SVar9 < 0x28);
      local_14 = reinterpret_cast<int *>(&DAT_007a8cfc);
      local_c = CASE_1;
      do {
        SVar9 = local_c;
        if ((*local_14 == param_1) &&

           (local_EAX_3080 = st::fn_00401F5A(local_c), local_EAX_3080 == param_2)) {

          st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
          pHVar12 = g_hINSTANCE_00807618;

          UVar5 = st::fn_00403684(local_c,cVar13,0);
          pcVar6_mg12 = st::fn_006B0140(UVar5,pHVar12);
          uVar20 = 0xffffffff;
          do {
            pcVar8 = pcVar6_mg12;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar8 = pcVar6_mg12 + 1;
            cVar1 = *pcVar6_mg12;
            pcVar6_mg12 = pcVar8;
          } while (cVar1 != '\0');
          uVar20 = ~uVar20;
          pcVar8 = pcVar8 + -uVar20;
          pcVar11 = reinterpret_cast<char *>(&DAT_0080f33a);
          memmove(pcVar11, pcVar8, uVar20); /* compiler REP MOVS byte copy */
          uVar7 = 0;
          for (puVar6 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar6 != nullptr;
              puVar6 = st::fn_0072E560(puVar6,'\n')) {
            *(undefined1 *)puVar6 = 0x20;
          }

          st::fn_007119C0(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,
                         (DAT_0080874e != '\x03') - 1 & 5);
          SVar9 = local_c;
          local_8 = local_8 + 0xf;

          local_EAX_3288 = st::fn_004056F5(local_c,cVar13);
          /* ST_CALLSITE[0051C285]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
          pBVar5_mg8 = st::fn_0070B3A0((RecoveredGlobalRecordView_0081175C *)this_00->field_023C,
                                    local_EAX_3288);
          /* ST_CALLSITE[0051C29D]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0x96,local_8,'\x01',
                 reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar5_mg8));
          pBVar4 = local_38;
          /* ST_CALLSITE[0051C2BB]: CALL 0x00403229; direct=00403229 DibPut */
          st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0x94,local_8 - 2,'\x06',
                 reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(local_38));
          local_34 = (InternalExceptionFrame *)0x94;
          local_2c = (pBVar4->bmiHeader).biWidth;
          local_30 = local_8 - 2;
          local_28 = (pBVar4->bmiHeader).biHeight;
          element = reinterpret_cast<InternalExceptionFrame *>(&local_34);
          local_24 = 3;
          local_23 = SVar9;
          local_1f = param_2;

          st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),element);
          local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
          local_d = '\x01';
        }
        local_14 = local_14 + 1;
        local_c = SVar9 + CASE_1;
        if (0x27 < (int)SVar9) {
          piVar10 = reinterpret_cast<int *>(&DAT_00792ca0);
          local_c = CASE_32;
          do {
            local_18 = 2;
            SVar9 = local_c;
            do {
              if ((*piVar10 == param_1) &&

                 (local_14 = piVar10, local_EAX_3503 = st::fn_00401F5A(SVar9),
                 local_EAX_3503 == param_2)) {

                st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,
                                 0xf);
                pHVar12 = g_hINSTANCE_00807618;

                UVar5 = st::fn_00403684(local_c,cVar13,0);
                pcVar6_mg14 = st::fn_006B0140(UVar5,pHVar12);
                uVar20 = 0xffffffff;
                do {
                  pcVar8 = pcVar6_mg14;
                  if (uVar20 == 0) break;
                  uVar20 = uVar20 - 1;
                  pcVar8 = pcVar6_mg14 + 1;
                  cVar1 = *pcVar6_mg14;
                  pcVar6_mg14 = pcVar8;
                } while (cVar1 != '\0');
                uVar20 = ~uVar20;
                pcVar8 = pcVar8 + -uVar20;
                pcVar11 = reinterpret_cast<char *>(&DAT_0080f33a);
                memmove(pcVar11, pcVar8, uVar20); /* compiler REP MOVS byte copy */
                for (puVar6 = st::fn_0072E560(&DAT_0080f33a,'\n');
                    puVar6 != nullptr; puVar6 = st::fn_0072E560(puVar6,'\n')) {
                  *(undefined1 *)puVar6 = 0x20;
                }

                st::fn_007119C0(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,
                               (DAT_0080874e != '\x03') - 1 & 5);
                SVar9 = local_c;
                local_8 = local_8 + 0xf;

                local_EAX_3708 = st::fn_004056F5(local_c,cVar13);
                /* ST_CALLSITE[0051C429]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
                pBVar5_mgA = st::fn_0070B3A0((RecoveredGlobalRecordView_0081175C *)this_00->field_0240,
                                          local_EAX_3708);
                /* ST_CALLSITE[0051C441]: CALL 0x00403229; direct=00403229 DibPut */
                st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0x96,local_8,'\x01',
                       reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar5_mgA));
                pBVar4 = local_38;
                /* ST_CALLSITE[0051C45F]: CALL 0x00403229; direct=00403229 DibPut */
                st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0x94,local_8 - 2,'\x06',
                       reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(local_38));
                local_34 = (InternalExceptionFrame *)0x94;
                local_2c = (pBVar4->bmiHeader).biWidth;
                local_30 = local_8 - 2;
                local_28 = (pBVar4->bmiHeader).biHeight;
                element = reinterpret_cast<InternalExceptionFrame *>(&local_34);
                local_24 = 2;
                local_23 = SVar9;
                local_1f = param_2;

                st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),element);
                local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
                local_d = '\x01';
                SVar9 = local_c;
                piVar10 = local_14;
              }
              piVar10 = piVar10 + 3;
              local_18 = local_18 + -1;
            } while (local_18 != 0);
            local_c = SVar9 + CASE_1;
            if (0x41 < (int)(SVar9 - CASE_31)) {
              if (local_d == '\0') {
                local_8 = local_8 + 0xf;
              }
              local_14 = piVar10;
              /* ST_CALLSITE[0051C4E7]: CALL 0x004039a4; direct=004039A4 thunk_FUN_00525ca0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
              UVar5 = st::fn_004039A4(GVar19);
              /* ST_CALLSITE[0051C4F6]: CALL 0x00402dab; direct=00402DAB HelpPanelTy::DrawDescription */
              st::fn_00402DAB(this_00,reinterpret_cast<int *>(&local_8),UVar5);
              /* ST_CALLSITE[0051C508]: CALL 0x0040506f; direct=0040506F HelpPanelTy::AddLinks */
              st::fn_0040506F(this_00,reinterpret_cast<int *>(&local_8),'\x04',param_1,param_2);
              g_currentExceptionFrame = element;
              return;
            }
          } while( true );
        }
      } while( true );
    }
    g_currentExceptionFrame = element;

    iVar17 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x8c4,0,local_EAX_88,
                                st::mutable_c_string("%s"),"HelpPanelTy::ArmProc");
    if (iVar17 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_88,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x8c4);
  }
  return;
}

// 0051C980 HelpPanelTy::SpecProc
#line 4 "decomp/ST.exe/functions/0051C980/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::SpecProc */

void __thiscall st::fn_0051C980(HelpPanelTy *this,int param_1,int param_2,char param_3)

{
  alignas(4) byte st_stack_frame[136];

  char cVar1;
  HelpPanelTy_field_01A1State HVar2;
  HelpPanelTy *this_00;
  BITMAPINFO *pBVar4;
  Global_sub_00526BA0_param_1Enum GVar5;
  int iVar6_mg0;
  UINT UVar6;
  char *pcVar7_mg0;
  char *pcVar7_mg2;
  char *pcVar7_mg1;
  uint *puVar7;
  uint uVar15;
  BITMAPINFO *pBVar9_mg1;
  char *pcVar7_mg5;
  char *pcVar7_mg4;
  int uVar14;
  char *pcVar7_mg7;
  char *pcVar7_mg8;
  uint local_EAX_1393;
  BITMAPINFO *pBVar9_mg3;
  char *pcVar7_mgA;
  char *pcVar7_mgB;
  char *pcVar7_mgC;
  char *pcVar7_mgD;
  int iVar11_mg9;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  byte bVar12;
  int iVar13;
  uint uVar16;
  HINSTANCE pHVar17;
  InternalExceptionFrame *pIVar18;
  int local_70 [16];
  uint local_30;
  int local_2c;
  LONG local_28;
  LONG local_24;
  byte local_20;
  Global_sub_00526BA0_param_1Enum local_1f;
  int local_1b;
  HelpPanelTy *local_14;
  BITMAPINFO *local_10;
  Global_sub_00526BA0_param_1Enum local_c;
  uint local_8;

  local_8 = 0;
  local_14 = this;
  local_10 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this->field_0248),4);
  if (g_allPlayers_007FA174 != nullptr) {
    pIVar18 = g_currentExceptionFrame;
    g_currentExceptionFrame = reinterpret_cast<InternalExceptionFrame *>((st_stack_frame + 16));

    iVar6_mg0 = st::fn_0072D7F0(local_70,0);
    this_00 = local_14;
    if (iVar6_mg0 == 0) {
      if (param_3 == '\0') {
        HVar2 = local_14->field_01A1;
        if (((HVar2 == 0) || (HVar2 == CASE_6)) || (HVar2 == CASE_A)) {
          local_14->field_01A2 = HVar2;
          local_14->field_01AB = st::machine_word_boundary_cast<undefined4>(local_14->field_01A3);
        }
        else {
          local_14->field_01A2 = 0;
          local_14->field_01AB = 0;
        }
        STPiece<0,2>(iVar11) = local_14->field_0178;
        STPiece<2,2>(iVar11) = local_14->field_017A;
        local_14->field_01A1 = CASE_B;
        local_14->field_01A3 = (void *)param_1;
        local_14->field_01A7 = param_2;
        local_14->field_01AF = 0x32;
        local_14->field_01B1 = 5;
        if (iVar11 != 0) {
          local_14->field_0028 = 0x4202;
          *(undefined2 *)&local_14->field_0x2c = 0;
          *(undefined2 *)&local_14->field_0x2e = 2;
          local_14->field_0030 = (undefined2)iVar11;
          local_14->field_0032 = STPiece<2,2>(iVar11);
          if (g_cursorClass_00802A30 != nullptr) {
            /* ST_CALLSITE[0051CA77]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
            g_cursorClass_00802A30->GetMessage((STMessage *)&local_14->field_0x18);
          }
        }
      }
      bVar12 = (byte)param_2;

      UVar6 = st::fn_00403684(param_1,bVar12,0);
      /* ST_CALLSITE[0051CA96]: CALL 0x00403ef9; direct=00403EF9 HelpPanelTy::DrawTitle */
      st::fn_00403EF9(this_00,0x55ff,param_2,UVar6);
      /* ST_CALLSITE[0051CAAA]: CALL 0x00403d78; direct=00403D78 HelpPanelTy::DrawObj */
      st::fn_00403D78(this_00,reinterpret_cast<int *>(&local_8),(STAllPlayersC_GetTOBJImage_param_2Enum *)param_1,bVar12,
              this_00->field_023C);

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar16 = 3;
      iVar13 = -1;
      iVar11 = -1;
      /* ST_CALLSITE[0051CAE2]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7_mg0 = st::fn_006B0140(0x564a,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7_mg0,iVar11,iVar13,uVar16);
      local_8 = local_8 + 0xf;
      if (param_1 == 0xfe) {

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar16 = 3;
        iVar13 = -1;
        iVar11 = -3;
        /* ST_CALLSITE[0051CB38]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar7_mg2 = st::fn_006B0140(0x5661,g_hINSTANCE_00807618);

        st::fn_007119C0(this_00->field_01E0,pcVar7_mg2,iVar11,iVar13,uVar16);

        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        local_c = (-(uint)(param_2 != 3) & 0xfffffff3) + CASE_5F;
        pHVar17 = g_hINSTANCE_00807618;

        UVar6 = st::fn_00403684(local_c,bVar12,0);
        pcVar7_mg1 = st::fn_006B0140(UVar6,pHVar17);
        uVar16 = 0xffffffff;
        do {
          pcVar9 = pcVar7_mg1;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar9 = pcVar7_mg1 + 1;
          cVar1 = *pcVar7_mg1;
          pcVar7_mg1 = pcVar9;
        } while (cVar1 != '\0');
        uVar16 = ~uVar16;
        pcVar9 = pcVar9 + -uVar16;
        pcVar10 = reinterpret_cast<char *>(&DAT_0080f33a);
        memmove(pcVar10, pcVar9, uVar16); /* compiler REP MOVS byte copy */
        uVar8 = 0;
        for (puVar7 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar7 != nullptr;
            puVar7 = st::fn_0072E560(puVar7,'\n')) {
          *(undefined1 *)puVar7 = 0x20;
        }

        st::fn_007119C0(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,
                       (DAT_0080874e != '\x03') - 1 & 5);
        GVar5 = local_c;
        local_8 = local_8 + 0xf;

        uVar15 = st::fn_004056F5(local_c,bVar12);
        /* ST_CALLSITE[0051CC23]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
        pBVar9_mg1 = st::fn_0070B3A0((RecoveredGlobalRecordView_0081175C *)this_00->field_0240,uVar15);
        /* ST_CALLSITE[0051CC3B]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0x96,local_8,'\x01',
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar9_mg1));
        pBVar4 = local_10;
        /* ST_CALLSITE[0051CC59]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0x94,local_8 - 2,'\x06',
               reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(local_10));
        local_30 = 0x94;
        local_28 = (pBVar4->bmiHeader).biWidth;
        local_2c = local_8 - 2;
        local_24 = (pBVar4->bmiHeader).biHeight;
        local_20 = 2;
        local_1f = GVar5;
        local_1b = param_2;

        st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),&local_30);
        local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
      }

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 3;
      iVar13 = -1;
      iVar11 = -3;
      /* ST_CALLSITE[0051CCDB]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7_mg5 = st::fn_006B0140(0x5655,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7_mg5,iVar11,iVar13,uVar16);
      pHVar17 = g_hINSTANCE_00807618;

      UVar6 = st::fn_00403684(param_1,bVar12,1);
      pcVar7_mg4 = st::fn_006B0140(UVar6,pHVar17);
      uVar16 = 0xffffffff;
      do {
        pcVar9 = pcVar7_mg4;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar9 = pcVar7_mg4 + 1;
        cVar1 = *pcVar7_mg4;
        pcVar7_mg4 = pcVar9;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      pcVar9 = pcVar9 + -uVar16;
      pcVar10 = reinterpret_cast<char *>(&DAT_0080f33a);
      memmove(pcVar10, pcVar9, uVar16); /* compiler REP MOVS byte copy */
      uVar8 = 0;
      st::fn_00712C10(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),&DAT_0080f33a,
                        st::mutable_c_string(" ,.;:!?/\\()[]{}"),0x106,1);

      uVar14 = st::fn_007113E0(this_00->field_01E0,&DAT_0080f33a);
      /* ST_CALLSITE[0051CD60]: CALL 0x00401870; direct=00401870 HelpPanelTy::CheckBkView */
      st::fn_00401870(this_00,local_8,(ushort)uVar14);
      uVar16 = uVar14 & 0xffff;

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,uVar16 + 2);

      st::fn_00711B70(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,(DAT_0080874e != '\x03') - 1 & 5
                     ,-1,-1);
      if ((ushort)uVar14 < 0x10) {
        uVar16 = 0xf;
      }
      local_8 = local_8 + uVar16;

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 3;
      iVar13 = -1;
      iVar11 = -3;
      /* ST_CALLSITE[0051CDFE]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7_mg7 = st::fn_006B0140(0x562a,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7_mg7,iVar11,iVar13,uVar16);

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      if (param_2 == 1) {
        local_c = CASE_7;
      }
      else if (param_2 == 2) {
        local_c = CASE_13;
      }
      else {
        local_c = CASE_1B;
      }
      pHVar17 = g_hINSTANCE_00807618;

      UVar6 = st::fn_00403684(local_c,bVar12,0);
      pcVar7_mg8 = st::fn_006B0140(UVar6,pHVar17);
      uVar16 = 0xffffffff;
      do {
        pcVar9 = pcVar7_mg8;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        pcVar9 = pcVar7_mg8 + 1;
        cVar1 = *pcVar7_mg8;
        pcVar7_mg8 = pcVar9;
      } while (cVar1 != '\0');
      uVar16 = ~uVar16;
      pcVar9 = pcVar9 + -uVar16;
      pcVar10 = reinterpret_cast<char *>(&DAT_0080f33a);
      memmove(pcVar10, pcVar9, uVar16); /* compiler REP MOVS byte copy */
      for (puVar7 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar7 != nullptr;
          puVar7 = st::fn_0072E560(puVar7,'\n')) {
        *(undefined1 *)puVar7 = 0x20;
      }

      st::fn_007119C0(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,(DAT_0080874e != '\x03') - 1 & 5
                    );
      local_8 = local_8 + 0xf;

      local_EAX_1393 = st::fn_004056F5(local_c,bVar12);
      /* ST_CALLSITE[0051CEFE]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
      pBVar9_mg3 = st::fn_0070B3A0((RecoveredGlobalRecordView_0081175C *)this_00->field_023C,
                                local_EAX_1393);
      /* ST_CALLSITE[0051CF16]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0x96,local_8,'\x01',
             reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar9_mg3));
      pBVar4 = local_10;
      /* ST_CALLSITE[0051CF34]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0x94,local_8 - 2,'\x06',
             reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(local_10));
      local_30 = 0x94;
      local_28 = (pBVar4->bmiHeader).biWidth;
      local_2c = local_8 - 2;
      local_24 = (pBVar4->bmiHeader).biHeight;
      local_20 = 3;
      local_1f = local_c;
      local_1b = param_2;

      st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),&local_30);
      local_8 = local_8 + (pBVar4->bmiHeader).biHeight;

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      pIVar18 = (InternalExceptionFrame *)0x3;
      iVar13 = -1;
      iVar11 = -3;
      /* ST_CALLSITE[0051CFB0]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7_mgA = st::fn_006B0140(0x5662,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7_mgA,iVar11,iVar13,(uint)pIVar18);

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      pIVar18 = (InternalExceptionFrame *)((DAT_0080874e != '\x03') - 1 & 5);
      iVar13 = -1;
      iVar11 = 1;
      /* ST_CALLSITE[0051D019]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7_mgB = st::fn_006B0140((-(uint)(param_1 != 0xfd) & 0xffffffcd) + 0x5663,
                                      g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7_mgB,iVar11,iVar13,(uint)pIVar18);
      local_8 = local_8 + 0xf;

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      pIVar18 = (InternalExceptionFrame *)0x3;
      iVar13 = -1;
      iVar11 = -3;
      /* ST_CALLSITE[0051D062]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7_mgC = st::fn_006B0140(0x5625,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7_mgC,iVar11,iVar13,(uint)pIVar18);

      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      pIVar18 = (InternalExceptionFrame *)((DAT_0080874e != '\x03') - 1 & 5);
      iVar13 = -1;
      iVar11 = 1;
      /* ST_CALLSITE[0051D0BA]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7_mgD = st::fn_006B0140(0x5d5a,g_hINSTANCE_00807618);

      st::fn_007119C0(this_00->field_01E0,pcVar7_mgD,iVar11,iVar13,(uint)pIVar18);
      local_8 = local_8 + 0xf;
      /* ST_CALLSITE[0051D0D8]: CALL 0x00403684; direct=00403684 thunk_FUN_00523410; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
      UVar6 = st::fn_00403684(param_1,bVar12,2);
      /* ST_CALLSITE[0051D0E7]: CALL 0x00402dab; direct=00402DAB HelpPanelTy::DrawDescription */
      st::fn_00402DAB(this_00,reinterpret_cast<int *>(&local_8),UVar6);
      /* ST_CALLSITE[0051D0F6]: CALL 0x0040506f; direct=0040506F HelpPanelTy::AddLinks */
      st::fn_0040506F(this_00,reinterpret_cast<int *>(&local_8),'\v',param_1,param_2);
      g_currentExceptionFrame = (InternalExceptionFrame *)param_2;
      return;
    }
    g_currentExceptionFrame = pIVar18;

    iVar11_mg9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x929,0,iVar6_mg0,
                                    st::mutable_c_string("%s"),"HelpPanelTy::SpecProc");
    if (iVar11_mg9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6_mg0,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x929);
  }
  return;
}

// 0051D360 HelpPanelTy::NatProc
#line 4 "decomp/ST.exe/functions/0051D360/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::NatProc */

void __thiscall st::fn_0051D360(HelpPanelTy *this,int param_1,char param_2)

{
  HelpPanelTy_field_01A1State HVar1;
  int iVar2;
  HelpPanelTy *this_00;
  int iVar3_mg0;
  UINT UVar4;
  int iVar4_mg0;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  int local_8;

  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;

  iVar3_mg0 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar3_mg0 == 0) {
    if (param_2 == '\0') {
      HVar1 = local_c->field_01A1;
      if (((HVar1 == 0) || (HVar1 == CASE_6)) || (HVar1 == CASE_A)) {
        local_c->field_01A2 = HVar1;
        local_c->field_01AB = st::machine_word_boundary_cast<undefined4>(local_c->field_01A3);
      }
      else {
        local_c->field_01A2 = 0;
        local_c->field_01AB = 0;
      }
      STPiece<0,2>(iVar2) = local_c->field_0178;
      STPiece<2,2>(iVar2) = local_c->field_017A;
      local_c->field_01A1 = CASE_C;
      local_c->field_01A3 = (void *)param_1;
      local_c->field_01A7 = 0;
      local_c->field_01AF = 0x23;
      local_c->field_01B1 = 5;
      if (iVar2 != 0) {
        local_c->field_0028 = 0x4202;
        *(undefined2 *)&local_c->field_0x2c = 0;
        *(undefined2 *)&local_c->field_0x2e = 2;
        local_c->field_0030 = (undefined2)iVar2;
        local_c->field_0032 = STPiece<2,2>(iVar2);
        if (g_cursorClass_00802A30 != nullptr) {
          /* ST_CALLSITE[0051D42F]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
          g_cursorClass_00802A30->GetMessage((STMessage *)&local_c->field_0x18);
        }
      }
    }

    UVar4 = st::fn_00403684(param_1,'\0',0);
    /* ST_CALLSITE[0051D445]: CALL 0x00403ef9; direct=00403EF9 HelpPanelTy::DrawTitle */
    st::fn_00403EF9(this_00,0x55f9,0,UVar4);
    /* ST_CALLSITE[0051D453]: CALL 0x00403d78; direct=00403D78 HelpPanelTy::DrawObj */
    st::fn_00403D78(this_00,&local_8,(STAllPlayersC_GetTOBJImage_param_2Enum *)param_1,0,0);
    /* ST_CALLSITE[0051D45C]: CALL 0x00403684; direct=00403684 thunk_FUN_00523410; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
    UVar4 = st::fn_00403684(param_1,'\0',2);
    /* ST_CALLSITE[0051D46B]: CALL 0x00402dab; direct=00402DAB HelpPanelTy::DrawDescription */
    st::fn_00402DAB(this_00,&local_8,UVar4);
    /* ST_CALLSITE[0051D47A]: CALL 0x0040506f; direct=0040506F HelpPanelTy::AddLinks */
    st::fn_0040506F(this_00,&local_8,'\f',param_1,0);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;

  iVar4_mg0 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x93f,0,iVar3_mg0,
                                 st::mutable_c_string("%s"),"HelpPanelTy::NatProc");
  if (iVar4_mg0 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3_mg0,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x93f);
  return;
}

// 0051D540 HelpPanelTy::TipProc
#line 4 "decomp/ST.exe/functions/0051D540/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::TipProc */

void __thiscall st::fn_0051D540(HelpPanelTy *this,void *param_1,int param_2,char param_3)

{
  char cVar1;
  HelpPanelTy_field_01A1State HVar2;
  HelpPanelTy *this_00;
  int iVar8;
  char *pcVar4_mg0;
  int uVar10;
  LPSTR pCVar4;
  char *pcVar4_mg2;
  int iVar9;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar11;
  int *piVar12;
  int iVar13;
  InternalExceptionFrame local_78;
  uint local_34 [7];
  int local_18;
  UINT local_14;
  HelpPanelTy *local_10;
  uint local_c;
  RecoveredRecordView_006B84D0_87AF9D9B *local_8;

  local_10 = this;

  local_14 = st::fn_00402473((Global_sub_00529D80_param_1Enum)param_1,param_2);
  memset(local_34, 0, 0x19); /* compiler bulk-zero initialization */
  iVar6 = 0;
  local_c = 0;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;

  iVar8 = st::fn_0072D7F0(local_78.jumpBuffer,0);
  this_00 = local_10;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_78.previous;

    iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x973,0,iVar8,st::mutable_c_string("%s")
                               ,"HelpPanelTy::TipProc");
    if (iVar9 == 0) {
      st::fn_006A5E40(iVar8,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0x973);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_3 != '\0') goto LAB_0051d689;
  HVar2 = local_10->field_01A1;
  if (((HVar2 == 0) || (HVar2 == CASE_6)) || (HVar2 == CASE_A)) {
    local_10->field_01A2 = HVar2;
    local_10->field_01AB = st::machine_word_boundary_cast<undefined4>(local_10->field_01A3);
  }
  else {
    local_10->field_01A2 = 0;
    local_10->field_01AB = 0;
  }
  STPiece<0,2>(iVar6) = local_10->field_0178;
  STPiece<2,2>(iVar6) = local_10->field_017A;
  local_10->field_01A1 = CASE_8;
  local_10->field_01A3 = param_1;
  local_10->field_01A7 = param_2;
  local_10->field_01AF = 0x14;
  local_10->field_01B1 = 5;
  if (iVar6 != 0) {
    local_10->field_0028 = 0x4202;
    *(undefined2 *)&local_10->field_0x2c = 0;
    *(undefined2 *)&local_10->field_0x2e = 2;
    local_10->field_0030 = (undefined2)iVar6;
    local_10->field_0032 = STPiece<2,2>(iVar6);
    if (g_cursorClass_00802A30 != nullptr) {
      /* ST_CALLSITE[0051D632]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
      g_cursorClass_00802A30->GetMessage((STMessage *)&local_10->field_0x18);
    }
  }
  bVar5 = (byte)param_1;
  if (param_2 == 1) {
    DAT_00807352 = DAT_00807352 | 1 << (bVar5 & 0x1f);
LAB_0051d650:
    DAT_00807356 = DAT_00807356 | 1 << (bVar5 & 0x1f);
LAB_0051d665:
    DAT_0080735a = DAT_0080735a | 1 << (bVar5 & 0x1f);
  }
  else {
    if (param_2 == 2) goto LAB_0051d650;
    if (param_2 == 3) goto LAB_0051d665;
  }
  DAT_0080734e = DAT_0080734e | 1 << (bVar5 & 0x1f);
LAB_0051d689:
  /* ST_CALLSITE[0051D694]: CALL 0x00403ef9; direct=00403EF9 HelpPanelTy::DrawTitle */
  st::fn_00403EF9(this_00,0x55f2,0,0);
  uVar10 = local_c;
  if (local_14 != 10000) {
    pcVar4_mg0 = st::fn_006B0140(local_14,g_hINSTANCE_00807618);
    uVar7 = 0xffffffff;
    do {
      pcVar9 = pcVar4_mg0;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar9 = pcVar4_mg0 + 1;
      cVar1 = *pcVar4_mg0;
      pcVar4_mg0 = pcVar9;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar9 = pcVar9 + -uVar7;
    pcVar11 = reinterpret_cast<char *>(&DAT_0080f33a);
    memmove(pcVar11, pcVar9, uVar7); /* compiler REP MOVS byte copy */
    st::fn_00712D30
              (this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),&DAT_0080f33a,st::mutable_c_string(" ,.;:!?/\\()[]{}"),
               reinterpret_cast<uint *>(&DAT_007c21ec),0x19c,reinterpret_cast<char *>(&DAT_007c2198),1);

    uVar10 = st::fn_007113E0(this_00->field_01E0,&DAT_0080f33a);
    local_c = uVar10;
    /* ST_CALLSITE[0051D71B]: CALL 0x00401870; direct=00401870 HelpPanelTy::CheckBkView */
    st::fn_00401870(this_00,0,(ushort)uVar10);

    st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,0,0x19c,uVar10 + 2);

    st::fn_00711B70(this_00->field_01E0,reinterpret_cast<char *>(&DAT_0080f33a),1,-1,(DAT_0080874e != '\x03') - 1 & 5,
                   -1,-1);
  }
  /* ST_CALLSITE[0051D774]: CALL 0x00401870; direct=00401870 HelpPanelTy::CheckBkView */
  st::fn_00401870(this_00,uVar10,0x1e);
  iVar13 = 1;
  piVar12 = nullptr;
  uVar7 = (uint)(DAT_0080734d != '\0');
  iVar6 = 1;
  /* ST_CALLSITE[0051D794]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/char; source view only; no Ghidra override */
  pCVar4 = st::fn_0040577C(st::mutable_c_string("BUT_HLPTDAY"),0);
  pCVar4 = st::fn_006F2C00(reinterpret_cast<char *>(pCVar4),iVar6,uVar7);
  /* ST_CALLSITE[0051D7AE]: CALL 0x006f1ce0; direct=006F1CE0 cMf32::RecGet; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__thiscall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/cMf32;/byte;pointer:/char;pointer:/int;/int */
  local_8 = st::pointer_boundary_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(pCVar4),piVar12,iVar13));
  uVar7 = uVar10 + 10;
  /* ST_CALLSITE[0051D7C6]: CALL 0x00403229; direct=00403229 DibPut */
  st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0218),0x50,uVar7,'\x01',local_8);
  local_18 = *(int *)&local_8->field_0x4;

  st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,local_18 + 0x5f,uVar7,
                   0x13d - local_18,0xf);
  uVar8 = (DAT_0080874e != '\x03') - 1 & 5;
  iVar13 = -1;
  iVar6 = 1;
  /* ST_CALLSITE[0051D81D]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar4_mg2 = st::fn_006B0140(0x5c93,g_hINSTANCE_00807618);

  st::fn_007119C0(this_00->field_01E0,pcVar4_mg2,iVar6,iVar13,uVar8);
  local_34[0] = 0x50;
  local_34[2] = local_18;
  local_34[3] = *(uint *)&local_8->field_0x8;
  local_34[1] = uVar7;

  st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this_00->field_01D7),local_34);
  st::fn_006F20E0(g_cMf32_00806790,reinterpret_cast<uint *>(&local_8));
  /* ST_CALLSITE[0051D86E]: CALL 0x00401870; direct=00401870 HelpPanelTy::CheckBkView */
  st::fn_00401870(this_00,uVar10 + 0x1e,10);
  local_c = ((uint)uVar10 / 10 + 1) * 10;
  iVar6 = ((ushort)this_00->field_01AF - 0x118) + local_c;
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar6 / (int)(uint)(ushort)this_00->field_01B1 + 1;
  }
  /* ST_CALLSITE[0051D8AE]: CALL 0x00402eeb; direct=00402EEB HelpPanelTy::CreateSlider */
  st::fn_00402EEB(this_00,iVar6);
  st::fn_006B5110
            ((int)this_00->field_0068,0,0x21,(ushort)this_00->field_01AF + 0x16,
             reinterpret_cast<BITMAPINFO *>(this_00->field_0218),0,0,0,0x19c,0x117 - (uint)(ushort)this_00->field_01AF
             ,0xff);

  st::fn_006B3640
            (reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_0060,0xffffffff,this_00->field_003C,
             this_00->field_0044);
  g_currentExceptionFrame = local_78.previous;
  return;
}

// 0051DDD0 HelpPanelTy::GetMessage
#line 4 "decomp/ST.exe/functions/0051DDD0/decomp.c"
/* WARNING: Type propagation algorithm not settling */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::GetMessage

   [STSwitchEnumApplier] Switch target field_01A1 uses
   /SubmarineTitans/Recovered/Enums/HelpPanelTy_field_01A1State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_8=8;CASE_B=11;CASE_C=12

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00404458|0051DDD0; family_names=HelpPanelTy::GetMessage; ret4=40;
   direct_offsets={10:3,14:10,18:5,1c:12}

   [STSwitchEnumApplier] Switch target field_01A1 uses
   /SubmarineTitans/Recovered/Enums/HelpPanelTy_field_01A1State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_A=10;CASE_B=11;CASE_C=12
    */

int __thiscall st::fn_0051DDD0(HelpPanelTy *this,STMessage *message)

{
  char cVar1;
  HelpPanelTy_field_01A1State HVar2;
  STMessageId SVar3;
  ccFntTy *pcVar4;
  AnonPointee_HelpPanelTy_0218 *pAVar5;
  void *pvVar6;
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar7;
  UINT *pUVar8;
  HelpPanelTy *this_00;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  HelpPanelTy_field_01D7Element *pHVar12;
  BITMAPINFO *pBVar13;
  char *pcVar13_mg1;
  uint *puVar14;
  int iVar16;
  LPSTR pCVar17;
  int iVar15;
  uint uVar18;
  HelpPanelTy_field_01BBDArray *pHVar19;
  uint uVar20;
  ushort uVar21;
  byte bVar22;
  char *pcVar23;
  bool bVar24;
  char *pcVar25;
  code *pcVar26;
  UINT UVar27;
  InternalExceptionFrame local_84;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  HelpPanelTy *local_20;
  int *local_1c;
  uint local_18;
  uint local_14;
  undefined4 *local_10;
  uint local_c;
  UINT *local_8_mg0;

  local_84.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_84;
  local_20 = this;

  iVar8 = st::fn_0072D7F0(local_84.jumpBuffer,0);
  this_00 = local_20;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_84.previous;

    iVar15 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0xac7,0,iVar8,
                                st::mutable_c_string("%s"),"HelpPanelTy::GetMessage");
    if (iVar15 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar8,0,st::mutable_c_string("E:\\__titans\\Andrey\\helppan.cpp"),0xac7);
    return 0xffff;
  }
  if (message->id == MESS_ID_CREATE) {
    puVar11 = &local_20->field_004C;
    st::fn_006B1A50(g_ddxContext_008075A8,3,nullptr,puVar11);
    this_00->field_003C = *puVar11;
    this_00->field_0044 = this_00->field_0050 - this_00->field_0048;
    this_00->field_0174 = this_00->field_0048 + this_00->field_0050;
  }
  /* ST_CALLSITE[0051DE46]: CALL 0x004017f8; direct=004017F8 PanelTy::GetMessage */
  st::fn_004017F8(reinterpret_cast<PanelTy *>(this_00),message);
  SVar3 = message->id;
  if (SVar3 < MESS_OPTPANELTY_C001) {
    if (SVar3 == MESS_SHARED_C000) {
      UVar27 = 0x274e;
      /* ST_CALLSITE[0051F028]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_0053DAF0_3BDC2979; source view only; no Ghidra override */
      pCVar17 = st::fn_0040577C(st::mutable_c_string("BUT_MEDIUM"),0);
      /* ST_CALLSITE[0051F034]: CALL 0x00403508; direct=00403508 UPanelTy::PaintIBut */
      st::fn_00403508(reinterpret_cast<UPanelTy *>(this_00),reinterpret_cast<AnonShape_0053DAF0_3BDC2979 *>(message),reinterpret_cast<char *>(pCVar17),UVar27);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    if (SVar3 < MESS_SIDTY_8161) {
      if (SVar3 == MESS_SHARED_8160) {
        pcVar4 = this_00->field_01E4;
        if (pcVar4->field_00A0 != 0) {
          st::fn_00710790(reinterpret_cast<RecoveredRecordView_00710790_7768A573 *>(pcVar4));
        }
        (message->arg1).ptr = (void *)(*(int *)&pcVar4->field_0x8a + 1);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      if (MESS_SHARED_0060 < SVar3) {
        if (SVar3 == MESS_SHARED_0061) {
          local_c = (uint)(message->arg1).words.low;
          local_8_mg0 = (UINT *)(uint)(message->arg1).words.high;
          if (this_00->field_0172 != CASE_1) {
            g_currentExceptionFrame = local_84.previous;
            return 0;
          }
          switch(this_00->field_01A1) {
          case CASE_1:
          case CASE_2:
          case CASE_3:
          case CASE_4:
          case CASE_5:
          case CASE_B:
          case CASE_C:
            local_1c = nullptr;
            local_14 = this_00->field_01D7->count;
            if (local_14 == 0) {
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            local_18 = (uint)(ushort)this_00->field_01AF -
                       (uint)(ushort)this_00->field_01B1 * this_00->field_01C3;
            while( true ) {
              if (st::machine_word_boundary_cast<uint>(local_1c) < local_14) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                piVar10 = (int *)((int)&this_00->field_01D7->data->field_0000 +
                                 this_00->field_01D7->elementSize * (int)local_1c);
              }
              else {
                piVar10 = nullptr;
              }
              local_24 = piVar10[3];
              local_30 = this_00->field_003C + 0x21 + *piVar10;
              local_2c = piVar10[1] + local_18 + 0x16 + this_00->field_0044;
              local_28 = piVar10[2];
              if (((((int)local_c < local_30) || (local_28 + local_30 <= (int)local_c)) ||
                  ((int)local_8_mg0 < local_2c)) || (local_24 + local_2c <= (int)local_8_mg0)) {
                bVar24 = false;
              }
              else {
                bVar24 = true;
              }
              if ((bVar24) && ((int)local_8_mg0 < this_00->field_0044 + 300)) break;
              local_1c = (int *)((int)local_1c + 1);
              if (local_14 <= st::machine_word_boundary_cast<uint>(local_1c)) {
                g_currentExceptionFrame = local_84.previous;
                return 0;
              }
            }
            /* ST_CALLSITE[0051E6F4]: CALL 0x004054c5; direct=004054C5 HelpPanelTy::LinkAct */
            st::fn_004054C5(this_00,STField<int>(piVar10,0x11),STField<undefined4>(piVar10,0x15));
            uVar18 = STField<undefined4>(piVar10,0x15);
            pvVar6 = STField<void *>(piVar10,0x11);
            switch((char)piVar10[4]) {
            case '\x01':
              /* ST_CALLSITE[0051E75E]: CALL 0x00404e85; direct=00404E85 HelpPanelTy::RCProc */
              st::fn_00404E85(this_00,(int)pvVar6,uVar18,'\0');
              /* ST_CALLSITE[0051E765]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
              st::fn_00405100(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x02':
              /* ST_CALLSITE[0051E7F4]: CALL 0x00403747; direct=00403747 HelpPanelTy::ObjProc */
              st::fn_00403747(this_00,(int)pvVar6,uVar18,'\0');
              /* ST_CALLSITE[0051E7FB]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
              st::fn_00405100(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x03':
              /* ST_CALLSITE[0051E7CE]: CALL 0x00403878; direct=00403878 HelpPanelTy::SubProc */
              st::fn_00403878(this_00,(int)pvVar6,'\0');
              /* ST_CALLSITE[0051E7D5]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
              st::fn_00405100(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x04':
              /* ST_CALLSITE[0051E81A]: CALL 0x004057e0; direct=004057E0 HelpPanelTy::ArmProc */
              st::fn_004057E0(this_00,(int)pvVar6,uVar18,'\0');
              /* ST_CALLSITE[0051E821]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
              st::fn_00405100(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x05':
              /* ST_CALLSITE[0051E7A9]: CALL 0x00402833; direct=00402833 HelpPanelTy::TechProc */
              st::fn_00402833(this_00,(uint)pvVar6,(byte)uVar18,'\0');
              /* ST_CALLSITE[0051E7B0]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
              st::fn_00405100(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x06':
              /* ST_CALLSITE[0051E783]: CALL 0x00405e61; direct=00405E61 HelpPanelTy::TTreeProc */
              st::fn_00405E61(this_00,(uint)pvVar6,'\0');
              /* ST_CALLSITE[0051E78A]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
              st::fn_00405100(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\a':
              /* ST_CALLSITE[0051E738]: CALL 0x004011fe; direct=004011FE HelpPanelTy::MObjProc */
              st::fn_004011FE(this_00);
              /* ST_CALLSITE[0051E73F]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
              st::fn_00405100(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\b':
              /* ST_CALLSITE[0051E88B]: CALL 0x004020b8; direct=004020B8 HelpPanelTy::TipProc */
              st::fn_004020B8(this_00,pvVar6,uVar18,'\0');
              break;
            case '\n':
              /* ST_CALLSITE[0051E716]: CALL 0x00405803; direct=00405803 HelpPanelTy::IndexBut */
              st::fn_00405803(this_00);
              /* ST_CALLSITE[0051E71D]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
              st::fn_00405100(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\v':
              /* ST_CALLSITE[0051E840]: CALL 0x00402cac; direct=00402CAC HelpPanelTy::SpecProc */
              st::fn_00402CAC(this_00,(int)pvVar6,uVar18,'\0');
              /* ST_CALLSITE[0051E847]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
              st::fn_00405100(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\f':
              /* ST_CALLSITE[0051E865]: CALL 0x00403bc0; direct=00403BC0 HelpPanelTy::NatProc */
              st::fn_00403BC0(this_00,(int)pvVar6,'\0');
              /* ST_CALLSITE[0051E86C]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
              st::fn_00405100(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            /* ST_CALLSITE[0051E892]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
            st::fn_00405100(this_00);
            g_currentExceptionFrame = local_84.previous;
            return 0;
          case CASE_6:
            goto switchD_0051e4d9_caseD_6;
          default:
            g_currentExceptionFrame = local_84.previous;
            return 0;
          case CASE_8:
            if (this_00->field_01D7->count == 0) {
              pHVar12 = nullptr;
            }
            else {
              pHVar12 = this_00->field_01D7->data;
            }
            local_30 = this_00->field_003C + 0x21 + pHVar12->field_0000;
            local_2c = ((uint)(ushort)this_00->field_01AF -
                       (uint)(ushort)this_00->field_01B1 * this_00->field_01C3) +
                       pHVar12->field_0004 + 0x16 + this_00->field_0044;
            local_28 = pHVar12->field_0008;
            local_24 = pHVar12->field_000C;
            if (((((int)local_c < local_30) || (local_28 + local_30 <= (int)local_c)) ||
                ((int)local_8_mg0 < local_2c)) || (local_24 + local_2c <= (int)local_8_mg0)) {
              bVar24 = false;
            }
            else {
              bVar24 = true;
            }
            if (!bVar24) {
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            if (this_00->field_0044 + 300 <= (int)local_8_mg0) {
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            DAT_0080734d = DAT_0080734d == '\0';
            /* ST_CALLSITE[0051E951]: CALL 0x00402d38; direct=00402D38 HelpPanelTy::sub_00515180 */
            st::fn_00402D38(this_00,'\b');
            g_currentExceptionFrame = local_84.previous;
            return 0;
          }
        }
        if (SVar3 == MESS_SHARED_6200) {
          this_00->field_01C3 = ((message->arg0).u32);
          iVar9 = (ushort)this_00->field_01AF + 0x16;

          st::fn_006B55F0
                    (reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0068),0,0x21,iVar9,
                     reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_01DC),0,0x21,iVar9,0x19c
                     ,0x117 - (uint)(ushort)this_00->field_01AF);
          st::fn_006B5110
                    ((int)this_00->field_0068,0,0x21,(ushort)this_00->field_01AF + 0x16,
                     reinterpret_cast<BITMAPINFO *>(this_00->field_0218),0,0,
                     (uint)(ushort)this_00->field_01B1 * this_00->field_01C3,0x19c,
                     0x117 - (uint)(ushort)this_00->field_01AF,0xff);

          st::fn_006B3640
                    (reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_0060,0xffffffff,this_00->field_003C
                     ,this_00->field_0044);
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        if (SVar3 != MESS_SHARED_6332) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        local_10 = (undefined4 *)(message->arg2).u32;
        if (local_10 == nullptr) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        if (this_00->field_01D3 == nullptr) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        pcVar4 = this_00->field_01E4;
        if (pcVar4->field_00A0 != 0) {
          st::fn_00710790(reinterpret_cast<RecoveredRecordView_00710790_7768A573 *>(pcVar4));
        }
        local_18 = *(uint *)&pcVar4->field_0x8a;
        if (DAT_0080874e == '\x03') {
          local_14 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_14)), (uint8_t)(5));
        }
        else {
          local_14 = STReplaceLowByte(st::storage_bit_cast<uint32_t>(static_cast<uint32_t>(local_14)), (uint8_t)((-(DAT_0080874e != '\x01') & 6U) + 1));
        }

        st::fn_006B55F0
                  (reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0068),0,0x21,0x16,
                   reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_01DC),0,0x21,0x16,0x19c,
                   0x118);
        pAVar5 = this_00->field_0218;
        local_1c = (int *)pAVar5->field_0014;
        if (local_1c == nullptr) {
          local_1c = (int *)(((uint)(ushort)pAVar5->field_000E * pAVar5->field_0004 + 0x1f >> 3 &
                             0x1ffffffc) * pAVar5->field_0008);
        }

        puVar11 = STPointerBoundaryCast<undefined4 *>(st::fn_006B4FA0(reinterpret_cast<RecoveredRecord_006B4FA0_DAC3A217 *>(pAVar5)));
        for (uVar18 = (uint)local_1c >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *puVar11 = 0xffffffff;
          puVar11 = puVar11 + 1;
        }
        for (uVar18 = (uint)local_1c & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined1 *)puVar11 = 0xff;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        uVar20 = (uint)(message->arg0).words.high;
        uVar18 = uVar20;
        if ((int)uVar20 < st::storage_bit_cast<int>(static_cast<uint32_t>(uVar20 + STField<int>(local_10,0x1e0)))) {
          do {
            if ((int)uVar18 < (int)this_00->field_01D3[2]) {
              local_1c = *(int **)(this_00->field_01D3[5] + uVar18 * 4);
            }
            else {
              local_1c = nullptr;
            }
            if (local_1c != nullptr) {

              st::fn_00710A90(this_00->field_01E4,(int)this_00->field_0218,0,0,
                               (uVar18 - uVar20) * local_18,this_00->field_0218->field_0004,local_18
                              );

              st::fn_007119C0(this_00->field_01E4,reinterpret_cast<char *>(local_1c),0,-1,local_14 & 0xff);
            }
            uVar20 = (uint)(message->arg0).words.high;
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 < st::storage_bit_cast<int>(static_cast<uint32_t>(uVar20 + STField<int>(local_10,0x1e0))));
        }
        st::fn_006B5110
                  ((int)this_00->field_0068,0,0x21,0x16,reinterpret_cast<BITMAPINFO *>(this_00->field_0218),0,0,0,
                   0x19c,0x118,0xff);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      if (SVar3 != MESS_SHARED_0060) {
        if (SVar3 == MESS_ID_NONE) {
          if (this_00->field_0172 == CASE_3) {
            iVar9 = this_00->field_0050;
            if (this_00->field_0044 < iVar9) {
              this_00->field_0044 = this_00->field_0044 + 0x28;
            }
            if (iVar9 <= this_00->field_0044) {
              this_00->field_0044 = iVar9;
              this_00->field_0172 = CASE_1;
              /* ST_CALLSITE[0051DF53]: CALL 0x00404fd9; direct=00404FD9 HelpPanelTy::ShiftControls */
              st::fn_00404FD9(this_00,1);
            }

            st::fn_006B3640
                      (reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_0060,0xffffffff,
                       this_00->field_003C,this_00->field_0044);
            g_currentExceptionFrame = local_84.previous;
            return 0;
          }
          if (this_00->field_0172 != CASE_4) {
            g_currentExceptionFrame = local_84.previous;
            return 0;
          }
          iVar9 = this_00->field_0050 - this_00->field_0048;
          if (iVar9 < this_00->field_0044) {
            this_00->field_0044 = this_00->field_0044 + -0x28;
          }
          if (this_00->field_0044 <= iVar9) {
            this_00->field_0044 = iVar9;
            this_00->field_0172 = CASE_2;
          }

          st::fn_006B3640
                    (reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_0060,0xffffffff,this_00->field_003C
                     ,this_00->field_0044);
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        if (SVar3 == MESS_ID_CREATE) {
          /* ST_CALLSITE[0051DEAD]: CALL 0x00403111; direct=00403111 HelpPanelTy::InitHelpPanel */
          st::fn_00403111(this_00);
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        if (SVar3 != MESS_SHARED_0003) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        /* ST_CALLSITE[0051DE92]: CALL 0x00401398; direct=00401398 HelpPanelTy::DoneHelpPanel */
        st::fn_00401398(this_00);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      local_18 = (uint)(message->arg1).words.low;
      local_10 = nullptr;
      local_c = (uint)(message->arg1).words.high;
      this_00->field_01DB = 0;
      if (this_00->field_0172 == CASE_1) {
        switch(this_00->field_01A1) {
        case CASE_1:
        case CASE_2:
        case CASE_3:
        case CASE_4:
        case CASE_5:
        case CASE_B:
        case CASE_C:
          local_8_mg0 = nullptr;
          local_14 = this_00->field_01D7->count;
          if ((undefined4 *)local_14 != 0) {
            do {
              if (st::machine_word_boundary_cast<uint>(local_8_mg0) < local_14) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                piVar10 = (int *)((int)&this_00->field_01D7->data->field_0000 +
                                 this_00->field_01D7->elementSize * (int)local_8_mg0);
              }
              else {
                piVar10 = nullptr;
              }
              local_40 = this_00->field_003C + 0x21 + *piVar10;
              local_3c = piVar10[1] +
                         ((uint)(ushort)this_00->field_01AF -
                         (uint)(ushort)this_00->field_01B1 * this_00->field_01C3) + 0x16 +
                         this_00->field_0044;
              local_38 = piVar10[2];
              local_34 = piVar10[3];
              if (((((int)local_18 < local_40) || (local_38 + local_40 <= (int)local_18)) ||
                  ((int)local_c < local_3c)) || (local_34 + local_3c <= (int)local_c)) {
                bVar24 = false;
              }
              else {
                bVar24 = true;
              }
              if ((bVar24) && ((int)local_c < this_00->field_0044 + 300)) goto LAB_0051e1b2;
              local_8_mg0 = (UINT *)((int)local_8_mg0 + 1);
            } while (st::machine_word_boundary_cast<uint>(local_8_mg0) < local_14);
          }
          break;
        case CASE_6:
          if (st::machine_word_boundary_cast<uint>(this_00->field_01A3) == st::machine_word_boundary_cast<uint>((void *)0x1)) {
            local_8_mg0 = reinterpret_cast<UINT *>(&DAT_007c2b58);
            local_14 = 0x33;
          }
          else if (st::machine_word_boundary_cast<uint>(this_00->field_01A3) == st::machine_word_boundary_cast<uint>((void *)0x2)) {
            local_8_mg0 = reinterpret_cast<UINT *>(&DAT_007c2df0);
            local_14 = 0x39;
          }
          else {
            local_8_mg0 = &DAT_007c30d8;
            local_14 = 0x46;
          }
          uVar21 = 0;
          if ((ushort)local_14 != 0) {
            local_38 = 0x1a;
            local_34 = 0xe;
            local_1c = (int *)(uint)(ushort)this_00->field_01AF;
            do {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_40 = *(int *)((int)local_8_mg0 + (uint)uVar21 * 0xd + 5) + 0x21 +
                         this_00->field_003C;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_3c = (*(int *)((int)local_8_mg0 + (uint)uVar21 * 0xd + 9) -
                         (uint)(ushort)this_00->field_01B1 * this_00->field_01C3) + (int)local_1c +
                         0x16 + this_00->field_0044;
              if ((((int)local_18 < local_40) || (local_40 + 0x1a <= (int)local_18)) ||
                 (((int)local_c < local_3c || (local_3c + 0xe <= (int)local_c)))) {
                bVar24 = false;
              }
              else {
                bVar24 = true;
              }
              if ((bVar24) && ((int)local_c < this_00->field_0044 + 300)) {
                local_10 = (undefined4 *)

                           st::fn_00404B29(*(Global_sub_00528060_param_1Enum *)
                                               ((int)local_8_mg0 + (uint)uVar21 * 0xd),
                                              *(char *)((int)local_8_mg0 + (uint)uVar21 * 0xd + 4));
                if (st::machine_word_boundary_cast<uint>(local_10) != st::machine_word_boundary_cast<uint>((undefined4 *)0x2711)) goto LAB_0051e1b2;
                local_10 = nullptr;
                break;
              }
              uVar21 = uVar21 + 1;
            } while (uVar21 < (ushort)local_14);
          }
        }
      }
      goto switchD_0051dfcc_caseD_7;
    }
    if (MESS_SHARED_BFFF < SVar3) {
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    if (SVar3 == MESS_SHARED_BFFF) {
      /* ST_CALLSITE[0051EFF8]: CALL dword ptr [EDX + 0x18] */
      this_00->SetPanel('\0');
      st::fn_00405E2F(0xae);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    switch(SVar3) {
    case MESS_SIDTY_8161:
      HVar2 = this_00->field_01A1;
      if (HVar2 == 0) {
        pHVar19 = reinterpret_cast<HelpPanelTy_field_01BBDArray *>(this_00->field_01B3);
      }
      else {
        if (HVar2 != CASE_A) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        pHVar19 = this_00->field_01BB;
      }
      uVar18 = (uint)(message->arg0).words.low;
      if (uVar18 < pHVar19->count) {
        if (HVar2 == 0) {
          local_8_mg0 = (UINT *)(this_00->field_01B3->field_0008 * uVar18 +
                                this_00->field_01B3->field_001C);
        }
        else {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          local_8_mg0 = (UINT *)((int)&this_00->field_01BB->data->resourceId +
                                this_00->field_01BB->elementSize * uVar18);
        }
      }
      else {
        local_8_mg0 = nullptr;
      }
      if (local_8_mg0 != nullptr) {
        bVar24 = (message->arg0).words.high == 1;
        local_18 = *local_8_mg0;
        if (DAT_0080874e == '\x03') {
          local_1c = (int *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(!bVar24));
        }
        else if (DAT_0080874e == '\x01') {
          local_1c = (int *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(1));
        }
        else {
          local_1c = (int *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar24 + '\a'));
        }
        iVar9 = (message->arg1).words.high + 0x16;

        st::fn_006B55F0
                  (reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0068),0,0x21,iVar9,
                   reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(this_00->field_01DC),0,0x21,iVar9,0x19c,
                   *(int *)(this_00->field_01EC + 4));
        pRVar7 = reinterpret_cast<RecoveredRecord_006B4FA0_DAC3A217 *>(this_00->field_01EC);
        uVar18 = *(uint *)&pRVar7[1].field_0x4;
        if (uVar18 == 0) {
          uVar18 = ((uint)pRVar7->field_000E * *(int *)&pRVar7->field_0x4 + 0x1f >> 3 & 0x1ffffffc)
                   * *(int *)&pRVar7->field_0x8;
        }

        puVar11 = STPointerBoundaryCast<undefined4 *>(st::fn_006B4FA0(pRVar7));
        for (uVar20 = uVar18 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
          *puVar11 = 0xffffffff;
          puVar11 = puVar11 + 1;
        }
        for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined1 *)puVar11 = 0xff;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }

        st::fn_00710A90(this_00->field_01E4,(int)this_00->field_01EC,0,0,0,0,0);
        pcVar13_mg1 = st::fn_006B0140(local_18,g_hINSTANCE_00807618);
        uVar18 = 0xffffffff;
        do {
          pcVar25 = pcVar13_mg1;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar25 = pcVar13_mg1 + 1;
          cVar1 = *pcVar13_mg1;
          pcVar13_mg1 = pcVar25;
        } while (cVar1 != '\0');
        uVar18 = ~uVar18;
        pcVar25 = pcVar25 + -uVar18;
        pcVar23 = reinterpret_cast<char *>(&DAT_0080f33a);
        memmove(pcVar23, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        puVar14 = st::fn_0072E560(&DAT_0080f33a,'\n');
        pUVar8 = local_8_mg0;
        while (local_8_mg0 = pUVar8, puVar14 != nullptr) {
          *(undefined1 *)puVar14 = 0x20;
          puVar14 = st::fn_0072E560(puVar14,'\n');
          pUVar8 = local_8_mg0;
        }

        st::fn_007119C0(this_00->field_01E4,reinterpret_cast<char *>(&DAT_0080f33a),
                       (uint)STField<byte>(pUVar8,0x11) * 0x14 + 10,-1,(uint)local_1c & 0xff);
        if ((this_00->field_01A1 == 0) && (STField<byte>(pUVar8,0x11) != 0)) {
          if (DAT_0080874e == '\x03') {
            local_1c = (int *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(0x29));
          }
          else {
            local_1c = (int *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)((-(DAT_0080874e != '\x01') & 0x43U) + 0x10));
          }
          iVar16 = (uint)STField<byte>(pUVar8,0x11) * 0x14;
          local_10 = (undefined4 *)((uint)local_1c & 0xff);
          iVar9 = (int)((AnonShape_006E6FB0_BC494FEA *)this_00->field_01EC)->field_0008 / 2;
          st::fn_006B5B10(reinterpret_cast<AnonShape_006E6FB0_BC494FEA *>(this_00->field_01EC),0,iVar16,iVar9,iVar16 + 8,
                       iVar9,(byte)local_1c,0xd);
          if (STField<char>(local_8_mg0,0x13) == '\0') {
            iVar9 = *(int *)(this_00->field_01EC + 4);
          }
          iVar16 = (uint)STField<byte>(local_8_mg0,0x11) * 0x14;
          st::fn_006B5B10(reinterpret_cast<AnonShape_006E6FB0_BC494FEA *>(this_00->field_01EC),0,iVar16,0,iVar16,iVar9,
                       (byte)local_10,0xd);
          local_14 = 0;
          local_c = (uint)(message->arg0).words.low;
          local_18 = *(uint *)&this_00->field_01B3->field_0xc;
          local_1c = (int *)local_c;
joined_r0x0051eec7:
          local_1c = (int *)((int)local_1c + 1);
          if (st::machine_word_boundary_cast<uint>(local_1c) < local_18) {
            if (st::machine_word_boundary_cast<uint>(local_1c) < local_18) {
              iVar9 = this_00->field_01B3->field_0008 * (int)local_1c +
                      this_00->field_01B3->field_001C;
            }
            else {
              iVar9 = 0;
            }
            if ((iVar9 == 0) || (bVar22 = STField<byte>(iVar9,0x11), bVar22 == 0)) goto LAB_0051ef61;
            uVar18 = local_c;
            if (bVar22 < STField<byte>(local_8_mg0,0x11)) {
              do {
                uVar18 = uVar18 - 1;
                if ((int)uVar18 < 1) goto joined_r0x0051eec7;
                if (uVar18 < local_18) {
                  iVar9 = this_00->field_01B3->field_0008 * uVar18 + this_00->field_01B3->field_001C
                  ;
                }
                else {
                  iVar9 = 0;
                }
                if ((iVar9 == 0) || (STField<byte>(iVar9,0x11) == 0)) goto joined_r0x0051eec7;
              } while (STField<byte>(iVar9,0x11) != bVar22);
              if (STField<char>(iVar9,0x13) == '\0') {
                local_14 = local_14 | 1 << (bVar22 & 0x1f);
              }
            }
            goto joined_r0x0051eec7;
          }
LAB_0051ef61:
          bVar22 = 0;
          iVar9 = 0;
          do {
            if ((local_14 & 1 << (bVar22 & 0x1f)) != 0) {
              st::fn_006B5B10(reinterpret_cast<AnonShape_006E6FB0_BC494FEA *>(this_00->field_01EC),0,iVar9,0,iVar9,
                           (int)((AnonShape_006E6FB0_BC494FEA *)this_00->field_01EC)->field_0008,
                           (byte)local_10,0xd);
            }
            iVar9 = iVar9 + 0x14;
            bVar22 = bVar22 + 1;
          } while (iVar9 < 0x280);
        }
        st::fn_006B5440(reinterpret_cast<ushort *>(this_00->field_0068),0,0x21,(message->arg1).words.high + 0x16,
                     reinterpret_cast<tagBITMAPINFO *>(this_00->field_01EC),0,0xff);
      }

      st::fn_006B3640
                (reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_0060,0xffffffff,this_00->field_003C,
                 this_00->field_0044);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_OPTPANELTY_8162:
      HVar2 = this_00->field_01A1;
      if (HVar2 == 0) {
        pHVar19 = reinterpret_cast<HelpPanelTy_field_01BBDArray *>(this_00->field_01B3);
      }
      else {
        if (HVar2 != CASE_A) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        pHVar19 = this_00->field_01BB;
      }
      uVar18 = (message->arg0).u32;
      if (uVar18 < pHVar19->count) {
        if (HVar2 == 0) {
          local_1c = (int *)(this_00->field_01B3->field_0008 * uVar18 +
                            this_00->field_01B3->field_001C);
        }
        else {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          local_1c = (int *)((int)&this_00->field_01BB->data->resourceId +
                            this_00->field_01BB->elementSize * uVar18);
        }
      }
      else {
        local_1c = nullptr;
      }
      if (local_1c == nullptr) {
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      bVar24 = false;
      uVar18 = STField<uint>(local_1c,0xd);
      pvVar6 = STField<void *>(local_1c,9);
      switch((char)local_1c[2]) {
      default:
        goto switchD_0051ea9b_caseD_0;
      case '\x01':
        /* ST_CALLSITE[0051EABA]: CALL 0x00404e85; direct=00404E85 HelpPanelTy::RCProc */
        st::fn_00404E85(this_00,(int)pvVar6,uVar18,'\0');
        break;
      case '\x02':
        /* ST_CALLSITE[0051EAEC]: CALL 0x00403747; direct=00403747 HelpPanelTy::ObjProc */
        st::fn_00403747(this_00,(int)pvVar6,uVar18,'\0');
        break;
      case '\x03':
        /* ST_CALLSITE[0051EADF]: CALL 0x00403878; direct=00403878 HelpPanelTy::SubProc */
        st::fn_00403878(this_00,(int)pvVar6,'\0');
        break;
      case '\x04':
        /* ST_CALLSITE[0051EAF9]: CALL 0x004057e0; direct=004057E0 HelpPanelTy::ArmProc */
        st::fn_004057E0(this_00,(int)pvVar6,uVar18,'\0');
        break;
      case '\x05':
        /* ST_CALLSITE[0051EAD3]: CALL 0x00402833; direct=00402833 HelpPanelTy::TechProc */
        st::fn_00402833(this_00,(uint)pvVar6,(byte)uVar18,'\0');
        break;
      case '\x06':
        /* ST_CALLSITE[0051EAC6]: CALL 0x00405e61; direct=00405E61 HelpPanelTy::TTreeProc */
        st::fn_00405E61(this_00,(uint)pvVar6,'\0');
        break;
      case '\a':
        /* ST_CALLSITE[0051EAAD]: CALL 0x004011fe; direct=004011FE HelpPanelTy::MObjProc */
        st::fn_004011FE(this_00);
        break;
      case '\b':
        /* ST_CALLSITE[0051EB1F]: CALL 0x004020b8; direct=004020B8 HelpPanelTy::TipProc */
        st::fn_004020B8(this_00,pvVar6,uVar18,'\0');
        break;
      case '\n':
        /* ST_CALLSITE[0051EAA4]: CALL 0x00405803; direct=00405803 HelpPanelTy::IndexBut */
        st::fn_00405803(this_00);
        break;
      case '\v':
        /* ST_CALLSITE[0051EB06]: CALL 0x00402cac; direct=00402CAC HelpPanelTy::SpecProc */
        st::fn_00402CAC(this_00,(int)pvVar6,uVar18,'\0');
        break;
      case '\f':
        /* ST_CALLSITE[0051EB12]: CALL 0x00403bc0; direct=00403BC0 HelpPanelTy::NatProc */
        st::fn_00403BC0(this_00,(int)pvVar6,'\0');
      }
      bVar24 = true;
switchD_0051ea9b_caseD_0:
      if (bVar24) {
        /* ST_CALLSITE[0051EB2F]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      /* ST_CALLSITE[0051EB55]: CALL 0x00405362; direct=00405362 HelpPanelTy::ChangeTree */
      st::fn_00405362(this_00,local_1c,(message->arg0).i32);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_SIDTY_8163:
      if (this_00->field_01A1 != CASE_A) {
        this_00->field_01B7 = (message->arg0).u32;
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      this_00->field_01BF = ((message->arg0).u32);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_OPTPANELTY_8164:
      pcVar26 = st::function_address_boundary_cast<code *>(st::fn_00529FE0);
      pCVar17 = st::fn_0040577C(st::mutable_c_string("BUT_SLUP"),0);
      bVar22 = 6;
      break;
    case MESS_OPTPANELTY_8165:
      pcVar26 = st::function_address_boundary_cast<code *>(st::fn_00529FE0);
      pCVar17 = st::fn_0040577C(st::mutable_c_string("BUT_SLDN"),0);
      bVar22 = 6;
      break;
    case MESS_SHARED_8166:
      /* ST_CALLSITE[0051EBAF]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
      pBVar13 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0220),0);
      /* ST_CALLSITE[0051EBC2]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0068),0x1c3,0x2d,'\x06',
             reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar13));
      /* ST_CALLSITE[0051EBDC]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pBVar13 = st::fn_0070B3A0(reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(this_00->field_0220),
                             (*(int *)((message->arg2).u32 + 0x1c) != 1) + 1);
      /* ST_CALLSITE[0051EBF7]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229(reinterpret_cast<RecoveredSourceFamily_dibcopy *>(this_00->field_0068),0x1c3,
             (message->arg0).words.high + 0x2d,'\x06',
             reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar13));

      st::fn_006B3640
                (reinterpret_cast<int *>(g_ddxContext_008075A8),this_00->field_0060,0xffffffff,this_00->field_003C,
                 this_00->field_0044);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    default:
      goto cf_common_exit_0051F19A;
    }
  }
  else {
    switch(SVar3) {
    case MESS_SHARED_C09F:
      /* ST_CALLSITE[0051F06C]: CALL 0x004029c8; direct=004029C8 HelpPanelTy::HomeBut */
      st::fn_004029C8(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_BEHPANELTY_C0A0:
      /* ST_CALLSITE[0051F087]: CALL 0x00402e2d; direct=00402E2D HelpPanelTy::BackBut */
      st::fn_00402E2D(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_FSGSTY_C0A1:
      /* ST_CALLSITE[0051F0A2]: CALL 0x00405803; direct=00405803 HelpPanelTy::IndexBut */
      st::fn_00405803(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_SHARED_C0A2:
      /* ST_CALLSITE[0051F0BD]: CALL 0x00403b43; direct=00403B43 HelpPanelTy::PrevBut */
      st::fn_00403B43(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_SHARED_C0A3:
      /* ST_CALLSITE[0051F0D8]: CALL 0x00401a1e; direct=00401A1E HelpPanelTy::NextBut */
      st::fn_00401A1E(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_BLDLABPANELTY_C0A4:
      /* ST_CALLSITE[0051F0F3]: CALL 0x00405c31; direct=00405C31 HelpPanelTy::BwdBut */
      st::fn_00405C31(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_FRMPANELTY_C0A5:
      /* ST_CALLSITE[0051F10E]: CALL 0x004039cc; direct=004039CC HelpPanelTy::FwdBut */
      st::fn_004039CC(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    default:
      goto cf_common_exit_0051F19A;
    case MESS_INTERCOMPANELTY_C0AF:
      pcVar25 = st::mutable_c_string("BUT_HLPHOME");
      break;
    case 0xc0b0:
      pcVar25 = st::mutable_c_string("BUT_HLPBACK");
      break;
    case MESS_BEHPANELTY_C0B1:
      pcVar25 = st::mutable_c_string("BUT_HLPINDEX");
      break;
    case 0xc0b2:
      pcVar25 = st::mutable_c_string("BUT_HLPPREV");
      break;
    case MESS_BLDLABPANELTY_C0B3:
      pcVar25 = st::mutable_c_string("BUT_HLPNEXT");
      break;
    case MESS_RESEARCHPANELTY_C0B4:
      pcVar25 = st::mutable_c_string("BUT_HLPBWD");
      break;
    case MESS_SHARED_C0B5:
      pcVar25 = st::mutable_c_string("BUT_HLPFWD");
    }
    pcVar26 = st::function_address_boundary_cast<code *>(st::fn_00529F90);
    pCVar17 = st::fn_0040577C(pcVar25,0);
    bVar22 = 1;
  }
  /* ST_CALLSITE[0051F195]: CALL 0x00403495; direct=00403495 UPanelTy::PaintBut */
  st::fn_00403495(reinterpret_cast<UPanelTy *>(this_00),reinterpret_cast<AnonShape_0053D7A0_044B6141 *>(message),bVar22,reinterpret_cast<char *>(pCVar17),
                     pcVar26);
cf_common_exit_0051F19A:
  g_currentExceptionFrame = local_84.previous;
  return 0;
switchD_0051e4d9_caseD_6:
  if (st::machine_word_boundary_cast<uint>(this_00->field_01A3) == st::machine_word_boundary_cast<uint>((void *)0x1)) {
    local_10 = reinterpret_cast<undefined4 *>(&DAT_007c2b58);
    local_18 = 0x33;
  }
  else if (st::machine_word_boundary_cast<uint>(this_00->field_01A3) == st::machine_word_boundary_cast<uint>((void *)0x2)) {
    local_10 = reinterpret_cast<undefined4 *>(&DAT_007c2df0);
    local_18 = 0x39;
  }
  else {
    local_10 = &DAT_007c30d8;
    local_18 = 0x46;
  }
  uVar21 = 0;
  if ((ushort)local_18 == 0) {
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  local_28 = 0x1a;
  local_24 = 0xe;
  local_1c = (int *)(uint)(ushort)this_00->field_01AF;
  while( true ) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_30 = *(int *)((int)local_10 + (uint)uVar21 * 0xd + 5) + 0x21 + this_00->field_003C;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_2c = (*(int *)((int)local_10 + (uint)uVar21 * 0xd + 9) -
               (uint)(ushort)this_00->field_01B1 * this_00->field_01C3) + (int)local_1c + 0x16 +
               this_00->field_0044;
    if ((((int)local_c < local_30) || (local_30 + 0x1a <= (int)local_c)) ||
       (((int)local_8_mg0 < local_2c || (local_2c + 0xe <= (int)local_8_mg0)))) {
      bVar24 = false;
    }
    else {
      bVar24 = true;
    }
    if ((bVar24) && ((int)local_8_mg0 < this_00->field_0044 + 300)) break;
    uVar21 = uVar21 + 1;
    if ((ushort)local_18 <= uVar21) {
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
  }
  /* ST_CALLSITE[0051E5EF]: CALL 0x00402833; direct=00402833 HelpPanelTy::TechProc */
  st::fn_00402833(this_00,*(uint *)((int)local_10 + (uint)uVar21 * 0xd),
           *(byte *)((int)local_10 + (uint)uVar21 * 0xd + 4),'\0');
  /* ST_CALLSITE[0051E5F6]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
  st::fn_00405100(this_00);
  g_currentExceptionFrame = local_84.previous;
  return 0;
LAB_0051e1b2:
  this_00->field_01DB = 0x46;
switchD_0051dfcc_caseD_7:
  STPiece<0,2>(iVar9) = this_00->field_0178;
  STPiece<2,2>(iVar9) = this_00->field_017A;
  if (st::machine_word_boundary_cast<uint>((undefined4 *)iVar9) == st::machine_word_boundary_cast<uint>(local_10)) {
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (iVar9 != 0) {
    this_00->field_0028 = 0x4202;
    *(undefined2 *)&this_00->field_0x2c = 0;
    *(undefined2 *)&this_00->field_0x2e = 2;
    this_00->field_0030 = (undefined2)iVar9;
    this_00->field_0032 = STPiece<2,2>(iVar9);
    if (g_cursorClass_00802A30 != nullptr) {
      /* ST_CALLSITE[0051E1F4]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
      g_cursorClass_00802A30->GetMessage((STMessage *)&this_00->field_0x18);
    }
  }
  *(undefined4 **)&this_00->field_0178 = local_10;
  if (local_10 == nullptr) {
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  this_00->field_0028 = 0x4201;
  *(undefined2 *)&this_00->field_0x2c = 0;
  *(undefined2 *)&this_00->field_0x2e = 2;
  *(undefined4 **)&this_00->field_0030 = local_10;
  /* ST_CALLSITE[0051E227]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
  g_cursorClass_00802A30->GetMessage((STMessage *)&this_00->field_0x18);
  g_currentExceptionFrame = local_84.previous;
  return 0;
}
