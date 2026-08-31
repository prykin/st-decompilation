#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::ArmProc

   [STSwitchEnumApplier] Switch target field_06F7 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_06F7State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_25=37;CASE_26=38;CASE_27=39;CASE_28=40;CASE_31=49;CASE_32=50;CASE_34=52
    */

void __thiscall HelpPanelTy::ArmProc(HelpPanelTy *this,int param_1,int param_2,char param_3)

{
  char cVar1;
  HelpPanelTy_field_01A1State HVar2;
  HelpPanelTy *this_00;
  BITMAPINFO *pBVar4;
  int local_EAX_88;
  UINT UVar5;
  int local_EAX_296;
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
  int uVar6;
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
  int local_EAX_2416;
  BITMAPINFO *pBVar5_mg4;
  char *pcVar6_mgF;
  int local_EAX_2664;
  char *pcVar6_mg10;
  int local_EAX_2872;
  BITMAPINFO *pBVar5_mg6;
  int local_EAX_3080;
  char *pcVar6_mg12;
  int local_EAX_3288;
  BITMAPINFO *pBVar5_mg8;
  int local_EAX_3503;
  char *pcVar6_mg14;
  int local_EAX_3708;
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
  local_38 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this->field_0248,4);
  if (g_allPlayers_007FA174 != nullptr) {
    element = g_currentExceptionFrame;
    g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffff5c;

    local_EAX_88 = Library::MSVCRT::__setjmp3(local_a0,0);
    this_00 = local_44;
    if (local_EAX_88 == 0) {
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

      UVar5 = thunk_FUN_00524fe0(GVar19);
      /* ST_CALLSITE[0051B6BE]: CALL 0x00403ef9; direct=00403EF9 HelpPanelTy::DrawTitle */
      DrawTitle(this_00,0x55fd,param_2,UVar5);

      local_EAX_296 = thunk_FUN_005259b0(GVar19,0,'\x01');
      /* ST_CALLSITE[0051B6D5]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
      pBVar5_mg0 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_0244,
                                local_EAX_296);
      if (pBVar5_mg0 != nullptr) {
        /* ST_CALLSITE[0051B6FF]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0x35,
               (0x1e - (pBVar5_mg0->bmiHeader).biHeight) / 2 + 0x2a,'\x06',
               (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar5_mg0);
      }

      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar20 = 3;
      iVar16 = -1;
      iVar14 = -3;
      /* ST_CALLSITE[0051B73A]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar6_mg0 = LoadResourceString(0x55f8,g_hINSTANCE_00807618);

      ccFntTy::WrStr(this_00->field_01E0,pcVar6_mg0,iVar14,iVar16,uVar20);
      iVar14 = 0;

      iVar4 = thunk_FUN_006460c0(param_1);
      if (0 < iVar4) {
        do {

          iVar16 = thunk_FUN_00646110(param_1,iVar14,&local_c,&local_14,&local_18);
          if (iVar16 != 0) {

            ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
            if ((local_14 == nullptr) || (local_18 == 0)) {
              if (iVar14 == 0) {
                pcVar6_mg1 = LoadResourceString(0x565c,g_hINSTANCE_00807618);
                uVar15 = 2;
                pcVar7_mg0 = LoadResourceString(0x564c,g_hINSTANCE_00807618);
                /* ST_CALLSITE[0051B911]: CALL EDI */
                wsprintfA((LPSTR)&DAT_0080f33a,"&%d%d &%d%s &%d(%s)",2,local_c,
                          (DAT_0080874e != '\x03') - 1 & 5,pcVar7_mg0,uVar15,pcVar6_mg1);
              }
              else {
                pcVar6_mg2 = LoadResourceString(0x565d,g_hINSTANCE_00807618);
                uVar15 = 2;
                iVar16 = iVar14;
                pcVar7_mg1 = LoadResourceString(0x564c,g_hINSTANCE_00807618);
                /* ST_CALLSITE[0051B8C4]: CALL EDI */
                wsprintfA((LPSTR)&DAT_0080f33a,"&%d%d &%d%s &%d(%d %s)",2,local_c,
                          (DAT_0080874e != '\x03') - 1 & 5,pcVar7_mg1,uVar15,iVar16,pcVar6_mg2);
              }
            }
            else if (iVar14 == 0) {
              pcVar6_mg3 = LoadResourceString(0x565c,g_hINSTANCE_00807618);
              uVar15 = 2;
              pcVar7_mg2 = LoadResourceString(0x564c,g_hINSTANCE_00807618);
              /* ST_CALLSITE[0051B86C]: CALL EDI */
              wsprintfA((LPSTR)&DAT_0080f33a,"&%d%d/%d*%d &%d%s &%d(%s)",2,local_c,local_14
                        ,local_18,(DAT_0080874e != '\x03') - 1 & 5,pcVar7_mg2,uVar15,pcVar6_mg3);
            }
            else {
              pcVar6_mg4 = LoadResourceString(0x565d,g_hINSTANCE_00807618);
              uVar15 = 2;
              iVar16 = iVar14;
              pcVar7_mg3 = LoadResourceString(0x564c,g_hINSTANCE_00807618);
              /* ST_CALLSITE[0051B818]: CALL EDI */
              wsprintfA((LPSTR)&DAT_0080f33a,"&%d%d/%d*%d &%d%s &%d(%d %s)",2,local_c,
                        local_14,local_18,(DAT_0080874e != '\x03') - 1 & 5,pcVar7_mg3,uVar15,iVar16,
                        pcVar6_mg4);
            }

            ccFntTy::WrStr(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,0);
            local_8 = local_8 + 0xf;
          }
          iVar14 = iVar14 + 1;

          local_EAX_917 = thunk_FUN_006460c0(param_1);
        } while (iVar14 < local_EAX_917);
      }
      iVar14 = param_1 * 3 + -0x1c2;
      local_14 = (int *)(iVar14 * 4);
      if ((&DAT_007bf67c)[iVar14] != 0) {

        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar20 = 3;
        iVar16 = -1;
        iVar14 = -3;
        /* ST_CALLSITE[0051B995]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar6_mg5 = LoadResourceString(0x5657,g_hINSTANCE_00807618);

        ccFntTy::WrStr(this_00->field_01E0,pcVar6_mg5,iVar14,iVar16,uVar20);

        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
        piVar10 = local_14;
        uVar20 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar16 = -1;
        iVar14 = 1;
        pHVar12 = g_hINSTANCE_00807618;

        UVar5 = thunk_FUN_00528060(*(Global_sub_00528060_param_1Enum *)
                                    ((int)&DAT_007bf67c + (int)local_14),'\0');
        /* ST_CALLSITE[0051B9FD]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar6_mg6 = LoadResourceString(UVar5,pHVar12);

        ccFntTy::WrStr(this_00->field_01E0,pcVar6_mg6,iVar14,iVar16,uVar20);
        local_8 = local_8 + 0xf;

        uVar6 = thunk_FUN_005276e0(*(Global_sub_005276E0_param_1Enum *)
                                    ((int)&DAT_007bf67c + (int)piVar10),0);
        /* ST_CALLSITE[0051BA2D]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
        pBVar5_mg1 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_0230,uVar6);
        /* ST_CALLSITE[0051BA47]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',
               (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar5_mg1);
        local_60 = 0x96;
        local_58 = (pBVar5_mg1->bmiHeader).biWidth;
        local_5c = local_8;
        local_54 = (pBVar5_mg1->bmiHeader).biHeight;
        local_50 = 5;
        local_4b = 0;
        local_4f = *(undefined4 *)((int)&DAT_007bf67c + (int)local_14);

        Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_60);
        local_8 = local_8 + 5 + (pBVar5_mg1->bmiHeader).biHeight;
      }
      iVar14 = (&DAT_007e6024)[param_1 * 5 + -0x2ee];
      if (iVar14 != 0) {

        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar20 = 3;
        iVar18 = -1;
        iVar16 = -3;
        /* ST_CALLSITE[0051BAE8]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar6_mg7 = LoadResourceString(0x55f7,g_hINSTANCE_00807618);

        ccFntTy::WrStr(this_00->field_01E0,pcVar6_mg7,iVar16,iVar18,uVar20);

        ccFntTy::SetSurf(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
        /* ST_CALLSITE[0051BB2B]: CALL EDI */
        wsprintfA((LPSTR)&DAT_0080f33a,"%4d",iVar14);

        ccFntTy::WrStr(this_00->field_01E8,(char *)&DAT_0080f33a,1,-1,
                       (DAT_0080874e != '\x03') - 1 & 4);
        /* ST_CALLSITE[0051BB5E]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; source view only; no Ghidra override */
        pBVar5_mg2 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_0238,0);
        FUN_006b5440((ushort *)this_00->field_0218,0,0xb4,local_8,pBVar5_mg2,0,0x3a);
        local_34 = (InternalExceptionFrame *)0xb4;
        local_2c = (pBVar5_mg2->bmiHeader).biWidth;
        local_30 = local_8;
        local_28 = (pBVar5_mg2->bmiHeader).biHeight;
        local_24 = 1;
        local_23 = 0xdd;
        local_1f = param_2;

        Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_34);
        local_8 = local_8 + 0x14;
      }

      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      pcVar6_mg8 = LoadResourceString(0x5658,g_hINSTANCE_00807618);
      /* ST_CALLSITE[0051BBFF]: CALL EDI */
      wsprintfA((LPSTR)&DAT_0080f33a,"%s:",pcVar6_mg8);

      ccFntTy::WrStr(this_00->field_01E0,(char *)&DAT_0080f33a,-3,-1,3);
      iVar14 = *(int *)(&DAT_007d1fdc + param_1 * 4);
      if (iVar14 == -1) {
        UVar5 = 0x5617;
      }
      else {
        iVar16 = 0;
        piVar10 = &DAT_007d2234;
        do {
          if (*piVar10 != -1) {
            local_40 = (&DAT_007d2234)[iVar16];
            local_3c = local_40;
            break;
          }
          piVar10 = piVar10 + 1;
          iVar16 = iVar16 + 1;
        } while ((int)piVar10 < 0x7d22e8);
        piVar10 = &DAT_007d2234;
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

      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar20 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar16 = -1;
      iVar14 = 1;
      /* ST_CALLSITE[0051BCFA]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar6_mg9 = LoadResourceString(UVar5,g_hINSTANCE_00807618);

      ccFntTy::WrStr(this_00->field_01E0,pcVar6_mg9,iVar14,iVar16,uVar20);
      local_8 = local_8 + 0xf;

      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar20 = 3;
      iVar16 = -1;
      iVar14 = -3;
      /* ST_CALLSITE[0051BD44]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar6_mgA = LoadResourceString(0x565e,g_hINSTANCE_00807618);

      ccFntTy::WrStr(this_00->field_01E0,pcVar6_mgA,iVar14,iVar16,uVar20);

      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      uVar20 = (DAT_0080874e != '\x03') - 1 & 5;
      iVar16 = -1;
      iVar14 = 1;
      /* ST_CALLSITE[0051BDA9]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar6_mgB = LoadResourceString(0x273f - (*(int *)("blast_p" + param_1 * 4) != 0),
                                      g_hINSTANCE_00807618);

      ccFntTy::WrStr(this_00->field_01E0,pcVar6_mgB,iVar14,iVar16,uVar20);
      piVar10 = local_14;
      local_8 = local_8 + 0xf;
      cVar13 = (char)param_2;
      if (*(int *)((int)&DAT_007bf678 + (int)local_14) != 0) {
        local_c = CASE_34;

        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
        uVar20 = 3;
        iVar16 = -1;
        iVar14 = -3;
        /* ST_CALLSITE[0051BE0C]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar6_mgC = LoadResourceString(0x565f,g_hINSTANCE_00807618);

        ccFntTy::WrStr(this_00->field_01E0,pcVar6_mgC,iVar14,iVar16,uVar20);

        ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
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

        UVar5 = thunk_FUN_00523410(local_c,cVar13,0);
        pcVar6_mgD = LoadResourceString(UVar5,pHVar12);
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
        pcVar11 = (char *)&DAT_0080f33a;
        memmove(pcVar11, pcVar8, uVar20); /* compiler REP MOVS byte copy */
        uVar7 = 0;
        for (puVar6 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != nullptr;
            puVar6 = Library::MSVCRT::FUN_0072e560(puVar6,'\n')) {
          *(undefined1 *)puVar6 = 0x20;
        }

        ccFntTy::WrStr(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,
                       (DAT_0080874e != '\x03') - 1 & 5);
        SVar9 = local_c;
        local_8 = local_8 + 0xf;

        local_EAX_2416 = thunk_FUN_00526ba0(local_c,cVar13);
        /* ST_CALLSITE[0051BF1D]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
        pBVar5_mg4 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_0240,
                                  local_EAX_2416);
        /* ST_CALLSITE[0051BF35]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',
               (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar5_mg4);
        pBVar4 = local_38;
        /* ST_CALLSITE[0051BF53]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x94,local_8 - 2,'\x06',
               (RecoveredRecordView_006B84D0_87AF9D9B *)local_38);
        local_34 = (InternalExceptionFrame *)0x94;
        local_2c = (pBVar4->bmiHeader).biWidth;
        local_30 = local_8 - 2;
        local_28 = (pBVar4->bmiHeader).biHeight;
        local_24 = 2;
        local_23 = SVar9;
        local_1f = param_2;

        Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_34);
        local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
      }
      local_d = '\0';

      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
      uVar20 = 3;
      iVar16 = -1;
      iVar14 = -3;
      /* ST_CALLSITE[0051BFD3]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
      pcVar6_mgF = LoadResourceString(0x5660,g_hINSTANCE_00807618);

      ccFntTy::WrStr(this_00->field_01E0,pcVar6_mgF,iVar14,iVar16,uVar20);
      local_14 = &DAT_007a8b1c;
      local_c = CASE_1;
      do {
        SVar9 = local_c;
        if ((*local_14 == param_1) &&

           (local_EAX_2664 = thunk_FUN_004e8030(local_c), local_EAX_2664 == param_2)) {

          ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
          pHVar12 = g_hINSTANCE_00807618;

          UVar5 = thunk_FUN_00523410(local_c,cVar13,0);
          pcVar6_mg10 = LoadResourceString(UVar5,pHVar12);
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
          pcVar11 = (char *)&DAT_0080f33a;
          memmove(pcVar11, pcVar8, uVar20); /* compiler REP MOVS byte copy */
          uVar7 = 0;
          for (puVar6 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != nullptr;
              puVar6 = Library::MSVCRT::FUN_0072e560(puVar6,'\n')) {
            *(undefined1 *)puVar6 = 0x20;
          }

          ccFntTy::WrStr(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,
                         (DAT_0080874e != '\x03') - 1 & 5);
          SVar9 = local_c;
          local_8 = local_8 + 0xf;

          local_EAX_2872 = thunk_FUN_00526ba0(local_c,cVar13);
          /* ST_CALLSITE[0051C0E5]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
          pBVar5_mg6 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_023C,
                                    local_EAX_2872);
          /* ST_CALLSITE[0051C0FD]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',
                 (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar5_mg6);
          pBVar4 = local_38;
          /* ST_CALLSITE[0051C11B]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x94,local_8 - 2,'\x06',
                 (RecoveredRecordView_006B84D0_87AF9D9B *)local_38);
          local_34 = (InternalExceptionFrame *)0x94;
          local_2c = (pBVar4->bmiHeader).biWidth;
          local_30 = local_8 - 2;
          local_28 = (pBVar4->bmiHeader).biHeight;
          element = (InternalExceptionFrame *)&local_34;
          local_24 = 3;
          local_23 = SVar9;
          local_1f = param_2;

          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,element);
          local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
          local_d = '\x01';
        }
        local_14 = local_14 + 1;
        local_c = SVar9 + CASE_1;
      } while ((int)SVar9 < 0x28);
      local_14 = &DAT_007a8cfc;
      local_c = CASE_1;
      do {
        SVar9 = local_c;
        if ((*local_14 == param_1) &&

           (local_EAX_3080 = thunk_FUN_004e8030(local_c), local_EAX_3080 == param_2)) {

          ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
          pHVar12 = g_hINSTANCE_00807618;

          UVar5 = thunk_FUN_00523410(local_c,cVar13,0);
          pcVar6_mg12 = LoadResourceString(UVar5,pHVar12);
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
          pcVar11 = (char *)&DAT_0080f33a;
          memmove(pcVar11, pcVar8, uVar20); /* compiler REP MOVS byte copy */
          uVar7 = 0;
          for (puVar6 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != nullptr;
              puVar6 = Library::MSVCRT::FUN_0072e560(puVar6,'\n')) {
            *(undefined1 *)puVar6 = 0x20;
          }

          ccFntTy::WrStr(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,
                         (DAT_0080874e != '\x03') - 1 & 5);
          SVar9 = local_c;
          local_8 = local_8 + 0xf;

          local_EAX_3288 = thunk_FUN_00526ba0(local_c,cVar13);
          /* ST_CALLSITE[0051C285]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
          pBVar5_mg8 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_023C,
                                    local_EAX_3288);
          /* ST_CALLSITE[0051C29D]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',
                 (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar5_mg8);
          pBVar4 = local_38;
          /* ST_CALLSITE[0051C2BB]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x94,local_8 - 2,'\x06',
                 (RecoveredRecordView_006B84D0_87AF9D9B *)local_38);
          local_34 = (InternalExceptionFrame *)0x94;
          local_2c = (pBVar4->bmiHeader).biWidth;
          local_30 = local_8 - 2;
          local_28 = (pBVar4->bmiHeader).biHeight;
          element = (InternalExceptionFrame *)&local_34;
          local_24 = 3;
          local_23 = SVar9;
          local_1f = param_2;

          Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,element);
          local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
          local_d = '\x01';
        }
        local_14 = local_14 + 1;
        local_c = SVar9 + CASE_1;
        if (0x27 < (int)SVar9) {
          piVar10 = &DAT_00792ca0;
          local_c = CASE_32;
          do {
            local_18 = 2;
            SVar9 = local_c;
            do {
              if ((*piVar10 == param_1) &&

                 (local_14 = piVar10, local_EAX_3503 = thunk_FUN_004e8030(SVar9),
                 local_EAX_3503 == param_2)) {

                ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,
                                 0xf);
                pHVar12 = g_hINSTANCE_00807618;

                UVar5 = thunk_FUN_00523410(local_c,cVar13,0);
                pcVar6_mg14 = LoadResourceString(UVar5,pHVar12);
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
                pcVar11 = (char *)&DAT_0080f33a;
                memmove(pcVar11, pcVar8, uVar20); /* compiler REP MOVS byte copy */
                for (puVar6 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n');
                    puVar6 != nullptr; puVar6 = Library::MSVCRT::FUN_0072e560(puVar6,'\n')) {
                  *(undefined1 *)puVar6 = 0x20;
                }

                ccFntTy::WrStr(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,
                               (DAT_0080874e != '\x03') - 1 & 5);
                SVar9 = local_c;
                local_8 = local_8 + 0xf;

                local_EAX_3708 = thunk_FUN_00526ba0(local_c,cVar13);
                /* ST_CALLSITE[0051C429]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
                pBVar5_mgA = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_0240,
                                          local_EAX_3708);
                /* ST_CALLSITE[0051C441]: CALL 0x00403229; direct=00403229 DibPut */
                DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',
                       (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar5_mgA);
                pBVar4 = local_38;
                /* ST_CALLSITE[0051C45F]: CALL 0x00403229; direct=00403229 DibPut */
                DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x94,local_8 - 2,'\x06',
                       (RecoveredRecordView_006B84D0_87AF9D9B *)local_38);
                local_34 = (InternalExceptionFrame *)0x94;
                local_2c = (pBVar4->bmiHeader).biWidth;
                local_30 = local_8 - 2;
                local_28 = (pBVar4->bmiHeader).biHeight;
                element = (InternalExceptionFrame *)&local_34;
                local_24 = 2;
                local_23 = SVar9;
                local_1f = param_2;

                Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,element);
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
              UVar5 = thunk_FUN_00525ca0(GVar19);
              /* ST_CALLSITE[0051C4F6]: CALL 0x00402dab; direct=00402DAB HelpPanelTy::DrawDescription */
              DrawDescription(this_00,(int *)&local_8,UVar5);
              /* ST_CALLSITE[0051C508]: CALL 0x0040506f; direct=0040506F HelpPanelTy::AddLinks */
              AddLinks(this_00,(int *)&local_8,'\x04',param_1,param_2);
              g_currentExceptionFrame = element;
              return;
            }
          } while( true );
        }
      } while( true );
    }
    g_currentExceptionFrame = element;

    iVar17 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x8c4,0,local_EAX_88,
                                "%s","HelpPanelTy::ArmProc");
    if (iVar17 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_88,0,"E:\\__titans\\Andrey\\helppan.cpp",0x8c4);
  }
  return;
}

