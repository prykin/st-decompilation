#include "../../pseudocode_runtime.h"


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffec : 0x00517361 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::TechProc */

void __thiscall HelpPanelTy::TechProc(HelpPanelTy *this,uint param_1,byte param_2,char param_3)

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

  local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(1));
  local_8 = 0;
  local_44 = this;
  local_3c = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this->field_0248,4);
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;

  local_EAX_70 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0);
  this_00 = local_44;
  if (local_EAX_70 != 0) {
    g_currentExceptionFrame = local_88.previous;

    iVar15 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x55a,0,local_EAX_70,
                                "%s","HelpPanelTy::TechProc");
    if (iVar15 == 0) {
      RaiseInternalException(local_EAX_70,0,"E:\\__titans\\Andrey\\helppan.cpp",0x55a);
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
      local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)local_c + (char)uVar5));
      break;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 3);
  uVar9 = local_c & 0xff;
  GVar15 = (Global_sub_00528A30_param_1Enum)param_1;
  local_18 = uVar9;

  UVar6 = thunk_FUN_00528060(GVar15,param_2);
  /* ST_CALLSITE[00516B84]: CALL 0x00403ef9; direct=00403EF9 HelpPanelTy::DrawTitle */
  DrawTitle(this_00,0x55fc,uVar9,UVar6);

  uVar12 = thunk_FUN_005276e0(GVar15,param_2);
  /* ST_CALLSITE[00516B9B]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
  pBVar7_mg0 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_0230,uVar12);
  /* ST_CALLSITE[00516BAB]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0x35,0x2a,'\x01',
         (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar7_mg0);

  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar9 = 3;
  iVar16 = -1;
  iVar14 = -3;
  /* ST_CALLSITE[00516BE6]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar8_mg0 = LoadResourceString(0x5622,g_hINSTANCE_00807618);

  ccFntTy::WrStr(this_00->field_01E0,pcVar8_mg0,iVar14,iVar16,uVar9);

  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
  if ((char)local_c == DAT_0080874e) {

    local_EAX_506 = thunk_FUN_004e5910((uint)DAT_0080874d,param_1);
    if (local_EAX_506 != 0) {
      local_38 = (uint)param_2;

      iVar14 = thunk_FUN_004e6140((uint)DAT_0080874d,param_1);
      if ((int)(uint)param_2 <= iVar14) {

        iVar14 = thunk_FUN_004e6140((uint)DAT_0080874d,param_1);

        iVar16 = thunk_FUN_004e60d0((uint)DAT_0080874d,param_1);
        if (iVar14 <= iVar16) {
          uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar16 = -1;
          iVar14 = 1;
          /* ST_CALLSITE[00516D8C]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
          pcVar8_mg5 = LoadResourceString(0x5d56,g_hINSTANCE_00807618);

          ccFntTy::WrStr(this_00->field_01E0,pcVar8_mg5,iVar14,iVar16,uVar9);
          iVar14 = 2;
          goto LAB_00516f08;
        }

        local_EAX_624 = thunk_FUN_004e5f90((uint)DAT_0080874d,param_1);
        if (local_EAX_624 == 0) {
          /* ST_CALLSITE[00516CEF]: CALL 0x00403f8f; direct=00403F8F STAllPlayersC::sub_004E5CC0 */
          local_EAX_687 =
               STAllPlayersC::sub_004E5CC0
                         (g_allPlayers_007FA174,(uint)DAT_0080874d,param_1,local_38);
          if (local_EAX_687 == 0) {
            uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
            iVar16 = -1;
            iVar14 = 1;
            /* ST_CALLSITE[00516D53]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
            pcVar8_mg6 = LoadResourceString(0x5d55,g_hINSTANCE_00807618);

            ccFntTy::WrStr(this_00->field_01E0,pcVar8_mg6,iVar14,iVar16,uVar9);
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
        pcVar8_mg7 = LoadResourceString(UVar6,g_hINSTANCE_00807618);

        ccFntTy::WrStr(this_00->field_01E0,pcVar8_mg7,iVar14,iVar16,uVar9);
        iVar14 = 3;
        goto LAB_00516f54;
      }
    }
    uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar16 = -1;
    iVar14 = 1;
    /* ST_CALLSITE[00516DC4]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar8_mg8 = LoadResourceString(0x5d52,g_hINSTANCE_00807618);

    ccFntTy::WrStr(this_00->field_01E0,pcVar8_mg8,iVar14,iVar16,uVar9);
    iVar14 = 1;
  }
  else {

    iVar14 = thunk_FUN_004e6140((uint)DAT_0080874d,param_1);

    iVar16 = thunk_FUN_004e60d0((uint)DAT_0080874d,param_1);
    if (iVar16 < iVar14) {
      /* ST_CALLSITE[00516E27]: CALL 0x00402342; direct=00402342 STAllPlayersC::sub_004E7F20 */
      iVar14 = STAllPlayersC::sub_004E7F20
                         (g_allPlayers_007FA174,(uint)DAT_0080874d,param_1,(uint)param_2);
      if (iVar14 == 0) {
        uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar16 = -1;
        iVar14 = 1;
        /* ST_CALLSITE[00516E51]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar8_mg4 = LoadResourceString(0x5d52,g_hINSTANCE_00807618);

        ccFntTy::WrStr(this_00->field_01E0,pcVar8_mg4,iVar14,iVar16,uVar9);
        iVar14 = 1;
      }
      else {

        iVar6 = thunk_FUN_004e5f90((uint)DAT_0080874d,param_1);
        if (iVar6 != 0) {
          uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
          iVar16 = -1;
          iVar14 = 1;
          /* ST_CALLSITE[00516EA5]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
          pcVar8_mg3 = LoadResourceString(0x5d54,g_hINSTANCE_00807618);

          ccFntTy::WrStr(this_00->field_01E0,pcVar8_mg3,iVar14,iVar16,uVar9);
          iVar14 = 3;
LAB_00516eb8:
          pBVar7_mg1 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_0248,iVar14
                                   );
          pAVar12 = this_00->field_0068;
          goto LAB_00516f6b;
        }
        uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar16 = -1;
        iVar14 = 1;
        /* ST_CALLSITE[00516EF5]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar8_mg2 = LoadResourceString(0x5d53,g_hINSTANCE_00807618);

        ccFntTy::WrStr(this_00->field_01E0,pcVar8_mg2,iVar14,iVar16,uVar9);
        iVar14 = 3;
      }
LAB_00516f08:
      pBVar7_mg1 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_0248,iVar14);
      pAVar12 = this_00->field_0068;
      goto LAB_00516f6b;
    }
    uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar16 = -1;
    iVar14 = 1;
    /* ST_CALLSITE[00516F41]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar8_mg1 = LoadResourceString(0x5d56,g_hINSTANCE_00807618);

    ccFntTy::WrStr(this_00->field_01E0,pcVar8_mg1,iVar14,iVar16,uVar9);
    iVar14 = 2;
  }
LAB_00516f54:
  /* ST_CALLSITE[00516F5B]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
  pBVar7_mg1 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_0248,iVar14);
  pAVar12 = this_00->field_0068;
LAB_00516f6b:
  /* ST_CALLSITE[00516F6B]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut((RecoveredSourceFamily_dibcopy *)pAVar12,0x33,0x28,'\x06',
         (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar7_mg1);
  local_8 = local_8 + 0xf;

  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar9 = 3;
  iVar16 = -1;
  iVar14 = -3;
  /* ST_CALLSITE[00516FAC]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar8_mg9 = LoadResourceString(0x5623,g_hINSTANCE_00807618);

  ccFntTy::WrStr(this_00->field_01E0,pcVar8_mg9,iVar14,iVar16,uVar9);

  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
  uVar9 = (DAT_0080874e != '\x03') - 1 & 5;
  iVar16 = -1;
  iVar14 = 1;
  pHVar13 = g_hINSTANCE_00807618;

  UVar6 = thunk_FUN_005293c0(GVar15);
  /* ST_CALLSITE[00517007]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar8_mgA = LoadResourceString(UVar6,pHVar13);

  ccFntTy::WrStr(this_00->field_01E0,pcVar8_mgA,iVar14,iVar16,uVar9);
  local_8 = local_8 + 0xf;

  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar9 = 3;
  iVar16 = -1;
  iVar14 = -3;
  /* ST_CALLSITE[00517051]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar8_mgB = LoadResourceString(0x55f7,g_hINSTANCE_00807618);

  ccFntTy::WrStr(this_00->field_01E0,pcVar8_mgB,iVar14,iVar16,uVar9);

  ccFntTy::SetSurf(this_00->field_01E8,(int)this_00->field_0218,0,0x96,local_8 - 3,0x106,0x14);
  local_38 = (uint)param_2;
  iVar14 = (local_38 + param_1 * 4) * 4;
  /* ST_CALLSITE[005170AC]: CALL dword ptr [0x0085bde8] */
  wsprintfA((LPSTR)&DAT_0080f33a,"%4d",*(undefined4 *)(&DAT_007e4818 + iVar14));

  ccFntTy::WrStr(this_00->field_01E8,(char *)&DAT_0080f33a,1,-1,
                 (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 3);
  /* ST_CALLSITE[005170F3]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/wingdi.h/tagBITMAPINFO; source view only; no Ghidra override */
  local_40 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_0238,
                          (-(uint)((char)local_c != '\x03') & 0xfffffffe) + 4);
  if (local_40 != nullptr) {
    FUN_006b5440((ushort *)this_00->field_0218,0,0xb4,local_8,local_40,0,0x3a);
    local_34 = 0xb4;
    local_2c = (local_40->bmiHeader).biWidth;
    local_30 = local_8;
    local_28 = (local_40->bmiHeader).biHeight;
    local_23 = (-(uint)((char)local_c != '\x03') & 0xfffffffc) + 0xe0;
    local_24 = 1;
    local_1f = local_18;

    Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_34);
  }
  local_8 = local_8 + 0xf;

  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar9 = 3;
  iVar17 = -1;
  iVar16 = -3;
  /* ST_CALLSITE[005171A2]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar8_mgC = LoadResourceString(0x5624,g_hINSTANCE_00807618);

  ccFntTy::WrStr(this_00->field_01E0,pcVar8_mgC,iVar16,iVar17,uVar9);

  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
  iVar14 = (*(int *)(&DAT_007e5474 + iVar14) / 0x19) % 0xe10;
  /* ST_CALLSITE[00517223]: CALL dword ptr [0x0085bde8] */
  wsprintfA((LPSTR)&DAT_0080f33a,"%02d:%02d",iVar14 / 0x3c,iVar14 % 0x3c);

  ccFntTy::WrStr(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,2);
  local_8 = local_8 + 0xf;

  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
  uVar9 = 3;
  iVar16 = -1;
  iVar14 = -3;
  /* ST_CALLSITE[0051727B]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar8_mgD = LoadResourceString(0x5625,g_hINSTANCE_00807618);

  ccFntTy::WrStr(this_00->field_01E0,pcVar8_mgD,iVar14,iVar16,uVar9);

  ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
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
  pcVar8_mgE = LoadResourceString(UVar6,g_hINSTANCE_00807618);

  ccFntTy::WrStr(this_00->field_01E0,pcVar8_mgE,iVar14,iVar16,uVar9);
  local_8 = local_8 + 0xf;
  if ((g_allPlayers_007FA174 != nullptr) &&
     ((thunk_FUN_004e6e10(local_18,param_1,&local_10,&local_14), local_10 != 0 || (local_14 != 0))))
  {

    ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0,local_8,0x91,0xf);
    uVar9 = 3;
    iVar16 = -1;
    iVar14 = -3;
    /* ST_CALLSITE[005173B2]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar8_mgF = LoadResourceString(0x5626,g_hINSTANCE_00807618);

    ccFntTy::WrStr(this_00->field_01E0,pcVar8_mgF,iVar14,iVar16,uVar9);
    if (local_10 != 0) {

      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      pHVar13 = g_hINSTANCE_00807618;

      UVar6 = thunk_FUN_00523410(local_10,(char)local_c,0);
      pcVar8_mg10 = LoadResourceString(UVar6,pHVar13);
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
      pcVar11 = (char *)&DAT_0080f33a;
      memmove(pcVar11, pcVar10, uVar9); /* compiler REP MOVS byte copy */
      uVar8 = 0;
      for (puVar7 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar7 != nullptr;
          puVar7 = Library::MSVCRT::FUN_0072e560(puVar7,'\n')) {
        *(undefined1 *)puVar7 = 0x20;
      }

      ccFntTy::WrStr(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5
                    );
      local_8 = local_8 + 0xf;

      local_EAX_2640 = thunk_FUN_00526ba0(local_10,(char)local_c);
      /* ST_CALLSITE[0051749D]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
      pBVar7_mg3 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_0240,
                                local_EAX_2640);
      /* ST_CALLSITE[005174B5]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',
             (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar7_mg3);
      pBVar4 = local_3c;
      /* ST_CALLSITE[005174D3]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x94,local_8 - 2,'\x06',
             (RecoveredRecordView_006B84D0_87AF9D9B *)local_3c);
      local_34 = 0x94;
      local_2c = (pBVar4->bmiHeader).biWidth;
      local_30 = local_8 - 2;
      local_28 = (pBVar4->bmiHeader).biHeight;
      local_23 = local_10;
      local_24 = 2;
      local_1f = local_18;

      Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_34);
      local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
    }
    if (local_14 != 0) {

      ccFntTy::SetSurf(this_00->field_01E0,(int)this_00->field_0218,0,0x96,local_8,0x106,0xf);
      pHVar13 = g_hINSTANCE_00807618;

      UVar6 = thunk_FUN_00523410(local_14,(char)local_c,0);
      pcVar8_mg12 = LoadResourceString(UVar6,pHVar13);
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
      pcVar11 = (char *)&DAT_0080f33a;
      memmove(pcVar11, pcVar10, uVar9); /* compiler REP MOVS byte copy */
      for (puVar7 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar7 != nullptr;
          puVar7 = Library::MSVCRT::FUN_0072e560(puVar7,'\n')) {
        *(undefined1 *)puVar7 = 0x20;
      }

      ccFntTy::WrStr(this_00->field_01E0,(char *)&DAT_0080f33a,1,-1,(DAT_0080874e != '\x03') - 1 & 5
                    );
      local_8 = local_8 + 0xf;

      local_EAX_2991 = thunk_FUN_00526ba0(local_14,(char)local_c);
      /* ST_CALLSITE[005175FC]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
      pBVar7_mg5 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)this_00->field_023C,
                                local_EAX_2991);
      /* ST_CALLSITE[00517614]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x96,local_8,'\x01',
             (RecoveredRecordView_006B84D0_87AF9D9B *)pBVar7_mg5);
      pBVar4 = local_3c;
      /* ST_CALLSITE[00517632]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0218,0x94,local_8 - 2,'\x06',
             (RecoveredRecordView_006B84D0_87AF9D9B *)local_3c);
      local_34 = 0x94;
      local_2c = (pBVar4->bmiHeader).biWidth;
      local_30 = local_8 - 2;
      local_28 = (pBVar4->bmiHeader).biHeight;
      local_23 = local_14;
      local_24 = 3;
      local_1f = local_18;

      Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_01D7,&local_34);
      local_8 = local_8 + (pBVar4->bmiHeader).biHeight;
    }
  }
  /* ST_CALLSITE[00517689]: CALL 0x00403576; direct=00403576 thunk_FUN_00528a30; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
  UVar6 = thunk_FUN_00528a30(GVar15,param_2);
  /* ST_CALLSITE[00517698]: CALL 0x00402dab; direct=00402DAB HelpPanelTy::DrawDescription */
  DrawDescription(this_00,(int *)&local_8,UVar6);
  /* ST_CALLSITE[005176AA]: CALL 0x0040506f; direct=0040506F HelpPanelTy::AddLinks */
  AddLinks(this_00,(int *)&local_8,'\x05',param_1,local_38);
  g_currentExceptionFrame = local_88.previous;
  return;
}

