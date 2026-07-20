
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_creat.cpp
   Diagnostic line evidence: 157 | 266 | 268 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void CreateAi(void)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  LPSTR text;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  cMf32 *pcVar8;
  undefined4 unaff_ESI;
  int *piVar9;
  char *pcVar10;
  void *unaff_EDI;
  int *piVar11;
  char *pcVar12;
  InternalExceptionFrame local_64;
  char *local_20;
  uint local_1c;
  char *local_18;
  int local_14;
  char *local_10;
  cMf32 *local_c;
  ushort *local_8;
  
  local_c = (cMf32 *)0x0;
  local_8 = (ushort *)0x0;
  local_10 = (char *)0x0;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  iVar3 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar4 = ReportDebugMessage(s_E____titans_ai_ai_creat_cpp_007d2880,0x10a,0,iVar3,&DAT_007a4ccc,
                               s_CreateAi_007d28c4);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_8 != (ushort *)0x0) {
      FUN_006ab060(&local_8);
    }
    RaiseInternalException(iVar3,0,s_E____titans_ai_ai_creat_cpp_007d2880,0x10c);
    return;
  }
  if (PTR_00802a38 == (STPlaySystemC *)0x0) {
    RaiseInternalException
              (-0x34,g_overwriteContext_007ED77C,s_E____titans_ai_ai_creat_cpp_007d2880,0x9d);
  }
  if (DAT_0080879c == 0) {
    switch(_DAT_008087a0 & 0xff) {
    case 1:
    case 4:
    case 6:
    case 7:
    case 0xd:
    case 0xe:
    case 0x13:
      local_c = g_cMf32_0080675C;
      break;
    case 3:
    case 8:
      if (DAT_0080ed12 == (int *)0x0) {
        if (DAT_0080c52a != 0) {
          thunk_FUN_006766c0();
        }
      }
      else {
        DAT_0080c52a = *DAT_0080ed12;
        piVar9 = DAT_0080ed12 + 0x101;
        piVar11 = &g_playerRuntime[DAT_0080874d].field480_0x2eb;
        for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar11 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar11 = piVar11 + 1;
        }
        piVar9 = DAT_0080ed12 + 0x106;
        piVar11 = &g_playerRuntime[DAT_0080874d].field494_0x2ff;
        for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar11 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar11 = piVar11 + 1;
        }
        piVar9 = DAT_0080ed12 + 0x10b;
        piVar11 = &g_playerRuntime[DAT_0080874d].field522_0x327;
        for (iVar3 = 0x9b; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar11 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar11 = piVar11 + 1;
        }
        piVar9 = DAT_0080ed12 + 0x1a6;
        piVar11 = &g_playerRuntime[DAT_0080874d].field1136_0x593;
        for (iVar3 = 0x6a; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar11 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar11 = piVar11 + 1;
        }
        piVar9 = DAT_0080ed12 + 0x210;
        piVar11 = &g_playerRuntime[DAT_0080874d].field1554_0x73b;
        for (iVar3 = 0x26; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar11 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar11 = piVar11 + 1;
        }
        *(short *)piVar11 = (short)*piVar9;
        *(undefined1 *)((int)piVar11 + 2) = *(undefined1 *)((int)piVar9 + 2);
        if (DAT_0080ed12 != (int *)0x0) {
          FUN_006ab060(&DAT_0080ed12);
          local_c = g_cMf32_00806754;
          break;
        }
      }
    case 2:
    case 5:
    case 0xf:
      local_c = g_cMf32_00806754;
    }
  }
  else {
    local_c = g_cMf32_00806754;
  }
  pcVar8 = local_c;
  if (local_c != (cMf32 *)0x0) {
    CreateArbiter((int)local_c,(char *)&DAT_00809960);
    local_1c = 0;
    local_18 = (char *)((int)&DAT_008087c4 + 3);
    do {
      pcVar10 = local_18;
      uVar5 = local_1c;
      if (((local_18[0x22] != -1) && (local_18[0x21] != '\0')) &&
         ((*local_18 == '\x01' || (DAT_0080879c != 0)))) {
        if (DAT_0080879c == 0) {
          switch(_DAT_008087a0 & 0xff) {
          case 1:
          case 2:
          case 4:
          case 5:
          case 6:
          case 7:
          case 0xd:
          case 0xe:
          case 0xf:
          case 0x13:
            local_10 = local_18 + 1;
            break;
          case 3:
          case 8:
            uVar6 = 0;
            iVar3 = 3;
            text = FUN_006f2c00(PTR_s_STRATEG_0079d668,1,local_1c);
            goto LAB_00649255;
          }
        }
        else {
          iVar3 = 2;
          text = PTR_s_AIPLAYER_0079d660;
          uVar6 = local_1c;
LAB_00649255:
          local_10 = FUN_006f2c00(text,iVar3,uVar6);
        }
        if ((local_10 != (char *)0x0) &&
           (local_8 = LoadStrategData((int)pcVar8,local_10,(int *)0x0), local_8 != (ushort *)0x0)) {
          local_14 = 0;
          if (DAT_00808aaf != 0) {
            pcVar7 = &DAT_00808af6;
            do {
              if ((pcVar7[-2] == pcVar10[0x22]) && (*pcVar7 == '\0')) {
                uVar5 = 0xffffffff;
                local_20 = pcVar7 + -0x46;
                pcVar10 = (char *)((int)local_8 + 0x1b);
                do {
                  pcVar12 = pcVar10;
                  if (uVar5 == 0) break;
                  uVar5 = uVar5 - 1;
                  pcVar12 = pcVar10 + 1;
                  cVar1 = *pcVar10;
                  pcVar10 = pcVar12;
                } while (cVar1 != '\0');
                uVar5 = ~uVar5;
                pcVar10 = pcVar12 + -uVar5;
                pcVar12 = local_20;
                for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
                  pcVar10 = pcVar10 + 4;
                  pcVar12 = pcVar12 + 4;
                }
                for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                  *pcVar12 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                  pcVar12 = pcVar12 + 1;
                }
              }
              local_14 = local_14 + 1;
              pcVar7 = pcVar7 + 0x9c;
              uVar5 = local_1c;
              pcVar10 = local_18;
            } while (local_14 < (int)(uint)DAT_00808aaf);
          }
          StartStrateg(local_8,uVar5);
          FUN_006ab060(&local_8);
        }
      }
      local_18 = pcVar10 + 0x51;
      local_1c = uVar5 + 1;
      pcVar8 = local_c;
    } while ((int)local_18 < 0x808a4f);
  }
  g_currentExceptionFrame = local_64.previous;
  return;
}

