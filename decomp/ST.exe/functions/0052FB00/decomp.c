#include "../../pseudocode_runtime.h"


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
  char *pcVar6;
  int iVar6;
  size_t _Count;
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
  int iVar7;
  int local_EAX_4632;
  uint uVar8;
  int local_EAX_4865;
  uint uVar9;
  uint uVar10;
  int local_EAX_5376;
  int local_EAX_5605;
  int local_EAX_5906;
  int local_EAX_6096;
  byte bVar5;
  HANDLE pvVar11;
  undefined4 uVar12;
  LPSTR pCVar13;
  int iVar17;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  OptPanelTy *extraout_ECX;
  uint uVar14;
  ushort *puVar15;
  OptPanelTy *this_00;
  int iVar16;
  char *pcVar17;
  uint *puVar18;
  char *pcVar19;
  char *pcVar20;
  SNDContext *pSVar21;
  ccFntTy **ppcVar22;
  int *piVar23;
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
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_stack_ffffffb8;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_stack_ffffffbc;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_stack_ffffffc0;
  int iVar24;
  undefined4 uVar25;
  short sVar26;
  OptPanelTy *pOVar27;
  ushort uVar28;
  UINT UVar29;
  RecoveredSourceFamily_dibcopy *pRVar30;
  SNDContext *pSVar31;
  undefined4 uVar32;
  char *pcVar33;
  size_t sVar34;
  int iVar35;
  undefined4 *puVar36;
  undefined4 uVar37;
  uint uVar38;
  int *piVar39;
  undefined4 uVar40;
  size_t sVar41;
  char *resourceString;
  char *pcVar7_mg32;

  Library::MSVCRT::FUN_0072da40();
  local_110.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_110;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  this_00 = extraout_ECX;
  local_EAX_51 = Library::MSVCRT::__setjmp3(local_110.jumpBuffer,0);
  if (local_EAX_51 != 0) {
    g_currentExceptionFrame = local_110.previous;
    iVar17 = ReportDebugMessage("E:\\__titans\\Andrey\\optpanel.cpp",0x350,0,local_EAX_51,
                                "%s");
    if (iVar17 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_51,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x350);
    return;
  }
  iVar16 = 10;
  puVar18 = this_00->field_01B5;
  do {
    if (*puVar18 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar18);
    }
    *puVar18 = 0;
    puVar18 = puVar18 + 1;
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0,'\x01',(byte *)this_00->field_0184
        );
  ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x31,2,0xc6,0xc);
  switch(this_00->field_01A4) {
  case CASE_1:
    uVar38 = 0;
    iVar16 = -2;
    UVar29 = 16000;
    break;
  case CASE_2:
    uVar38 = 0;
    iVar16 = -2;
    UVar29 = 0x3e87;
    break;
  case CASE_3:
    UVar29 = 0x3e81;
    goto LAB_00530592;
  case CASE_4:
    UVar29 = 0x3e82;
LAB_00530592:
    uVar38 = 0;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mg27 = LoadResourceString(UVar29,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mg27,iVar16,iVar35,uVar38);
    puVar15 = this_00->field_0190;
LAB_005305a9:
    pRVar30 = (RecoveredSourceFamily_dibcopy *)this_00->field_0068;
LAB_005305b4:
    DibPut(pRVar30,0x1d,0x13,'\x01',(byte *)puVar15);
    goto cf_common_join_005305BC;
  case CASE_5:
  case CASE_B:
    uVar38 = 0;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mg10 = LoadResourceString(0x3ea8,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mg10,iVar16,iVar35,uVar38);
    ccFntTy::SetSurf(this_00->field_0180,this_00->field_0068,0,0x1d,0x13,0xee,0x6a);
    switch(this_00->field_01AB) {
    case CASE_1:
    case CASE_2:
    case CASE_6:
      pcVar33 = local_984;
      for (iVar16 = 0x41; iVar16 != 0; iVar16 = iVar16 + -1) {
        pcVar33[0] = '\0';
        pcVar33[1] = '\0';
        pcVar33[2] = '\0';
        pcVar33[3] = '\0';
        pcVar33 = pcVar33 + 4;
      }
      local_EAX_338 = FUN_00711110(this_00->field_0180,&this_00->field_0x1f5);
      if (local_EAX_338 < 0xee) {
LAB_0052fd4a:
        uVar38 = 0xffffffff;
        pcVar33 = &this_00->field_0x1f5;
        do {
          pcVar6 = pcVar33;
          if (uVar38 == 0) break;
          uVar38 = uVar38 - 1;
          pcVar6 = pcVar33 + 1;
          cVar1 = *pcVar33;
          pcVar33 = pcVar6;
        } while (cVar1 != '\0');
        uVar38 = ~uVar38;
        pcVar33 = pcVar6 + -uVar38;
        pcVar6 = local_984;
        for (uVar14 = uVar38 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar33;
          pcVar33 = pcVar33 + 4;
          pcVar6 = pcVar6 + 4;
        }
      }
      else {
        iVar16 = -1;
        pcVar33 = &this_00->field_0x1f5;
        do {
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          cVar1 = *pcVar33;
          pcVar33 = pcVar33 + 1;
        } while (cVar1 != '\0');
        pcVar33 = (char *)0xa;
        do {
          pcVar6 = local_984;
          pcVar33 = pcVar33 + 1;
          Library::MSVCRT::_strncpy(pcVar6,&this_00->field_0x1f5,(size_t)pcVar33);
          uVar38 = 0xffffffff;
          pcVar17 = &CHAR___007c7278;
          do {
            pcVar20 = pcVar17;
            if (uVar38 == 0) break;
            uVar38 = uVar38 - 1;
            pcVar20 = pcVar17 + 1;
            cVar1 = *pcVar17;
            pcVar17 = pcVar20;
          } while (cVar1 != '\0');
          uVar38 = ~uVar38;
          iVar16 = -1;
          pcVar17 = local_984;
          do {
            pcVar19 = pcVar17;
            if (iVar16 == 0) break;
            iVar16 = iVar16 + -1;
            pcVar19 = pcVar17 + 1;
            cVar1 = *pcVar17;
            pcVar17 = pcVar19;
          } while (cVar1 != '\0');
          pcVar17 = pcVar20 + -uVar38;
          pcVar20 = pcVar19 + -1;
          for (uVar14 = uVar38 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
            pcVar20 = pcVar20 + 4;
          }
          pcVar19 = local_984;
          for (uVar38 = uVar38 & 3; uVar38 != 0; uVar38 = uVar38 - 1) {
            *pcVar20 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar20 = pcVar20 + 1;
          }
          local_EAX_465 = FUN_00711110(this_00->field_0180,pcVar19);
        } while ((local_EAX_465 < 0xee) && ((int)pcVar33 < (int)pcVar6));
        if (pcVar33 == pcVar6) goto LAB_0052fd4a;
        pcVar6 = local_984;
        for (iVar16 = 0x41; iVar16 != 0; iVar16 = iVar16 + -1) {
          pcVar6[0] = '\0';
          pcVar6[1] = '\0';
          pcVar6[2] = '\0';
          pcVar6[3] = '\0';
          pcVar6 = pcVar6 + 4;
        }
        Library::MSVCRT::_strncpy(local_984,&this_00->field_0x1f5,(size_t)(pcVar33 + -3));
        uVar38 = 0xffffffff;
        pcVar33 = &CHAR___007c7274;
        do {
          pcVar6 = pcVar33;
          if (uVar38 == 0) break;
          uVar38 = uVar38 - 1;
          pcVar6 = pcVar33 + 1;
          cVar1 = *pcVar33;
          pcVar33 = pcVar6;
        } while (cVar1 != '\0');
        uVar38 = ~uVar38;
        iVar16 = -1;
        pcVar33 = local_984;
        do {
          pcVar17 = pcVar33;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar17 = pcVar33 + 1;
          cVar1 = *pcVar33;
          pcVar33 = pcVar17;
        } while (cVar1 != '\0');
        pcVar33 = pcVar6 + -uVar38;
        pcVar6 = pcVar17 + -1;
        for (uVar14 = uVar38 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar33;
          pcVar33 = pcVar33 + 4;
          pcVar6 = pcVar6 + 4;
        }
      }
      UVar29 = this_00->field_01A5;
      for (uVar38 = uVar38 & 3; uVar38 != 0; uVar38 = uVar38 - 1) {
        *pcVar6 = *pcVar33;
        pcVar33 = pcVar33 + 1;
        pcVar6 = pcVar6 + 1;
      }
      pcVar7_mg26 = LoadResourceString(UVar29,g_hINSTANCE_00807618);
      wsprintfA(&this_00->field_006C,pcVar7_mg26);
      break;
    default:
      pcVar7_mg1D = LoadResourceString(this_00->field_01A5,g_hINSTANCE_00807618);
      uVar38 = 0xffffffff;
      do {
        pcVar33 = pcVar7_mg1D;
        if (uVar38 == 0) break;
        uVar38 = uVar38 - 1;
        pcVar33 = pcVar7_mg1D + 1;
        cVar1 = *pcVar7_mg1D;
        pcVar7_mg1D = pcVar33;
      } while (cVar1 != '\0');
      uVar38 = ~uVar38;
      pcVar33 = pcVar33 + -uVar38;
      pcVar6 = &this_00->field_006C;
      memmove(pcVar6, pcVar33, uVar38); /* compiler REP MOVS byte copy */
      uVar14 = 0;
      break;
    case CASE_7:
      pcVar33 = local_880;
      for (iVar16 = 0x41; iVar16 != 0; iVar16 = iVar16 + -1) {
        pcVar33[0] = '\0';
        pcVar33[1] = '\0';
        pcVar33[2] = '\0';
        pcVar33[3] = '\0';
        pcVar33 = pcVar33 + 4;
      }
      iVar16 = 0;
      pcVar33 = nullptr;
      if (DAT_00808aaf != 0) {
        pcVar6 = &CHAR_00h_00808ab0;
        do {
          pcVar33 = pcVar6;
          if (*(int *)(pcVar6 + 0x40) == g_playSystem_00802A38->field_00F4) break;
          iVar16 = iVar16 + 1;
          pcVar6 = pcVar6 + 0x9c;
          pcVar33 = nullptr;
        } while (iVar16 < (int)(uint)DAT_00808aaf);
      }
      if (pcVar33 == nullptr) {
        pcVar6 = &CHAR___007c7274;
LAB_0052ff02:
        uVar38 = 0xffffffff;
        do {
          pcVar33 = pcVar6;
          if (uVar38 == 0) break;
          uVar38 = uVar38 - 1;
          pcVar33 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar33;
        } while (cVar1 != '\0');
        uVar38 = ~uVar38;
        pcVar33 = pcVar33 + -uVar38;
        pcVar6 = local_880;
        for (uVar14 = uVar38 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar33;
          pcVar33 = pcVar33 + 4;
          pcVar6 = pcVar6 + 4;
        }
      }
      else {
        pcVar6 = pcVar33;
        iVar6 = FUN_00711110(this_00->field_0180,pcVar33);
        if (iVar6 < 200) goto LAB_0052ff02;
        iVar16 = -1;
        do {
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          cVar1 = *pcVar33;
          pcVar33 = pcVar33 + 1;
        } while (cVar1 != '\0');
        _Count = 10;
        do {
          sVar41 = _Count;
          _Count = sVar41 + 1;
          Library::MSVCRT::_strncpy(local_880,pcVar6,_Count);
          uVar38 = 0xffffffff;
          pcVar33 = &CHAR___007c7278;
          do {
            pcVar17 = pcVar33;
            if (uVar38 == 0) break;
            uVar38 = uVar38 - 1;
            pcVar17 = pcVar33 + 1;
            cVar1 = *pcVar33;
            pcVar33 = pcVar17;
          } while (cVar1 != '\0');
          uVar38 = ~uVar38;
          iVar16 = -1;
          pcVar33 = local_880;
          do {
            pcVar20 = pcVar33;
            if (iVar16 == 0) break;
            iVar16 = iVar16 + -1;
            pcVar20 = pcVar33 + 1;
            cVar1 = *pcVar33;
            pcVar33 = pcVar20;
          } while (cVar1 != '\0');
          pcVar33 = pcVar17 + -uVar38;
          pcVar17 = pcVar20 + -1;
          for (uVar14 = uVar38 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar33;
            pcVar33 = pcVar33 + 4;
            pcVar17 = pcVar17 + 4;
          }
          pcVar20 = local_880;
          for (uVar38 = uVar38 & 3; uVar38 != 0; uVar38 = uVar38 - 1) {
            *pcVar17 = *pcVar33;
            pcVar33 = pcVar33 + 1;
            pcVar17 = pcVar17 + 1;
          }
          sVar34 = 0x52fe7b;
          local_EAX_886 = FUN_00711110(this_00->field_0180,pcVar20);
        } while ((local_EAX_886 < 200) && ((int)_Count < (int)sVar34));
        if (_Count == sVar34) goto LAB_0052ff02;
        pcVar33 = local_880;
        for (iVar16 = 0x41; iVar16 != 0; iVar16 = iVar16 + -1) {
          pcVar33[0] = '\0';
          pcVar33[1] = '\0';
          pcVar33[2] = '\0';
          pcVar33[3] = '\0';
          pcVar33 = pcVar33 + 4;
        }
        Library::MSVCRT::_strncpy(local_880,pcVar6,sVar41 - 2);
        uVar38 = 0xffffffff;
        pcVar33 = &CHAR___007c7274;
        do {
          pcVar6 = pcVar33;
          if (uVar38 == 0) break;
          uVar38 = uVar38 - 1;
          pcVar6 = pcVar33 + 1;
          cVar1 = *pcVar33;
          pcVar33 = pcVar6;
        } while (cVar1 != '\0');
        uVar38 = ~uVar38;
        iVar16 = -1;
        pcVar33 = local_880;
        do {
          pcVar17 = pcVar33;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar17 = pcVar33 + 1;
          cVar1 = *pcVar33;
          pcVar33 = pcVar17;
        } while (cVar1 != '\0');
        pcVar33 = pcVar6 + -uVar38;
        pcVar6 = pcVar17 + -1;
        for (uVar14 = uVar38 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar33;
          pcVar33 = pcVar33 + 4;
          pcVar6 = pcVar6 + 4;
        }
      }
      UVar29 = this_00->field_01A5;
      for (uVar38 = uVar38 & 3; uVar38 != 0; uVar38 = uVar38 - 1) {
        *pcVar6 = *pcVar33;
        pcVar33 = pcVar33 + 1;
        pcVar6 = pcVar6 + 1;
      }
      pcVar7_mg1C = LoadResourceString(UVar29,g_hINSTANCE_00807618);
      wsprintfA(&this_00->field_006C,pcVar7_mg1C);
      break;
    case CASE_A:
      pcVar7_mg11 = LoadResourceString(this_00->field_01A5,g_hINSTANCE_00807618);
      wsprintfA(&this_00->field_006C,pcVar7_mg11);
    }
    if (DAT_0080874e == '\x03') {
      uVar38 = 5;
    }
    else {
      uVar38 = -(uint)(DAT_0080874e != '\x01') & 7;
    }
    ccFntTy::WrTxt(this_00->field_0180,&this_00->field_006C,-2,-1,uVar38,-1,-1);
    goto cf_common_join_005305BC;
  case CASE_6:
    uVar38 = 0;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mgC = LoadResourceString(0x3e8a,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mgC,iVar16,iVar35,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x6b,0x6e,0xa0,0xb);
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mgD = LoadResourceString(0x3ee4,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mgD,iVar16,iVar35,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x61,0x4e,0xb);
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar35 = -1;
    iVar16 = -3;
    pcVar7_mgE = LoadResourceString(0x3eea,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mgE,iVar16,iVar35,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x77,0x4e,0xb);
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar35 = -1;
    iVar16 = -3;
    pcVar7_mgF = LoadResourceString(0x3eeb,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mgF,iVar16,iVar35,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x84,0x4e,0xb);
    goto LAB_00530554;
  case CASE_7:
    uVar38 = 0;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mg8 = LoadResourceString(0x3e8b,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mg8,iVar16,iVar35,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x61,0x4e,0xb);
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar35 = -1;
    iVar16 = -3;
    pcVar7_mg9 = LoadResourceString(0x3ee9,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mg9,iVar16,iVar35,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x6b,0x6e,0xa0,0xb);
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mgA = LoadResourceString(0x3ee4,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mgA,iVar16,iVar35,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x77,0x4e,0xb);
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar35 = -1;
    iVar16 = -3;
    pcVar7_mgB = LoadResourceString(0x3eeb,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mgB,iVar16,iVar35,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x84,0x4e,0xb);
LAB_00530554:
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar16 = -3;
    UVar29 = 0x3eec;
    break;
  case CASE_8:
    uVar38 = 0;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mg5 = LoadResourceString(0x3e8c,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mg5,iVar16,iVar35,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x15,0x77,0xc);
    uVar38 = 0;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mg6 = LoadResourceString(0x3eef,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mg6,iVar16,iVar35,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x94,0x15,0x77,0xc);
    uVar38 = 0;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mg7 = LoadResourceString(0x3eed,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mg7,iVar16,iVar35,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x5b,0xf0,0xc);
    uVar38 = 0;
    iVar16 = -2;
    UVar29 = 0x3f07;
    break;
  case CASE_9:
    uVar38 = 0;
    iVar16 = -2;
    UVar29 = 0x3e8d;
    break;
  default:
    goto cf_common_join_005305BC;
  case CASE_C:
    uVar38 = 0;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mg4 = LoadResourceString(0x3e89,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mg4,iVar16,iVar35,uVar38);
    puVar15 = this_00->field_0194;
    goto LAB_005305a9;
  case CASE_D:
    uVar38 = 0;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mg1 = LoadResourceString(0x3e88,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mg1,iVar16,iVar35,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x6d,0x77,0x11);
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mg2 = LoadResourceString(0x3ef9,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mg2,iVar16,iVar35,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x7f,0x77,0x11);
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mg3 = LoadResourceString(0x3efa,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mg3,iVar16,iVar35,uVar38);
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0xaa,0x6f,'\x01',
           (byte *)this_00->field_018C);
    resourceString = &this_00->field_006C;
    wsprintfA(resourceString,"%d");
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0xaa,0x6f,
                     *(int *)(this_00->field_018C + 2),*(int *)(this_00->field_018C + 4));
    ccFntTy::WrStr(this_00->field_017C,resourceString,-2,-1,0);
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0xaa,0x81,'\x01',
           (byte *)this_00->field_018C);
    wsprintfA(resourceString,"%d");
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0xaa,0x81,
                     *(int *)(this_00->field_018C + 2),*(int *)(this_00->field_018C + 4));
    ccFntTy::WrStr(this_00->field_017C,resourceString,-2,-1,0);
    goto cf_common_join_005305BC;
  case CASE_E:
    uVar38 = 0;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mg0 = LoadResourceString(0x3e94,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_017C,pcVar7_mg0,iVar16,iVar35,uVar38);
    puVar15 = this_00->field_0190;
    pRVar30 = (RecoveredSourceFamily_dibcopy *)this_00->field_0068;
    goto LAB_005305b4;
  }
  iVar35 = -1;
  pcVar7_mg28 = LoadResourceString(UVar29,g_hINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_017C,pcVar7_mg28,iVar16,iVar35,uVar38);
cf_common_join_005305BC:
  switch(this_00->field_01A4) {
  case CASE_1:
    bVar5 = 0;
    uVar38 = 0;
    do {
      iVar16 = 1;
      if (((DAT_00808783 == '\x03') && (bVar5 != 0)) &&
         ((bVar5 < 3 || ((bVar5 == 4 && (DAT_008067a0 != '\0')))))) {
        iVar16 = 0;
      }
      uVar32 = 0;
      uVar25 = 0;
      pcVar33 = nullptr;
      uVar12 = 0;
      uVar28 = 0;
      iVar35 = uVar38 + 0xc0af;
      sVar26 = 0;
      iVar7 = uVar38 + 0xc09f;
      pCVar13 = thunk_FUN_00571240("BUT_BUTOPT",0);
      local_4c = 0x530655;
      uVar14 = UPanelTy::CreateBut((UPanelTy *)this_00,1,iVar16,0x1d,uVar38 * 0x12 + 0x13,1,pCVar13,
                                   iVar7,iVar35,sVar26,uVar28,uVar12,pcVar33,uVar25,uVar32);
      this_00->field_01B5[uVar38] = uVar14;
      bVar5 = (char)uVar38 + 1;
      uVar38 = (uint)bVar5;
    } while (bVar5 < 7);
    break;
  case CASE_2:
    iVar16 = 0xc09f;
    iVar35 = 0x25;
    do {
      uVar25 = 0;
      puVar36 = nullptr;
      pcVar33 = nullptr;
      uVar12 = 0;
      uVar28 = 0;
      iVar7 = iVar16 + 0x10;
      sVar26 = 0;
      iVar24 = iVar16;
      pCVar13 = thunk_FUN_00571240("BUT_BUTOPT",0);
      local_4c = 0x530784;
      uVar12 = UPanelTy::CreateBut((UPanelTy *)this_00,1,1,0x1d,iVar35,1,pCVar13,iVar24,iVar7,sVar26
                                   ,uVar28,uVar12,pcVar33,puVar36,uVar25);
      iVar16 = iVar16 + 1;
      iVar35 = iVar35 + 0x12;
      *puVar36 = uVar12;
    } while (pcVar33 != (char *)0x1);
    break;
  case CASE_3:
  case CASE_4:
  case CASE_E:
    if (this_00->field_01A4 != CASE_E) {
      if (this_00->field_01DD != (HANDLE)0x0) {
        FindCloseChangeNotification(this_00->field_01DD);
        this_00->field_01DD = (HANDLE)0x0;
      }
      uVar38 = 0xffffffff;
      pcVar33 = &CHAR_00h_00807680;
      do {
        pcVar6 = pcVar33;
        if (uVar38 == 0) break;
        uVar38 = uVar38 - 1;
        pcVar6 = pcVar33 + 1;
        cVar1 = *pcVar33;
        pcVar33 = pcVar6;
      } while (cVar1 != '\0');
      uVar38 = ~uVar38;
      pcVar33 = pcVar6 + -uVar38;
      pcVar6 = &this_00->field_006C;
      memmove(pcVar6, pcVar33, uVar38); /* compiler REP MOVS byte copy */
      uVar14 = 0;
      uVar38 = 0xffffffff;
      pcVar7_mg32 = PTR_s_SAVEGAME__0079acec;
      do {
        pcVar33 = pcVar7_mg32;
        if (uVar38 == 0) break;
        uVar38 = uVar38 - 1;
        pcVar33 = pcVar7_mg32 + 1;
        cVar1 = *pcVar7_mg32;
        pcVar7_mg32 = pcVar33;
      } while (cVar1 != '\0');
      uVar38 = ~uVar38;
      iVar16 = -1;
      pcVar6 = &this_00->field_006C;
      do {
        pcVar17 = pcVar6;
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        pcVar17 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar17;
      } while (cVar1 != '\0');
      pcVar33 = pcVar33 + -uVar38;
      pcVar6 = pcVar17 + -1;
      memmove(pcVar6, pcVar33, uVar38); /* compiler REP MOVS byte copy */
      uVar14 = 0;
      uVar38 = 0xffffffff;
      pcVar33 = &CHAR_00h_00807ddd;
      do {
        pcVar6 = pcVar33;
        if (uVar38 == 0) break;
        uVar38 = uVar38 - 1;
        pcVar6 = pcVar33 + 1;
        cVar1 = *pcVar33;
        pcVar33 = pcVar6;
      } while (cVar1 != '\0');
      uVar38 = ~uVar38;
      iVar16 = -1;
      pcVar33 = &this_00->field_006C;
      do {
        pcVar17 = pcVar33;
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        pcVar17 = pcVar33 + 1;
        cVar1 = *pcVar33;
        pcVar33 = pcVar17;
      } while (cVar1 != '\0');
      pcVar33 = pcVar6 + -uVar38;
      pcVar6 = pcVar17 + -1;
      memmove(pcVar6, pcVar33, uVar38); /* compiler REP MOVS byte copy */
      FUN_006b78c0(&this_00->field_006C,&this_00->field_006C);
      pvVar11 = FindFirstChangeNotificationA(&this_00->field_006C,0,1);
      this_00->field_01DD = pvVar11;
      if (pvVar11 == (HANDLE)0xffffffff) {
        this_00->field_01DD = (HANDLE)0x0;
      }
    }
    iVar16 = this_00->field_005C;
    memset(local_77c, 0, 0x4d4); /* compiler bulk-zero initialization */
    local_77c[0] = 0;
    local_77c[2] = this_00->field_003C + 0x26;
    if (iVar16 == 0) {
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
    if (iVar16 == 0) {
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
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,7,this_00->field_01B5,nullptr,local_77c,0);
    if ((this_00->field_005C == 0) || (uVar12 = 0x55, DAT_0080734c == '\0')) {
      uVar12 = 0x56;
    }
    uVar38 = this_00->field_01B5[0];
    this_00->field_0028 = uVar12;
    if (uVar38 != 0) {
      FUN_006e6080(this_00,&DAT_80000002,uVar38,(undefined4 *)&this_00->field_0x18);
    }
    if (this_00->field_01A4 == CASE_3) {
      pcVar2 = this_00->field_017C;
      ppcVar22 = local_1a88;
      for (iVar16 = 0x223; iVar16 != 0; iVar16 = iVar16 + -1) {
        *ppcVar22 = nullptr;
        ppcVar22 = ppcVar22 + 1;
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
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,6,this_00->field_01B5 + 1,nullptr,
                 local_1a88,1);
    }
    uVar40 = 0;
    uVar37 = 0;
    pcVar33 = nullptr;
    uVar32 = 0;
    uVar28 = 0;
    sVar26 = 0;
    uVar25 = 0xc0b1;
    uVar12 = 0xc0a1;
    if (this_00->field_01A4 == CASE_E) {
      pCVar13 = thunk_FUN_00571240("BUT_MEDIUM",0);
      local_4c = 0x5318f5;
      uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x78,0x7d,1,pCVar13,uVar12,uVar25,sVar26,
                                   uVar28,uVar32,pcVar33,uVar37,uVar40);
      this_00->field_01B5[2] = uVar38;
      PrepAsses(this_00);
    }
    else {
      pCVar13 = thunk_FUN_00571240("BUT_MEDIUM",0);
      local_4c = 0x531882;
      uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x5d,0x7c,1,pCVar13,uVar12,uVar25,sVar26,
                                   uVar28,uVar32,pcVar33,uVar37,uVar40);
      uVar40 = 0;
      uVar37 = 0;
      pcVar33 = nullptr;
      uVar32 = 0;
      uVar28 = 0;
      sVar26 = 0;
      uVar25 = 0xc0b2;
      uVar12 = 0xc0a2;
      this_00->field_01B5[2] = uVar38;
      pCVar13 = thunk_FUN_00571240("BUT_MEDIUM",0);
      local_4c = 0x5318c2;
      uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x94,0x7c,1,pCVar13,uVar12,uVar25,sVar26,
                                   uVar28,uVar32,pcVar33,uVar37,uVar40);
      this_00->field_01B5[3] = uVar38;
      STPiece<0,2>(uVar38) = this_00->field_01E1;
      STPiece<2,2>(uVar38) = this_00->field_01E3;
      PrepFiles(this_00,uVar38);
    }
    break;
  case CASE_5:
    uVar40 = 0;
    uVar37 = 0;
    pcVar33 = nullptr;
    uVar32 = 0;
    uVar28 = 0;
    sVar26 = 0;
    uVar25 = 0xc0af;
    uVar12 = 0xc09f;
    pCVar13 = thunk_FUN_00571240("BUT_MEDIUM",0);
    local_4c = 0x5306a8;
    uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x5e,0x7d,1,pCVar13,uVar12,uVar25,sVar26,
                                 uVar28,uVar32,pcVar33,uVar37,uVar40);
    uVar40 = 0;
    uVar37 = 0;
    pcVar33 = nullptr;
    uVar32 = 0;
    uVar28 = 0;
    sVar26 = 0;
    uVar25 = 0xc0b0;
    uVar12 = 0xc0a0;
    this_00->field_01B5[0] = uVar38;
    pCVar13 = thunk_FUN_00571240("BUT_MEDIUM",0);
    local_4c = 0x5306e8;
    uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x97,0x7d,1,pCVar13,uVar12,uVar25,sVar26,
                                 uVar28,uVar32,pcVar33,uVar37,uVar40);
    this_00->field_01B5[1] = uVar38;
    break;
  case CASE_6:
    iVar16 = 0xc09f;
    iVar35 = 0x16;
    do {
      uVar12 = 0;
      puVar36 = nullptr;
      pcVar33 = nullptr;
      uVar38 = 0;
      uVar28 = 0;
      bVar5 = '\x01' << ((char)iVar16 + 0x61U & 0x1f) & STPiece<1,1>(DAT_00807300);
      iVar7 = iVar16 + 0x10;
      pOVar27 = nullptr;
      iVar24 = iVar16;
      pCVar13 = thunk_FUN_00571240("BUT_BUTOPT",0);
      local_4c = 0x530c65;
      uVar12 = UPanelTy::CreateBut((UPanelTy *)this_00,3,(-(uint)(bVar5 != 0) & 2) + 1,0x1d,iVar35,1
                                   ,pCVar13,iVar24,iVar7,(short)pOVar27,uVar28,uVar38,pcVar33,
                                   puVar36,uVar12);
      iVar16 = iVar16 + 1;
      iVar35 = iVar35 + 0x12;
      *puVar36 = uVar12;
    } while (pcVar33 != (char *)0x1);
    bVar5 = 5;
    do {
      piVar39 = (int *)0x1;
      uVar14 = 4;
      if (bVar5 != 5) {
        uVar14 = (uint)bVar5;
      }
      uVar9 = (bVar5 != 5) - 1 & 4;
      if (bVar5 == 5) {
        uVar38 = ((DAT_0080730e + 4000) * 0x1f) / 0xfa1;
      }
      else if (bVar5 == 6) {
        uVar38 = 0;
        if (g_sound == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = g_sndContext_0080765C->field_0050 & 1;
        }
        if (uVar10 == 0) {
          piVar39 = nullptr;
        }
        else {
          piVar39 = nullptr;
          local_264.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_264;
          local_EAX_4865 = Library::MSVCRT::__setjmp3(local_264.jumpBuffer,0);
          if (local_EAX_4865 == 0) {
            if (g_sound == 0) {
              uVar10 = 0;
            }
            else {
              uVar10 = g_sndContext_0080765C->field_0050 & 1;
            }
            if (uVar10 != 0) {
              piVar39 = &local_70;
              uVar9 = 0x530e3a;
              Library::DKW::SND::FUN_006b7e00((int)g_sndContext_0080765C,1,&local_74,piVar39);
            }
            uVar10 = (uint)(local_74 + local_70) >> 1;
          }
          else {
            uVar10 = 0;
          }
          if (g_sound == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = g_sndContext_0080765C->field_0050 & 1;
          }
          g_currentExceptionFrame = local_264.previous;
          this_00 = pOVar27;
          if (uVar8 != 0) {
            iVar16 = g_sndContext_0080765C->field_0064;
            iVar35 = g_sndContext_0080765C->field_0060;
LAB_00530d9d:
            uVar38 = (iVar16 - iVar35) + 1;
            this_00 = pOVar27;
          }
LAB_00530da0:
          uVar38 = (uVar10 * 0x1f) / uVar38;
        }
      }
      else if (bVar5 == 7) {
        uVar38 = 0;
        if (g_sound == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = g_sndContext_0080765C->field_0038 & 1;
        }
        if (uVar10 != 0) {
          piVar39 = nullptr;
          local_154.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_154;
          local_EAX_4632 = Library::MSVCRT::__setjmp3(local_154.jumpBuffer,0);
          if (local_EAX_4632 == 0) {
            if (g_sound == 0) {
              uVar10 = 0;
            }
            else {
              uVar10 = g_sndContext_0080765C->field_0038 & 1;
            }
            if (uVar10 != 0) {
              piVar39 = &local_6c;
              uVar9 = 0x530d50;
              Library::DKW::SND::FUN_006b7e00((int)g_sndContext_0080765C,0,&local_60,piVar39);
            }
            uVar10 = (uint)(local_60 + local_6c) >> 1;
          }
          else {
            uVar10 = 0;
          }
          if (g_sound == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = g_sndContext_0080765C->field_0038 & 1;
          }
          g_currentExceptionFrame = local_154.previous;
          this_00 = pOVar27;
          if (uVar8 != 0) {
            iVar16 = g_sndContext_0080765C->field_004C;
            iVar35 = g_sndContext_0080765C->field_0048;
            goto LAB_00530d9d;
          }
          goto LAB_00530da0;
        }
        piVar39 = nullptr;
      }
      uVar14 = uVar14 & 0xff;
      iVar16 = uVar9 + uVar14 * 0xd + 0x29;
      pOVar27 = (OptPanelTy *)0xf9;
      uVar9 = CreateSlider(this_00,0x6d,iVar16,0xf9,iVar16,uVar14 + 0xc09f,0x1f,uVar38,(int)piVar39);
      this_00->field_01B5[uVar14] = uVar9;
      PaintVolume(this_00,(char)iVar16 - 4,(byte)uVar38);
      bVar5 = bVar5 + 1;
    } while (bVar5 < 8);
    break;
  case CASE_7:
    if ((DAT_00807300 & 0xff) == 1) {
      bVar5 = 0;
    }
    else if ((DAT_00807300 & 0xff) == 2) {
      bVar5 = 2;
    }
    else {
      bVar5 = 1;
    }
    uVar38 = 0xc0af;
    pOVar27 = (OptPanelTy *)0xe9;
    uVar14 = UPanelTy::CreateTab((UPanelTy *)this_00,3,bVar5,0x1d,0x16,0xe9,0x11,0,0x12,0xc09f,
                                 0xc0af);
    this_00->field_01B5[0] = uVar14;
    bVar5 = 5;
    pSVar21 = g_sndContext_0080765C;
    do {
      pSVar31 = (SNDContext *)0x1;
      uVar14 = 4;
      if (bVar5 != 5) {
        uVar14 = (uint)bVar5;
      }
      uVar9 = (bVar5 != 5) - 1 & 4;
      if (bVar5 == 5) {
        if ((char)DAT_00807300 == '\x02') {
          if (g_sound == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = pSVar21->field_0080 & 1;
          }
          if (uVar10 == 0) {
            uVar38 = 0;
            pSVar31 = nullptr;
            goto cf_common_join_0053138B;
          }
        }
        if ((char)DAT_00807300 == '\x04') {
          if (g_sound == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = pSVar21->field_0068 & 1;
          }
          if (uVar10 != 0) goto LAB_005311d8;
switchD_005311ec_caseD_1:
          uVar38 = 0;
          pSVar31 = nullptr;
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
              uVar38 = 0;
            }
            else {
              uVar38 = g_sndContext_0080765C->field_0080 & 1;
            }
            if (uVar38 != 0) {
              uVar14 = 0x53124e;
              pSVar31 = g_sndContext_0080765C;
              Library::DKW::SND::FUN_006b7e00((int)g_sndContext_0080765C,3,&local_4c,&local_50);
            }
            uVar10 = (uint)(local_50 + local_4c) >> 1;
          }
          else {
            uVar10 = 0;
          }
          if (g_sound == 0) {
            uVar38 = 0;
          }
          else {
            uVar38 = g_sndContext_0080765C->field_0080 & 1;
          }
          g_currentExceptionFrame = local_198.previous;
          if (uVar38 == 0) {
LAB_0053108d:
            uVar38 = 0;
            this_00 = pOVar27;
          }
          else {
            uVar38 = (g_sndContext_0080765C->field_0094 - g_sndContext_0080765C->field_0090) + 1;
            this_00 = pOVar27;
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
              uVar38 = 0;
            }
            else {
              uVar38 = g_sndContext_0080765C->field_0068 & 1;
            }
            if (uVar38 != 0) {
              uVar14 = 0x531309;
              pSVar31 = g_sndContext_0080765C;
              Library::DKW::SND::FUN_006b7e00((int)g_sndContext_0080765C,2,&local_64,&local_5c);
            }
            uVar10 = (uint)(local_64 + local_5c) >> 1;
          }
          else {
            uVar10 = 0;
          }
          if (g_sound == 0) {
            uVar38 = 0;
          }
          else {
            uVar38 = g_sndContext_0080765C->field_0068 & 1;
          }
          g_currentExceptionFrame = local_1dc.previous;
          if (uVar38 == 0) goto LAB_0053108d;
          uVar38 = (g_sndContext_0080765C->field_007C - g_sndContext_0080765C->field_0078) + 1;
          this_00 = pOVar27;
          break;
        case 8:
          uVar38 = ((DAT_0080730a + 4000) * 0x1f) / 0xfa1;
          goto cf_common_join_0053138B;
        }
LAB_0053108f:
        uVar38 = (uVar10 * 0x1f) / uVar38;
      }
      else {
        if (bVar5 == 6) {
          uVar38 = 0;
          if (g_sound == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = pSVar21->field_0050 & 1;
          }
          if (uVar10 == 0) {
            pSVar31 = nullptr;
            goto cf_common_join_0053138B;
          }
          local_220.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_220;
          local_EAX_5605 = Library::MSVCRT::__setjmp3(local_220.jumpBuffer,0);
          if (local_EAX_5605 == 0) {
            if (g_sound == 0) {
              uVar38 = 0;
            }
            else {
              uVar38 = g_sndContext_0080765C->field_0050 & 1;
            }
            if (uVar38 != 0) {
              uVar14 = 0x53111e;
              pSVar31 = g_sndContext_0080765C;
              Library::DKW::SND::FUN_006b7e00
                        ((int)g_sndContext_0080765C,1,(undefined4 *)&stack0xffffffb8,&local_68);
            }
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            uVar10 = (uint)(local_68 + in_stack_ffffffb8) >> 1;
          }
          else {
            uVar10 = 0;
          }
          if (g_sound == 0) {
            uVar38 = 0;
          }
          else {
            uVar38 = g_sndContext_0080765C->field_0050 & 1;
          }
          g_currentExceptionFrame = local_220.previous;
          if (uVar38 != 0) {
            uVar38 = (g_sndContext_0080765C->field_0064 - g_sndContext_0080765C->field_0060) + 1;
            this_00 = pOVar27;
            goto LAB_0053108f;
          }
          goto LAB_0053108d;
        }
        if (bVar5 == 7) {
          uVar38 = 0;
          if (g_sound == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = pSVar21->field_0038 & 1;
          }
          if (uVar10 == 0) {
            pSVar31 = nullptr;
            goto cf_common_join_0053138B;
          }
          local_2a8.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_2a8;
          local_EAX_5376 = Library::MSVCRT::__setjmp3(local_2a8.jumpBuffer,0);
          if (local_EAX_5376 == 0) {
            if (g_sound == 0) {
              uVar38 = 0;
            }
            else {
              uVar38 = g_sndContext_0080765C->field_0038 & 1;
            }
            if (uVar38 != 0) {
              uVar14 = 0x531039;
              pSVar31 = g_sndContext_0080765C;
              Library::DKW::SND::FUN_006b7e00((int)g_sndContext_0080765C,0,&local_58,&local_54);
            }
            uVar10 = (uint)(local_58 + local_54) >> 1;
          }
          else {
            uVar10 = 0;
          }
          if (g_sound == 0) {
            uVar38 = 0;
          }
          else {
            uVar38 = g_sndContext_0080765C->field_0038 & 1;
          }
          g_currentExceptionFrame = local_2a8.previous;
          if (uVar38 == 0) goto LAB_0053108d;
          uVar38 = (g_sndContext_0080765C->field_004C - g_sndContext_0080765C->field_0048) + 1;
          this_00 = pOVar27;
          goto LAB_0053108f;
        }
      }
cf_common_join_0053138B:
      uVar14 = uVar14 & 0xff;
      iVar16 = uVar9 + uVar14 * 0xd + 0x29;
      pOVar27 = (OptPanelTy *)0xf9;
      uVar9 = CreateSlider(this_00,0x6d,iVar16,0xf9,iVar16,uVar14 + 0xc09f,0x1f,uVar38,(int)pSVar31);
      this_00->field_01B5[uVar14] = uVar9;
      PaintVolume(this_00,(char)iVar16 - 4,(byte)uVar38);
      pSVar21 = g_sndContext_0080765C;
switchD_005311ec_caseD_3:
      bVar5 = bVar5 + 1;
    } while (bVar5 < 8);
    break;
  case CASE_8:
    uVar38 = UPanelTy::CreateTab((UPanelTy *)this_00,3,3 - DAT_0080733b,0x1d,0x20,0x72,0x11,0,0x12,
                                 0xc09f,0xc0af);
    this_00->field_01B5[0] = uVar38;
    uVar38 = UPanelTy::CreateTab((UPanelTy *)this_00,3,2 - DAT_0080733a,0x99,0x20,0x72,0x11,0,0x12,
                                 0xc0a0,0xc0b0);
    this_00->field_01B5[1] = uVar38;
    uVar38 = UPanelTy::CreateTab((UPanelTy *)this_00,2,DAT_00807349,0x5d,0x68,0x72,0x11,0,0x12,
                                 0xc0a2,0xc0b2);
    this_00->field_01B5[3] = uVar38;
    break;
  case CASE_9:
    iVar16 = 0;
    iVar35 = 0x1b;
    do {
      if (iVar35 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00530aa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)(&PTR_LAB_00531ce8)[iVar16])();
        return;
      }
      uVar25 = 0;
      puVar36 = nullptr;
      pcVar33 = nullptr;
      iVar24 = iVar16 + 0xc09f;
      uVar12 = 0;
      uVar28 = 0;
      sVar26 = 0;
      iVar7 = iVar16 + 0xc0af;
      pCVar13 = thunk_FUN_00571240("BUT_BUTOPT",0);
      local_4c = 0x530b3a;
      uVar12 = UPanelTy::CreateBut((UPanelTy *)this_00,3,1,0x1d,iVar35,1,pCVar13,iVar24,iVar7,sVar26
                                   ,uVar28,uVar12,pcVar33,puVar36,uVar25);
      iVar35 = iVar35 + 0x12;
      *puVar36 = uVar12;
      iVar16 = iVar16 + 1;
    } while (pcVar33 != (char *)0x1);
    break;
  case CASE_B:
    uVar40 = 0;
    uVar37 = 0;
    pcVar33 = nullptr;
    uVar32 = 0;
    uVar28 = 0;
    sVar26 = 0;
    uVar25 = 0xc0b0;
    uVar12 = 0xc0a0;
    pCVar13 = thunk_FUN_00571240("BUT_MEDIUM",0);
    local_4c = 0x53072a;
    uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x7d,0x7d,1,pCVar13,uVar12,uVar25,sVar26,
                                 uVar28,uVar32,pcVar33,uVar37,uVar40);
    this_00->field_01B5[0] = uVar38;
    break;
  case CASE_C:
    iVar16 = this_00->field_003C;
    memset(local_11fc, 0, 0x878); /* compiler bulk-zero initialization */
    iVar35 = 0;
    local_11dc = iVar16 + 0x26;
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
    iVar16 = this_00->field_005C;
    local_1038 = 1;
    local_1034 = 1;
    local_fc4 = 2;
    local_fc0[2] = this_00->field_003C + 0xf2;
    piVar39 = local_1140;
    piVar23 = local_fc0;
    memmove(piVar23, piVar39, 0x17c); /* compiler REP MOVS byte copy */
    if (iVar16 == 0) {
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
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,8,this_00->field_01B5,nullptr,local_11fc,0);
    this_00->field_0028 = 0x20;
    this_00->field_002C = 1;
    this_00->field_002E = 0;
    FUN_006e6080(this_00,2,this_00->field_01B5[0],(undefined4 *)&this_00->field_0x18);
    break;
  case CASE_D:
    memset(local_cc, 0, 0x58); /* compiler bulk-zero initialization */
    iVar16 = 0;
    memset(local_1c48, 0, 0x1c0); /* compiler bulk-zero initialization */
    bVar5 = 0;
    iVar16 = 0;
    iVar35 = 0;
    puVar18 = local_1c48 + 1;
    do {
      if (iVar16 == 0) {
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffbc = 800;
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffc0 = 600;
      }
      else if (iVar16 == 1) {
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffbc = 0x400;
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffc0 = 0x300;
      }
      else if (iVar16 == 2) {
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffbc = 0x500;
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffc0 = 0x400;
      }
      bVar4 = 0;
      puVar18[-1] = iVar16 + 1;
      *puVar18 = 2;
      if (0 < *(int *)(DAT_0080877a + 4)) {
        uVar38 = 0;
        do {
          iVar7 = DAT_0080877a + uVar38 * 0xc;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          if (((*(int *)(iVar7 + 8) == in_stack_ffffffbc) &&
              (*(int *)(DAT_0080877a + (uVar38 * 3 + 3) * 4) == in_stack_ffffffc0)) &&
             (*(int *)(iVar7 + 0x10) == 8)) {
            *puVar18 = (uint)(DAT_00807348 == bVar5);
            break;
          }
          bVar4 = bVar4 + 1;
          uVar38 = (uint)bVar4;
        } while ((int)uVar38 < *(int *)(DAT_0080877a + 4));
      }
      puVar18[2] = this_00->field_003C + 0x1d;
      if (this_00->field_005C == 0) {
        iVar7 = -this_00->field_0048;
      }
      else {
        iVar7 = this_00->field_0044;
      }
      puVar18[3] = iVar35 + 0x13 + iVar7;
      puVar18[4] = 0x72;
      puVar18[5] = 0x11;
      bVar5 = bVar5 + 1;
      iVar16 = iVar16 + 1;
      iVar35 = iVar35 + 0x12;
      puVar18 = puVar18 + 0x1c;
    } while (bVar5 < 3);
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
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,5,this_00->field_01B5,nullptr,local_cc,0);
    uVar40 = 0;
    uVar37 = 0;
    pcVar33 = nullptr;
    uVar32 = 0;
    uVar28 = 0;
    sVar26 = 0;
    uVar25 = 0xc0b0;
    uVar12 = 0xc0a0;
    pCVar13 = thunk_FUN_00571240("BUT_BUTOPT",0);
    local_4c = 0x530992;
    uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,1,0,0x1d,0x49,1,pCVar13,uVar12,uVar25,sVar26,
                                 uVar28,uVar32,pcVar33,uVar37,uVar40);
    uVar40 = 0;
    uVar37 = 0;
    pcVar33 = nullptr;
    uVar32 = 0;
    uVar28 = 0;
    sVar26 = 0;
    uVar25 = 0xc0b1;
    uVar12 = 0xc0a1;
    this_00->field_01B5[1] = uVar38;
    pCVar13 = thunk_FUN_00571240("BUT_BUTOPT",0);
    local_4c = 0x5309da;
    uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,3,(-(uint)(DAT_00807342 != 0) & 2) + 1,0x1d,
                                 0x5b,1,pCVar13,uVar12,uVar25,sVar26,uVar28,uVar32,pcVar33,uVar37,
                                 uVar40);
    this_00->field_01B5[2] = uVar38;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar38 = CreateSlider(this_00,0x94,0x70,*(int *)(this_00->field_018C + 2) + 0xaf,0x70,0xc0a2,3,
                          DAT_00807346 / 5 - 1,1);
    puVar15 = this_00->field_018C;
    this_00->field_01B5[3] = uVar38;
    uVar38 = CreateSlider(this_00,0x94,0x82,*(int *)(puVar15 + 2) + 0xaf,0x82,0xc0a3,3,
                          (uint)DAT_00807347,1);
    this_00->field_01B5[4] = uVar38;
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
  uVar38 = this_00->field_01AD[1];
  this_00->field_0028 = 0x20;
  FUN_006e6080(this_00,2,uVar38,(undefined4 *)&this_00->field_0x18);
  this_00->field_0028 = 5;
  uVar38 = 0;
  do {
    if (this_00->field_01AD[uVar38] != 0) {
      FUN_006e6080(this_00,2,this_00->field_01AD[uVar38],(undefined4 *)&this_00->field_0x18);
    }
    bVar5 = (char)uVar38 + 1;
    uVar38 = (uint)bVar5;
  } while (bVar5 < 2);
  g_currentExceptionFrame = local_110.previous;
  return;
}

