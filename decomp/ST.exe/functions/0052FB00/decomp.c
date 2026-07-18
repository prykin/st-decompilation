
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052fb00(void)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint *puVar6;
  LPCSTR pCVar7;
  char *pcVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  HANDLE pvVar14;
  LPSTR pCVar15;
  int iVar16;
  void *extraout_ECX;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  void *this;
  size_t unaff_ESI;
  void *unaff_EDI;
  uint *puVar20;
  uint *puVar21;
  char *pcVar22;
  char *pcVar23;
  int *piVar24;
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
  undefined4 **local_2a8;
  undefined4 local_2a4 [16];
  undefined4 **local_264;
  undefined4 local_260 [16];
  undefined4 **local_220;
  undefined4 local_21c [16];
  undefined4 **local_1dc;
  undefined4 local_1d8 [16];
  undefined4 **local_198;
  undefined4 local_194 [16];
  undefined4 **local_154;
  undefined4 local_150 [16];
  undefined4 **local_110;
  undefined4 local_10c [16];
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
  int iVar25;
  undefined4 uVar26;
  short sVar27;
  void *pvVar28;
  undefined2 uVar29;
  UINT UVar30;
  undefined4 uVar31;
  size_t sVar32;
  undefined4 *puVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  int *piVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  
  FUN_0072da40();
  local_110 = DAT_00858df8;
  DAT_00858df8 = &local_110;
  this = extraout_ECX;
  iVar5 = __setjmp3(local_10c,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    DAT_00858df8 = local_110;
    iVar16 = FUN_006ad4d0(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x350,0,iVar5,&DAT_007a4ccc);
    if (iVar16 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7c70a0,0x350);
    return;
  }
  iVar5 = 10;
  puVar9 = (uint *)((int)this + 0x1b5);
  do {
    if (*puVar9 != 0) {
      FUN_006e56b0(*(void **)((int)this + 0xc),*puVar9);
    }
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  thunk_FUN_00540760(*(undefined4 **)((int)this + 0x68),0,0,'\x01',*(byte **)((int)this + 0x184));
  FUN_00710a90(*(int *)((int)this + 0x68),0,0x31,2,0xc6,0xc);
  switch(*(undefined1 *)((int)this + 0x1a4)) {
  case 1:
    uVar18 = 0;
    iVar5 = -2;
    UVar30 = 16000;
    break;
  case 2:
    uVar18 = 0;
    iVar5 = -2;
    UVar30 = 0x3e87;
    break;
  case 3:
    UVar30 = 0x3e81;
    goto LAB_00530592;
  case 4:
    UVar30 = 0x3e82;
LAB_00530592:
    uVar35 = 0;
    iVar16 = -1;
    iVar5 = -2;
    puVar9 = (uint *)FUN_006b0140(UVar30,DAT_00807618);
    FUN_007119c0(puVar9,iVar5,iVar16,uVar35);
    pbVar19 = *(byte **)((int)this + 400);
LAB_005305a9:
    puVar33 = *(undefined4 **)((int)this + 0x68);
LAB_005305b4:
    thunk_FUN_00540760(puVar33,0x1d,0x13,'\x01',pbVar19);
    goto switchD_0052fbb9_caseD_9;
  case 5:
  case 0xb:
    uVar35 = 0;
    iVar16 = -1;
    iVar5 = -2;
    puVar9 = (uint *)FUN_006b0140(0x3ea8,DAT_00807618);
    FUN_007119c0(puVar9,iVar5,iVar16,uVar35);
    FUN_00710a90(*(int *)((int)this + 0x68),0,0x1d,0x13,0xee,0x6a);
    switch(*(undefined1 *)((int)this + 0x1ab)) {
    case 1:
    case 2:
    case 6:
      puVar9 = local_984;
      for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      iVar5 = FUN_00711110(*(void **)((int)this + 0x180),(uint *)((int)this + 0x1f5));
      if (iVar5 < 0xee) {
LAB_0052fd4a:
        uVar18 = 0xffffffff;
        pcVar8 = (char *)((int)this + 0x1f5);
        do {
          pcVar23 = pcVar8;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar23 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar23;
        } while (cVar1 != '\0');
        uVar18 = ~uVar18;
        puVar9 = (uint *)(pcVar23 + -uVar18);
        puVar6 = local_984;
        for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *puVar6 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      else {
        iVar5 = -1;
        puVar9 = (uint *)((int)this + 0x1f5);
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          uVar18 = *puVar9;
          puVar9 = (uint *)((int)puVar9 + 1);
        } while ((char)uVar18 != '\0');
        puVar9 = (uint *)0xa;
        do {
          puVar6 = local_984;
          puVar9 = (uint *)((int)puVar9 + 1);
          _strncpy((char *)puVar6,(char *)((int)this + 0x1f5),(size_t)puVar9);
          uVar18 = 0xffffffff;
          pcVar8 = &DAT_007c7278;
          do {
            pcVar23 = pcVar8;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1;
            pcVar23 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar23;
          } while (cVar1 != '\0');
          uVar18 = ~uVar18;
          iVar5 = -1;
          puVar21 = local_984;
          do {
            puVar20 = puVar21;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            puVar20 = (uint *)((int)puVar21 + 1);
            uVar17 = *puVar21;
            puVar21 = puVar20;
          } while ((char)uVar17 != '\0');
          pcVar8 = pcVar23 + -uVar18;
          pcVar23 = (char *)((int)puVar20 + -1);
          for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar23 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar23 = pcVar23 + 4;
          }
          puVar21 = local_984;
          for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
            *pcVar23 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar23 = pcVar23 + 1;
          }
          iVar5 = FUN_00711110(*(void **)((int)this + 0x180),puVar21);
        } while ((iVar5 < 0xee) && ((int)puVar9 < (int)puVar6));
        if (puVar9 == puVar6) goto LAB_0052fd4a;
        puVar6 = local_984;
        for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        _strncpy((char *)local_984,(char *)((int)this + 0x1f5),(size_t)((int)puVar9 + -3));
        uVar18 = 0xffffffff;
        pcVar8 = &DAT_007c7274;
        do {
          pcVar23 = pcVar8;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar23 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar23;
        } while (cVar1 != '\0');
        uVar18 = ~uVar18;
        iVar5 = -1;
        puVar9 = local_984;
        do {
          puVar6 = puVar9;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          puVar6 = (uint *)((int)puVar9 + 1);
          uVar17 = *puVar9;
          puVar9 = puVar6;
        } while ((char)uVar17 != '\0');
        puVar9 = (uint *)(pcVar23 + -uVar18);
        puVar6 = (uint *)((int)puVar6 + -1);
        for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *puVar6 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      UVar30 = *(UINT *)((int)this + 0x1a5);
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(char *)puVar6 = (char)*puVar9;
        puVar9 = (uint *)((int)puVar9 + 1);
        puVar6 = (uint *)((int)puVar6 + 1);
      }
      pCVar7 = (LPCSTR)FUN_006b0140(UVar30,DAT_00807618);
      wsprintfA((LPSTR)((int)this + 0x6c),pCVar7);
      break;
    default:
      pcVar8 = (char *)FUN_006b0140(*(UINT *)((int)this + 0x1a5),DAT_00807618);
      uVar18 = 0xffffffff;
      do {
        pcVar23 = pcVar8;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar23 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar23;
      } while (cVar1 != '\0');
      uVar18 = ~uVar18;
      pcVar8 = pcVar23 + -uVar18;
      pcVar23 = (char *)((int)this + 0x6c);
      for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar23 = pcVar23 + 4;
      }
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *pcVar23 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar23 = pcVar23 + 1;
      }
      break;
    case 7:
      puVar9 = local_880;
      for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      iVar5 = 0;
      puVar9 = (uint *)0x0;
      if (DAT_00808aaf != 0) {
        puVar6 = &DAT_00808ab0;
        do {
          puVar9 = puVar6;
          if (puVar6[0x10] == *(uint *)(DAT_00802a38 + 0xf4)) break;
          iVar5 = iVar5 + 1;
          puVar6 = puVar6 + 0x27;
          puVar9 = (uint *)0x0;
        } while (iVar5 < (int)(uint)DAT_00808aaf);
      }
      if (puVar9 == (uint *)0x0) {
        puVar6 = (uint *)&DAT_007c7274;
LAB_0052ff02:
        uVar18 = 0xffffffff;
        do {
          puVar9 = puVar6;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          puVar9 = (uint *)((int)puVar6 + 1);
          uVar17 = *puVar6;
          puVar6 = puVar9;
        } while ((char)uVar17 != '\0');
        uVar18 = ~uVar18;
        puVar9 = (uint *)((int)puVar9 - uVar18);
        puVar6 = local_880;
        for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *puVar6 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      else {
        puVar6 = puVar9;
        iVar5 = FUN_00711110(*(void **)((int)this + 0x180),puVar9);
        if (iVar5 < 200) goto LAB_0052ff02;
        iVar5 = -1;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          uVar18 = *puVar9;
          puVar9 = (uint *)((int)puVar9 + 1);
        } while ((char)uVar18 != '\0');
        unaff_ESI = 10;
        do {
          unaff_ESI = unaff_ESI + 1;
          _strncpy((char *)local_880,(char *)puVar6,unaff_ESI);
          uVar18 = 0xffffffff;
          pcVar8 = &DAT_007c7278;
          do {
            pcVar23 = pcVar8;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1;
            pcVar23 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar23;
          } while (cVar1 != '\0');
          uVar18 = ~uVar18;
          iVar5 = -1;
          puVar9 = local_880;
          do {
            puVar21 = puVar9;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            puVar21 = (uint *)((int)puVar9 + 1);
            uVar17 = *puVar9;
            puVar9 = puVar21;
          } while ((char)uVar17 != '\0');
          pcVar8 = pcVar23 + -uVar18;
          pcVar23 = (char *)((int)puVar21 + -1);
          for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
            *(undefined4 *)pcVar23 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar23 = pcVar23 + 4;
          }
          puVar9 = local_880;
          for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
            *pcVar23 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar23 = pcVar23 + 1;
          }
          sVar32 = 0x52fe7b;
          iVar5 = FUN_00711110(*(void **)((int)this + 0x180),puVar9);
        } while ((iVar5 < 200) && ((int)unaff_ESI < (int)sVar32));
        if (unaff_ESI == sVar32) goto LAB_0052ff02;
        puVar9 = local_880;
        for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        _strncpy((char *)local_880,(char *)puVar6,unaff_ESI - 3);
        uVar18 = 0xffffffff;
        pcVar8 = &DAT_007c7274;
        do {
          pcVar23 = pcVar8;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar23 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar23;
        } while (cVar1 != '\0');
        uVar18 = ~uVar18;
        iVar5 = -1;
        puVar9 = local_880;
        do {
          puVar6 = puVar9;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          puVar6 = (uint *)((int)puVar9 + 1);
          uVar17 = *puVar9;
          puVar9 = puVar6;
        } while ((char)uVar17 != '\0');
        puVar9 = (uint *)(pcVar23 + -uVar18);
        puVar6 = (uint *)((int)puVar6 + -1);
        for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *puVar6 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      UVar30 = *(UINT *)((int)this + 0x1a5);
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(char *)puVar6 = (char)*puVar9;
        puVar9 = (uint *)((int)puVar9 + 1);
        puVar6 = (uint *)((int)puVar6 + 1);
      }
      pCVar7 = (LPCSTR)FUN_006b0140(UVar30,DAT_00807618);
      wsprintfA((LPSTR)((int)this + 0x6c),pCVar7);
      break;
    case 10:
      pCVar7 = (LPCSTR)FUN_006b0140(*(UINT *)((int)this + 0x1a5),DAT_00807618);
      wsprintfA((LPSTR)((int)this + 0x6c),pCVar7);
    }
    if (DAT_0080874e == '\x03') {
      uVar18 = 5;
    }
    else {
      uVar18 = -(uint)(DAT_0080874e != '\x01') & 7;
    }
    FUN_00711b70((uint *)((int)this + 0x6c),-2,-1,uVar18,-1,-1);
    goto switchD_0052fbb9_caseD_9;
  case 6:
    uVar35 = 0;
    iVar16 = -1;
    iVar5 = -2;
    puVar9 = (uint *)FUN_006b0140(0x3e8a,DAT_00807618);
    FUN_007119c0(puVar9,iVar5,iVar16,uVar35);
    FUN_00710a90(*(int *)((int)this + 0x68),0,0x6b,0x6e,0xa0,0xb);
    uVar18 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar16 = -1;
    iVar5 = -2;
    puVar9 = (uint *)FUN_006b0140(0x3ee4,DAT_00807618);
    FUN_007119c0(puVar9,iVar5,iVar16,uVar18);
    FUN_00710a90(*(int *)((int)this + 0x68),0,0x1d,0x61,0x4e,0xb);
    uVar18 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar16 = -1;
    iVar5 = -3;
    puVar9 = (uint *)FUN_006b0140(0x3eea,DAT_00807618);
    FUN_007119c0(puVar9,iVar5,iVar16,uVar18);
    FUN_00710a90(*(int *)((int)this + 0x68),0,0x1d,0x77,0x4e,0xb);
    uVar18 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar16 = -1;
    iVar5 = -3;
    puVar9 = (uint *)FUN_006b0140(0x3eeb,DAT_00807618);
    FUN_007119c0(puVar9,iVar5,iVar16,uVar18);
    FUN_00710a90(*(int *)((int)this + 0x68),0,0x1d,0x84,0x4e,0xb);
    goto LAB_00530554;
  case 7:
    uVar35 = 0;
    iVar16 = -1;
    iVar5 = -2;
    puVar9 = (uint *)FUN_006b0140(0x3e8b,DAT_00807618);
    FUN_007119c0(puVar9,iVar5,iVar16,uVar35);
    FUN_00710a90(*(int *)((int)this + 0x68),0,0x1d,0x61,0x4e,0xb);
    uVar18 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar16 = -1;
    iVar5 = -3;
    puVar9 = (uint *)FUN_006b0140(0x3ee9,DAT_00807618);
    FUN_007119c0(puVar9,iVar5,iVar16,uVar18);
    FUN_00710a90(*(int *)((int)this + 0x68),0,0x6b,0x6e,0xa0,0xb);
    uVar18 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar16 = -1;
    iVar5 = -2;
    puVar9 = (uint *)FUN_006b0140(0x3ee4,DAT_00807618);
    FUN_007119c0(puVar9,iVar5,iVar16,uVar18);
    FUN_00710a90(*(int *)((int)this + 0x68),0,0x1d,0x77,0x4e,0xb);
    uVar18 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar16 = -1;
    iVar5 = -3;
    puVar9 = (uint *)FUN_006b0140(0x3eeb,DAT_00807618);
    FUN_007119c0(puVar9,iVar5,iVar16,uVar18);
    FUN_00710a90(*(int *)((int)this + 0x68),0,0x1d,0x84,0x4e,0xb);
LAB_00530554:
    uVar18 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar5 = -3;
    UVar30 = 0x3eec;
    break;
  case 8:
    uVar35 = 0;
    iVar16 = -1;
    iVar5 = -2;
    puVar9 = (uint *)FUN_006b0140(0x3e8c,DAT_00807618);
    FUN_007119c0(puVar9,iVar5,iVar16,uVar35);
    FUN_00710a90(*(int *)((int)this + 0x68),0,0x1d,0x15,0x77,0xc);
    uVar35 = 0;
    iVar16 = -1;
    iVar5 = -2;
    puVar9 = (uint *)FUN_006b0140(0x3eef,DAT_00807618);
    FUN_007119c0(puVar9,iVar5,iVar16,uVar35);
    FUN_00710a90(*(int *)((int)this + 0x68),0,0x94,0x15,0x77,0xc);
    uVar35 = 0;
    iVar16 = -1;
    iVar5 = -2;
    puVar9 = (uint *)FUN_006b0140(0x3eed,DAT_00807618);
    FUN_007119c0(puVar9,iVar5,iVar16,uVar35);
    FUN_00710a90(*(int *)((int)this + 0x68),0,0x1d,0x5b,0xf0,0xc);
    uVar18 = 0;
    iVar5 = -2;
    UVar30 = 0x3f07;
    break;
  case 9:
    uVar18 = 0;
    iVar5 = -2;
    UVar30 = 0x3e8d;
    break;
  default:
    goto switchD_0052fbb9_caseD_9;
  case 0xc:
    uVar35 = 0;
    iVar16 = -1;
    iVar5 = -2;
    puVar9 = (uint *)FUN_006b0140(0x3e89,DAT_00807618);
    FUN_007119c0(puVar9,iVar5,iVar16,uVar35);
    pbVar19 = *(byte **)((int)this + 0x194);
    goto LAB_005305a9;
  case 0xd:
    uVar35 = 0;
    iVar16 = -1;
    iVar5 = -2;
    puVar9 = (uint *)FUN_006b0140(0x3e88,DAT_00807618);
    FUN_007119c0(puVar9,iVar5,iVar16,uVar35);
    FUN_00710a90(*(int *)((int)this + 0x68),0,0x1d,0x6d,0x77,0x11);
    uVar18 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar16 = -1;
    iVar5 = -2;
    puVar9 = (uint *)FUN_006b0140(0x3ef9,DAT_00807618);
    FUN_007119c0(puVar9,iVar5,iVar16,uVar18);
    FUN_00710a90(*(int *)((int)this + 0x68),0,0x1d,0x7f,0x77,0x11);
    uVar18 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar16 = -1;
    iVar5 = -2;
    puVar9 = (uint *)FUN_006b0140(0x3efa,DAT_00807618);
    FUN_007119c0(puVar9,iVar5,iVar16,uVar18);
    thunk_FUN_00540760(*(undefined4 **)((int)this + 0x68),0xaa,0x6f,'\x01',
                       *(byte **)((int)this + 0x18c));
    puVar9 = (uint *)((int)this + 0x6c);
    wsprintfA((LPSTR)puVar9,&DAT_007c1890);
    FUN_00710a90(*(int *)((int)this + 0x68),0,0xaa,0x6f,*(int *)(*(int *)((int)this + 0x18c) + 4),
                 *(int *)(*(int *)((int)this + 0x18c) + 8));
    FUN_007119c0(puVar9,-2,-1,0);
    thunk_FUN_00540760(*(undefined4 **)((int)this + 0x68),0xaa,0x81,'\x01',
                       *(byte **)((int)this + 0x18c));
    wsprintfA((LPSTR)puVar9,&DAT_007c1890);
    FUN_00710a90(*(int *)((int)this + 0x68),0,0xaa,0x81,*(int *)(*(int *)((int)this + 0x18c) + 4),
                 *(int *)(*(int *)((int)this + 0x18c) + 8));
    FUN_007119c0(puVar9,-2,-1,0);
    goto switchD_0052fbb9_caseD_9;
  case 0xe:
    uVar35 = 0;
    iVar16 = -1;
    iVar5 = -2;
    puVar9 = (uint *)FUN_006b0140(0x3e94,DAT_00807618);
    FUN_007119c0(puVar9,iVar5,iVar16,uVar35);
    pbVar19 = *(byte **)((int)this + 400);
    puVar33 = *(undefined4 **)((int)this + 0x68);
    goto LAB_005305b4;
  }
  iVar16 = -1;
  puVar9 = (uint *)FUN_006b0140(UVar30,DAT_00807618);
  FUN_007119c0(puVar9,iVar5,iVar16,uVar18);
switchD_0052fbb9_caseD_9:
  switch(*(char *)((int)this + 0x1a4)) {
  case '\x01':
    bVar4 = 0;
    uVar18 = 0;
    do {
      iVar5 = 1;
      if (((DAT_00808783 == '\x03') && (bVar4 != 0)) &&
         ((bVar4 < 3 || ((bVar4 == 4 && (DAT_008067a0 != '\0')))))) {
        iVar5 = 0;
      }
      uVar31 = 0;
      uVar26 = 0;
      pcVar8 = (char *)0x0;
      uVar35 = 0;
      uVar29 = 0;
      iVar16 = uVar18 + 0xc0af;
      sVar27 = 0;
      iVar10 = uVar18 + 0xc09f;
      pCVar15 = thunk_FUN_00571240(s_BUT_BUTOPT_007c7264,0);
      local_4c = 0x530655;
      uVar35 = thunk_FUN_0053dea0(1,iVar5,0x1d,uVar18 * 0x12 + 0x13,1,(int)pCVar15,iVar10,iVar16,
                                  sVar27,uVar29,uVar35,pcVar8,uVar26,uVar31);
      *(undefined4 *)((int)this + uVar18 * 4 + 0x1b5) = uVar35;
      bVar4 = (char)uVar18 + 1;
      uVar18 = (uint)bVar4;
    } while (bVar4 < 7);
    break;
  case '\x02':
    iVar5 = 0xc09f;
    iVar16 = 0x25;
    do {
      uVar26 = 0;
      puVar33 = (undefined4 *)0x0;
      pcVar8 = (char *)0x0;
      uVar35 = 0;
      uVar29 = 0;
      iVar10 = iVar5 + 0x10;
      sVar27 = 0;
      iVar25 = iVar5;
      pCVar15 = thunk_FUN_00571240(s_BUT_BUTOPT_007c7264,0);
      local_4c = 0x530784;
      uVar35 = thunk_FUN_0053dea0(1,1,0x1d,iVar16,1,(int)pCVar15,iVar25,iVar10,sVar27,uVar29,uVar35,
                                  pcVar8,puVar33,uVar26);
      iVar5 = iVar5 + 1;
      iVar16 = iVar16 + 0x12;
      *puVar33 = uVar35;
    } while (pcVar8 != (char *)0x1);
    break;
  case '\x03':
  case '\x04':
  case '\x0e':
    if (*(char *)((int)this + 0x1a4) != '\x0e') {
      if (*(HANDLE *)((int)this + 0x1dd) != (HANDLE)0x0) {
        FindCloseChangeNotification(*(HANDLE *)((int)this + 0x1dd));
        *(undefined4 *)((int)this + 0x1dd) = 0;
      }
      uVar18 = 0xffffffff;
      pcVar8 = &DAT_00807680;
      do {
        pcVar23 = pcVar8;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar23 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar23;
      } while (cVar1 != '\0');
      uVar18 = ~uVar18;
      pcVar8 = pcVar23 + -uVar18;
      pcVar23 = (char *)((int)this + 0x6c);
      for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar23 = pcVar23 + 4;
      }
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *pcVar23 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar23 = pcVar23 + 1;
      }
      uVar18 = 0xffffffff;
      pcVar8 = PTR_s_SAVEGAME__0079acec;
      do {
        pcVar23 = pcVar8;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar23 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar23;
      } while (cVar1 != '\0');
      uVar18 = ~uVar18;
      iVar5 = -1;
      pcVar8 = (char *)((int)this + 0x6c);
      do {
        pcVar22 = pcVar8;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar22 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar22;
      } while (cVar1 != '\0');
      pcVar8 = pcVar23 + -uVar18;
      pcVar23 = pcVar22 + -1;
      for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar23 = pcVar23 + 4;
      }
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *pcVar23 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar23 = pcVar23 + 1;
      }
      uVar18 = 0xffffffff;
      pcVar8 = (char *)&DAT_00807ddd;
      do {
        pcVar23 = pcVar8;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar23 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar23;
      } while (cVar1 != '\0');
      uVar18 = ~uVar18;
      iVar5 = -1;
      pcVar8 = (char *)((int)this + 0x6c);
      do {
        pcVar22 = pcVar8;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar22 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar22;
      } while (cVar1 != '\0');
      pcVar8 = pcVar23 + -uVar18;
      pcVar23 = pcVar22 + -1;
      for (uVar17 = uVar18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar23 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar23 = pcVar23 + 4;
      }
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *pcVar23 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar23 = pcVar23 + 1;
      }
      FUN_006b78c0((char *)((int)this + 0x6c),(char *)((int)this + 0x6c));
      pvVar14 = FindFirstChangeNotificationA((LPCSTR)((int)this + 0x6c),0,1);
      *(HANDLE *)((int)this + 0x1dd) = pvVar14;
      if (pvVar14 == (HANDLE)0xffffffff) {
        *(undefined4 *)((int)this + 0x1dd) = 0;
      }
    }
    iVar5 = *(int *)((int)this + 0x5c);
    piVar36 = local_77c;
    for (iVar16 = 0x135; iVar16 != 0; iVar16 = iVar16 + -1) {
      *piVar36 = 0;
      piVar36 = piVar36 + 1;
    }
    local_77c[0] = 0;
    local_77c[2] = *(int *)((int)this + 0x3c) + 0x26;
    if (iVar5 == 0) {
      local_77c[3] = -*(int *)((int)this + 0x48);
    }
    else {
      local_77c[3] = *(int *)((int)this + 0x44);
    }
    local_77c[3] = local_77c[3] + 0x31;
    local_754 = *(undefined4 *)((int)this + 8);
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
    local_644 = *(int *)((int)this + 0x3c) + 0xf2;
    local_650 = 2;
    local_64c = 0;
    local_648 = 2;
    local_544 = 1;
    local_540 = 1;
    if (iVar5 == 0) {
      local_640 = -*(int *)((int)this + 0x48);
    }
    else {
      local_640 = *(int *)((int)this + 0x44);
    }
    local_640 = local_640 + 0x30;
    local_63c = 0x11;
    local_638 = 0x24;
    local_734 = local_754;
    local_714 = local_754;
    local_6f4 = local_754;
    local_528 = FUN_0070aa70(DAT_00806790,s_BUT_MSLUP_007c39e0,0,1);
    local_524 = FUN_0070a6f0(DAT_00806790,0x12,s_BUT_MSLUP_007c39e0,1);
    local_5ec = *(undefined4 *)((int)this + 8);
    local_3c4 = 1;
    local_3c0 = 1;
    local_4c4 = *(int *)((int)this + 0x3c) + 0xf2;
    local_53c = 500;
    local_538 = 0x32;
    local_5e8 = 2;
    local_5e4 = 0x8164;
    local_4d0 = 2;
    local_4cc = 0;
    local_4c8 = 2;
    if (*(int *)((int)this + 0x5c) == 0) {
      local_4c0 = -*(int *)((int)this + 0x48);
    }
    else {
      local_4c0 = *(int *)((int)this + 0x44);
    }
    local_4c0 = local_4c0 + 0x51;
    local_4bc = 0x11;
    local_4b8 = 0x24;
    local_3a8 = FUN_0070aa70(DAT_00806790,s_BUT_MSLDN_007c39d4,0,1);
    local_3a4 = FUN_0070a6f0(DAT_00806790,0x12,s_BUT_MSLDN_007c39d4,1);
    local_46c = *(undefined4 *)((int)this + 8);
    local_3bc = 500;
    local_3b8 = 0x32;
    local_468 = 2;
    local_464 = 0x8165;
    (**(code **)(**(int **)((int)this + 0xc) + 8))();
    if ((*(int *)((int)this + 0x5c) == 0) || (uVar35 = 0x55, DAT_0080734c == '\0')) {
      uVar35 = 0x56;
    }
    *(undefined4 *)((int)this + 0x28) = uVar35;
    if (*(int *)((int)this + 0x1b5) != 0) {
      FUN_006e6080(this,0x80000002,*(int *)((int)this + 0x1b5),(undefined4 *)((int)this + 0x18));
    }
    if (*(char *)((int)this + 0x1a4) == '\x03') {
      uVar35 = *(undefined4 *)((int)this + 0x17c);
      piVar36 = local_1a88;
      for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar36 = 0;
        piVar36 = piVar36 + 1;
      }
      local_1a88[0] = 0;
      local_1a88[3] = *(int *)((int)this + 0x3c) + 0x26;
      local_1a88[1] = 9;
      if (*(int *)((int)this + 0x5c) == 0) {
        local_1a78 = -*(int *)((int)this + 0x48);
      }
      else {
        local_1a78 = *(int *)((int)this + 0x44);
      }
      local_1a68 = *(undefined4 *)((int)this + 0x1f1);
      local_1a78 = local_1a78 + 0x1c;
      local_1228 = 1;
      local_122c = 1;
      local_1a3c = *(undefined4 *)((int)this + 8);
      local_1a74 = 0xde;
      local_1a70 = 0xb;
      local_1a6c = 0x104;
      local_1a38 = 2;
      local_1a34 = 0xc0b0;
      local_19f8 = 2;
      local_19f4 = 0xc0a0;
      local_1a88[2] = uVar35;
      local_19fc = local_1a3c;
      (**(code **)(**(int **)((int)this + 0xc) + 8))();
    }
    uVar37 = 0;
    uVar34 = 0;
    pcVar8 = (char *)0x0;
    uVar31 = 0;
    uVar29 = 0;
    sVar27 = 0;
    uVar26 = 0xc0b1;
    uVar35 = 0xc0a1;
    if (*(char *)((int)this + 0x1a4) == '\x0e') {
      pCVar15 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
      local_4c = 0x5318f5;
      uVar35 = thunk_FUN_0053dea0(0,1,0x78,0x7d,1,(int)pCVar15,uVar35,uVar26,sVar27,uVar29,uVar31,
                                  pcVar8,uVar34,uVar37);
      *(undefined4 *)((int)this + 0x1bd) = uVar35;
      thunk_FUN_005325b0(this);
    }
    else {
      pCVar15 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
      local_4c = 0x531882;
      uVar35 = thunk_FUN_0053dea0(0,1,0x5d,0x7c,1,(int)pCVar15,uVar35,uVar26,sVar27,uVar29,uVar31,
                                  pcVar8,uVar34,uVar37);
      uVar38 = 0;
      uVar37 = 0;
      pcVar8 = (char *)0x0;
      uVar34 = 0;
      uVar29 = 0;
      sVar27 = 0;
      uVar31 = 0xc0b2;
      uVar26 = 0xc0a2;
      *(undefined4 *)((int)this + 0x1bd) = uVar35;
      pCVar15 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
      local_4c = 0x5318c2;
      uVar35 = thunk_FUN_0053dea0(0,1,0x94,0x7c,1,(int)pCVar15,uVar26,uVar31,sVar27,uVar29,uVar34,
                                  pcVar8,uVar37,uVar38);
      *(undefined4 *)((int)this + 0x1c1) = uVar35;
      thunk_FUN_00532d50(*(uint *)((int)this + 0x1e1));
    }
    break;
  case '\x05':
    uVar37 = 0;
    uVar34 = 0;
    pcVar8 = (char *)0x0;
    uVar31 = 0;
    uVar29 = 0;
    sVar27 = 0;
    uVar26 = 0xc0af;
    uVar35 = 0xc09f;
    pCVar15 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    local_4c = 0x5306a8;
    uVar35 = thunk_FUN_0053dea0(0,1,0x5e,0x7d,1,(int)pCVar15,uVar35,uVar26,sVar27,uVar29,uVar31,
                                pcVar8,uVar34,uVar37);
    uVar38 = 0;
    uVar37 = 0;
    pcVar8 = (char *)0x0;
    uVar34 = 0;
    uVar29 = 0;
    sVar27 = 0;
    uVar31 = 0xc0b0;
    uVar26 = 0xc0a0;
    *(undefined4 *)((int)this + 0x1b5) = uVar35;
    pCVar15 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    local_4c = 0x5306e8;
    uVar35 = thunk_FUN_0053dea0(0,1,0x97,0x7d,1,(int)pCVar15,uVar26,uVar31,sVar27,uVar29,uVar34,
                                pcVar8,uVar37,uVar38);
    *(undefined4 *)((int)this + 0x1b9) = uVar35;
    break;
  case '\x06':
    iVar5 = 0xc09f;
    iVar16 = 0x16;
    do {
      uVar35 = 0;
      puVar33 = (undefined4 *)0x0;
      pcVar8 = (char *)0x0;
      uVar18 = 0;
      uVar29 = 0;
      bVar4 = '\x01' << ((char)iVar5 + 0x61U & 0x1f) & DAT_00807300._1_1_;
      iVar10 = iVar5 + 0x10;
      pvVar28 = (void *)0x0;
      iVar25 = iVar5;
      pCVar15 = thunk_FUN_00571240(s_BUT_BUTOPT_007c7264,0);
      local_4c = 0x530c65;
      uVar35 = thunk_FUN_0053dea0(3,(-(uint)(bVar4 != 0) & 2) + 1,0x1d,iVar16,1,(int)pCVar15,iVar25,
                                  iVar10,(short)pvVar28,uVar29,uVar18,pcVar8,puVar33,uVar35);
      iVar5 = iVar5 + 1;
      iVar16 = iVar16 + 0x12;
      *puVar33 = uVar35;
    } while (pcVar8 != (char *)0x1);
    bVar4 = 5;
    do {
      piVar36 = (int *)0x1;
      uVar17 = 4;
      if (bVar4 != 5) {
        uVar17 = (uint)bVar4;
      }
      uVar12 = (bVar4 != 5) - 1 & 4;
      if (bVar4 == 5) {
        uVar18 = ((DAT_0080730e + 4000) * 0x1f) / 0xfa1;
      }
      else if (bVar4 == 6) {
        uVar18 = 0;
        if (DAT_00807658 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(uint *)(DAT_0080765c + 0x50) & 1;
        }
        if (uVar13 == 0) {
          piVar36 = (int *)0x0;
        }
        else {
          piVar36 = (int *)0x0;
          local_264 = DAT_00858df8;
          DAT_00858df8 = &local_264;
          iVar5 = __setjmp3(local_260,0,unaff_EDI,iVar16);
          if (iVar5 == 0) {
            if (DAT_00807658 == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = *(uint *)(DAT_0080765c + 0x50) & 1;
            }
            if (uVar13 != 0) {
              piVar36 = &local_70;
              uVar12 = 0x530e3a;
              FUN_006b7e00(DAT_0080765c,1,&local_74,piVar36);
            }
            uVar13 = (uint)(local_74 + local_70) >> 1;
          }
          else {
            uVar13 = 0;
          }
          if (DAT_00807658 == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = *(uint *)(DAT_0080765c + 0x50) & 1;
          }
          DAT_00858df8 = local_264;
          this = pvVar28;
          if (uVar11 != 0) {
            iVar5 = *(int *)(DAT_0080765c + 100);
            iVar10 = *(int *)(DAT_0080765c + 0x60);
LAB_00530d9d:
            uVar18 = (iVar5 - iVar10) + 1;
            this = pvVar28;
          }
LAB_00530da0:
          uVar18 = (uVar13 * 0x1f) / uVar18;
        }
      }
      else if (bVar4 == 7) {
        uVar18 = 0;
        if (DAT_00807658 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(uint *)(DAT_0080765c + 0x38) & 1;
        }
        if (uVar13 != 0) {
          piVar36 = (int *)0x0;
          local_154 = DAT_00858df8;
          DAT_00858df8 = &local_154;
          iVar5 = __setjmp3(local_150,0,unaff_EDI,iVar16);
          if (iVar5 == 0) {
            if (DAT_00807658 == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = *(uint *)(DAT_0080765c + 0x38) & 1;
            }
            if (uVar13 != 0) {
              piVar36 = &local_6c;
              uVar12 = 0x530d50;
              FUN_006b7e00(DAT_0080765c,0,&local_60,piVar36);
            }
            uVar13 = (uint)(local_60 + local_6c) >> 1;
          }
          else {
            uVar13 = 0;
          }
          if (DAT_00807658 == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = *(uint *)(DAT_0080765c + 0x38) & 1;
          }
          DAT_00858df8 = local_154;
          this = pvVar28;
          if (uVar11 != 0) {
            iVar5 = *(int *)(DAT_0080765c + 0x4c);
            iVar10 = *(int *)(DAT_0080765c + 0x48);
            goto LAB_00530d9d;
          }
          goto LAB_00530da0;
        }
        piVar36 = (int *)0x0;
      }
      uVar17 = uVar17 & 0xff;
      iVar5 = uVar12 + uVar17 * 0xd + 0x29;
      pvVar28 = (void *)0xf9;
      uVar35 = thunk_FUN_0052eb50(0x6d,iVar5,0xf9,iVar5,uVar17 + 0xc09f,0x1f,uVar18,(int)piVar36);
      *(undefined4 *)((int)this + uVar17 * 4 + 0x1b5) = uVar35;
      thunk_FUN_0052edf0((char)iVar5 - 4,(byte)uVar18);
      bVar4 = bVar4 + 1;
    } while (bVar4 < 8);
    break;
  case '\a':
    if ((DAT_00807300 & 0xff) == 1) {
      bVar4 = 0;
    }
    else if ((DAT_00807300 & 0xff) == 2) {
      bVar4 = 2;
    }
    else {
      bVar4 = 1;
    }
    uVar18 = 0xc0af;
    pvVar28 = (void *)0xe9;
    uVar35 = thunk_FUN_0053e1c0(3,bVar4,0x1d,0x16,0xe9,0x11,0,0x12,0xc09f,0xc0af);
    *(undefined4 *)((int)this + 0x1b5) = uVar35;
    bVar4 = 5;
    iVar5 = DAT_0080765c;
    do {
      iVar16 = 1;
      uVar17 = 4;
      if (bVar4 != 5) {
        uVar17 = (uint)bVar4;
      }
      uVar12 = (bVar4 != 5) - 1 & 4;
      if (bVar4 == 5) {
        if ((char)DAT_00807300 == '\x02') {
          if (DAT_00807658 == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = *(uint *)(iVar5 + 0x80) & 1;
          }
          if (uVar13 == 0) {
            uVar18 = 0;
            iVar16 = 0;
            goto LAB_0053138b;
          }
        }
        if ((char)DAT_00807300 == '\x04') {
          if (DAT_00807658 == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = *(uint *)(iVar5 + 0x68) & 1;
          }
          if (uVar13 != 0) goto LAB_005311d8;
switchD_005311ec_caseD_1:
          uVar18 = 0;
          iVar16 = 0;
          goto LAB_0053138b;
        }
LAB_005311d8:
        switch(DAT_00807300 & 0xff) {
        case 1:
          goto switchD_005311ec_caseD_1;
        case 2:
          local_198 = DAT_00858df8;
          DAT_00858df8 = &local_198;
          iVar5 = __setjmp3(local_194,0,unaff_EDI,unaff_ESI);
          if (iVar5 == 0) {
            if (DAT_00807658 == 0) {
              uVar18 = 0;
            }
            else {
              uVar18 = *(uint *)(DAT_0080765c + 0x80) & 1;
            }
            if (uVar18 != 0) {
              uVar17 = 0x53124e;
              iVar16 = DAT_0080765c;
              FUN_006b7e00(DAT_0080765c,3,&local_4c,&local_50);
            }
            uVar13 = (uint)(local_50 + local_4c) >> 1;
          }
          else {
            uVar13 = 0;
          }
          if (DAT_00807658 == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = *(uint *)(DAT_0080765c + 0x80) & 1;
          }
          DAT_00858df8 = local_198;
          if (uVar18 == 0) {
LAB_0053108d:
            uVar18 = 0;
            this = pvVar28;
          }
          else {
            uVar18 = (*(int *)(DAT_0080765c + 0x94) - *(int *)(DAT_0080765c + 0x90)) + 1;
            this = pvVar28;
          }
          break;
        default:
          goto switchD_005311ec_caseD_3;
        case 4:
          local_1dc = DAT_00858df8;
          DAT_00858df8 = &local_1dc;
          iVar5 = __setjmp3(local_1d8,0,unaff_EDI,unaff_ESI);
          if (iVar5 == 0) {
            if (DAT_00807658 == 0) {
              uVar18 = 0;
            }
            else {
              uVar18 = *(uint *)(DAT_0080765c + 0x68) & 1;
            }
            if (uVar18 != 0) {
              uVar17 = 0x531309;
              iVar16 = DAT_0080765c;
              FUN_006b7e00(DAT_0080765c,2,&local_64,&local_5c);
            }
            uVar13 = (uint)(local_64 + local_5c) >> 1;
          }
          else {
            uVar13 = 0;
          }
          if (DAT_00807658 == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = *(uint *)(DAT_0080765c + 0x68) & 1;
          }
          DAT_00858df8 = local_1dc;
          if (uVar18 == 0) goto LAB_0053108d;
          uVar18 = (*(int *)(DAT_0080765c + 0x7c) - *(int *)(DAT_0080765c + 0x78)) + 1;
          this = pvVar28;
          break;
        case 8:
          uVar18 = ((DAT_0080730a + 4000) * 0x1f) / 0xfa1;
          goto LAB_0053138b;
        }
LAB_0053108f:
        uVar18 = (uVar13 * 0x1f) / uVar18;
      }
      else {
        if (bVar4 == 6) {
          uVar18 = 0;
          if (DAT_00807658 == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = *(uint *)(iVar5 + 0x50) & 1;
          }
          if (uVar13 == 0) {
            iVar16 = 0;
            goto LAB_0053138b;
          }
          local_220 = DAT_00858df8;
          DAT_00858df8 = &local_220;
          iVar5 = __setjmp3(local_21c,0,unaff_EDI,unaff_ESI);
          if (iVar5 == 0) {
            if (DAT_00807658 == 0) {
              uVar18 = 0;
            }
            else {
              uVar18 = *(uint *)(DAT_0080765c + 0x50) & 1;
            }
            if (uVar18 != 0) {
              uVar17 = 0x53111e;
              iVar16 = DAT_0080765c;
              FUN_006b7e00(DAT_0080765c,1,(undefined4 *)&stack0xffffffb8,&local_68);
            }
            uVar13 = (uint)(local_68 + in_stack_ffffffb8) >> 1;
          }
          else {
            uVar13 = 0;
          }
          if (DAT_00807658 == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = *(uint *)(DAT_0080765c + 0x50) & 1;
          }
          DAT_00858df8 = local_220;
          if (uVar18 != 0) {
            uVar18 = (*(int *)(DAT_0080765c + 100) - *(int *)(DAT_0080765c + 0x60)) + 1;
            this = pvVar28;
            goto LAB_0053108f;
          }
          goto LAB_0053108d;
        }
        if (bVar4 == 7) {
          uVar18 = 0;
          if (DAT_00807658 == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = *(uint *)(iVar5 + 0x38) & 1;
          }
          if (uVar13 == 0) {
            iVar16 = 0;
            goto LAB_0053138b;
          }
          local_2a8 = DAT_00858df8;
          DAT_00858df8 = &local_2a8;
          iVar5 = __setjmp3(local_2a4,0,unaff_EDI,unaff_ESI);
          if (iVar5 == 0) {
            if (DAT_00807658 == 0) {
              uVar18 = 0;
            }
            else {
              uVar18 = *(uint *)(DAT_0080765c + 0x38) & 1;
            }
            if (uVar18 != 0) {
              uVar17 = 0x531039;
              iVar16 = DAT_0080765c;
              FUN_006b7e00(DAT_0080765c,0,&local_58,&local_54);
            }
            uVar13 = (uint)(local_58 + local_54) >> 1;
          }
          else {
            uVar13 = 0;
          }
          if (DAT_00807658 == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = *(uint *)(DAT_0080765c + 0x38) & 1;
          }
          DAT_00858df8 = local_2a8;
          if (uVar18 == 0) goto LAB_0053108d;
          uVar18 = (*(int *)(DAT_0080765c + 0x4c) - *(int *)(DAT_0080765c + 0x48)) + 1;
          this = pvVar28;
          goto LAB_0053108f;
        }
      }
LAB_0053138b:
      uVar17 = uVar17 & 0xff;
      iVar5 = uVar12 + uVar17 * 0xd + 0x29;
      pvVar28 = (void *)0xf9;
      uVar35 = thunk_FUN_0052eb50(0x6d,iVar5,0xf9,iVar5,uVar17 + 0xc09f,0x1f,uVar18,iVar16);
      *(undefined4 *)((int)this + uVar17 * 4 + 0x1b5) = uVar35;
      thunk_FUN_0052edf0((char)iVar5 - 4,(byte)uVar18);
      iVar5 = DAT_0080765c;
switchD_005311ec_caseD_3:
      bVar4 = bVar4 + 1;
    } while (bVar4 < 8);
    break;
  case '\b':
    uVar35 = thunk_FUN_0053e1c0(3,3 - DAT_0080733b,0x1d,0x20,0x72,0x11,0,0x12,0xc09f,0xc0af);
    *(undefined4 *)((int)this + 0x1b5) = uVar35;
    uVar35 = thunk_FUN_0053e1c0(3,2 - DAT_0080733a,0x99,0x20,0x72,0x11,0,0x12,0xc0a0,0xc0b0);
    *(undefined4 *)((int)this + 0x1b9) = uVar35;
    uVar35 = thunk_FUN_0053e1c0(2,DAT_00807349,0x5d,0x68,0x72,0x11,0,0x12,0xc0a2,0xc0b2);
    *(undefined4 *)((int)this + 0x1c1) = uVar35;
    break;
  case '\t':
    iVar5 = 0;
    iVar16 = 0x1b;
    do {
      if (iVar16 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00530aa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&PTR_LAB_00531ce8)[iVar5])();
        return;
      }
      uVar26 = 0;
      puVar33 = (undefined4 *)0x0;
      pcVar8 = (char *)0x0;
      iVar25 = iVar5 + 0xc09f;
      uVar35 = 0;
      uVar29 = 0;
      sVar27 = 0;
      iVar10 = iVar5 + 0xc0af;
      pCVar15 = thunk_FUN_00571240(s_BUT_BUTOPT_007c7264,0);
      local_4c = 0x530b3a;
      uVar35 = thunk_FUN_0053dea0(3,1,0x1d,iVar16,1,(int)pCVar15,iVar25,iVar10,sVar27,uVar29,uVar35,
                                  pcVar8,puVar33,uVar26);
      iVar16 = iVar16 + 0x12;
      *puVar33 = uVar35;
      iVar5 = iVar5 + 1;
    } while (pcVar8 != (char *)0x1);
    break;
  case '\v':
    uVar37 = 0;
    uVar34 = 0;
    pcVar8 = (char *)0x0;
    uVar31 = 0;
    uVar29 = 0;
    sVar27 = 0;
    uVar26 = 0xc0b0;
    uVar35 = 0xc0a0;
    pCVar15 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    local_4c = 0x53072a;
    uVar35 = thunk_FUN_0053dea0(0,1,0x7d,0x7d,1,(int)pCVar15,uVar35,uVar26,sVar27,uVar29,uVar31,
                                pcVar8,uVar34,uVar37);
    *(undefined4 *)((int)this + 0x1b5) = uVar35;
    break;
  case '\f':
    iVar5 = *(int *)((int)this + 0x3c);
    puVar33 = local_11fc;
    for (iVar16 = 0x21e; iVar16 != 0; iVar16 = iVar16 + -1) {
      *puVar33 = 0;
      puVar33 = puVar33 + 1;
    }
    local_11dc = iVar5 + 0x26;
    local_11fc[0] = 0;
    local_11fc[1] = 2;
    if (*(int *)((int)this + 0x5c) == 0) {
      local_11d8 = -*(int *)((int)this + 0x48);
    }
    else {
      local_11d8 = *(int *)((int)this + 0x44);
    }
    iVar5 = *(int *)((int)this + 0x17c);
    local_11d8 = local_11d8 + 0x1a;
    local_11fc[2] = 1;
    local_11fc[3] = *(undefined4 *)(*(int *)((int)this + 0x2f9) + 8);
    local_11ec = 0xca;
    if (*(int *)(iVar5 + 0xa0) != 0) {
      FUN_00710790(iVar5);
    }
    local_11e8 = *(int *)(iVar5 + 0x8a);
    local_11e0 = (undefined4)(0x6e / (longlong)local_11e8);
    local_11e4 = 1;
    local_11c0 = 2;
    local_11bc = 0x6332;
    local_114c = 4;
    local_1148 = 0;
    local_11c4 = *(undefined4 *)((int)this + 8);
    if (DAT_0080734c != '\0') {
      local_d80 = 1;
    }
    local_1144 = 2;
    local_1140[1] = 2;
    local_1140[0] = 0;
    local_1140[2] = *(int *)((int)this + 0x3c) + 0xf2;
    if (*(int *)((int)this + 0x5c) == 0) {
      local_1140[3] = -*(int *)((int)this + 0x48);
    }
    else {
      local_1140[3] = *(int *)((int)this + 0x44);
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
    iVar5 = *(int *)((int)this + 0x5c);
    local_1038 = 1;
    local_1034 = 1;
    local_fc4 = 2;
    local_fc0[2] = *(int *)((int)this + 0x3c) + 0xf2;
    piVar36 = local_1140;
    piVar24 = local_fc0;
    for (iVar16 = 0x5f; iVar16 != 0; iVar16 = iVar16 + -1) {
      *piVar24 = *piVar36;
      piVar36 = piVar36 + 1;
      piVar24 = piVar24 + 1;
    }
    if (iVar5 == 0) {
      local_fc0[3] = -*(int *)((int)this + 0x48);
    }
    else {
      local_fc0[3] = *(int *)((int)this + 0x44);
    }
    local_fc0[3] = local_fc0[3] + 0x1b;
    local_fb0 = 0x11;
    local_fac = 0x24;
    local_f58 = 0x8164;
    local_e9c = FUN_0070aa70(DAT_00806790,s_BUT_MSLUP_007c39e0,0,1);
    local_e98 = FUN_0070a6f0(DAT_00806790,0x12,s_BUT_MSLUP_007c39e0,1);
    local_990 = 1;
    local_994 = 1;
    (**(code **)(**(int **)((int)this + 0xc) + 8))();
    *(undefined4 *)((int)this + 0x28) = 0x20;
    *(undefined4 *)((int)this + 0x2c) = 1;
    FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x1b5),(undefined4 *)((int)this + 0x18));
    break;
  case '\r':
    puVar33 = local_cc;
    for (iVar5 = 0x16; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar33 = 0;
      puVar33 = puVar33 + 1;
    }
    puVar9 = local_1c48;
    for (iVar5 = 0x70; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    bVar4 = 0;
    iVar5 = 0;
    iVar16 = 0;
    puVar9 = local_1c48 + 1;
    do {
      if (iVar5 == 0) {
        in_stack_ffffffbc = 800;
        in_stack_ffffffc0 = 600;
      }
      else if (iVar5 == 1) {
        in_stack_ffffffbc = 0x400;
        in_stack_ffffffc0 = 0x300;
      }
      else if (iVar5 == 2) {
        in_stack_ffffffbc = 0x500;
        in_stack_ffffffc0 = 0x400;
      }
      bVar3 = 0;
      puVar9[-1] = iVar5 + 1;
      *puVar9 = 2;
      if (0 < *(int *)(DAT_0080877a + 4)) {
        uVar18 = 0;
        do {
          iVar10 = DAT_0080877a + uVar18 * 0xc;
          if (((*(int *)(iVar10 + 8) == in_stack_ffffffbc) &&
              (*(int *)(DAT_0080877a + (uVar18 * 3 + 3) * 4) == in_stack_ffffffc0)) &&
             (*(int *)(iVar10 + 0x10) == 8)) {
            *puVar9 = (uint)(DAT_00807348 == bVar4);
            break;
          }
          bVar3 = bVar3 + 1;
          uVar18 = (uint)bVar3;
        } while ((int)uVar18 < *(int *)(DAT_0080877a + 4));
      }
      puVar9[2] = *(int *)((int)this + 0x3c) + 0x1d;
      if (*(int *)((int)this + 0x5c) == 0) {
        iVar10 = -*(int *)((int)this + 0x48);
      }
      else {
        iVar10 = *(int *)((int)this + 0x44);
      }
      puVar9[3] = iVar16 + 0x13 + iVar10;
      puVar9[4] = 0x72;
      puVar9[5] = 0x11;
      bVar4 = bVar4 + 1;
      iVar5 = iVar5 + 1;
      iVar16 = iVar16 + 0x12;
      puVar9 = puVar9 + 0x1c;
    } while (bVar4 < 3);
    local_80 = (_DAT_00807348 & 0xff) + 1;
    local_bc = *(undefined4 *)((int)this + 8);
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
    (**(code **)(**(int **)((int)this + 0xc) + 8))();
    uVar37 = 0;
    uVar34 = 0;
    pcVar8 = (char *)0x0;
    uVar31 = 0;
    uVar29 = 0;
    sVar27 = 0;
    uVar26 = 0xc0b0;
    uVar35 = 0xc0a0;
    pCVar15 = thunk_FUN_00571240(s_BUT_BUTOPT_007c7264,0);
    local_4c = 0x530992;
    uVar35 = thunk_FUN_0053dea0(1,0,0x1d,0x49,1,(int)pCVar15,uVar35,uVar26,sVar27,uVar29,uVar31,
                                pcVar8,uVar34,uVar37);
    uVar38 = 0;
    uVar37 = 0;
    pcVar8 = (char *)0x0;
    uVar34 = 0;
    uVar29 = 0;
    sVar27 = 0;
    uVar31 = 0xc0b1;
    uVar26 = 0xc0a1;
    *(undefined4 *)((int)this + 0x1b9) = uVar35;
    pCVar15 = thunk_FUN_00571240(s_BUT_BUTOPT_007c7264,0);
    local_4c = 0x5309da;
    uVar35 = thunk_FUN_0053dea0(3,(-(uint)(DAT_00807342 != 0) & 2) + 1,0x1d,0x5b,1,(int)pCVar15,
                                uVar26,uVar31,sVar27,uVar29,uVar34,pcVar8,uVar37,uVar38);
    *(undefined4 *)((int)this + 0x1bd) = uVar35;
    uVar35 = thunk_FUN_0052eb50(0x94,0x70,*(int *)(*(int *)((int)this + 0x18c) + 4) + 0xaf,0x70,
                                0xc0a2,3,DAT_00807346 / 5 - 1,1);
    *(undefined4 *)((int)this + 0x1c1) = uVar35;
    uVar35 = thunk_FUN_0052eb50(0x94,0x82,*(int *)(*(int *)((int)this + 0x18c) + 4) + 0xaf,0x82,
                                0xc0a3,3,(uint)DAT_00807347,1);
    *(undefined4 *)((int)this + 0x1c5) = uVar35;
    *(byte *)((int)this + 0x305) = DAT_00807348;
  }
  if ((*(char *)((int)this + 0x1a4) == '\x01') || (*(char *)((int)this + 0x1a9) == '\0')) {
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  else {
    *(undefined4 *)((int)this + 0x2c) = 1;
  }
  *(undefined4 *)((int)this + 0x28) = 0x20;
  FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x1b1),(undefined4 *)((int)this + 0x18));
  *(undefined4 *)((int)this + 0x28) = 5;
  uVar18 = 0;
  do {
    iVar5 = *(int *)((int)this + uVar18 * 4 + 0x1ad);
    if (iVar5 != 0) {
      FUN_006e6080(this,2,iVar5,(undefined4 *)((int)this + 0x18));
    }
    bVar4 = (char)uVar18 + 1;
    uVar18 = (uint)bVar4;
  } while (bVar4 < 2);
  DAT_00858df8 = local_110;
  return;
}

