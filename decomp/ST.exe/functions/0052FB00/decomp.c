#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::SetOptControls

   [STSwitchEnumApplier] Switch target field_01A4 uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_01A4State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14
    */

void __thiscall OptPanelTy::SetOptControls(OptPanelTy *this)

{
  undefined1 *resourceString;
  char cVar1;
  ccFntTy *pcVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  size_t _Count;
  char *pcVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  HANDLE pvVar14;
  LPSTR pCVar15;
  int iVar16;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  OptPanelTy *extraout_ECX;
  uint uVar17;
  uint uVar18;
  ushort *puVar19;
  OptPanelTy *this_00;
  char *pcVar20;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  void *unaff_EDI;
  char *pcVar21;
  char *pcVar22;
  AnonShape_GLOBAL_0080765C_F1992A46 *pAVar23;
  ccFntTy **ppcVar24;
  int *piVar25;
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
  undefined4 local_101c;
  int local_1018;
  undefined4 local_fc4;
  int local_fc0 [4];
  undefined4 local_fb0;
  undefined4 local_fac;
  undefined4 local_f58;
  undefined4 local_e9c;
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
  undefined4 local_528;
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
  undefined4 local_3a8;
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
  int iVar26;
  undefined4 uVar27;
  short sVar28;
  OptPanelTy *pOVar29;
  undefined2 uVar30;
  UINT UVar31;
  AnonShape_006B5B10_E0D06CF1 *pAVar32;
  AnonShape_GLOBAL_0080765C_F1992A46 *pAVar33;
  undefined4 uVar34;
  size_t sVar35;
  undefined4 *puVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  int *piVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  size_t sVar42;

  Library::MSVCRT::FUN_0072da40();
  local_110.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_110;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  this_00 = extraout_ECX;
  iVar6 = Library::MSVCRT::__setjmp3(local_110.jumpBuffer,0);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_110.previous;
    iVar16 = ReportDebugMessage("E:\\__titans\\Andrey\\optpanel.cpp",0x350,0,iVar6,
                                "%s");
    if (iVar16 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x350);
    return;
  }
  iVar6 = 10;
  puVar9 = &this_00->field_01B5;
  do {
    if (*puVar9 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar9);
    }
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0,0,'\x01',(byte *)this_00->field_0184);
  ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x31,2,0xc6,0xc);
  switch(this_00->field_01A4) {
  case CASE_1:
    uVar18 = 0;
    iVar6 = -2;
    UVar31 = 16000;
    break;
  case CASE_2:
    uVar18 = 0;
    iVar6 = -2;
    UVar31 = 0x3e87;
    break;
  case CASE_3:
    UVar31 = 0x3e81;
    goto LAB_00530592;
  case CASE_4:
    UVar31 = 0x3e82;
LAB_00530592:
    uVar38 = 0;
    iVar16 = -1;
    iVar6 = -2;
    puVar9 = (uint *)LoadResourceString(UVar31,g_module_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar9,iVar6,iVar16,uVar38);
    puVar19 = this_00->field_0190;
LAB_005305a9:
    pAVar32 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068;
LAB_005305b4:
    DibPut(pAVar32,0x1d,0x13,'\x01',(byte *)puVar19);
    goto cf_switch_join_005305BC;
  case CASE_5:
  case CASE_B:
    uVar38 = 0;
    iVar16 = -1;
    iVar6 = -2;
    puVar9 = (uint *)LoadResourceString(0x3ea8,g_module_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar9,iVar6,iVar16,uVar38);
    ccFntTy::SetSurf(this_00->field_0180,this_00->field_0068,0,0x1d,0x13,0xee,0x6a);
    switch(this_00->field_01AB) {
    case 1:
    case 2:
    case 6:
      pcVar8 = local_984;
      for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8[2] = '\0';
        pcVar8[3] = '\0';
        pcVar8 = pcVar8 + 4;
      }
      iVar6 = FUN_00711110(this_00->field_0180,&this_00->field_0x1f5);
      if (iVar6 < 0xee) {
LAB_0052fd4a:
        uVar18 = 0xffffffff;
        pcVar8 = &this_00->field_0x1f5;
        do {
          pcVar7 = pcVar8;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar7 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar7;
        } while (cVar1 != '\0');
        uVar18 = ~uVar18;
        pcVar8 = pcVar7 + -uVar18;
        pcVar7 = local_984;
        for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar7 = pcVar7 + 4;
        }
      }
      else {
        iVar6 = -1;
        pcVar8 = &this_00->field_0x1f5;
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        pcVar8 = (char *)0xa;
        do {
          pcVar7 = local_984;
          pcVar8 = pcVar8 + 1;
          Library::MSVCRT::_strncpy(pcVar7,&this_00->field_0x1f5,(size_t)pcVar8);
          uVar18 = 0xffffffff;
          pcVar20 = &DAT_007c7278;
          do {
            pcVar22 = pcVar20;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1;
            pcVar22 = pcVar20 + 1;
            cVar1 = *pcVar20;
            pcVar20 = pcVar22;
          } while (cVar1 != '\0');
          uVar18 = ~uVar18;
          iVar6 = -1;
          pcVar20 = local_984;
          do {
            pcVar21 = pcVar20;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar21 = pcVar20 + 1;
            cVar1 = *pcVar20;
            pcVar20 = pcVar21;
          } while (cVar1 != '\0');
          pcVar20 = pcVar22 + -uVar18;
          pcVar22 = pcVar21 + -1;
          for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar22 = *(undefined4 *)pcVar20;
            pcVar20 = pcVar20 + 4;
            pcVar22 = pcVar22 + 4;
          }
          pcVar21 = local_984;
          for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
            *pcVar22 = *pcVar20;
            pcVar20 = pcVar20 + 1;
            pcVar22 = pcVar22 + 1;
          }
          iVar6 = FUN_00711110(this_00->field_0180,pcVar21);
        } while ((iVar6 < 0xee) && ((int)pcVar8 < (int)pcVar7));
        if (pcVar8 == pcVar7) goto LAB_0052fd4a;
        pcVar7 = local_984;
        for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pcVar7 = pcVar7 + 4;
        }
        Library::MSVCRT::_strncpy(local_984,&this_00->field_0x1f5,(size_t)(pcVar8 + -3));
        uVar18 = 0xffffffff;
        pcVar8 = &DAT_007c7274;
        do {
          pcVar7 = pcVar8;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar7 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar7;
        } while (cVar1 != '\0');
        uVar18 = ~uVar18;
        iVar6 = -1;
        pcVar8 = local_984;
        do {
          pcVar20 = pcVar8;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar20 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar20;
        } while (cVar1 != '\0');
        pcVar8 = pcVar7 + -uVar18;
        pcVar7 = pcVar20 + -1;
        for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar7 = pcVar7 + 4;
        }
      }
      UVar31 = this_00->field_01A5;
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *pcVar7 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      }
      pcVar8 = LoadResourceString(UVar31,g_module_00807618);
      wsprintfA(&this_00->field_0x6c,pcVar8);
      break;
    default:
      pcVar8 = LoadResourceString(this_00->field_01A5,g_module_00807618);
      uVar18 = 0xffffffff;
      do {
        pcVar7 = pcVar8;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar7 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar7;
      } while (cVar1 != '\0');
      uVar18 = ~uVar18;
      pcVar8 = pcVar7 + -uVar18;
      pcVar7 = &this_00->field_0x6c;
      for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *pcVar7 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      }
      break;
    case 7:
      pcVar8 = local_880;
      for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8[2] = '\0';
        pcVar8[3] = '\0';
        pcVar8 = pcVar8 + 4;
      }
      iVar6 = 0;
      pcVar8 = (char *)0x0;
      if (DAT_00808aaf != 0) {
        pcVar7 = (char *)&DAT_00808ab0;
        do {
          pcVar8 = pcVar7;
          if (*(int *)(pcVar7 + 0x40) == g_playSystem_00802A38->field_00F4) break;
          iVar6 = iVar6 + 1;
          pcVar7 = pcVar7 + 0x9c;
          pcVar8 = (char *)0x0;
        } while (iVar6 < (int)(uint)DAT_00808aaf);
      }
      if (pcVar8 == (char *)0x0) {
        pcVar7 = &DAT_007c7274;
LAB_0052ff02:
        uVar18 = 0xffffffff;
        do {
          pcVar8 = pcVar7;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar8 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar1 != '\0');
        uVar18 = ~uVar18;
        pcVar8 = pcVar8 + -uVar18;
        pcVar7 = local_880;
        for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar7 = pcVar7 + 4;
        }
      }
      else {
        pcVar7 = pcVar8;
        iVar6 = FUN_00711110(this_00->field_0180,pcVar8);
        if (iVar6 < 200) goto LAB_0052ff02;
        iVar6 = -1;
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        _Count = 10;
        do {
          sVar42 = _Count;
          _Count = sVar42 + 1;
          Library::MSVCRT::_strncpy(local_880,pcVar7,_Count);
          uVar18 = 0xffffffff;
          pcVar8 = &DAT_007c7278;
          do {
            pcVar20 = pcVar8;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1;
            pcVar20 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar20;
          } while (cVar1 != '\0');
          uVar18 = ~uVar18;
          iVar6 = -1;
          pcVar8 = local_880;
          do {
            pcVar22 = pcVar8;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar22 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar22;
          } while (cVar1 != '\0');
          pcVar8 = pcVar20 + -uVar18;
          pcVar20 = pcVar22 + -1;
          for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar20 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar20 = pcVar20 + 4;
          }
          pcVar22 = local_880;
          for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
            *pcVar20 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar20 = pcVar20 + 1;
          }
          sVar35 = 0x52fe7b;
          iVar6 = FUN_00711110(this_00->field_0180,pcVar22);
        } while ((iVar6 < 200) && ((int)_Count < (int)sVar35));
        if (_Count == sVar35) goto LAB_0052ff02;
        pcVar8 = local_880;
        for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
          pcVar8[0] = '\0';
          pcVar8[1] = '\0';
          pcVar8[2] = '\0';
          pcVar8[3] = '\0';
          pcVar8 = pcVar8 + 4;
        }
        Library::MSVCRT::_strncpy(local_880,pcVar7,sVar42 - 2);
        uVar18 = 0xffffffff;
        pcVar8 = &DAT_007c7274;
        do {
          pcVar7 = pcVar8;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar7 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar7;
        } while (cVar1 != '\0');
        uVar18 = ~uVar18;
        iVar6 = -1;
        pcVar8 = local_880;
        do {
          pcVar20 = pcVar8;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar20 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar20;
        } while (cVar1 != '\0');
        pcVar8 = pcVar7 + -uVar18;
        pcVar7 = pcVar20 + -1;
        for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar7 = pcVar7 + 4;
        }
      }
      UVar31 = this_00->field_01A5;
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *pcVar7 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      }
      pcVar8 = LoadResourceString(UVar31,g_module_00807618);
      wsprintfA(&this_00->field_0x6c,pcVar8);
      break;
    case 10:
      pcVar8 = LoadResourceString(this_00->field_01A5,g_module_00807618);
      wsprintfA(&this_00->field_0x6c,pcVar8);
    }
    if (DAT_0080874e == '\x03') {
      uVar18 = 5;
    }
    else {
      uVar18 = -(uint)(DAT_0080874e != '\x01') & 7;
    }
    ccFntTy::WrTxt(this_00->field_0180,(uint *)&this_00->field_0x6c,-2,-1,uVar18,-1,-1);
    goto cf_switch_join_005305BC;
  case CASE_6:
    uVar38 = 0;
    iVar16 = -1;
    iVar6 = -2;
    puVar9 = (uint *)LoadResourceString(0x3e8a,g_module_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar9,iVar6,iVar16,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x6b,0x6e,0xa0,0xb);
    uVar18 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar16 = -1;
    iVar6 = -2;
    puVar9 = (uint *)LoadResourceString(0x3ee4,g_module_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar9,iVar6,iVar16,uVar18);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x61,0x4e,0xb);
    uVar18 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar16 = -1;
    iVar6 = -3;
    puVar9 = (uint *)LoadResourceString(0x3eea,g_module_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar9,iVar6,iVar16,uVar18);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x77,0x4e,0xb);
    uVar18 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar16 = -1;
    iVar6 = -3;
    puVar9 = (uint *)LoadResourceString(0x3eeb,g_module_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar9,iVar6,iVar16,uVar18);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x84,0x4e,0xb);
    goto LAB_00530554;
  case CASE_7:
    uVar38 = 0;
    iVar16 = -1;
    iVar6 = -2;
    puVar9 = (uint *)LoadResourceString(0x3e8b,g_module_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar9,iVar6,iVar16,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x61,0x4e,0xb);
    uVar18 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar16 = -1;
    iVar6 = -3;
    puVar9 = (uint *)LoadResourceString(0x3ee9,g_module_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar9,iVar6,iVar16,uVar18);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x6b,0x6e,0xa0,0xb);
    uVar18 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar16 = -1;
    iVar6 = -2;
    puVar9 = (uint *)LoadResourceString(0x3ee4,g_module_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar9,iVar6,iVar16,uVar18);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x77,0x4e,0xb);
    uVar18 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar16 = -1;
    iVar6 = -3;
    puVar9 = (uint *)LoadResourceString(0x3eeb,g_module_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar9,iVar6,iVar16,uVar18);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x84,0x4e,0xb);
LAB_00530554:
    uVar18 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar6 = -3;
    UVar31 = 0x3eec;
    break;
  case CASE_8:
    uVar38 = 0;
    iVar16 = -1;
    iVar6 = -2;
    puVar9 = (uint *)LoadResourceString(0x3e8c,g_module_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar9,iVar6,iVar16,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x15,0x77,0xc);
    uVar38 = 0;
    iVar16 = -1;
    iVar6 = -2;
    puVar9 = (uint *)LoadResourceString(0x3eef,g_module_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar9,iVar6,iVar16,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x94,0x15,0x77,0xc);
    uVar38 = 0;
    iVar16 = -1;
    iVar6 = -2;
    puVar9 = (uint *)LoadResourceString(0x3eed,g_module_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar9,iVar6,iVar16,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x5b,0xf0,0xc);
    uVar18 = 0;
    iVar6 = -2;
    UVar31 = 0x3f07;
    break;
  case CASE_9:
    uVar18 = 0;
    iVar6 = -2;
    UVar31 = 0x3e8d;
    break;
  default:
    goto cf_switch_join_005305BC;
  case CASE_C:
    uVar38 = 0;
    iVar16 = -1;
    iVar6 = -2;
    puVar9 = (uint *)LoadResourceString(0x3e89,g_module_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar9,iVar6,iVar16,uVar38);
    puVar19 = this_00->field_0194;
    goto LAB_005305a9;
  case CASE_D:
    uVar38 = 0;
    iVar16 = -1;
    iVar6 = -2;
    puVar9 = (uint *)LoadResourceString(0x3e88,g_module_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar9,iVar6,iVar16,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x6d,0x77,0x11);
    uVar18 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar16 = -1;
    iVar6 = -2;
    puVar9 = (uint *)LoadResourceString(0x3ef9,g_module_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar9,iVar6,iVar16,uVar18);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x7f,0x77,0x11);
    uVar18 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar16 = -1;
    iVar6 = -2;
    puVar9 = (uint *)LoadResourceString(0x3efa,g_module_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar9,iVar6,iVar16,uVar18);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0xaa,0x6f,'\x01',
           (byte *)this_00->field_018C);
    resourceString = &this_00->field_0x6c;
    wsprintfA(resourceString,"%d");
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0xaa,0x6f,
                     *(int *)(this_00->field_018C + 2),*(int *)(this_00->field_018C + 4));
    ccFntTy::WrStr(this_00->field_017C,(uint *)resourceString,-2,-1,0);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0xaa,0x81,'\x01',
           (byte *)this_00->field_018C);
    wsprintfA(resourceString,"%d");
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0xaa,0x81,
                     *(int *)(this_00->field_018C + 2),*(int *)(this_00->field_018C + 4));
    ccFntTy::WrStr(this_00->field_017C,(uint *)resourceString,-2,-1,0);
    goto cf_switch_join_005305BC;
  case CASE_E:
    uVar38 = 0;
    iVar16 = -1;
    iVar6 = -2;
    puVar9 = (uint *)LoadResourceString(0x3e94,g_module_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar9,iVar6,iVar16,uVar38);
    puVar19 = this_00->field_0190;
    pAVar32 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068;
    goto LAB_005305b4;
  }
  iVar16 = -1;
  puVar9 = (uint *)LoadResourceString(UVar31,g_module_00807618);
  ccFntTy::WrStr(this_00->field_017C,puVar9,iVar6,iVar16,uVar18);
cf_switch_join_005305BC:
  switch(this_00->field_01A4) {
  case CASE_1:
    bVar5 = 0;
    uVar18 = 0;
    do {
      iVar6 = 1;
      if (((DAT_00808783 == '\x03') && (bVar5 != 0)) &&
         ((bVar5 < 3 || ((bVar5 == 4 && (DAT_008067a0 != '\0')))))) {
        iVar6 = 0;
      }
      uVar34 = 0;
      uVar27 = 0;
      pcVar8 = (char *)0x0;
      uVar38 = 0;
      uVar30 = 0;
      iVar16 = uVar18 + 0xc0af;
      sVar28 = 0;
      iVar10 = uVar18 + 0xc09f;
      pCVar15 = thunk_FUN_00571240("BUT_BUTOPT",0);
      local_4c = 0x530655;
      uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,1,iVar6,0x1d,uVar18 * 0x12 + 0x13,1,pCVar15,
                                   iVar10,iVar16,sVar28,uVar30,uVar38,pcVar8,uVar27,uVar34);
      (&this_00->field_01B5)[uVar18] = uVar38;
      bVar5 = (char)uVar18 + 1;
      uVar18 = (uint)bVar5;
    } while (bVar5 < 7);
    break;
  case CASE_2:
    iVar6 = 0xc09f;
    iVar16 = 0x25;
    do {
      uVar27 = 0;
      puVar36 = (undefined4 *)0x0;
      pcVar8 = (char *)0x0;
      uVar38 = 0;
      uVar30 = 0;
      iVar10 = iVar6 + 0x10;
      sVar28 = 0;
      iVar26 = iVar6;
      pCVar15 = thunk_FUN_00571240("BUT_BUTOPT",0);
      local_4c = 0x530784;
      uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,1,1,0x1d,iVar16,1,pCVar15,iVar26,iVar10,
                                   sVar28,uVar30,uVar38,pcVar8,puVar36,uVar27);
      iVar6 = iVar6 + 1;
      iVar16 = iVar16 + 0x12;
      *puVar36 = uVar38;
    } while (pcVar8 != (char *)0x1);
    break;
  case CASE_3:
  case CASE_4:
  case CASE_E:
    if (this_00->field_01A4 != CASE_E) {
      if (this_00->field_01DD != (HANDLE)0x0) {
        FindCloseChangeNotification(this_00->field_01DD);
        this_00->field_01DD = (HANDLE)0x0;
      }
      uVar18 = 0xffffffff;
      pcVar8 = &DAT_00807680;
      do {
        pcVar7 = pcVar8;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar7 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar7;
      } while (cVar1 != '\0');
      uVar18 = ~uVar18;
      pcVar8 = pcVar7 + -uVar18;
      pcVar7 = &this_00->field_0x6c;
      for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *pcVar7 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      }
      uVar18 = 0xffffffff;
      pcVar8 = PTR_s_SAVEGAME__0079acec;
      do {
        pcVar7 = pcVar8;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar7 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar7;
      } while (cVar1 != '\0');
      uVar18 = ~uVar18;
      iVar6 = -1;
      pcVar8 = &this_00->field_0x6c;
      do {
        pcVar20 = pcVar8;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar20 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar20;
      } while (cVar1 != '\0');
      pcVar8 = pcVar7 + -uVar18;
      pcVar7 = pcVar20 + -1;
      for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *pcVar7 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      }
      uVar18 = 0xffffffff;
      pcVar8 = (char *)&DAT_00807ddd;
      do {
        pcVar7 = pcVar8;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar7 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar7;
      } while (cVar1 != '\0');
      uVar18 = ~uVar18;
      iVar6 = -1;
      pcVar8 = &this_00->field_0x6c;
      do {
        pcVar20 = pcVar8;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar20 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar20;
      } while (cVar1 != '\0');
      pcVar8 = pcVar7 + -uVar18;
      pcVar7 = pcVar20 + -1;
      for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *pcVar7 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      }
      FUN_006b78c0(&this_00->field_0x6c,&this_00->field_0x6c);
      pvVar14 = FindFirstChangeNotificationA(&this_00->field_0x6c,0,1);
      this_00->field_01DD = pvVar14;
      if (pvVar14 == (HANDLE)0xffffffff) {
        this_00->field_01DD = (HANDLE)0x0;
      }
    }
    iVar6 = this_00->field_005C;
    memset(local_77c, 0, 0x4d4); /* compiler bulk-zero initialization */
    local_77c[0] = 0;
    local_77c[2] = this_00->field_003C + 0x26;
    if (iVar6 == 0) {
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
    if (iVar6 == 0) {
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
    local_528 = FUN_0070aa70(DAT_00806790,"BUT_MSLUP",0,1);
    local_524 = Library::Ourlib::MFIMG::mfImgGetWidth(DAT_00806790,0x12,"BUT_MSLUP",1);
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
    local_3a8 = FUN_0070aa70(DAT_00806790,"BUT_MSLDN",0,1);
    local_3a4 = Library::Ourlib::MFIMG::mfImgGetWidth(DAT_00806790,0x12,"BUT_MSLDN",1);
    local_46c = this_00->field_0008;
    local_3bc = 500;
    local_3b8 = 0x32;
    local_468 = 2;
    local_464 = 0x8165;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,7,&this_00->field_01B5,(int *)0x0,local_77c,0);
    if ((this_00->field_005C == 0) || (uVar38 = 0x55, DAT_0080734c == '\0')) {
      uVar38 = 0x56;
    }
    iVar6 = this_00->field_01B5;
    this_00->field_0028 = uVar38;
    if (iVar6 != 0) {
      FUN_006e6080(this_00,0x80000002,iVar6,(undefined4 *)&this_00->field_0x18);
    }
    if (this_00->field_01A4 == CASE_3) {
      pcVar2 = this_00->field_017C;
      ppcVar24 = local_1a88;
      for (iVar6 = 0x223; iVar6 != 0; iVar6 = iVar6 + -1) {
        *ppcVar24 = (ccFntTy *)0x0;
        ppcVar24 = ppcVar24 + 1;
      }
      local_1a88[0] = (ccFntTy *)0x0;
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
                ((SystemClassTy *)this_00->field_000C,6,&this_00->field_01B9,(int *)0x0,local_1a88,1
                );
    }
    uVar40 = 0;
    uVar37 = 0;
    pcVar8 = (char *)0x0;
    uVar34 = 0;
    uVar30 = 0;
    sVar28 = 0;
    uVar27 = 0xc0b1;
    uVar38 = 0xc0a1;
    if (this_00->field_01A4 == CASE_E) {
      pCVar15 = thunk_FUN_00571240("BUT_MEDIUM",0);
      local_4c = 0x5318f5;
      uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x78,0x7d,1,pCVar15,uVar38,uVar27,sVar28,
                                   uVar30,uVar34,pcVar8,uVar37,uVar40);
      this_00->field_01BD = uVar38;
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      PrepAsses(this_00,unaff_EDI);
    }
    else {
      pCVar15 = thunk_FUN_00571240("BUT_MEDIUM",0);
      local_4c = 0x531882;
      uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x5d,0x7c,1,pCVar15,uVar38,uVar27,sVar28,
                                   uVar30,uVar34,pcVar8,uVar37,uVar40);
      uVar41 = 0;
      uVar40 = 0;
      pcVar8 = (char *)0x0;
      uVar37 = 0;
      uVar30 = 0;
      sVar28 = 0;
      uVar34 = 0xc0b2;
      uVar27 = 0xc0a2;
      this_00->field_01BD = uVar38;
      pCVar15 = thunk_FUN_00571240("BUT_MEDIUM",0);
      local_4c = 0x5318c2;
      uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x94,0x7c,1,pCVar15,uVar27,uVar34,sVar28,
                                   uVar30,uVar37,pcVar8,uVar40,uVar41);
      this_00->field_01C1 = uVar38;
      PrepFiles(this_00,this_00->field_01E1);
    }
    break;
  case CASE_5:
    uVar40 = 0;
    uVar37 = 0;
    pcVar8 = (char *)0x0;
    uVar34 = 0;
    uVar30 = 0;
    sVar28 = 0;
    uVar27 = 0xc0af;
    uVar38 = 0xc09f;
    pCVar15 = thunk_FUN_00571240("BUT_MEDIUM",0);
    local_4c = 0x5306a8;
    uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x5e,0x7d,1,pCVar15,uVar38,uVar27,sVar28,
                                 uVar30,uVar34,pcVar8,uVar37,uVar40);
    uVar41 = 0;
    uVar40 = 0;
    pcVar8 = (char *)0x0;
    uVar37 = 0;
    uVar30 = 0;
    sVar28 = 0;
    uVar34 = 0xc0b0;
    uVar27 = 0xc0a0;
    this_00->field_01B5 = uVar38;
    pCVar15 = thunk_FUN_00571240("BUT_MEDIUM",0);
    local_4c = 0x5306e8;
    uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x97,0x7d,1,pCVar15,uVar27,uVar34,sVar28,
                                 uVar30,uVar37,pcVar8,uVar40,uVar41);
    this_00->field_01B9 = uVar38;
    break;
  case CASE_6:
    iVar6 = 0xc09f;
    iVar16 = 0x16;
    do {
      uVar38 = 0;
      puVar36 = (undefined4 *)0x0;
      pcVar8 = (char *)0x0;
      uVar18 = 0;
      uVar30 = 0;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      bVar5 = '\x01' << ((char)iVar6 + 0x61U & 0x1f) & DAT_00807300._1_1_;
      iVar10 = iVar6 + 0x10;
      pOVar29 = (OptPanelTy *)0x0;
      iVar26 = iVar6;
      pCVar15 = thunk_FUN_00571240("BUT_BUTOPT",0);
      local_4c = 0x530c65;
      uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,3,(-(uint)(bVar5 != 0) & 2) + 1,0x1d,iVar16,1
                                   ,pCVar15,iVar26,iVar10,(short)pOVar29,uVar30,uVar18,pcVar8,
                                   puVar36,uVar38);
      iVar6 = iVar6 + 1;
      iVar16 = iVar16 + 0x12;
      *puVar36 = uVar38;
    } while (pcVar8 != (char *)0x1);
    bVar5 = 5;
    do {
      piVar39 = (int *)0x1;
      uVar17 = 4;
      if (bVar5 != 5) {
        uVar17 = (uint)bVar5;
      }
      uVar12 = (bVar5 != 5) - 1 & 4;
      if (bVar5 == 5) {
        uVar18 = ((DAT_0080730e + 4000) * 0x1f) / 0xfa1;
      }
      else if (bVar5 == 6) {
        uVar18 = 0;
        if (g_sound == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = PTR_0080765c->field_0050 & 1;
        }
        if (uVar13 == 0) {
          piVar39 = (int *)0x0;
        }
        else {
          piVar39 = (int *)0x0;
          local_264.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_264;
          iVar6 = Library::MSVCRT::__setjmp3(local_264.jumpBuffer,0);
          if (iVar6 == 0) {
            if (g_sound == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = PTR_0080765c->field_0050 & 1;
            }
            if (uVar13 != 0) {
              piVar39 = &local_70;
              uVar12 = 0x530e3a;
              Library::DKW::SND::FUN_006b7e00((int)PTR_0080765c,1,&local_74,piVar39);
            }
            uVar13 = (uint)(local_74 + local_70) >> 1;
          }
          else {
            uVar13 = 0;
          }
          if (g_sound == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = PTR_0080765c->field_0050 & 1;
          }
          g_currentExceptionFrame = local_264.previous;
          this_00 = pOVar29;
          if (uVar11 != 0) {
            iVar6 = PTR_0080765c->field_0064;
            iVar16 = PTR_0080765c->field_0060;
LAB_00530d9d:
            uVar18 = (iVar6 - iVar16) + 1;
            this_00 = pOVar29;
          }
LAB_00530da0:
          uVar18 = (uVar13 * 0x1f) / uVar18;
        }
      }
      else if (bVar5 == 7) {
        uVar18 = 0;
        if (g_sound == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = PTR_0080765c->field_0038 & 1;
        }
        if (uVar13 != 0) {
          piVar39 = (int *)0x0;
          local_154.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_154;
          iVar6 = Library::MSVCRT::__setjmp3(local_154.jumpBuffer,0);
          if (iVar6 == 0) {
            if (g_sound == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = PTR_0080765c->field_0038 & 1;
            }
            if (uVar13 != 0) {
              piVar39 = &local_6c;
              uVar12 = 0x530d50;
              Library::DKW::SND::FUN_006b7e00((int)PTR_0080765c,0,&local_60,piVar39);
            }
            uVar13 = (uint)(local_60 + local_6c) >> 1;
          }
          else {
            uVar13 = 0;
          }
          if (g_sound == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = PTR_0080765c->field_0038 & 1;
          }
          g_currentExceptionFrame = local_154.previous;
          this_00 = pOVar29;
          if (uVar11 != 0) {
            iVar6 = PTR_0080765c->field_004C;
            iVar16 = PTR_0080765c->field_0048;
            goto LAB_00530d9d;
          }
          goto LAB_00530da0;
        }
        piVar39 = (int *)0x0;
      }
      uVar17 = uVar17 & 0xff;
      iVar6 = uVar12 + uVar17 * 0xd + 0x29;
      pOVar29 = (OptPanelTy *)0xf9;
      uVar38 = CreateSlider(this_00,0x6d,iVar6,0xf9,iVar6,uVar17 + 0xc09f,0x1f,uVar18,(int)piVar39);
      (&this_00->field_01B5)[uVar17] = uVar38;
      PaintVolume(this_00,(char)iVar6 - 4,(byte)uVar18);
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
    uVar18 = 0xc0af;
    pOVar29 = (OptPanelTy *)0xe9;
    uVar38 = UPanelTy::CreateTab((UPanelTy *)this_00,3,bVar5,0x1d,0x16,0xe9,0x11,0,0x12,0xc09f,
                                 0xc0af);
    this_00->field_01B5 = uVar38;
    bVar5 = 5;
    pAVar23 = PTR_0080765c;
    do {
      pAVar33 = (AnonShape_GLOBAL_0080765C_F1992A46 *)0x1;
      uVar17 = 4;
      if (bVar5 != 5) {
        uVar17 = (uint)bVar5;
      }
      uVar12 = (bVar5 != 5) - 1 & 4;
      if (bVar5 == 5) {
        if ((char)DAT_00807300 == '\x02') {
          if (g_sound == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = pAVar23->field_0080 & 1;
          }
          if (uVar13 == 0) {
            uVar18 = 0;
            pAVar33 = (AnonShape_GLOBAL_0080765C_F1992A46 *)0x0;
            goto cf_common_join_0053138B;
          }
        }
        if ((char)DAT_00807300 == '\x04') {
          if (g_sound == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = pAVar23->field_0068 & 1;
          }
          if (uVar13 != 0) goto LAB_005311d8;
switchD_005311ec_caseD_1:
          uVar18 = 0;
          pAVar33 = (AnonShape_GLOBAL_0080765C_F1992A46 *)0x0;
          goto cf_common_join_0053138B;
        }
LAB_005311d8:
        switch(DAT_00807300 & 0xff) {
        case 1:
          goto switchD_005311ec_caseD_1;
        case 2:
          local_198.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_198;
          iVar6 = Library::MSVCRT::__setjmp3(local_198.jumpBuffer,0);
          if (iVar6 == 0) {
            if (g_sound == 0) {
              uVar18 = 0;
            }
            else {
              uVar18 = PTR_0080765c->field_0080 & 1;
            }
            if (uVar18 != 0) {
              uVar17 = 0x53124e;
              pAVar33 = PTR_0080765c;
              Library::DKW::SND::FUN_006b7e00((int)PTR_0080765c,3,&local_4c,&local_50);
            }
            uVar13 = (uint)(local_50 + local_4c) >> 1;
          }
          else {
            uVar13 = 0;
          }
          if (g_sound == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = PTR_0080765c->field_0080 & 1;
          }
          g_currentExceptionFrame = local_198.previous;
          if (uVar18 == 0) {
LAB_0053108d:
            uVar18 = 0;
            this_00 = pOVar29;
          }
          else {
            uVar18 = (PTR_0080765c->field_0094 - PTR_0080765c->field_0090) + 1;
            this_00 = pOVar29;
          }
          break;
        default:
          goto switchD_005311ec_caseD_3;
        case 4:
          local_1dc.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_1dc;
          iVar6 = Library::MSVCRT::__setjmp3(local_1dc.jumpBuffer,0);
          if (iVar6 == 0) {
            if (g_sound == 0) {
              uVar18 = 0;
            }
            else {
              uVar18 = PTR_0080765c->field_0068 & 1;
            }
            if (uVar18 != 0) {
              uVar17 = 0x531309;
              pAVar33 = PTR_0080765c;
              Library::DKW::SND::FUN_006b7e00((int)PTR_0080765c,2,&local_64,&local_5c);
            }
            uVar13 = (uint)(local_64 + local_5c) >> 1;
          }
          else {
            uVar13 = 0;
          }
          if (g_sound == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = PTR_0080765c->field_0068 & 1;
          }
          g_currentExceptionFrame = local_1dc.previous;
          if (uVar18 == 0) goto LAB_0053108d;
          uVar18 = (PTR_0080765c->field_007C - PTR_0080765c->field_0078) + 1;
          this_00 = pOVar29;
          break;
        case 8:
          uVar18 = ((DAT_0080730a + 4000) * 0x1f) / 0xfa1;
          goto cf_common_join_0053138B;
        }
LAB_0053108f:
        uVar18 = (uVar13 * 0x1f) / uVar18;
      }
      else {
        if (bVar5 == 6) {
          uVar18 = 0;
          if (g_sound == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = pAVar23->field_0050 & 1;
          }
          if (uVar13 == 0) {
            pAVar33 = (AnonShape_GLOBAL_0080765C_F1992A46 *)0x0;
            goto cf_common_join_0053138B;
          }
          local_220.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_220;
          iVar6 = Library::MSVCRT::__setjmp3(local_220.jumpBuffer,0);
          if (iVar6 == 0) {
            if (g_sound == 0) {
              uVar18 = 0;
            }
            else {
              uVar18 = PTR_0080765c->field_0050 & 1;
            }
            if (uVar18 != 0) {
              uVar17 = 0x53111e;
              pAVar33 = PTR_0080765c;
              Library::DKW::SND::FUN_006b7e00
                        ((int)PTR_0080765c,1,(undefined4 *)&stack0xffffffb8,&local_68);
            }
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            uVar13 = (uint)(local_68 + in_stack_ffffffb8) >> 1;
          }
          else {
            uVar13 = 0;
          }
          if (g_sound == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = PTR_0080765c->field_0050 & 1;
          }
          g_currentExceptionFrame = local_220.previous;
          if (uVar18 != 0) {
            uVar18 = (PTR_0080765c->field_0064 - PTR_0080765c->field_0060) + 1;
            this_00 = pOVar29;
            goto LAB_0053108f;
          }
          goto LAB_0053108d;
        }
        if (bVar5 == 7) {
          uVar18 = 0;
          if (g_sound == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = pAVar23->field_0038 & 1;
          }
          if (uVar13 == 0) {
            pAVar33 = (AnonShape_GLOBAL_0080765C_F1992A46 *)0x0;
            goto cf_common_join_0053138B;
          }
          local_2a8.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_2a8;
          iVar6 = Library::MSVCRT::__setjmp3(local_2a8.jumpBuffer,0);
          if (iVar6 == 0) {
            if (g_sound == 0) {
              uVar18 = 0;
            }
            else {
              uVar18 = PTR_0080765c->field_0038 & 1;
            }
            if (uVar18 != 0) {
              uVar17 = 0x531039;
              pAVar33 = PTR_0080765c;
              Library::DKW::SND::FUN_006b7e00((int)PTR_0080765c,0,&local_58,&local_54);
            }
            uVar13 = (uint)(local_58 + local_54) >> 1;
          }
          else {
            uVar13 = 0;
          }
          if (g_sound == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = PTR_0080765c->field_0038 & 1;
          }
          g_currentExceptionFrame = local_2a8.previous;
          if (uVar18 == 0) goto LAB_0053108d;
          uVar18 = (PTR_0080765c->field_004C - PTR_0080765c->field_0048) + 1;
          this_00 = pOVar29;
          goto LAB_0053108f;
        }
      }
cf_common_join_0053138B:
      uVar17 = uVar17 & 0xff;
      iVar6 = uVar12 + uVar17 * 0xd + 0x29;
      pOVar29 = (OptPanelTy *)0xf9;
      uVar38 = CreateSlider(this_00,0x6d,iVar6,0xf9,iVar6,uVar17 + 0xc09f,0x1f,uVar18,(int)pAVar33);
      (&this_00->field_01B5)[uVar17] = uVar38;
      PaintVolume(this_00,(char)iVar6 - 4,(byte)uVar18);
      pAVar23 = PTR_0080765c;
switchD_005311ec_caseD_3:
      bVar5 = bVar5 + 1;
    } while (bVar5 < 8);
    break;
  case CASE_8:
    uVar38 = UPanelTy::CreateTab((UPanelTy *)this_00,3,3 - DAT_0080733b,0x1d,0x20,0x72,0x11,0,0x12,
                                 0xc09f,0xc0af);
    this_00->field_01B5 = uVar38;
    uVar38 = UPanelTy::CreateTab((UPanelTy *)this_00,3,2 - DAT_0080733a,0x99,0x20,0x72,0x11,0,0x12,
                                 0xc0a0,0xc0b0);
    this_00->field_01B9 = uVar38;
    uVar38 = UPanelTy::CreateTab((UPanelTy *)this_00,2,DAT_00807349,0x5d,0x68,0x72,0x11,0,0x12,
                                 0xc0a2,0xc0b2);
    this_00->field_01C1 = uVar38;
    break;
  case CASE_9:
    iVar6 = 0;
    iVar16 = 0x1b;
    do {
      if (iVar16 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00530aa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)(&PTR_LAB_00531ce8)[iVar6])();
        return;
      }
      uVar27 = 0;
      puVar36 = (undefined4 *)0x0;
      pcVar8 = (char *)0x0;
      iVar26 = iVar6 + 0xc09f;
      uVar38 = 0;
      uVar30 = 0;
      sVar28 = 0;
      iVar10 = iVar6 + 0xc0af;
      pCVar15 = thunk_FUN_00571240("BUT_BUTOPT",0);
      local_4c = 0x530b3a;
      uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,3,1,0x1d,iVar16,1,pCVar15,iVar26,iVar10,
                                   sVar28,uVar30,uVar38,pcVar8,puVar36,uVar27);
      iVar16 = iVar16 + 0x12;
      *puVar36 = uVar38;
      iVar6 = iVar6 + 1;
    } while (pcVar8 != (char *)0x1);
    break;
  case CASE_B:
    uVar40 = 0;
    uVar37 = 0;
    pcVar8 = (char *)0x0;
    uVar34 = 0;
    uVar30 = 0;
    sVar28 = 0;
    uVar27 = 0xc0b0;
    uVar38 = 0xc0a0;
    pCVar15 = thunk_FUN_00571240("BUT_MEDIUM",0);
    local_4c = 0x53072a;
    uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x7d,0x7d,1,pCVar15,uVar38,uVar27,sVar28,
                                 uVar30,uVar34,pcVar8,uVar37,uVar40);
    this_00->field_01B5 = uVar38;
    break;
  case CASE_C:
    iVar6 = this_00->field_003C;
    memset(local_11fc, 0, 0x878); /* compiler bulk-zero initialization */
    iVar16 = 0;
    local_11dc = iVar6 + 0x26;
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
      FUN_00710790((uint *)pcVar2);
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
    local_101c = FUN_0070aa70(DAT_00806790,"BUT_MSLDN",0,1);
    local_1018 = Library::Ourlib::MFIMG::mfImgGetWidth(DAT_00806790,0x12,"BUT_MSLDN",1);
    iVar6 = this_00->field_005C;
    local_1038 = 1;
    local_1034 = 1;
    local_fc4 = 2;
    local_fc0[2] = this_00->field_003C + 0xf2;
    piVar39 = local_1140;
    piVar25 = local_fc0;
    for (iVar16 = 0x5f; iVar16 != 0; iVar16 = iVar16 + -1) {
      *piVar25 = *piVar39;
      piVar39 = piVar39 + 1;
      piVar25 = piVar25 + 1;
    }
    if (iVar6 == 0) {
      local_fc0[3] = -this_00->field_0048;
    }
    else {
      local_fc0[3] = this_00->field_0044;
    }
    local_fc0[3] = local_fc0[3] + 0x1b;
    local_fb0 = 0x11;
    local_fac = 0x24;
    local_f58 = 0x8164;
    local_e9c = FUN_0070aa70(DAT_00806790,"BUT_MSLUP",0,1);
    local_e98 = Library::Ourlib::MFIMG::mfImgGetWidth(DAT_00806790,0x12,"BUT_MSLUP",1);
    local_990 = 1;
    local_994 = 1;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,8,&this_00->field_01B5,(int *)0x0,local_11fc,0);
    this_00->field_0028 = 0x20;
    *(undefined4 *)&this_00->field_0x2c = 1;
    FUN_006e6080(this_00,2,this_00->field_01B5,(undefined4 *)&this_00->field_0x18);
    break;
  case CASE_D:
    memset(local_cc, 0, 0x58); /* compiler bulk-zero initialization */
    iVar6 = 0;
    memset(local_1c48, 0, 0x1c0); /* compiler bulk-zero initialization */
    bVar5 = 0;
    iVar6 = 0;
    iVar16 = 0;
    puVar9 = local_1c48 + 1;
    do {
      if (iVar6 == 0) {
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffbc = 800;
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffc0 = 600;
      }
      else if (iVar6 == 1) {
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffbc = 0x400;
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffc0 = 0x300;
      }
      else if (iVar6 == 2) {
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffbc = 0x500;
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffc0 = 0x400;
      }
      bVar4 = 0;
      puVar9[-1] = iVar6 + 1;
      *puVar9 = 2;
      if (0 < *(int *)(DAT_0080877a + 4)) {
        uVar18 = 0;
        do {
          iVar10 = DAT_0080877a + uVar18 * 0xc;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          if (((*(int *)(iVar10 + 8) == in_stack_ffffffbc) &&
              (*(int *)(DAT_0080877a + (uVar18 * 3 + 3) * 4) == in_stack_ffffffc0)) &&
             (*(int *)(iVar10 + 0x10) == 8)) {
            *puVar9 = (uint)(DAT_00807348 == bVar5);
            break;
          }
          bVar4 = bVar4 + 1;
          uVar18 = (uint)bVar4;
        } while ((int)uVar18 < *(int *)(DAT_0080877a + 4));
      }
      puVar9[2] = this_00->field_003C + 0x1d;
      if (this_00->field_005C == 0) {
        iVar10 = -this_00->field_0048;
      }
      else {
        iVar10 = this_00->field_0044;
      }
      puVar9[3] = iVar16 + 0x13 + iVar10;
      puVar9[4] = 0x72;
      puVar9[5] = 0x11;
      bVar5 = bVar5 + 1;
      iVar6 = iVar6 + 1;
      iVar16 = iVar16 + 0x12;
      puVar9 = puVar9 + 0x1c;
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
              ((SystemClassTy *)this_00->field_000C,5,&this_00->field_01B5,(int *)0x0,local_cc,0);
    uVar40 = 0;
    uVar37 = 0;
    pcVar8 = (char *)0x0;
    uVar34 = 0;
    uVar30 = 0;
    sVar28 = 0;
    uVar27 = 0xc0b0;
    uVar38 = 0xc0a0;
    pCVar15 = thunk_FUN_00571240("BUT_BUTOPT",0);
    local_4c = 0x530992;
    uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,1,0,0x1d,0x49,1,pCVar15,uVar38,uVar27,sVar28,
                                 uVar30,uVar34,pcVar8,uVar37,uVar40);
    uVar41 = 0;
    uVar40 = 0;
    pcVar8 = (char *)0x0;
    uVar37 = 0;
    uVar30 = 0;
    sVar28 = 0;
    uVar34 = 0xc0b1;
    uVar27 = 0xc0a1;
    this_00->field_01B9 = uVar38;
    pCVar15 = thunk_FUN_00571240("BUT_BUTOPT",0);
    local_4c = 0x5309da;
    uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,3,(-(uint)(DAT_00807342 != 0) & 2) + 1,0x1d,
                                 0x5b,1,pCVar15,uVar27,uVar34,sVar28,uVar30,uVar37,pcVar8,uVar40,
                                 uVar41);
    this_00->field_01BD = uVar38;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar38 = CreateSlider(this_00,0x94,0x70,*(int *)(this_00->field_018C + 2) + 0xaf,0x70,0xc0a2,3,
                          DAT_00807346 / 5 - 1,1);
    this_00->field_01C1 = uVar38;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar38 = CreateSlider(this_00,0x94,0x82,*(int *)(this_00->field_018C + 2) + 0xaf,0x82,0xc0a3,3,
                          (uint)DAT_00807347,1);
    this_00->field_01C5 = uVar38;
    this_00->field_0305 = DAT_00807348;
  }
  if ((this_00->field_01A4 == CASE_1) || (this_00->field_01A9 == '\0')) {
    *(undefined4 *)&this_00->field_0x2c = 0;
  }
  else {
    *(undefined4 *)&this_00->field_0x2c = 1;
  }
  this_00->field_0028 = 0x20;
  FUN_006e6080(this_00,2,this_00->field_01B1,(undefined4 *)&this_00->field_0x18);
  this_00->field_0028 = 5;
  uVar18 = 0;
  do {
    if ((&this_00->field_01AD)[uVar18] != 0) {
      FUN_006e6080(this_00,2,(&this_00->field_01AD)[uVar18],(undefined4 *)&this_00->field_0x18);
    }
    bVar5 = (char)uVar18 + 1;
    uVar18 = (uint)bVar5;
  } while (bVar5 < 2);
  g_currentExceptionFrame = local_110.previous;
  return;
}

