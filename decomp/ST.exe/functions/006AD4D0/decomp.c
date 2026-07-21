
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl
ReportDebugMessage(char *sourceFile,int sourceLine,int isFatal,int errorCode,char *format,...)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 *unaff_EBP;
  uint *puVar11;
  uint *puVar12;
  char *pcVar13;
  bool bVar14;
  uint local_74c;
  char local_748 [4];
  char local_744;
  uint uStack_743;
  char local_73f [3];
  uint auStack_73c [252];
  char local_34c [447];
  char acStack_18d [65];
  CHAR local_14c [260];
  char debugMessage [64];

  if (DAT_007ed798 == 0) {
    g_exceptionSourceFile = (char *)0x0;
    return 0;
  }
  local_34c[0] = '\0';
  local_74c = local_74c & 0xffffff00;
  if ((format != (char *)0x0) &&
     (iVar2 = Library::MSVCRT::FUN_007300e0
                        (local_34c,0x200,(byte *)format,(undefined4 *)&stack0x00000018), iVar2 < 0))
  {
    uVar5 = 0xffffffff;
    pcVar8 = "User message too long";
    do {
      pcVar9 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar2 = -1;
    pcVar8 = local_34c;
    do {
      pcVar13 = pcVar8;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar13 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar13;
    } while (cVar1 != '\0');
    pcVar8 = pcVar9 + -uVar5;
    pcVar9 = pcVar13 + -1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  if ((DAT_007ed79c != 0) && (g_int_00854EB4 != (int *)0x0)) {
    Library::MSVCRT::FUN_00733f70(g_int_00854EB4,"\n%d ========================================  %02d.%02d.%d  %d:%02d:%02d.%03d\n");
    DAT_007ed79c = 0;
  }
  puVar7 = &local_74c;
  if (DAT_00854ebc != 0) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_74c._0_1_ = "Program: "[0];
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_74c._1_1_ = "Program: "[1];
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_74c._2_1_ = "Program: "[2];
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_74c._3_1_ = "Program: "[3];
    local_748[0] = "Program: "[4];
    local_748[1] = "Program: "[5];
    local_748[2] = "Program: "[6];
    local_748[3] = "Program: "[7];
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_744 = (char)"Program: "._8_2_;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uStack_743._0_1_ = SUB21("Program: "._8_2_,1);
    pcVar8 = local_14c;
    DVar3 = GetModuleFileNameA((HMODULE)0x0,local_14c,0x104);
    if (DVar3 == 0) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uStack_743._0_1_ = "unknown"[0];
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uStack_743._1_1_ = "unknown"[1];
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uStack_743._2_1_ = "unknown"[2];
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uStack_743._3_1_ = "unknown"[3];
      local_73f[0] = "unknown"[4];
      local_73f[1] = "unknown"[5];
      local_73f[2] = "unknown"[6];
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      auStack_73c[0]._0_1_ = "unknown"[7];
      puVar7 = auStack_73c;
    }
    else {
      uVar5 = 0xffffffff;
      pcVar9 = local_14c;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      iVar2 = ~uVar5 - 1;
      if (0x40 < iVar2) {
        pcVar8 = acStack_18d + ~uVar5;
        Library::MSVCRT::_strncpy(pcVar8,&DAT_007c7274,3);
        iVar2 = 0x40;
      }
      uVar5 = 0xffffffff;
      do {
        pcVar9 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      puVar7 = (uint *)((int)&uStack_743 + iVar2);
      puVar11 = (uint *)(pcVar9 + -uVar5);
      puVar12 = &uStack_743;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)puVar12 = (char)*puVar11;
        puVar11 = (uint *)((int)puVar11 + 1);
        puVar12 = (uint *)((int)puVar12 + 1);
      }
    }
  }
  *(undefined1 *)puVar7 = 10;
  pcVar8 = (char *)((int)puVar7 + 1);
  if (sourceFile != (char *)0x0) {
    pcVar9 = (char *)((int)puVar7 + 7);
    *(undefined4 *)pcVar8 = "File: "._0_4_;
    *(undefined2 *)((int)puVar7 + 5) = "File: "._4_2_;
    *(char *)((int)puVar7 + 7) = "File: "[6];
    uVar5 = 0xffffffff;
    pcVar8 = sourceFile;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar2 = ~uVar5 - 1;
    if (iVar2 < 0x41) {
      uVar5 = 0xffffffff;
      do {
        pcVar8 = sourceFile;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = sourceFile + 1;
        cVar1 = *sourceFile;
        sourceFile = pcVar8;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar8 = pcVar8 + -uVar5;
      pcVar13 = pcVar9;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar13 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else {
      uVar6 = 0xffffffff;
      pcVar8 = sourceFile + (~uVar5 - 0x41);
      do {
        pcVar13 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar13 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar13;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar8 = pcVar13 + -uVar6;
      pcVar13 = pcVar9;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar13 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar13 = pcVar13 + 1;
      }
      Library::MSVCRT::_strncpy(pcVar9,&DAT_007c7274,3);
      iVar2 = 0x40;
    }
    pcVar9 = pcVar9 + iVar2;
    if (g_int_00854EB4 == (int *)0x0) {
      *pcVar9 = '\n';
    }
    else {
      *pcVar9 = ' ';
      pcVar9 = pcVar9 + 1;
      *pcVar9 = ' ';
    }
    pcVar9 = pcVar9 + 1;
    if (0 < sourceLine) {
      iVar2 = Library::MSVCRT::FUN_00730c40(pcVar9,0x7ed884);
      pcVar9 = pcVar9 + iVar2;
    }
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    if (((g_int_00854EB4 != (int *)0x0) && (BVar4 = IsBadReadPtr(&stack0xfffffffc,4), BVar4 == 0))
       && (BVar4 = IsBadReadPtr(unaff_EBP,8), BVar4 == 0)) {
      iVar2 = Library::MSVCRT::FUN_00730c40(pcVar9,0x7ed87c);
      pcVar9 = pcVar9 + iVar2;
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      BVar4 = IsBadReadPtr((void *)*unaff_EBP,8);
      if (BVar4 == 0) {
        iVar2 = Library::MSVCRT::FUN_00730c40(pcVar9,0x7ed874);
        pcVar9 = pcVar9 + iVar2;
      }
    }
    *pcVar9 = '\n';
    pcVar8 = pcVar9 + 1;
  }
  if ((g_exceptionSourceFile != (char *)0x0) && (g_exceptionCode == errorCode)) {
    pcVar9 = pcVar8 + 10;
    *(undefined4 *)pcVar8 = "ExcRaise: "._0_4_;
    *(undefined4 *)(pcVar8 + 4) = "ExcRaise: "._4_4_;
    *(undefined2 *)(pcVar8 + 8) = "ExcRaise: "._8_2_;
    uVar5 = 0xffffffff;
    pcVar8[10] = "ExcRaise: "[10];
    pcVar8 = g_exceptionSourceFile;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar2 = ~uVar5 - 1;
    if (iVar2 < 0x37) {
      uVar5 = 0xffffffff;
      pcVar8 = g_exceptionSourceFile;
      do {
        pcVar13 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar13 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar13;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar8 = pcVar13 + -uVar5;
      pcVar13 = pcVar9;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar13 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else {
      uVar6 = 0xffffffff;
      pcVar8 = g_exceptionSourceFile + (~uVar5 - 0x37);
      do {
        pcVar13 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar13 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar13;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar8 = pcVar13 + -uVar6;
      pcVar13 = pcVar9;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar13 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar13 = pcVar13 + 1;
      }
      Library::MSVCRT::_strncpy(pcVar9,&DAT_007c7274,3);
      iVar2 = 0x36;
    }
    pcVar9 = pcVar9 + iVar2;
    iVar2 = Library::MSVCRT::FUN_00730c40(pcVar9,0x7ed864);
    pcVar9[iVar2] = '\n';
    pcVar8 = pcVar9 + iVar2 + 1;
  }
  g_exceptionSourceFile = (char *)0x0;
  if (errorCode != 0) {
    iVar2 = Library::MSVCRT::FUN_00730c40(pcVar8,0x7ed848);
    pcVar8 = pcVar8 + iVar2;
  }
  *pcVar8 = '\n';
  pcVar9 = pcVar8 + 1;
  if (local_34c[0] != '\0') {
    if (g_int_00854EB4 == (int *)0x0) {
      *pcVar9 = '\n';
      pcVar9 = pcVar8 + 2;
    }
    uVar5 = 0xffffffff;
    pcVar8 = local_34c;
    do {
      pcVar13 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar13 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar13;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar13 + -uVar5;
    pcVar13 = pcVar9;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar13 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar13 = pcVar13 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar8 = local_34c;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    pcVar9[~uVar5 - 1] = '\n';
    pcVar9 = pcVar9 + (~uVar5 - 1) + 1;
  }
  if (g_int_00854EB4 == (int *)0x0) {
    if (DAT_00854ebc != 0) {
      *pcVar9 = '\n';
      pcVar8 = "(Press Retry to debug the application)";
      pcVar9 = pcVar9 + 1;
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      *(undefined2 *)pcVar9 = *(undefined2 *)pcVar8;
      pcVar9[2] = pcVar8[2];
      if (isFatal == 0) {
        debugMessage[0] = "Debug Message"[0];
        debugMessage[1] = "Debug Message"[1];
        debugMessage[2] = "Debug Message"[2];
        debugMessage[3] = "Debug Message"[3];
        debugMessage[4] = "Debug Message"[4];
        debugMessage[5] = "Debug Message"[5];
        debugMessage[6] = "Debug Message"[6];
        debugMessage[7] = "Debug Message"[7];
        debugMessage[8] = "Debug Message"[8];
        debugMessage[9] = "Debug Message"[9];
        debugMessage[10] = "Debug Message"[10];
        debugMessage[0xb] = "Debug Message"[0xb];
        debugMessage[0xc] = "Debug Message"[0xc];
        debugMessage[0xd] = "Debug Message"[0xd];
      }
      else {
        pcVar8 = "Debug Error Message";
        pcVar9 = debugMessage;
        for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
      }
      if ((DAT_00854eb8 == (undefined4 *)0x0) ||
         (puVar10 = (undefined4 *)DAT_00854eb8[0x11f], puVar10 == (undefined4 *)0x0)) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        Library::DKW::DDX::FUN_006ce8c0((int)DAT_00854eb8,(HDC)*puVar10);
        uVar5 = 0xffffffff;
        pcVar8 = " (UNSAFE)";
        do {
          pcVar9 = pcVar8;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar9 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar9;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar2 = -1;
        pcVar8 = debugMessage;
        do {
          pcVar13 = pcVar8;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          pcVar13 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar13;
        } while (cVar1 != '\0');
        pcVar8 = pcVar9 + -uVar5;
        pcVar9 = pcVar13 + -1;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
      if ((DAT_00854eb8 != (undefined4 *)0x0) && ((DAT_00854eb8[2] & 0x2000000) != 0)) {
        DAT_00854eb8[2] = DAT_00854eb8[2] & 0xfdfffffe;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)DAT_00854eb8[0xc] + 0x50))((int *)DAT_00854eb8[0xc],DAT_00854eb8[1],8);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)DAT_00854eb8[0xc] + 0x4c))((int *)DAT_00854eb8[0xc]);
      }
      iVar2 = FUN_006ad3a0((LPCSTR)&local_74c,debugMessage,2);
      if (iVar2 == 4) {
        iVar2 = 1;
        if ((DAT_00854eb8 != (undefined4 *)0x0) && ((DAT_00854eb8[2] & 1) != 0)) {
          DAT_00854eb8[2] = DAT_00854eb8[2] & 0xfdfffffe;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*(int *)DAT_00854eb8[0xc] + 0x50))
                    ((int *)DAT_00854eb8[0xc],DAT_00854eb8[1],8);
          FUN_006b08f0(DAT_00854eb8,0x854aa4,0,0x100);
        }
      }
      else if (iVar2 == 3) {
        iVar2 = -1;
      }
      else {
        iVar2 = 0;
        if ((DAT_00854eb8 != (undefined4 *)0x0) && (puVar10 != (undefined4 *)0x0)) {
          Library::DKW::DDX::FUN_006ce770((uint)DAT_00854eb8,puVar10);
        }
      }
      goto LAB_006ad9d3;
    }
  }
  else {
    *pcVar9 = '\0';
    Library::MSVCRT::FUN_0072eb70((char *)&local_74c,g_int_00854EB4);
    uVar5 = 0;
    if (0 < DAT_00858ddc) {
      do {
        Library::MSVCRT::FUN_00733f70(g_int_00854EB4,"%08X  ");
        uVar5 = uVar5 + 1;
        uVar6 = uVar5 & 0x80000007;
        bVar14 = uVar6 == 0;
        if ((int)uVar6 < 0) {
          bVar14 = (uVar6 - 1 | 0xfffffff8) == 0xffffffff;
        }
        if (bVar14) {
          Library::MSVCRT::FUN_00733f70(g_int_00854EB4,&DAT_007c8ff4);
        }
      } while ((int)uVar5 < DAT_00858ddc);
    }
    uVar5 = uVar5 & 0x80000007;
    bVar14 = uVar5 == 0;
    if ((int)uVar5 < 0) {
      bVar14 = (uVar5 - 1 | 0xfffffff8) == 0xffffffff;
    }
    if (!bVar14) {
      Library::MSVCRT::FUN_00733f70(g_int_00854EB4,&DAT_007c8ff4);
    }
    Library::MSVCRT::FUN_00733d60(g_int_00854EB4);
  }
  iVar2 = -(uint)(isFatal != 0);
LAB_006ad9d3:
  DAT_00858ddc = 0;
  if (-1 < iVar2) {
    return iVar2;
  }
  FUN_006ad250();
  Library::MSVCRT::FUN_00733b40(0x16);
                    /* WARNING: Subroutine does not return */
  Library::MSVCRT::__exit(-1);
}

