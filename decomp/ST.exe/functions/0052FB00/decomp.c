
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::SetOptControls */

void __thiscall OptPanelTy::SetOptControls(OptPanelTy *this)

{
  undefined1 *puVar1;
  char cVar2;
  ccFntTy *pcVar3;
  code *pcVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint *puVar8;
  LPCSTR pCVar9;
  char *pcVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  HANDLE pvVar16;
  LPSTR pCVar17;
  int iVar18;
  OptPanelTy *extraout_ECX;
  uint uVar19;
  uint uVar20;
  ushort *puVar21;
  OptPanelTy *this_00;
  size_t unaff_ESI;
  void *unaff_EDI;
  uint *puVar22;
  uint *puVar23;
  char *pcVar24;
  char *pcVar25;
  ccFntTy **ppcVar26;
  int *piVar27;
  uint local_1c48 [112];
  ccFntTy *local_1a88 [3];
  int local_1a7c;
  int local_1a78;
  undefined4 local_1a74;
  undefined4 local_1a70;
  undefined4 local_1a6c;
  undefined4 local_1a68;
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
  uint local_984 [65];
  uint local_880 [65];
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
  int in_stack_ffffffb8;
  int in_stack_ffffffbc;
  int in_stack_ffffffc0;
  int iVar28;
  undefined4 uVar29;
  short sVar30;
  OptPanelTy *pOVar31;
  undefined2 uVar32;
  UINT UVar33;
  undefined4 uVar34;
  size_t sVar35;
  undefined4 *puVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  int *piVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  
  Library::MSVCRT::FUN_0072da40();
  local_110.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_110;
  this_00 = extraout_ECX;
  iVar7 = Library::MSVCRT::__setjmp3(local_110.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_110.previous;
    iVar18 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x350,0,iVar7,
                                &DAT_007a4ccc);
    if (iVar18 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    RaiseInternalException(iVar7,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x350);
    return;
  }
  iVar7 = 10;
  puVar11 = &this_00->field_01B5;
  do {
    if (*puVar11 != 0) {
      FUN_006e56b0((void *)this_00->field_000C,*puVar11);
    }
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  DibPut((undefined4 *)this_00->field_0068,0,0,'\x01',(byte *)this_00->field_0184);
  ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x31,2,0xc6,0xc);
  switch(this_00->field_01A4) {
  case 1:
    uVar20 = 0;
    iVar7 = -2;
    UVar33 = 16000;
    break;
  case 2:
    uVar20 = 0;
    iVar7 = -2;
    UVar33 = 0x3e87;
    break;
  case 3:
    UVar33 = 0x3e81;
    goto LAB_00530592;
  case 4:
    UVar33 = 0x3e82;
LAB_00530592:
    uVar38 = 0;
    iVar18 = -1;
    iVar7 = -2;
    puVar11 = (uint *)FUN_006b0140(UVar33,DAT_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar11,iVar7,iVar18,uVar38);
    puVar21 = this_00->field_0190;
LAB_005305a9:
    puVar36 = (undefined4 *)this_00->field_0068;
LAB_005305b4:
    DibPut(puVar36,0x1d,0x13,'\x01',(byte *)puVar21);
    goto cf_switch_join_005305BC;
  case 5:
  case 0xb:
    uVar38 = 0;
    iVar18 = -1;
    iVar7 = -2;
    puVar11 = (uint *)FUN_006b0140(0x3ea8,DAT_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar11,iVar7,iVar18,uVar38);
    ccFntTy::SetSurf(this_00->field_0180,this_00->field_0068,0,0x1d,0x13,0xee,0x6a);
    switch(this_00->field_01AB) {
    case 1:
    case 2:
    case 6:
      puVar11 = local_984;
      for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      iVar7 = FUN_00711110(this_00->field_0180,(uint *)&this_00->field_0x1f5);
      if (iVar7 < 0xee) {
LAB_0052fd4a:
        uVar20 = 0xffffffff;
        pcVar10 = &this_00->field_0x1f5;
        do {
          pcVar25 = pcVar10;
          if (uVar20 == 0) break;
          uVar20 = uVar20 - 1;
          pcVar25 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar25;
        } while (cVar2 != '\0');
        uVar20 = ~uVar20;
        puVar11 = (uint *)(pcVar25 + -uVar20);
        puVar8 = local_984;
        for (uVar19 = uVar20 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *puVar8 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      else {
        iVar7 = -1;
        pcVar10 = &this_00->field_0x1f5;
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        puVar11 = (uint *)0xa;
        do {
          puVar8 = local_984;
          puVar11 = (uint *)((int)puVar11 + 1);
          Library::MSVCRT::_strncpy((char *)puVar8,&this_00->field_0x1f5,(size_t)puVar11);
          uVar20 = 0xffffffff;
          pcVar10 = &DAT_007c7278;
          do {
            pcVar25 = pcVar10;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar25 = pcVar10 + 1;
            cVar2 = *pcVar10;
            pcVar10 = pcVar25;
          } while (cVar2 != '\0');
          uVar20 = ~uVar20;
          iVar7 = -1;
          puVar23 = local_984;
          do {
            puVar22 = puVar23;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            puVar22 = (uint *)((int)puVar23 + 1);
            uVar19 = *puVar23;
            puVar23 = puVar22;
          } while ((char)uVar19 != '\0');
          pcVar10 = pcVar25 + -uVar20;
          pcVar25 = (char *)((int)puVar22 + -1);
          for (uVar19 = uVar20 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
            *(undefined4 *)pcVar25 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar25 = pcVar25 + 4;
          }
          puVar23 = local_984;
          for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
            *pcVar25 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar25 = pcVar25 + 1;
          }
          iVar7 = FUN_00711110(this_00->field_0180,puVar23);
        } while ((iVar7 < 0xee) && ((int)puVar11 < (int)puVar8));
        if (puVar11 == puVar8) goto LAB_0052fd4a;
        puVar8 = local_984;
        for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        Library::MSVCRT::_strncpy
                  ((char *)local_984,&this_00->field_0x1f5,(size_t)((int)puVar11 + -3));
        uVar20 = 0xffffffff;
        pcVar10 = &DAT_007c7274;
        do {
          pcVar25 = pcVar10;
          if (uVar20 == 0) break;
          uVar20 = uVar20 - 1;
          pcVar25 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar25;
        } while (cVar2 != '\0');
        uVar20 = ~uVar20;
        iVar7 = -1;
        puVar11 = local_984;
        do {
          puVar8 = puVar11;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          puVar8 = (uint *)((int)puVar11 + 1);
          uVar19 = *puVar11;
          puVar11 = puVar8;
        } while ((char)uVar19 != '\0');
        puVar11 = (uint *)(pcVar25 + -uVar20);
        puVar8 = (uint *)((int)puVar8 + -1);
        for (uVar19 = uVar20 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *puVar8 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      UVar33 = this_00->field_01A5;
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(char *)puVar8 = (char)*puVar11;
        puVar11 = (uint *)((int)puVar11 + 1);
        puVar8 = (uint *)((int)puVar8 + 1);
      }
      pCVar9 = (LPCSTR)FUN_006b0140(UVar33,DAT_00807618);
      wsprintfA(&this_00->field_0x6c,pCVar9);
      break;
    default:
      pcVar10 = (char *)FUN_006b0140(this_00->field_01A5,DAT_00807618);
      uVar20 = 0xffffffff;
      do {
        pcVar25 = pcVar10;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar25 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar25;
      } while (cVar2 != '\0');
      uVar20 = ~uVar20;
      pcVar10 = pcVar25 + -uVar20;
      pcVar25 = &this_00->field_0x6c;
      for (uVar19 = uVar20 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar25 = pcVar25 + 4;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pcVar25 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar25 = pcVar25 + 1;
      }
      break;
    case 7:
      puVar11 = local_880;
      for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      iVar7 = 0;
      puVar11 = (uint *)0x0;
      if (DAT_00808aaf != 0) {
        puVar8 = &DAT_00808ab0;
        do {
          puVar11 = puVar8;
          if (puVar8[0x10] == *(uint *)(DAT_00802a38 + 0xf4)) break;
          iVar7 = iVar7 + 1;
          puVar8 = puVar8 + 0x27;
          puVar11 = (uint *)0x0;
        } while (iVar7 < (int)(uint)DAT_00808aaf);
      }
      if (puVar11 == (uint *)0x0) {
        puVar8 = (uint *)&DAT_007c7274;
LAB_0052ff02:
        uVar20 = 0xffffffff;
        do {
          puVar11 = puVar8;
          if (uVar20 == 0) break;
          uVar20 = uVar20 - 1;
          puVar11 = (uint *)((int)puVar8 + 1);
          uVar19 = *puVar8;
          puVar8 = puVar11;
        } while ((char)uVar19 != '\0');
        uVar20 = ~uVar20;
        puVar11 = (uint *)((int)puVar11 - uVar20);
        puVar8 = local_880;
        for (uVar19 = uVar20 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *puVar8 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      else {
        puVar8 = puVar11;
        iVar7 = FUN_00711110(this_00->field_0180,puVar11);
        if (iVar7 < 200) goto LAB_0052ff02;
        iVar7 = -1;
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          uVar20 = *puVar11;
          puVar11 = (uint *)((int)puVar11 + 1);
        } while ((char)uVar20 != '\0');
        unaff_ESI = 10;
        do {
          unaff_ESI = unaff_ESI + 1;
          Library::MSVCRT::_strncpy((char *)local_880,(char *)puVar8,unaff_ESI);
          uVar20 = 0xffffffff;
          pcVar10 = &DAT_007c7278;
          do {
            pcVar25 = pcVar10;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar25 = pcVar10 + 1;
            cVar2 = *pcVar10;
            pcVar10 = pcVar25;
          } while (cVar2 != '\0');
          uVar20 = ~uVar20;
          iVar7 = -1;
          puVar11 = local_880;
          do {
            puVar23 = puVar11;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            puVar23 = (uint *)((int)puVar11 + 1);
            uVar19 = *puVar11;
            puVar11 = puVar23;
          } while ((char)uVar19 != '\0');
          pcVar10 = pcVar25 + -uVar20;
          pcVar25 = (char *)((int)puVar23 + -1);
          for (uVar19 = uVar20 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
            *(undefined4 *)pcVar25 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar25 = pcVar25 + 4;
          }
          puVar11 = local_880;
          for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
            *pcVar25 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar25 = pcVar25 + 1;
          }
          sVar35 = 0x52fe7b;
          iVar7 = FUN_00711110(this_00->field_0180,puVar11);
        } while ((iVar7 < 200) && ((int)unaff_ESI < (int)sVar35));
        if (unaff_ESI == sVar35) goto LAB_0052ff02;
        puVar11 = local_880;
        for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        Library::MSVCRT::_strncpy((char *)local_880,(char *)puVar8,unaff_ESI - 3);
        uVar20 = 0xffffffff;
        pcVar10 = &DAT_007c7274;
        do {
          pcVar25 = pcVar10;
          if (uVar20 == 0) break;
          uVar20 = uVar20 - 1;
          pcVar25 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar25;
        } while (cVar2 != '\0');
        uVar20 = ~uVar20;
        iVar7 = -1;
        puVar11 = local_880;
        do {
          puVar8 = puVar11;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          puVar8 = (uint *)((int)puVar11 + 1);
          uVar19 = *puVar11;
          puVar11 = puVar8;
        } while ((char)uVar19 != '\0');
        puVar11 = (uint *)(pcVar25 + -uVar20);
        puVar8 = (uint *)((int)puVar8 + -1);
        for (uVar19 = uVar20 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
          *puVar8 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      UVar33 = this_00->field_01A5;
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *(char *)puVar8 = (char)*puVar11;
        puVar11 = (uint *)((int)puVar11 + 1);
        puVar8 = (uint *)((int)puVar8 + 1);
      }
      pCVar9 = (LPCSTR)FUN_006b0140(UVar33,DAT_00807618);
      wsprintfA(&this_00->field_0x6c,pCVar9);
      break;
    case 10:
      pCVar9 = (LPCSTR)FUN_006b0140(this_00->field_01A5,DAT_00807618);
      wsprintfA(&this_00->field_0x6c,pCVar9);
    }
    if (DAT_0080874e == '\x03') {
      uVar20 = 5;
    }
    else {
      uVar20 = -(uint)(DAT_0080874e != '\x01') & 7;
    }
    ccFntTy::WrTxt(this_00->field_0180,(uint *)&this_00->field_0x6c,-2,-1,uVar20,-1,-1);
    goto cf_switch_join_005305BC;
  case 6:
    uVar38 = 0;
    iVar18 = -1;
    iVar7 = -2;
    puVar11 = (uint *)FUN_006b0140(0x3e8a,DAT_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar11,iVar7,iVar18,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x6b,0x6e,0xa0,0xb);
    uVar20 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar18 = -1;
    iVar7 = -2;
    puVar11 = (uint *)FUN_006b0140(0x3ee4,DAT_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar11,iVar7,iVar18,uVar20);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x61,0x4e,0xb);
    uVar20 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar18 = -1;
    iVar7 = -3;
    puVar11 = (uint *)FUN_006b0140(0x3eea,DAT_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar11,iVar7,iVar18,uVar20);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x77,0x4e,0xb);
    uVar20 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar18 = -1;
    iVar7 = -3;
    puVar11 = (uint *)FUN_006b0140(0x3eeb,DAT_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar11,iVar7,iVar18,uVar20);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x84,0x4e,0xb);
    goto LAB_00530554;
  case 7:
    uVar38 = 0;
    iVar18 = -1;
    iVar7 = -2;
    puVar11 = (uint *)FUN_006b0140(0x3e8b,DAT_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar11,iVar7,iVar18,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x61,0x4e,0xb);
    uVar20 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar18 = -1;
    iVar7 = -3;
    puVar11 = (uint *)FUN_006b0140(0x3ee9,DAT_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar11,iVar7,iVar18,uVar20);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x6b,0x6e,0xa0,0xb);
    uVar20 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar18 = -1;
    iVar7 = -2;
    puVar11 = (uint *)FUN_006b0140(0x3ee4,DAT_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar11,iVar7,iVar18,uVar20);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x77,0x4e,0xb);
    uVar20 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar18 = -1;
    iVar7 = -3;
    puVar11 = (uint *)FUN_006b0140(0x3eeb,DAT_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar11,iVar7,iVar18,uVar20);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x84,0x4e,0xb);
LAB_00530554:
    uVar20 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar7 = -3;
    UVar33 = 0x3eec;
    break;
  case 8:
    uVar38 = 0;
    iVar18 = -1;
    iVar7 = -2;
    puVar11 = (uint *)FUN_006b0140(0x3e8c,DAT_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar11,iVar7,iVar18,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x15,0x77,0xc);
    uVar38 = 0;
    iVar18 = -1;
    iVar7 = -2;
    puVar11 = (uint *)FUN_006b0140(0x3eef,DAT_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar11,iVar7,iVar18,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x94,0x15,0x77,0xc);
    uVar38 = 0;
    iVar18 = -1;
    iVar7 = -2;
    puVar11 = (uint *)FUN_006b0140(0x3eed,DAT_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar11,iVar7,iVar18,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x5b,0xf0,0xc);
    uVar20 = 0;
    iVar7 = -2;
    UVar33 = 0x3f07;
    break;
  case 9:
    uVar20 = 0;
    iVar7 = -2;
    UVar33 = 0x3e8d;
    break;
  default:
    goto cf_switch_join_005305BC;
  case 0xc:
    uVar38 = 0;
    iVar18 = -1;
    iVar7 = -2;
    puVar11 = (uint *)FUN_006b0140(0x3e89,DAT_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar11,iVar7,iVar18,uVar38);
    puVar21 = this_00->field_0194;
    goto LAB_005305a9;
  case 0xd:
    uVar38 = 0;
    iVar18 = -1;
    iVar7 = -2;
    puVar11 = (uint *)FUN_006b0140(0x3e88,DAT_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar11,iVar7,iVar18,uVar38);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x6d,0x77,0x11);
    uVar20 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar18 = -1;
    iVar7 = -2;
    puVar11 = (uint *)FUN_006b0140(0x3ef9,DAT_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar11,iVar7,iVar18,uVar20);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x1d,0x7f,0x77,0x11);
    uVar20 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar18 = -1;
    iVar7 = -2;
    puVar11 = (uint *)FUN_006b0140(0x3efa,DAT_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar11,iVar7,iVar18,uVar20);
    DibPut((undefined4 *)this_00->field_0068,0xaa,0x6f,'\x01',(byte *)this_00->field_018C);
    puVar1 = &this_00->field_0x6c;
    wsprintfA(puVar1,&DAT_007c1890);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0xaa,0x6f,
                     *(int *)(this_00->field_018C + 2),*(int *)(this_00->field_018C + 4));
    ccFntTy::WrStr(this_00->field_017C,(uint *)puVar1,-2,-1,0);
    DibPut((undefined4 *)this_00->field_0068,0xaa,0x81,'\x01',(byte *)this_00->field_018C);
    wsprintfA(puVar1,&DAT_007c1890);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0xaa,0x81,
                     *(int *)(this_00->field_018C + 2),*(int *)(this_00->field_018C + 4));
    ccFntTy::WrStr(this_00->field_017C,(uint *)puVar1,-2,-1,0);
    goto cf_switch_join_005305BC;
  case 0xe:
    uVar38 = 0;
    iVar18 = -1;
    iVar7 = -2;
    puVar11 = (uint *)FUN_006b0140(0x3e94,DAT_00807618);
    ccFntTy::WrStr(this_00->field_017C,puVar11,iVar7,iVar18,uVar38);
    puVar21 = this_00->field_0190;
    puVar36 = (undefined4 *)this_00->field_0068;
    goto LAB_005305b4;
  }
  iVar18 = -1;
  puVar11 = (uint *)FUN_006b0140(UVar33,DAT_00807618);
  ccFntTy::WrStr(this_00->field_017C,puVar11,iVar7,iVar18,uVar20);
cf_switch_join_005305BC:
  switch(this_00->field_01A4) {
  case 1:
    bVar6 = 0;
    uVar20 = 0;
    do {
      iVar7 = 1;
      if (((DAT_00808783 == '\x03') && (bVar6 != 0)) &&
         ((bVar6 < 3 || ((bVar6 == 4 && (DAT_008067a0 != '\0')))))) {
        iVar7 = 0;
      }
      uVar34 = 0;
      uVar29 = 0;
      pcVar10 = (char *)0x0;
      uVar38 = 0;
      uVar32 = 0;
      iVar18 = uVar20 + 0xc0af;
      sVar30 = 0;
      iVar12 = uVar20 + 0xc09f;
      pCVar17 = thunk_FUN_00571240(s_BUT_BUTOPT_007c7264,0);
      local_4c = 0x530655;
      uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,1,iVar7,0x1d,uVar20 * 0x12 + 0x13,1,
                                   (int)pCVar17,iVar12,iVar18,sVar30,uVar32,uVar38,pcVar10,uVar29,
                                   uVar34);
      (&this_00->field_01B5)[uVar20] = uVar38;
      bVar6 = (char)uVar20 + 1;
      uVar20 = (uint)bVar6;
    } while (bVar6 < 7);
    break;
  case 2:
    iVar7 = 0xc09f;
    iVar18 = 0x25;
    do {
      uVar29 = 0;
      puVar36 = (undefined4 *)0x0;
      pcVar10 = (char *)0x0;
      uVar38 = 0;
      uVar32 = 0;
      iVar12 = iVar7 + 0x10;
      sVar30 = 0;
      iVar28 = iVar7;
      pCVar17 = thunk_FUN_00571240(s_BUT_BUTOPT_007c7264,0);
      local_4c = 0x530784;
      uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,1,1,0x1d,iVar18,1,(int)pCVar17,iVar28,iVar12,
                                   sVar30,uVar32,uVar38,pcVar10,puVar36,uVar29);
      iVar7 = iVar7 + 1;
      iVar18 = iVar18 + 0x12;
      *puVar36 = uVar38;
    } while (pcVar10 != (char *)0x1);
    break;
  case 3:
  case 4:
  case 0xe:
    if (this_00->field_01A4 != '\x0e') {
      if (this_00->field_01DD != (HANDLE)0x0) {
        FindCloseChangeNotification(this_00->field_01DD);
        this_00->field_01DD = (HANDLE)0x0;
      }
      uVar20 = 0xffffffff;
      pcVar10 = &DAT_00807680;
      do {
        pcVar25 = pcVar10;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar25 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar25;
      } while (cVar2 != '\0');
      uVar20 = ~uVar20;
      pcVar10 = pcVar25 + -uVar20;
      pcVar25 = &this_00->field_0x6c;
      for (uVar19 = uVar20 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar25 = pcVar25 + 4;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pcVar25 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar25 = pcVar25 + 1;
      }
      uVar20 = 0xffffffff;
      pcVar10 = PTR_s_SAVEGAME__0079acec;
      do {
        pcVar25 = pcVar10;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar25 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar25;
      } while (cVar2 != '\0');
      uVar20 = ~uVar20;
      iVar7 = -1;
      pcVar10 = &this_00->field_0x6c;
      do {
        pcVar24 = pcVar10;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar24 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar24;
      } while (cVar2 != '\0');
      pcVar10 = pcVar25 + -uVar20;
      pcVar25 = pcVar24 + -1;
      for (uVar19 = uVar20 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar25 = pcVar25 + 4;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pcVar25 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar25 = pcVar25 + 1;
      }
      uVar20 = 0xffffffff;
      pcVar10 = (char *)&DAT_00807ddd;
      do {
        pcVar25 = pcVar10;
        if (uVar20 == 0) break;
        uVar20 = uVar20 - 1;
        pcVar25 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar25;
      } while (cVar2 != '\0');
      uVar20 = ~uVar20;
      iVar7 = -1;
      pcVar10 = &this_00->field_0x6c;
      do {
        pcVar24 = pcVar10;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar24 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar24;
      } while (cVar2 != '\0');
      pcVar10 = pcVar25 + -uVar20;
      pcVar25 = pcVar24 + -1;
      for (uVar19 = uVar20 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined4 *)pcVar25 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar25 = pcVar25 + 4;
      }
      for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
        *pcVar25 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar25 = pcVar25 + 1;
      }
      FUN_006b78c0(&this_00->field_0x6c,&this_00->field_0x6c);
      pvVar16 = FindFirstChangeNotificationA(&this_00->field_0x6c,0,1);
      this_00->field_01DD = pvVar16;
      if (pvVar16 == (HANDLE)0xffffffff) {
        this_00->field_01DD = (HANDLE)0x0;
      }
    }
    iVar7 = this_00->field_005C;
    piVar39 = local_77c;
    for (iVar18 = 0x135; iVar18 != 0; iVar18 = iVar18 + -1) {
      *piVar39 = 0;
      piVar39 = piVar39 + 1;
    }
    local_77c[0] = 0;
    local_77c[2] = this_00->field_003C + 0x26;
    if (iVar7 == 0) {
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
    if (iVar7 == 0) {
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
    local_528 = FUN_0070aa70(DAT_00806790,s_BUT_MSLUP_007c39e0,0,1);
    local_524 = Library::Ourlib::MFIMG::mfImgGetWidth(DAT_00806790,0x12,s_BUT_MSLUP_007c39e0,1);
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
    local_3a8 = FUN_0070aa70(DAT_00806790,s_BUT_MSLDN_007c39d4,0,1);
    local_3a4 = Library::Ourlib::MFIMG::mfImgGetWidth(DAT_00806790,0x12,s_BUT_MSLDN_007c39d4,1);
    local_46c = this_00->field_0008;
    local_3bc = 500;
    local_3b8 = 0x32;
    local_468 = 2;
    local_464 = 0x8165;
    (**(code **)(*(int *)this_00->field_000C + 8))();
    if ((this_00->field_005C == 0) || (uVar38 = 0x55, DAT_0080734c == '\0')) {
      uVar38 = 0x56;
    }
    this_00->field_0028 = uVar38;
    if (this_00->field_01B5 != 0) {
      FUN_006e6080(this_00,0x80000002,this_00->field_01B5,(undefined4 *)&this_00->field_0x18);
    }
    if (this_00->field_01A4 == '\x03') {
      pcVar3 = this_00->field_017C;
      ppcVar26 = local_1a88;
      for (iVar7 = 0x223; iVar7 != 0; iVar7 = iVar7 + -1) {
        *ppcVar26 = (ccFntTy *)0x0;
        ppcVar26 = ppcVar26 + 1;
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
      local_1a88[2] = pcVar3;
      local_19fc = local_1a3c;
      (**(code **)(*(int *)this_00->field_000C + 8))();
    }
    uVar40 = 0;
    uVar37 = 0;
    pcVar10 = (char *)0x0;
    uVar34 = 0;
    uVar32 = 0;
    sVar30 = 0;
    uVar29 = 0xc0b1;
    uVar38 = 0xc0a1;
    if (this_00->field_01A4 == '\x0e') {
      pCVar17 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
      local_4c = 0x5318f5;
      uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x78,0x7d,1,(int)pCVar17,uVar38,uVar29,
                                   sVar30,uVar32,uVar34,pcVar10,uVar37,uVar40);
      this_00->field_01BD = uVar38;
      PrepAsses(this_00,unaff_EDI);
    }
    else {
      pCVar17 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
      local_4c = 0x531882;
      uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x5d,0x7c,1,(int)pCVar17,uVar38,uVar29,
                                   sVar30,uVar32,uVar34,pcVar10,uVar37,uVar40);
      uVar41 = 0;
      uVar40 = 0;
      pcVar10 = (char *)0x0;
      uVar37 = 0;
      uVar32 = 0;
      sVar30 = 0;
      uVar34 = 0xc0b2;
      uVar29 = 0xc0a2;
      this_00->field_01BD = uVar38;
      pCVar17 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
      local_4c = 0x5318c2;
      uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x94,0x7c,1,(int)pCVar17,uVar29,uVar34,
                                   sVar30,uVar32,uVar37,pcVar10,uVar40,uVar41);
      this_00->field_01C1 = uVar38;
      PrepFiles(this_00,*(uint *)&this_00->field_0x1e1);
    }
    break;
  case 5:
    uVar40 = 0;
    uVar37 = 0;
    pcVar10 = (char *)0x0;
    uVar34 = 0;
    uVar32 = 0;
    sVar30 = 0;
    uVar29 = 0xc0af;
    uVar38 = 0xc09f;
    pCVar17 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    local_4c = 0x5306a8;
    uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x5e,0x7d,1,(int)pCVar17,uVar38,uVar29,
                                 sVar30,uVar32,uVar34,pcVar10,uVar37,uVar40);
    uVar41 = 0;
    uVar40 = 0;
    pcVar10 = (char *)0x0;
    uVar37 = 0;
    uVar32 = 0;
    sVar30 = 0;
    uVar34 = 0xc0b0;
    uVar29 = 0xc0a0;
    this_00->field_01B5 = uVar38;
    pCVar17 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    local_4c = 0x5306e8;
    uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x97,0x7d,1,(int)pCVar17,uVar29,uVar34,
                                 sVar30,uVar32,uVar37,pcVar10,uVar40,uVar41);
    this_00->field_01B9 = uVar38;
    break;
  case 6:
    iVar7 = 0xc09f;
    iVar18 = 0x16;
    do {
      uVar38 = 0;
      puVar36 = (undefined4 *)0x0;
      pcVar10 = (char *)0x0;
      uVar20 = 0;
      uVar32 = 0;
      bVar6 = '\x01' << ((char)iVar7 + 0x61U & 0x1f) & DAT_00807300._1_1_;
      iVar12 = iVar7 + 0x10;
      pOVar31 = (OptPanelTy *)0x0;
      iVar28 = iVar7;
      pCVar17 = thunk_FUN_00571240(s_BUT_BUTOPT_007c7264,0);
      local_4c = 0x530c65;
      uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,3,(-(uint)(bVar6 != 0) & 2) + 1,0x1d,iVar18,1
                                   ,(int)pCVar17,iVar28,iVar12,(short)pOVar31,uVar32,uVar20,pcVar10,
                                   puVar36,uVar38);
      iVar7 = iVar7 + 1;
      iVar18 = iVar18 + 0x12;
      *puVar36 = uVar38;
    } while (pcVar10 != (char *)0x1);
    bVar6 = 5;
    do {
      piVar39 = (int *)0x1;
      uVar19 = 4;
      if (bVar6 != 5) {
        uVar19 = (uint)bVar6;
      }
      uVar14 = (bVar6 != 5) - 1 & 4;
      if (bVar6 == 5) {
        uVar20 = ((DAT_0080730e + 4000) * 0x1f) / 0xfa1;
      }
      else if (bVar6 == 6) {
        uVar20 = 0;
        if (g_sound == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(uint *)(DAT_0080765c + 0x50) & 1;
        }
        if (uVar15 == 0) {
          piVar39 = (int *)0x0;
        }
        else {
          piVar39 = (int *)0x0;
          local_264.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_264;
          iVar7 = Library::MSVCRT::__setjmp3(local_264.jumpBuffer,0,unaff_EDI,iVar18);
          if (iVar7 == 0) {
            if (g_sound == 0) {
              uVar15 = 0;
            }
            else {
              uVar15 = *(uint *)(DAT_0080765c + 0x50) & 1;
            }
            if (uVar15 != 0) {
              piVar39 = &local_70;
              uVar14 = 0x530e3a;
              Library::DKW::SND::FUN_006b7e00(DAT_0080765c,1,&local_74,piVar39);
            }
            uVar15 = (uint)(local_74 + local_70) >> 1;
          }
          else {
            uVar15 = 0;
          }
          if (g_sound == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = *(uint *)(DAT_0080765c + 0x50) & 1;
          }
          g_currentExceptionFrame = local_264.previous;
          this_00 = pOVar31;
          if (uVar13 != 0) {
            iVar7 = *(int *)(DAT_0080765c + 100);
            iVar12 = *(int *)(DAT_0080765c + 0x60);
LAB_00530d9d:
            uVar20 = (iVar7 - iVar12) + 1;
            this_00 = pOVar31;
          }
LAB_00530da0:
          uVar20 = (uVar15 * 0x1f) / uVar20;
        }
      }
      else if (bVar6 == 7) {
        uVar20 = 0;
        if (g_sound == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(uint *)(DAT_0080765c + 0x38) & 1;
        }
        if (uVar15 != 0) {
          piVar39 = (int *)0x0;
          local_154.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_154;
          iVar7 = Library::MSVCRT::__setjmp3(local_154.jumpBuffer,0,unaff_EDI,iVar18);
          if (iVar7 == 0) {
            if (g_sound == 0) {
              uVar15 = 0;
            }
            else {
              uVar15 = *(uint *)(DAT_0080765c + 0x38) & 1;
            }
            if (uVar15 != 0) {
              piVar39 = &local_6c;
              uVar14 = 0x530d50;
              Library::DKW::SND::FUN_006b7e00(DAT_0080765c,0,&local_60,piVar39);
            }
            uVar15 = (uint)(local_60 + local_6c) >> 1;
          }
          else {
            uVar15 = 0;
          }
          if (g_sound == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = *(uint *)(DAT_0080765c + 0x38) & 1;
          }
          g_currentExceptionFrame = local_154.previous;
          this_00 = pOVar31;
          if (uVar13 != 0) {
            iVar7 = *(int *)(DAT_0080765c + 0x4c);
            iVar12 = *(int *)(DAT_0080765c + 0x48);
            goto LAB_00530d9d;
          }
          goto LAB_00530da0;
        }
        piVar39 = (int *)0x0;
      }
      uVar19 = uVar19 & 0xff;
      iVar7 = uVar14 + uVar19 * 0xd + 0x29;
      pOVar31 = (OptPanelTy *)0xf9;
      uVar38 = CreateSlider(this_00,0x6d,iVar7,0xf9,iVar7,uVar19 + 0xc09f,0x1f,uVar20,(int)piVar39);
      (&this_00->field_01B5)[uVar19] = uVar38;
      PaintVolume(this_00,(char)iVar7 - 4,(byte)uVar20);
      bVar6 = bVar6 + 1;
    } while (bVar6 < 8);
    break;
  case 7:
    if ((DAT_00807300 & 0xff) == 1) {
      bVar6 = 0;
    }
    else if ((DAT_00807300 & 0xff) == 2) {
      bVar6 = 2;
    }
    else {
      bVar6 = 1;
    }
    uVar20 = 0xc0af;
    pOVar31 = (OptPanelTy *)0xe9;
    uVar38 = UPanelTy::CreateTab((UPanelTy *)this_00,3,bVar6,0x1d,0x16,0xe9,0x11,0,0x12,0xc09f,
                                 0xc0af);
    this_00->field_01B5 = uVar38;
    bVar6 = 5;
    iVar7 = DAT_0080765c;
    do {
      iVar18 = 1;
      uVar19 = 4;
      if (bVar6 != 5) {
        uVar19 = (uint)bVar6;
      }
      uVar14 = (bVar6 != 5) - 1 & 4;
      if (bVar6 == 5) {
        if ((char)DAT_00807300 == '\x02') {
          if (g_sound == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = *(uint *)(iVar7 + 0x80) & 1;
          }
          if (uVar15 == 0) {
            uVar20 = 0;
            iVar18 = 0;
            goto cf_common_join_0053138B;
          }
        }
        if ((char)DAT_00807300 == '\x04') {
          if (g_sound == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = *(uint *)(iVar7 + 0x68) & 1;
          }
          if (uVar15 != 0) goto LAB_005311d8;
switchD_005311ec_caseD_1:
          uVar20 = 0;
          iVar18 = 0;
          goto cf_common_join_0053138B;
        }
LAB_005311d8:
        switch(DAT_00807300 & 0xff) {
        case 1:
          goto switchD_005311ec_caseD_1;
        case 2:
          local_198.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_198;
          iVar7 = Library::MSVCRT::__setjmp3(local_198.jumpBuffer,0,unaff_EDI,unaff_ESI);
          if (iVar7 == 0) {
            if (g_sound == 0) {
              uVar20 = 0;
            }
            else {
              uVar20 = *(uint *)(DAT_0080765c + 0x80) & 1;
            }
            if (uVar20 != 0) {
              uVar19 = 0x53124e;
              iVar18 = DAT_0080765c;
              Library::DKW::SND::FUN_006b7e00(DAT_0080765c,3,&local_4c,&local_50);
            }
            uVar15 = (uint)(local_50 + local_4c) >> 1;
          }
          else {
            uVar15 = 0;
          }
          if (g_sound == 0) {
            uVar20 = 0;
          }
          else {
            uVar20 = *(uint *)(DAT_0080765c + 0x80) & 1;
          }
          g_currentExceptionFrame = local_198.previous;
          if (uVar20 == 0) {
LAB_0053108d:
            uVar20 = 0;
            this_00 = pOVar31;
          }
          else {
            uVar20 = (*(int *)(DAT_0080765c + 0x94) - *(int *)(DAT_0080765c + 0x90)) + 1;
            this_00 = pOVar31;
          }
          break;
        default:
          goto switchD_005311ec_caseD_3;
        case 4:
          local_1dc.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_1dc;
          iVar7 = Library::MSVCRT::__setjmp3(local_1dc.jumpBuffer,0,unaff_EDI,unaff_ESI);
          if (iVar7 == 0) {
            if (g_sound == 0) {
              uVar20 = 0;
            }
            else {
              uVar20 = *(uint *)(DAT_0080765c + 0x68) & 1;
            }
            if (uVar20 != 0) {
              uVar19 = 0x531309;
              iVar18 = DAT_0080765c;
              Library::DKW::SND::FUN_006b7e00(DAT_0080765c,2,&local_64,&local_5c);
            }
            uVar15 = (uint)(local_64 + local_5c) >> 1;
          }
          else {
            uVar15 = 0;
          }
          if (g_sound == 0) {
            uVar20 = 0;
          }
          else {
            uVar20 = *(uint *)(DAT_0080765c + 0x68) & 1;
          }
          g_currentExceptionFrame = local_1dc.previous;
          if (uVar20 == 0) goto LAB_0053108d;
          uVar20 = (*(int *)(DAT_0080765c + 0x7c) - *(int *)(DAT_0080765c + 0x78)) + 1;
          this_00 = pOVar31;
          break;
        case 8:
          uVar20 = ((DAT_0080730a + 4000) * 0x1f) / 0xfa1;
          goto cf_common_join_0053138B;
        }
LAB_0053108f:
        uVar20 = (uVar15 * 0x1f) / uVar20;
      }
      else {
        if (bVar6 == 6) {
          uVar20 = 0;
          if (g_sound == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = *(uint *)(iVar7 + 0x50) & 1;
          }
          if (uVar15 == 0) {
            iVar18 = 0;
            goto cf_common_join_0053138B;
          }
          local_220.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_220;
          iVar7 = Library::MSVCRT::__setjmp3(local_220.jumpBuffer,0,unaff_EDI,unaff_ESI);
          if (iVar7 == 0) {
            if (g_sound == 0) {
              uVar20 = 0;
            }
            else {
              uVar20 = *(uint *)(DAT_0080765c + 0x50) & 1;
            }
            if (uVar20 != 0) {
              uVar19 = 0x53111e;
              iVar18 = DAT_0080765c;
              Library::DKW::SND::FUN_006b7e00
                        (DAT_0080765c,1,(undefined4 *)&stack0xffffffb8,&local_68);
            }
            uVar15 = (uint)(local_68 + in_stack_ffffffb8) >> 1;
          }
          else {
            uVar15 = 0;
          }
          if (g_sound == 0) {
            uVar20 = 0;
          }
          else {
            uVar20 = *(uint *)(DAT_0080765c + 0x50) & 1;
          }
          g_currentExceptionFrame = local_220.previous;
          if (uVar20 != 0) {
            uVar20 = (*(int *)(DAT_0080765c + 100) - *(int *)(DAT_0080765c + 0x60)) + 1;
            this_00 = pOVar31;
            goto LAB_0053108f;
          }
          goto LAB_0053108d;
        }
        if (bVar6 == 7) {
          uVar20 = 0;
          if (g_sound == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = *(uint *)(iVar7 + 0x38) & 1;
          }
          if (uVar15 == 0) {
            iVar18 = 0;
            goto cf_common_join_0053138B;
          }
          local_2a8.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_2a8;
          iVar7 = Library::MSVCRT::__setjmp3(local_2a8.jumpBuffer,0,unaff_EDI,unaff_ESI);
          if (iVar7 == 0) {
            if (g_sound == 0) {
              uVar20 = 0;
            }
            else {
              uVar20 = *(uint *)(DAT_0080765c + 0x38) & 1;
            }
            if (uVar20 != 0) {
              uVar19 = 0x531039;
              iVar18 = DAT_0080765c;
              Library::DKW::SND::FUN_006b7e00(DAT_0080765c,0,&local_58,&local_54);
            }
            uVar15 = (uint)(local_58 + local_54) >> 1;
          }
          else {
            uVar15 = 0;
          }
          if (g_sound == 0) {
            uVar20 = 0;
          }
          else {
            uVar20 = *(uint *)(DAT_0080765c + 0x38) & 1;
          }
          g_currentExceptionFrame = local_2a8.previous;
          if (uVar20 == 0) goto LAB_0053108d;
          uVar20 = (*(int *)(DAT_0080765c + 0x4c) - *(int *)(DAT_0080765c + 0x48)) + 1;
          this_00 = pOVar31;
          goto LAB_0053108f;
        }
      }
cf_common_join_0053138B:
      uVar19 = uVar19 & 0xff;
      iVar7 = uVar14 + uVar19 * 0xd + 0x29;
      pOVar31 = (OptPanelTy *)0xf9;
      uVar38 = CreateSlider(this_00,0x6d,iVar7,0xf9,iVar7,uVar19 + 0xc09f,0x1f,uVar20,iVar18);
      (&this_00->field_01B5)[uVar19] = uVar38;
      PaintVolume(this_00,(char)iVar7 - 4,(byte)uVar20);
      iVar7 = DAT_0080765c;
switchD_005311ec_caseD_3:
      bVar6 = bVar6 + 1;
    } while (bVar6 < 8);
    break;
  case 8:
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
  case 9:
    iVar7 = 0;
    iVar18 = 0x1b;
    do {
      if (iVar18 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00530aa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&PTR_LAB_00531ce8)[iVar7])();
        return;
      }
      uVar29 = 0;
      puVar36 = (undefined4 *)0x0;
      pcVar10 = (char *)0x0;
      iVar28 = iVar7 + 0xc09f;
      uVar38 = 0;
      uVar32 = 0;
      sVar30 = 0;
      iVar12 = iVar7 + 0xc0af;
      pCVar17 = thunk_FUN_00571240(s_BUT_BUTOPT_007c7264,0);
      local_4c = 0x530b3a;
      uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,3,1,0x1d,iVar18,1,(int)pCVar17,iVar28,iVar12,
                                   sVar30,uVar32,uVar38,pcVar10,puVar36,uVar29);
      iVar18 = iVar18 + 0x12;
      *puVar36 = uVar38;
      iVar7 = iVar7 + 1;
    } while (pcVar10 != (char *)0x1);
    break;
  case 0xb:
    uVar40 = 0;
    uVar37 = 0;
    pcVar10 = (char *)0x0;
    uVar34 = 0;
    uVar32 = 0;
    sVar30 = 0;
    uVar29 = 0xc0b0;
    uVar38 = 0xc0a0;
    pCVar17 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    local_4c = 0x53072a;
    uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x7d,0x7d,1,(int)pCVar17,uVar38,uVar29,
                                 sVar30,uVar32,uVar34,pcVar10,uVar37,uVar40);
    this_00->field_01B5 = uVar38;
    break;
  case 0xc:
    iVar7 = this_00->field_003C;
    puVar11 = local_11fc;
    for (iVar18 = 0x21e; iVar18 != 0; iVar18 = iVar18 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    local_11dc = iVar7 + 0x26;
    local_11fc[0] = 0;
    local_11fc[1] = 2;
    if (this_00->field_005C == 0) {
      local_11d8 = -this_00->field_0048;
    }
    else {
      local_11d8 = this_00->field_0044;
    }
    pcVar3 = this_00->field_017C;
    local_11d8 = local_11d8 + 0x1a;
    local_11fc[2] = 1;
    local_11fc[3] = this_00->field_02F9[2];
    local_11ec = 0xca;
    if (pcVar3->field_00A0 != 0) {
      FUN_00710790((int)pcVar3);
    }
    local_11e8 = *(int *)&pcVar3->field_0x8a;
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
    local_101c = FUN_0070aa70(DAT_00806790,s_BUT_MSLDN_007c39d4,0,1);
    local_1018 = Library::Ourlib::MFIMG::mfImgGetWidth(DAT_00806790,0x12,s_BUT_MSLDN_007c39d4,1);
    iVar7 = this_00->field_005C;
    local_1038 = 1;
    local_1034 = 1;
    local_fc4 = 2;
    local_fc0[2] = this_00->field_003C + 0xf2;
    piVar39 = local_1140;
    piVar27 = local_fc0;
    for (iVar18 = 0x5f; iVar18 != 0; iVar18 = iVar18 + -1) {
      *piVar27 = *piVar39;
      piVar39 = piVar39 + 1;
      piVar27 = piVar27 + 1;
    }
    if (iVar7 == 0) {
      local_fc0[3] = -this_00->field_0048;
    }
    else {
      local_fc0[3] = this_00->field_0044;
    }
    local_fc0[3] = local_fc0[3] + 0x1b;
    local_fb0 = 0x11;
    local_fac = 0x24;
    local_f58 = 0x8164;
    local_e9c = FUN_0070aa70(DAT_00806790,s_BUT_MSLUP_007c39e0,0,1);
    local_e98 = Library::Ourlib::MFIMG::mfImgGetWidth(DAT_00806790,0x12,s_BUT_MSLUP_007c39e0,1);
    local_990 = 1;
    local_994 = 1;
    (**(code **)(*(int *)this_00->field_000C + 8))();
    this_00->field_0028 = 0x20;
    *(undefined4 *)&this_00->field_0x2c = 1;
    FUN_006e6080(this_00,2,this_00->field_01B5,(undefined4 *)&this_00->field_0x18);
    break;
  case 0xd:
    puVar36 = local_cc;
    for (iVar7 = 0x16; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar36 = 0;
      puVar36 = puVar36 + 1;
    }
    puVar11 = local_1c48;
    for (iVar7 = 0x70; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    bVar6 = 0;
    iVar7 = 0;
    iVar18 = 0;
    puVar11 = local_1c48 + 1;
    do {
      if (iVar7 == 0) {
        in_stack_ffffffbc = 800;
        in_stack_ffffffc0 = 600;
      }
      else if (iVar7 == 1) {
        in_stack_ffffffbc = 0x400;
        in_stack_ffffffc0 = 0x300;
      }
      else if (iVar7 == 2) {
        in_stack_ffffffbc = 0x500;
        in_stack_ffffffc0 = 0x400;
      }
      bVar5 = 0;
      puVar11[-1] = iVar7 + 1;
      *puVar11 = 2;
      if (0 < *(int *)(DAT_0080877a + 4)) {
        uVar20 = 0;
        do {
          iVar12 = DAT_0080877a + uVar20 * 0xc;
          if (((*(int *)(iVar12 + 8) == in_stack_ffffffbc) &&
              (*(int *)(DAT_0080877a + (uVar20 * 3 + 3) * 4) == in_stack_ffffffc0)) &&
             (*(int *)(iVar12 + 0x10) == 8)) {
            *puVar11 = (uint)(DAT_00807348 == bVar6);
            break;
          }
          bVar5 = bVar5 + 1;
          uVar20 = (uint)bVar5;
        } while ((int)uVar20 < *(int *)(DAT_0080877a + 4));
      }
      puVar11[2] = this_00->field_003C + 0x1d;
      if (this_00->field_005C == 0) {
        iVar12 = -this_00->field_0048;
      }
      else {
        iVar12 = this_00->field_0044;
      }
      puVar11[3] = iVar18 + 0x13 + iVar12;
      puVar11[4] = 0x72;
      puVar11[5] = 0x11;
      bVar6 = bVar6 + 1;
      iVar7 = iVar7 + 1;
      iVar18 = iVar18 + 0x12;
      puVar11 = puVar11 + 0x1c;
    } while (bVar6 < 3);
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
    (**(code **)(*(int *)this_00->field_000C + 8))();
    uVar40 = 0;
    uVar37 = 0;
    pcVar10 = (char *)0x0;
    uVar34 = 0;
    uVar32 = 0;
    sVar30 = 0;
    uVar29 = 0xc0b0;
    uVar38 = 0xc0a0;
    pCVar17 = thunk_FUN_00571240(s_BUT_BUTOPT_007c7264,0);
    local_4c = 0x530992;
    uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,1,0,0x1d,0x49,1,(int)pCVar17,uVar38,uVar29,
                                 sVar30,uVar32,uVar34,pcVar10,uVar37,uVar40);
    uVar41 = 0;
    uVar40 = 0;
    pcVar10 = (char *)0x0;
    uVar37 = 0;
    uVar32 = 0;
    sVar30 = 0;
    uVar34 = 0xc0b1;
    uVar29 = 0xc0a1;
    this_00->field_01B9 = uVar38;
    pCVar17 = thunk_FUN_00571240(s_BUT_BUTOPT_007c7264,0);
    local_4c = 0x5309da;
    uVar38 = UPanelTy::CreateBut((UPanelTy *)this_00,3,(-(uint)(DAT_00807342 != 0) & 2) + 1,0x1d,
                                 0x5b,1,(int)pCVar17,uVar29,uVar34,sVar30,uVar32,uVar37,pcVar10,
                                 uVar40,uVar41);
    this_00->field_01BD = uVar38;
    uVar38 = CreateSlider(this_00,0x94,0x70,*(int *)(this_00->field_018C + 2) + 0xaf,0x70,0xc0a2,3,
                          DAT_00807346 / 5 - 1,1);
    this_00->field_01C1 = uVar38;
    uVar38 = CreateSlider(this_00,0x94,0x82,*(int *)(this_00->field_018C + 2) + 0xaf,0x82,0xc0a3,3,
                          (uint)DAT_00807347,1);
    this_00->field_01C5 = uVar38;
    *(byte *)&this_00[1].field_0000 = DAT_00807348;
  }
  if ((this_00->field_01A4 == '\x01') || (this_00->field_01A9 == '\0')) {
    *(undefined4 *)&this_00->field_0x2c = 0;
  }
  else {
    *(undefined4 *)&this_00->field_0x2c = 1;
  }
  this_00->field_0028 = 0x20;
  FUN_006e6080(this_00,2,this_00->field_01B1,(undefined4 *)&this_00->field_0x18);
  this_00->field_0028 = 5;
  uVar20 = 0;
  do {
    if ((&this_00->field_01AD)[uVar20] != 0) {
      FUN_006e6080(this_00,2,(&this_00->field_01AD)[uVar20],(undefined4 *)&this_00->field_0x18);
    }
    bVar6 = (char)uVar20 + 1;
    uVar20 = (uint)bVar6;
  } while (bVar6 < 2);
  g_currentExceptionFrame = local_110.previous;
  return;
}

