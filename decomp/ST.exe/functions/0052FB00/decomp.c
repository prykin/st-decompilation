#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::SetOptControls

   [STSwitchEnumApplier] Switch target field_01A4 uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_01A4State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14

   [STSwitchEnumApplier] Switch target field_01AB uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_01ABState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_A=10

   [STSwitchEnumApplier] Switch target field_01AB uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_01ABState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_A=10;CASE_B=11 */

void __thiscall OptPanelTy::SetOptControls(OptPanelTy *this)

{
  char cVar1;
  ccFntTy *pcVar2;
  byte bVar4;
  int local_EAX_51;
  char *pcVar7_mg10;
  int local_EAX_338;
  int local_EAX_465;
  char *pcVar7_mg26;
  int iVar6;
  int local_EAX_886;
  char *pcVar7_mg1C;
  char *pcVar7_mg11;
  char *pcVar7_mg1D;
  char *pcVar7_mg4;
  char *pcVar7_mg0;
  char *pcVar7_mg1;
  char *pcVar7_mg2;
  char *pcVar7_mg3;
  char *pcVar7_mg5;
  char *pcVar7_mg6;
  char *pcVar7_mg7;
  char *pcVar7_mgC;
  char *pcVar7_mgD;
  char *pcVar7_mgE;
  char *pcVar7_mgF;
  char *pcVar7_mg8;
  char *pcVar7_mg9;
  char *pcVar7_mgA;
  char *pcVar7_mgB;
  char *pcVar7_mg28;
  char *pcVar7_mg27;
  int local_EAX_4632;
  int local_EAX_4865;
  int local_EAX_5376;
  int local_EAX_5605;
  int local_EAX_5906;
  int local_EAX_6096;
  HANDLE pvVar5;
  uint uVar6;
  LPSTR pCVar7;
  int iVar17;
  uint uVar8;
  ushort *puVar9;
  OptPanelTy *this_00;
  int iVar10;
  uint *puVar11;
  int *piVar12;
  char *pcVar13;
  char *pcVar14;
  uint uVar16;
  SNDContext *pSVar17;
  ccFntTy **ppcVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  short sVar23;
  ushort uVar24;
  UINT UVar25;
  RecoveredSourceFamily_dibcopy *pRVar26;
  uint uVar27;
  char *pcVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint local_1c48 [112];
  ccFntTy *local_1a88 [3];
  int local_1a7c;
  int local_1a78;
  undefined4 local_1a74;
  undefined4 local_1a70;
  undefined4 local_1a6c;
  DArrayTy *local_1a68;
  undefined4 local_1a3c;
  undefined4 local_1a38;
  undefined4 local_1a34;
  undefined4 local_19fc;
  undefined4 local_19f8;
  undefined4 local_19f4;
  undefined4 local_122c;
  undefined4 local_1228;
  uint local_11fc [4];
  undefined4 local_11ec;
  int local_11e8;
  undefined4 local_11e4;
  undefined4 local_11e0;
  int local_11dc;
  int local_11d8;
  undefined4 local_11c4;
  undefined4 local_11c0;
  undefined4 local_11bc;
  undefined4 local_114c;
  undefined4 local_1148;
  undefined4 local_1144;
  int local_1140 [4];
  undefined4 local_1130;
  undefined4 local_112c;
  undefined4 local_10e0;
  undefined4 local_10dc;
  undefined4 local_10d8;
  undefined4 local_1038;
  undefined4 local_1034;
  undefined4 local_1030;
  undefined4 local_102c;
  ushort *local_101c;
  int local_1018;
  undefined4 local_fc4;
  int local_fc0 [4];
  undefined4 local_fb0;
  undefined4 local_fac;
  undefined4 local_f58;
  ushort *local_e9c;
  int local_e98;
  undefined4 local_d80;
  undefined4 local_994;
  undefined4 local_990;
  char local_984 [260];
  char local_880 [260];
  int local_77c [4];
  undefined4 local_76c;
  undefined4 local_768;
  undefined4 local_764;
  undefined4 local_760;
  undefined4 local_754;
  undefined4 local_750;
  undefined4 local_74c;
  undefined4 local_734;
  undefined4 local_730;
  undefined4 local_72c;
  undefined4 local_714;
  undefined4 local_710;
  undefined4 local_70c;
  undefined4 local_6f4;
  undefined4 local_6f0;
  undefined4 local_6ec;
  undefined4 local_650;
  undefined4 local_64c;
  undefined4 local_648;
  int local_644;
  int local_640;
  undefined4 local_63c;
  undefined4 local_638;
  undefined4 local_5ec;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined4 local_544;
  undefined4 local_540;
  undefined4 local_53c;
  undefined4 local_538;
  ushort *local_528;
  int local_524;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  int local_4c4;
  int local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  ushort *local_3a8;
  int local_3a4;
  undefined4 local_2ac;
  InternalExceptionFrame local_2a8;
  InternalExceptionFrame local_264;
  InternalExceptionFrame local_220;
  InternalExceptionFrame local_1dc;
  InternalExceptionFrame local_198;
  InternalExceptionFrame local_154;
  InternalExceptionFrame local_110;
  undefined4 local_cc [4];
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  uint *local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  uint local_38;
  size_t local_34;
  char *local_30;
  uint local_2c;
  OptPanelTy *local_28;
  uint local_24;
  uint local_20;
  size_t local_1c;
  uint *local_18;
  uint local_14;
  byte local_d;
  undefined4 *local_c;
  uint local_8;
  char *resourceString;
  char *pcVar7_mg32;

  local_8 = 0x52fb0d;
  local_110.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_110;
  local_28 = this;
  local_EAX_51 = Library::MSVCRT::__setjmp3(local_110.jumpBuffer,0);
  this_00 = local_28;
  if (local_EAX_51 != 0) {
    g_currentExceptionFrame = local_110.previous;
    iVar17 = ReportDebugMessage("E:\\__titans\\Andrey\\optpanel.cpp",0x350,0,local_EAX_51,
                                "%s","OptPanelTy::SetOptControls");
    if (iVar17 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_51,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x350);
    return;
  }
  iVar10 = 10;
  local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(10));
  puVar11 = local_28->field_01B5;
  do {
    if (*puVar11 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar11);
    }
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  /* ST_CALLSITE[0052FB83]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0,'\x01',(byte *)this_00->field_0184
        );
  ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x31,2,0xc6,0xc);
  switch(this_00->field_01A4) {
  case CASE_1:
    uVar31 = 0;
    iVar10 = -2;
    UVar25 = 16000;
    break;
  case CASE_2:
    uVar31 = 0;
    iVar10 = -2;
    UVar25 = 0x3e87;
    break;
  case CASE_3:
    UVar25 = 0x3e81;
    goto LAB_00530592;
  case CASE_4:
    UVar25 = 0x3e82;
LAB_00530592:
    uVar31 = 0;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mg27 = LoadResourceString(UVar25,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mg27,iVar10,iVar29,uVar31);
    puVar9 = this_00->field_0190;
LAB_005305a9:
    pRVar26 = (RecoveredSourceFamily_dibcopy *)this_00->field_0068;
LAB_005305b4:
    /* ST_CALLSITE[005305B4]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut(pRVar26,0x1d,0x13,'\x01',(byte *)puVar9);
    goto cf_common_join_005305BC;
  case CASE_5:
  case CASE_B:
    uVar31 = 0;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mg10 = LoadResourceString(0x3ea8,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mg10,iVar10,iVar29,uVar31);
    ccFntTy::SetSurf(this_00->field_0180,this_00->field_0068,0,0x1d,0x13,0xee,0x6a);
    switch(this_00->field_01AB) {
    case CASE_1:
    case CASE_2:
    case CASE_6:
      pcVar28 = local_984;
      for (iVar10 = 0x41; iVar10 != 0; iVar10 = iVar10 + -1) {
        pcVar28[0] = '\0';
        pcVar28[1] = '\0';
        pcVar28[2] = '\0';
        pcVar28[3] = '\0';
        pcVar28 = pcVar28 + 4;
      }
      local_EAX_338 = FUN_00711110(this_00->field_0180,&this_00->field_0x1f5);
      if (local_EAX_338 < 0xee) {
LAB_0052fd4a:
        uVar31 = 0xffffffff;
        pcVar28 = &this_00->field_0x1f5;
        do {
          pcVar14 = pcVar28;
          if (uVar31 == 0) break;
          uVar31 = uVar31 - 1;
          pcVar14 = pcVar28 + 1;
          cVar1 = *pcVar28;
          pcVar28 = pcVar14;
        } while (cVar1 != '\0');
        uVar31 = ~uVar31;
        pcVar28 = pcVar14 + -uVar31;
        pcVar14 = local_984;
        for (uVar8 = uVar31 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar28;
          pcVar28 = pcVar28 + 4;
          pcVar14 = pcVar14 + 4;
        }
      }
      else {
        uVar31 = 0xffffffff;
        pcVar28 = &this_00->field_0x1f5;
        do {
          if (uVar31 == 0) break;
          uVar31 = uVar31 - 1;
          cVar1 = *pcVar28;
          pcVar28 = pcVar28 + 1;
        } while (cVar1 != '\0');
        local_1c = ~uVar31 - 1;
        local_34 = 10;
        do {
          local_34 = local_34 + 1;
          Library::MSVCRT::_strncpy(local_984,&this_00->field_0x1f5,local_34);
          uVar31 = 0xffffffff;
          pcVar28 = &CHAR___007c7278;
          do {
            pcVar14 = pcVar28;
            if (uVar31 == 0) break;
            uVar31 = uVar31 - 1;
            pcVar14 = pcVar28 + 1;
            cVar1 = *pcVar28;
            pcVar28 = pcVar14;
          } while (cVar1 != '\0');
          uVar31 = ~uVar31;
          iVar10 = -1;
          pcVar28 = local_984;
          do {
            pcVar13 = pcVar28;
            if (iVar10 == 0) break;
            iVar10 = iVar10 + -1;
            pcVar13 = pcVar28 + 1;
            cVar1 = *pcVar28;
            pcVar28 = pcVar13;
          } while (cVar1 != '\0');
          pcVar28 = pcVar14 + -uVar31;
          pcVar14 = pcVar13 + -1;
          memmove(pcVar14, pcVar28, uVar31); /* compiler REP MOVS byte copy */
          uVar8 = 0;
          local_EAX_465 = FUN_00711110(this_00->field_0180,local_984);
        } while ((local_EAX_465 < 0xee) && ((int)local_34 < (int)local_1c));
        if (local_34 == local_1c) goto LAB_0052fd4a;
        pcVar28 = local_984;
        for (iVar10 = 0x41; iVar10 != 0; iVar10 = iVar10 + -1) {
          pcVar28[0] = '\0';
          pcVar28[1] = '\0';
          pcVar28[2] = '\0';
          pcVar28[3] = '\0';
          pcVar28 = pcVar28 + 4;
        }
        Library::MSVCRT::_strncpy(local_984,&this_00->field_0x1f5,local_34 - 3);
        uVar31 = 0xffffffff;
        pcVar28 = &CHAR___007c7274;
        do {
          pcVar14 = pcVar28;
          if (uVar31 == 0) break;
          uVar31 = uVar31 - 1;
          pcVar14 = pcVar28 + 1;
          cVar1 = *pcVar28;
          pcVar28 = pcVar14;
        } while (cVar1 != '\0');
        uVar31 = ~uVar31;
        iVar10 = -1;
        pcVar28 = local_984;
        do {
          pcVar13 = pcVar28;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar13 = pcVar28 + 1;
          cVar1 = *pcVar28;
          pcVar28 = pcVar13;
        } while (cVar1 != '\0');
        pcVar28 = pcVar14 + -uVar31;
        pcVar14 = pcVar13 + -1;
        for (uVar8 = uVar31 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar28;
          pcVar28 = pcVar28 + 4;
          pcVar14 = pcVar14 + 4;
        }
      }
      UVar25 = this_00->field_01A5;
      for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
        *pcVar14 = *pcVar28;
        pcVar28 = pcVar28 + 1;
        pcVar14 = pcVar14 + 1;
      }
      pcVar28 = local_984;
      pcVar7_mg26 = LoadResourceString(UVar25,g_hINSTANCE_00807618);
      /* ST_CALLSITE[0052FD92]: CALL dword ptr [0x0085bde8] */
      wsprintfA(&this_00->field_006C,pcVar7_mg26,pcVar28);
      break;
    default:
      pcVar7_mg1D = LoadResourceString(this_00->field_01A5,g_hINSTANCE_00807618);
      uVar31 = 0xffffffff;
      do {
        pcVar28 = pcVar7_mg1D;
        if (uVar31 == 0) break;
        uVar31 = uVar31 - 1;
        pcVar28 = pcVar7_mg1D + 1;
        cVar1 = *pcVar7_mg1D;
        pcVar7_mg1D = pcVar28;
      } while (cVar1 != '\0');
      uVar31 = ~uVar31;
      pcVar28 = pcVar28 + -uVar31;
      pcVar14 = &this_00->field_006C;
      memmove(pcVar14, pcVar28, uVar31); /* compiler REP MOVS byte copy */
      uVar8 = 0;
      break;
    case CASE_7:
      pcVar28 = local_880;
      for (iVar10 = 0x41; iVar10 != 0; iVar10 = iVar10 + -1) {
        pcVar28[0] = '\0';
        pcVar28[1] = '\0';
        pcVar28[2] = '\0';
        pcVar28[3] = '\0';
        pcVar28 = pcVar28 + 4;
      }
      iVar10 = 0;
      local_30 = nullptr;
      if (DAT_00808aaf != 0) {
        pcVar28 = &CHAR_00h_00808ab0;
        do {
          local_30 = pcVar28;
          if (*(int *)(pcVar28 + 0x40) == g_playSystem_00802A38->field_00F4) break;
          iVar10 = iVar10 + 1;
          pcVar28 = pcVar28 + 0x9c;
          local_30 = nullptr;
        } while (iVar10 < (int)(uint)DAT_00808aaf);
      }
      pcVar28 = local_30;
      if (local_30 == nullptr) {
        pcVar14 = &CHAR___007c7274;
LAB_0052ff02:
        uVar31 = 0xffffffff;
        do {
          pcVar28 = pcVar14;
          if (uVar31 == 0) break;
          uVar31 = uVar31 - 1;
          pcVar28 = pcVar14 + 1;
          cVar1 = *pcVar14;
          pcVar14 = pcVar28;
        } while (cVar1 != '\0');
        uVar31 = ~uVar31;
        pcVar28 = pcVar28 + -uVar31;
        pcVar14 = local_880;
        for (uVar8 = uVar31 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar28;
          pcVar28 = pcVar28 + 4;
          pcVar14 = pcVar14 + 4;
        }
      }
      else {
        iVar6 = FUN_00711110(this_00->field_0180,local_30);
        pcVar14 = local_30;
        if (iVar6 < 200) goto LAB_0052ff02;
        uVar31 = 0xffffffff;
        do {
          if (uVar31 == 0) break;
          uVar31 = uVar31 - 1;
          cVar1 = *pcVar28;
          pcVar28 = pcVar28 + 1;
        } while (cVar1 != '\0');
        local_18 = (uint *)(~uVar31 - 1);
        local_c = (undefined4 *)0xa;
        do {
          local_c = (undefined4 *)((int)local_c + 1);
          Library::MSVCRT::_strncpy(local_880,local_30,(size_t)local_c);
          uVar31 = 0xffffffff;
          pcVar28 = &CHAR___007c7278;
          do {
            pcVar14 = pcVar28;
            if (uVar31 == 0) break;
            uVar31 = uVar31 - 1;
            pcVar14 = pcVar28 + 1;
            cVar1 = *pcVar28;
            pcVar28 = pcVar14;
          } while (cVar1 != '\0');
          uVar31 = ~uVar31;
          iVar10 = -1;
          pcVar28 = local_880;
          do {
            pcVar13 = pcVar28;
            if (iVar10 == 0) break;
            iVar10 = iVar10 + -1;
            pcVar13 = pcVar28 + 1;
            cVar1 = *pcVar28;
            pcVar28 = pcVar13;
          } while (cVar1 != '\0');
          pcVar28 = pcVar14 + -uVar31;
          pcVar14 = pcVar13 + -1;
          memmove(pcVar14, pcVar28, uVar31); /* compiler REP MOVS byte copy */
          uVar8 = 0;
          local_EAX_886 = FUN_00711110(this_00->field_0180,local_880);
          pcVar28 = local_30;
        } while ((local_EAX_886 < 200) && ((int)local_c < (int)local_18));
        pcVar14 = local_30;
        if (local_c == local_18) goto LAB_0052ff02;
        pcVar14 = local_880;
        for (iVar10 = 0x41; iVar10 != 0; iVar10 = iVar10 + -1) {
          pcVar14[0] = '\0';
          pcVar14[1] = '\0';
          pcVar14[2] = '\0';
          pcVar14[3] = '\0';
          pcVar14 = pcVar14 + 4;
        }
        Library::MSVCRT::_strncpy(local_880,pcVar28,(int)local_c - 3);
        uVar31 = 0xffffffff;
        pcVar28 = &CHAR___007c7274;
        do {
          pcVar14 = pcVar28;
          if (uVar31 == 0) break;
          uVar31 = uVar31 - 1;
          pcVar14 = pcVar28 + 1;
          cVar1 = *pcVar28;
          pcVar28 = pcVar14;
        } while (cVar1 != '\0');
        uVar31 = ~uVar31;
        iVar10 = -1;
        pcVar28 = local_880;
        do {
          pcVar13 = pcVar28;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar13 = pcVar28 + 1;
          cVar1 = *pcVar28;
          pcVar28 = pcVar13;
        } while (cVar1 != '\0');
        pcVar28 = pcVar14 + -uVar31;
        pcVar14 = pcVar13 + -1;
        for (uVar8 = uVar31 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar28;
          pcVar28 = pcVar28 + 4;
          pcVar14 = pcVar14 + 4;
        }
      }
      UVar25 = this_00->field_01A5;
      for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
        *pcVar14 = *pcVar28;
        pcVar28 = pcVar28 + 1;
        pcVar14 = pcVar14 + 1;
      }
      pcVar28 = local_880;
      pcVar7_mg1C = LoadResourceString(UVar25,g_hINSTANCE_00807618);
      /* ST_CALLSITE[0052FF3E]: CALL dword ptr [0x0085bde8] */
      wsprintfA(&this_00->field_006C,pcVar7_mg1C,pcVar28);
      break;
    case CASE_A:
      uVar31 = (uint)(byte)this_00->field_01AC;
      pcVar7_mg11 = LoadResourceString(this_00->field_01A5,g_hINSTANCE_00807618);
      /* ST_CALLSITE[0052FF6A]: CALL dword ptr [0x0085bde8] */
      wsprintfA(&this_00->field_006C,pcVar7_mg11,uVar31);
    }
    if (DAT_0080874e == '\x03') {
      uVar31 = 5;
    }
    else {
      uVar31 = -(uint)(DAT_0080874e != '\x01') & 7;
    }
    ccFntTy::WrTxt(this_00->field_0180,&this_00->field_006C,-2,-1,uVar31,-1,-1);
    goto cf_common_join_005305BC;
  case CASE_6:
    uVar31 = 0;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mgC = LoadResourceString(0x3e8a,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mgC,iVar10,iVar29,uVar31);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x6b,0x6e,0xa0,0xb);
    uVar31 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mgD = LoadResourceString(0x3ee4,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mgD,iVar10,iVar29,uVar31);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x61,0x4e,0xb);
    uVar31 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar29 = -1;
    iVar10 = -3;
    pcVar7_mgE = LoadResourceString(0x3eea,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mgE,iVar10,iVar29,uVar31);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x77,0x4e,0xb);
    uVar31 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar29 = -1;
    iVar10 = -3;
    pcVar7_mgF = LoadResourceString(0x3eeb,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mgF,iVar10,iVar29,uVar31);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x84,0x4e,0xb);
    goto LAB_00530554;
  case CASE_7:
    uVar31 = 0;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mg8 = LoadResourceString(0x3e8b,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mg8,iVar10,iVar29,uVar31);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x61,0x4e,0xb);
    uVar31 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar29 = -1;
    iVar10 = -3;
    pcVar7_mg9 = LoadResourceString(0x3ee9,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mg9,iVar10,iVar29,uVar31);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x6b,0x6e,0xa0,0xb);
    uVar31 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mgA = LoadResourceString(0x3ee4,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mgA,iVar10,iVar29,uVar31);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x77,0x4e,0xb);
    uVar31 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar29 = -1;
    iVar10 = -3;
    pcVar7_mgB = LoadResourceString(0x3eeb,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mgB,iVar10,iVar29,uVar31);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x84,0x4e,0xb);
LAB_00530554:
    uVar31 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar10 = -3;
    UVar25 = 0x3eec;
    break;
  case CASE_8:
    uVar31 = 0;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mg5 = LoadResourceString(0x3e8c,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mg5,iVar10,iVar29,uVar31);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x15,0x77,0xc);
    uVar31 = 0;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mg6 = LoadResourceString(0x3eef,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mg6,iVar10,iVar29,uVar31);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x94,0x15,0x77,0xc);
    uVar31 = 0;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mg7 = LoadResourceString(0x3eed,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mg7,iVar10,iVar29,uVar31);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x5b,0xf0,0xc);
    uVar31 = 0;
    iVar10 = -2;
    UVar25 = 0x3f07;
    break;
  case CASE_9:
    uVar31 = 0;
    iVar10 = -2;
    UVar25 = 0x3e8d;
    break;
  default:
    goto cf_common_join_005305BC;
  case CASE_C:
    uVar31 = 0;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mg4 = LoadResourceString(0x3e89,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mg4,iVar10,iVar29,uVar31);
    puVar9 = this_00->field_0194;
    goto LAB_005305a9;
  case CASE_D:
    uVar31 = 0;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mg1 = LoadResourceString(0x3e88,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mg1,iVar10,iVar29,uVar31);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x6d,0x77,0x11);
    uVar31 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mg2 = LoadResourceString(0x3ef9,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mg2,iVar10,iVar29,uVar31);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x7f,0x77,0x11);
    uVar31 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mg3 = LoadResourceString(0x3efa,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mg3,iVar10,iVar29,uVar31);
    /* ST_CALLSITE[0053013D]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0xaa,0x6f,'\x01',
           (byte *)this_00->field_018C);
    resourceString = &this_00->field_006C;
    /* ST_CALLSITE[00530159]: CALL EDI */
    wsprintfA(resourceString,"%d",(uint)DAT_00807346);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0xaa,0x6f,
                     *(int *)(this_00->field_018C + 2),*(int *)(this_00->field_018C + 4));
    ccFntTy::WrStr(this_00->field_017C,resourceString,-2,-1,0);
    /* ST_CALLSITE[005301AD]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0xaa,0x81,'\x01',
           (byte *)this_00->field_018C);
    /* ST_CALLSITE[005301C1]: CALL EDI */
    wsprintfA(resourceString,"%d",DAT_00807347 + 1);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0xaa,0x81,
                     *(int *)(this_00->field_018C + 2),*(int *)(this_00->field_018C + 4));
    ccFntTy::WrStr(this_00->field_017C,resourceString,-2,-1,0);
    goto cf_common_join_005305BC;
  case CASE_E:
    uVar31 = 0;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mg0 = LoadResourceString(0x3e94,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mg0,iVar10,iVar29,uVar31);
    puVar9 = this_00->field_0190;
    pRVar26 = (RecoveredSourceFamily_dibcopy *)this_00->field_0068;
    goto LAB_005305b4;
  }
  iVar29 = -1;
  pcVar7_mg28 = LoadResourceString(UVar25,g_hINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_017C,pcVar7_mg28,iVar10,iVar29,uVar31);
cf_common_join_005305BC:
  switch(this_00->field_01A4) {
  case CASE_1:
    bVar4 = 0;
    local_8 = local_8 & 0xffffff00;
    do {
      iVar10 = 1;
      if (((DAT_00808783 == '\x03') && (bVar4 != 0)) &&
         ((bVar4 < 3 || ((bVar4 == 4 && (DAT_008067a0 != '\0')))))) {
        iVar10 = 0;
      }
      uVar27 = 0;
      uVar8 = local_8 & 0xff;
      uVar22 = 0;
      pcVar28 = nullptr;
      uVar6 = 0;
      uVar24 = 0;
      iVar29 = uVar8 + 0xc0af;
      sVar23 = 0;
      iVar21 = uVar8 + 0xc09f;
      pCVar7 = thunk_FUN_00571240("BUT_BUTOPT",0);
      /* ST_CALLSITE[00530650]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
      uVar31 = UPanelTy::CreateBut((UPanelTy *)this_00,1,iVar10,0x1d,uVar8 * 0x12 + 0x13,1,pCVar7,
                                   iVar21,iVar29,sVar23,uVar24,uVar6,pcVar28,uVar22,uVar27);
      this_00->field_01B5[uVar8] = uVar31;
      bVar4 = (byte)local_8 + 1;
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
    } while (bVar4 < 7);
    break;
  case CASE_2:
    local_18 = this_00->field_01B5;
    iVar10 = 0xc09f;
    iVar29 = 0x25;
    local_1c = 5;
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(6));
    do {
      uVar27 = 0;
      uVar22 = 0;
      pcVar28 = nullptr;
      uVar6 = 0;
      uVar24 = 0;
      iVar21 = iVar10 + 0x10;
      sVar23 = 0;
      iVar20 = iVar10;
      pCVar7 = thunk_FUN_00571240("BUT_BUTOPT",0);
      /* ST_CALLSITE[0053077F]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
      uVar31 = UPanelTy::CreateBut((UPanelTy *)this_00,1,1,0x1d,iVar29,1,pCVar7,iVar20,iVar21,sVar23
                                   ,uVar24,uVar6,pcVar28,uVar22,uVar27);
      iVar10 = iVar10 + 1;
      iVar29 = iVar29 + 0x12;
      *local_18 = uVar31;
      local_18 = local_18 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
    local_1c = 0;
    break;
  case CASE_3:
  case CASE_4:
  case CASE_E:
    if (this_00->field_01A4 != CASE_E) {
      if (this_00->field_01DD != (HANDLE)0x0) {
        /* ST_CALLSITE[00531402]: CALL dword ptr [0x0085bcac] */
        FindCloseChangeNotification(this_00->field_01DD);
        this_00->field_01DD = (HANDLE)0x0;
      }
      uVar31 = 0xffffffff;
      pcVar28 = &CHAR_00h_00807680;
      do {
        pcVar14 = pcVar28;
        if (uVar31 == 0) break;
        uVar31 = uVar31 - 1;
        pcVar14 = pcVar28 + 1;
        cVar1 = *pcVar28;
        pcVar28 = pcVar14;
      } while (cVar1 != '\0');
      uVar31 = ~uVar31;
      pcVar28 = pcVar14 + -uVar31;
      pcVar14 = &this_00->field_006C;
      memmove(pcVar14, pcVar28, uVar31); /* compiler REP MOVS byte copy */
      uVar8 = 0;
      uVar31 = 0xffffffff;
      pcVar7_mg32 = PTR_s_SAVEGAME__0079acec;
      do {
        pcVar28 = pcVar7_mg32;
        if (uVar31 == 0) break;
        uVar31 = uVar31 - 1;
        pcVar28 = pcVar7_mg32 + 1;
        cVar1 = *pcVar7_mg32;
        pcVar7_mg32 = pcVar28;
      } while (cVar1 != '\0');
      uVar31 = ~uVar31;
      iVar10 = -1;
      pcVar14 = &this_00->field_006C;
      do {
        pcVar13 = pcVar14;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar13;
      } while (cVar1 != '\0');
      pcVar28 = pcVar28 + -uVar31;
      pcVar14 = pcVar13 + -1;
      memmove(pcVar14, pcVar28, uVar31); /* compiler REP MOVS byte copy */
      uVar8 = 0;
      uVar31 = 0xffffffff;
      pcVar28 = &CHAR_00h_00807ddd;
      do {
        pcVar14 = pcVar28;
        if (uVar31 == 0) break;
        uVar31 = uVar31 - 1;
        pcVar14 = pcVar28 + 1;
        cVar1 = *pcVar28;
        pcVar28 = pcVar14;
      } while (cVar1 != '\0');
      uVar31 = ~uVar31;
      iVar10 = -1;
      pcVar28 = &this_00->field_006C;
      do {
        pcVar13 = pcVar28;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar28 + 1;
        cVar1 = *pcVar28;
        pcVar28 = pcVar13;
      } while (cVar1 != '\0');
      pcVar28 = pcVar14 + -uVar31;
      pcVar14 = pcVar13 + -1;
      memmove(pcVar14, pcVar28, uVar31); /* compiler REP MOVS byte copy */
      FUN_006b78c0(&this_00->field_006C,&this_00->field_006C);
      /* ST_CALLSITE[005314A1]: CALL dword ptr [0x0085bcfc] */
      pvVar5 = FindFirstChangeNotificationA(&this_00->field_006C,0,1);
      this_00->field_01DD = pvVar5;
      if (pvVar5 == (HANDLE)0xffffffff) {
        this_00->field_01DD = (HANDLE)0x0;
      }
    }
    iVar10 = this_00->field_005C;
    memset(local_77c, 0, 0x4d4); /* compiler bulk-zero initialization */
    local_77c[0] = 0;
    local_77c[2] = this_00->field_003C + 0x26;
    if (iVar10 == 0) {
      local_77c[3] = -this_00->field_0048;
    }
    else {
      local_77c[3] = this_00->field_0044;
    }
    local_77c[3] = local_77c[3] + 0x31;
    local_754 = this_00->field_0008;
    local_76c = 200;
    local_768 = 0x43;
    local_764 = 0;
    local_760 = 0;
    local_750 = 2;
    local_74c = 0x8160;
    local_730 = 2;
    local_72c = 0x8161;
    local_710 = 2;
    local_70c = 0x8162;
    local_6f0 = 2;
    local_6ec = 0x8163;
    if (DAT_0080734c != '\0') {
      local_2ac = 1;
    }
    local_644 = this_00->field_003C + 0xf2;
    local_650 = 2;
    local_64c = 0;
    local_648 = 2;
    local_544 = 1;
    local_540 = 1;
    if (iVar10 == 0) {
      local_640 = -this_00->field_0048;
    }
    else {
      local_640 = this_00->field_0044;
    }
    local_640 = local_640 + 0x30;
    local_63c = 0x11;
    local_638 = 0x24;
    local_734 = local_754;
    local_714 = local_754;
    local_6f4 = local_754;
    local_528 = FUN_0070aa70(g_cMf32_00806790,"BUT_MSLUP",0,1);
    local_524 = Library::Ourlib::MFIMG::mfImgGetWidth(g_cMf32_00806790,0x12,"BUT_MSLUP",1);
    local_5ec = this_00->field_0008;
    local_3c4 = 1;
    local_3c0 = 1;
    local_4c4 = this_00->field_003C + 0xf2;
    local_53c = 500;
    local_538 = 0x32;
    local_5e8 = 2;
    local_5e4 = 0x8164;
    local_4d0 = 2;
    local_4cc = 0;
    local_4c8 = 2;
    if (this_00->field_005C == 0) {
      local_4c0 = -this_00->field_0048;
    }
    else {
      local_4c0 = this_00->field_0044;
    }
    local_4c0 = local_4c0 + 0x51;
    local_4bc = 0x11;
    local_4b8 = 0x24;
    local_3a8 = FUN_0070aa70(g_cMf32_00806790,"BUT_MSLDN",0,1);
    local_3a4 = Library::Ourlib::MFIMG::mfImgGetWidth(g_cMf32_00806790,0x12,"BUT_MSLDN",1);
    local_46c = this_00->field_0008;
    local_3bc = 500;
    local_3b8 = 0x32;
    local_468 = 2;
    local_464 = 0x8165;
    /* ST_CALLSITE[00531727]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,7,this_00->field_01B5,nullptr,local_77c,0);
    if ((this_00->field_005C == 0) || (uVar6 = 0x55, DAT_0080734c == '\0')) {
      uVar6 = 0x56;
    }
    uVar31 = this_00->field_01B5[0];
    this_00->field_0028 = uVar6;
    if (uVar31 != 0) {
      FUN_006e6080(this_00,&DAT_80000002,uVar31,(undefined4 *)&this_00->field_0x18);
    }
    if (this_00->field_01A4 == CASE_3) {
      pcVar2 = this_00->field_017C;
      ppcVar18 = local_1a88;
      for (iVar10 = 0x223; iVar10 != 0; iVar10 = iVar10 + -1) {
        *ppcVar18 = nullptr;
        ppcVar18 = ppcVar18 + 1;
      }
      local_1a88[0] = nullptr;
      local_1a7c = this_00->field_003C + 0x26;
      local_1a88[1] = (ccFntTy *)0x9;
      if (this_00->field_005C == 0) {
        local_1a78 = -this_00->field_0048;
      }
      else {
        local_1a78 = this_00->field_0044;
      }
      local_1a68 = this_00->field_01F1;
      local_1a78 = local_1a78 + 0x1c;
      local_1228 = 1;
      local_122c = 1;
      local_1a3c = this_00->field_0008;
      local_1a74 = 0xde;
      local_1a70 = 0xb;
      local_1a6c = 0x104;
      local_1a38 = 2;
      local_1a34 = 0xc0b0;
      local_19f8 = 2;
      local_19f4 = 0xc0a0;
      local_1a88[2] = pcVar2;
      local_19fc = local_1a3c;
      /* ST_CALLSITE[0053183E]: CALL dword ptr [EAX + 0x8] */
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,6,this_00->field_01B5 + 1,nullptr,
                 local_1a88,1);
    }
    uVar32 = 0;
    uVar30 = 0;
    pcVar28 = nullptr;
    uVar27 = 0;
    uVar24 = 0;
    sVar23 = 0;
    uVar22 = 0xc0b1;
    uVar6 = 0xc0a1;
    if (this_00->field_01A4 == CASE_E) {
      pCVar7 = thunk_FUN_00571240("BUT_MEDIUM",0);
      /* ST_CALLSITE[005318F0]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
      uVar31 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x78,0x7d,1,pCVar7,uVar6,uVar22,sVar23,
                                   uVar24,uVar27,pcVar28,uVar30,uVar32);
      this_00->field_01B5[2] = uVar31;
      /* ST_CALLSITE[005318FD]: CALL 0x004017a8; direct=004017A8 OptPanelTy::PrepAsses */
      PrepAsses(this_00);
    }
    else {
      pCVar7 = thunk_FUN_00571240("BUT_MEDIUM",0);
      /* ST_CALLSITE[0053187D]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
      uVar31 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x5d,0x7c,1,pCVar7,uVar6,uVar22,sVar23,
                                   uVar24,uVar27,pcVar28,uVar30,uVar32);
      uVar32 = 0;
      uVar30 = 0;
      pcVar28 = nullptr;
      uVar27 = 0;
      uVar24 = 0;
      sVar23 = 0;
      uVar22 = 0xc0b2;
      uVar6 = 0xc0a2;
      this_00->field_01B5[2] = uVar31;
      pCVar7 = thunk_FUN_00571240("BUT_MEDIUM",0);
      /* ST_CALLSITE[005318BD]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
      uVar31 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x94,0x7c,1,pCVar7,uVar6,uVar22,sVar23,
                                   uVar24,uVar27,pcVar28,uVar30,uVar32);
      this_00->field_01B5[3] = uVar31;
      STPiece<0,2>(uVar31) = this_00->field_01E1;
      STPiece<2,2>(uVar31) = this_00->field_01E3;
      /* ST_CALLSITE[005318D1]: CALL 0x00403fbc; direct=00403FBC OptPanelTy::PrepFiles */
      PrepFiles(this_00,uVar31);
    }
    break;
  case CASE_5:
    uVar32 = 0;
    uVar30 = 0;
    pcVar28 = nullptr;
    uVar27 = 0;
    uVar24 = 0;
    sVar23 = 0;
    uVar22 = 0xc0af;
    uVar6 = 0xc09f;
    pCVar7 = thunk_FUN_00571240("BUT_MEDIUM",0);
    /* ST_CALLSITE[005306A3]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
    uVar31 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x5e,0x7d,1,pCVar7,uVar6,uVar22,sVar23,
                                 uVar24,uVar27,pcVar28,uVar30,uVar32);
    uVar32 = 0;
    uVar30 = 0;
    pcVar28 = nullptr;
    uVar27 = 0;
    uVar24 = 0;
    sVar23 = 0;
    uVar22 = 0xc0b0;
    uVar6 = 0xc0a0;
    this_00->field_01B5[0] = uVar31;
    pCVar7 = thunk_FUN_00571240("BUT_MEDIUM",0);
    /* ST_CALLSITE[005306E3]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
    uVar31 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x97,0x7d,1,pCVar7,uVar6,uVar22,sVar23,
                                 uVar24,uVar27,pcVar28,uVar30,uVar32);
    this_00->field_01B5[1] = uVar31;
    break;
  case CASE_6:
    local_18 = this_00->field_01B5;
    iVar10 = 0xc09f;
    local_c = (undefined4 *)0x16;
    local_1c = 4;
    do {
      uVar27 = 0;
      uVar22 = 0;
      pcVar28 = nullptr;
      uVar6 = 0;
      uVar24 = 0;
      bVar4 = '\x01' << ((char)iVar10 + 0x61U & 0x1f) & STPiece<1,1>(DAT_00807300);
      iVar29 = iVar10 + 0x10;
      sVar23 = 0;
      iVar21 = iVar10;
      pCVar7 = thunk_FUN_00571240("BUT_BUTOPT",0);
      /* ST_CALLSITE[00530C60]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
      uVar31 = UPanelTy::CreateBut((UPanelTy *)this_00,3,(-(uint)(bVar4 != 0) & 2) + 1,0x1d,
                                   (int)local_c,1,pCVar7,iVar21,iVar29,sVar23,uVar24,uVar6,pcVar28,
                                   uVar22,uVar27);
      iVar10 = iVar10 + 1;
      local_c = (undefined4 *)((int)local_c + 0x12);
      *local_18 = uVar31;
      local_18 = local_18 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
    bVar4 = 5;
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(5));
    local_1c = 0;
    uVar31 = local_20;
    do {
      local_14 = 1;
      local_2c = STReplaceLowByte((uint32_t)(local_2c), (uint8_t)(4));
      if (bVar4 != 5) {
        local_2c = STReplaceLowByte((uint32_t)(local_2c), (uint8_t)(bVar4));
      }
      uVar8 = local_8 & 0xff;
      local_24 = (bVar4 != 5) - 1 & 4;
      if (uVar8 == 5) {
        uVar31 = ((DAT_0080730e + 4000) * 0x1f) / 0xfa1;
        local_20 = uVar31;
      }
      else if (uVar8 == 6) {
        uVar31 = 0;
        if (g_sound == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = g_sndContext_0080765C->field_0050 & 1;
        }
        if (uVar8 == 0) {
          local_20 = 0;
          local_14 = 0;
        }
        else {
          local_264.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_264;
          local_EAX_4865 = Library::MSVCRT::__setjmp3(local_264.jumpBuffer,0);
          if (local_EAX_4865 == 0) {
            if (g_sound == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = g_sndContext_0080765C->field_0050 & 1;
            }
            if (uVar8 != 0) {
              Library::DKW::SND::FUN_006b7e00((int)g_sndContext_0080765C,1,&local_74,&local_70);
            }
            uVar8 = (uint)(local_74 + local_70) >> 1;
          }
          else {
            uVar8 = 0;
          }
          if (g_sound == 0) {
            uVar16 = 0;
          }
          else {
            uVar16 = g_sndContext_0080765C->field_0050 & 1;
          }
          g_currentExceptionFrame = local_264.previous;
          if (uVar16 != 0) {
            iVar10 = g_sndContext_0080765C->field_0064;
            iVar29 = g_sndContext_0080765C->field_0060;
LAB_00530d9d:
            uVar31 = (iVar10 - iVar29) + 1;
          }
LAB_00530da0:
          uVar31 = (uVar8 * 0x1f) / uVar31;
          this_00 = local_28;
          local_20 = uVar31;
        }
      }
      else if (uVar8 == 7) {
        uVar31 = 0;
        if (g_sound == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = g_sndContext_0080765C->field_0038 & 1;
        }
        if (uVar8 != 0) {
          local_154.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_154;
          local_EAX_4632 = Library::MSVCRT::__setjmp3(local_154.jumpBuffer,0);
          if (local_EAX_4632 == 0) {
            if (g_sound == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = g_sndContext_0080765C->field_0038 & 1;
            }
            if (uVar8 != 0) {
              Library::DKW::SND::FUN_006b7e00((int)g_sndContext_0080765C,0,&local_60,&local_6c);
            }
            uVar8 = (uint)(local_60 + local_6c) >> 1;
          }
          else {
            uVar8 = 0;
          }
          if (g_sound == 0) {
            uVar16 = 0;
          }
          else {
            uVar16 = g_sndContext_0080765C->field_0038 & 1;
          }
          g_currentExceptionFrame = local_154.previous;
          if (uVar16 != 0) {
            iVar10 = g_sndContext_0080765C->field_004C;
            iVar29 = g_sndContext_0080765C->field_0048;
            goto LAB_00530d9d;
          }
          goto LAB_00530da0;
        }
        local_20 = 0;
        local_14 = 0;
      }
      uVar16 = local_2c & 0xff;
      iVar10 = local_24 + uVar16 * 0xd + 0x29;
      /* ST_CALLSITE[00530EE7]: CALL 0x00403ee0; direct=00403EE0 OptPanelTy::CreateSlider */
      uVar8 = CreateSlider(this_00,0x6d,iVar10,0xf9,iVar10,uVar16 + 0xc09f,0x1f,uVar31,local_14);
      this_00->field_01B5[uVar16] = uVar8;
      /* ST_CALLSITE[00530EFC]: CALL 0x00405df3; direct=00405DF3 OptPanelTy::PaintVolume */
      PaintVolume(this_00,(char)local_2c - 4,(byte)uVar31);
      bVar4 = (byte)local_8 + 1;
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
    } while (bVar4 < 8);
    break;
  case CASE_7:
    if ((DAT_00807300 & 0xff) == 1) {
      local_2c = (uint)STPiece<1,3>(local_2c) << 8;
    }
    else if ((DAT_00807300 & 0xff) == 2) {
      local_2c = STReplaceLowByte((uint32_t)(local_2c), (uint8_t)(2));
    }
    else {
      local_2c = STReplaceLowByte((uint32_t)(local_2c), (uint8_t)(1));
    }
    /* ST_CALLSITE[00530F57]: CALL 0x00402680; direct=00402680 UPanelTy::CreateTab */
    uVar31 = UPanelTy::CreateTab((UPanelTy *)this_00,3,(byte)local_2c,0x1d,0x16,0xe9,0x11,0,0x12,
                                 0xc09f,0xc0af);
    this_00->field_01B5[0] = uVar31;
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(5));
    uVar8 = local_8;
    STPiece<0,1>(local_8) = 5;
    uVar31 = local_14;
    pSVar17 = g_sndContext_0080765C;
    bVar4 = (byte)local_8;
    local_8 = uVar8;
    do {
      local_20 = 1;
      local_24 = STReplaceLowByte((uint32_t)(local_24), (uint8_t)(4));
      if (bVar4 != 5) {
        local_24 = STReplaceLowByte((uint32_t)(local_24), (uint8_t)(bVar4));
      }
      local_38 = (bVar4 != 5) - 1 & 4;
      uVar8 = local_8 & 0xff;
      if (uVar8 == 5) {
        if ((char)DAT_00807300 == '\x02') {
          if (g_sound == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = pSVar17->field_0080 & 1;
          }
          if (uVar8 == 0) {
            uVar31 = 0;
            local_20 = 0;
            local_14 = 0;
            goto cf_common_join_0053138B;
          }
        }
        if ((char)DAT_00807300 == '\x04') {
          if (g_sound == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = pSVar17->field_0068 & 1;
          }
          if (uVar8 != 0) goto LAB_005311d8;
switchD_005311ec_caseD_1:
          uVar31 = 0;
          local_20 = 0;
          local_14 = 0;
          goto cf_common_join_0053138B;
        }
LAB_005311d8:
        switch(DAT_00807300 & 0xff) {
        case 1:
          goto switchD_005311ec_caseD_1;
        case 2:
          local_198.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_198;
          local_EAX_5906 = Library::MSVCRT::__setjmp3(local_198.jumpBuffer,0);
          if (local_EAX_5906 == 0) {
            if (g_sound == 0) {
              uVar31 = 0;
            }
            else {
              uVar31 = g_sndContext_0080765C->field_0080 & 1;
            }
            if (uVar31 != 0) {
              Library::DKW::SND::FUN_006b7e00((int)g_sndContext_0080765C,3,&local_4c,&local_50);
            }
            uVar8 = (uint)(local_50 + local_4c) >> 1;
          }
          else {
            uVar8 = 0;
          }
          if (g_sound == 0) {
            uVar31 = 0;
          }
          else {
            uVar31 = g_sndContext_0080765C->field_0080 & 1;
          }
          g_currentExceptionFrame = local_198.previous;
          if (uVar31 == 0) {
LAB_0053108d:
            uVar31 = 0;
          }
          else {
            uVar31 = (g_sndContext_0080765C->field_0094 - g_sndContext_0080765C->field_0090) + 1;
          }
          break;
        default:
          goto switchD_005311ec_caseD_3;
        case 4:
          local_1dc.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_1dc;
          local_EAX_6096 = Library::MSVCRT::__setjmp3(local_1dc.jumpBuffer,0);
          if (local_EAX_6096 == 0) {
            if (g_sound == 0) {
              uVar31 = 0;
            }
            else {
              uVar31 = g_sndContext_0080765C->field_0068 & 1;
            }
            if (uVar31 != 0) {
              Library::DKW::SND::FUN_006b7e00((int)g_sndContext_0080765C,2,&local_64,&local_5c);
            }
            uVar8 = (uint)(local_64 + local_5c) >> 1;
          }
          else {
            uVar8 = 0;
          }
          if (g_sound == 0) {
            uVar31 = 0;
          }
          else {
            uVar31 = g_sndContext_0080765C->field_0068 & 1;
          }
          g_currentExceptionFrame = local_1dc.previous;
          if (uVar31 == 0) goto LAB_0053108d;
          uVar31 = (g_sndContext_0080765C->field_007C - g_sndContext_0080765C->field_0078) + 1;
          break;
        case 8:
          uVar31 = ((DAT_0080730a + 4000) * 0x1f) / 0xfa1;
          local_14 = uVar31;
          goto cf_common_join_0053138B;
        }
LAB_0053108f:
        uVar31 = (uVar8 * 0x1f) / uVar31;
        this_00 = local_28;
        local_14 = uVar31;
      }
      else {
        if (uVar8 == 6) {
          uVar31 = 0;
          if (g_sound == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = pSVar17->field_0050 & 1;
          }
          if (uVar8 == 0) {
            local_14 = 0;
            local_20 = 0;
            goto cf_common_join_0053138B;
          }
          local_220.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_220;
          local_EAX_5605 = Library::MSVCRT::__setjmp3(local_220.jumpBuffer,0);
          if (local_EAX_5605 == 0) {
            if (g_sound == 0) {
              uVar31 = 0;
            }
            else {
              uVar31 = g_sndContext_0080765C->field_0050 & 1;
            }
            if (uVar31 != 0) {
              Library::DKW::SND::FUN_006b7e00((int)g_sndContext_0080765C,1,&local_48,&local_68);
            }
            uVar8 = (uint)(local_68 + local_48) >> 1;
          }
          else {
            uVar8 = 0;
          }
          if (g_sound == 0) {
            uVar31 = 0;
          }
          else {
            uVar31 = g_sndContext_0080765C->field_0050 & 1;
          }
          g_currentExceptionFrame = local_220.previous;
          if (uVar31 != 0) {
            uVar31 = (g_sndContext_0080765C->field_0064 - g_sndContext_0080765C->field_0060) + 1;
            goto LAB_0053108f;
          }
          goto LAB_0053108d;
        }
        if (uVar8 == 7) {
          uVar31 = 0;
          if (g_sound == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = pSVar17->field_0038 & 1;
          }
          if (uVar8 == 0) {
            local_14 = 0;
            local_20 = 0;
            goto cf_common_join_0053138B;
          }
          local_2a8.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_2a8;
          local_EAX_5376 = Library::MSVCRT::__setjmp3(local_2a8.jumpBuffer,0);
          if (local_EAX_5376 == 0) {
            if (g_sound == 0) {
              uVar31 = 0;
            }
            else {
              uVar31 = g_sndContext_0080765C->field_0038 & 1;
            }
            if (uVar31 != 0) {
              Library::DKW::SND::FUN_006b7e00((int)g_sndContext_0080765C,0,&local_58,&local_54);
            }
            uVar8 = (uint)(local_58 + local_54) >> 1;
          }
          else {
            uVar8 = 0;
          }
          if (g_sound == 0) {
            uVar31 = 0;
          }
          else {
            uVar31 = g_sndContext_0080765C->field_0038 & 1;
          }
          g_currentExceptionFrame = local_2a8.previous;
          if (uVar31 == 0) goto LAB_0053108d;
          uVar31 = (g_sndContext_0080765C->field_004C - g_sndContext_0080765C->field_0048) + 1;
          goto LAB_0053108f;
        }
      }
cf_common_join_0053138B:
      uVar16 = local_24 & 0xff;
      iVar10 = local_38 + uVar16 * 0xd + 0x29;
      /* ST_CALLSITE[005313B9]: CALL 0x00403ee0; direct=00403EE0 OptPanelTy::CreateSlider */
      uVar8 = CreateSlider(this_00,0x6d,iVar10,0xf9,iVar10,uVar16 + 0xc09f,0x1f,uVar31,local_20);
      this_00->field_01B5[uVar16] = uVar8;
      /* ST_CALLSITE[005313CE]: CALL 0x00405df3; direct=00405DF3 OptPanelTy::PaintVolume */
      PaintVolume(this_00,(char)local_24 - 4,(byte)uVar31);
      pSVar17 = g_sndContext_0080765C;
      bVar4 = (byte)local_8;
switchD_005311ec_caseD_3:
      bVar4 = bVar4 + 1;
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
    } while (bVar4 < 8);
    break;
  case CASE_8:
    /* ST_CALLSITE[00530B86]: CALL 0x00402680; direct=00402680 UPanelTy::CreateTab */
    uVar31 = UPanelTy::CreateTab((UPanelTy *)this_00,3,3 - DAT_0080733b,0x1d,0x20,0x72,0x11,0,0x12,
                                 0xc09f,0xc0af);
    this_00->field_01B5[0] = uVar31;
    /* ST_CALLSITE[00530BB8]: CALL 0x00402680; direct=00402680 UPanelTy::CreateTab */
    uVar31 = UPanelTy::CreateTab((UPanelTy *)this_00,3,2 - DAT_0080733a,0x99,0x20,0x72,0x11,0,0x12,
                                 0xc0a0,0xc0b0);
    this_00->field_01B5[1] = uVar31;
    /* ST_CALLSITE[00530BE4]: CALL 0x00402680; direct=00402680 UPanelTy::CreateTab */
    uVar31 = UPanelTy::CreateTab((UPanelTy *)this_00,2,DAT_00807349,0x5d,0x68,0x72,0x11,0,0x12,
                                 0xc0a2,0xc0b2);
    this_00->field_01B5[3] = uVar31;
    break;
  case CASE_9:
    local_18 = this_00->field_01B5;
    local_c = nullptr;
    iVar10 = 0x1b;
    local_1c = 6;
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(6));
    do {
      if (iVar10 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00530aa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (*(code *)(&PTR_LAB_00531ce8)[(int)local_c])();
        return;
      }
      uVar27 = 0;
      uVar22 = 0;
      pcVar28 = nullptr;
      iVar21 = (int)local_c + 0xc09f;
      uVar6 = 0;
      uVar24 = 0;
      sVar23 = 0;
      iVar29 = (int)local_c + 0xc0af;
      pCVar7 = thunk_FUN_00571240("BUT_BUTOPT",0);
      /* ST_CALLSITE[00530B35]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
      uVar31 = UPanelTy::CreateBut((UPanelTy *)this_00,3,1,0x1d,iVar10,1,pCVar7,iVar21,iVar29,sVar23
                                   ,uVar24,uVar6,pcVar28,uVar22,uVar27);
      iVar10 = iVar10 + 0x12;
      *local_18 = uVar31;
      local_c = (undefined4 *)((int)local_c + 1);
      local_18 = local_18 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
    local_1c = 0;
    break;
  case CASE_B:
    uVar32 = 0;
    uVar30 = 0;
    pcVar28 = nullptr;
    uVar27 = 0;
    uVar24 = 0;
    sVar23 = 0;
    uVar22 = 0xc0b0;
    uVar6 = 0xc0a0;
    pCVar7 = thunk_FUN_00571240("BUT_MEDIUM",0);
    /* ST_CALLSITE[00530725]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
    uVar31 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x7d,0x7d,1,pCVar7,uVar6,uVar22,sVar23,
                                 uVar24,uVar27,pcVar28,uVar30,uVar32);
    this_00->field_01B5[0] = uVar31;
    break;
  case CASE_C:
    iVar10 = this_00->field_003C;
    memset(local_11fc, 0, 0x878); /* compiler bulk-zero initialization */
    iVar29 = 0;
    local_11dc = iVar10 + 0x26;
    local_11fc[0] = 0;
    local_11fc[1] = 2;
    if (this_00->field_005C == 0) {
      local_11d8 = -this_00->field_0048;
    }
    else {
      local_11d8 = this_00->field_0044;
    }
    pcVar2 = this_00->field_017C;
    local_11d8 = local_11d8 + 0x1a;
    local_11fc[2] = 1;
    local_11fc[3] = this_00->field_02F9[2];
    local_11ec = 0xca;
    if (pcVar2->field_00A0 != 0) {
      FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar2);
    }
    local_11e8 = *(int *)&pcVar2->field_0x8a;
    local_11e0 = (undefined4)(0x6e / (longlong)local_11e8);
    local_11e4 = 1;
    local_11c0 = 2;
    local_11bc = 0x6332;
    local_114c = 4;
    local_1148 = 0;
    local_11c4 = this_00->field_0008;
    if (DAT_0080734c != '\0') {
      local_d80 = 1;
    }
    local_1144 = 2;
    local_1140[1] = 2;
    local_1140[0] = 0;
    local_1140[2] = this_00->field_003C + 0xf2;
    if (this_00->field_005C == 0) {
      local_1140[3] = -this_00->field_0048;
    }
    else {
      local_1140[3] = this_00->field_0044;
    }
    local_1140[3] = local_1140[3] + 100;
    local_1130 = 0x11;
    local_112c = 0x24;
    local_1030 = 500;
    local_102c = 0x32;
    local_10dc = 2;
    local_10d8 = 0x8165;
    local_10e0 = local_11c4;
    local_101c = FUN_0070aa70(g_cMf32_00806790,"BUT_MSLDN",0,1);
    local_1018 = Library::Ourlib::MFIMG::mfImgGetWidth(g_cMf32_00806790,0x12,"BUT_MSLDN",1);
    iVar10 = this_00->field_005C;
    local_1038 = 1;
    local_1034 = 1;
    local_fc4 = 2;
    local_fc0[2] = this_00->field_003C + 0xf2;
    piVar12 = local_1140;
    piVar19 = local_fc0;
    memmove(piVar19, piVar12, 0x17c); /* compiler REP MOVS byte copy */
    if (iVar10 == 0) {
      local_fc0[3] = -this_00->field_0048;
    }
    else {
      local_fc0[3] = this_00->field_0044;
    }
    local_fc0[3] = local_fc0[3] + 0x1b;
    local_fb0 = 0x11;
    local_fac = 0x24;
    local_f58 = 0x8164;
    local_e9c = FUN_0070aa70(g_cMf32_00806790,"BUT_MSLUP",0,1);
    local_e98 = Library::Ourlib::MFIMG::mfImgGetWidth(g_cMf32_00806790,0x12,"BUT_MSLUP",1);
    local_990 = 1;
    local_994 = 1;
    /* ST_CALLSITE[00531B6D]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,8,this_00->field_01B5,nullptr,local_11fc,0);
    uVar31 = this_00->field_01B5[0];
    this_00->field_0028 = 0x20;
    this_00->field_002C = 1;
    this_00->field_002E = 0;
    FUN_006e6080(this_00,2,uVar31,(undefined4 *)&this_00->field_0x18);
    break;
  case CASE_D:
    local_3c = 8;
    memset(local_cc, 0, 0x58); /* compiler bulk-zero initialization */
    iVar10 = 0;
    memset(local_1c48, 0, 0x1c0); /* compiler bulk-zero initialization */
    local_d = 0;
    local_18 = nullptr;
    local_1c = 0;
    puVar11 = local_1c48 + 1;
    do {
      if (local_18 == nullptr) {
        local_44 = 800;
        local_40 = 600;
      }
      else if (local_18 == (uint *)0x1) {
        local_44 = 0x400;
        local_40 = 0x300;
      }
      else if (local_18 == (uint *)0x2) {
        local_44 = 0x500;
        local_40 = 0x400;
      }
      local_c = (undefined4 *)((uint)local_c & 0xffffff00);
      puVar11[-1] = (uint)((int)local_18 + 1);
      *puVar11 = 2;
      local_24 = *(uint *)(DAT_0080877a + 4);
      if (0 < (int)local_24) {
        uVar31 = 0;
        do {
          iVar10 = DAT_0080877a + uVar31 * 0xc;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (((*(int *)(iVar10 + 8) == local_44) &&
              (*(int *)(DAT_0080877a + (uVar31 * 3 + 3) * 4) == local_40)) &&
             (*(int *)(iVar10 + 0x10) == 8)) {
            *puVar11 = (uint)(DAT_00807348 == local_d);
            break;
          }
          bVar4 = (char)local_c + 1;
          local_c = (undefined4 *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar4));
          uVar31 = (uint)bVar4;
        } while ((int)uVar31 < (int)local_24);
      }
      puVar11[2] = this_00->field_003C + 0x1d;
      if (this_00->field_005C == 0) {
        iVar10 = -this_00->field_0048;
      }
      else {
        iVar10 = this_00->field_0044;
      }
      puVar11[3] = local_1c + 0x13 + iVar10;
      puVar11[4] = 0x72;
      puVar11[5] = 0x11;
      local_d = local_d + 1;
      local_18 = (uint *)((int)local_18 + 1);
      local_1c = local_1c + 0x12;
      puVar11 = puVar11 + 0x1c;
    } while (local_d < 3);
    local_80 = (_DAT_00807348 & 0xff) + 1;
    local_bc = this_00->field_0008;
    local_84 = local_1c48;
    local_cc[0] = 1;
    local_cc[1] = 0;
    local_b8 = 2;
    local_b4 = 0xc09f;
    local_98 = 2;
    local_94 = 0xc0af;
    local_7c = 1;
    local_78 = 1;
    local_9c = local_bc;
    /* ST_CALLSITE[0053095A]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,5,this_00->field_01B5,nullptr,local_cc,0);
    uVar32 = 0;
    uVar30 = 0;
    pcVar28 = nullptr;
    uVar27 = 0;
    uVar24 = 0;
    sVar23 = 0;
    uVar22 = 0xc0b0;
    uVar6 = 0xc0a0;
    pCVar7 = thunk_FUN_00571240("BUT_BUTOPT",0);
    /* ST_CALLSITE[0053098D]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
    uVar31 = UPanelTy::CreateBut((UPanelTy *)this_00,1,0,0x1d,0x49,1,pCVar7,uVar6,uVar22,sVar23,
                                 uVar24,uVar27,pcVar28,uVar30,uVar32);
    uVar32 = 0;
    uVar30 = 0;
    pcVar28 = nullptr;
    uVar27 = 0;
    uVar24 = 0;
    sVar23 = 0;
    uVar22 = 0xc0b1;
    uVar6 = 0xc0a1;
    this_00->field_01B5[1] = uVar31;
    pCVar7 = thunk_FUN_00571240("BUT_BUTOPT",0);
    /* ST_CALLSITE[005309D5]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
    uVar31 = UPanelTy::CreateBut((UPanelTy *)this_00,3,(-(uint)(DAT_00807342 != 0) & 2) + 1,0x1d,
                                 0x5b,1,pCVar7,uVar6,uVar22,sVar23,uVar24,uVar27,pcVar28,uVar30,
                                 uVar32);
    this_00->field_01B5[2] = uVar31;
    /* ST_CALLSITE[00530A1D]: CALL 0x00403ee0; direct=00403EE0 OptPanelTy::CreateSlider */
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar31 = CreateSlider(this_00,0x94,0x70,*(int *)(this_00->field_018C + 2) + 0xaf,0x70,0xc0a2,3,
                          DAT_00807346 / 5 - 1,1);
    puVar9 = this_00->field_018C;
    this_00->field_01B5[3] = uVar31;
    /* ST_CALLSITE[00530A59]: CALL 0x00403ee0; direct=00403EE0 OptPanelTy::CreateSlider */
    uVar31 = CreateSlider(this_00,0x94,0x82,*(int *)(puVar9 + 2) + 0xaf,0x82,0xc0a3,3,
                          (uint)DAT_00807347,1);
    this_00->field_01B5[4] = uVar31;
    this_00->field_0305 = DAT_00807348;
  }
  if ((this_00->field_01A4 == CASE_1) || (this_00->field_01A9 == '\0')) {
    this_00->field_002C = 0;
    this_00->field_002E = 0;
  }
  else {
    this_00->field_002C = 1;
    this_00->field_002E = 0;
  }
  uVar31 = this_00->field_01AD[1];
  this_00->field_0028 = 0x20;
  FUN_006e6080(this_00,2,uVar31,(undefined4 *)&this_00->field_0x18);
  this_00->field_0028 = 5;
  local_8 = local_8 & 0xffffff00;
  do {
    if (this_00->field_01AD[local_8 & 0xff] != 0) {
      FUN_006e6080(this_00,2,this_00->field_01AD[local_8 & 0xff],(undefined4 *)&this_00->field_0x18);
    }
    bVar4 = (byte)local_8 + 1;
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
  } while (bVar4 < 2);
  g_currentExceptionFrame = local_110.previous;
  return;
}

