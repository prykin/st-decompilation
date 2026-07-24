#include "../../pseudocode_runtime.h"


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
  DArrayTy *pDVar5;
  void *pvVar6;
  char *pcVar7;
  LPSTR pCVar8;
  ushort *puVar9;
  ccFntTy *pcVar10;
  undefined4 uVar11;
  AnonPointee_HelpPanelTy_0218 *pAVar12;
  uint *resourceString;
  int *piVar13;
  undefined4 *puVar14;
  UINT *pUVar15;
  ccFntTy *this_01;
  uint uVar16;
  uint uVar17;
  UINT *pUVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  short sVar22;
  undefined2 uVar23;
  byte bVar24;
  undefined4 uVar25;
  int iVar26;
  undefined4 uVar27;
  undefined4 uVar28;
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
  iVar4 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar26 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0xac,0,iVar4,"%s"
                                ,"HelpPanelTy::InitHelpPanel");
    if (iVar26 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\helppan.cpp",0xac);
    return;
  }
  g_helpPanel_00801690 = local_10;
  pDVar5 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,300,0x14,0x32);
  this_00->field_01B3 = (AnonPointee_HelpPanelTy_01B3 *)pDVar5;
  pDVar5 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,200,0x14,0x32);
  this_00->field_01BB = pDVar5;
  pDVar5 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,100,9,0x32);
  this_00->field_01CB = pDVar5;
  pDVar5 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0x14,0x19,0x14);
  this_00->field_01D7 = pDVar5;
  this_00->field_0253 = 0;
  this_00->field_0252 = 0;
  this_00->field_0251 = 0;
  this_00->field_0250 = 0;
  uVar17 = 0;
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
      uVar17 = uVar17 + 1;
      piVar13 = (int *)((int)piVar13 + 0x11);
    } while (uVar17 < *(uint *)sizeHelp_exref);
  }
  local_8 = 0;
  if (*(int *)sizeHelp_exref != 0) {
    local_c = (undefined4 *)0x0;
    do {
      puVar14 = (undefined4 *)((int)local_c + this_00->field_01C7);
      if (*(char *)(puVar14 + 2) != '\0') {
        pDVar5 = this_00->field_01BB;
        bVar3 = true;
        uVar17 = 0;
        local_14 = (char *)0x1;
        if (pDVar5->count != 0) {
          if (pDVar5->count == 0) {
            pvVar6 = (void *)0x0;
            goto LAB_00510f80;
          }
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar5, uVar17) (runtime stride) */
            pvVar6 = (void *)(pDVar5->elementSize * uVar17 + (int)pDVar5->data);
LAB_00510f80:
            if (((*(char *)((int)pvVar6 + 8) == *(char *)(puVar14 + 2)) &&
                (*(int *)((int)pvVar6 + 9) == *(int *)((int)puVar14 + 9))) &&
               (*(int *)((int)pvVar6 + 0xd) == *(int *)((int)puVar14 + 0xd))) {
              bVar3 = false;
              goto LAB_00510fa9;
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < pDVar5->count);
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
          Library::DKW::TBL::FUN_006ae1c0(&pDVar5->flags,&local_28);
        }
      }
      local_8 = local_8 + 1;
      local_c = (undefined4 *)((int)local_c + 0x11);
    } while (local_8 < *(uint *)sizeHelp_exref);
  }
  do {
    pDVar5 = this_00->field_01BB;
    local_c = (undefined4 *)0x0;
    uVar17 = pDVar5->count;
    uVar16 = 0;
    if (uVar17 != 1) {
      do {
        if (uVar16 < uVar17) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar5, uVar16) (runtime stride) */
          pUVar18 = (UINT *)(pDVar5->elementSize * uVar16 + (int)pDVar5->data);
        }
        else {
          pUVar18 = (UINT *)0x0;
        }
        local_8 = uVar16 + 1;
        if (local_8 < uVar17) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar5, local_8) (runtime stride) */
          pUVar15 = (UINT *)(pDVar5->elementSize * local_8 + (int)pDVar5->data);
        }
        else {
          pUVar15 = (UINT *)0x0;
        }
        if ((pUVar18 != (UINT *)0x0) && (pUVar15 != (UINT *)0x0)) {
          local_14 = LoadResourceString(*pUVar15,g_module_00807618);
          pcVar7 = LoadResourceString(*pUVar18,g_module_00807618);
          iVar4 = Library::MSVCRT::__strcmpi(pcVar7,local_14);
          if (0 < iVar4) {
            FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)this_00->field_01BB,uVar16,local_8);
            local_c = (undefined4 *)0x1;
          }
        }
        pDVar5 = this_00->field_01BB;
        uVar17 = pDVar5->count;
        uVar16 = local_8;
      } while (local_8 < uVar17 - 1);
    }
  } while (local_c != (undefined4 *)0x0);
  iVar4 = 1;
  piVar13 = (int *)0x0;
  pCVar8 = thunk_FUN_00571240("BKG_HELPW",0);
  puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar8,piVar13,iVar4);
  this_00->field_01DC = puVar9;
  puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,"HLP_OBJ_BKG",(int *)0x0,1);
  iVar4 = 1;
  piVar13 = (int *)0x0;
  this_00->field_021C = puVar9;
  pCVar8 = thunk_FUN_00571240("BUT_HLPLINK",0);
  puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar8,piVar13,iVar4);
  this_00->field_024C = puVar9;
  pcVar10 = (ccFntTy *)
            ccFntTy::operator(*(ccFntTy **)&PTR_00802a28->field_0x28,0x19d,
                              (int)*(ccFntTy **)&PTR_00802a28->field_0x28);
  this_00->field_01E0 = pcVar10;
  pcVar10->field_0058 = 0;
  pcVar10->field_005C = 0;
  pcVar10 = (ccFntTy *)ccFntTy::operator(this_01,0x19d,*(int *)&PTR_00802a28->field_0x2c);
  this_00->field_01E4 = pcVar10;
  pcVar10->field_0058 = 1;
  pcVar10->field_005C = 0;
  pcVar10 = (ccFntTy *)
            ccFntTy::operator(DAT_00806790,0x19d,(cMf32 *)DAT_00806790,"MONEY_FONT",0);
  this_00->field_01E8 = pcVar10;
  pcVar10->field_0058 = 1;
  pcVar10->field_005C = 0;
  puVar14 = (undefined4 *)0x0;
  iVar26 = 0;
  iVar4 = 1;
  bVar24 = 0;
  uVar17 = 0xffffffff;
  pCVar8 = thunk_FUN_00571240("HLPTRACK",0);
  puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806794,CASE_B,pCVar8,uVar17,bVar24,iVar4,iVar26,puVar14);
  this_00->field_0220 = puVar9;
  puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806794,CASE_B,"BKG_HLPTTREE",0xffffffff,0,1,0,(undefined4 *)0x0
                     );
  this_00->field_0224 = puVar9;
  puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806794,CASE_B,&DAT_007c20a0,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_0230 = puVar9;
  puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806794,CASE_B,&DAT_007c38c8,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_0234 = puVar9;
  puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806794,CASE_B,"HLP_UPG",0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_0228 = puVar9;
  puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806794,CASE_B,"HLP_UPGD",0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_022C = puVar9;
  puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806794,CASE_B,&DAT_007c2048,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_0238 = puVar9;
  puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806794,CASE_B,"HLP_FRAME",0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_0248 = puVar9;
  puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806794,CASE_B,"BOATS_R",0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_023C = puVar9;
  puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806794,CASE_B,&DAT_007c1910,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_00->field_0240 = puVar9;
  puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806794,CASE_B,"INF_WEAP",0xffffffff,0,1,0,(undefined4 *)0x0);
  pcVar10 = this_00->field_01E4;
  this_00->field_0244 = puVar9;
  if (pcVar10->field_00A0 != 0) {
    FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar10);
  }
  iVar4 = *(int *)&pcVar10->field_0x8a;
  iVar26 = 1;
  puVar9 = this_00->field_01DC + 0x14;
  uVar17 = FUN_006b4fe0((int)this_00->field_01DC);
  uVar11 = FUN_006b50c0(0x19c,iVar4 + 1,(uint)this_00->field_01DC[7],uVar17,(undefined4 *)puVar9,
                        iVar26);
  this_00->field_01EC = uVar11;
  iVar4 = 1;
  puVar9 = this_00->field_01DC + 0x14;
  uVar17 = FUN_006b4fe0((int)this_00->field_01DC);
  pAVar12 = (AnonPointee_HelpPanelTy_0218 *)
            FUN_006b50c0(0x19c,600,(uint)this_00->field_01DC[7],uVar17,(undefined4 *)puVar9,iVar4);
  this_00->field_0218 = pAVar12;
  pAVar1 = this_00->field_0068;
  uVar17 = pAVar1->field_0014;
  if (uVar17 == 0) {
    uVar17 = ((uint)(ushort)pAVar1->field_000E * pAVar1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
             pAVar1->field_0008;
  }
  puVar14 = (undefined4 *)FUN_006b4fa0((int)pAVar1);
  for (uVar16 = uVar17 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *puVar14 = 0xffffffff;
    puVar14 = puVar14 + 1;
  }
  for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
    *(undefined1 *)puVar14 = 0xff;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
  }
  DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0,0,'\x01',(byte *)this_00->field_01DC);
  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0068,0,0x6c,2,0x117,0xc);
  uVar11 = 0;
  iVar26 = -1;
  iVar4 = -2;
  resourceString = (uint *)LoadResourceString(0x2734,g_module_00807618);
  ccFntTy::WrStr(this_00->field_01E0,resourceString,iVar4,iVar26,uVar11);
  uVar28 = 0;
  uVar27 = 0;
  pcVar7 = (char *)0x0;
  uVar25 = 0;
  uVar23 = 0;
  sVar22 = 0;
  uVar20 = 0xc000;
  uVar11 = 0xbfff;
  pCVar8 = thunk_FUN_00571240("BUT_MEDIUM",0);
  uVar11 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x195,0x17b,1,pCVar8,uVar11,uVar20,sVar22,
                               uVar23,uVar25,pcVar7,uVar27,uVar28);
  local_c = &this_00->field_0180;
  this_00->field_017C = uVar11;
  iVar4 = 0;
  iVar26 = 0x1e;
  local_8 = 7;
  do {
    if (iVar26 < 0x127) {
                    /* WARNING: Could not recover jumptable at 0x0051146f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)(&PTR_LAB_00511560)[iVar4])();
      return;
    }
    uVar25 = 0;
    iVar19 = iVar4 + 0xc09f;
    uVar20 = 0;
    pcVar7 = (char *)0x0;
    uVar11 = 10000;
    uVar23 = 0;
    iVar21 = iVar4 + 0xc0af;
    sVar22 = 2;
    pCVar8 = thunk_FUN_00571240("BUT_HLPHOME",0);
    uVar11 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,iVar26,0x151,1,pCVar8,iVar19,iVar21,sVar22,
                                 uVar23,uVar11,pcVar7,uVar20,uVar25);
    iVar4 = iVar4 + 1;
    iVar26 = iVar26 + 0x2c;
    *local_c = uVar11;
    local_c = local_c + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  PrepMissObj(this_00);
  HomeBut(this_00);
  g_currentExceptionFrame = local_6c.previous;
  return;
}

