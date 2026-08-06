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
  int iVar4;
  DArrayTy *pDVar5;
  void *pvVar6;
  char *pcVar7;
  LPSTR pCVar8;
  ushort *puVar9;
  ccFntTy *pcVar10;
  int uVar17;
  undefined4 uVar11;
  int local_EAX_1308;
  AnonPointee_HelpPanelTy_0218 *pAVar12;
  uint *resourceString;
  int *piVar13;
  undefined4 *puVar14;
  UINT *pUVar15;
  uint uVar16;
  uint uVar18;
  UINT *pUVar19;
  int iVar20;
  undefined4 uVar21;
  int iVar22;
  short sVar23;
  ushort uVar24;
  byte bVar25;
  undefined4 uVar26;
  int iVar27;
  undefined4 uVar28;
  undefined4 uVar29;
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
  iVar4 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar27 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0xac,0,iVar4,"%s"
                                ,"HelpPanelTy::InitHelpPanel");
    if (iVar27 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,"E:\\__titans\\Andrey\\helppan.cpp",0xac);
    return;
  }
  g_helpPanel_00801690 = local_10;
  pDVar5 = st::fn_006AE290(nullptr,300,0x14,0x32);
  this_00->field_01B3 = (AnonPointee_HelpPanelTy_01B3 *)pDVar5;
  pDVar5 = st::fn_006AE290(nullptr,200,0x14,0x32);
  this_00->field_01BB = pDVar5;
  pDVar5 = st::fn_006AE290(nullptr,100,9,0x32);
  this_00->field_01CB = pDVar5;
  pDVar5 = st::fn_006AE290(nullptr,0x14,0x19,0x14);
  this_00->field_01D7 = pDVar5;
  this_00->field_0253 = 0;
  this_00->field_0252 = 0;
  this_00->field_0251 = 0;
  this_00->field_0250 = 0;
  uVar18 = 0;
  if (*(int *)sizeHelp_exref != 0) {
    piVar13 = (int *)(this_00->field_01C7 + 0xd);
    do {
      if (*(char *)((int)piVar13 + -5) == '\b') {
        iVar4 = *piVar13;
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
      piVar13 = (int *)((int)piVar13 + 0x11);
    } while (uVar18 < *(uint *)sizeHelp_exref);
  }
  local_8 = 0;
  if (*(int *)sizeHelp_exref != 0) {
    local_c = nullptr;
    do {
      puVar14 = (undefined4 *)((int)local_c + this_00->field_01C7);
      if (*(char *)(puVar14 + 2) != '\0') {
        pDVar5 = this_00->field_01BB;
        bVar3 = true;
        uVar18 = 0;
        local_14 = (char *)0x1;
        if (pDVar5->count != 0) {
          if (pDVar5->count == 0) {
            pvVar6 = nullptr;
            goto LAB_00510f80;
          }
          do {
            pvVar6 = DArrayAt<void>(pDVar5, uVar18);
LAB_00510f80:
            if (((STField<char>(pvVar6,8) == *(char *)(puVar14 + 2)) &&
                (STField<int>(pvVar6,9) == STField<int>(puVar14,9))) &&
               (STField<int>(pvVar6,0xd) == STField<int>(puVar14,0xd))) {
              bVar3 = false;
              goto LAB_00510fa9;
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < pDVar5->count);
          bVar3 = true;
        }
LAB_00510fa9:
        if (bVar3) {
          local_28 = *puVar14;
          local_24 = puVar14[1];
          local_20 = puVar14[2];
          local_1c = puVar14[3];
          local_18 = *(undefined1 *)(puVar14 + 4);
          local_17 = 0;
          local_16 = 0;
          local_15 = 0;
          st::fn_006AE1C0(pDVar5,&local_28);
        }
      }
      local_8 = local_8 + 1;
      local_c = (undefined4 *)((int)local_c + 0x11);
    } while (local_8 < *(uint *)sizeHelp_exref);
  }
  do {
    pDVar5 = this_00->field_01BB;
    local_c = nullptr;
    uVar18 = pDVar5->count;
    uVar16 = 0;
    if (uVar18 != 1) {
      do {
        if (uVar16 < uVar18) {
          pUVar19 = DArrayAt<UINT>(pDVar5, uVar16);
        }
        else {
          pUVar19 = nullptr;
        }
        local_8 = uVar16 + 1;
        if (local_8 < uVar18) {
          pUVar15 = DArrayAt<UINT>(pDVar5, local_8);
        }
        else {
          pUVar15 = nullptr;
        }
        if ((pUVar19 != nullptr) && (pUVar15 != nullptr)) {
          local_14 = st::fn_006B0140(*pUVar15,g_hINSTANCE_00807618);
          pcVar7 = st::fn_006B0140(*pUVar19,g_hINSTANCE_00807618);
          iVar4 = st::fn_0072E620(pcVar7,local_14);
          if (0 < iVar4) {
            st::fn_006B0CD0((AnonShape_00413AF0_B6B4EE9A *)this_00->field_01BB,uVar16,local_8);
            local_c = (undefined4 *)0x1;
          }
        }
        pDVar5 = this_00->field_01BB;
        uVar18 = pDVar5->count;
        uVar16 = local_8;
      } while (local_8 < uVar18 - 1);
    }
  } while (local_c != nullptr);
  iVar4 = 1;
  piVar13 = nullptr;
  pCVar8 = st::fn_0040577C("BKG_HELPW",0);
  puVar9 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar13,iVar4);
  this_00->field_01DC = puVar9;
  puVar9 = st::fn_006F1CE0(g_cMf32_00806790,1,"HLP_OBJ_BKG",nullptr,1);
  iVar4 = 1;
  piVar13 = nullptr;
  this_00->field_021C = puVar9;
  pCVar8 = st::fn_0040577C("BUT_HLPLINK",0);
  puVar9 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar8,piVar13,iVar4);
  this_00->field_024C = puVar9;
  pcVar10 = (ccFntTy *)ccFntTy::operator_new(0x19d,g_interSystem_00802A28->field_0028);
  this_00->field_01E0 = pcVar10;
  pcVar10->field_0058 = 0;
  pcVar10->field_005C = 0;
  pcVar10 = (ccFntTy *)ccFntTy::operator_new(0x19d,(ccFntTy *)g_interSystem_00802A28->field_002C);
  this_00->field_01E4 = pcVar10;
  pcVar10->field_0058 = 1;
  pcVar10->field_005C = 0;
  pcVar10 = (ccFntTy *)ccFntTy::operator_new(0x19d,g_cMf32_00806790,"MONEY_FONT",0);
  this_00->field_01E8 = pcVar10;
  pcVar10->field_0058 = 1;
  pcVar10->field_005C = 0;
  puVar14 = nullptr;
  iVar27 = 0;
  iVar4 = 1;
  bVar25 = 0;
  uVar18 = 0xffffffff;
  pCVar8 = st::fn_0040577C("HLPTRACK",0);
  puVar9 = st::fn_00709AF0
                     (PTR_00806794,CASE_B,pCVar8,uVar18,bVar25,iVar4,iVar27,puVar14);
  this_00->field_0220 = puVar9;
  puVar9 = st::fn_00709AF0
                     (PTR_00806794,CASE_B,"BKG_HLPTTREE",0xffffffff,0,1,0,nullptr
                     );
  this_00->field_0224 = puVar9;
  puVar9 = st::fn_00709AF0
                     (PTR_00806794,CASE_B,&DAT_007c20a0,0xffffffff,0,1,0,nullptr);
  this_00->field_0230 = puVar9;
  puVar9 = st::fn_00709AF0
                     (PTR_00806794,CASE_B,&DAT_007c38c8,0xffffffff,0,1,0,nullptr);
  this_00->field_0234 = puVar9;
  puVar9 = st::fn_00709AF0
                     (PTR_00806794,CASE_B,"HLP_UPG",0xffffffff,0,1,0,nullptr);
  this_00->field_0228 = puVar9;
  puVar9 = st::fn_00709AF0
                     (PTR_00806794,CASE_B,"HLP_UPGD",0xffffffff,0,1,0,nullptr);
  this_00->field_022C = puVar9;
  puVar9 = st::fn_00709AF0
                     (PTR_00806794,CASE_B,&DAT_007c2048,0xffffffff,0,1,0,nullptr);
  this_00->field_0238 = puVar9;
  puVar9 = st::fn_00709AF0
                     (PTR_00806794,CASE_B,"HLP_FRAME",0xffffffff,0,1,0,nullptr);
  this_00->field_0248 = puVar9;
  puVar9 = st::fn_00709AF0
                     (PTR_00806794,CASE_B,"BOATS_R",0xffffffff,0,1,0,nullptr);
  this_00->field_023C = puVar9;
  puVar9 = st::fn_00709AF0
                     (PTR_00806794,CASE_B,&DAT_007c1910,0xffffffff,0,1,0,nullptr);
  this_00->field_0240 = puVar9;
  puVar9 = st::fn_00709AF0
                     (PTR_00806794,CASE_B,"INF_WEAP",0xffffffff,0,1,0,nullptr);
  pcVar10 = this_00->field_01E4;
  this_00->field_0244 = puVar9;
  if (pcVar10->field_00A0 != 0) {
    st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar10);
  }
  iVar4 = *(int *)&pcVar10->field_0x8a;
  iVar27 = 1;
  puVar9 = this_00->field_01DC + 0x14;
  uVar17 = st::fn_006B4FE0((int)this_00->field_01DC);
  uVar11 = st::fn_006B50C0(0x19c,iVar4 + 1,(uint)this_00->field_01DC[7],uVar17,(undefined4 *)puVar9,
                        iVar27);
  this_00->field_01EC = uVar11;
  iVar4 = 1;
  puVar9 = this_00->field_01DC + 0x14;
  local_EAX_1308 = st::fn_006B4FE0((int)this_00->field_01DC);
  pAVar12 = (AnonPointee_HelpPanelTy_0218 *)
            st::fn_006B50C0(0x19c,600,(uint)this_00->field_01DC[7],local_EAX_1308,(undefined4 *)puVar9,
                         iVar4);
  this_00->field_0218 = pAVar12;
  pAVar1 = this_00->field_0068;
  uVar18 = pAVar1->field_0014;
  if (uVar18 == 0) {
    uVar18 = ((uint)(ushort)pAVar1->field_000E * pAVar1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
             pAVar1->field_0008;
  }
  puVar14 = (undefined4 *)st::fn_006B4FA0((int *)pAVar1);
  for (uVar16 = uVar18 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *puVar14 = 0xffffffff;
    puVar14 = puVar14 + 1;
  }
  for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
    *(undefined1 *)puVar14 = 0xff;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
  }
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0,'\x01',(byte *)this_00->field_01DC
        );
  st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0068,0,0x6c,2,0x117,0xc);
  uVar18 = 0;
  iVar27 = -1;
  iVar4 = -2;
  resourceString = (uint *)st::fn_006B0140(0x2734,g_hINSTANCE_00807618);
  st::fn_007119C0(this_00->field_01E0,resourceString,iVar4,iVar27,uVar18);
  uVar29 = 0;
  uVar28 = 0;
  pcVar7 = nullptr;
  uVar26 = 0;
  uVar24 = 0;
  sVar23 = 0;
  uVar21 = 0xc000;
  uVar11 = 0xbfff;
  pCVar8 = st::fn_0040577C("BUT_MEDIUM",0);
  uVar11 = st::fn_0040398B((UPanelTy *)this_00,0,1,0x195,0x17b,1,pCVar8,uVar11,uVar21,sVar23,
                               uVar24,uVar26,pcVar7,uVar28,uVar29);
  local_c = &this_00->field_0180;
  this_00->field_017C = uVar11;
  iVar4 = 0;
  iVar27 = 0x1e;
  local_8 = 7;
  do {
    if (iVar27 < 0x127) {
                    /* WARNING: Could not recover jumptable at 0x0051146f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)(&PTR_LAB_00511560)[iVar4])();
      return;
    }
    uVar26 = 0;
    iVar20 = iVar4 + 0xc09f;
    uVar21 = 0;
    pcVar7 = nullptr;
    uVar11 = 10000;
    uVar24 = 0;
    iVar22 = iVar4 + 0xc0af;
    sVar23 = 2;
    pCVar8 = st::fn_0040577C("BUT_HLPHOME",0);
    uVar11 = st::fn_0040398B((UPanelTy *)this_00,0,1,iVar27,0x151,1,pCVar8,iVar20,iVar22,sVar23,
                                 uVar24,uVar11,pcVar7,uVar21,uVar26);
    iVar4 = iVar4 + 1;
    iVar27 = iVar27 + 0x2c;
    *local_c = uVar11;
    local_c = local_c + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  st::fn_004027AC(this_00);
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
    puVar4 = &pHVar2->field_0180;
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
      st::fn_006AE110((DArrayTy *)pHVar2->field_01B3);
    }
    pHVar2->field_01B3 = nullptr;
    if (pHVar2->field_01BB != nullptr) {
      st::fn_006AE110(pHVar2->field_01BB);
    }
    pHVar2->field_01BB = nullptr;
    if (pHVar2->field_01CB != nullptr) {
      st::fn_006AE110(pHVar2->field_01CB);
    }
    pHVar2->field_01CB = nullptr;
    if ((DArrayTy *)pHVar2->field_01D7 != nullptr) {
      st::fn_006AE110((DArrayTy *)pHVar2->field_01D7);
    }
    pHVar2->field_01D7 = 0;
    if ((DArrayTy *)pHVar2->field_01D3 != nullptr) {
      st::fn_006B5570((DArrayTy *)pHVar2->field_01D3);
    }
    pHVar2->field_01D3 = nullptr;
    puVar4 = &pHVar2->field_01F0;
    local_8 = 10;
    do {
      if (*puVar4 != 0) {
        st::fn_006F20E0(g_cMf32_00806790,puVar4);
      }
      puVar4 = puVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    pHVar2->field_0238 = 0;
    pHVar2->field_0248 = 0;
    pHVar2->field_022C = 0;
    pHVar2->field_0228 = 0;
    pHVar2->field_0234 = 0;
    pHVar2->field_0230 = 0;
    pHVar2->field_0224 = 0;
    pHVar2->field_0220 = 0;
    pHVar2->field_0244 = 0;
    pHVar2->field_0240 = 0;
    pHVar2->field_023C = 0;
    if (pHVar2->field_01E0 != nullptr) {
      st::fn_00710560((uint *)pHVar2->field_01E0);
      pHVar2->field_01E0 = nullptr;
    }
    if (pHVar2->field_01E4 != nullptr) {
      st::fn_00710560((uint *)pHVar2->field_01E4);
      pHVar2->field_01E4 = nullptr;
    }
    if (pHVar2->field_01E8 != nullptr) {
      st::fn_00710560((uint *)pHVar2->field_01E8);
      pHVar2->field_01E8 = nullptr;
    }
    if (pHVar2->field_0218 != nullptr) {
      st::fn_006AB060(&pHVar2->field_0218);
    }
    if (pHVar2->field_01EC != 0) {
      st::fn_006AB060((void **)&pHVar2->field_01EC);
    }
    if (pHVar2->field_024C != nullptr) {
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&pHVar2->field_024C);
    }
    if (pHVar2->field_01DC != nullptr) {
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&pHVar2->field_01DC);
    }
    if (pHVar2->field_021C != nullptr) {
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&pHVar2->field_021C);
    }
    g_helpPanel_00801690 = nullptr;
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0xcf,0,errorCode,
                             "%s","HelpPanelTy::DoneHelpPanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\helppan.cpp",0xcf);
  return;
}

// 00511AB0 HelpPanelTy::CheckBkView
#line 4 "decomp/ST.exe/functions/00511AB0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::CheckBkView
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:2: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=00511ACA MOV ECX,dword ptr [EBP + 0xc];
   first-use mask */

void __thiscall st::fn_00511AB0(HelpPanelTy *this,int param_1,ushort param_2)

{
  AnonPointee_HelpPanelTy_0218 **value;
  AnonPointee_HelpPanelTy_0218 *pAVar1;
  HelpPanelTy *pHVar3;
  int iVar4;
  int uVar5;
  AnonPointee_HelpPanelTy_0218 *pAVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  uint local_8;

  if ((this->field_0218 != nullptr) &&
     ((int)this->field_0218->field_0008 < (int)((uint)param_2 + param_1))) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    iVar4 = st::fn_0072D7F0(local_50.jumpBuffer,0);
    pHVar3 = local_c;
    if (iVar4 == 0) {
      iVar4 = 1;
      pAVar5 = local_c->field_0218;
      value = &local_c->field_0218;
      puVar9 = local_c->field_01DC + 0x14;
      uVar5 = st::fn_006B4FE0((int)local_c->field_01DC);
      pAVar5 = (AnonPointee_HelpPanelTy_0218 *)
               st::fn_006B50C0(pAVar5->field_0004,pAVar5->field_0008 + 0x32,(uint)pHVar3->field_01DC[7]
                            ,uVar5,(undefined4 *)puVar9,iVar4);
      local_8 = pAVar5->field_0014;
      if (local_8 == 0) {
        local_8 = ((uint)(ushort)pAVar5->field_000E * pAVar5->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                  pAVar5->field_0008;
      }
      puVar6 = (undefined4 *)st::fn_006B4FA0((int *)pAVar5);
      for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar6 = 0xffffffff;
        puVar6 = puVar6 + 1;
      }
      for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar6 = 0xff;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      pAVar1 = *value;
      st::fn_006B55F0
                ((RecoveredSourceFamily_dibcopy *)pAVar5,0,0,0,(byte *)pAVar1,0,0,0,
                 pAVar1->field_0004,pAVar1->field_0008);
      st::fn_006AB060(value);
      *value = pAVar5;
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar7 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0xdc,0,iVar4,"%s",
                               "HelpPanelTy::CheckBkView");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,"E:\\__titans\\Andrey\\helppan.cpp",0xdc);
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
  int iVar3;
  int iVar4;
  int *piVar5;
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
    this->field_002E = sVar2;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    this_00 = local_8;
    if (iVar4 == 0) {
      if (local_8->field_017C != 0) {
        st::fn_006E6080(local_8,2,local_8->field_017C,(undefined4 *)&local_8->field_0x18);
      }
      piVar5 = &this_00->field_0180;
      iVar4 = 7;
      do {
        if (*piVar5 != 0) {
          st::fn_006E6080(this_00,2,*piVar5,(undefined4 *)&this_00->field_0x18);
        }
        piVar5 = piVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if (this_00->field_019C != 0) {
        st::fn_006E6080(this_00,2,this_00->field_019C,(undefined4 *)&this_00->field_0x18);
        memset(&this_00->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0xf2,0,iVar4,"%s",
                               "HelpPanelTy::ShiftControls");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,"E:\\__titans\\Andrey\\helppan.cpp",0xf2);
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
   decompilation contains no value return */

void __thiscall st::fn_00511DF0(HelpPanelTy *this,int param_1)

{
  short sVar1;
  HelpPanelTy *this_00;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x10f,0,errorCode,
                               "%s","HelpPanelTy::SwitchOptPanel");
    if (iVar3 == 0) {
      st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\helppan.cpp",0x10f);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  sVar1 = local_8->field_0172;
  if (sVar1 == 1) {
    if (param_1 != 0) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    if (local_8->field_0178 != 0) {
      local_8->field_0028 = 0x4202;
      *(undefined2 *)&local_8->field_0x2c = 0;
      local_8->field_002E = 2;
      *(undefined4 *)&local_8->field_0x30 = local_8->field_0178;
      if (g_cursorClass_00802A30 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)g_cursorClass_00802A30->field_0000)(&local_8->field_0x18);
      }
    }
    ShiftControls(this_00,0);
  }
  else {
    if (sVar1 == 2) {
      if (param_1 == 0) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      local_8->field_0172 = 3;
      st::fn_00405E2F(CASE_AF);
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      st::fn_00402ED2(g_cPanel_00801688,0);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    if (sVar1 != 3) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  }
  if (param_1 == 0) {
    this_00->field_0172 = 4;
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
  undefined4 uVar3;
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
        st::fn_00401A73(g_researchPanel_008016E8,'\0');
      }
      if (g_bldBoatPanel_0080167C != nullptr) {
        st::fn_00401A73(g_bldBoatPanel_0080167C,'\0');
      }
      if (g_bldObjPanel_00801684 != nullptr) {
        st::fn_00401A73(g_bldObjPanel_00801684,'\0');
      }
      if (g_infocPanel_00801698 != nullptr) {
        (*g_infocPanel_00801698->vtable->SetPanel)((SpecPanelTy *)g_infocPanel_00801698,'\0');
      }
      if (g_tradePanel_00802A44 != nullptr) {
        st::fn_00404AF7(g_tradePanel_00802A44,'\0','\0');
      }
      if (g_behPanel_00801678 != nullptr) {
        (*g_behPanel_00801678->vtable->SetPanel)((SpecPanelTy *)g_behPanel_00801678,'\0');
      }
      if (g_sAMPanel_008016EC != nullptr) {
        (*g_sAMPanel_008016EC->vtable->SetPanel)((SpecPanelTy *)g_sAMPanel_008016EC,'\0');
      }
      if (g_upgPanel_00802A48 != nullptr) {
        (*g_upgPanel_00802A48->vtable->SetPanel)((SpecPanelTy *)g_upgPanel_00802A48,'\0');
      }
      if (g_bldLabPanel_00801680 != nullptr) {
        st::fn_00401A73(g_bldLabPanel_00801680,'\0');
      }
      if (g_frmPanel_0080168C != nullptr) {
        (*g_frmPanel_0080168C->vtable->SetPanel)((SpecPanelTy *)g_frmPanel_0080168C,'\0');
      }
      if (g_playPanel_008016E4 != nullptr) {
        st::fn_0040425F(g_playPanel_008016E4,'\0');
      }
      if (g_optPanel_008016DC != nullptr) {
        st::fn_00402630(g_optPanel_008016DC);
      }
      st::fn_00405C3B(this_00,1);
      g_currentExceptionFrame = local_4c.previous;
      return 1;
    }
    if ((g_cPanel_00801688 != nullptr) && (g_cPanel_00801688->field_023F == CASE_1)) {
      st::fn_00402ED2(g_cPanel_00801688,1);
    }
    st::fn_00405C3B(this_00,0);
    g_currentExceptionFrame = local_4c.previous;
    return 1;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x12e,0,errorCode,
                             "%s","HelpPanelTy::SetPanel");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\helppan.cpp",0x12e);
  return 1;
}

// 005123A0 HelpPanelTy::CreateList
#line 4 "decomp/ST.exe/functions/005123A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::CreateList */

void __thiscall st::fn_005123A0(HelpPanelTy *this)

{
  HelpPanelTy *this_00;
  DArrayTy *pDVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_520 [4];
  undefined4 local_510;
  undefined4 local_50c;
  dword local_508;
  undefined4 local_504;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined4 local_3f4;
  int local_3f0 [4];
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  ushort *local_2cc;
  int local_2c8;
  undefined4 local_274;
  int local_270 [26];
  undefined4 local_208;
  ushort *local_14c;
  int local_148;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_e8;
  int local_e4;
  int local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_60;
  undefined4 local_5c;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  piVar5 = local_520;
  local_8 = this;
  for (iVar3 = 0x135; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
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
              ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x21,0x16,
               (byte *)this_00->field_01DC,0,0x21,0x16,0x19c,0x118);
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
      pDVar2 = (DArrayTy *)this_00->field_01B3;
    }
    else {
      pDVar2 = this_00->field_01BB;
    }
    local_508 = pDVar2->count;
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
    local_2cc = st::fn_0070AA70(g_cMf32_00806790,"BUT_MSLUP",0,1);
    local_2c8 = st::fn_0070A6F0(g_cMf32_00806790,0x12,"BUT_MSLUP",1);
    local_390 = this_00->field_0008;
    iVar3 = this_00->field_005C;
    local_38c = 2;
    local_274 = 2;
    local_2e0 = 500;
    local_2dc = 0x32;
    local_388 = 0x8164;
    piVar5 = local_3f0;
    piVar6 = local_270;
    memmove(piVar6, piVar5, 0x17c); /* compiler REP MOVS byte copy */
    if (iVar3 == 0) {
      local_270[3] = -this_00->field_0048;
    }
    else {
      local_270[3] = this_00->field_0044;
    }
    local_270[3] = local_270[3] + 0x109;
    local_14c = st::fn_0070AA70(g_cMf32_00806790,"BUT_MSLDN",0,1);
    local_148 = st::fn_0070A6F0(g_cMf32_00806790,0x12,"BUT_MSLDN",1);
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
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,7,&this_00->field_019C,nullptr,local_520,0);
    iVar3 = this_00->field_019C;
    if (iVar3 != 0) {
      this_00->field_0028 = 0x20;
      *(undefined4 *)&this_00->field_0x2c = 1;
      st::fn_006E6080(this_00,2,iVar3,(undefined4 *)&this_00->field_0x18);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x1a5,0,iVar3,"%s",
                             "HelpPanelTy::CreateList");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\helppan.cpp",0x1a5);
  return;
}

// 00512830 HelpPanelTy::CreateSlider
#line 4 "decomp/ST.exe/functions/00512830/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::CreateSlider */

void __thiscall st::fn_00512830(HelpPanelTy *this,int param_1)

{
  HelpPanelTy *this_00;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_424 [6];
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  ushort *local_2f8;
  int local_2f4;
  undefined4 local_2a0;
  int local_29c [26];
  undefined4 local_234;
  ushort *local_178;
  int local_174;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_114;
  int local_110;
  int local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_64;
  undefined4 local_60;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  piVar4 = local_424;
  local_8 = this;
  for (iVar2 = 0xf6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
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
    local_2f8 = st::fn_0070AA70(g_cMf32_00806790,"BUT_MSLDN",0,1);
    local_2f4 = st::fn_0070A6F0(g_cMf32_00806790,0x12,"BUT_MSLDN",1);
    iVar2 = this_00->field_005C;
    local_3b8 = 2;
    local_314 = 1;
    local_310 = 1;
    local_2a0 = 2;
    local_3bc = this_00->field_0008;
    local_3b4 = 0x8165;
    piVar4 = local_424 + 2;
    piVar5 = local_29c;
    memmove(piVar5, piVar4, 0x17c); /* compiler REP MOVS byte copy */
    if (iVar2 == 0) {
      local_29c[3] = -this_00->field_0048;
    }
    else {
      local_29c[3] = this_00->field_0044;
    }
    local_29c[3] = local_29c[3] + 0x16;
    local_178 = st::fn_0070AA70(g_cMf32_00806790,"BUT_MSLUP",0,1);
    local_174 = st::fn_0070A6F0(g_cMf32_00806790,0x12,"BUT_MSLUP",1);
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
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,4,&this_00->field_019C,nullptr,local_424,0);
    iVar2 = this_00->field_019C;
    if ((iVar2 != 0) && (param_1 != 0)) {
      this_00->field_0028 = 0x20;
      *(undefined4 *)&this_00->field_0x2c = 1;
      st::fn_006E6080(this_00,2,iVar2,(undefined4 *)&this_00->field_0x18);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x1df,0,iVar2,"%s",
                             "HelpPanelTy::CreateSlider");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\Andrey\\helppan.cpp",0x1df);
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

void __thiscall st::fn_00512BE0(HelpPanelTy *this,int param_1)

{
  ccFntTy *pcVar1;
  HelpPanelTy *this_00;
  int iVar3;
  int *piVar5;
  int *piVar6;
  int local_8c4 [4];
  undefined4 local_8b4;
  int local_8b0;
  undefined4 local_8ac;
  undefined4 local_8a8;
  int local_8a4;
  int local_8a0;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  int local_808 [4];
  undefined4 local_7f8;
  undefined4 local_7f4;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_700;
  undefined4 local_6fc;
  undefined4 local_6f8;
  undefined4 local_6f4;
  ushort *local_6e4;
  int local_6e0;
  undefined4 local_68c;
  int local_688 [26];
  undefined4 local_620;
  ushort *local_564;
  int local_560;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_500;
  int local_4fc;
  int local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_5c;
  undefined4 local_58;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  piVar5 = local_8c4;
  local_8 = this;
  for (iVar3 = 0x21e; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
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
    local_8c4[3] = *(undefined4 *)(param_1 + 8);
    local_8b4 = 0x19c;
    if (pcVar1->field_00A0 != 0) {
      st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar1);
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
    local_6e4 = st::fn_0070AA70(g_cMf32_00806790,"BUT_MSLDN",0,1);
    local_6e0 = st::fn_0070A6F0(g_cMf32_00806790,0x12,"BUT_MSLDN",1);
    iVar3 = this_00->field_005C;
    local_700 = 1;
    local_6fc = 1;
    local_68c = 2;
    piVar5 = local_808;
    piVar6 = local_688;
    memmove(piVar6, piVar5, 0x17c); /* compiler REP MOVS byte copy */
    if (iVar3 == 0) {
      local_688[3] = -this_00->field_0048;
    }
    else {
      local_688[3] = this_00->field_0044;
    }
    local_688[3] = local_688[3] + 0x16;
    local_620 = 0x8164;
    local_564 = st::fn_0070AA70(g_cMf32_00806790,"BUT_MSLUP",0,1);
    local_560 = st::fn_0070A6F0(g_cMf32_00806790,0x12,"BUT_MSLUP",1);
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
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,8,&this_00->field_019C,nullptr,local_8c4,0);
    iVar3 = this_00->field_019C;
    if (iVar3 != 0) {
      this_00->field_0028 = 0x20;
      *(undefined4 *)&this_00->field_0x2c = 1;
      st::fn_006E6080(this_00,2,iVar3,(undefined4 *)&this_00->field_0x18);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x220,0,local_8c4[0],
                             "%s","HelpPanelTy ::CreateVText");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(local_8c4[0],0,"E:\\__titans\\Andrey\\helppan.cpp",0x220);
  return;
}

// 00513030 HelpPanelTy::ChangeTree
#line 4 "decomp/ST.exe/functions/00513030/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::ChangeTree */

void __thiscall st::fn_00513030(HelpPanelTy *this,int *param_1,int param_2)

{
  undefined1 *puVar1;
  DArrayTy *array;
  AnonPointee_HelpPanelTy_01B3 *pAVar2;
  undefined4 uVar3;
  bool bVar5;
  HelpPanelTy *this_00;
  byte bVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  int local_d0 [20];
  InternalExceptionFrame local_80;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  char local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  uint local_28;
  uint local_24;
  HelpPanelTy *local_20;
  uint local_1c;
  uint local_18;
  int *local_14;
  uint local_10;
  uint local_c;
  undefined1 local_6;
  char local_5;

  local_18 = param_2 + 1;
  local_14 = param_1;
  local_1c = 0;
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_20 = this;
  iVar7 = st::fn_0072D7F0(local_80.jumpBuffer,0);
  piVar12 = local_14;
  this_00 = local_20;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar10 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x26d,0,iVar7,
                                "%s","HelpPanelTy::ChangeTree");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar7,0,"E:\\__titans\\Andrey\\helppan.cpp",0x26d);
    return;
  }
  if (STField<char>(local_14,0x12) == '\0') {
    uVar9 = 0;
    memset(local_d0, 0, 0x50); /* compiler bulk-zero initialization */
    local_10 = local_10 & 0xffffff00;
    local_5 = '\0';
    if (*(uint *)sizeHelp_exref != 0) {
      piVar11 = (int *)this_00->field_01C7;
      do {
        if ((*piVar11 == *piVar12) && (piVar11[1] == piVar12[1])) {
          local_1c = uVar9;
          break;
        }
        uVar9 = uVar9 + 1;
        piVar11 = (int *)((int)piVar11 + 0x11);
      } while (uVar9 < *(uint *)sizeHelp_exref);
    }
    iVar10 = piVar12[1];
    local_24 = local_1c & 0xffff;
    iVar7 = local_24 - 1;
    local_c = local_24;
    if (0 < iVar7) {
      iVar14 = iVar7 * 0x11;
      do {
        if (iVar10 == 0) break;
        piVar12 = (int *)(this_00->field_01C7 + iVar14);
        if (*piVar12 == iVar10) {
          local_d0[local_10 & 0xff] = iVar10;
          iVar10 = piVar12[1];
          local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)((byte)local_10 + '\x01'));
          local_24 = local_c;
        }
        iVar7 = iVar7 + -1;
        iVar14 = iVar14 + -0x11;
      } while (0 < iVar7);
    }
    local_24 = local_24 + 1;
    uVar9 = local_18;
    if (local_24 < *(uint *)sizeHelp_exref) {
      uVar13 = local_24 * 0x11;
      local_c = uVar13;
      do {
        iVar7 = *(int *)(this_00->field_01C7 + 4 + uVar13);
        puVar15 = (undefined4 *)(this_00->field_01C7 + uVar13);
        local_c = uVar13;
        if (iVar7 == *local_14) {
          local_3c = *puVar15;
          local_38 = puVar15[1];
          local_34 = puVar15[2];
          local_30 = puVar15[3];
          local_2c = *(undefined1 *)(puVar15 + 4);
          local_2b = STField<char>(local_14,0x11) + '\x01';
          local_2a = 0;
          local_29 = 0;
          st::fn_006B11D0((uint *)this_00->field_01B3,uVar9 & 0xffff,&local_3c);
          uVar9 = uVar9 + 1;
          local_5 = '\x01';
          local_18 = uVar9;
        }
        else {
          if (iVar7 == 0) break;
          bVar5 = false;
          bVar6 = 0;
          local_6 = 0;
          local_28 = local_28 & 0xffffff00;
          if ((byte)local_10 != 0) {
            do {
              if (local_d0[local_28 & 0xff] == iVar7) {
                bVar5 = true;
                goto LAB_00513233;
              }
              bVar6 = bVar6 + 1;
              local_28 = STReplaceLowByte((uint32_t)(local_28), (uint8_t)(bVar6));
            } while (bVar6 < (byte)local_10);
            bVar5 = false;
          }
LAB_00513233:
          if (bVar5) break;
        }
        local_24 = local_24 + 1;
        uVar13 = uVar13 + 0x11;
        local_c = uVar13;
      } while (local_24 < *(uint *)sizeHelp_exref);
    }
    piVar12 = local_14;
    if (local_5 != '\0') {
      pAVar2 = this_00->field_01B3;
      if ((uVar9 & 0xffff) - 1 < *(uint *)&pAVar2->field_0xc) {
        iVar7 = ((uVar9 & 0xffff) - 1) * pAVar2->field_0008 + pAVar2->field_001C;
      }
      else {
        iVar7 = 0;
      }
      if (iVar7 != 0) {
        *(undefined1 *)(iVar7 + 0x13) = 1;
      }
    }
  }
  else {
    array = (DArrayTy *)local_20->field_01B3;
    uVar9 = param_2 + 1;
    uVar13 = array->count;
    while (((uVar9 < uVar13 &&
            (pvVar8 = DArrayAt<void>(array, uVar9), pvVar8 != nullptr
            )) && (STField<byte>(piVar12,0x11) < STField<byte>(pvVar8,0x11)))) {
      st::fn_006B0C70(array,uVar9);
      array = (DArrayTy *)this_00->field_01B3;
      uVar13 = array->count;
    }
  }
  STField<bool>(piVar12,0x12) = STField<char>(piVar12,0x12) == '\0';
  if ((this_00->field_019C != 0) && (this_00->field_01A1 == 0)) {
    st::fn_006B55F0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x21,0x16,
               (byte *)this_00->field_01DC,0,0x21,0x16,0x19c,0x118);
    puVar1 = &this_00->field_0x18;
    memset((void *)puVar1, 0, 0x20); /* compiler bulk-zero initialization */
    uVar3 = this_00->field_01B7;
    this_00->field_0028 = 0x28;
    *(undefined2 *)&this_00->field_0x2c = *(undefined2 *)&this_00->field_01B3->field_0xc;
    *(undefined2 *)&this_00->field_0x30 = 1;
    st::fn_006E6080(this_00,2,this_00->field_019C,(undefined4 *)puVar1);
    *(undefined2 *)&this_00->field_0x30 = 1;
    this_00->field_0032 = 1;
    this_00->field_0028 = 0x22;
    *(short *)&this_00->field_0x2c = (short)uVar3;
    st::fn_006E6080(this_00,2,this_00->field_019C,(undefined4 *)puVar1);
    this_00->field_0028 = 5;
    st::fn_006E6080(this_00,2,this_00->field_019C,(undefined4 *)puVar1);
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
  undefined4 local_13;
  undefined4 local_f;
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
        st::fn_006B0C70(pHVar3->field_01CB,dVar1 - 1);
        iVar4 = pHVar3->field_01CF;
      }
      index = pHVar3->field_01CF + 1;
      pHVar3->field_01CF = index;
      st::fn_006AE140(pHVar3->field_01CB,index,&local_14);
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar5 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x27c,0,iVar4,"%s"
                               ,"HelpPanelTy::PutToSHlp");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,"E:\\__titans\\Andrey\\helppan.cpp",0x27c);
  }
  return;
}

// 005135F0 HelpPanelTy::HomeBut
#line 4 "decomp/ST.exe/functions/005135F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::HomeBut */

void __thiscall st::fn_005135F0(HelpPanelTy *this)

{
  HelpPanelTy_field_01A1State HVar1;
  HelpPanelTy *this_00;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  InternalExceptionFrame local_64;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
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
      local_c->field_01AB = local_c->field_01A3;
    }
    else {
      local_c->field_01A2 = 0;
      local_c->field_01AB = 0;
    }
    local_c->field_01A1 = 0;
    local_c->field_01A3 = 0;
    if (local_c->field_0178 != 0) {
      local_c->field_0028 = 0x4202;
      *(undefined2 *)&local_c->field_0x2c = 0;
      local_c->field_002E = 2;
      *(undefined4 *)&local_c->field_0x30 = local_c->field_0178;
      if (g_cursorClass_00802A30 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)g_cursorClass_00802A30->field_0000)(&local_c->field_0x18);
      }
    }
    this_00->field_01CF = 0xffffffff;
    this_00->field_01CB->count = 0;
    st::fn_006B55F0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x21,0x16,
               (byte *)this_00->field_01DC,0,0x21,0x16,0x1b8,0x118);
    local_8 = 0;
    *(undefined4 *)&this_00->field_01B3->field_0xc = 0;
    this_00->field_01B7 = 0;
    if (*(int *)sizeHelp_exref != 0) {
      iVar3 = 0;
      do {
        puVar4 = (undefined4 *)(this_00->field_01C7 + iVar3);
        if (puVar4[1] == 0) {
          local_20 = *puVar4;
          local_1c = puVar4[1];
          local_18 = puVar4[2];
          local_14 = puVar4[3];
          local_10 = *(undefined1 *)(puVar4 + 4);
          local_f = 0;
          local_e = 0;
          local_d = 0;
          st::fn_006AE1C0((DArrayTy *)this_00->field_01B3,&local_20);
        }
        local_8 = local_8 + 1;
        iVar3 = iVar3 + 0x11;
      } while (local_8 < *(uint *)sizeHelp_exref);
    }
    st::fn_00401ACD(this_00);
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  g_currentExceptionFrame = local_64.previous;
  iVar5 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x295,0,iVar3,"%s",
                             "HelpPanelTy::HomeBut");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\helppan.cpp",0x295);
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
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  undefined4 local_8;

  if (this->field_01A1 != this->field_01A2) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
    this_00 = local_c;
    if (iVar3 == 0) {
      if (local_c->field_0178 != 0) {
        local_c->field_0028 = 0x4202;
        *(undefined2 *)&local_c->field_0x2c = 0;
        local_c->field_002E = 2;
        *(undefined4 *)&local_c->field_0x30 = local_c->field_0178;
        if (g_cursorClass_00802A30 != nullptr) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)g_cursorClass_00802A30->field_0000)(&local_c->field_0x18);
        }
      }
      HVar1 = this_00->field_01A2;
      if (HVar1 != 0) {
        if (HVar1 == CASE_6) {
          st::fn_00405E61(this_00,this_00->field_01AB,'\0');
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
                ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x21,0x16,
                 (byte *)this_00->field_01DC,0,0x21,0x16,0x1b8,0x118);
      st::fn_00401ACD(this_00);
      if (this_00->field_01A2 == '\0') {
        local_8 = this_00->field_01B7;
      }
      else {
        local_8 = *(undefined4 *)&this_00->field_0x1bf;
      }
      if (this_00->field_019C != 0) {
        memset(&this_00->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
        this_00->field_0028 = 0x22;
        *(short *)&this_00->field_0x2c = (short)local_8;
        *(undefined2 *)&this_00->field_0x30 = 1;
        this_00->field_0032 = 1;
        st::fn_006E6080(this_00,2,this_00->field_019C,(undefined4 *)&this_00->field_0x18);
      }
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar4 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x2b3,0,iVar3,"%s"
                               ,"HelpPanelTy::BackBut");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\helppan.cpp",0x2b3);
  }
  return;
}

// 00513A40 HelpPanelTy::IndexBut
#line 4 "decomp/ST.exe/functions/00513A40/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::IndexBut */

void __thiscall st::fn_00513A40(HelpPanelTy *this)

{
  HelpPanelTy_field_01A1State HVar1;
  HelpPanelTy *this_00;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    HVar1 = local_8->field_01A1;
    if (((HVar1 == 0) || (HVar1 == CASE_6)) || (HVar1 == CASE_A)) {
      local_8->field_01A2 = HVar1;
      local_8->field_01AB = local_8->field_01A3;
    }
    else {
      local_8->field_01A2 = 0;
      local_8->field_01AB = 0;
    }
    local_8->field_01A1 = CASE_A;
    local_8->field_01A3 = 0;
    st::fn_006B55F0
              ((RecoveredSourceFamily_dibcopy *)local_8->field_0068,0,0x21,0x16,
               (byte *)local_8->field_01DC,0,0x21,0x16,0x1b8,0x118);
    if (this_00->field_0178 != 0) {
      this_00->field_0028 = 0x4202;
      *(undefined2 *)&this_00->field_0x2c = 0;
      this_00->field_002E = 2;
      *(undefined4 *)&this_00->field_0x30 = this_00->field_0178;
      if (g_cursorClass_00802A30 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)g_cursorClass_00802A30->field_0000)(&this_00->field_0x18);
      }
    }
    st::fn_00401ACD(this_00);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x2c0,0,errorCode,
                             "%s","HelpPanelTy::IndexBut");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\helppan.cpp",0x2c0);
  return;
}

// 00513BC0 HelpPanelTy::PrevBut
#line 4 "decomp/ST.exe/functions/00513BC0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::PrevBut */

void __thiscall st::fn_00513BC0(HelpPanelTy *this)

{
  AnonPointee_HelpPanelTy_01B3 *pAVar1;
  void *pvVar2;
  HelpPanelTy *this_00;
  int iVar4;
  int *piVar5;
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
    iVar6 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x2e9,0,iVar4,"%s"
                               ,"HelpPanelTy::PrevBut");
    if (iVar6 == 0) {
      st::fn_006A5E40(iVar4,0,"E:\\__titans\\Andrey\\helppan.cpp",0x2e9);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar4 = local_8->field_01B7;
  pAVar1 = local_8->field_01B3;
  if (iVar4 == 0) {
    iVar4 = *(int *)&pAVar1->field_0xc;
    if (iVar4 == 0) {
      piVar5 = nullptr;
    }
    else {
      piVar5 = (int *)pAVar1->field_001C;
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
    uVar7 = iVar4 - 1;
    if (uVar7 < *(uint *)&pAVar1->field_0xc) {
      piVar5 = (int *)(pAVar1->field_0008 * (iVar4 + -1) + pAVar1->field_001C);
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
      local_8->field_01A3 = 0;
      uVar7 = STField<uint>(piVar5,0xd);
      pvVar2 = STField<void *>(piVar5,9);
      switch((char)piVar5[2]) {
      case '\x01':
        st::fn_00404E85(local_8,(int)pvVar2,uVar7,'\0');
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x02':
        st::fn_00403747(local_8,(int)pvVar2,uVar7,'\0');
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x03':
        st::fn_00403878(local_8,(int)pvVar2,'\0');
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x04':
        st::fn_004057E0(local_8,(int)pvVar2,uVar7,'\0');
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x05':
        st::fn_00402833(local_8,(uint)pvVar2,(byte)uVar7,'\0');
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x06':
        st::fn_00405E61(local_8,(uint)pvVar2,'\0');
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\a':
        st::fn_004011FE(local_8);
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\b':
        st::fn_004020B8(local_8,pvVar2,uVar7,'\0');
        break;
      case '\n':
        st::fn_00405803(local_8);
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\v':
        st::fn_00402CAC(local_8,(int)pvVar2,uVar7,'\0');
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\f':
        st::fn_00403BC0(local_8,(int)pvVar2,'\0');
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
      st::fn_00405100(this_00);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    iVar4 = *(uint *)&pAVar1->field_0xc - iVar4;
    if (STField<char>(piVar5,0x12) != '\0') {
      local_8->field_01B7 = uVar7;
      goto LAB_00513e3e;
    }
  }
  st::fn_00405362(local_8,piVar5,uVar7);
  this_00->field_01B7 = *(int *)&this_00->field_01B3->field_0xc - iVar4;
LAB_00513e3e:
  st::fn_00403B43(this_00);
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 00513FA0 HelpPanelTy::NextBut
#line 4 "decomp/ST.exe/functions/00513FA0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::NextBut */

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
    iVar6 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x307,0,errorCode,
                               "%s","HelpPanelTy::NextBut");
    if (iVar6 == 0) {
      st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\helppan.cpp",0x307);
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
      local_8->field_01A3 = 0;
      uVar7 = STField<uint>(piVar5,0xd);
      pvVar3 = STField<void *>(piVar5,9);
      switch((char)piVar5[2]) {
      case '\x01':
        st::fn_00404E85(local_8,(int)pvVar3,uVar7,'\0');
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\x02':
        st::fn_00403747(local_8,(int)pvVar3,uVar7,'\0');
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\x03':
        st::fn_00403878(local_8,(int)pvVar3,'\0');
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\x04':
        st::fn_004057E0(local_8,(int)pvVar3,uVar7,'\0');
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\x05':
        st::fn_00402833(local_8,(uint)pvVar3,(byte)uVar7,'\0');
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\x06':
        st::fn_00405E61(local_8,(uint)pvVar3,'\0');
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\a':
        st::fn_004011FE(local_8);
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\b':
        st::fn_004020B8(local_8,pvVar3,uVar7,'\0');
        break;
      case '\n':
        st::fn_00405803(local_8);
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\v':
        st::fn_00402CAC(local_8,(int)pvVar3,uVar7,'\0');
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\f':
        st::fn_00403BC0(local_8,(int)pvVar3,'\0');
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
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
  st::fn_00405362(local_8,piVar5,uVar7);
LAB_005141e1:
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
  DArrayTy *pDVar1;
  void *pvVar2;
  int errorCode;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    if (0 < (int)local_8->field_01CF) {
      pDVar1 = local_8->field_01CB;
      uVar4 = local_8->field_01CF - 1;
      local_8->field_01CF = uVar4;
      if (uVar4 < pDVar1->count) {
        puVar6 = DArrayAt<undefined1>(pDVar1, uVar4);
      }
      else {
        puVar6 = nullptr;
      }
      if (puVar6 != nullptr) {
        local_8->field_01A1 = 0;
        local_8->field_01A7 = 0;
        local_8->field_01A3 = 0;
        uVar4 = *(uint *)(puVar6 + 5);
        pvVar2 = *(void **)(puVar6 + 1);
        switch(*puVar6) {
        case 0:
          st::fn_004029C8(local_8);
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 1:
          st::fn_00404E85(local_8,(int)pvVar2,uVar4,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 2:
          st::fn_00403747(local_8,(int)pvVar2,uVar4,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 3:
          st::fn_00403878(local_8,(int)pvVar2,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 4:
          st::fn_004057E0(local_8,(int)pvVar2,uVar4,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 5:
          st::fn_00402833(local_8,(uint)pvVar2,(byte)uVar4,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 6:
          st::fn_00405E61(local_8,(uint)pvVar2,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 7:
          st::fn_004011FE(local_8);
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 8:
          st::fn_004020B8(local_8,pvVar2,uVar4,'\0');
          break;
        case 10:
          st::fn_00405803(local_8);
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 0xb:
          st::fn_00402CAC(local_8,(int)pvVar2,uVar4,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 0xc:
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
  iVar5 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x317,0,errorCode,
                             "%s","HelpPanelTy::BwdBut");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\helppan.cpp",0x317);
  return;
}

// 005145E0 HelpPanelTy::FwdBut
#line 4 "decomp/ST.exe/functions/005145E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::FwdBut */

void __thiscall st::fn_005145E0(HelpPanelTy *this)

{
  DArrayTy *pDVar1;
  void *pvVar2;
  int errorCode;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    pDVar1 = local_8->field_01CB;
    if ((int)local_8->field_01CF < (int)(pDVar1->count - 1)) {
      uVar5 = local_8->field_01CF + 1;
      local_8->field_01CF = uVar5;
      if (uVar5 < pDVar1->count) {
        puVar6 = DArrayAt<undefined1>(pDVar1, uVar5);
      }
      else {
        puVar6 = nullptr;
      }
      if (puVar6 != nullptr) {
        local_8->field_01A1 = 0;
        local_8->field_01A7 = 0;
        local_8->field_01A3 = 0;
        uVar5 = *(uint *)(puVar6 + 5);
        pvVar2 = *(void **)(puVar6 + 1);
        switch(*puVar6) {
        case 0:
          st::fn_004029C8(local_8);
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 1:
          st::fn_00404E85(local_8,(int)pvVar2,uVar5,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 2:
          st::fn_00403747(local_8,(int)pvVar2,uVar5,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 3:
          st::fn_00403878(local_8,(int)pvVar2,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 4:
          st::fn_004057E0(local_8,(int)pvVar2,uVar5,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 5:
          st::fn_00402833(local_8,(uint)pvVar2,(byte)uVar5,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 6:
          st::fn_00405E61(local_8,(uint)pvVar2,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 7:
          st::fn_004011FE(local_8);
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 8:
          st::fn_004020B8(local_8,pvVar2,uVar5,'\0');
          break;
        case 10:
          st::fn_00405803(local_8);
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 0xb:
          st::fn_00402CAC(local_8,(int)pvVar2,uVar5,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 0xc:
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
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x327,0,errorCode,
                             "%s","HelpPanelTy::FwdBut");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\helppan.cpp",0x327);
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
  char cVar1;
  AnonPointee_HelpPanelTy_01B3 *pAVar2;
  HelpPanelTy *pHVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  HelpPanelTy *pHVar10;
  InternalExceptionFrame local_54;
  int *local_10;
  uint local_c;
  HelpPanelTy *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar5 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar8 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x350,0,iVar5,"%s"
                               ,"HelpPanelTy::LinkAct");
    if (iVar8 == 0) {
      st::fn_006A5E40(iVar5,0,"E:\\__titans\\Andrey\\helppan.cpp",0x350);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_c = *(uint *)sizeHelp_exref;
  if (local_c != 0) {
    uVar7 = 0;
    pHVar10 = local_8;
    do {
      pHVar4 = local_8;
      iVar8 = uVar7 * 0x11;
      cVar1 = *(char *)(pHVar10->field_01C7 + 8 + iVar8);
      iVar5 = pHVar10->field_01C7 + iVar8;
      switch(cVar1) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      case '\x01':
      case '\x02':
      case '\x03':
      case '\x04':
      case '\v':
      case '\f':
        if ((*(int *)(iVar5 + 9) != param_1) ||
           (((cVar1 != '\x03' && (cVar1 != '\f')) && (*(int *)(iVar5 + 0xd) != param_2))))
        goto switchD_00514a29_caseD_5;
        st::fn_00401A37(local_8,uVar7);
        pAVar2 = pHVar4->field_01B3;
        uVar9 = 0;
        uVar7 = *(uint *)&pAVar2->field_0xc;
        if (uVar7 == 0) {
LAB_00514ab9:
          uVar7 = *(uint *)sizeHelp_exref;
          pHVar10 = pHVar4;
          local_c = uVar7;
        }
        else {
          local_10 = (int *)(iVar8 + pHVar4->field_01C7);
          if (uVar7 == 0) {
            piVar6 = nullptr;
            goto LAB_00514a8f;
          }
          do {
            piVar6 = (int *)(pAVar2->field_0008 * uVar9 + pAVar2->field_001C);
LAB_00514a8f:
            if ((*piVar6 == *local_10) && (piVar6[1] == local_10[1])) {
              pHVar4->field_01B7 = uVar9;
              goto LAB_00514ab9;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar7);
          uVar7 = *(uint *)sizeHelp_exref;
          pHVar10 = pHVar4;
          local_c = uVar7;
        }
        break;
      case '\x05':
      case '\x06':
      case '\a':
      case '\b':
      case '\t':
      case '\n':
switchD_00514a29_caseD_5:
        pHVar10 = pHVar4;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_c);
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
  undefined1 *puVar1;
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
    iVar7 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x39b,0,iVar3,"%s"
                               ,"HelpPanelTy::PrepMissObj");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\helppan.cpp",0x39b);
    return;
  }
  if ((DArrayTy *)local_8->field_01D3 != nullptr) {
    st::fn_006B5570((DArrayTy *)local_8->field_01D3);
  }
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
      st::fn_004015A0((DArrayTy *)this_00->field_01D3,pcVar5,"@- %s@ ");
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)g_dArray_0080C4CB->elementSize);
  }
  puVar6 = st::fn_007126E0
                     (this_00->field_01E4,(DArrayTy *)this_00->field_01D3," ,.;:!?/\\()[]{}",
                      (uint *)&DAT_007c21ec,0x19c,0,0xffffffff,nullptr,1);
  if ((DArrayTy *)this_00->field_01D3 != nullptr) {
    st::fn_006B5570((DArrayTy *)this_00->field_01D3);
  }
  this_00->field_01D3 = puVar6;
  if (puVar6 == nullptr) {
    pDVar4 = st::fn_006B54F0(nullptr,10,10);
    this_00->field_01D3 = &pDVar4->flags;
    st::fn_006B5AA0(&pDVar4->flags,&DAT_007c3b5c);
  }
  puVar6 = this_00->field_01D3;
  if (puVar6[2] != 0) {
    st::fn_007129D0(this_00->field_01E4,puVar6,puVar6);
  }
  if ((this_00->field_01A1 == CASE_7) && (this_00->field_019C != 0)) {
    puVar1 = &this_00->field_0x18;
    this_00->field_0028 = 0x28;
    *(undefined2 *)&this_00->field_0x2c = 1;
    this_00->field_002E = (short)this_00->field_01D3[2];
    st::fn_006E6080(this_00,2,this_00->field_019C,(undefined4 *)puVar1);
    this_00->field_002E = 0;
    *(undefined2 *)&this_00->field_0x2c = 0;
    this_00->field_0028 = 0x22;
    st::fn_006E6080(this_00,2,this_00->field_019C,(undefined4 *)puVar1);
    this_00->field_0028 = 0x20;
    *(undefined4 *)&this_00->field_0x2c = 1;
    st::fn_006E6080(this_00,2,this_00->field_019C,(undefined4 *)puVar1);
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
  uint *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  uint uVar10;
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
    iVar12 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x3d3,0,iVar5,
                                "%s","HelpPanelTy::DrawTitle");
    if (iVar12 == 0) {
      st::fn_006A5E40(iVar5,0,"E:\\__titans\\Andrey\\helppan.cpp",0x3d3);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_c->field_019C != 0) {
    st::fn_006E56B0(local_c->field_000C,local_c->field_019C);
  }
  *(undefined4 *)(pHVar4->field_01D7 + 0xc) = 0;
  pHVar4->field_01DB = 0;
  st::fn_006B55F0
            ((RecoveredSourceFamily_dibcopy *)pHVar4->field_0068,0,0x21,0x16,
             (byte *)pHVar4->field_01DC,0,0x21,0x16,0x1b8,0x118);
  uVar10 = local_8;
  st::fn_00710A90(pHVar4->field_01E4,(int)pHVar4->field_0068,0,0x21,local_8,0x19c,0x14);
  if (DAT_0080874e == '\x03') {
    uVar6 = 5;
  }
  else {
    uVar6 = (-(uint)(DAT_0080874e != '\x01') & 6) + 1;
  }
  iVar12 = -1;
  iVar5 = -1;
  puVar7 = (uint *)st::fn_006B0140(param_1,g_hINSTANCE_00807618);
  st::fn_007119C0(pHVar4->field_01E4,puVar7,iVar5,iVar12,uVar6);
  local_8 = uVar10 + 0x14;
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
    puVar7 = (uint *)st::fn_006B0140(resourceId,g_hINSTANCE_00807618);
    st::fn_007119C0(pHVar4->field_01E0,puVar7,iVar5,iVar12,uVar6);
    local_8 = uVar10 + 0x23;
  }
  if (param_3 != 0) {
    st::fn_00710A90(pHVar4->field_01E0,(int)pHVar4->field_0068,0,0x21,local_8,0x19c,0xf);
    pcVar8 = st::fn_006B0140(param_3,g_hINSTANCE_00807618);
    uVar10 = 0xffffffff;
    do {
      pcVar11 = pcVar8;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar11 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar11;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    pcVar8 = pcVar11 + -uVar10;
    pcVar11 = (char *)&DAT_0080f33a;
    memmove(pcVar11, pcVar8, uVar10); /* compiler REP MOVS byte copy */
    uVar6 = 0;
    for (puVar7 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar7 != nullptr;
        puVar7 = st::fn_0072E560(puVar7,'\n')) {
      *(undefined1 *)puVar7 = 0x20;
    }
    st::fn_007119C0(pHVar4->field_01E0,&DAT_0080f33a,-1,-1,(DAT_0080874e != '\x03') - 1 & 5);
    local_8 = local_8 + 0xf;
  }
  pAVar2 = pHVar4->field_0218;
  uVar10 = pAVar2->field_0014;
  if (uVar10 == 0) {
    uVar10 = ((uint)(ushort)pAVar2->field_000E * pAVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
             pAVar2->field_0008;
  }
  puVar9 = (undefined4 *)st::fn_006B4FA0((int *)pAVar2);
  for (uVar6 = uVar10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar9 = 0xffffffff;
    puVar9 = puVar9 + 1;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined1 *)puVar9 = 0xff;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
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
  uint uVar4;
  byte *pbVar5;
  int iVar6;
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
                st::fn_00404499
                          (g_allPlayers_007FA174,(uint)param_3,
                           (STAllPlayersC_GetTOBJImage_param_2Enum)param_2);
      if (local_8 != nullptr) {
        local_14 = local_8->field_0004;
        local_c = local_8->field_0008;
        iVar3 = (0x19c - local_14) / 2;
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)pHVar2->field_0218,0,iVar3,*param_1,
                   (byte *)pHVar2->field_021C,0,(*(int *)(pHVar2->field_021C + 2) - local_14) / 2,
                   (*(int *)(pHVar2->field_021C + 4) - local_c) / 2,local_14,local_c);
        st::fn_006B5440((ushort *)pHVar2->field_0218,0,iVar3,*param_1,(uint)local_8,0,0xff);
        st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)pHVar2->field_0218,0,iVar3 + -2,*param_1 + -2,
                     local_14 + 4,local_c + 4,0x6f,0xd);
        *param_1 = *param_1 + local_c + 10;
        st::fn_006AB060(&local_8);
      }
    }
    if (param_4 != 0) {
      uVar4 = st::fn_004056F5((Global_sub_00526BA0_param_1Enum)param_2,param_3);
      local_8 = (AnonShape_00515650_BBDC7053 *)
                st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)param_4,uVar4);
      if (local_8 != nullptr) {
        iVar3 = (0x19c - local_8->field_0004) / 2;
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)pHVar2->field_0218,iVar3,*param_1,'\x01',
               (byte *)local_8);
        pbVar5 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pHVar2->field_0248,4);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)pHVar2->field_0218,iVar3 + -2,*param_1 + -2,'\x06',
               pbVar5);
        iVar3 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pHVar2->field_0248,4);
        *param_1 = *param_1 + *(int *)(iVar3 + 8);
      }
    }
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar6 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x3f3,0,iVar3,"%s",
                             "HelpPanelTy::DrawObj");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\helppan.cpp",0x3f3);
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
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  UINT UVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  Global_sub_005259B0_param_1Enum GVar9;
  HINSTANCE pHVar10;
  InternalExceptionFrame local_6c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  int local_17;
  uint local_13;
  undefined4 local_c;
  HelpPanelTy *local_8;

  local_c = 0;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar7 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x412,0,iVar2,"%s"
                               ,"HelpPanelTy::DrawWeapon");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,"E:\\__titans\\Andrey\\helppan.cpp",0x412);
    return 0;
  }
  if (param_3 != 0) {
    GVar9 = (Global_sub_005259B0_param_1Enum)param_3;
    uVar3 = st::fn_0040137F(GVar9,0,'\x01');
    pbVar4 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)local_8->field_0244,uVar3);
    if (pbVar4 != nullptr) {
      if (*(int *)(pbVar4 + 8) + -0xf < 1) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(pbVar4 + 8) + -0xf) / 2;
      }
      iVar7 = *param_2;
      *param_2 = iVar7 + iVar2;
      st::fn_00710A90(local_8->field_01E0,(int)local_8->field_0218,0,param_1,iVar7 + iVar2,
                       0x19c - param_1,0xf);
      if (param_4 == 0) {
        pHVar10 = g_hINSTANCE_00807618;
        UVar5 = st::fn_00404494(GVar9);
        pcVar6 = st::fn_006B0140(UVar5,pHVar10);
        st::external_00000080((LPSTR)&DAT_0080f33a,"%s",pcVar6);
      }
      else {
        pHVar10 = g_hINSTANCE_00807618;
        UVar5 = st::fn_00404494(GVar9);
        pcVar6 = st::fn_006B0140(UVar5,pHVar10);
        st::external_00000080((LPSTR)&DAT_0080f33a,"%s (%d)",pcVar6,param_4);
      }
      st::fn_007119C0(local_8->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_8->field_0218,
             (param_1 - *(int *)(pbVar4 + 4)) + -5,(0xf - *(int *)(pbVar4 + 8)) / 2 + *param_2,
             '\x06',pbVar4);
      local_28 = (param_1 - *(int *)(pbVar4 + 4)) + -5;
      local_20 = *(undefined4 *)(pbVar4 + 4);
      local_24 = (0xf - *(int *)(pbVar4 + 8)) / 2 + *param_2;
      local_1c = *(undefined4 *)(pbVar4 + 8);
      local_17 = param_3;
      local_13 = (uint)param_5;
      local_18 = 4;
      st::fn_006AE1C0((DArrayTy *)local_8->field_01D7,&local_28);
      iVar2 = *(int *)(pbVar4 + 8);
      if (iVar2 < 0x10) {
        iVar2 = 0xf;
      }
      *param_2 = *param_2 + iVar2;
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
  uint *resourceString;
  char *pcVar4;
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
    iVar7 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x425,0,iVar3,"%s"
                               ,"HelpPanelTy::DrawDescription");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\helppan.cpp",0x425);
    return;
  }
  if (param_2 != 10000) {
    st::fn_00710A90(local_8->field_01E0,(int)local_8->field_0218,0,0,*param_1,0x19c,0xf);
    uVar8 = 3;
    iVar7 = -1;
    iVar3 = -1;
    resourceString = (uint *)st::fn_006B0140(0x55f5,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_01E0,resourceString,iVar3,iVar7,uVar8);
    *param_1 = *param_1 + 0xf;
    pcVar4 = st::fn_006B0140(param_2,g_hINSTANCE_00807618);
    uVar8 = 0xffffffff;
    do {
      pcVar6 = pcVar4;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar6 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar6;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar4 = pcVar6 + -uVar8;
    pcVar6 = (char *)&DAT_0080f33a;
    memmove(pcVar6, pcVar4, uVar8); /* compiler REP MOVS byte copy */
    st::fn_00712D30
              (this_00->field_01E0,(char *)&DAT_0080f33a,&DAT_0080f33a," ,.;:!?/\\()[]{}",
               (uint *)&DAT_007c21ec,0x19c,&DAT_007c2198,1);
    iVar3 = st::fn_007113E0(this_00->field_01E0,&DAT_0080f33a);
    st::fn_00401870(this_00,*param_1,(ushort)iVar3);
    st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,*param_1,0x19c,iVar3 + 2);
    st::fn_00711B70(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5,-1,-1);
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
  uint *puVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  InternalExceptionFrame local_88;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined1 local_34;
  int local_33;
  int local_2f;
  undefined4 local_28;
  uint local_24;
  HelpPanelTy *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int *local_c;
  char local_5;

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
    iVar9 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x460,0,iVar3,"%s"
                               ,"HelpPanelTy::AddLinks");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\helppan.cpp",0x460);
    return;
  }
  if (DAT_007e68a0 != '\0') {
    pcVar6 = &DAT_007e68a0;
    local_10 = &DAT_007e68a5;
    do {
      if (((*pcVar6 == param_2) && (local_10[-1] == param_3)) && (*local_10 == param_4)) {
        local_c = (int *)((int)local_10 + 5);
        local_1c = 1;
LAB_00515ee1:
        if ((*(char *)((int)local_c + -1) != '\0') && (uVar7 = 0, *local_c != 0)) {
          if (local_14 != 0) {
            st::fn_00401870(this_00,*param_1,0xf);
            st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,*param_1,0x19c,0xf);
            uVar10 = 3;
            iVar9 = -1;
            iVar3 = -1;
            puVar4 = (uint *)st::fn_006B0140(0x55f6,g_hINSTANCE_00807618);
            st::fn_007119C0(this_00->field_01E0,puVar4,iVar3,iVar9,uVar10);
            local_14 = 0;
            *param_1 = *param_1 + 0xf;
          }
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x50,*param_1 + 1,'\x01',
                 (byte *)this_00->field_024C);
          local_24 = *(uint *)sizeHelp_exref;
          if (local_24 != 0) {
            local_5 = *(char *)((int)local_c + -1);
            piVar5 = (int *)(this_00->field_01C7 + 9);
            do {
              if (((*(char *)((int)piVar5 + -1) == local_5) && (*piVar5 == *local_c)) &&
                 (piVar5[1] == local_c[1])) {
                st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,local_18 + 0x5f,
                                 *param_1,0x13d - local_18,0xf);
                pcVar6 = st::fn_006B0140(*(UINT *)(uVar7 * 0x11 + this_00->field_01C7),
                                            g_hINSTANCE_00807618);
                uVar7 = 0xffffffff;
                goto code_r0x00516013;
              }
              uVar7 = uVar7 + 1;
              piVar5 = (int *)((int)piVar5 + 0x11);
            } while (uVar7 < local_24);
          }
          goto LAB_0051607e;
        }
      }
LAB_005160da:
      piVar5 = (int *)((int)local_10 + 0x36);
      pcVar8 = (char *)((int)local_10 + 0x31);
      pcVar6 = (char *)((int)local_10 + 0x31);
      local_10 = piVar5;
    } while (*pcVar8 != '\0');
  }
  st::fn_00401870(this_00,*param_1,10);
  iVar3 = (*param_1 / 10 + 1) * 10;
  *param_1 = iVar3;
  iVar3 = ((ushort)this_00->field_01AF - 0x118) + iVar3;
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 / (int)(uint)(ushort)this_00->field_01B1 + 1;
  }
  st::fn_00402EEB(this_00,iVar3);
  st::fn_006B5110
            ((int)this_00->field_0068,0,0x21,(ushort)this_00->field_01AF + 0x16,
             (int)this_00->field_0218,0,0,0,0x19c,0x117 - (uint)(ushort)this_00->field_01AF,0xff);
  st::fn_006B3640
            ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
             this_00->field_0044);
  g_currentExceptionFrame = local_88.previous;
  return;
  while( true ) {
    uVar7 = uVar7 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
    if (cVar1 == '\0') break;
code_r0x00516013:
    pcVar8 = pcVar6;
    if (uVar7 == 0) break;
  }
  uVar7 = ~uVar7;
  pcVar6 = pcVar8 + -uVar7;
  pcVar8 = (char *)&DAT_0080f33a;
  memmove(pcVar8, pcVar6, uVar7); /* compiler REP MOVS byte copy */
  for (puVar4 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar4 != nullptr;
      puVar4 = st::fn_0072E560(puVar4,'\n')) {
    *(undefined1 *)puVar4 = 0x20;
  }
  st::fn_007119C0(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
LAB_0051607e:
  local_40 = *param_1;
  local_3c = local_18;
  local_34 = *(undefined1 *)((int)local_c + -1);
  local_38 = local_28;
  local_33 = *local_c;
  local_2f = local_c[1];
  local_44 = 0x50;
  st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_44);
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
  HelpPanelTy *this_00;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    HVar1 = local_8->field_01A1;
    if (((HVar1 == 0) || (HVar1 == CASE_6)) || (HVar1 == CASE_A)) {
      local_8->field_01A2 = HVar1;
      local_8->field_01AB = local_8->field_01A3;
    }
    else {
      local_8->field_01A2 = 0;
      local_8->field_01AB = 0;
    }
    local_8->field_01A1 = CASE_7;
    local_8->field_01A7 = 0;
    local_8->field_01A3 = 0;
    local_8->field_01AF = 0;
    local_8->field_01B1 = 0;
    if (local_8->field_0178 != 0) {
      local_8->field_0028 = 0x4202;
      *(undefined2 *)&local_8->field_0x2c = 0;
      local_8->field_002E = 2;
      *(undefined4 *)&local_8->field_0x30 = local_8->field_0178;
      if (g_cursorClass_00802A30 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)g_cursorClass_00802A30->field_0000)(&local_8->field_0x18);
      }
    }
    if (this_00->field_019C != 0) {
      st::fn_006E56B0(this_00->field_000C,this_00->field_019C);
    }
    st::fn_00402194(this_00,(int)this_00->field_01D3);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x46e,0,errorCode,
                             "%s","HelpPanelTy::MObjProc");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\helppan.cpp",0x46e);
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
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  byte *pbVar10;
  uint uVar11;
  UINT resourceId;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar12;
  int iVar13;
  InternalExceptionFrame local_58;
  HelpPanelTy *local_14;
  undefined4 *local_10;
  uint local_c;
  byte *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar5 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  this_00 = local_14;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar13 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x4aa,0,iVar5,
                                "%s","HelpPanelTy::TTreeProc");
    if (iVar13 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar5,0,"E:\\__titans\\Andrey\\helppan.cpp",0x4aa);
    return;
  }
  if (param_2 == '\0') {
    HVar1 = local_14->field_01A1;
    if (((HVar1 == 0) || (HVar1 == CASE_6)) || (HVar1 == CASE_A)) {
      local_14->field_01A2 = HVar1;
      local_14->field_01AB = local_14->field_01A3;
    }
    else {
      local_14->field_01A2 = 0;
      local_14->field_01AB = 0;
    }
    local_14->field_01A1 = CASE_6;
    local_14->field_01A3 = param_1;
    local_14->field_01AF = 0x23;
    local_14->field_01B1 = 10;
    if (local_14->field_0178 != 0) {
      local_14->field_0028 = 0x4202;
      *(undefined2 *)&local_14->field_0x2c = 0;
      local_14->field_002E = 2;
      *(undefined4 *)&local_14->field_0x30 = local_14->field_0178;
      if (g_cursorClass_00802A30 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)g_cursorClass_00802A30->field_0000)(&local_14->field_0x18);
      }
    }
  }
  if (this_00->field_019C != 0) {
    st::fn_006E56B0(this_00->field_000C,this_00->field_019C);
  }
  st::fn_006B55F0
            ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x21,0x16,
             (byte *)this_00->field_01DC,0,0x21,0x16,0x1b8,0x118);
  if (param_1 == 1) {
    local_8 = (byte *)((uint)STPiece<1,3>(local_8) << 8);
    resourceId = 0x5604;
    local_10 = (undefined4 *)&DAT_007c2b58;
    local_c = 0x33;
  }
  else if (param_1 == 2) {
    local_8 = (byte *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(1));
    resourceId = 0x5605;
    local_10 = (undefined4 *)&DAT_007c2df0;
    local_c = 0x39;
  }
  else {
    local_8 = (byte *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(2));
    resourceId = 0x5606;
    local_10 = &DAT_007c30d8;
    local_c = 0x46;
  }
  st::fn_00710A90(this_00->field_01E4,(int)this_00->field_0068,0,0x21,0x16,0x19c,0x14);
  if (DAT_0080874e == 3) {
    uVar6 = 5;
  }
  else {
    uVar6 = (-(uint)(DAT_0080874e != 1) & 6) + 1;
  }
  iVar13 = -1;
  iVar5 = -1;
  puVar7 = (uint *)st::fn_006B0140(0x55f4,g_hINSTANCE_00807618);
  st::fn_007119C0(this_00->field_01E4,puVar7,iVar5,iVar13,uVar6);
  st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0068,0,0x21,0x2a,0x19c,0xf);
  uVar6 = (DAT_0080874e != 3) - 1 & 5;
  iVar13 = -1;
  iVar5 = -1;
  puVar7 = (uint *)st::fn_006B0140(resourceId,g_hINSTANCE_00807618);
  st::fn_007119C0(this_00->field_01E0,puVar7,iVar5,iVar13,uVar6);
  pAVar2 = this_00->field_0218;
  uVar6 = pAVar2->field_0014;
  if (uVar6 == 0) {
    uVar6 = ((uint)(ushort)pAVar2->field_000E * pAVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
            pAVar2->field_0008;
  }
  puVar8 = (undefined4 *)st::fn_006B4FA0((int *)pAVar2);
  for (uVar11 = uVar6 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *puVar8 = 0xffffffff;
    puVar8 = puVar8 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar8 = 0xff;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  pbVar9 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0224,
                                (uint)local_8 & 0xff);
  local_8 = pbVar9;
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0,0,'\x06',pbVar9);
  if ((param_1 == DAT_0080874e) && ((short)local_c != 0)) {
    pbVar9 = (byte *)(local_10 + 1);
    local_10 = (undefined4 *)(local_c & 0xffff);
    do {
      iVar5 = st::fn_0040524F((uint)DAT_0080874d,*(uint *)(pbVar9 + -4));
      if (iVar5 == 0) {
LAB_00516776:
        pAVar12 = (AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_022C;
      }
      else {
        uVar4 = st::fn_0040530D((uint)DAT_0080874d,*(int *)(pbVar9 + -4));
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (CONCAT31(extraout_var,uVar4) < (int)(uint)*pbVar9) goto LAB_00516776;
        iVar5 = st::fn_0040186B((uint)DAT_0080874d,*(int *)(pbVar9 + -4));
        if (iVar5 < (int)(uint)*pbVar9) goto LAB_00516776;
        pAVar12 = (AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0228;
      }
      uVar6 = st::fn_004033F0(pbVar9[-4],*pbVar9);
      pbVar10 = (byte *)st::fn_0070B3A0(pAVar12,uVar6);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,*(int *)(pbVar9 + 1),
             *(int *)(pbVar9 + 5),'\x01',pbVar10);
      iVar5 = st::fn_0040524F((uint)DAT_0080874d,*(uint *)(pbVar9 + -4));
      if (iVar5 != 0) {
        iVar5 = st::fn_00403F8F((uint)DAT_0080874d,*(uint *)(pbVar9 + -4),(uint)*pbVar9);
        if (iVar5 != 0) {
          pbVar10 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0248,0
                                        );
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,*(int *)(pbVar9 + 1),
                 *(int *)(pbVar9 + 5),'\x06',pbVar10);
        }
      }
      pbVar9 = pbVar9 + 0xd;
      local_10 = (undefined4 *)((int)local_10 - 1);
    } while (local_10 != nullptr);
    local_10 = nullptr;
    pbVar9 = local_8;
  }
  iVar5 = *(int *)(pbVar9 + 8) + -0x118 + (uint)(ushort)this_00->field_01AF;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    iVar5 = (uint)(iVar5 % (int)(uint)(ushort)this_00->field_01B1 != 0) +
            iVar5 / (int)(uint)(ushort)this_00->field_01B1;
  }
  st::fn_00402EEB(this_00,iVar5);
  st::fn_006B5110
            ((int)this_00->field_0068,0,0x21,(ushort)this_00->field_01AF + 0x16,
             (int)this_00->field_0218,0,0,0,0x19c,0x117 - (uint)(ushort)this_00->field_01AF,0xff);
  st::fn_006B3640
            ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
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
  undefined1 uVar4;
  ushort uVar5;
  int iVar6;
  UINT UVar7;
  byte *pbVar8;
  uint *puVar9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_01;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  AnonPointee_HelpPanelTy_0068 *pAVar14;
  HINSTANCE pHVar15;
  Global_sub_00528A30_param_1Enum GVar16;
  int iVar17;
  int iVar18;
  InternalExceptionFrame local_88;
  HelpPanelTy *local_44;
  uint local_40;
  byte *local_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  Global_sub_00526BA0_param_1Enum local_23;
  uint local_1f;
  uint local_18;
  Global_sub_00526BA0_param_1Enum local_14;
  Global_sub_00526BA0_param_1Enum local_10;
  uint local_c;
  uint local_8;

  local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(1));
  local_8 = 0;
  local_44 = this;
  local_3c = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_0248,4);
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  iVar6 = st::fn_0072D7F0(local_88.jumpBuffer,0);
  this_00 = local_44;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_88.previous;
    iVar17 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x55a,0,iVar6,
                                "%s","HelpPanelTy::TechProc");
    if (iVar17 == 0) {
      st::fn_006A5E40(iVar6,0,"E:\\__titans\\Andrey\\helppan.cpp",0x55a);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_3 == '\0') {
    HVar2 = local_44->field_01A1;
    if (((HVar2 == 0) || (HVar2 == CASE_6)) || (HVar2 == CASE_A)) {
      local_44->field_01A2 = HVar2;
      local_44->field_01AB = local_44->field_01A3;
    }
    else {
      local_44->field_01A2 = 0;
      local_44->field_01AB = 0;
    }
    local_44->field_01A1 = CASE_5;
    local_44->field_01A3 = param_1;
    local_44->field_01A7 = (uint)param_2;
    local_44->field_01AF = 0x32;
    local_44->field_01B1 = 5;
    if (local_44->field_0178 != 0) {
      local_44->field_0028 = 0x4202;
      *(undefined2 *)&local_44->field_0x2c = 0;
      local_44->field_002E = 2;
      *(undefined4 *)&local_44->field_0x30 = local_44->field_0178;
      if (g_cursorClass_00802A30 != nullptr) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)g_cursorClass_00802A30->field_0000)(&local_44->field_0x18);
      }
    }
  }
  uVar5 = 0;
  do {
    if ((&PTR_DAT_007bfc04)[uVar5][param_1] != '\0') {
      local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)local_c + (char)uVar5));
      break;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 3);
  uVar12 = local_c & 0xff;
  GVar16 = (Global_sub_00528A30_param_1Enum)param_1;
  local_18 = uVar12;
  UVar7 = st::fn_00404B29(GVar16,param_2);
  st::fn_00403EF9(this_00,0x55fc,uVar12,UVar7);
  uVar12 = st::fn_004033F0(GVar16,param_2);
  pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0230,uVar12);
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0x35,0x2a,'\x01',pbVar8);
  st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar12 = 3;
  iVar17 = -1;
  iVar6 = -3;
  puVar9 = (uint *)st::fn_006B0140(0x5622,g_hINSTANCE_00807618);
  st::fn_007119C0(this_00->field_01E0,puVar9,iVar6,iVar17,uVar12);
  st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
  if ((char)local_c == DAT_0080874e) {
    iVar6 = st::fn_0040524F((uint)DAT_0080874d,param_1);
    if (iVar6 != 0) {
      local_38 = (uint)param_2;
      uVar4 = st::fn_0040530D((uint)DAT_0080874d,param_1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if ((int)(uint)param_2 <= CONCAT31(extraout_var,uVar4)) {
        uVar4 = st::fn_0040530D((uint)DAT_0080874d,param_1);
        iVar6 = st::fn_0040186B((uint)DAT_0080874d,param_1);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (CONCAT31(extraout_var_00,uVar4) <= iVar6) {
          uVar12 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar17 = -1;
          iVar6 = 1;
          puVar9 = (uint *)st::fn_006B0140(0x5d56,g_hINSTANCE_00807618);
          st::fn_007119C0(this_00->field_01E0,puVar9,iVar6,iVar17,uVar12);
          iVar6 = 2;
          goto LAB_00516f08;
        }
        iVar6 = st::fn_00401E1F((uint)DAT_0080874d,param_1);
        if (iVar6 == 0) {
          iVar6 = st::fn_00403F8F((uint)DAT_0080874d,param_1,local_38);
          if (iVar6 == 0) {
            uVar12 = (DAT_0080874e != '\x03') - 1 & 5;
            iVar17 = -1;
            iVar6 = 1;
            puVar9 = (uint *)st::fn_006B0140(0x5d55,g_hINSTANCE_00807618);
            st::fn_007119C0(this_00->field_01E0,puVar9,iVar6,iVar17,uVar12);
            iVar6 = 1;
            goto LAB_00516eb8;
          }
          UVar7 = 0x5d53;
        }
        else {
          UVar7 = 0x5d54;
        }
        uVar12 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar17 = -1;
        iVar6 = 1;
        puVar9 = (uint *)st::fn_006B0140(UVar7,g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_01E0,puVar9,iVar6,iVar17,uVar12);
        iVar6 = 3;
        goto LAB_00516f54;
      }
    }
    uVar12 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar17 = -1;
    iVar6 = 1;
    puVar9 = (uint *)st::fn_006B0140(0x5d52,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_01E0,puVar9,iVar6,iVar17,uVar12);
    iVar6 = 1;
  }
  else {
    uVar4 = st::fn_0040530D((uint)DAT_0080874d,param_1);
    iVar6 = st::fn_0040186B((uint)DAT_0080874d,param_1);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if (iVar6 < CONCAT31(extraout_var_01,uVar4)) {
      iVar6 = st::fn_00402342((uint)DAT_0080874d,param_1,(uint)param_2);
      if (iVar6 == 0) {
        uVar12 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar17 = -1;
        iVar6 = 1;
        puVar9 = (uint *)st::fn_006B0140(0x5d52,g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_01E0,puVar9,iVar6,iVar17,uVar12);
        iVar6 = 1;
      }
      else {
        iVar6 = st::fn_00401E1F((uint)DAT_0080874d,param_1);
        if (iVar6 != 0) {
          uVar12 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar17 = -1;
          iVar6 = 1;
          puVar9 = (uint *)st::fn_006B0140(0x5d54,g_hINSTANCE_00807618);
          st::fn_007119C0(this_00->field_01E0,puVar9,iVar6,iVar17,uVar12);
          iVar6 = 3;
LAB_00516eb8:
          pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0248,
                                        iVar6);
          pAVar14 = this_00->field_0068;
          goto LAB_00516f6b;
        }
        uVar12 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar17 = -1;
        iVar6 = 1;
        puVar9 = (uint *)st::fn_006B0140(0x5d53,g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_01E0,puVar9,iVar6,iVar17,uVar12);
        iVar6 = 3;
      }
LAB_00516f08:
      pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0248,iVar6);
      pAVar14 = this_00->field_0068;
      goto LAB_00516f6b;
    }
    uVar12 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar17 = -1;
    iVar6 = 1;
    puVar9 = (uint *)st::fn_006B0140(0x5d56,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_01E0,puVar9,iVar6,iVar17,uVar12);
    iVar6 = 2;
  }
LAB_00516f54:
  pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0248,iVar6);
  pAVar14 = this_00->field_0068;
LAB_00516f6b:
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)pAVar14,0x33,0x28,'\x06',pbVar8);
  local_8 = local_8 + 0xf;
  st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar12 = 3;
  iVar17 = -1;
  iVar6 = -3;
  puVar9 = (uint *)st::fn_006B0140(0x5623,g_hINSTANCE_00807618);
  st::fn_007119C0(this_00->field_01E0,puVar9,iVar6,iVar17,uVar12);
  st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
  uVar12 = (DAT_0080874e != '\x03') - 1 & 5;
  iVar17 = -1;
  iVar6 = 1;
  pHVar15 = g_hINSTANCE_00807618;
  UVar7 = st::fn_00402789(GVar16);
  puVar9 = (uint *)st::fn_006B0140(UVar7,pHVar15);
  st::fn_007119C0(this_00->field_01E0,puVar9,iVar6,iVar17,uVar12);
  local_8 = local_8 + 0xf;
  st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar12 = 3;
  iVar17 = -1;
  iVar6 = -3;
  puVar9 = (uint *)st::fn_006B0140(0x55f7,g_hINSTANCE_00807618);
  st::fn_007119C0(this_00->field_01E0,puVar9,iVar6,iVar17,uVar12);
  st::fn_00710A90(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
  local_38 = (uint)param_2;
  iVar6 = (local_38 + param_1 * 4) * 4;
  st::external_00000080((LPSTR)&DAT_0080f33a,"%4d",*(undefined4 *)(&DAT_007e4818 + iVar6));
  st::fn_007119C0(this_00->field_01E8,&DAT_0080f33a,1,-1,
                 (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 3);
  local_40 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,
                          (-(uint)((char)local_c != '\x03') & 0xfffffffe) + 4);
  if (local_40 != 0) {
    st::fn_006B5440((ushort *)this_00->field_0218,0,0xb4,local_8,local_40,0,0x3a);
    local_34 = 0xb4;
    local_2c = *(undefined4 *)(local_40 + 4);
    local_30 = local_8;
    local_28 = *(undefined4 *)(local_40 + 8);
    local_23 = (-(uint)((char)local_c != '\x03') & 0xfffffffc) + 0xe0;
    local_24 = 1;
    local_1f = local_18;
    st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_34);
  }
  local_8 = local_8 + 0xf;
  st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar12 = 3;
  iVar18 = -1;
  iVar17 = -3;
  puVar9 = (uint *)st::fn_006B0140(0x5624,g_hINSTANCE_00807618);
  st::fn_007119C0(this_00->field_01E0,puVar9,iVar17,iVar18,uVar12);
  st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
  iVar6 = (*(int *)(&DAT_007e5474 + iVar6) / 0x19) % 0xe10;
  st::external_00000080((LPSTR)&DAT_0080f33a,"%02d:%02d",iVar6 / 0x3c,iVar6 % 0x3c);
  st::fn_007119C0(this_00->field_01E0,&DAT_0080f33a,1,-1,2);
  local_8 = local_8 + 0xf;
  st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar12 = 3;
  iVar17 = -1;
  iVar6 = -3;
  puVar9 = (uint *)st::fn_006B0140(0x5625,g_hINSTANCE_00807618);
  st::fn_007119C0(this_00->field_01E0,puVar9,iVar6,iVar17,uVar12);
  st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
  UVar7 = 0x5d57;
  if ((&DAT_007e53bc)[param_1] != '\0') {
    if ((char)local_c == '\x02') {
      UVar7 = 0x5d58;
    }
    else if ((char)local_c == '\x01') {
      UVar7 = 0x5d59;
    }
  }
  uVar12 = (DAT_0080874e != '\x03') - 1 & 5;
  iVar17 = -1;
  iVar6 = 1;
  puVar9 = (uint *)st::fn_006B0140(UVar7,g_hINSTANCE_00807618);
  st::fn_007119C0(this_00->field_01E0,puVar9,iVar6,iVar17,uVar12);
  local_8 = local_8 + 0xf;
  if ((g_allPlayers_007FA174 != nullptr) &&
     ((st::fn_00405448(local_18,param_1,&local_10,&local_14), local_10 != 0 || (local_14 != 0))))
  {
    st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
    uVar12 = 3;
    iVar17 = -1;
    iVar6 = -3;
    puVar9 = (uint *)st::fn_006B0140(0x5626,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_01E0,puVar9,iVar6,iVar17,uVar12);
    if (local_10 != 0) {
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      pHVar15 = g_hINSTANCE_00807618;
      UVar7 = st::fn_00403684(local_10,(char)local_c,0);
      pcVar10 = st::fn_006B0140(UVar7,pHVar15);
      uVar12 = 0xffffffff;
      do {
        pcVar13 = pcVar10;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar13 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar13;
      } while (cVar1 != '\0');
      uVar12 = ~uVar12;
      pcVar10 = pcVar13 + -uVar12;
      pcVar13 = (char *)&DAT_0080f33a;
      memmove(pcVar13, pcVar10, uVar12); /* compiler REP MOVS byte copy */
      uVar11 = 0;
      for (puVar9 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar9 != nullptr;
          puVar9 = st::fn_0072E560(puVar9,'\n')) {
        *(undefined1 *)puVar9 = 0x20;
      }
      st::fn_007119C0(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
      local_8 = local_8 + 0xf;
      uVar12 = st::fn_004056F5(local_10,(char)local_c);
      pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0240,uVar12
                                   );
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',pbVar8);
      pbVar8 = local_3c;
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x94,local_8 - 2,'\x06',local_3c);
      local_34 = 0x94;
      local_2c = *(undefined4 *)(pbVar8 + 4);
      local_30 = local_8 - 2;
      local_28 = *(undefined4 *)(pbVar8 + 8);
      local_23 = local_10;
      local_24 = 2;
      local_1f = local_18;
      st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_34);
      local_8 = local_8 + *(int *)(pbVar8 + 8);
    }
    if (local_14 != 0) {
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      pHVar15 = g_hINSTANCE_00807618;
      UVar7 = st::fn_00403684(local_14,(char)local_c,0);
      pcVar10 = st::fn_006B0140(UVar7,pHVar15);
      uVar12 = 0xffffffff;
      do {
        pcVar13 = pcVar10;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar13 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar13;
      } while (cVar1 != '\0');
      uVar12 = ~uVar12;
      pcVar10 = pcVar13 + -uVar12;
      pcVar13 = (char *)&DAT_0080f33a;
      memmove(pcVar13, pcVar10, uVar12); /* compiler REP MOVS byte copy */
      for (puVar9 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar9 != nullptr;
          puVar9 = st::fn_0072E560(puVar9,'\n')) {
        *(undefined1 *)puVar9 = 0x20;
      }
      st::fn_007119C0(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
      local_8 = local_8 + 0xf;
      uVar12 = st::fn_004056F5(local_14,(char)local_c);
      pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_023C,uVar12
                                   );
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',pbVar8);
      pbVar8 = local_3c;
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x94,local_8 - 2,'\x06',local_3c);
      local_34 = 0x94;
      local_2c = *(undefined4 *)(pbVar8 + 4);
      local_30 = local_8 - 2;
      local_28 = *(undefined4 *)(pbVar8 + 8);
      local_23 = local_14;
      local_24 = 3;
      local_1f = local_18;
      st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_34);
      local_8 = local_8 + *(int *)(pbVar8 + 8);
    }
  }
  UVar7 = st::fn_00403576(GVar16,param_2);
  st::fn_00402DAB(this_00,(int *)&local_8,UVar7);
  st::fn_0040506F(this_00,(int *)&local_8,'\x05',param_1,local_38);
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
  char cVar1;
  HelpPanelTy_field_01A1State HVar2;
  HelpPanelTy *this_00;
  int iVar4;
  UINT UVar5;
  uint *puVar6;
  char *pcVar7;
  byte *pbVar8;
  int uVar17;
  byte *pbVar9;
  uint uVar10;
  ushort uVar11;
  AnonShape_00517A50_98726C61 *pAVar12;
  Global_sub_00526BA0_param_1Enum *pGVar13;
  char *pcVar14;
  byte bVar15;
  int iVar16;
  uint uVar18;
  HINSTANCE pHVar19;
  InternalExceptionFrame *pIVar20;
  int local_7c [16];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  Global_sub_00526BA0_param_1Enum local_2b;
  uint local_27;
  HelpPanelTy *local_20;
  int local_1c;
  char *local_18;
  Global_sub_00526BA0_param_1Enum *local_14;
  byte *local_10;
  AnonShape_00517A50_98726C61 *local_c;
  uint local_8;

  pAVar12 = nullptr;
  local_8 = 0;
  local_c = nullptr;
  local_20 = this;
  local_10 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_0248,4);
  uVar11 = 0;
  do {
    if ((*(int *)((int)&DAT_007c3469 + (uint)uVar11 * 0x27) == param_1) &&
       ((byte)(&DAT_007c3468)[(uint)uVar11 * 0x27] == param_2)) {
      pAVar12 = (AnonShape_00517A50_98726C61 *)(&DAT_007c3468 + (uint)uVar11 * 0x27);
      local_c = pAVar12;
      break;
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 0xb);
  if (pAVar12 != nullptr) {
    pIVar20 = g_currentExceptionFrame;
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffff80;
    iVar4 = st::fn_0072D7F0(local_7c,0);
    this_00 = local_20;
    if (iVar4 == 0) {
      if (param_3 == '\0') {
        HVar2 = local_20->field_01A1;
        if (((HVar2 == 0) || (HVar2 == CASE_6)) || (HVar2 == CASE_A)) {
          local_20->field_01A2 = HVar2;
          local_20->field_01AB = local_20->field_01A3;
        }
        else {
          local_20->field_01A2 = 0;
          local_20->field_01AB = 0;
        }
        local_20->field_01A1 = CASE_1;
        local_20->field_01A3 = param_1;
        local_20->field_01A7 = param_2;
        local_20->field_01AF = 0x32;
        local_20->field_01B1 = 5;
        if (local_20->field_0178 != 0) {
          local_20->field_0028 = 0x4202;
          *(undefined2 *)&local_20->field_0x2c = 0;
          local_20->field_002E = 2;
          *(undefined4 *)&local_20->field_0x30 = local_20->field_0178;
          if (g_cursorClass_00802A30 != nullptr) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)g_cursorClass_00802A30->field_0000)(&local_20->field_0x18);
          }
        }
      }
      UVar5 = st::fn_004019BF(param_1);
      st::fn_00403EF9(this_00,0x55fe,param_2,UVar5);
      bVar15 = (byte)param_2;
      st::fn_00403D78(this_00,(int *)&local_8,(STAllPlayersC_GetTOBJImage_param_2Enum *)param_1,bVar15,0);
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar18 = 3;
      iVar16 = -1;
      iVar4 = -3;
      puVar6 = (uint *)st::fn_006B0140(0x5627,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar6,iVar4,iVar16,uVar18);
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
      pAVar12 = local_c;
      uVar18 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar16 = -1;
      iVar4 = 1;
      puVar6 = (uint *)st::fn_006B0140(local_c->field_0005,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar6,iVar4,iVar16,uVar18);
      local_8 = local_8 + 0xf;
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar18 = 3;
      iVar16 = -1;
      iVar4 = -3;
      puVar6 = (uint *)st::fn_006B0140(0x5628,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar6,iVar4,iVar16,uVar18);
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
      pHVar19 = g_hINSTANCE_00807618;
      UVar5 = st::fn_00403684(pAVar12->field_0009,bVar15,0);
      pcVar7 = st::fn_006B0140(UVar5,pHVar19);
      uVar18 = 0xffffffff;
      do {
        pcVar14 = pcVar7;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar14 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar14;
      } while (cVar1 != '\0');
      uVar18 = ~uVar18;
      pcVar7 = pcVar14 + -uVar18;
      pcVar14 = (char *)&DAT_0080f33a;
      memmove(pcVar14, pcVar7, uVar18); /* compiler REP MOVS byte copy */
      uVar10 = 0;
      for (puVar6 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar6 != nullptr;
          puVar6 = st::fn_0072E560(puVar6,'\n')) {
        *(undefined1 *)puVar6 = 0x20;
      }
      st::fn_007119C0(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
      pAVar12 = local_c;
      local_8 = local_8 + 0xf;
      uVar18 = st::fn_004056F5(local_c->field_0009,*(char *)local_c);
      pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0240,uVar18
                                   );
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0xcd,local_8,'\x01',pbVar8);
      pbVar8 = local_10;
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0xcb,local_8 - 2,'\x06',local_10);
      local_3c = 0xcb;
      local_34 = *(undefined4 *)(pbVar8 + 4);
      local_38 = local_8 - 2;
      local_30 = *(undefined4 *)(pbVar8 + 8);
      local_2c = 2;
      local_2b = pAVar12->field_0009;
      local_27 = param_2;
      st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_3c);
      local_8 = local_8 + *(int *)(pbVar8 + 8);
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar18 = 3;
      iVar16 = -1;
      iVar4 = -3;
      puVar6 = (uint *)st::fn_006B0140(0x5629,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar6,iVar4,iVar16,uVar18);
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
      uVar18 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar16 = -1;
      iVar4 = 1;
      puVar6 = (uint *)st::fn_006B0140(0x273f - (pAVar12->field_000D != 0),g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar6,iVar4,iVar16,uVar18);
      local_8 = local_8 + 0xf;
      if (pAVar12->field_000D != 0) {
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
        uVar18 = 3;
        iVar16 = -1;
        iVar4 = -3;
        puVar6 = (uint *)st::fn_006B0140(0x562a,g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_01E0,puVar6,iVar4,iVar16,uVar18);
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
        pHVar19 = g_hINSTANCE_00807618;
        UVar5 = st::fn_00403684(pAVar12->field_000D,bVar15,0);
        pcVar7 = st::fn_006B0140(UVar5,pHVar19);
        uVar18 = 0xffffffff;
        do {
          pcVar14 = pcVar7;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar14 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar14;
        } while (cVar1 != '\0');
        uVar18 = ~uVar18;
        pcVar7 = pcVar14 + -uVar18;
        pcVar14 = (char *)&DAT_0080f33a;
        memmove(pcVar14, pcVar7, uVar18); /* compiler REP MOVS byte copy */
        uVar10 = 0;
        for (puVar6 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar6 != nullptr;
            puVar6 = st::fn_0072E560(puVar6,'\n')) {
          *(undefined1 *)puVar6 = 0x20;
        }
        st::fn_007119C0(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
        pAVar12 = local_c;
        local_8 = local_8 + 0xf;
        uVar18 = st::fn_004056F5(local_c->field_000D,*(char *)local_c);
        pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_023C,
                                      uVar18);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0xcd,local_8,'\x01',pbVar8);
        pbVar8 = local_10;
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0xcd,local_8,'\x06',local_10);
        local_3c = 0xcd;
        local_34 = *(undefined4 *)(pbVar8 + 4);
        local_38 = local_8;
        local_30 = *(undefined4 *)(pbVar8 + 8);
        local_2c = 3;
        local_2b = pAVar12->field_000D;
        local_27 = (uint)*(byte *)pAVar12;
        st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_3c);
        local_8 = local_8 + *(int *)(pbVar8 + 8);
      }
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar18 = 3;
      iVar16 = -1;
      iVar4 = -3;
      puVar6 = (uint *)st::fn_006B0140(0x562b,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar6,iVar4,iVar16,uVar18);
      local_18 = &pAVar12->field_0x19;
      pGVar13 = (Global_sub_00526BA0_param_1Enum *)&pAVar12->field_0x11;
      local_1c = 2;
      do {
        local_14 = pGVar13;
        if (*pGVar13 != 0) {
          st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
          pHVar19 = g_hINSTANCE_00807618;
          UVar5 = st::fn_00403684(*pGVar13,bVar15,0);
          pcVar7 = st::fn_006B0140(UVar5,pHVar19);
          uVar18 = 0xffffffff;
          do {
            pcVar14 = pcVar7;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1;
            pcVar14 = pcVar7 + 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar14;
          } while (cVar1 != '\0');
          uVar18 = ~uVar18;
          pcVar7 = pcVar14 + -uVar18;
          pcVar14 = (char *)&DAT_0080f33a;
          memmove(pcVar14, pcVar7, uVar18); /* compiler REP MOVS byte copy */
          uVar10 = 0;
          for (puVar6 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar6 != nullptr;
              puVar6 = st::fn_0072E560(puVar6,'\n')) {
            *(undefined1 *)puVar6 = 0x20;
          }
          st::fn_007119C0(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
          pGVar13 = local_14;
          local_8 = local_8 + 0xf;
          uVar18 = st::fn_004056F5(*local_14,*(char *)local_c);
          pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0240,
                                        uVar18);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0xcd,local_8,'\x01',pbVar8);
          pbVar8 = local_10;
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0xcb,local_8 - 2,'\x06',
                 local_10);
          local_3c = 0xcb;
          local_34 = *(undefined4 *)(pbVar8 + 4);
          local_38 = local_8 - 2;
          local_30 = *(undefined4 *)(pbVar8 + 8);
          local_2c = 2;
          local_2b = *pGVar13;
          local_27 = (uint)*(byte *)local_c;
          st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_3c);
          local_8 = local_8 + *(int *)(pbVar8 + 8);
          st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
          pIVar20 = (InternalExceptionFrame *)0x3;
          iVar16 = -1;
          iVar4 = -3;
          puVar6 = (uint *)st::fn_006B0140(0x562c,g_hINSTANCE_00807618);
          st::fn_007119C0(this_00->field_01E0,puVar6,iVar4,iVar16,(uint)pIVar20);
          st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
          pIVar20 = (InternalExceptionFrame *)((DAT_0080874e != '\x03') - 1 & 5);
          iVar16 = -1;
          iVar4 = 1;
          puVar6 = (uint *)st::fn_006B0140((-(uint)(*local_18 != '\0') & 0xffffffef) + 0x5641,
                                              g_hINSTANCE_00807618);
          st::fn_007119C0(this_00->field_01E0,puVar6,iVar4,iVar16,(uint)pIVar20);
          local_8 = local_8 + 0xf;
          pAVar12 = local_c;
        }
        pGVar13 = local_14 + 1;
        local_18 = local_18 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
      local_14 = pGVar13;
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar18 = 3;
      iVar16 = -1;
      iVar4 = -3;
      puVar6 = (uint *)st::fn_006B0140(0x562d,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar6,iVar4,iVar16,uVar18);
      pcVar7 = st::fn_006B0140(*(UINT *)&pAVar12->field_0x1b,g_hINSTANCE_00807618);
      uVar18 = 0xffffffff;
      do {
        pcVar14 = pcVar7;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar14 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar14;
      } while (cVar1 != '\0');
      uVar18 = ~uVar18;
      pcVar7 = pcVar14 + -uVar18;
      pcVar14 = (char *)&DAT_0080f33a;
      memmove(pcVar14, pcVar7, uVar18); /* compiler REP MOVS byte copy */
      uVar10 = 0;
      st::fn_00712C10(this_00->field_01E0,(char *)&DAT_0080f33a,&DAT_0080f33a,
                        " ,.;:!?/\\()[]{}",0xcf,1);
      uVar17 = st::fn_007113E0(this_00->field_01E0,&DAT_0080f33a);
      st::fn_00401870(this_00,local_8,(ushort)uVar17);
      uVar18 = uVar17 & 0xffff;
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,uVar18 + 2);
      st::fn_00711B70(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5,-1,-1);
      if ((ushort)uVar17 < 0x10) {
        uVar18 = 0xf;
      }
      local_8 = local_8 + uVar18;
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
      uVar18 = 3;
      iVar16 = -1;
      iVar4 = -3;
      puVar6 = (uint *)st::fn_006B0140(0x562e,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar6,iVar4,iVar16,uVar18);
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
      pAVar12 = local_c;
      uVar18 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar16 = -1;
      iVar4 = 1;
      puVar6 = (uint *)st::fn_006B0140(0x273f - (local_c->field_001F != 0),g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar6,iVar4,iVar16,uVar18);
      local_8 = local_8 + 0xf;
      if (pAVar12->field_001F != 0) {
        st::fn_00401870(this_00,local_8,0xf);
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
        uVar18 = 3;
        iVar16 = -1;
        iVar4 = -3;
        puVar6 = (uint *)st::fn_006B0140(0x562a,g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_01E0,puVar6,iVar4,iVar16,uVar18);
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
        pHVar19 = g_hINSTANCE_00807618;
        UVar5 = st::fn_00403684(pAVar12->field_001F,bVar15,0);
        pcVar7 = st::fn_006B0140(UVar5,pHVar19);
        uVar18 = 0xffffffff;
        do {
          pcVar14 = pcVar7;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar14 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar14;
        } while (cVar1 != '\0');
        uVar18 = ~uVar18;
        pcVar7 = pcVar14 + -uVar18;
        pcVar14 = (char *)&DAT_0080f33a;
        memmove(pcVar14, pcVar7, uVar18); /* compiler REP MOVS byte copy */
        uVar10 = 0;
        for (puVar6 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar6 != nullptr;
            puVar6 = st::fn_0072E560(puVar6,'\n')) {
          *(undefined1 *)puVar6 = 0x20;
        }
        st::fn_007119C0(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
        pbVar8 = local_10;
        local_8 = local_8 + 0xf;
        st::fn_00401870(this_00,local_8,*(ushort *)(local_10 + 8));
        pAVar12 = local_c;
        uVar18 = st::fn_004056F5(local_c->field_001F,*(char *)local_c);
        pbVar9 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_023C,
                                      uVar18);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0xcd,local_8,'\x01',pbVar9);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0xcd,local_8,'\x06',pbVar8);
        local_3c = 0xcd;
        local_34 = *(undefined4 *)(pbVar8 + 4);
        local_38 = local_8;
        local_30 = *(undefined4 *)(pbVar8 + 8);
        local_2c = 0xb;
        local_2b = pAVar12->field_001F;
        local_27 = (uint)*(byte *)pAVar12;
        st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_3c);
        local_8 = local_8 + *(int *)(pbVar8 + 8);
      }
      if (pAVar12->field_0023 != 0) {
        st::fn_00401870(this_00,local_8,0xf);
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,200,0xf);
        uVar18 = 3;
        iVar16 = -1;
        iVar4 = -3;
        puVar6 = (uint *)st::fn_006B0140(0x562f,g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_01E0,puVar6,iVar4,iVar16,uVar18);
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0xcd,local_8,0xcf,0xf);
        pHVar19 = g_hINSTANCE_00807618;
        UVar5 = st::fn_00403684(pAVar12->field_0023,bVar15,0);
        pcVar7 = st::fn_006B0140(UVar5,pHVar19);
        uVar18 = 0xffffffff;
        do {
          pcVar14 = pcVar7;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar14 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar14;
        } while (cVar1 != '\0');
        uVar18 = ~uVar18;
        pcVar7 = pcVar14 + -uVar18;
        pcVar14 = (char *)&DAT_0080f33a;
        memmove(pcVar14, pcVar7, uVar18); /* compiler REP MOVS byte copy */
        for (puVar6 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar6 != nullptr;
            puVar6 = st::fn_0072E560(puVar6,'\n')) {
          *(undefined1 *)puVar6 = 0x20;
        }
        st::fn_007119C0(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
        local_8 = local_8 + 0xf;
        iVar4 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0248,4);
        st::fn_00401870(this_00,local_8,*(ushort *)(iVar4 + 8));
        pAVar12 = local_c;
        uVar18 = st::fn_004056F5(local_c->field_0023,*(char *)local_c);
        pbVar8 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0240,
                                      uVar18);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0xcd,local_8,'\x01',pbVar8);
        pbVar8 = local_10;
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0xcb,local_8 - 2,'\x06',local_10
              );
        local_3c = 0xcb;
        local_34 = *(undefined4 *)(pbVar8 + 4);
        local_38 = local_8 - 2;
        local_30 = *(undefined4 *)(pbVar8 + 8);
        local_2c = 2;
        local_2b = pAVar12->field_0023;
        local_27 = (uint)*(byte *)pAVar12;
        st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_3c);
        local_8 = local_8 + *(int *)(pbVar8 + 8);
      }
      st::fn_0040506F(this_00,(int *)&local_8,'\x01',param_1,param_2);
      g_currentExceptionFrame = pIVar20;
      return;
    }
    g_currentExceptionFrame = pIVar20;
    iVar16 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x5f8,0,iVar4,
                                "%s","HelpPanelTy::RCProc");
    if (iVar16 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,"E:\\__titans\\Andrey\\helppan.cpp",0x5f8);
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
  HelpPanelTy_field_01A1State HVar1;
  HelpPanelTy *this_00;
  Global_sub_00528060_param_1Enum *pGVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int local_EAX_243;
  UINT UVar7;
  uint *puVar8;
  byte *pbVar9;
  int *piVar10;
  bool bVar11;
  HINSTANCE pHVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  InternalExceptionFrame local_a4;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  uint local_4f;
  undefined4 local_4b;
  int local_44;
  HelpPanelTy *local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
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
          local_40->field_01AB = local_40->field_01A3;
        }
        else {
          local_40->field_01A2 = 0;
          local_40->field_01AB = 0;
        }
        local_40->field_01A1 = CASE_3;
        local_40->field_01A3 = param_1;
        local_40->field_01AF = 0x32;
        local_40->field_01B1 = 5;
        if (local_40->field_0178 != 0) {
          local_40->field_0028 = 0x4202;
          *(undefined2 *)&local_40->field_0x2c = 0;
          local_40->field_002E = 2;
          *(undefined4 *)&local_40->field_0x30 = local_40->field_0178;
          if (g_cursorClass_00802A30 != nullptr) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)g_cursorClass_00802A30->field_0000)(&local_40->field_0x18);
          }
        }
      }
      local_EAX_243 = st::fn_00401F5A(param_1);
      cVar5 = (char)local_EAX_243;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_20 = CONCAT31(uStack_1f,cVar5);
      local_1c = local_EAX_243 & 0xff;
      UVar7 = st::fn_00403684(param_1,cVar5,0);
      st::fn_00403EF9(this_00,0x55fb,local_1c,UVar7);
      st::fn_00403D78(this_00,(int *)&local_8,(STAllPlayersC_GetTOBJImage_param_2Enum *)param_1,
              (byte)_local_20,this_00->field_023C);
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar6 = -1;
      puVar8 = (uint *)st::fn_006B0140(0x564a,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
      local_8 = local_8 + 0xf;
      local_c = 0;
      iVar6 = st::fn_006B0FD0(0x801450);
      if (iVar6 == 0) {
        iVar6 = st::fn_006B0FD0(0x801480);
        if (iVar6 == 0) {
          iVar6 = st::fn_006B0FD0(0x800f10);
          if (iVar6 != 0) {
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
        uVar15 = 3;
        iVar13 = -1;
        iVar6 = -3;
        puVar8 = (uint *)st::fn_006B0140(0x5654,g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar13 = -1;
        iVar6 = 1;
        puVar8 = (uint *)st::fn_006B0140(local_c,g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
        local_8 = local_8 + 0xf;
      }
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar6 = -3;
      puVar8 = (uint *)st::fn_006B0140(0x5656,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      if (local_1c == 1) {
        UVar7 = 0x5604;
      }
      else if (local_1c == 2) {
        UVar7 = 0x5605;
      }
      else {
        UVar7 = 0x5606;
      }
      uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar6 = 1;
      puVar8 = (uint *)st::fn_006B0140(UVar7,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
      local_8 = local_8 + 0xf;
      local_14 = nullptr;
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar6 = -3;
      puVar8 = (uint *)st::fn_006B0140(0x55f7,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
      if (cVar5 == '\x03') {
        local_c = *(UINT *)(&DAT_007e09dc + param_1 * 4);
      }
      else {
        local_c = *(UINT *)(&DAT_007e079c + param_1 * 4);
      }
      if (local_c != 0) {
        st::fn_00710A90(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
        st::external_00000080((LPSTR)&DAT_0080f33a,"%4d",local_c);
        st::fn_007119C0(this_00->field_01E8,&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        uVar15 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,
                              (-(uint)(cVar5 != '\x03') & 0xfffffffe) + 3);
        st::fn_006B5440((ushort *)this_00->field_0218,0,0xb4,local_8,uVar15,0,0x3a);
        local_3c = 0xb4;
        local_34 = *(undefined4 *)(uVar15 + 4);
        local_38 = local_8;
        local_30 = *(undefined4 *)(uVar15 + 8);
        local_2b = (-(uint)(cVar5 != '\x03') & 0xfffffffc) + 0xe2;
        local_2c = 1;
        local_27 = local_1c;
        st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_3c);
        local_8 = local_8 + 0x14;
        local_14 = (AnonShape_00518C20_0B2995D2 *)0x1;
      }
      local_c = *(UINT *)(&DAT_007e055c + param_1 * 4);
      if (local_c != 0) {
        st::fn_00710A90(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
        st::external_00000080((LPSTR)&DAT_0080f33a,"%4d",local_c);
        st::fn_007119C0(this_00->field_01E8,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 4);
        local_14 = (AnonShape_00518C20_0B2995D2 *)
                   st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,0);
        st::fn_006B5440((ushort *)this_00->field_0218,0,0xb4,local_8,(uint)local_14,0,0x3a);
        local_3c = 0xb4;
        local_34 = local_14->field_0004;
        local_38 = local_8;
        local_30 = local_14->field_0008;
        local_2c = 1;
        local_2b = 0xdd;
        local_27 = local_1c;
        st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_3c);
        local_14 = (AnonShape_00518C20_0B2995D2 *)0x1;
        local_8 = local_8 + 0x14;
      }
      local_c = *(UINT *)(&DAT_00854428 + param_1 * 4);
      if (local_c != 0) {
        st::fn_00710A90(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
        st::external_00000080((LPSTR)&DAT_0080f33a,"%4d",local_c);
        st::fn_007119C0(this_00->field_01E8,&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 6);
        local_14 = (AnonShape_00518C20_0B2995D2 *)
                   st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,2);
        st::fn_006B5440((ushort *)this_00->field_0218,0,0xb4,local_8,(uint)local_14,0,0x3a);
        local_3c = 0xb4;
        local_34 = local_14->field_0004;
        local_38 = local_8;
        local_30 = local_14->field_0008;
        local_2c = 1;
        local_2b = 0xdd;
        local_27 = local_1c;
        st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_3c);
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
        local_18 = &DAT_007c0dd1 + local_44 + ((uint)local_14 & 0xffff);
        if (*local_18 == CASE_0) break;
        if (local_c != 0) {
          st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
          uVar15 = 3;
          iVar13 = -1;
          iVar6 = -3;
          puVar8 = (uint *)st::fn_006B0140(0x5657,g_hINSTANCE_00807618);
          st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
          local_c = 0;
        }
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        pGVar3 = local_18;
        uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar13 = -1;
        iVar6 = 1;
        pHVar12 = g_hINSTANCE_00807618;
        UVar7 = st::fn_00404B29(*local_18,'\0');
        puVar8 = (uint *)st::fn_006B0140(UVar7,pHVar12);
        st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
        local_8 = local_8 + 0xf;
        uVar15 = st::fn_004033F0(*pGVar3,0);
        pbVar9 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0230,
                                      uVar15);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',pbVar9);
        local_60 = 0x96;
        local_58 = *(undefined4 *)(pbVar9 + 4);
        local_5c = local_8;
        local_54 = *(undefined4 *)(pbVar9 + 8);
        local_4f = (uint)*local_18;
        local_50 = 5;
        local_4b = 0;
        st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_60);
        local_8 = local_8 + 5 + *(int *)(pbVar9 + 8);
        local_14 = (AnonShape_00518C20_0B2995D2 *)&local_14->field_0x1;
      } while ((ushort)local_14 < 3);
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar6 = -1;
      puVar8 = (uint *)st::fn_006B0140(0x564b,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
      local_8 = local_8 + 0xf;
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar6 = 1;
      puVar8 = (uint *)st::fn_006B0140(0x564c,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      st::external_00000080((LPSTR)&DAT_0080f33a,"%d",*(undefined4 *)(&DAT_007dfbac + param_1 * 4));
      st::fn_007119C0(this_00->field_01E0,&DAT_0080f33a,-3,-1,2);
      local_8 = local_8 + 0xf;
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar6 = 1;
      puVar8 = (uint *)st::fn_006B0140(0x5658,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
      piVar10 = &DAT_007dfc70;
      local_c = DAT_007dfc70;
      local_18 = (Global_sub_00528060_param_1Enum *)0x28;
      iVar6 = DAT_007dfc70;
      do {
        if (*piVar10 < (int)local_c) {
          local_c = *piVar10;
        }
        if (iVar6 < *piVar10) {
          iVar6 = *piVar10;
        }
        piVar10 = piVar10 + 1;
        local_18 = (Global_sub_00528060_param_1Enum *)((int)local_18 + -1);
      } while (local_18 != nullptr);
      iVar6 = (int)(iVar6 - local_c) / 3;
      if (*(int *)(&DAT_007dfc6c + param_1 * 4) < (int)(local_c + iVar6)) {
        local_c = 0x5615;
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_c = (*(int *)(&DAT_007dfc6c + param_1 * 4) < (int)(local_c + iVar6 * 2)) + 0x5613;
      }
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar13 = -1;
      iVar6 = -3;
      puVar8 = (uint *)st::fn_006B0140(local_c,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
      local_8 = local_8 + 0xf;
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar6 = 1;
      puVar8 = (uint *)st::fn_006B0140(0x564d,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
      piVar10 = &DAT_007e04a0;
      local_c = DAT_007e04a0;
      local_18 = (Global_sub_00528060_param_1Enum *)0x28;
      iVar6 = DAT_007e04a0;
      do {
        if (*piVar10 < (int)local_c) {
          local_c = *piVar10;
        }
        if (iVar6 < *piVar10) {
          iVar6 = *piVar10;
        }
        piVar10 = piVar10 + 1;
        local_18 = (Global_sub_00528060_param_1Enum *)((int)local_18 + -1);
      } while (local_18 != nullptr);
      iVar6 = (int)((iVar6 - local_c) + ((int)(iVar6 - local_c) >> 0x1f & 3U)) >> 2;
      if (*(int *)(&DAT_007e049c + param_1 * 4) < (int)(local_c + iVar6)) {
        local_c = 0x5613;
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_c = (((int)(local_c + iVar6 * 2) <= *(int *)(&DAT_007e049c + param_1 * 4)) - 1 &
                  0xfffffffe) + 0x5616;
      }
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar13 = -1;
      iVar6 = -3;
      puVar8 = (uint *)st::fn_006B0140(local_c,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
      local_8 = local_8 + 0xf;
      iVar6 = st::fn_00403F17(this_00,0x96,(int *)&local_8,*(int *)(&DAT_007a8b18 + param_1 * 4),
                         *(int *)(&DAT_007a8bb8 + param_1 * 4),(byte)_local_20);
      cVar4 = local_d;
      if ((iVar6 != 0) || (local_d = '\0', cVar4 != '\0')) {
        local_d = '\x01';
      }
      iVar6 = st::fn_00403F17(this_00,0x96,(int *)&local_8,*(int *)(&DAT_007a8cf8 + param_1 * 4),
                         *(int *)(&DAT_007a8d98 + param_1 * 4),(byte)_local_20);
      cVar4 = local_d;
      if ((iVar6 != 0) || (local_d = '\0', cVar4 != '\0')) {
        local_d = '\x01';
      }
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar6 = 1;
      puVar8 = (uint *)st::fn_006B0140(0x5659,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar14 = -1;
      iVar13 = -3;
      pHVar12 = g_hINSTANCE_00807618;
      iVar6 = st::fn_006B0FD0(0x800f10);
      puVar8 = (uint *)st::fn_006B0140(0x273f - (iVar6 != 0),pHVar12);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar13,iVar14,uVar15);
      local_8 = local_8 + 0xf;
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar6 = 1;
      puVar8 = (uint *)st::fn_006B0140(0x564e,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar13 = -1;
      iVar6 = -3;
      puVar8 = (uint *)st::fn_006B0140((cVar5 != '\x03') + 0x273e,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
      local_8 = local_8 + 0xf;
      if (local_d != '\0') {
        bVar11 = false;
        if (*(int *)(&DAT_007a8b18 + param_1 * 4) != 0) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          bVar11 = (&DAT_007bf678)[*(int *)(&DAT_007a8b18 + param_1 * 4) * 3 + -0x1c2] != 0;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((*(int *)(&DAT_007a8cf8 + param_1 * 4) != 0) &&
           ((bVar11 || ((&DAT_007bf678)[*(int *)(&DAT_007a8cf8 + param_1 * 4) * 3 + -0x1c2] != 0))))
        {
          bVar11 = true;
        }
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar13 = -1;
        iVar6 = 1;
        puVar8 = (uint *)st::fn_006B0140(0x564f,g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar15 = 2;
        iVar13 = -1;
        iVar6 = -3;
        puVar8 = (uint *)st::fn_006B0140(0x273f - bVar11,g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
        local_8 = local_8 + 0xf;
      }
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar6 = 1;
      puVar8 = (uint *)st::fn_006B0140(0x5650,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
      local_c = *(UINT *)(&DAT_007e085c + param_1 * 4);
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 2;
      iVar13 = -1;
      iVar6 = -3;
      puVar8 = (uint *)st::fn_006B0140(0x273f - (local_c != 0),g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
      local_8 = local_8 + 0xf;
      if (local_c != 0) {
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar13 = -1;
        iVar6 = 1;
        puVar8 = (uint *)st::fn_006B0140(0x5651,g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar15);
        st::fn_00710A90(this_00->field_01E8,(int)this_00->field_0218,0,0x5f,local_8 - 3,0x16,0x14);
        st::external_00000080((LPSTR)&DAT_0080f33a,"%4d",local_c);
        st::fn_007119C0(this_00->field_01E8,&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        uVar15 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,
                              (-(uint)(cVar5 != '\x03') & 0xfffffffe) + 3);
        st::fn_006B5440((ushort *)this_00->field_0218,0,0x7a,local_8,uVar15,0,0x3a);
        local_3c = 0x7a;
        local_34 = *(undefined4 *)(uVar15 + 4);
        local_38 = local_8;
        local_30 = *(undefined4 *)(uVar15 + 8);
        local_2b = (-(uint)(cVar5 != '\x03') & 0xfffffffc) + 0xe2;
        local_2c = 1;
        local_27 = local_1c;
        st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_3c);
        local_8 = local_8 + 0x14;
      }
      UVar7 = st::fn_00403684(param_1,(char)_local_20,2);
      st::fn_00402DAB(this_00,(int *)&local_8,UVar7);
      st::fn_0040506F(this_00,(int *)&local_8,'\x03',param_1,0);
      g_currentExceptionFrame = local_a4.previous;
      return;
    }
    g_currentExceptionFrame = local_a4.previous;
    iVar13 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x6f4,0,iVar6,
                                "%s","HelpPanelTy::SubProc");
    if (iVar13 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,"E:\\__titans\\Andrey\\helppan.cpp",0x6f4);
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
  UINT UVar7;
  uint *puVar8;
  byte *pbVar9;
  bool bVar10;
  HINSTANCE module;
  byte bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  InternalExceptionFrame local_a0;
  undefined4 local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  uint local_4b;
  undefined4 local_47;
  HelpPanelTy *local_40;
  Global_sub_00528060_param_1Enum *local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
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
          local_40->field_01AB = local_40->field_01A3;
        }
        else {
          local_40->field_01A2 = 0;
          local_40->field_01AB = 0;
        }
        local_40->field_01A1 = CASE_2;
        local_40->field_01A3 = param_1;
        local_40->field_01A7 = param_2;
        local_40->field_01AF = 0x32;
        local_40->field_01B1 = 5;
        if (local_40->field_0178 != 0) {
          local_40->field_0028 = 0x4202;
          *(undefined2 *)&local_40->field_0x2c = 0;
          local_40->field_002E = 2;
          *(undefined4 *)&local_40->field_0x30 = local_40->field_0178;
          if (g_cursorClass_00802A30 != nullptr) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)g_cursorClass_00802A30->field_0000)(&local_40->field_0x18);
          }
        }
      }
      bVar11 = (byte)param_2;
      UVar7 = st::fn_00403684(param_1,bVar11,0);
      st::fn_00403EF9(this_00,0x55fa,param_2,UVar7);
      st::fn_00403D78(this_00,(int *)&local_8,(STAllPlayersC_GetTOBJImage_param_2Enum *)param_1,bVar11,
              this_00->field_0240);
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar14 = 3;
      iVar12 = -1;
      iVar6 = -1;
      puVar8 = (uint *)st::fn_006B0140(0x564a,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar12,uVar14);
      local_8 = local_8 + 0xf;
      UVar7 = 0;
      iVar6 = st::fn_006B0FD0(0x8014a0);
      if (iVar6 == 0) {
        iVar6 = st::fn_006B0FD0(0x800f90);
        if (iVar6 == 0) {
          iVar6 = st::fn_006B0FD0(0x801360);
          if (iVar6 == 0) {
            iVar6 = st::fn_006B0FD0(0x800f80);
            if (iVar6 != 0) {
              UVar7 = 0x3a9d;
            }
          }
          else {
            UVar7 = 0x3aa8;
          }
        }
        else {
          UVar7 = 0x3a9c;
        }
      }
      else {
        UVar7 = 0x3a9b;
      }
      if (UVar7 != 0) {
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar14 = 3;
        iVar12 = -1;
        iVar6 = -3;
        puVar8 = (uint *)st::fn_006B0140(0x5654,g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar12,uVar14);
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar14 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar12 = -1;
        iVar6 = 1;
        puVar8 = (uint *)st::fn_006B0140(UVar7,g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar12,uVar14);
        local_8 = local_8 + 0xf;
      }
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar14 = 3;
      iVar12 = -1;
      iVar6 = -3;
      puVar8 = (uint *)st::fn_006B0140(0x5656,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar12,uVar14);
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      if (param_2 == 1) {
        UVar7 = 0x5604;
      }
      else if (param_2 == 2) {
        UVar7 = 0x5605;
      }
      else {
        UVar7 = 0x5606;
      }
      uVar14 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar12 = -1;
      iVar6 = 1;
      puVar8 = (uint *)st::fn_006B0140(UVar7,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar12,uVar14);
      local_8 = local_8 + 0xf;
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar14 = 3;
      iVar12 = -1;
      iVar6 = -3;
      puVar8 = (uint *)st::fn_006B0140(0x55f7,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar12,uVar14);
      local_14 = param_1 * 3;
      if (param_2 == 3) {
        iVar6 = *(int *)(&DAT_007e2f10 + param_1 * 0xc);
      }
      else {
        iVar6 = *(int *)(&DAT_007e22a0 + (local_14 + param_2) * 4);
      }
      if (iVar6 != 0) {
        st::fn_00710A90(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
        st::external_00000080((LPSTR)&DAT_0080f33a,"%4d",iVar6);
        st::fn_007119C0(this_00->field_01E8,&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
        uVar14 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,
                              (-(uint)(param_2 != 3) & 0xfffffffe) + 3);
        st::fn_006B5440((ushort *)this_00->field_0218,0,0xb4,local_8,uVar14,0,0x3a);
        local_38 = 0xb4;
        local_30 = *(undefined4 *)(uVar14 + 4);
        local_34 = local_8;
        local_2c = *(undefined4 *)(uVar14 + 8);
        local_27 = (-(uint)(param_2 != 3) & 0xfffffffc) + 0xe2;
        local_28 = 1;
        local_23 = param_2;
        st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_38);
        local_8 = local_8 + 0x14;
      }
      local_14 = local_14 + -0x97 + param_2;
      iVar12 = *(int *)(&DAT_007e1c50 + local_14 * 4);
      if (iVar12 != 0) {
        st::fn_00710A90(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
        st::external_00000080((LPSTR)&DAT_0080f33a,"%4d",iVar12);
        st::fn_007119C0(this_00->field_01E8,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 4);
        uVar14 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,0);
        st::fn_006B5440((ushort *)this_00->field_0218,0,0xb4,local_8,uVar14,0,0x3a);
        local_38 = 0xb4;
        local_30 = *(undefined4 *)(uVar14 + 4);
        local_34 = local_8;
        local_2c = *(undefined4 *)(uVar14 + 8);
        local_28 = 1;
        local_27 = 0xdd;
        local_23 = param_2;
        st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_38);
        local_8 = local_8 + 0x14;
      }
      iVar13 = *(int *)(&DAT_008545ac + local_14 * 4);
      if (iVar13 != 0) {
        st::fn_00710A90(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
        st::external_00000080((LPSTR)&DAT_0080f33a,"%4d",iVar13);
        st::fn_007119C0(this_00->field_01E8,&DAT_0080f33a,1,-1,
                       (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 6);
        uVar14 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,2);
        st::fn_006B5440((ushort *)this_00->field_0218,0,0xb4,local_8,uVar14,0,0x3a);
        local_38 = 0xb4;
        local_30 = *(undefined4 *)(uVar14 + 4);
        local_34 = local_8;
        local_2c = *(undefined4 *)(uVar14 + 8);
        local_28 = 1;
        local_27 = 0xdc;
        local_23 = param_2;
        st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_38);
        local_8 = local_8 + 0x14;
      }
      if (iVar13 == 0 && (iVar12 == 0 && iVar6 == 0)) {
        local_8 = local_8 + 0xf;
      }
      local_1c = (int *)0x1;
      local_10 = 1;
      local_18 = (param_1 + -0x74 + param_2 * 0x42) * 3;
      do {
        pGVar1 = &DAT_007c0e4c + local_18 + (local_10 & 0xffff);
        local_3c = pGVar1;
        if (*pGVar1 == CASE_0) break;
        if (local_1c != nullptr) {
          st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
          uVar14 = 3;
          iVar12 = -1;
          iVar6 = -3;
          puVar8 = (uint *)st::fn_006B0140(0x5657,g_hINSTANCE_00807618);
          st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar12,uVar14);
          local_1c = nullptr;
        }
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar14 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar12 = -1;
        iVar6 = 1;
        module = g_hINSTANCE_00807618;
        UVar7 = st::fn_00404B29(*pGVar1,'\0');
        puVar8 = (uint *)st::fn_006B0140(UVar7,module);
        st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar12,uVar14);
        local_8 = local_8 + 0xf;
        uVar14 = st::fn_004033F0(*pGVar1,0);
        pbVar9 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0230,
                                      uVar14);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',pbVar9);
        local_5c = 0x96;
        local_54 = *(undefined4 *)(pbVar9 + 4);
        local_58 = local_8;
        local_50 = *(undefined4 *)(pbVar9 + 8);
        local_4b = (uint)*local_3c;
        local_4c = 5;
        local_47 = 0;
        st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_5c);
        local_10 = local_10 + 1;
        local_8 = local_8 + 5 + *(int *)(pbVar9 + 8);
      } while ((ushort)local_10 < 3);
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar14 = 3;
      iVar12 = -1;
      iVar6 = -1;
      puVar8 = (uint *)st::fn_006B0140(0x564b,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar12,uVar14);
      local_8 = local_8 + 0xf;
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar14 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar12 = -1;
      iVar6 = 1;
      puVar8 = (uint *)st::fn_006B0140(0x564c,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar12,uVar14);
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      iVar12 = local_14;
      st::external_00000080((LPSTR)&DAT_0080f33a,"%d",*(undefined4 *)(&DAT_007e417c + local_14 * 4));
      st::fn_007119C0(this_00->field_01E0,&DAT_0080f33a,-3,-1,2);
      local_8 = local_8 + 0xf;
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar14 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar6 = 1;
      puVar8 = (uint *)st::fn_006B0140(0x564d,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar14);
      iVar6 = *(int *)(&DAT_007e3dc0 + param_2 * 4);
      local_1c = (int *)(&DAT_007e3dc0 + param_2 * 4);
      local_18 = 0x42;
      local_10 = iVar6;
      do {
        iVar13 = *local_1c;
        if (iVar13 < (int)local_10) {
          local_10 = iVar13;
        }
        if (iVar6 < iVar13) {
          iVar6 = iVar13;
        }
        local_1c = local_1c + 3;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      iVar6 = (int)((iVar6 - local_10) + ((int)(iVar6 - local_10) >> 0x1f & 3U)) >> 2;
      if (*(int *)(&DAT_007e3dc4 + iVar12 * 4) < (int)(local_10 + iVar6)) {
        local_10 = 0x5613;
      }
      else {
        local_10 = (((int)(local_10 + iVar6 * 2) <= *(int *)(&DAT_007e3dc4 + iVar12 * 4)) - 1 &
                   0xfffffffe) + 0x5616;
      }
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar14 = 2;
      iVar13 = -1;
      iVar6 = -3;
      puVar8 = (uint *)st::fn_006B0140(local_10,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar14);
      local_8 = local_8 + 0xf;
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar14 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar6 = 1;
      puVar8 = (uint *)st::fn_006B0140(0x565a,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar14);
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar14 = 2;
      iVar13 = -1;
      iVar6 = -3;
      puVar8 = (uint *)st::fn_006B0140(0x273f - (*(int *)(&DAT_00791b18 + iVar12 * 4) != 0),
                                          g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar14);
      local_8 = local_8 + 0xf;
      iVar6 = param_1 + -0x32;
      if (*(int *)(&DAT_00793e28 + iVar6 * 8) == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = *(int *)(&DAT_00794038 + iVar6 * 8);
      }
      local_18 = iVar6 * 0x18;
      iVar6 = st::fn_00403F17(this_00,0x96,(int *)&local_8,(&DAT_00792ca0)[iVar6 * 6],iVar13,bVar11);
      cVar4 = local_9;
      if ((iVar6 != 0) || (local_9 = '\0', cVar4 != '\0')) {
        local_9 = '\x01';
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(&DAT_00793e2c + (param_1 + -0x32) * 8) == 0) {
        iVar6 = 0;
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar6 = *(int *)(&DAT_0079403c + (param_1 + -0x32) * 8);
      }
      iVar6 = st::fn_00403F17(this_00,0x96,(int *)&local_8,*(int *)((int)&DAT_00792cac + local_18),iVar6,
                         bVar11);
      cVar4 = local_9;
      if ((iVar6 != 0) || (local_9 = '\0', cVar4 != '\0')) {
        local_9 = '\x01';
      }
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar14 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar6 = 1;
      puVar8 = (uint *)st::fn_006B0140(0x564e,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar14);
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar14 = 2;
      iVar13 = -1;
      iVar6 = -3;
      puVar8 = (uint *)st::fn_006B0140((param_2 != 3) + 0x273e,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar14);
      local_8 = local_8 + 0xf;
      if (local_9 != '\0') {
        bVar10 = false;
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar14 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar12 = -1;
        iVar6 = 1;
        puVar8 = (uint *)st::fn_006B0140(0x564f,g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar12,uVar14);
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        if (*(int *)((int)&DAT_00792ca0 + local_18) != 0) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          bVar10 = (&DAT_007bf678)[*(int *)((int)&DAT_00792ca0 + local_18) * 3 + -0x1c2] != 0;
        }
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((*(int *)((int)&DAT_00792cac + local_18) != 0) &&
           ((bVar10 || ((&DAT_007bf678)[*(int *)((int)&DAT_00792cac + local_18) * 3 + -0x1c2] != 0))
           )) {
          bVar10 = true;
        }
        uVar14 = 2;
        iVar12 = -1;
        iVar6 = -3;
        puVar8 = (uint *)st::fn_006B0140(0x273f - bVar10,g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar12,uVar14);
        local_8 = local_8 + 0xf;
        iVar12 = local_14;
      }
      if (param_2 != 3) {
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        uVar14 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar13 = -1;
        iVar6 = 1;
        puVar8 = (uint *)st::fn_006B0140(0x5650,g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar14);
        iVar6 = *(int *)(&DAT_007e29f0 + iVar12 * 4);
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar14 = 2;
        iVar13 = -1;
        iVar12 = -3;
        puVar8 = (uint *)st::fn_006B0140(0x273f - (iVar6 != 0),g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_01E0,puVar8,iVar12,iVar13,uVar14);
        local_8 = local_8 + 0xf;
        iVar12 = local_14;
        if (iVar6 != 0) {
          st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
          uVar14 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar13 = -1;
          iVar12 = 1;
          puVar8 = (uint *)st::fn_006B0140(0x5651,g_hINSTANCE_00807618);
          st::fn_007119C0(this_00->field_01E0,puVar8,iVar12,iVar13,uVar14);
          st::fn_00710A90(this_00->field_01E8,(int)this_00->field_0218,0,0x5f,local_8 - 3,0x16,0x14
                          );
          st::external_00000080((LPSTR)&DAT_0080f33a,"%4d",iVar6);
          st::fn_007119C0(this_00->field_01E8,&DAT_0080f33a,1,-1,
                         (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 7);
          uVar14 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,1);
          st::fn_006B5440((ushort *)this_00->field_0218,0,0x7a,local_8,uVar14,0,0x3a);
          local_38 = 0x7a;
          local_30 = *(undefined4 *)(uVar14 + 4);
          local_34 = local_8;
          local_2c = *(undefined4 *)(uVar14 + 8);
          local_28 = 1;
          local_27 = 0xde;
          local_23 = param_2;
          st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_38);
          local_8 = local_8 + 0x14;
          iVar12 = local_14;
        }
      }
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar14 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar6 = 1;
      puVar8 = (uint *)st::fn_006B0140(0x565b,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar13,uVar14);
      local_10 = 0;
      uVar5 = 0;
      do {
        if ((&DAT_007e1988)[iVar12 * 3 + (uint)uVar5] != '\0') {
          local_10 = 0x273e;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 3);
      if (local_10 == 0) {
        local_10 = 0x273f;
      }
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar14 = 2;
      iVar12 = -1;
      iVar6 = -3;
      puVar8 = (uint *)st::fn_006B0140(local_10,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar6,iVar12,uVar14);
      local_8 = local_8 + 0xf;
      UVar7 = st::fn_00403684(param_1,bVar11,2);
      st::fn_00402DAB(this_00,(int *)&local_8,UVar7);
      st::fn_0040506F(this_00,(int *)&local_8,'\x02',param_1,param_2);
      g_currentExceptionFrame = local_a0.previous;
      return;
    }
    g_currentExceptionFrame = local_a0.previous;
    iVar12 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x7ec,0,iVar6,
                                "%s","HelpPanelTy::ObjProc");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,"E:\\__titans\\Andrey\\helppan.cpp",0x7ec);
  }
  return;
}

// 0051B5A0 HelpPanelTy::ArmProc
#line 4 "decomp/ST.exe/functions/0051B5A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::ArmProc */

void __thiscall st::fn_0051B5A0(HelpPanelTy *this,int param_1,int param_2,char param_3)

{
  char cVar1;
  HelpPanelTy_field_01A1State HVar2;
  HelpPanelTy *this_00;
  int iVar4;
  UINT UVar5;
  uint uVar6;
  byte *pbVar7;
  uint *puVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  Global_sub_00526BA0_param_1Enum GVar12;
  int *piVar13;
  HINSTANCE pHVar14;
  char cVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  Global_sub_005259B0_param_1Enum GVar19;
  InternalExceptionFrame local_a4;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined4 local_4f;
  undefined4 local_4b;
  HelpPanelTy *local_44;
  int local_40;
  int local_3c;
  byte *local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  Global_sub_00526BA0_param_1Enum local_23;
  int local_1f;
  int local_18;
  int *local_14;
  char local_d;
  Global_sub_00526BA0_param_1Enum local_c;
  uint local_8;

  local_8 = 0;
  local_44 = this;
  local_38 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_0248,4);
  if (g_allPlayers_007FA174 != nullptr) {
    local_a4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a4;
    iVar4 = st::fn_0072D7F0(local_a4.jumpBuffer,0);
    this_00 = local_44;
    if (iVar4 == 0) {
      if (param_3 == '\0') {
        HVar2 = local_44->field_01A1;
        if (((HVar2 == 0) || (HVar2 == CASE_6)) || (HVar2 == CASE_A)) {
          local_44->field_01A2 = HVar2;
          local_44->field_01AB = local_44->field_01A3;
        }
        else {
          local_44->field_01A2 = 0;
          local_44->field_01AB = 0;
        }
        local_44->field_01A1 = CASE_4;
        local_44->field_01A3 = param_1;
        local_44->field_01A7 = param_2;
        local_44->field_01AF = 0x32;
        local_44->field_01B1 = 5;
        if (local_44->field_0178 != 0) {
          local_44->field_0028 = 0x4202;
          *(undefined2 *)&local_44->field_0x2c = 0;
          local_44->field_002E = 2;
          *(undefined4 *)&local_44->field_0x30 = local_44->field_0178;
          if (g_cursorClass_00802A30 != nullptr) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)g_cursorClass_00802A30->field_0000)(&local_44->field_0x18);
          }
        }
      }
      GVar19 = (Global_sub_005259B0_param_1Enum)param_1;
      UVar5 = st::fn_00404494(GVar19);
      st::fn_00403EF9(this_00,0x55fd,param_2,UVar5);
      uVar6 = st::fn_0040137F(GVar19,0,'\x01');
      pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0244,uVar6);
      if (pbVar7 != nullptr) {
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0x35,
               (0x1e - *(int *)(pbVar7 + 8)) / 2 + 0x2a,'\x06',pbVar7);
      }
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar6 = 3;
      iVar17 = -1;
      iVar4 = -3;
      puVar8 = (uint *)st::fn_006B0140(0x55f8,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar4,iVar17,uVar6);
      iVar17 = 0;
      iVar4 = st::fn_00405C72(param_1);
      if (0 < iVar4) {
        do {
          iVar4 = st::fn_0040273E(param_1,iVar17,&local_c,&local_14,&local_18);
          if (iVar4 != 0) {
            st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
            if ((local_14 == nullptr) || (local_18 == 0)) {
              if (iVar17 == 0) {
                pcVar9 = st::fn_006B0140(0x565c,g_hINSTANCE_00807618);
                uVar16 = 2;
                pcVar10 = st::fn_006B0140(0x564c,g_hINSTANCE_00807618);
                st::external_00000080((LPSTR)&DAT_0080f33a,"&%d%d &%d%s &%d(%s)",2,local_c,
                          (DAT_0080874e != '\x03') - 1 & 5,pcVar10,uVar16,pcVar9);
              }
              else {
                pcVar9 = st::fn_006B0140(0x565d,g_hINSTANCE_00807618);
                uVar16 = 2;
                iVar4 = iVar17;
                pcVar10 = st::fn_006B0140(0x564c,g_hINSTANCE_00807618);
                st::external_00000080((LPSTR)&DAT_0080f33a,"&%d%d &%d%s &%d(%d %s)",2,local_c,
                          (DAT_0080874e != '\x03') - 1 & 5,pcVar10,uVar16,iVar4,pcVar9);
              }
            }
            else if (iVar17 == 0) {
              pcVar9 = st::fn_006B0140(0x565c,g_hINSTANCE_00807618);
              uVar16 = 2;
              pcVar10 = st::fn_006B0140(0x564c,g_hINSTANCE_00807618);
              st::external_00000080((LPSTR)&DAT_0080f33a,"&%d%d/%d*%d &%d%s &%d(%s)",2,local_c,local_14
                        ,local_18,(DAT_0080874e != '\x03') - 1 & 5,pcVar10,uVar16,pcVar9);
            }
            else {
              pcVar9 = st::fn_006B0140(0x565d,g_hINSTANCE_00807618);
              uVar16 = 2;
              iVar4 = iVar17;
              pcVar10 = st::fn_006B0140(0x564c,g_hINSTANCE_00807618);
              st::external_00000080((LPSTR)&DAT_0080f33a,"&%d%d/%d*%d &%d%s &%d(%d %s)",2,local_c,
                        local_14,local_18,(DAT_0080874e != '\x03') - 1 & 5,pcVar10,uVar16,iVar4,
                        pcVar9);
            }
            st::fn_007119C0(this_00->field_01E0,&DAT_0080f33a,1,-1,0);
            local_8 = local_8 + 0xf;
          }
          iVar17 = iVar17 + 1;
          iVar4 = st::fn_00405C72(param_1);
        } while (iVar17 < iVar4);
      }
      iVar4 = param_1 * 3 + -0x1c2;
      local_14 = (int *)(iVar4 * 4);
      if ((&DAT_007bf67c)[iVar4] != 0) {
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar6 = 3;
        iVar17 = -1;
        iVar4 = -3;
        puVar8 = (uint *)st::fn_006B0140(0x5657,g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_01E0,puVar8,iVar4,iVar17,uVar6);
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        piVar13 = local_14;
        uVar6 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar17 = -1;
        iVar4 = 1;
        pHVar14 = g_hINSTANCE_00807618;
        UVar5 = st::fn_00404B29(*(Global_sub_00528060_param_1Enum *)
                                    ((int)&DAT_007bf67c + (int)local_14),'\0');
        puVar8 = (uint *)st::fn_006B0140(UVar5,pHVar14);
        st::fn_007119C0(this_00->field_01E0,puVar8,iVar4,iVar17,uVar6);
        local_8 = local_8 + 0xf;
        uVar6 = st::fn_004033F0(*(Global_sub_005276E0_param_1Enum *)
                                    ((int)&DAT_007bf67c + (int)piVar13),0);
        pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0230,
                                      uVar6);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',pbVar7);
        local_60 = 0x96;
        local_58 = *(undefined4 *)(pbVar7 + 4);
        local_5c = local_8;
        local_54 = *(undefined4 *)(pbVar7 + 8);
        local_50 = 5;
        local_4b = 0;
        local_4f = *(undefined4 *)((int)&DAT_007bf67c + (int)local_14);
        st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_60);
        local_8 = local_8 + 5 + *(int *)(pbVar7 + 8);
      }
      iVar4 = (&DAT_007e6024)[param_1 * 5 + -0x2ee];
      if (iVar4 != 0) {
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar6 = 3;
        iVar18 = -1;
        iVar17 = -3;
        puVar8 = (uint *)st::fn_006B0140(0x55f7,g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_01E0,puVar8,iVar17,iVar18,uVar6);
        st::fn_00710A90(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
        st::external_00000080((LPSTR)&DAT_0080f33a,"%4d",iVar4);
        st::fn_007119C0(this_00->field_01E8,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 4);
        uVar6 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0238,0);
        st::fn_006B5440((ushort *)this_00->field_0218,0,0xb4,local_8,uVar6,0,0x3a);
        local_34 = 0xb4;
        local_2c = *(undefined4 *)(uVar6 + 4);
        local_30 = local_8;
        local_28 = *(undefined4 *)(uVar6 + 8);
        local_24 = 1;
        local_23 = 0xdd;
        local_1f = param_2;
        st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_34);
        local_8 = local_8 + 0x14;
      }
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      pcVar9 = st::fn_006B0140(0x5658,g_hINSTANCE_00807618);
      st::external_00000080((LPSTR)&DAT_0080f33a,"%s:",pcVar9);
      st::fn_007119C0(this_00->field_01E0,&DAT_0080f33a,-3,-1,3);
      iVar4 = *(int *)(&DAT_007d1fdc + param_1 * 4);
      if (iVar4 == -1) {
        UVar5 = 0x5617;
      }
      else {
        iVar17 = 0;
        piVar13 = &DAT_007d2234;
        do {
          if (*piVar13 != -1) {
            local_40 = (&DAT_007d2234)[iVar17];
            local_3c = local_40;
            break;
          }
          piVar13 = piVar13 + 1;
          iVar17 = iVar17 + 1;
        } while ((int)piVar13 < 0x7d22e8);
        piVar13 = &DAT_007d2234;
        do {
          iVar17 = *piVar13;
          if (iVar17 != -1) {
            if (iVar17 < local_3c) {
              local_3c = iVar17;
            }
            if (local_40 < iVar17) {
              local_40 = iVar17;
            }
          }
          piVar13 = piVar13 + 1;
        } while ((int)piVar13 < 0x7d22e8);
        iVar17 = (local_40 - local_3c) / 3;
        if (iVar4 < iVar17 + local_3c) {
          UVar5 = 0x5615;
        }
        else {
          UVar5 = (iVar4 < local_3c + iVar17 * 2) + 0x5613;
        }
      }
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar6 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar17 = -1;
      iVar4 = 1;
      puVar8 = (uint *)st::fn_006B0140(UVar5,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar4,iVar17,uVar6);
      local_8 = local_8 + 0xf;
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar6 = 3;
      iVar17 = -1;
      iVar4 = -3;
      puVar8 = (uint *)st::fn_006B0140(0x565e,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar4,iVar17,uVar6);
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar6 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar17 = -1;
      iVar4 = 1;
      puVar8 = (uint *)st::fn_006B0140(0x273f - (*(int *)("blast_p" + param_1 * 4) != 0)
                                          ,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar4,iVar17,uVar6);
      piVar13 = local_14;
      local_8 = local_8 + 0xf;
      cVar15 = (char)param_2;
      if (*(int *)((int)&DAT_007bf678 + (int)local_14) != 0) {
        local_c = CASE_34;
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar6 = 3;
        iVar17 = -1;
        iVar4 = -3;
        puVar8 = (uint *)st::fn_006B0140(0x565f,g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_01E0,puVar8,iVar4,iVar17,uVar6);
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        switch(*(undefined4 *)((int)&DAT_007bf678 + (int)piVar13)) {
        case 1:
          local_c = CASE_34;
          break;
        case 2:
          local_c = CASE_5B;
          break;
        case 3:
          local_c = CASE_44;
          break;
        case 4:
          local_c = CASE_4E;
        }
        pHVar14 = g_hINSTANCE_00807618;
        UVar5 = st::fn_00403684(local_c,cVar15,0);
        pcVar9 = st::fn_006B0140(UVar5,pHVar14);
        uVar6 = 0xffffffff;
        do {
          pcVar10 = pcVar9;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar10 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar9 = pcVar10 + -uVar6;
        pcVar10 = (char *)&DAT_0080f33a;
        memmove(pcVar10, pcVar9, uVar6); /* compiler REP MOVS byte copy */
        uVar11 = 0;
        for (puVar8 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar8 != nullptr;
            puVar8 = st::fn_0072E560(puVar8,'\n')) {
          *(undefined1 *)puVar8 = 0x20;
        }
        st::fn_007119C0(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
        GVar12 = local_c;
        local_8 = local_8 + 0xf;
        uVar6 = st::fn_004056F5(local_c,cVar15);
        pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0240,
                                      uVar6);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',pbVar7);
        pbVar7 = local_38;
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x94,local_8 - 2,'\x06',local_38
              );
        local_34 = 0x94;
        local_2c = *(undefined4 *)(pbVar7 + 4);
        local_30 = local_8 - 2;
        local_28 = *(undefined4 *)(pbVar7 + 8);
        local_24 = 2;
        local_23 = GVar12;
        local_1f = param_2;
        st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_34);
        local_8 = local_8 + *(int *)(pbVar7 + 8);
      }
      local_d = '\0';
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar6 = 3;
      iVar17 = -1;
      iVar4 = -3;
      puVar8 = (uint *)st::fn_006B0140(0x5660,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar8,iVar4,iVar17,uVar6);
      local_14 = &DAT_007a8b1c;
      local_c = CASE_1;
      do {
        GVar12 = local_c;
        if ((*local_14 == param_1) && (iVar4 = st::fn_00401F5A(local_c), iVar4 == param_2)) {
          st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
          pHVar14 = g_hINSTANCE_00807618;
          UVar5 = st::fn_00403684(local_c,cVar15,0);
          pcVar9 = st::fn_006B0140(UVar5,pHVar14);
          uVar6 = 0xffffffff;
          do {
            pcVar10 = pcVar9;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar10 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar10;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          pcVar9 = pcVar10 + -uVar6;
          pcVar10 = (char *)&DAT_0080f33a;
          memmove(pcVar10, pcVar9, uVar6); /* compiler REP MOVS byte copy */
          uVar11 = 0;
          for (puVar8 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar8 != nullptr;
              puVar8 = st::fn_0072E560(puVar8,'\n')) {
            *(undefined1 *)puVar8 = 0x20;
          }
          st::fn_007119C0(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
          GVar12 = local_c;
          local_8 = local_8 + 0xf;
          uVar6 = st::fn_004056F5(local_c,cVar15);
          pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_023C,
                                        uVar6);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',pbVar7);
          pbVar7 = local_38;
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x94,local_8 - 2,'\x06',
                 local_38);
          local_34 = 0x94;
          local_2c = *(undefined4 *)(pbVar7 + 4);
          local_30 = local_8 - 2;
          local_28 = *(undefined4 *)(pbVar7 + 8);
          local_24 = 3;
          local_23 = GVar12;
          local_1f = param_2;
          st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_34);
          local_8 = local_8 + *(int *)(pbVar7 + 8);
          local_d = '\x01';
        }
        local_14 = local_14 + 1;
        local_c = GVar12 + CASE_1;
      } while ((int)GVar12 < 0x28);
      local_14 = &DAT_007a8cfc;
      local_c = CASE_1;
      do {
        GVar12 = local_c;
        if ((*local_14 == param_1) && (iVar4 = st::fn_00401F5A(local_c), iVar4 == param_2)) {
          st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
          pHVar14 = g_hINSTANCE_00807618;
          UVar5 = st::fn_00403684(local_c,cVar15,0);
          pcVar9 = st::fn_006B0140(UVar5,pHVar14);
          uVar6 = 0xffffffff;
          do {
            pcVar10 = pcVar9;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar10 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar10;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          pcVar9 = pcVar10 + -uVar6;
          pcVar10 = (char *)&DAT_0080f33a;
          memmove(pcVar10, pcVar9, uVar6); /* compiler REP MOVS byte copy */
          uVar11 = 0;
          for (puVar8 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar8 != nullptr;
              puVar8 = st::fn_0072E560(puVar8,'\n')) {
            *(undefined1 *)puVar8 = 0x20;
          }
          st::fn_007119C0(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
          GVar12 = local_c;
          local_8 = local_8 + 0xf;
          uVar6 = st::fn_004056F5(local_c,cVar15);
          pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_023C,
                                        uVar6);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',pbVar7);
          pbVar7 = local_38;
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x94,local_8 - 2,'\x06',
                 local_38);
          local_34 = 0x94;
          local_2c = *(undefined4 *)(pbVar7 + 4);
          local_30 = local_8 - 2;
          local_28 = *(undefined4 *)(pbVar7 + 8);
          local_24 = 3;
          local_23 = GVar12;
          local_1f = param_2;
          st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_34);
          local_8 = local_8 + *(int *)(pbVar7 + 8);
          local_d = '\x01';
        }
        local_14 = local_14 + 1;
        local_c = GVar12 + CASE_1;
        if (0x27 < (int)GVar12) {
          piVar13 = &DAT_00792ca0;
          local_c = CASE_32;
          do {
            local_18 = 2;
            GVar12 = local_c;
            do {
              if ((*piVar13 == param_1) &&
                 (local_14 = piVar13, iVar4 = st::fn_00401F5A(GVar12), iVar4 == param_2)) {
                st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,
                                 0xf);
                pHVar14 = g_hINSTANCE_00807618;
                UVar5 = st::fn_00403684(local_c,cVar15,0);
                pcVar9 = st::fn_006B0140(UVar5,pHVar14);
                uVar6 = 0xffffffff;
                do {
                  pcVar10 = pcVar9;
                  if (uVar6 == 0) break;
                  uVar6 = uVar6 - 1;
                  pcVar10 = pcVar9 + 1;
                  cVar1 = *pcVar9;
                  pcVar9 = pcVar10;
                } while (cVar1 != '\0');
                uVar6 = ~uVar6;
                pcVar9 = pcVar10 + -uVar6;
                pcVar10 = (char *)&DAT_0080f33a;
                memmove(pcVar10, pcVar9, uVar6); /* compiler REP MOVS byte copy */
                for (puVar8 = st::fn_0072E560(&DAT_0080f33a,'\n');
                    puVar8 != nullptr; puVar8 = st::fn_0072E560(puVar8,'\n')) {
                  *(undefined1 *)puVar8 = 0x20;
                }
                st::fn_007119C0(this_00->field_01E0,&DAT_0080f33a,1,-1,
                               (DAT_0080874e != '\x03') - 1 & 5);
                GVar12 = local_c;
                local_8 = local_8 + 0xf;
                uVar6 = st::fn_004056F5(local_c,cVar15);
                pbVar7 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)
                                              this_00->field_0240,uVar6);
                st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',
                       pbVar7);
                pbVar7 = local_38;
                st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x94,local_8 - 2,'\x06',
                       local_38);
                local_34 = 0x94;
                local_2c = *(undefined4 *)(pbVar7 + 4);
                local_30 = local_8 - 2;
                local_28 = *(undefined4 *)(pbVar7 + 8);
                local_24 = 2;
                local_23 = GVar12;
                local_1f = param_2;
                st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_34);
                local_8 = local_8 + *(int *)(pbVar7 + 8);
                local_d = '\x01';
                GVar12 = local_c;
                piVar13 = local_14;
              }
              piVar13 = piVar13 + 3;
              local_18 = local_18 + -1;
            } while (local_18 != 0);
            local_c = GVar12 + CASE_1;
            if (0x41 < (int)(GVar12 - CASE_31)) {
              if (local_d == '\0') {
                local_8 = local_8 + 0xf;
              }
              local_14 = piVar13;
              UVar5 = st::fn_004039A4(GVar19);
              st::fn_00402DAB(this_00,(int *)&local_8,UVar5);
              st::fn_0040506F(this_00,(int *)&local_8,'\x04',param_1,param_2);
              g_currentExceptionFrame = local_a4.previous;
              return;
            }
          } while( true );
        }
      } while( true );
    }
    g_currentExceptionFrame = local_a4.previous;
    iVar17 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x8c4,0,iVar4,
                                "%s","HelpPanelTy::ArmProc");
    if (iVar17 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,"E:\\__titans\\Andrey\\helppan.cpp",0x8c4);
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
  char cVar1;
  HelpPanelTy_field_01A1State HVar2;
  HelpPanelTy *this_00;
  Global_sub_00526BA0_param_1Enum GVar4;
  int iVar5;
  UINT UVar6;
  uint *puVar7;
  char *pcVar8;
  byte *pbVar9;
  int uVar14;
  uint uVar10;
  char *pcVar11;
  byte bVar12;
  int iVar13;
  uint uVar15;
  HINSTANCE pHVar16;
  InternalExceptionFrame local_74;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  Global_sub_00526BA0_param_1Enum local_1f;
  int local_1b;
  HelpPanelTy *local_14;
  byte *local_10;
  Global_sub_00526BA0_param_1Enum local_c;
  uint local_8;

  local_8 = 0;
  local_14 = this;
  local_10 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this->field_0248,4);
  if (g_allPlayers_007FA174 != nullptr) {
    local_74.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_74;
    iVar5 = st::fn_0072D7F0(local_74.jumpBuffer,0);
    this_00 = local_14;
    if (iVar5 == 0) {
      if (param_3 == '\0') {
        HVar2 = local_14->field_01A1;
        if (((HVar2 == 0) || (HVar2 == CASE_6)) || (HVar2 == CASE_A)) {
          local_14->field_01A2 = HVar2;
          local_14->field_01AB = local_14->field_01A3;
        }
        else {
          local_14->field_01A2 = 0;
          local_14->field_01AB = 0;
        }
        local_14->field_01A1 = CASE_B;
        local_14->field_01A3 = param_1;
        local_14->field_01A7 = param_2;
        local_14->field_01AF = 0x32;
        local_14->field_01B1 = 5;
        if (local_14->field_0178 != 0) {
          local_14->field_0028 = 0x4202;
          *(undefined2 *)&local_14->field_0x2c = 0;
          local_14->field_002E = 2;
          *(undefined4 *)&local_14->field_0x30 = local_14->field_0178;
          if (g_cursorClass_00802A30 != nullptr) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)g_cursorClass_00802A30->field_0000)(&local_14->field_0x18);
          }
        }
      }
      bVar12 = (byte)param_2;
      UVar6 = st::fn_00403684(param_1,bVar12,0);
      st::fn_00403EF9(this_00,0x55ff,param_2,UVar6);
      st::fn_00403D78(this_00,(int *)&local_8,(STAllPlayersC_GetTOBJImage_param_2Enum *)param_1,bVar12,
              this_00->field_023C);
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar5 = -1;
      puVar7 = (uint *)st::fn_006B0140(0x564a,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar7,iVar5,iVar13,uVar15);
      local_8 = local_8 + 0xf;
      if (param_1 == 0xfe) {
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar15 = 3;
        iVar13 = -1;
        iVar5 = -3;
        puVar7 = (uint *)st::fn_006B0140(0x5661,g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_01E0,puVar7,iVar5,iVar13,uVar15);
        st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        local_c = (-(uint)(param_2 != 3) & 0xfffffff3) + CASE_5F;
        pHVar16 = g_hINSTANCE_00807618;
        UVar6 = st::fn_00403684(local_c,bVar12,0);
        pcVar8 = st::fn_006B0140(UVar6,pHVar16);
        uVar15 = 0xffffffff;
        do {
          pcVar11 = pcVar8;
          if (uVar15 == 0) break;
          uVar15 = uVar15 - 1;
          pcVar11 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar11;
        } while (cVar1 != '\0');
        uVar15 = ~uVar15;
        pcVar8 = pcVar11 + -uVar15;
        pcVar11 = (char *)&DAT_0080f33a;
        memmove(pcVar11, pcVar8, uVar15); /* compiler REP MOVS byte copy */
        uVar10 = 0;
        for (puVar7 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar7 != nullptr;
            puVar7 = st::fn_0072E560(puVar7,'\n')) {
          *(undefined1 *)puVar7 = 0x20;
        }
        st::fn_007119C0(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
        GVar4 = local_c;
        local_8 = local_8 + 0xf;
        uVar15 = st::fn_004056F5(local_c,bVar12);
        pbVar9 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0240,
                                      uVar15);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',pbVar9);
        pbVar9 = local_10;
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x94,local_8 - 2,'\x06',local_10
              );
        local_30 = 0x94;
        local_28 = *(undefined4 *)(pbVar9 + 4);
        local_2c = local_8 - 2;
        local_24 = *(undefined4 *)(pbVar9 + 8);
        local_20 = 2;
        local_1f = GVar4;
        local_1b = param_2;
        st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_30);
        local_8 = local_8 + *(int *)(pbVar9 + 8);
      }
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar5 = -3;
      puVar7 = (uint *)st::fn_006B0140(0x5655,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar7,iVar5,iVar13,uVar15);
      pHVar16 = g_hINSTANCE_00807618;
      UVar6 = st::fn_00403684(param_1,bVar12,1);
      pcVar8 = st::fn_006B0140(UVar6,pHVar16);
      uVar15 = 0xffffffff;
      do {
        pcVar11 = pcVar8;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar11 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar11;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      pcVar8 = pcVar11 + -uVar15;
      pcVar11 = (char *)&DAT_0080f33a;
      memmove(pcVar11, pcVar8, uVar15); /* compiler REP MOVS byte copy */
      uVar10 = 0;
      st::fn_00712C10(this_00->field_01E0,(char *)&DAT_0080f33a,&DAT_0080f33a,
                        " ,.;:!?/\\()[]{}",0x106,1);
      uVar14 = st::fn_007113E0(this_00->field_01E0,&DAT_0080f33a);
      st::fn_00401870(this_00,local_8,(ushort)uVar14);
      uVar15 = uVar14 & 0xffff;
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,uVar15 + 2);
      st::fn_00711B70(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5,-1,-1);
      if ((ushort)uVar14 < 0x10) {
        uVar15 = 0xf;
      }
      local_8 = local_8 + uVar15;
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar5 = -3;
      puVar7 = (uint *)st::fn_006B0140(0x562a,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar7,iVar5,iVar13,uVar15);
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
      pHVar16 = g_hINSTANCE_00807618;
      UVar6 = st::fn_00403684(local_c,bVar12,0);
      pcVar8 = st::fn_006B0140(UVar6,pHVar16);
      uVar15 = 0xffffffff;
      do {
        pcVar11 = pcVar8;
        if (uVar15 == 0) break;
        uVar15 = uVar15 - 1;
        pcVar11 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar11;
      } while (cVar1 != '\0');
      uVar15 = ~uVar15;
      pcVar8 = pcVar11 + -uVar15;
      pcVar11 = (char *)&DAT_0080f33a;
      memmove(pcVar11, pcVar8, uVar15); /* compiler REP MOVS byte copy */
      for (puVar7 = st::fn_0072E560(&DAT_0080f33a,'\n'); puVar7 != nullptr;
          puVar7 = st::fn_0072E560(puVar7,'\n')) {
        *(undefined1 *)puVar7 = 0x20;
      }
      st::fn_007119C0(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5);
      local_8 = local_8 + 0xf;
      uVar15 = st::fn_004056F5(local_c,bVar12);
      pbVar9 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_023C,uVar15
                                   );
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',pbVar9);
      pbVar9 = local_10;
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x94,local_8 - 2,'\x06',local_10);
      local_30 = 0x94;
      local_28 = *(undefined4 *)(pbVar9 + 4);
      local_2c = local_8 - 2;
      local_24 = *(undefined4 *)(pbVar9 + 8);
      local_20 = 3;
      local_1f = local_c;
      local_1b = param_2;
      st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,&local_30);
      local_8 = local_8 + *(int *)(pbVar9 + 8);
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar5 = -3;
      puVar7 = (uint *)st::fn_006B0140(0x5662,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar7,iVar5,iVar13,uVar15);
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar5 = 1;
      puVar7 = (uint *)st::fn_006B0140((-(uint)(param_1 != 0xfd) & 0xffffffcd) + 0x5663,
                                          g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar7,iVar5,iVar13,uVar15);
      local_8 = local_8 + 0xf;
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar15 = 3;
      iVar13 = -1;
      iVar5 = -3;
      puVar7 = (uint *)st::fn_006B0140(0x5625,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar7,iVar5,iVar13,uVar15);
      st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar15 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar13 = -1;
      iVar5 = 1;
      puVar7 = (uint *)st::fn_006B0140(0x5d5a,g_hINSTANCE_00807618);
      st::fn_007119C0(this_00->field_01E0,puVar7,iVar5,iVar13,uVar15);
      local_8 = local_8 + 0xf;
      UVar6 = st::fn_00403684(param_1,bVar12,2);
      st::fn_00402DAB(this_00,(int *)&local_8,UVar6);
      st::fn_0040506F(this_00,(int *)&local_8,'\v',param_1,param_2);
      g_currentExceptionFrame = local_74.previous;
      return;
    }
    g_currentExceptionFrame = local_74.previous;
    iVar13 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x929,0,iVar5,
                                "%s","HelpPanelTy::SpecProc");
    if (iVar13 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar5,0,"E:\\__titans\\Andrey\\helppan.cpp",0x929);
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
  HelpPanelTy *this_00;
  int errorCode;
  UINT UVar3;
  int iVar4;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  int local_8;

  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (errorCode == 0) {
    if (param_2 == '\0') {
      HVar1 = local_c->field_01A1;
      if (((HVar1 == 0) || (HVar1 == CASE_6)) || (HVar1 == CASE_A)) {
        local_c->field_01A2 = HVar1;
        local_c->field_01AB = local_c->field_01A3;
      }
      else {
        local_c->field_01A2 = 0;
        local_c->field_01AB = 0;
      }
      local_c->field_01A1 = CASE_C;
      local_c->field_01A3 = param_1;
      local_c->field_01A7 = 0;
      local_c->field_01AF = 0x23;
      local_c->field_01B1 = 5;
      if (local_c->field_0178 != 0) {
        local_c->field_0028 = 0x4202;
        *(undefined2 *)&local_c->field_0x2c = 0;
        local_c->field_002E = 2;
        *(undefined4 *)&local_c->field_0x30 = local_c->field_0178;
        if (g_cursorClass_00802A30 != nullptr) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)g_cursorClass_00802A30->field_0000)(&local_c->field_0x18);
        }
      }
    }
    UVar3 = st::fn_00403684(param_1,'\0',0);
    st::fn_00403EF9(this_00,0x55f9,0,UVar3);
    st::fn_00403D78(this_00,&local_8,(STAllPlayersC_GetTOBJImage_param_2Enum *)param_1,0,0);
    UVar3 = st::fn_00403684(param_1,'\0',2);
    st::fn_00402DAB(this_00,&local_8,UVar3);
    st::fn_0040506F(this_00,&local_8,'\f',param_1,0);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x93f,0,errorCode,
                             "%s","HelpPanelTy::NatProc");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\helppan.cpp",0x93f);
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
  char *pcVar4;
  int uVar10;
  LPSTR pCVar5;
  uint *puVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar11;
  char *pcVar12;
  int *piVar13;
  int iVar14;
  InternalExceptionFrame local_78;
  uint local_34 [7];
  int local_18;
  UINT local_14;
  HelpPanelTy *local_10;
  uint local_c;
  ushort *local_8;

  local_10 = this;
  local_14 = st::fn_00402473((Global_sub_00529D80_param_1Enum)param_1,param_2);
  memset(local_34, 0, 0x19); /* compiler bulk-zero initialization */
  local_c = 0;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  iVar8 = st::fn_0072D7F0(local_78.jumpBuffer,0);
  this_00 = local_10;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_78.previous;
    iVar14 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0x973,0,iVar8,
                                "%s","HelpPanelTy::TipProc");
    if (iVar14 == 0) {
      st::fn_006A5E40(iVar8,0,"E:\\__titans\\Andrey\\helppan.cpp",0x973);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_3 != '\0') goto LAB_0051d689;
  HVar2 = local_10->field_01A1;
  if (((HVar2 == 0) || (HVar2 == CASE_6)) || (HVar2 == CASE_A)) {
    local_10->field_01A2 = HVar2;
    local_10->field_01AB = local_10->field_01A3;
  }
  else {
    local_10->field_01A2 = 0;
    local_10->field_01AB = 0;
  }
  local_10->field_01A1 = CASE_8;
  local_10->field_01A3 = param_1;
  local_10->field_01A7 = param_2;
  local_10->field_01AF = 0x14;
  local_10->field_01B1 = 5;
  if (local_10->field_0178 != 0) {
    local_10->field_0028 = 0x4202;
    *(undefined2 *)&local_10->field_0x2c = 0;
    local_10->field_002E = 2;
    *(undefined4 *)&local_10->field_0x30 = local_10->field_0178;
    if (g_cursorClass_00802A30 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)g_cursorClass_00802A30->field_0000)(&local_10->field_0x18);
    }
  }
  bVar7 = (byte)param_1;
  if (param_2 == 1) {
    DAT_00807352 = DAT_00807352 | 1 << (bVar7 & 0x1f);
LAB_0051d650:
    DAT_00807356 = DAT_00807356 | 1 << (bVar7 & 0x1f);
LAB_0051d665:
    DAT_0080735a = DAT_0080735a | 1 << (bVar7 & 0x1f);
  }
  else {
    if (param_2 == 2) goto LAB_0051d650;
    if (param_2 == 3) goto LAB_0051d665;
  }
  DAT_0080734e = DAT_0080734e | 1 << (bVar7 & 0x1f);
LAB_0051d689:
  st::fn_00403EF9(this_00,0x55f2,0,0);
  uVar10 = local_c;
  if (local_14 != 10000) {
    pcVar4 = st::fn_006B0140(local_14,g_hINSTANCE_00807618);
    uVar9 = 0xffffffff;
    do {
      pcVar12 = pcVar4;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar12 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar12;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    pcVar4 = pcVar12 + -uVar9;
    pcVar12 = (char *)&DAT_0080f33a;
    memmove(pcVar12, pcVar4, uVar9); /* compiler REP MOVS byte copy */
    st::fn_00712D30
              (this_00->field_01E0,(char *)&DAT_0080f33a,&DAT_0080f33a," ,.;:!?/\\()[]{}",
               (uint *)&DAT_007c21ec,0x19c,&DAT_007c2198,1);
    uVar10 = st::fn_007113E0(this_00->field_01E0,&DAT_0080f33a);
    local_c = uVar10;
    st::fn_00401870(this_00,0,(ushort)uVar10);
    st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,0,0,0x19c,uVar10 + 2);
    st::fn_00711B70(this_00->field_01E0,&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5,-1,-1);
  }
  st::fn_00401870(this_00,uVar10,0x1e);
  iVar14 = 1;
  piVar13 = nullptr;
  uVar9 = (uint)(DAT_0080734d != '\0');
  iVar8 = 1;
  pCVar5 = st::fn_0040577C("BUT_HLPTDAY",0);
  pCVar5 = st::fn_006F2C00(pCVar5,iVar8,uVar9);
  local_8 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar5,piVar13,iVar14);
  uVar9 = uVar10 + 10;
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x50,uVar9,'\x01',(byte *)local_8);
  local_18 = *(int *)(local_8 + 2);
  st::fn_00710A90(this_00->field_01E0,(int)this_00->field_0218,0,local_18 + 0x5f,uVar9,
                   0x13d - local_18,0xf);
  uVar11 = (DAT_0080874e != '\x03') - 1 & 5;
  iVar14 = -1;
  iVar8 = 1;
  puVar6 = (uint *)st::fn_006B0140(0x5c93,g_hINSTANCE_00807618);
  st::fn_007119C0(this_00->field_01E0,puVar6,iVar8,iVar14,uVar11);
  local_34[0] = 0x50;
  local_34[2] = local_18;
  local_34[3] = *(uint *)(local_8 + 4);
  local_34[1] = uVar9;
  st::fn_006AE1C0((DArrayTy *)this_00->field_01D7,local_34);
  st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_8);
  st::fn_00401870(this_00,uVar10 + 0x1e,10);
  local_c = ((uint)uVar10 / 10 + 1) * 10;
  iVar8 = ((ushort)this_00->field_01AF - 0x118) + local_c;
  if (iVar8 < 1) {
    iVar8 = 0;
  }
  else {
    iVar8 = iVar8 / (int)(uint)(ushort)this_00->field_01B1 + 1;
  }
  st::fn_00402EEB(this_00,iVar8);
  st::fn_006B5110
            ((int)this_00->field_0068,0,0x21,(ushort)this_00->field_01AF + 0x16,
             (int)this_00->field_0218,0,0,0,0x19c,0x117 - (uint)(ushort)this_00->field_01AF,0xff);
  st::fn_006B3640
            ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
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
   direct_offsets={10:3,14:10,18:5,1c:12} */

int __thiscall st::fn_0051DDD0(HelpPanelTy *this,STMessage *message)

{
  char cVar1;
  HelpPanelTy_field_01A1State HVar2;
  STMessageId SVar3;
  ccFntTy *pcVar4;
  AnonPointee_HelpPanelTy_0218 *pAVar5;
  void *pvVar6;
  UINT *pUVar7;
  HelpPanelTy *this_00;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  char *pcVar12;
  uint *puVar13;
  LPSTR pCVar14;
  int iVar15;
  uint uVar16;
  DArrayTy *pDVar17;
  uint uVar18;
  ushort uVar19;
  byte bVar20;
  char *pcVar21;
  bool bVar22;
  code *pcVar23;
  UINT UVar24;
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
  uint *local_1c;
  uint local_18;
  uint local_14;
  undefined4 *local_10;
  uint local_c;
  UINT *local_8;

  local_84.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_84;
  local_20 = this;
  iVar8 = st::fn_0072D7F0(local_84.jumpBuffer,0);
  this_00 = local_20;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_84.previous;
    iVar15 = st::fn_006AD4D0("E:\\__titans\\Andrey\\helppan.cpp",0xac7,0,iVar8,
                                "%s","HelpPanelTy::GetMessage");
    if (iVar15 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar8,0,"E:\\__titans\\Andrey\\helppan.cpp",0xac7);
    return 0xffff;
  }
  if (message->id == MESS_ID_CREATE) {
    puVar10 = &local_20->field_004C;
    st::fn_006B1A50(g_ddxContext_008075A8,3,nullptr,puVar10);
    this_00->field_003C = *puVar10;
    this_00->field_0044 = this_00->field_0050 - this_00->field_0048;
    this_00->field_0174 = this_00->field_0048 + this_00->field_0050;
  }
  st::fn_004017F8((PanelTy *)this_00,message);
  SVar3 = message->id;
  if (SVar3 < MESS_OPTPANELTY_C001) {
    if (SVar3 == MESS_SHARED_C000) {
      UVar24 = 0x274e;
      pCVar14 = st::fn_0040577C("BUT_MEDIUM",0);
      st::fn_00403508((UPanelTy *)this_00,(AnonShape_0053DAF0_3BDC2979 *)message,pCVar14,UVar24);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    if (SVar3 < MESS_SIDTY_8161) {
      if (SVar3 == MESS_SHARED_8160) {
        pcVar4 = this_00->field_01E4;
        if (pcVar4->field_00A0 != 0) {
          st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar4);
        }
        (message->arg1).ptr = (void *)(*(int *)&pcVar4->field_0x8a + 1);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      if (MESS_SHARED_0060 < SVar3) {
        if (SVar3 == MESS_SHARED_0061) {
          local_c = (uint)(message->arg1).words.low;
          local_8 = (UINT *)(uint)(message->arg1).words.high;
          if (this_00->field_0172 != 1) {
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
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            local_14 = *(uint *)(this_00->field_01D7 + 0xc);
            if (local_14 == 0) {
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            local_18 = (uint)(ushort)this_00->field_01AF -
                       (uint)(ushort)this_00->field_01B1 * this_00->field_01C3;
            while( true ) {
              if (local_1c < local_14) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                piVar9 = (int *)(*(int *)(this_00->field_01D7 + 8) * (int)local_1c +
                                *(int *)(this_00->field_01D7 + 0x1c));
              }
              else {
                piVar9 = nullptr;
              }
              local_24 = piVar9[3];
              local_30 = this_00->field_003C + 0x21 + *piVar9;
              local_2c = piVar9[1] + local_18 + 0x16 + this_00->field_0044;
              local_28 = piVar9[2];
              if (((((int)local_c < local_30) || (local_28 + local_30 <= (int)local_c)) ||
                  ((int)local_8 < local_2c)) || (local_24 + local_2c <= (int)local_8)) {
                bVar22 = false;
              }
              else {
                bVar22 = true;
              }
              if ((bVar22) && ((int)local_8 < this_00->field_0044 + 300)) break;
              local_1c = (uint *)((int)local_1c + 1);
              if (local_14 <= local_1c) {
                g_currentExceptionFrame = local_84.previous;
                return 0;
              }
            }
            st::fn_004054C5(this_00,STField<int>(piVar9,0x11),STField<int>(piVar9,0x15));
            uVar16 = STField<uint>(piVar9,0x15);
            pvVar6 = STField<void *>(piVar9,0x11);
            switch((char)piVar9[4]) {
            case '\x01':
              st::fn_00404E85(this_00,(int)pvVar6,uVar16,'\0');
              st::fn_00405100(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x02':
              st::fn_00403747(this_00,(int)pvVar6,uVar16,'\0');
              st::fn_00405100(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x03':
              st::fn_00403878(this_00,(int)pvVar6,'\0');
              st::fn_00405100(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x04':
              st::fn_004057E0(this_00,(int)pvVar6,uVar16,'\0');
              st::fn_00405100(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x05':
              st::fn_00402833(this_00,(uint)pvVar6,(byte)uVar16,'\0');
              st::fn_00405100(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\x06':
              st::fn_00405E61(this_00,(uint)pvVar6,'\0');
              st::fn_00405100(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\a':
              st::fn_004011FE(this_00);
              st::fn_00405100(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\b':
              st::fn_004020B8(this_00,pvVar6,uVar16,'\0');
              break;
            case '\n':
              st::fn_00405803(this_00);
              st::fn_00405100(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\v':
              st::fn_00402CAC(this_00,(int)pvVar6,uVar16,'\0');
              st::fn_00405100(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            case '\f':
              st::fn_00403BC0(this_00,(int)pvVar6,'\0');
              st::fn_00405100(this_00);
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            st::fn_00405100(this_00);
            g_currentExceptionFrame = local_84.previous;
            return 0;
          case CASE_6:
            goto switchD_0051e4d9_caseD_6;
          default:
            g_currentExceptionFrame = local_84.previous;
            return 0;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          case CASE_8:
            if (*(int *)(this_00->field_01D7 + 0xc) == 0) {
              piVar9 = nullptr;
            }
            else {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              piVar9 = *(int **)(this_00->field_01D7 + 0x1c);
            }
            local_30 = this_00->field_003C + 0x21 + *piVar9;
            local_2c = ((uint)(ushort)this_00->field_01AF -
                       (uint)(ushort)this_00->field_01B1 * this_00->field_01C3) + piVar9[1] + 0x16 +
                       this_00->field_0044;
            local_28 = piVar9[2];
            local_24 = piVar9[3];
            if (((((int)local_c < local_30) || (local_28 + local_30 <= (int)local_c)) ||
                ((int)local_8 < local_2c)) || (local_24 + local_2c <= (int)local_8)) {
              bVar22 = false;
            }
            else {
              bVar22 = true;
            }
            if (!bVar22) {
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            if (this_00->field_0044 + 300 <= (int)local_8) {
              g_currentExceptionFrame = local_84.previous;
              return 0;
            }
            DAT_0080734d = DAT_0080734d == '\0';
            st::fn_00402D38(this_00,'\b');
            g_currentExceptionFrame = local_84.previous;
            return 0;
          }
        }
        if (SVar3 == MESS_SHARED_6200) {
          this_00->field_01C3 = message->arg0;
          iVar8 = (ushort)this_00->field_01AF + 0x16;
          st::fn_006B55F0
                    ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x21,iVar8,
                     (byte *)this_00->field_01DC,0,0x21,iVar8,0x19c,
                     0x117 - (uint)(ushort)this_00->field_01AF);
          st::fn_006B5110
                    ((int)this_00->field_0068,0,0x21,(ushort)this_00->field_01AF + 0x16,
                     (int)this_00->field_0218,0,0,
                     (uint)(ushort)this_00->field_01B1 * this_00->field_01C3,0x19c,
                     0x117 - (uint)(ushort)this_00->field_01AF,0xff);
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C
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
          st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar4);
        }
        local_18 = *(uint *)&pcVar4->field_0x8a;
        if (DAT_0080874e == '\x03') {
          local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)(5));
        }
        else {
          local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)((-(DAT_0080874e != '\x01') & 6U) + 1));
        }
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x21,0x16,
                   (byte *)this_00->field_01DC,0,0x21,0x16,0x19c,0x118);
        pAVar5 = this_00->field_0218;
        local_1c = (uint *)pAVar5->field_0014;
        if (local_1c == nullptr) {
          local_1c = (uint *)(((uint)(ushort)pAVar5->field_000E * pAVar5->field_0004 + 0x1f >> 3 &
                              0x1ffffffc) * pAVar5->field_0008);
        }
        puVar10 = (undefined4 *)st::fn_006B4FA0((int *)pAVar5);
        for (uVar16 = (uint)local_1c >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *puVar10 = 0xffffffff;
          puVar10 = puVar10 + 1;
        }
        for (uVar16 = (uint)local_1c & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined1 *)puVar10 = 0xff;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        uVar18 = (uint)(message->arg0).words.high;
        uVar16 = uVar18;
        if ((int)uVar18 < (int)(uVar18 + STField<int>(local_10,0x1e0))) {
          do {
            if ((int)uVar16 < (int)this_00->field_01D3[2]) {
              local_1c = *(uint **)(this_00->field_01D3[5] + uVar16 * 4);
            }
            else {
              local_1c = nullptr;
            }
            if (local_1c != nullptr) {
              st::fn_00710A90(this_00->field_01E4,(int)this_00->field_0218,0,0,
                               (uVar16 - uVar18) * local_18,this_00->field_0218->field_0004,local_18
                              );
              st::fn_007119C0(this_00->field_01E4,local_1c,0,-1,local_14 & 0xff);
            }
            uVar18 = (uint)(message->arg0).words.high;
            uVar16 = uVar16 + 1;
          } while ((int)uVar16 < (int)(uVar18 + STField<int>(local_10,0x1e0)));
        }
        st::fn_006B5110
                  ((int)this_00->field_0068,0,0x21,0x16,(int)this_00->field_0218,0,0,0,0x19c,0x118,
                   0xff);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      if (SVar3 != MESS_SHARED_0060) {
        if (SVar3 == MESS_ID_NONE) {
          if (this_00->field_0172 == 3) {
            iVar8 = this_00->field_0050;
            if ((int)this_00->field_0044 < iVar8) {
              this_00->field_0044 = this_00->field_0044 + 0x28;
            }
            if (iVar8 <= (int)this_00->field_0044) {
              this_00->field_0044 = iVar8;
              this_00->field_0172 = 1;
              st::fn_00404FD9(this_00,1);
            }
            st::fn_006B3640
                      ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,
                       this_00->field_003C,this_00->field_0044);
            g_currentExceptionFrame = local_84.previous;
            return 0;
          }
          if (this_00->field_0172 != 4) {
            g_currentExceptionFrame = local_84.previous;
            return 0;
          }
          iVar8 = this_00->field_0050 - this_00->field_0048;
          if (iVar8 < (int)this_00->field_0044) {
            this_00->field_0044 = this_00->field_0044 + -0x28;
          }
          if ((int)this_00->field_0044 <= iVar8) {
            this_00->field_0044 = iVar8;
            this_00->field_0172 = 2;
          }
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C
                     ,this_00->field_0044);
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        if (SVar3 == MESS_ID_CREATE) {
          st::fn_00403111(this_00);
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        if (SVar3 != MESS_SHARED_0003) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        st::fn_00401398(this_00);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      local_18 = (uint)(message->arg1).words.low;
      local_10 = nullptr;
      local_c = (uint)(message->arg1).words.high;
      this_00->field_01DB = 0;
      if (this_00->field_0172 == 1) {
        switch(this_00->field_01A1) {
        case CASE_1:
        case CASE_2:
        case CASE_3:
        case CASE_4:
        case CASE_5:
        case CASE_B:
        case CASE_C:
          local_8 = nullptr;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          local_14 = *(undefined4 *)(this_00->field_01D7 + 0xc);
          if ((undefined4 *)local_14 != nullptr) {
            do {
              if (local_8 < local_14) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                piVar9 = (int *)(*(int *)(this_00->field_01D7 + 8) * (int)local_8 +
                                *(int *)(this_00->field_01D7 + 0x1c));
              }
              else {
                piVar9 = nullptr;
              }
              local_40 = this_00->field_003C + 0x21 + *piVar9;
              local_3c = piVar9[1] +
                         ((uint)(ushort)this_00->field_01AF -
                         (uint)(ushort)this_00->field_01B1 * this_00->field_01C3) + 0x16 +
                         this_00->field_0044;
              local_38 = piVar9[2];
              local_34 = piVar9[3];
              if (((((int)local_18 < local_40) || (local_38 + local_40 <= (int)local_18)) ||
                  ((int)local_c < local_3c)) || (local_34 + local_3c <= (int)local_c)) {
                bVar22 = false;
              }
              else {
                bVar22 = true;
              }
              if ((bVar22) && ((int)local_c < this_00->field_0044 + 300)) goto LAB_0051e1b2;
              local_8 = (UINT *)((int)local_8 + 1);
            } while (local_8 < local_14);
          }
          break;
        case CASE_6:
          if (this_00->field_01A3 == 1) {
            local_8 = (UINT *)&DAT_007c2b58;
            local_14 = 0x33;
          }
          else if (this_00->field_01A3 == 2) {
            local_8 = (UINT *)&DAT_007c2df0;
            local_14 = 0x39;
          }
          else {
            local_8 = &DAT_007c30d8;
            local_14 = 0x46;
          }
          uVar19 = 0;
          if ((ushort)local_14 != 0) {
            local_38 = 0x1a;
            local_34 = 0xe;
            local_1c = (uint *)(uint)(ushort)this_00->field_01AF;
            do {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_40 = *(int *)((int)local_8 + (uint)uVar19 * 0xd + 5) + 0x21 +
                         this_00->field_003C;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_3c = (*(int *)((int)local_8 + (uint)uVar19 * 0xd + 9) -
                         (uint)(ushort)this_00->field_01B1 * this_00->field_01C3) + (int)local_1c +
                         0x16 + this_00->field_0044;
              if ((((int)local_18 < local_40) || (local_40 + 0x1a <= (int)local_18)) ||
                 (((int)local_c < local_3c || (local_3c + 0xe <= (int)local_c)))) {
                bVar22 = false;
              }
              else {
                bVar22 = true;
              }
              if ((bVar22) && ((int)local_c < this_00->field_0044 + 300)) {
                local_10 = (undefined4 *)
                           st::fn_00404B29(*(Global_sub_00528060_param_1Enum *)
                                               ((int)local_8 + (uint)uVar19 * 0xd),
                                              *(char *)((int)local_8 + (uint)uVar19 * 0xd + 4));
                if (local_10 != (undefined4 *)0x2711) goto LAB_0051e1b2;
                local_10 = nullptr;
                break;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < (ushort)local_14);
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
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(this_00->vtable + 0x18))(0);
      st::fn_00405E2F(0xae);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
    switch(SVar3) {
    case MESS_SIDTY_8161:
      HVar2 = this_00->field_01A1;
      if (HVar2 == 0) {
        pDVar17 = (DArrayTy *)this_00->field_01B3;
      }
      else {
        if (HVar2 != CASE_A) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        pDVar17 = this_00->field_01BB;
      }
      uVar16 = (uint)(message->arg0).words.low;
      if (uVar16 < pDVar17->count) {
        if (HVar2 == 0) {
          local_8 = (UINT *)(this_00->field_01B3->field_0008 * uVar16 +
                            this_00->field_01B3->field_001C);
        }
        else {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          local_8 = (UINT *)(this_00->field_01BB->elementSize * uVar16 +
                            (int)this_00->field_01BB->data);
        }
      }
      else {
        local_8 = nullptr;
      }
      if (local_8 != nullptr) {
        bVar22 = (message->arg0).words.high == 1;
        local_18 = *local_8;
        if (DAT_0080874e == '\x03') {
          local_1c = (uint *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(!bVar22));
        }
        else if (DAT_0080874e == '\x01') {
          local_1c = (uint *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(1));
        }
        else {
          local_1c = (uint *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar22 + '\a'));
        }
        iVar8 = (message->arg1).words.high + 0x16;
        st::fn_006B55F0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x21,iVar8,
                   (byte *)this_00->field_01DC,0,0x21,iVar8,0x19c,*(int *)(this_00->field_01EC + 8));
        piVar9 = (int *)this_00->field_01EC;
        uVar16 = piVar9[5];
        if (uVar16 == 0) {
          uVar16 = ((uint)STField<ushort>(piVar9,0xe) * piVar9[1] + 0x1f >> 3 & 0x1ffffffc) *
                   piVar9[2];
        }
        puVar10 = (undefined4 *)st::fn_006B4FA0(piVar9);
        for (uVar18 = uVar16 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *puVar10 = 0xffffffff;
          puVar10 = puVar10 + 1;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined1 *)puVar10 = 0xff;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        st::fn_00710A90(this_00->field_01E4,this_00->field_01EC,0,0,0,0,0);
        pcVar12 = st::fn_006B0140(local_18,g_hINSTANCE_00807618);
        uVar16 = 0xffffffff;
        do {
          pcVar21 = pcVar12;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar21 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar21;
        } while (cVar1 != '\0');
        uVar16 = ~uVar16;
        pcVar12 = pcVar21 + -uVar16;
        pcVar21 = (char *)&DAT_0080f33a;
        memmove(pcVar21, pcVar12, uVar16); /* compiler REP MOVS byte copy */
        puVar13 = st::fn_0072E560(&DAT_0080f33a,'\n');
        pUVar7 = local_8;
        while (local_8 = pUVar7, puVar13 != nullptr) {
          *(undefined1 *)puVar13 = 0x20;
          puVar13 = st::fn_0072E560(puVar13,'\n');
          pUVar7 = local_8;
        }
        st::fn_007119C0(this_00->field_01E4,&DAT_0080f33a,
                       (uint)STField<byte>(pUVar7,0x11) * 0x14 + 10,-1,(uint)local_1c & 0xff);
        if ((this_00->field_01A1 == 0) && (STField<byte>(pUVar7,0x11) != 0)) {
          if (DAT_0080874e == '\x03') {
            local_1c = (uint *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(0x29));
          }
          else {
            local_1c = (uint *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)((-(DAT_0080874e != '\x01') & 0x43U) + 0x10));
          }
          iVar15 = (uint)STField<byte>(pUVar7,0x11) * 0x14;
          local_10 = (undefined4 *)((uint)local_1c & 0xff);
          iVar8 = (int)((AnonShape_006E6FB0_BC494FEA *)this_00->field_01EC)->field_0008 / 2;
          st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)this_00->field_01EC,0,iVar15,iVar8,iVar15 + 8,
                       iVar8,(byte)local_1c,0xd);
          if (STField<char>(local_8,0x13) == '\0') {
            iVar8 = *(int *)(this_00->field_01EC + 8);
          }
          iVar15 = (uint)STField<byte>(local_8,0x11) * 0x14;
          st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)this_00->field_01EC,0,iVar15,0,iVar15,iVar8,
                       (byte)local_10,0xd);
          local_14 = 0;
          local_c = (uint)(message->arg0).words.low;
          local_18 = *(uint *)&this_00->field_01B3->field_0xc;
          local_1c = (uint *)local_c;
joined_r0x0051eec7:
          local_1c = (uint *)((int)local_1c + 1);
          if (local_1c < local_18) {
            if (local_1c < local_18) {
              iVar8 = this_00->field_01B3->field_0008 * (int)local_1c +
                      this_00->field_01B3->field_001C;
            }
            else {
              iVar8 = 0;
            }
            if ((iVar8 == 0) || (bVar20 = *(byte *)(iVar8 + 0x11), bVar20 == 0)) goto LAB_0051ef61;
            uVar16 = local_c;
            if (bVar20 < STField<byte>(local_8,0x11)) {
              do {
                uVar16 = uVar16 - 1;
                if ((int)uVar16 < 1) goto joined_r0x0051eec7;
                if (uVar16 < local_18) {
                  iVar8 = this_00->field_01B3->field_0008 * uVar16 + this_00->field_01B3->field_001C
                  ;
                }
                else {
                  iVar8 = 0;
                }
                if ((iVar8 == 0) || (*(byte *)(iVar8 + 0x11) == 0)) goto joined_r0x0051eec7;
              } while (*(byte *)(iVar8 + 0x11) != bVar20);
              if (*(char *)(iVar8 + 0x13) == '\0') {
                local_14 = local_14 | 1 << (bVar20 & 0x1f);
              }
            }
            goto joined_r0x0051eec7;
          }
LAB_0051ef61:
          bVar20 = 0;
          iVar8 = 0;
          do {
            if ((local_14 & 1 << (bVar20 & 0x1f)) != 0) {
              st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)this_00->field_01EC,0,iVar8,0,iVar8,
                           (int)((AnonShape_006E6FB0_BC494FEA *)this_00->field_01EC)->field_0008,
                           (byte)local_10,0xd);
            }
            iVar8 = iVar8 + 0x14;
            bVar20 = bVar20 + 1;
          } while (iVar8 < 0x280);
        }
        st::fn_006B5440((ushort *)this_00->field_0068,0,0x21,(message->arg1).words.high + 0x16,
                     this_00->field_01EC,0,0xff);
      }
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                 this_00->field_0044);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_OPTPANELTY_8162:
      HVar2 = this_00->field_01A1;
      if (HVar2 == 0) {
        pDVar17 = (DArrayTy *)this_00->field_01B3;
      }
      else {
        if (HVar2 != CASE_A) {
          g_currentExceptionFrame = local_84.previous;
          return 0;
        }
        pDVar17 = this_00->field_01BB;
      }
      uVar16 = (message->arg0).u32;
      if (uVar16 < pDVar17->count) {
        if (HVar2 == 0) {
          local_1c = (uint *)(this_00->field_01B3->field_0008 * uVar16 +
                             this_00->field_01B3->field_001C);
        }
        else {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          local_1c = (uint *)(this_00->field_01BB->elementSize * uVar16 +
                             (int)this_00->field_01BB->data);
        }
      }
      else {
        local_1c = nullptr;
      }
      if (local_1c == nullptr) {
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      bVar22 = false;
      uVar16 = STField<uint>(local_1c,0xd);
      pvVar6 = STField<void *>(local_1c,9);
      switch((char)local_1c[2]) {
      default:
        goto switchD_0051ea9b_caseD_0;
      case '\x01':
        st::fn_00404E85(this_00,(int)pvVar6,uVar16,'\0');
        break;
      case '\x02':
        st::fn_00403747(this_00,(int)pvVar6,uVar16,'\0');
        break;
      case '\x03':
        st::fn_00403878(this_00,(int)pvVar6,'\0');
        break;
      case '\x04':
        st::fn_004057E0(this_00,(int)pvVar6,uVar16,'\0');
        break;
      case '\x05':
        st::fn_00402833(this_00,(uint)pvVar6,(byte)uVar16,'\0');
        break;
      case '\x06':
        st::fn_00405E61(this_00,(uint)pvVar6,'\0');
        break;
      case '\a':
        st::fn_004011FE(this_00);
        break;
      case '\b':
        st::fn_004020B8(this_00,pvVar6,uVar16,'\0');
        break;
      case '\n':
        st::fn_00405803(this_00);
        break;
      case '\v':
        st::fn_00402CAC(this_00,(int)pvVar6,uVar16,'\0');
        break;
      case '\f':
        st::fn_00403BC0(this_00,(int)pvVar6,'\0');
      }
      bVar22 = true;
switchD_0051ea9b_caseD_0:
      if (bVar22) {
        st::fn_00405100(this_00);
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      st::fn_00405362(this_00,(int *)local_1c,(message->arg0).i32);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_SIDTY_8163:
      if (this_00->field_01A1 != CASE_A) {
        this_00->field_01B7 = message->arg0;
        g_currentExceptionFrame = local_84.previous;
        return 0;
      }
      *(STMessageArg *)&this_00->field_0x1bf = message->arg0;
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_OPTPANELTY_8164:
      pcVar23 = thunk_FUN_00529fe0;
      pCVar14 = st::fn_0040577C("BUT_SLUP",0);
      bVar20 = 6;
      break;
    case MESS_OPTPANELTY_8165:
      pcVar23 = thunk_FUN_00529fe0;
      pCVar14 = st::fn_0040577C("BUT_SLDN",0);
      bVar20 = 6;
      break;
    case MESS_SHARED_8166:
      pbVar11 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0220,0);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0x1c3,0x2d,'\x06',pbVar11);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pbVar11 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0220,
                                     (*(int *)((message->arg2).u32 + 0x1c) != 1) + 1);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0x1c3,
             (message->arg0).words.high + 0x2d,'\x06',pbVar11);
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
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
      st::fn_004029C8(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_BEHPANELTY_C0A0:
      st::fn_00402E2D(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_FSGSTY_C0A1:
      st::fn_00405803(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_SHARED_C0A2:
      st::fn_00403B43(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_SHARED_C0A3:
      st::fn_00401A1E(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_BLDLABPANELTY_C0A4:
      st::fn_00405C31(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    case MESS_FRMPANELTY_C0A5:
      st::fn_004039CC(this_00);
      g_currentExceptionFrame = local_84.previous;
      return 0;
    default:
      goto cf_common_exit_0051F19A;
    case MESS_INTERCOMPANELTY_C0AF:
      pcVar12 = "BUT_HLPHOME";
      break;
    case 0xc0b0:
      pcVar12 = "BUT_HLPBACK";
      break;
    case MESS_BEHPANELTY_C0B1:
      pcVar12 = "BUT_HLPINDEX";
      break;
    case 0xc0b2:
      pcVar12 = "BUT_HLPPREV";
      break;
    case MESS_BLDLABPANELTY_C0B3:
      pcVar12 = "BUT_HLPNEXT";
      break;
    case MESS_RESEARCHPANELTY_C0B4:
      pcVar12 = "BUT_HLPBWD";
      break;
    case MESS_SHARED_C0B5:
      pcVar12 = "BUT_HLPFWD";
    }
    pcVar23 = thunk_FUN_00529f90;
    pCVar14 = st::fn_0040577C(pcVar12,0);
    bVar20 = 1;
  }
  st::fn_00403495((UPanelTy *)this_00,(AnonShape_0053D7A0_044B6141 *)message,bVar20,pCVar14,
                     pcVar23);
cf_common_exit_0051F19A:
  g_currentExceptionFrame = local_84.previous;
  return 0;
switchD_0051e4d9_caseD_6:
  if (this_00->field_01A3 == 1) {
    local_10 = (undefined4 *)&DAT_007c2b58;
    local_18 = 0x33;
  }
  else if (this_00->field_01A3 == 2) {
    local_10 = (undefined4 *)&DAT_007c2df0;
    local_18 = 0x39;
  }
  else {
    local_10 = &DAT_007c30d8;
    local_18 = 0x46;
  }
  uVar19 = 0;
  if ((ushort)local_18 == 0) {
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  local_28 = 0x1a;
  local_24 = 0xe;
  local_1c = (uint *)(uint)(ushort)this_00->field_01AF;
  while( true ) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_30 = *(int *)((int)local_10 + (uint)uVar19 * 0xd + 5) + 0x21 + this_00->field_003C;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_2c = (*(int *)((int)local_10 + (uint)uVar19 * 0xd + 9) -
               (uint)(ushort)this_00->field_01B1 * this_00->field_01C3) + (int)local_1c + 0x16 +
               this_00->field_0044;
    if ((((int)local_c < local_30) || (local_30 + 0x1a <= (int)local_c)) ||
       (((int)local_8 < local_2c || (local_2c + 0xe <= (int)local_8)))) {
      bVar22 = false;
    }
    else {
      bVar22 = true;
    }
    if ((bVar22) && ((int)local_8 < this_00->field_0044 + 300)) break;
    uVar19 = uVar19 + 1;
    if ((ushort)local_18 <= uVar19) {
      g_currentExceptionFrame = local_84.previous;
      return 0;
    }
  }
  st::fn_00402833(this_00,*(uint *)((int)local_10 + (uint)uVar19 * 0xd),
           *(byte *)((int)local_10 + (uint)uVar19 * 0xd + 4),'\0');
  st::fn_00405100(this_00);
  g_currentExceptionFrame = local_84.previous;
  return 0;
LAB_0051e1b2:
  this_00->field_01DB = 0x46;
switchD_0051dfcc_caseD_7:
  UVar24 = this_00->field_0178;
  if ((undefined4 *)UVar24 == local_10) {
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  if (UVar24 != 0) {
    this_00->field_0028 = 0x4202;
    *(undefined2 *)&this_00->field_0x2c = 0;
    this_00->field_002E = 2;
    *(UINT *)&this_00->field_0x30 = UVar24;
    if (g_cursorClass_00802A30 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)g_cursorClass_00802A30->field_0000)(&this_00->field_0x18);
    }
  }
  this_00->field_0178 = local_10;
  if (local_10 == nullptr) {
    g_currentExceptionFrame = local_84.previous;
    return 0;
  }
  this_00->field_0028 = 0x4201;
  *(undefined2 *)&this_00->field_0x2c = 0;
  this_00->field_002E = 2;
  *(undefined4 **)&this_00->field_0x30 = local_10;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)g_cursorClass_00802A30->field_0000)(&this_00->field_0x18);
  g_currentExceptionFrame = local_84.previous;
  return 0;
}

