#include "../../pseudocode_runtime.h"


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __cdecl
ReportDebugMessage(char *sourceFile,int sourceLine,int isFatal,int errorCode,char *format,...)

{
  char cVar1;
  int local_EAX_79;
  DWORD DVar2;
  BOOL BVar3;
  int iVar2;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  char *pcVar9;
  char *pcVar10;
  undefined4 *puVar11;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 *unaff_EBP;
  uint *puVar12;
  uint *puVar13;
  char *pcVar14;
  bool bVar15;
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
  char *pcVar8;
  char *temp_3f2b8032ed;
  char *temp_3f958b413f;
  char *temp_3f3edb9017;
  char *temp_3fea71fc55;

  if (DAT_007ed798 == 0) {
    g_exceptionSourceFile = nullptr;
    return 0;
  }
  local_34c[0] = '\0';
  local_74c = local_74c & 0xffffff00;
  if ((format != nullptr) &&
     (local_EAX_79 = Library::MSVCRT::FUN_007300e0
                               (local_34c,0x200,(byte *)format,(undefined4 *)&stack0x00000018),
     local_EAX_79 < 0)) {
    uVar4 = 0xffffffff;
    pcVar9 = "User message too long";
    do {
      pcVar10 = pcVar9;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar9 = local_34c;
    do {
      pcVar14 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar14 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar14;
    } while (cVar1 != '\0');
    pcVar9 = pcVar10 + -uVar4;
    pcVar10 = pcVar14 + -1;
    memmove(pcVar10, pcVar9, uVar4); /* compiler REP MOVS byte copy */
    uVar6 = 0;
  }
  if ((DAT_007ed79c != 0) && (g_int_00854EB4 != nullptr)) {
    Library::MSVCRT::FUN_00733f70(g_int_00854EB4,"\n%d ========================================  %02d.%02d.%d  %d:%02d:%02d.%03d\n");
    DAT_007ed79c = 0;
  }
  puVar7 = &local_74c;
  if (DAT_00854ebc != 0) {
    STPiece<0,1>(local_74c) = "Program: "[0];
    STPiece<1,1>(local_74c) = "Program: "[1];
    STPiece<2,1>(local_74c) = "Program: "[2];
    STPiece<3,1>(local_74c) = "Program: "[3];
    local_748[0] = "Program: "[4];
    local_748[1] = "Program: "[5];
    local_748[2] = "Program: "[6];
    local_748[3] = "Program: "[7];
    local_744 = (char)STLiteralPiece<8,2>("Program: ");
    STPiece<0,1>(uStack_743) = SUB21(STLiteralPiece<8,2>("Program: "),1);
    pcVar8 = local_14c;
    DVar2 = GetModuleFileNameA((HMODULE)0x0,local_14c,0x104);
    if (DVar2 == 0) {
      STPiece<0,1>(uStack_743) = "unknown"[0];
      STPiece<1,1>(uStack_743) = "unknown"[1];
      STPiece<2,1>(uStack_743) = "unknown"[2];
      STPiece<3,1>(uStack_743) = "unknown"[3];
      local_73f[0] = "unknown"[4];
      local_73f[1] = "unknown"[5];
      local_73f[2] = "unknown"[6];
      STPiece<0,1>(auStack_73c[0]) = "unknown"[7];
      puVar7 = auStack_73c;
    }
    else {
      uVar4 = 0xffffffff;
      pcVar9 = local_14c;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      iVar5 = ~uVar4 - 1;
      if (0x40 < iVar5) {
        pcVar8 = acStack_18d + ~uVar4;
        Library::MSVCRT::_strncpy(pcVar8,&CHAR___007c7274,3);
        iVar5 = 0x40;
      }
      uVar4 = 0xffffffff;
      do {
        pcVar9 = pcVar8;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      puVar7 = (uint *)((int)&uStack_743 + iVar5);
      puVar12 = (uint *)(pcVar9 + -uVar4);
      puVar13 = &uStack_743;
      memmove(puVar13, puVar12, uVar4); /* compiler REP MOVS byte copy */
      uVar6 = 0;
    }
  }
  *(undefined1 *)puVar7 = 10;
  pcVar9 = (char *)((int)puVar7 + 1);
  if (sourceFile != nullptr) {
    pcVar10 = (char *)((int)puVar7 + 7);
    *(undefined4 *)pcVar9 = STLiteralPiece<0,4>("File: ");
    STField<undefined2>(puVar7,5) = STLiteralPiece<4,2>("File: ");
    STField<char>(puVar7,7) = "File: "[6];
    uVar4 = 0xffffffff;
    temp_3f958b413f = sourceFile;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *temp_3f958b413f;
      temp_3f958b413f = temp_3f958b413f + 1;
    } while (cVar1 != '\0');
    iVar5 = ~uVar4 - 1;
    if (iVar5 < 0x41) {
      uVar4 = 0xffffffff;
      do {
        temp_3f2b8032ed = sourceFile;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        temp_3f2b8032ed = sourceFile + 1;
        cVar1 = *sourceFile;
        sourceFile = temp_3f2b8032ed;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar9 = temp_3f2b8032ed + -uVar4;
      pcVar14 = pcVar10;
      memmove(pcVar14, pcVar9, uVar4); /* compiler REP MOVS byte copy */
      uVar4 = 0;
    }
    else {
      uVar6 = 0xffffffff;
      pcVar9 = sourceFile + (~uVar4 - 0x41);
      do {
        pcVar14 = pcVar9;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar14 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar14;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar9 = pcVar14 + -uVar6;
      pcVar14 = pcVar10;
      memmove(pcVar14, pcVar9, uVar6); /* compiler REP MOVS byte copy */
      uVar6 = 0;
      Library::MSVCRT::_strncpy(pcVar10,&CHAR___007c7274,3);
      iVar5 = 0x40;
    }
    pcVar10 = pcVar10 + iVar5;
    if (g_int_00854EB4 == nullptr) {
      *pcVar10 = '\n';
    }
    else {
      *pcVar10 = ' ';
      pcVar10 = pcVar10 + 1;
      *pcVar10 = ' ';
    }
    pcVar10 = pcVar10 + 1;
    if (0 < sourceLine) {
      iVar5 = Library::MSVCRT::FUN_00730c40(pcVar10,0x7ed884);
      pcVar10 = pcVar10 + iVar5;
    }
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    if (((g_int_00854EB4 != nullptr) && (BVar3 = IsBadReadPtr(&stack0xfffffffc,4), BVar3 == 0))
       && (BVar3 = IsBadReadPtr(unaff_EBP,8), BVar3 == 0)) {
      iVar5 = Library::MSVCRT::FUN_00730c40(pcVar10,0x7ed87c);
      pcVar10 = pcVar10 + iVar5;
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      BVar3 = IsBadReadPtr((void *)*unaff_EBP,8);
      if (BVar3 == 0) {
        iVar5 = Library::MSVCRT::FUN_00730c40(pcVar10,0x7ed874);
        pcVar10 = pcVar10 + iVar5;
      }
    }
    *pcVar10 = '\n';
    pcVar9 = pcVar10 + 1;
  }
  if ((g_exceptionSourceFile != nullptr) && (g_exceptionCode == errorCode)) {
    pcVar10 = pcVar9 + 10;
    *(undefined4 *)pcVar9 = STLiteralPiece<0,4>("ExcRaise: ");
    *(undefined4 *)(pcVar9 + 4) = STLiteralPiece<4,4>("ExcRaise: ");
    *(undefined2 *)(pcVar9 + 8) = STLiteralPiece<8,2>("ExcRaise: ");
    uVar4 = 0xffffffff;
    pcVar9[10] = "ExcRaise: "[10];
    temp_3fea71fc55 = g_exceptionSourceFile;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *temp_3fea71fc55;
      temp_3fea71fc55 = temp_3fea71fc55 + 1;
    } while (cVar1 != '\0');
    iVar5 = ~uVar4 - 1;
    if (iVar5 < 0x37) {
      uVar4 = 0xffffffff;
      temp_3f3edb9017 = g_exceptionSourceFile;
      do {
        pcVar9 = temp_3f3edb9017;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar9 = temp_3f3edb9017 + 1;
        cVar1 = *temp_3f3edb9017;
        temp_3f3edb9017 = pcVar9;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar9 = pcVar9 + -uVar4;
      pcVar14 = pcVar10;
      memmove(pcVar14, pcVar9, uVar4); /* compiler REP MOVS byte copy */
      uVar4 = 0;
    }
    else {
      uVar6 = 0xffffffff;
      pcVar9 = g_exceptionSourceFile + (~uVar4 - 0x37);
      do {
        pcVar14 = pcVar9;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar14 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar14;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar9 = pcVar14 + -uVar6;
      pcVar14 = pcVar10;
      memmove(pcVar14, pcVar9, uVar6); /* compiler REP MOVS byte copy */
      uVar6 = 0;
      Library::MSVCRT::_strncpy(pcVar10,&CHAR___007c7274,3);
      iVar5 = 0x36;
    }
    pcVar10 = pcVar10 + iVar5;
    iVar5 = Library::MSVCRT::FUN_00730c40(pcVar10,0x7ed864);
    pcVar10[iVar5] = '\n';
    pcVar9 = pcVar10 + iVar5 + 1;
  }
  g_exceptionSourceFile = nullptr;
  if (errorCode != 0) {
    iVar5 = Library::MSVCRT::FUN_00730c40(pcVar9,0x7ed848);
    pcVar9 = pcVar9 + iVar5;
  }
  *pcVar9 = '\n';
  pcVar10 = pcVar9 + 1;
  if (local_34c[0] != '\0') {
    if (g_int_00854EB4 == nullptr) {
      *pcVar10 = '\n';
      pcVar10 = pcVar9 + 2;
    }
    uVar4 = 0xffffffff;
    pcVar9 = local_34c;
    do {
      pcVar14 = pcVar9;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar14 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar14;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar9 = pcVar14 + -uVar4;
    pcVar14 = pcVar10;
    memmove(pcVar14, pcVar9, uVar4); /* compiler REP MOVS byte copy */
    uVar6 = 0;
    uVar4 = 0xffffffff;
    pcVar9 = local_34c;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    pcVar10[~uVar4 - 1] = '\n';
    pcVar10 = pcVar10 + (~uVar4 - 1) + 1;
  }
  if (g_int_00854EB4 == nullptr) {
    if (DAT_00854ebc != 0) {
      *pcVar10 = '\n';
      pcVar9 = "(Press Retry to debug the application)";
      pcVar10 = pcVar10 + 1;
      memmove(pcVar10, pcVar9, 0x27); /* compiler REP MOVS byte copy */
      iVar5 = 0;
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
        pcVar9 = "Debug Error Message";
        pcVar10 = debugMessage;
        memmove(pcVar10, pcVar9, 0x14); /* compiler REP MOVS byte copy */
      }
      if ((g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8 ==
           nullptr) ||
         (puVar11 = *(undefined4 **)&g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0x47c,
         puVar11 == nullptr)) {
        puVar11 = nullptr;
      }
      else {
        Library::DKW::DDX::FUN_006ce8c0
                  ((int)g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8,(HDC)*puVar11);
        uVar4 = 0xffffffff;
        pcVar9 = " (UNSAFE)";
        do {
          pcVar10 = pcVar9;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar10 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        iVar5 = -1;
        pcVar9 = debugMessage;
        do {
          pcVar14 = pcVar9;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar14 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar14;
        } while (cVar1 != '\0');
        pcVar9 = pcVar10 + -uVar4;
        pcVar10 = pcVar14 + -1;
        memmove(pcVar10, pcVar9, uVar4); /* compiler REP MOVS byte copy */
        pcVar10 = (char *)((byte *)pcVar10 + uVar4);
      }
      if ((g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8 !=
           nullptr) &&
         ((*(uint *)&g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0x8 & 0x2000000) != 0)) {
        *(uint *)&g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0x8 =
             *(uint *)&g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0x8 & 0xfdfffffe;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0030 + 0x50))
                  (g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0030,
                   *(undefined4 *)&g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0x4,8);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0030 + 0x4c))
                  (g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0030);
      }
      iVar2 = FUN_006ad3a0((LPCSTR)&local_74c,debugMessage,2);
      if (iVar2 == 4) {
        iVar5 = 1;
        if ((g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8 !=
             nullptr) &&
           ((*(uint *)&g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0x8 & 1) != 0)) {
          *(uint *)&g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0x8 =
               *(uint *)&g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0x8 & 0xfdfffffe;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0030 + 0x50))
                    (g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0030,
                     *(undefined4 *)&g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8->field_0x4,8);
          FUN_006b08f0(g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8,0x854aa4,0,0x100);
        }
      }
      else if (iVar2 == 3) {
        iVar5 = -1;
      }
      else {
        iVar5 = 0;
        if ((g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8 !=
             nullptr) && (puVar11 != nullptr)) {
          Library::DKW::DDX::FUN_006ce770
                    ((uint)g_anonShape_GLOBAL_0080759C_9638EF10_00854EB8,puVar11);
        }
      }
      goto LAB_006ad9d3;
    }
  }
  else {
    *pcVar10 = '\0';
    Library::MSVCRT::FUN_0072eb70((char *)&local_74c,g_int_00854EB4);
    uVar4 = 0;
    if (0 < DAT_00858ddc) {
      do {
        Library::MSVCRT::FUN_00733f70(g_int_00854EB4,"%08X  ");
        uVar4 = uVar4 + 1;
        uVar6 = uVar4 & 0x80000007;
        bVar15 = uVar6 == 0;
        if ((int)uVar6 < 0) {
          bVar15 = (uVar6 - 1 | 0xfffffff8) == 0xffffffff;
        }
        if (bVar15) {
          Library::MSVCRT::FUN_00733f70(g_int_00854EB4,&CHAR_0Ah_007c8ff4);
        }
      } while ((int)uVar4 < DAT_00858ddc);
    }
    uVar4 = uVar4 & 0x80000007;
    bVar15 = uVar4 == 0;
    if ((int)uVar4 < 0) {
      bVar15 = (uVar4 - 1 | 0xfffffff8) == 0xffffffff;
    }
    if (!bVar15) {
      Library::MSVCRT::FUN_00733f70(g_int_00854EB4,&CHAR_0Ah_007c8ff4);
    }
    Library::MSVCRT::FUN_00733d60(g_int_00854EB4);
  }
  iVar5 = -(uint)(isFatal != 0);
LAB_006ad9d3:
  DAT_00858ddc = 0;
  if (-1 < iVar5) {
    return iVar5;
  }
  FUN_006ad250();
  Library::MSVCRT::FUN_00733b40(0x16);
                    /* WARNING: Subroutine does not return */
  Library::MSVCRT::__exit(-1);
}

