
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 534 | 581 | 584 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

uint * __cdecl CreateArbList(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  char *pcVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ushort *_Source;
  undefined4 unaff_ESI;
  byte *pbVar11;
  void *unaff_EDI;
  undefined4 *puVar12;
  char *pcVar13;
  char *pcVar14;
  byte *pbVar15;
  bool bVar16;
  undefined1 local_33c [516];
  char local_138 [76];
  char local_ec [36];
  char local_c8 [32];
  uint local_a8;
  undefined4 local_a4;
  InternalExceptionFrame local_a0;
  byte local_5c [64];
  int local_1c;
  int local_18;
  int local_14;
  uint *local_10;
  ushort *local_c;
  uint *local_8;
  
  puVar12 = (undefined4 *)local_33c;
  for (iVar7 = 0x80; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  *(undefined1 *)puVar12 = 0;
  local_8 = (uint *)0x0;
  local_10 = (uint *)0x0;
  local_a0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a0;
  iVar7 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_a0.previous;
    iVar10 = ReportDebugMessage(s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x245,0,iVar7,&DAT_007a4ccc,
                                s_CreateArbList_007d30e0);
    if (iVar10 == 0) {
      if (local_8 != (uint *)0x0) {
        FUN_006ae110((byte *)local_8);
      }
      if (local_10 != (uint *)0x0) {
        FUN_006ae110((byte *)local_10);
      }
      RaiseInternalException(iVar7,0,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x248);
      return (uint *)0x0;
    }
    pcVar3 = (code *)swi(3);
    puVar6 = (uint *)(*pcVar3)();
    return puVar6;
  }
  if (param_1 == 0) {
    RaiseInternalException(-0x34,DAT_007ed77c,s_E____titans_ai_ai_plr_d_cpp_007d2fa4,0x216);
  }
  local_8 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,0x98,5);
  if (param_2 != 0) {
    local_10 = CreateOpponentList(param_1,0,0xffffffff);
  }
  uVar8 = 0xffffffff;
  local_33c[0] = 0xc;
  pcVar5 = PTR_s_AIBOSS_0079d720;
  do {
    pcVar14 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar14 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar14;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar5 = pcVar14 + -uVar8;
  pcVar14 = local_33c + 1;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar14 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar14 = pcVar14 + 1;
  }
  cMf32::ToBeg((cMf32 *)param_1,FUN_006f2d10,local_33c);
  pcVar5 = (char *)cMf32::RecNameGetNext((cMf32 *)param_1);
  do {
    if (pcVar5 == (char *)0x0) {
      if (local_10 != (uint *)0x0) {
        FUN_006ae110((byte *)local_10);
      }
      g_currentExceptionFrame = local_a0.previous;
      return local_8;
    }
    local_c = mfAObjLoad(param_1,pcVar5,0,1);
    if (local_c != (ushort *)0x0) {
      _Source = local_c + 3;
      pcVar14 = local_138;
      for (iVar7 = 0x26; iVar7 != 0; iVar7 = iVar7 + -1) {
        pcVar14[0] = '\0';
        pcVar14[1] = '\0';
        pcVar14[2] = '\0';
        pcVar14[3] = '\0';
        pcVar14 = pcVar14 + 4;
      }
      Library::MSVCRT::_strncpy(local_138,(char *)_Source,0x3f);
      Library::MSVCRT::_strncpy(local_ec,pcVar5,0x1f);
      uVar8 = 0xffffffff;
      pcVar14 = PTR_s_AIBOSS_0079d720;
      do {
        pcVar13 = pcVar14;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar13 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar13;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pbVar11 = (byte *)(pcVar13 + -uVar8);
      pbVar15 = local_5c;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pbVar15 = *(undefined4 *)pbVar11;
        pbVar11 = pbVar11 + 4;
        pbVar15 = pbVar15 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pbVar15 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        pbVar15 = pbVar15 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar14 = &DAT_007c1890;
      do {
        pcVar13 = pcVar14;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar13 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar13;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      local_18 = 0;
      iVar7 = -1;
      pbVar11 = local_5c;
      do {
        pbVar15 = pbVar11;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pbVar15 = pbVar11 + 1;
        bVar2 = *pbVar11;
        pbVar11 = pbVar15;
      } while (bVar2 != 0);
      pbVar11 = (byte *)(pcVar13 + -uVar8);
      pbVar15 = pbVar15 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pbVar15 = *(undefined4 *)pbVar11;
        pbVar11 = pbVar11 + 4;
        pbVar15 = pbVar15 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pbVar15 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        pbVar15 = pbVar15 + 1;
      }
      Library::MSVCRT::FUN_0072ee80(pcVar5,local_5c);
      iVar7 = local_18;
      if (local_18 == 0) {
        Library::MSVCRT::_strncpy(local_c8,PTR_s_OBJECTIVES_0079d718,0x1f);
      }
      else {
        uVar8 = 0xffffffff;
        pcVar5 = PTR_s_OBJECTIVES_0079d718;
        do {
          pcVar14 = pcVar5;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar14 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar14;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pbVar11 = (byte *)(pcVar14 + -uVar8);
        pbVar15 = local_5c;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pbVar15 = *(undefined4 *)pbVar11;
          pbVar11 = pbVar11 + 4;
          pbVar15 = pbVar15 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pbVar15 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          pbVar15 = pbVar15 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar5 = &DAT_007d30f0;
        do {
          pcVar14 = pcVar5;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar14 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar14;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar10 = -1;
        pbVar11 = local_5c;
        do {
          pbVar15 = pbVar11;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pbVar15 = pbVar11 + 1;
          bVar2 = *pbVar11;
          pbVar11 = pbVar15;
        } while (bVar2 != 0);
        pbVar11 = (byte *)(pcVar14 + -uVar8);
        pbVar15 = pbVar15 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pbVar15 = *(undefined4 *)pbVar11;
          pbVar11 = pbVar11 + 4;
          pbVar15 = pbVar15 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pbVar15 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          pbVar15 = pbVar15 + 1;
        }
        wsprintfA(local_c8,(LPCSTR)local_5c,iVar7);
      }
      uVar8 = 0;
      local_a8 = *(uint *)(local_c + 0x29);
      if (local_a8 == 0) {
        local_a8 = 1;
      }
      local_a4 = 0;
      bVar4 = true;
      if (param_2 != 0) {
        bVar4 = false;
        local_14 = 0;
        local_1c = 0;
        uVar9 = local_10[3];
        if (0 < (int)uVar9) {
          bVar16 = uVar9 != 0;
          do {
            if (bVar16) {
              iVar7 = local_10[2] * uVar8 + local_10[7];
            }
            else {
              iVar7 = 0;
            }
            if ((iVar7 != 0) && ((*(uint *)(iVar7 + 0x90) & local_a8) != 0)) {
              iVar7 = *(int *)(iVar7 + 0x94);
              if (iVar7 == 1) {
                bVar4 = true;
              }
              else if (iVar7 == 2) {
                local_14 = 1;
              }
              else if (iVar7 == 3) {
                local_1c = 1;
              }
            }
            uVar8 = uVar8 + 1;
            bVar16 = uVar8 < uVar9;
          } while ((int)uVar8 < (int)uVar9);
        }
        if (((bVar4) && (local_14 != 0)) && (local_1c != 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
      }
      if (bVar4) {
        Library::DKW::TBL::FUN_006ae1c0(local_8,(undefined4 *)local_138);
      }
      cMf32::RecMemFree((cMf32 *)param_1,(uint *)&local_c);
    }
    pcVar5 = (char *)cMf32::RecNameGetNext((cMf32 *)param_1);
  } while( true );
}

