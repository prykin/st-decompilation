
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::SetOptControls */

void __thiscall OptPanelTy::SetOptControls(OptPanelTy *this)

{
  undefined1 *puVar1;
  char cVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint *puVar7;
  LPCSTR pCVar8;
  char *pcVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  HANDLE pvVar15;
  LPSTR pCVar16;
  int iVar17;
  OptPanelTy *extraout_ECX;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  OptPanelTy *this_00;
  size_t unaff_ESI;
  void *unaff_EDI;
  uint *puVar21;
  uint *puVar22;
  char *pcVar23;
  char *pcVar24;
  int *piVar25;
  uint local_1c48 [112];
  int local_1a88 [4];
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
  undefined4 local_11fc [4];
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
  int iVar26;
  undefined4 uVar27;
  short sVar28;
  OptPanelTy *pOVar29;
  undefined2 uVar30;
  UINT UVar31;
  undefined4 uVar32;
  size_t sVar33;
  undefined4 *puVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  int *piVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  
  Library::MSVCRT::FUN_0072da40();
  local_110.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_110;
  this_00 = extraout_ECX;
  iVar6 = Library::MSVCRT::__setjmp3(local_110.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_110.previous;
    iVar17 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x350,0,iVar6,
                                &DAT_007a4ccc);
    if (iVar17 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar6,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x350);
    return;
  }
  iVar6 = 10;
  puVar10 = &this_00->field_01B5;
  do {
    if (*puVar10 != 0) {
      FUN_006e56b0(*(void **)&this_00->field_0xc,*puVar10);
    }
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  thunk_FUN_00540760(*(undefined4 **)&this_00->field_0x68,0,0,'\x01',*(byte **)&this_00->field_0x184
                    );
  ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x17c,*(int *)&this_00->field_0x68,0,0x31,2,0xc6,0xc
                  );
  switch(this_00->field_0x1a4) {
  case 1:
    uVar19 = 0;
    iVar6 = -2;
    UVar31 = 16000;
    break;
  case 2:
    uVar19 = 0;
    iVar6 = -2;
    UVar31 = 0x3e87;
    break;
  case 3:
    UVar31 = 0x3e81;
    goto LAB_00530592;
  case 4:
    UVar31 = 0x3e82;
LAB_00530592:
    uVar36 = 0;
    iVar17 = -1;
    iVar6 = -2;
    puVar10 = (uint *)FUN_006b0140(UVar31,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x17c,puVar10,iVar6,iVar17,uVar36);
    pbVar20 = *(byte **)&this_00->field_0x190;
LAB_005305a9:
    puVar34 = *(undefined4 **)&this_00->field_0x68;
LAB_005305b4:
    thunk_FUN_00540760(puVar34,0x1d,0x13,'\x01',pbVar20);
    goto switchD_0052fbb9_caseD_9;
  case 5:
  case 0xb:
    uVar36 = 0;
    iVar17 = -1;
    iVar6 = -2;
    puVar10 = (uint *)FUN_006b0140(0x3ea8,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x17c,puVar10,iVar6,iVar17,uVar36);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x180,*(int *)&this_00->field_0x68,0,0x1d,0x13,
                     0xee,0x6a);
    switch(this_00->field_0x1ab) {
    case 1:
    case 2:
    case 6:
      puVar10 = local_984;
      for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      iVar6 = FUN_00711110(*(void **)&this_00->field_0x180,&this_00[1].field_003C);
      if (iVar6 < 0xee) {
LAB_0052fd4a:
        uVar19 = 0xffffffff;
        pcVar9 = (char *)&this_00[1].field_003C;
        do {
          pcVar24 = pcVar9;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar24 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar24;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        puVar10 = (uint *)(pcVar24 + -uVar19);
        puVar7 = local_984;
        for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *puVar7 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      else {
        iVar6 = -1;
        pcVar9 = (char *)&this_00[1].field_003C;
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        puVar10 = (uint *)0xa;
        do {
          puVar7 = local_984;
          puVar10 = (uint *)((int)puVar10 + 1);
          Library::MSVCRT::_strncpy((char *)puVar7,(char *)&this_00[1].field_003C,(size_t)puVar10);
          uVar19 = 0xffffffff;
          pcVar9 = &DAT_007c7278;
          do {
            pcVar24 = pcVar9;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar24 = pcVar9 + 1;
            cVar2 = *pcVar9;
            pcVar9 = pcVar24;
          } while (cVar2 != '\0');
          uVar19 = ~uVar19;
          iVar6 = -1;
          puVar22 = local_984;
          do {
            puVar21 = puVar22;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            puVar21 = (uint *)((int)puVar22 + 1);
            uVar18 = *puVar22;
            puVar22 = puVar21;
          } while ((char)uVar18 != '\0');
          pcVar9 = pcVar24 + -uVar19;
          pcVar24 = (char *)((int)puVar21 + -1);
          for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar24 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar24 = pcVar24 + 4;
          }
          puVar22 = local_984;
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar24 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar24 = pcVar24 + 1;
          }
          iVar6 = FUN_00711110(*(void **)&this_00->field_0x180,puVar22);
        } while ((iVar6 < 0xee) && ((int)puVar10 < (int)puVar7));
        if (puVar10 == puVar7) goto LAB_0052fd4a;
        puVar7 = local_984;
        for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        Library::MSVCRT::_strncpy
                  ((char *)local_984,(char *)&this_00[1].field_003C,(size_t)((int)puVar10 + -3));
        uVar19 = 0xffffffff;
        pcVar9 = &DAT_007c7274;
        do {
          pcVar24 = pcVar9;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar24 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar24;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar6 = -1;
        puVar10 = local_984;
        do {
          puVar7 = puVar10;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          puVar7 = (uint *)((int)puVar10 + 1);
          uVar18 = *puVar10;
          puVar10 = puVar7;
        } while ((char)uVar18 != '\0');
        puVar10 = (uint *)(pcVar24 + -uVar19);
        puVar7 = (uint *)((int)puVar7 + -1);
        for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *puVar7 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      UVar31 = *(UINT *)&this_00->field_0x1a5;
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(char *)puVar7 = (char)*puVar10;
        puVar10 = (uint *)((int)puVar10 + 1);
        puVar7 = (uint *)((int)puVar7 + 1);
      }
      pCVar8 = (LPCSTR)FUN_006b0140(UVar31,DAT_00807618);
      wsprintfA(&this_00->field_0x6c,pCVar8);
      break;
    default:
      pcVar9 = (char *)FUN_006b0140(*(UINT *)&this_00->field_0x1a5,DAT_00807618);
      uVar19 = 0xffffffff;
      do {
        pcVar24 = pcVar9;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar24 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar24;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      pcVar9 = pcVar24 + -uVar19;
      pcVar24 = &this_00->field_0x6c;
      for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar24 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar24 = pcVar24 + 1;
      }
      break;
    case 7:
      puVar10 = local_880;
      for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      iVar6 = 0;
      puVar10 = (uint *)0x0;
      if (DAT_00808aaf != 0) {
        puVar7 = &DAT_00808ab0;
        do {
          puVar10 = puVar7;
          if (puVar7[0x10] == *(uint *)(DAT_00802a38 + 0xf4)) break;
          iVar6 = iVar6 + 1;
          puVar7 = puVar7 + 0x27;
          puVar10 = (uint *)0x0;
        } while (iVar6 < (int)(uint)DAT_00808aaf);
      }
      if (puVar10 == (uint *)0x0) {
        puVar7 = (uint *)&DAT_007c7274;
LAB_0052ff02:
        uVar19 = 0xffffffff;
        do {
          puVar10 = puVar7;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          puVar10 = (uint *)((int)puVar7 + 1);
          uVar18 = *puVar7;
          puVar7 = puVar10;
        } while ((char)uVar18 != '\0');
        uVar19 = ~uVar19;
        puVar10 = (uint *)((int)puVar10 - uVar19);
        puVar7 = local_880;
        for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *puVar7 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      else {
        puVar7 = puVar10;
        iVar6 = FUN_00711110(*(void **)&this_00->field_0x180,puVar10);
        if (iVar6 < 200) goto LAB_0052ff02;
        iVar6 = -1;
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          uVar19 = *puVar10;
          puVar10 = (uint *)((int)puVar10 + 1);
        } while ((char)uVar19 != '\0');
        unaff_ESI = 10;
        do {
          unaff_ESI = unaff_ESI + 1;
          Library::MSVCRT::_strncpy((char *)local_880,(char *)puVar7,unaff_ESI);
          uVar19 = 0xffffffff;
          pcVar9 = &DAT_007c7278;
          do {
            pcVar24 = pcVar9;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar24 = pcVar9 + 1;
            cVar2 = *pcVar9;
            pcVar9 = pcVar24;
          } while (cVar2 != '\0');
          uVar19 = ~uVar19;
          iVar6 = -1;
          puVar10 = local_880;
          do {
            puVar22 = puVar10;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            puVar22 = (uint *)((int)puVar10 + 1);
            uVar18 = *puVar10;
            puVar10 = puVar22;
          } while ((char)uVar18 != '\0');
          pcVar9 = pcVar24 + -uVar19;
          pcVar24 = (char *)((int)puVar22 + -1);
          for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar24 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar24 = pcVar24 + 4;
          }
          puVar10 = local_880;
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar24 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar24 = pcVar24 + 1;
          }
          sVar33 = 0x52fe7b;
          iVar6 = FUN_00711110(*(void **)&this_00->field_0x180,puVar10);
        } while ((iVar6 < 200) && ((int)unaff_ESI < (int)sVar33));
        if (unaff_ESI == sVar33) goto LAB_0052ff02;
        puVar10 = local_880;
        for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        Library::MSVCRT::_strncpy((char *)local_880,(char *)puVar7,unaff_ESI - 3);
        uVar19 = 0xffffffff;
        pcVar9 = &DAT_007c7274;
        do {
          pcVar24 = pcVar9;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar24 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar24;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar6 = -1;
        puVar10 = local_880;
        do {
          puVar7 = puVar10;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          puVar7 = (uint *)((int)puVar10 + 1);
          uVar18 = *puVar10;
          puVar10 = puVar7;
        } while ((char)uVar18 != '\0');
        puVar10 = (uint *)(pcVar24 + -uVar19);
        puVar7 = (uint *)((int)puVar7 + -1);
        for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *puVar7 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      UVar31 = *(UINT *)&this_00->field_0x1a5;
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(char *)puVar7 = (char)*puVar10;
        puVar10 = (uint *)((int)puVar10 + 1);
        puVar7 = (uint *)((int)puVar7 + 1);
      }
      pCVar8 = (LPCSTR)FUN_006b0140(UVar31,DAT_00807618);
      wsprintfA(&this_00->field_0x6c,pCVar8);
      break;
    case 10:
      pCVar8 = (LPCSTR)FUN_006b0140(*(UINT *)&this_00->field_0x1a5,DAT_00807618);
      wsprintfA(&this_00->field_0x6c,pCVar8);
    }
    if (DAT_0080874e == '\x03') {
      uVar19 = 5;
    }
    else {
      uVar19 = -(uint)(DAT_0080874e != '\x01') & 7;
    }
    ccFntTy::WrTxt(*(ccFntTy **)&this_00->field_0x180,(uint *)&this_00->field_0x6c,-2,-1,uVar19,-1,
                   -1);
    goto switchD_0052fbb9_caseD_9;
  case 6:
    uVar36 = 0;
    iVar17 = -1;
    iVar6 = -2;
    puVar10 = (uint *)FUN_006b0140(0x3e8a,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x17c,puVar10,iVar6,iVar17,uVar36);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x17c,*(int *)&this_00->field_0x68,0,0x6b,0x6e,
                     0xa0,0xb);
    uVar19 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar17 = -1;
    iVar6 = -2;
    puVar10 = (uint *)FUN_006b0140(0x3ee4,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x17c,puVar10,iVar6,iVar17,uVar19);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x17c,*(int *)&this_00->field_0x68,0,0x1d,0x61,
                     0x4e,0xb);
    uVar19 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar17 = -1;
    iVar6 = -3;
    puVar10 = (uint *)FUN_006b0140(0x3eea,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x17c,puVar10,iVar6,iVar17,uVar19);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x17c,*(int *)&this_00->field_0x68,0,0x1d,0x77,
                     0x4e,0xb);
    uVar19 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar17 = -1;
    iVar6 = -3;
    puVar10 = (uint *)FUN_006b0140(0x3eeb,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x17c,puVar10,iVar6,iVar17,uVar19);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x17c,*(int *)&this_00->field_0x68,0,0x1d,0x84,
                     0x4e,0xb);
    goto LAB_00530554;
  case 7:
    uVar36 = 0;
    iVar17 = -1;
    iVar6 = -2;
    puVar10 = (uint *)FUN_006b0140(0x3e8b,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x17c,puVar10,iVar6,iVar17,uVar36);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x17c,*(int *)&this_00->field_0x68,0,0x1d,0x61,
                     0x4e,0xb);
    uVar19 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar17 = -1;
    iVar6 = -3;
    puVar10 = (uint *)FUN_006b0140(0x3ee9,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x17c,puVar10,iVar6,iVar17,uVar19);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x17c,*(int *)&this_00->field_0x68,0,0x6b,0x6e,
                     0xa0,0xb);
    uVar19 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar17 = -1;
    iVar6 = -2;
    puVar10 = (uint *)FUN_006b0140(0x3ee4,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x17c,puVar10,iVar6,iVar17,uVar19);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x17c,*(int *)&this_00->field_0x68,0,0x1d,0x77,
                     0x4e,0xb);
    uVar19 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar17 = -1;
    iVar6 = -3;
    puVar10 = (uint *)FUN_006b0140(0x3eeb,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x17c,puVar10,iVar6,iVar17,uVar19);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x17c,*(int *)&this_00->field_0x68,0,0x1d,0x84,
                     0x4e,0xb);
LAB_00530554:
    uVar19 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar6 = -3;
    UVar31 = 0x3eec;
    break;
  case 8:
    uVar36 = 0;
    iVar17 = -1;
    iVar6 = -2;
    puVar10 = (uint *)FUN_006b0140(0x3e8c,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x17c,puVar10,iVar6,iVar17,uVar36);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x17c,*(int *)&this_00->field_0x68,0,0x1d,0x15,
                     0x77,0xc);
    uVar36 = 0;
    iVar17 = -1;
    iVar6 = -2;
    puVar10 = (uint *)FUN_006b0140(0x3eef,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x17c,puVar10,iVar6,iVar17,uVar36);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x17c,*(int *)&this_00->field_0x68,0,0x94,0x15,
                     0x77,0xc);
    uVar36 = 0;
    iVar17 = -1;
    iVar6 = -2;
    puVar10 = (uint *)FUN_006b0140(0x3eed,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x17c,puVar10,iVar6,iVar17,uVar36);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x17c,*(int *)&this_00->field_0x68,0,0x1d,0x5b,
                     0xf0,0xc);
    uVar19 = 0;
    iVar6 = -2;
    UVar31 = 0x3f07;
    break;
  case 9:
    uVar19 = 0;
    iVar6 = -2;
    UVar31 = 0x3e8d;
    break;
  default:
    goto switchD_0052fbb9_caseD_9;
  case 0xc:
    uVar36 = 0;
    iVar17 = -1;
    iVar6 = -2;
    puVar10 = (uint *)FUN_006b0140(0x3e89,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x17c,puVar10,iVar6,iVar17,uVar36);
    pbVar20 = *(byte **)&this_00->field_0x194;
    goto LAB_005305a9;
  case 0xd:
    uVar36 = 0;
    iVar17 = -1;
    iVar6 = -2;
    puVar10 = (uint *)FUN_006b0140(0x3e88,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x17c,puVar10,iVar6,iVar17,uVar36);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x17c,*(int *)&this_00->field_0x68,0,0x1d,0x6d,
                     0x77,0x11);
    uVar19 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar17 = -1;
    iVar6 = -2;
    puVar10 = (uint *)FUN_006b0140(0x3ef9,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x17c,puVar10,iVar6,iVar17,uVar19);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x17c,*(int *)&this_00->field_0x68,0,0x1d,0x7f,
                     0x77,0x11);
    uVar19 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar17 = -1;
    iVar6 = -2;
    puVar10 = (uint *)FUN_006b0140(0x3efa,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x17c,puVar10,iVar6,iVar17,uVar19);
    thunk_FUN_00540760(*(undefined4 **)&this_00->field_0x68,0xaa,0x6f,'\x01',
                       *(byte **)&this_00->field_0x18c);
    puVar1 = &this_00->field_0x6c;
    wsprintfA(puVar1,&DAT_007c1890);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x17c,*(int *)&this_00->field_0x68,0,0xaa,0x6f,
                     *(int *)(*(int *)&this_00->field_0x18c + 4),
                     *(int *)(*(int *)&this_00->field_0x18c + 8));
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x17c,(uint *)puVar1,-2,-1,0);
    thunk_FUN_00540760(*(undefined4 **)&this_00->field_0x68,0xaa,0x81,'\x01',
                       *(byte **)&this_00->field_0x18c);
    wsprintfA(puVar1,&DAT_007c1890);
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x17c,*(int *)&this_00->field_0x68,0,0xaa,0x81,
                     *(int *)(*(int *)&this_00->field_0x18c + 4),
                     *(int *)(*(int *)&this_00->field_0x18c + 8));
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x17c,(uint *)puVar1,-2,-1,0);
    goto switchD_0052fbb9_caseD_9;
  case 0xe:
    uVar36 = 0;
    iVar17 = -1;
    iVar6 = -2;
    puVar10 = (uint *)FUN_006b0140(0x3e94,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x17c,puVar10,iVar6,iVar17,uVar36);
    pbVar20 = *(byte **)&this_00->field_0x190;
    puVar34 = *(undefined4 **)&this_00->field_0x68;
    goto LAB_005305b4;
  }
  iVar17 = -1;
  puVar10 = (uint *)FUN_006b0140(UVar31,DAT_00807618);
  ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x17c,puVar10,iVar6,iVar17,uVar19);
switchD_0052fbb9_caseD_9:
  switch(this_00->field_0x1a4) {
  case 1:
    bVar5 = 0;
    uVar19 = 0;
    do {
      iVar6 = 1;
      if (((DAT_00808783 == '\x03') && (bVar5 != 0)) &&
         ((bVar5 < 3 || ((bVar5 == 4 && (DAT_008067a0 != '\0')))))) {
        iVar6 = 0;
      }
      uVar32 = 0;
      uVar27 = 0;
      pcVar9 = (char *)0x0;
      uVar36 = 0;
      uVar30 = 0;
      iVar17 = uVar19 + 0xc0af;
      sVar28 = 0;
      iVar11 = uVar19 + 0xc09f;
      pCVar16 = thunk_FUN_00571240(s_BUT_BUTOPT_007c7264,0);
      local_4c = 0x530655;
      uVar36 = UPanelTy::CreateBut((UPanelTy *)this_00,1,iVar6,0x1d,uVar19 * 0x12 + 0x13,1,
                                   (int)pCVar16,iVar11,iVar17,sVar28,uVar30,uVar36,pcVar9,uVar27,
                                   uVar32);
      (&this_00->field_01B5)[uVar19] = uVar36;
      bVar5 = (char)uVar19 + 1;
      uVar19 = (uint)bVar5;
    } while (bVar5 < 7);
    break;
  case 2:
    iVar6 = 0xc09f;
    iVar17 = 0x25;
    do {
      uVar27 = 0;
      puVar34 = (undefined4 *)0x0;
      pcVar9 = (char *)0x0;
      uVar36 = 0;
      uVar30 = 0;
      iVar11 = iVar6 + 0x10;
      sVar28 = 0;
      iVar26 = iVar6;
      pCVar16 = thunk_FUN_00571240(s_BUT_BUTOPT_007c7264,0);
      local_4c = 0x530784;
      uVar36 = UPanelTy::CreateBut((UPanelTy *)this_00,1,1,0x1d,iVar17,1,(int)pCVar16,iVar26,iVar11,
                                   sVar28,uVar30,uVar36,pcVar9,puVar34,uVar27);
      iVar6 = iVar6 + 1;
      iVar17 = iVar17 + 0x12;
      *puVar34 = uVar36;
    } while (pcVar9 != (char *)0x1);
    break;
  case 3:
  case 4:
  case 0xe:
    if (this_00->field_0x1a4 != '\x0e') {
      if (*(HANDLE *)&this_00[1].field_0x24 != (HANDLE)0x0) {
        FindCloseChangeNotification(*(HANDLE *)&this_00[1].field_0x24);
        *(undefined4 *)&this_00[1].field_0x24 = 0;
      }
      uVar19 = 0xffffffff;
      pcVar9 = &DAT_00807680;
      do {
        pcVar24 = pcVar9;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar24 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar24;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      pcVar9 = pcVar24 + -uVar19;
      pcVar24 = &this_00->field_0x6c;
      for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar24 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar24 = pcVar24 + 1;
      }
      uVar19 = 0xffffffff;
      pcVar9 = PTR_s_SAVEGAME__0079acec;
      do {
        pcVar24 = pcVar9;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar24 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar24;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      iVar6 = -1;
      pcVar9 = &this_00->field_0x6c;
      do {
        pcVar23 = pcVar9;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar23 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar23;
      } while (cVar2 != '\0');
      pcVar9 = pcVar24 + -uVar19;
      pcVar24 = pcVar23 + -1;
      for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar24 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar24 = pcVar24 + 1;
      }
      uVar19 = 0xffffffff;
      pcVar9 = (char *)&DAT_00807ddd;
      do {
        pcVar24 = pcVar9;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar24 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar24;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      iVar6 = -1;
      pcVar9 = &this_00->field_0x6c;
      do {
        pcVar23 = pcVar9;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar23 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar23;
      } while (cVar2 != '\0');
      pcVar9 = pcVar24 + -uVar19;
      pcVar24 = pcVar23 + -1;
      for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined4 *)pcVar24 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar24 = pcVar24 + 4;
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *pcVar24 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar24 = pcVar24 + 1;
      }
      FUN_006b78c0(&this_00->field_0x6c,&this_00->field_0x6c);
      pvVar15 = FindFirstChangeNotificationA(&this_00->field_0x6c,0,1);
      *(HANDLE *)&this_00[1].field_0x24 = pvVar15;
      if (pvVar15 == (HANDLE)0xffffffff) {
        *(undefined4 *)&this_00[1].field_0x24 = 0;
      }
    }
    iVar6 = this_00->field_005C;
    piVar37 = local_77c;
    for (iVar17 = 0x135; iVar17 != 0; iVar17 = iVar17 + -1) {
      *piVar37 = 0;
      piVar37 = piVar37 + 1;
    }
    local_77c[0] = 0;
    local_77c[2] = this_00->field_003C + 0x26;
    if (iVar6 == 0) {
      local_77c[3] = -this_00->field_0048;
    }
    else {
      local_77c[3] = this_00->field_0044;
    }
    local_77c[3] = local_77c[3] + 0x31;
    local_754 = *(undefined4 *)&this_00->field_0x8;
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
    local_528 = FUN_0070aa70(DAT_00806790,s_BUT_MSLUP_007c39e0,0,1);
    local_524 = FUN_0070a6f0(DAT_00806790,0x12,s_BUT_MSLUP_007c39e0,1);
    local_5ec = *(undefined4 *)&this_00->field_0x8;
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
    local_3a4 = FUN_0070a6f0(DAT_00806790,0x12,s_BUT_MSLDN_007c39d4,1);
    local_46c = *(undefined4 *)&this_00->field_0x8;
    local_3bc = 500;
    local_3b8 = 0x32;
    local_468 = 2;
    local_464 = 0x8165;
    (**(code **)(**(int **)&this_00->field_0xc + 8))();
    if ((this_00->field_005C == 0) || (uVar36 = 0x55, DAT_0080734c == '\0')) {
      uVar36 = 0x56;
    }
    this_00->field_0028 = uVar36;
    if (this_00->field_01B5 != 0) {
      FUN_006e6080(this_00,0x80000002,this_00->field_01B5,(undefined4 *)&this_00->field_0x18);
    }
    if (this_00->field_0x1a4 == '\x03') {
      uVar36 = *(undefined4 *)&this_00->field_0x17c;
      piVar37 = local_1a88;
      for (iVar6 = 0x223; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar37 = 0;
        piVar37 = piVar37 + 1;
      }
      local_1a88[0] = 0;
      local_1a88[3] = this_00->field_003C + 0x26;
      local_1a88[1] = 9;
      if (this_00->field_005C == 0) {
        local_1a78 = -this_00->field_0048;
      }
      else {
        local_1a78 = this_00->field_0044;
      }
      local_1a68 = *(undefined4 *)&this_00[1].field_0x38;
      local_1a78 = local_1a78 + 0x1c;
      local_1228 = 1;
      local_122c = 1;
      local_1a3c = *(undefined4 *)&this_00->field_0x8;
      local_1a74 = 0xde;
      local_1a70 = 0xb;
      local_1a6c = 0x104;
      local_1a38 = 2;
      local_1a34 = 0xc0b0;
      local_19f8 = 2;
      local_19f4 = 0xc0a0;
      local_1a88[2] = uVar36;
      local_19fc = local_1a3c;
      (**(code **)(**(int **)&this_00->field_0xc + 8))();
    }
    uVar38 = 0;
    uVar35 = 0;
    pcVar9 = (char *)0x0;
    uVar32 = 0;
    uVar30 = 0;
    sVar28 = 0;
    uVar27 = 0xc0b1;
    uVar36 = 0xc0a1;
    if (this_00->field_0x1a4 == '\x0e') {
      pCVar16 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
      local_4c = 0x5318f5;
      uVar36 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x78,0x7d,1,(int)pCVar16,uVar36,uVar27,
                                   sVar28,uVar30,uVar32,pcVar9,uVar35,uVar38);
      *(undefined4 *)&this_00[1].field_0x4 = uVar36;
      PrepAsses(this_00,unaff_EDI);
    }
    else {
      pCVar16 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
      local_4c = 0x531882;
      uVar36 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x5d,0x7c,1,(int)pCVar16,uVar36,uVar27,
                                   sVar28,uVar30,uVar32,pcVar9,uVar35,uVar38);
      uVar39 = 0;
      uVar38 = 0;
      pcVar9 = (char *)0x0;
      uVar35 = 0;
      uVar30 = 0;
      sVar28 = 0;
      uVar32 = 0xc0b2;
      uVar27 = 0xc0a2;
      *(undefined4 *)&this_00[1].field_0x4 = uVar36;
      pCVar16 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
      local_4c = 0x5318c2;
      uVar36 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x94,0x7c,1,(int)pCVar16,uVar27,uVar32,
                                   sVar28,uVar30,uVar35,pcVar9,uVar38,uVar39);
      *(undefined4 *)&this_00[1].field_0x8 = uVar36;
      PrepFiles(this_00,this_00[1].field_0028);
    }
    break;
  case 5:
    uVar38 = 0;
    uVar35 = 0;
    pcVar9 = (char *)0x0;
    uVar32 = 0;
    uVar30 = 0;
    sVar28 = 0;
    uVar27 = 0xc0af;
    uVar36 = 0xc09f;
    pCVar16 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    local_4c = 0x5306a8;
    uVar36 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x5e,0x7d,1,(int)pCVar16,uVar36,uVar27,
                                 sVar28,uVar30,uVar32,pcVar9,uVar35,uVar38);
    uVar39 = 0;
    uVar38 = 0;
    pcVar9 = (char *)0x0;
    uVar35 = 0;
    uVar30 = 0;
    sVar28 = 0;
    uVar32 = 0xc0b0;
    uVar27 = 0xc0a0;
    this_00->field_01B5 = uVar36;
    pCVar16 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    local_4c = 0x5306e8;
    uVar36 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x97,0x7d,1,(int)pCVar16,uVar27,uVar32,
                                 sVar28,uVar30,uVar35,pcVar9,uVar38,uVar39);
    *(undefined4 *)(this_00 + 1) = uVar36;
    break;
  case 6:
    iVar6 = 0xc09f;
    iVar17 = 0x16;
    do {
      uVar36 = 0;
      puVar34 = (undefined4 *)0x0;
      pcVar9 = (char *)0x0;
      uVar19 = 0;
      uVar30 = 0;
      bVar5 = '\x01' << ((char)iVar6 + 0x61U & 0x1f) & DAT_00807300._1_1_;
      iVar11 = iVar6 + 0x10;
      pOVar29 = (OptPanelTy *)0x0;
      iVar26 = iVar6;
      pCVar16 = thunk_FUN_00571240(s_BUT_BUTOPT_007c7264,0);
      local_4c = 0x530c65;
      uVar36 = UPanelTy::CreateBut((UPanelTy *)this_00,3,(-(uint)(bVar5 != 0) & 2) + 1,0x1d,iVar17,1
                                   ,(int)pCVar16,iVar26,iVar11,(short)pOVar29,uVar30,uVar19,pcVar9,
                                   puVar34,uVar36);
      iVar6 = iVar6 + 1;
      iVar17 = iVar17 + 0x12;
      *puVar34 = uVar36;
    } while (pcVar9 != (char *)0x1);
    bVar5 = 5;
    do {
      piVar37 = (int *)0x1;
      uVar18 = 4;
      if (bVar5 != 5) {
        uVar18 = (uint)bVar5;
      }
      uVar13 = (bVar5 != 5) - 1 & 4;
      if (bVar5 == 5) {
        uVar19 = ((DAT_0080730e + 4000) * 0x1f) / 0xfa1;
      }
      else if (bVar5 == 6) {
        uVar19 = 0;
        if (g_sound == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = *(uint *)(DAT_0080765c + 0x50) & 1;
        }
        if (uVar14 == 0) {
          piVar37 = (int *)0x0;
        }
        else {
          piVar37 = (int *)0x0;
          local_264.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_264;
          iVar6 = Library::MSVCRT::__setjmp3(local_264.jumpBuffer,0,unaff_EDI,iVar17);
          if (iVar6 == 0) {
            if (g_sound == 0) {
              uVar14 = 0;
            }
            else {
              uVar14 = *(uint *)(DAT_0080765c + 0x50) & 1;
            }
            if (uVar14 != 0) {
              piVar37 = &local_70;
              uVar13 = 0x530e3a;
              Library::DKW::SND::FUN_006b7e00(DAT_0080765c,1,&local_74,piVar37);
            }
            uVar14 = (uint)(local_74 + local_70) >> 1;
          }
          else {
            uVar14 = 0;
          }
          if (g_sound == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(uint *)(DAT_0080765c + 0x50) & 1;
          }
          g_currentExceptionFrame = local_264.previous;
          this_00 = pOVar29;
          if (uVar12 != 0) {
            iVar6 = *(int *)(DAT_0080765c + 100);
            iVar11 = *(int *)(DAT_0080765c + 0x60);
LAB_00530d9d:
            uVar19 = (iVar6 - iVar11) + 1;
            this_00 = pOVar29;
          }
LAB_00530da0:
          uVar19 = (uVar14 * 0x1f) / uVar19;
        }
      }
      else if (bVar5 == 7) {
        uVar19 = 0;
        if (g_sound == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = *(uint *)(DAT_0080765c + 0x38) & 1;
        }
        if (uVar14 != 0) {
          piVar37 = (int *)0x0;
          local_154.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_154;
          iVar6 = Library::MSVCRT::__setjmp3(local_154.jumpBuffer,0,unaff_EDI,iVar17);
          if (iVar6 == 0) {
            if (g_sound == 0) {
              uVar14 = 0;
            }
            else {
              uVar14 = *(uint *)(DAT_0080765c + 0x38) & 1;
            }
            if (uVar14 != 0) {
              piVar37 = &local_6c;
              uVar13 = 0x530d50;
              Library::DKW::SND::FUN_006b7e00(DAT_0080765c,0,&local_60,piVar37);
            }
            uVar14 = (uint)(local_60 + local_6c) >> 1;
          }
          else {
            uVar14 = 0;
          }
          if (g_sound == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(uint *)(DAT_0080765c + 0x38) & 1;
          }
          g_currentExceptionFrame = local_154.previous;
          this_00 = pOVar29;
          if (uVar12 != 0) {
            iVar6 = *(int *)(DAT_0080765c + 0x4c);
            iVar11 = *(int *)(DAT_0080765c + 0x48);
            goto LAB_00530d9d;
          }
          goto LAB_00530da0;
        }
        piVar37 = (int *)0x0;
      }
      uVar18 = uVar18 & 0xff;
      iVar6 = uVar13 + uVar18 * 0xd + 0x29;
      pOVar29 = (OptPanelTy *)0xf9;
      uVar36 = CreateSlider(this_00,0x6d,iVar6,0xf9,iVar6,uVar18 + 0xc09f,0x1f,uVar19,(int)piVar37);
      (&this_00->field_01B5)[uVar18] = uVar36;
      PaintVolume(this_00,(char)iVar6 - 4,(byte)uVar19);
      bVar5 = bVar5 + 1;
    } while (bVar5 < 8);
    break;
  case 7:
    if ((DAT_00807300 & 0xff) == 1) {
      bVar5 = 0;
    }
    else if ((DAT_00807300 & 0xff) == 2) {
      bVar5 = 2;
    }
    else {
      bVar5 = 1;
    }
    uVar19 = 0xc0af;
    pOVar29 = (OptPanelTy *)0xe9;
    uVar36 = UPanelTy::CreateTab((UPanelTy *)this_00,3,bVar5,0x1d,0x16,0xe9,0x11,0,0x12,0xc09f,
                                 0xc0af);
    this_00->field_01B5 = uVar36;
    bVar5 = 5;
    iVar6 = DAT_0080765c;
    do {
      iVar17 = 1;
      uVar18 = 4;
      if (bVar5 != 5) {
        uVar18 = (uint)bVar5;
      }
      uVar13 = (bVar5 != 5) - 1 & 4;
      if (bVar5 == 5) {
        if ((char)DAT_00807300 == '\x02') {
          if (g_sound == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = *(uint *)(iVar6 + 0x80) & 1;
          }
          if (uVar14 == 0) {
            uVar19 = 0;
            iVar17 = 0;
            goto LAB_0053138b;
          }
        }
        if ((char)DAT_00807300 == '\x04') {
          if (g_sound == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = *(uint *)(iVar6 + 0x68) & 1;
          }
          if (uVar14 != 0) goto LAB_005311d8;
switchD_005311ec_caseD_1:
          uVar19 = 0;
          iVar17 = 0;
          goto LAB_0053138b;
        }
LAB_005311d8:
        switch(DAT_00807300 & 0xff) {
        case 1:
          goto switchD_005311ec_caseD_1;
        case 2:
          local_198.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_198;
          iVar6 = Library::MSVCRT::__setjmp3(local_198.jumpBuffer,0,unaff_EDI,unaff_ESI);
          if (iVar6 == 0) {
            if (g_sound == 0) {
              uVar19 = 0;
            }
            else {
              uVar19 = *(uint *)(DAT_0080765c + 0x80) & 1;
            }
            if (uVar19 != 0) {
              uVar18 = 0x53124e;
              iVar17 = DAT_0080765c;
              Library::DKW::SND::FUN_006b7e00(DAT_0080765c,3,&local_4c,&local_50);
            }
            uVar14 = (uint)(local_50 + local_4c) >> 1;
          }
          else {
            uVar14 = 0;
          }
          if (g_sound == 0) {
            uVar19 = 0;
          }
          else {
            uVar19 = *(uint *)(DAT_0080765c + 0x80) & 1;
          }
          g_currentExceptionFrame = local_198.previous;
          if (uVar19 == 0) {
LAB_0053108d:
            uVar19 = 0;
            this_00 = pOVar29;
          }
          else {
            uVar19 = (*(int *)(DAT_0080765c + 0x94) - *(int *)(DAT_0080765c + 0x90)) + 1;
            this_00 = pOVar29;
          }
          break;
        default:
          goto switchD_005311ec_caseD_3;
        case 4:
          local_1dc.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_1dc;
          iVar6 = Library::MSVCRT::__setjmp3(local_1dc.jumpBuffer,0,unaff_EDI,unaff_ESI);
          if (iVar6 == 0) {
            if (g_sound == 0) {
              uVar19 = 0;
            }
            else {
              uVar19 = *(uint *)(DAT_0080765c + 0x68) & 1;
            }
            if (uVar19 != 0) {
              uVar18 = 0x531309;
              iVar17 = DAT_0080765c;
              Library::DKW::SND::FUN_006b7e00(DAT_0080765c,2,&local_64,&local_5c);
            }
            uVar14 = (uint)(local_64 + local_5c) >> 1;
          }
          else {
            uVar14 = 0;
          }
          if (g_sound == 0) {
            uVar19 = 0;
          }
          else {
            uVar19 = *(uint *)(DAT_0080765c + 0x68) & 1;
          }
          g_currentExceptionFrame = local_1dc.previous;
          if (uVar19 == 0) goto LAB_0053108d;
          uVar19 = (*(int *)(DAT_0080765c + 0x7c) - *(int *)(DAT_0080765c + 0x78)) + 1;
          this_00 = pOVar29;
          break;
        case 8:
          uVar19 = ((DAT_0080730a + 4000) * 0x1f) / 0xfa1;
          goto LAB_0053138b;
        }
LAB_0053108f:
        uVar19 = (uVar14 * 0x1f) / uVar19;
      }
      else {
        if (bVar5 == 6) {
          uVar19 = 0;
          if (g_sound == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = *(uint *)(iVar6 + 0x50) & 1;
          }
          if (uVar14 == 0) {
            iVar17 = 0;
            goto LAB_0053138b;
          }
          local_220.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_220;
          iVar6 = Library::MSVCRT::__setjmp3(local_220.jumpBuffer,0,unaff_EDI,unaff_ESI);
          if (iVar6 == 0) {
            if (g_sound == 0) {
              uVar19 = 0;
            }
            else {
              uVar19 = *(uint *)(DAT_0080765c + 0x50) & 1;
            }
            if (uVar19 != 0) {
              uVar18 = 0x53111e;
              iVar17 = DAT_0080765c;
              Library::DKW::SND::FUN_006b7e00
                        (DAT_0080765c,1,(undefined4 *)&stack0xffffffb8,&local_68);
            }
            uVar14 = (uint)(local_68 + in_stack_ffffffb8) >> 1;
          }
          else {
            uVar14 = 0;
          }
          if (g_sound == 0) {
            uVar19 = 0;
          }
          else {
            uVar19 = *(uint *)(DAT_0080765c + 0x50) & 1;
          }
          g_currentExceptionFrame = local_220.previous;
          if (uVar19 != 0) {
            uVar19 = (*(int *)(DAT_0080765c + 100) - *(int *)(DAT_0080765c + 0x60)) + 1;
            this_00 = pOVar29;
            goto LAB_0053108f;
          }
          goto LAB_0053108d;
        }
        if (bVar5 == 7) {
          uVar19 = 0;
          if (g_sound == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = *(uint *)(iVar6 + 0x38) & 1;
          }
          if (uVar14 == 0) {
            iVar17 = 0;
            goto LAB_0053138b;
          }
          local_2a8.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_2a8;
          iVar6 = Library::MSVCRT::__setjmp3(local_2a8.jumpBuffer,0,unaff_EDI,unaff_ESI);
          if (iVar6 == 0) {
            if (g_sound == 0) {
              uVar19 = 0;
            }
            else {
              uVar19 = *(uint *)(DAT_0080765c + 0x38) & 1;
            }
            if (uVar19 != 0) {
              uVar18 = 0x531039;
              iVar17 = DAT_0080765c;
              Library::DKW::SND::FUN_006b7e00(DAT_0080765c,0,&local_58,&local_54);
            }
            uVar14 = (uint)(local_58 + local_54) >> 1;
          }
          else {
            uVar14 = 0;
          }
          if (g_sound == 0) {
            uVar19 = 0;
          }
          else {
            uVar19 = *(uint *)(DAT_0080765c + 0x38) & 1;
          }
          g_currentExceptionFrame = local_2a8.previous;
          if (uVar19 == 0) goto LAB_0053108d;
          uVar19 = (*(int *)(DAT_0080765c + 0x4c) - *(int *)(DAT_0080765c + 0x48)) + 1;
          this_00 = pOVar29;
          goto LAB_0053108f;
        }
      }
LAB_0053138b:
      uVar18 = uVar18 & 0xff;
      iVar6 = uVar13 + uVar18 * 0xd + 0x29;
      pOVar29 = (OptPanelTy *)0xf9;
      uVar36 = CreateSlider(this_00,0x6d,iVar6,0xf9,iVar6,uVar18 + 0xc09f,0x1f,uVar19,iVar17);
      (&this_00->field_01B5)[uVar18] = uVar36;
      PaintVolume(this_00,(char)iVar6 - 4,(byte)uVar19);
      iVar6 = DAT_0080765c;
switchD_005311ec_caseD_3:
      bVar5 = bVar5 + 1;
    } while (bVar5 < 8);
    break;
  case 8:
    uVar36 = UPanelTy::CreateTab((UPanelTy *)this_00,3,3 - DAT_0080733b,0x1d,0x20,0x72,0x11,0,0x12,
                                 0xc09f,0xc0af);
    this_00->field_01B5 = uVar36;
    uVar36 = UPanelTy::CreateTab((UPanelTy *)this_00,3,2 - DAT_0080733a,0x99,0x20,0x72,0x11,0,0x12,
                                 0xc0a0,0xc0b0);
    *(undefined4 *)(this_00 + 1) = uVar36;
    uVar36 = UPanelTy::CreateTab((UPanelTy *)this_00,2,DAT_00807349,0x5d,0x68,0x72,0x11,0,0x12,
                                 0xc0a2,0xc0b2);
    *(undefined4 *)&this_00[1].field_0x8 = uVar36;
    break;
  case 9:
    iVar6 = 0;
    iVar17 = 0x1b;
    do {
      if (iVar17 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00530aa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&PTR_LAB_00531ce8)[iVar6])();
        return;
      }
      uVar27 = 0;
      puVar34 = (undefined4 *)0x0;
      pcVar9 = (char *)0x0;
      iVar26 = iVar6 + 0xc09f;
      uVar36 = 0;
      uVar30 = 0;
      sVar28 = 0;
      iVar11 = iVar6 + 0xc0af;
      pCVar16 = thunk_FUN_00571240(s_BUT_BUTOPT_007c7264,0);
      local_4c = 0x530b3a;
      uVar36 = UPanelTy::CreateBut((UPanelTy *)this_00,3,1,0x1d,iVar17,1,(int)pCVar16,iVar26,iVar11,
                                   sVar28,uVar30,uVar36,pcVar9,puVar34,uVar27);
      iVar17 = iVar17 + 0x12;
      *puVar34 = uVar36;
      iVar6 = iVar6 + 1;
    } while (pcVar9 != (char *)0x1);
    break;
  case 0xb:
    uVar38 = 0;
    uVar35 = 0;
    pcVar9 = (char *)0x0;
    uVar32 = 0;
    uVar30 = 0;
    sVar28 = 0;
    uVar27 = 0xc0b0;
    uVar36 = 0xc0a0;
    pCVar16 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    local_4c = 0x53072a;
    uVar36 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x7d,0x7d,1,(int)pCVar16,uVar36,uVar27,
                                 sVar28,uVar30,uVar32,pcVar9,uVar35,uVar38);
    this_00->field_01B5 = uVar36;
    break;
  case 0xc:
    iVar6 = this_00->field_003C;
    puVar34 = local_11fc;
    for (iVar17 = 0x21e; iVar17 != 0; iVar17 = iVar17 + -1) {
      *puVar34 = 0;
      puVar34 = puVar34 + 1;
    }
    local_11dc = iVar6 + 0x26;
    local_11fc[0] = 0;
    local_11fc[1] = 2;
    if (this_00->field_005C == 0) {
      local_11d8 = -this_00->field_0048;
    }
    else {
      local_11d8 = this_00->field_0044;
    }
    iVar6 = *(int *)&this_00->field_0x17c;
    local_11d8 = local_11d8 + 0x1a;
    local_11fc[2] = 1;
    local_11fc[3] = *(undefined4 *)(*(int *)&this_00[1].field_0x140 + 8);
    local_11ec = 0xca;
    if (*(int *)(iVar6 + 0xa0) != 0) {
      FUN_00710790(iVar6);
    }
    local_11e8 = *(int *)(iVar6 + 0x8a);
    local_11e0 = (undefined4)(0x6e / (longlong)local_11e8);
    local_11e4 = 1;
    local_11c0 = 2;
    local_11bc = 0x6332;
    local_114c = 4;
    local_1148 = 0;
    local_11c4 = *(undefined4 *)&this_00->field_0x8;
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
    local_1018 = FUN_0070a6f0(DAT_00806790,0x12,s_BUT_MSLDN_007c39d4,1);
    iVar6 = this_00->field_005C;
    local_1038 = 1;
    local_1034 = 1;
    local_fc4 = 2;
    local_fc0[2] = this_00->field_003C + 0xf2;
    piVar37 = local_1140;
    piVar25 = local_fc0;
    for (iVar17 = 0x5f; iVar17 != 0; iVar17 = iVar17 + -1) {
      *piVar25 = *piVar37;
      piVar37 = piVar37 + 1;
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
    local_e9c = FUN_0070aa70(DAT_00806790,s_BUT_MSLUP_007c39e0,0,1);
    local_e98 = FUN_0070a6f0(DAT_00806790,0x12,s_BUT_MSLUP_007c39e0,1);
    local_990 = 1;
    local_994 = 1;
    (**(code **)(**(int **)&this_00->field_0xc + 8))();
    this_00->field_0028 = 0x20;
    *(undefined4 *)&this_00->field_0x2c = 1;
    FUN_006e6080(this_00,2,this_00->field_01B5,(undefined4 *)&this_00->field_0x18);
    break;
  case 0xd:
    puVar34 = local_cc;
    for (iVar6 = 0x16; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar34 = 0;
      puVar34 = puVar34 + 1;
    }
    puVar10 = local_1c48;
    for (iVar6 = 0x70; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    bVar5 = 0;
    iVar6 = 0;
    iVar17 = 0;
    puVar10 = local_1c48 + 1;
    do {
      if (iVar6 == 0) {
        in_stack_ffffffbc = 800;
        in_stack_ffffffc0 = 600;
      }
      else if (iVar6 == 1) {
        in_stack_ffffffbc = 0x400;
        in_stack_ffffffc0 = 0x300;
      }
      else if (iVar6 == 2) {
        in_stack_ffffffbc = 0x500;
        in_stack_ffffffc0 = 0x400;
      }
      bVar4 = 0;
      puVar10[-1] = iVar6 + 1;
      *puVar10 = 2;
      if (0 < *(int *)(DAT_0080877a + 4)) {
        uVar19 = 0;
        do {
          iVar11 = DAT_0080877a + uVar19 * 0xc;
          if (((*(int *)(iVar11 + 8) == in_stack_ffffffbc) &&
              (*(int *)(DAT_0080877a + (uVar19 * 3 + 3) * 4) == in_stack_ffffffc0)) &&
             (*(int *)(iVar11 + 0x10) == 8)) {
            *puVar10 = (uint)(DAT_00807348 == bVar5);
            break;
          }
          bVar4 = bVar4 + 1;
          uVar19 = (uint)bVar4;
        } while ((int)uVar19 < *(int *)(DAT_0080877a + 4));
      }
      puVar10[2] = this_00->field_003C + 0x1d;
      if (this_00->field_005C == 0) {
        iVar11 = -this_00->field_0048;
      }
      else {
        iVar11 = this_00->field_0044;
      }
      puVar10[3] = iVar17 + 0x13 + iVar11;
      puVar10[4] = 0x72;
      puVar10[5] = 0x11;
      bVar5 = bVar5 + 1;
      iVar6 = iVar6 + 1;
      iVar17 = iVar17 + 0x12;
      puVar10 = puVar10 + 0x1c;
    } while (bVar5 < 3);
    local_80 = (_DAT_00807348 & 0xff) + 1;
    local_bc = *(undefined4 *)&this_00->field_0x8;
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
    (**(code **)(**(int **)&this_00->field_0xc + 8))();
    uVar38 = 0;
    uVar35 = 0;
    pcVar9 = (char *)0x0;
    uVar32 = 0;
    uVar30 = 0;
    sVar28 = 0;
    uVar27 = 0xc0b0;
    uVar36 = 0xc0a0;
    pCVar16 = thunk_FUN_00571240(s_BUT_BUTOPT_007c7264,0);
    local_4c = 0x530992;
    uVar36 = UPanelTy::CreateBut((UPanelTy *)this_00,1,0,0x1d,0x49,1,(int)pCVar16,uVar36,uVar27,
                                 sVar28,uVar30,uVar32,pcVar9,uVar35,uVar38);
    uVar39 = 0;
    uVar38 = 0;
    pcVar9 = (char *)0x0;
    uVar35 = 0;
    uVar30 = 0;
    sVar28 = 0;
    uVar32 = 0xc0b1;
    uVar27 = 0xc0a1;
    *(undefined4 *)(this_00 + 1) = uVar36;
    pCVar16 = thunk_FUN_00571240(s_BUT_BUTOPT_007c7264,0);
    local_4c = 0x5309da;
    uVar36 = UPanelTy::CreateBut((UPanelTy *)this_00,3,(-(uint)(DAT_00807342 != 0) & 2) + 1,0x1d,
                                 0x5b,1,(int)pCVar16,uVar27,uVar32,sVar28,uVar30,uVar35,pcVar9,
                                 uVar38,uVar39);
    *(undefined4 *)&this_00[1].field_0x4 = uVar36;
    uVar36 = CreateSlider(this_00,0x94,0x70,*(int *)(*(int *)&this_00->field_0x18c + 4) + 0xaf,0x70,
                          0xc0a2,3,DAT_00807346 / 5 - 1,1);
    iVar6 = *(int *)&this_00->field_0x18c;
    *(undefined4 *)&this_00[1].field_0x8 = uVar36;
    uVar36 = CreateSlider(this_00,0x94,0x82,*(int *)(iVar6 + 4) + 0xaf,0x82,0xc0a3,3,
                          (uint)DAT_00807347,1);
    *(undefined4 *)&this_00[1].field_0xc = uVar36;
    this_00[1].field_0x14c = DAT_00807348;
  }
  if ((this_00->field_0x1a4 == '\x01') || (this_00->field_0x1a9 == '\0')) {
    *(undefined4 *)&this_00->field_0x2c = 0;
  }
  else {
    *(undefined4 *)&this_00->field_0x2c = 1;
  }
  this_00->field_0028 = 0x20;
  FUN_006e6080(this_00,2,*(undefined4 *)&this_00->field_0x1b1,(undefined4 *)&this_00->field_0x18);
  this_00->field_0028 = 5;
  uVar19 = 0;
  do {
    if (*(int *)(&this_00->field_0x1ad + uVar19 * 4) != 0) {
      FUN_006e6080(this_00,2,*(int *)(&this_00->field_0x1ad + uVar19 * 4),
                   (undefined4 *)&this_00->field_0x18);
    }
    bVar5 = (char)uVar19 + 1;
    uVar19 = (uint)bVar5;
  } while (bVar5 < 2);
  g_currentExceptionFrame = local_110.previous;
  return;
}

