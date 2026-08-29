#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::SpecProc */

void __thiscall HelpPanelTy::SpecProc(HelpPanelTy *this,int param_1,int param_2,char param_3)

{
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
  local_10 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this->field_0248,4);
  if (g_allPlayers_007FA174 != nullptr) {
    pIVar18 = g_currentExceptionFrame;
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffff8c;

    iVar6_mg0 = Library::MSVCRT::__setjmp3(local_70,0);
    this_00 = local_14;
    if (iVar6_mg0 == 0) {
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

      UVar6 = thunk_FUN_00523410(param_1,bVar12,0);
      /* ST_CALLSITE[0051CA96]: CALL 0x00403ef9; direct=00403EF9 HelpPanelTy::DrawTitle */
      DrawTitle(this_00,0x55ff,param_2,UVar6);
      /* ST_CALLSITE[0051CAAA]: CALL 0x00403d78; direct=00403D78 HelpPanelTy::DrawObj */
      DrawObj(this_00,(int *)&local_8,(STAllPlayersC_GetTOBJImage_param_2Enum *)param_1,bVar12,
              this_00->field_023C);

      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x19c,0xf);
      uVar16 = 3;
      iVar13 = -1;
      iVar11 = -1;
      /* ST_CALLSITE[0051CAE2]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7_mg0 = LoadResourceString(0x564a,g_hINSTANCE_00807618);

      ccFntTy::WrStr(this_00->field_01E0,pcVar7_mg0,iVar11,iVar13,uVar16);
      local_8 = local_8 + 0xf;
      if (param_1 == 0xfe) {

        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar16 = 3;
        iVar13 = -1;
        iVar11 = -3;
        /* ST_CALLSITE[0051CB38]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar7_mg2 = LoadResourceString(0x5661,g_hINSTANCE_00807618);

        ccFntTy::WrStr(this_00->field_01E0,pcVar7_mg2,iVar11,iVar13,uVar16);

        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        local_c = (-(uint)(param_2 != 3) & 0xfffffff3) + CASE_5F;
        pHVar17 = g_hINSTANCE_00807618;

        UVar6 = thunk_FUN_00523410(local_c,bVar12,0);
        pcVar7_mg1 = LoadResourceString(UVar6,pHVar17);
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
        pcVar10 = (char *)&DAT_0080f33a;
        memmove(pcVar10, pcVar9, uVar16); /* compiler REP MOVS byte copy */
        uVar8 = 0;
        for (puVar7 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar7 != nullptr;
            puVar7 = Library::MSVCRT::FUN_0072e560(puVar7,'\n')) {
          *(undefined1 *)puVar7 = 0x20;
        }

        ccFntTy::WrStr(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,
                       (DAT_0080874e != '\x03') - 1 & 5);
        GVar5 = local_c;
        local_8 = local_8 + 0xf;

        uVar15 = thunk_FUN_00526ba0(local_c,bVar12);
        /* ST_CALLSITE[0051CC23]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
        pBVar9_mg1 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_0240,uVar15);
        /* ST_CALLSITE[0051CC3B]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',
               (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar9_mg1);
        pBVar4 = local_10;
        /* ST_CALLSITE[0051CC59]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x94,local_8 - 2,'\x06',
               (RecoveredRecordView_006B84D0_87AF9D9B *)local_10);
        local_30 = 0x94;
        local_28 = (pBVar4->bmiHeader).biWidth;
        local_2c = local_8 - 2;
        local_24 = (pBVar4->bmiHeader).biHeight;
        local_20 = 2;
        local_1f = GVar5;
        local_1b = param_2;

        Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_30);
        local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
      }

      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 3;
      iVar13 = -1;
      iVar11 = -3;
      /* ST_CALLSITE[0051CCDB]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7_mg5 = LoadResourceString(0x5655,g_hINSTANCE_00807618);

      ccFntTy::WrStr(this_00->field_01E0,pcVar7_mg5,iVar11,iVar13,uVar16);
      pHVar17 = g_hINSTANCE_00807618;

      UVar6 = thunk_FUN_00523410(param_1,bVar12,1);
      pcVar7_mg4 = LoadResourceString(UVar6,pHVar17);
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
      pcVar10 = (char *)&DAT_0080f33a;
      memmove(pcVar10, pcVar9, uVar16); /* compiler REP MOVS byte copy */
      uVar8 = 0;
      ccFntTy::FormText(this_00->field_01E0,(char *)&DAT_0080f33a,&DAT_0080f33a,
                        " ,.;:!?/\\()[]{}",0x106,1);

      uVar14 = FUN_007113e0(this_00->field_01E0,&DAT_0080f33a);
      /* ST_CALLSITE[0051CD60]: CALL 0x00401870; direct=00401870 HelpPanelTy::CheckBkView */
      CheckBkView(this_00,local_8,(ushort)uVar14);
      uVar16 = uVar14 & 0xffff;

      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,uVar16 + 2);

      ccFntTy::WrTxt(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5
                     ,-1,-1);
      if ((ushort)uVar14 < 0x10) {
        uVar16 = 0xf;
      }
      local_8 = local_8 + uVar16;

      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar16 = 3;
      iVar13 = -1;
      iVar11 = -3;
      /* ST_CALLSITE[0051CDFE]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7_mg7 = LoadResourceString(0x562a,g_hINSTANCE_00807618);

      ccFntTy::WrStr(this_00->field_01E0,pcVar7_mg7,iVar11,iVar13,uVar16);

      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
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

      UVar6 = thunk_FUN_00523410(local_c,bVar12,0);
      pcVar7_mg8 = LoadResourceString(UVar6,pHVar17);
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
      pcVar10 = (char *)&DAT_0080f33a;
      memmove(pcVar10, pcVar9, uVar16); /* compiler REP MOVS byte copy */
      for (puVar7 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar7 != nullptr;
          puVar7 = Library::MSVCRT::FUN_0072e560(puVar7,'\n')) {
        *(undefined1 *)puVar7 = 0x20;
      }

      ccFntTy::WrStr(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5
                    );
      local_8 = local_8 + 0xf;

      local_EAX_1393 = thunk_FUN_00526ba0(local_c,bVar12);
      /* ST_CALLSITE[0051CEFE]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
      pBVar9_mg3 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_023C,
                                local_EAX_1393);
      /* ST_CALLSITE[0051CF16]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',
             (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar9_mg3);
      pBVar4 = local_10;
      /* ST_CALLSITE[0051CF34]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x94,local_8 - 2,'\x06',
             (RecoveredRecordView_006B84D0_87AF9D9B *)local_10);
      local_30 = 0x94;
      local_28 = (pBVar4->bmiHeader).biWidth;
      local_2c = local_8 - 2;
      local_24 = (pBVar4->bmiHeader).biHeight;
      local_20 = 3;
      local_1f = local_c;
      local_1b = param_2;

      Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_30);
      local_8 = local_8 + (pBVar4->bmiHeader).biHeight;

      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      pIVar18 = (InternalExceptionFrame *)0x3;
      iVar13 = -1;
      iVar11 = -3;
      /* ST_CALLSITE[0051CFB0]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7_mgA = LoadResourceString(0x5662,g_hINSTANCE_00807618);

      ccFntTy::WrStr(this_00->field_01E0,pcVar7_mgA,iVar11,iVar13,(uint)pIVar18);

      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      pIVar18 = (InternalExceptionFrame *)((DAT_0080874e != '\x03') - 1 & 5);
      iVar13 = -1;
      iVar11 = 1;
      /* ST_CALLSITE[0051D019]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7_mgB = LoadResourceString((-(uint)(param_1 != 0xfd) & 0xffffffcd) + 0x5663,
                                      g_hINSTANCE_00807618);

      ccFntTy::WrStr(this_00->field_01E0,pcVar7_mgB,iVar11,iVar13,(uint)pIVar18);
      local_8 = local_8 + 0xf;

      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      pIVar18 = (InternalExceptionFrame *)0x3;
      iVar13 = -1;
      iVar11 = -3;
      /* ST_CALLSITE[0051D062]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7_mgC = LoadResourceString(0x5625,g_hINSTANCE_00807618);

      ccFntTy::WrStr(this_00->field_01E0,pcVar7_mgC,iVar11,iVar13,(uint)pIVar18);

      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      pIVar18 = (InternalExceptionFrame *)((DAT_0080874e != '\x03') - 1 & 5);
      iVar13 = -1;
      iVar11 = 1;
      /* ST_CALLSITE[0051D0BA]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar7_mgD = LoadResourceString(0x5d5a,g_hINSTANCE_00807618);

      ccFntTy::WrStr(this_00->field_01E0,pcVar7_mgD,iVar11,iVar13,(uint)pIVar18);
      local_8 = local_8 + 0xf;
      /* ST_CALLSITE[0051D0D8]: CALL 0x00403684; direct=00403684 thunk_FUN_00523410; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
      UVar6 = thunk_FUN_00523410(param_1,bVar12,2);
      /* ST_CALLSITE[0051D0E7]: CALL 0x00402dab; direct=00402DAB HelpPanelTy::DrawDescription */
      DrawDescription(this_00,(int *)&local_8,UVar6);
      /* ST_CALLSITE[0051D0F6]: CALL 0x0040506f; direct=0040506F HelpPanelTy::AddLinks */
      AddLinks(this_00,(int *)&local_8,'\v',param_1,param_2);
      g_currentExceptionFrame = (InternalExceptionFrame *)param_2;
      return;
    }
    g_currentExceptionFrame = pIVar18;

    iVar11_mg9 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x929,0,iVar6_mg0,
                                    "%s","HelpPanelTy::SpecProc");
    if (iVar11_mg9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6_mg0,0,"E:\\__titans\\Andrey\\helppan.cpp",0x929);
  }
  return;
}

