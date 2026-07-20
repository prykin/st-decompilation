
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetMessage */

undefined4 __thiscall STAllPlayersC::GetMessage(STAllPlayersC *this,int param_1)

{
  byte bVar1;
  DArrayTy *pDVar2;
  dword dVar3;
  code *pcVar4;
  STAllPlayersC *this_00;
  int iVar5;
  byte *pbVar6;
  DArrayTy *pDVar7;
  int iVar8;
  undefined4 uVar9;
  STPlayerRuntimeRecord *pSVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  undefined4 unaff_ESI;
  DArrayTy **ppDVar14;
  undefined4 *puVar15;
  void *unaff_EDI;
  int *piVar16;
  char cVar17;
  InternalExceptionFrame local_6c;
  DArrayTy *local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  DArrayTy **local_14;
  STAllPlayersC *local_10;
  ushort *local_c;
  int local_8;
  
  local_c = (ushort *)0x0;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar8 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xa05,0,iVar5,&DAT_007a4ccc,
                               s_STAllPlayersC__GetMessage_007a67b8);
    if (iVar8 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0xa06);
      return 0xffff;
    }
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return uVar9;
  }
  FUN_006e5fd0();
  uVar12 = *(uint *)(param_1 + 0x10);
  if (uVar12 < 4) {
    if (uVar12 == 3) {
      thunk_FUN_00446a70();
      local_20 = 0;
      local_14 = &g_playerRuntime[0].objects;
      do {
        uVar12 = 0;
        pDVar7 = local_14[-1];
        pDVar2 = *local_14;
        local_24 = pDVar7->count;
        local_28 = pDVar2;
        if (0 < (int)local_24) {
          do {
            FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar7,uVar12,&local_18);
            if (local_18 != 0) {
              thunk_FUN_0054cf70(PTR_00802a38,*(uint *)(local_18 + 8));
              local_18 = 0;
              Library::DKW::TBL::FUN_006ae140(&pDVar7->flags,uVar12,&local_18);
            }
            uVar12 = uVar12 + 1;
          } while ((int)uVar12 < (int)local_24);
        }
        uVar12 = pDVar2->count;
        uVar11 = 0;
        if (0 < (int)uVar12) {
          do {
            FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar2,uVar11,&local_8);
            if (local_8 != 0) {
              thunk_FUN_0054cf70(PTR_00802a38,*(uint *)(local_8 + 8));
              local_8 = 0;
              Library::DKW::TBL::FUN_006ae140(&pDVar2->flags,uVar11,&local_8);
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < (int)uVar12);
        }
        iVar5 = local_20;
        cVar17 = (char)local_20;
        thunk_FUN_004d7430(cVar17);
        thunk_FUN_004b7030(cVar17);
        local_20 = iVar5 + 1;
        local_14 = (DArrayTy **)((int)local_14 + 0xa62);
      } while ((int)local_14 < 0x7fa139);
      uVar12 = 0;
      dVar3 = PTR_007fa154->count;
      if (0 < (int)dVar3) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)PTR_007fa154,uVar12,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(PTR_00802a38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::FUN_006ae140(&pDVar2->flags,uVar12,&local_8);
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)dVar3);
      }
      uVar12 = 0;
      dVar3 = PTR_007fa158->count;
      if (0 < (int)dVar3) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)PTR_007fa158,uVar12,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(PTR_00802a38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::FUN_006ae140(&pDVar2->flags,uVar12,&local_8);
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)dVar3);
      }
      uVar12 = 0;
      dVar3 = PTR_007fa15c->count;
      if (0 < (int)dVar3) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)PTR_007fa15c,uVar12,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(PTR_00802a38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::FUN_006ae140(&pDVar2->flags,uVar12,&local_8);
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)dVar3);
      }
      uVar12 = 0;
      dVar3 = PTR_007fa160->count;
      if (0 < (int)dVar3) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)PTR_007fa160,uVar12,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(PTR_00802a38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::FUN_006ae140(&pDVar2->flags,uVar12,&local_8);
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)dVar3);
      }
      uVar12 = 0;
      dVar3 = PTR_007fa164->count;
      if (0 < (int)dVar3) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)PTR_007fa164,uVar12,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(PTR_00802a38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::FUN_006ae140(&pDVar2->flags,uVar12,&local_8);
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)dVar3);
      }
      local_14 = &g_playerRuntime[0].groups;
      do {
        ppDVar14 = local_14;
        FUN_006ae110((byte *)local_14[1]);
        FUN_006ae110((byte *)*ppDVar14);
        FUN_006ae110(*(byte **)((int)ppDVar14 + 0x2e2));
        puVar15 = (undefined4 *)((int)ppDVar14 + 10);
        iVar5 = 4;
        do {
          FUN_006ae110((byte *)*puVar15);
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar5 = 5;
        puVar15 = local_14 + 0x5a;
        do {
          if ((byte *)*puVar15 != (byte *)0x0) {
            FUN_006ae110((byte *)*puVar15);
            *puVar15 = 0;
            *(undefined4 *)((int)puVar15 + -10) = 0;
          }
          if ((byte *)puVar15[0x14] != (byte *)0x0) {
            FUN_006ae110((byte *)puVar15[0x14]);
            puVar15[0x14] = 0;
            *(undefined4 *)((int)puVar15 + 0x46) = 0;
          }
          puVar15 = puVar15 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar5 = 10;
        puVar15 = local_14 + 0x83;
        do {
          if ((byte *)*puVar15 != (byte *)0x0) {
            FUN_006ae110((byte *)*puVar15);
            *puVar15 = 0;
            *(undefined4 *)((int)puVar15 + -10) = 0;
          }
          puVar15 = puVar15 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        local_14 = (DArrayTy **)((int)local_14 + 0xa62);
      } while ((int)local_14 < 0x7fa135);
      FUN_006ae110((byte *)PTR_007fa130);
      PTR_007fa130 = (DArrayTy *)0x0;
      FUN_006ae110((byte *)PTR_007fa154);
      PTR_007fa154 = (DArrayTy *)0x0;
      FUN_006ae110((byte *)PTR_007fa158);
      PTR_007fa158 = (DArrayTy *)0x0;
      FUN_006ae110((byte *)PTR_007fa15c);
      PTR_007fa15c = (DArrayTy *)0x0;
      FUN_006ae110((byte *)PTR_007fa160);
      PTR_007fa160 = (DArrayTy *)0x0;
      FUN_006ae110((byte *)PTR_007fa164);
      PTR_007fa164 = (DArrayTy *)0x0;
      if (PTR_007fa150 != (DArrayTy *)0x0) {
        FUN_006ae110((byte *)PTR_007fa150);
        PTR_007fa150 = (DArrayTy *)0x0;
      }
      if (DAT_007fa168 != (undefined4 *)0x0) {
        FUN_006ab060(&DAT_007fa168);
      }
      g_sTAllPlayers_007FA174 = (STAllPlayersC *)0x0;
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    if (uVar12 == 0) {
      uVar12 = 0;
      local_14 = (DArrayTy **)&DAT_008087e9;
      piVar16 = &g_playerRuntime[0].field2297_0xa0a;
      do {
        if (0x18 < (uint)(PTR_00802a38->field_00E4 - *piVar16)) {
          OptimizeGuardBoats(this_00,(char)uVar12);
          DistributeGuardBoats(this_00,uVar12);
        }
        if ((*(char *)local_14 != -1) &&
           (thunk_FUN_004eb150(this_00,uVar12), (uint)PTR_00802a38->field_00E4 % 10 == 0)) {
          thunk_FUN_004d78e0((char)uVar12);
        }
        piVar16 = (int *)((int)piVar16 + 0xa62);
        uVar12 = uVar12 + 1;
        local_14 = (DArrayTy **)((int)local_14 + 0x51);
      } while ((int)piVar16 < 0x7fab3a);
      thunk_FUN_004da9c0(this_00);
      thunk_FUN_004d8360();
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    if (uVar12 == 2) {
      pSVar10 = g_playerRuntime;
      pbVar6 = &DAT_008087e8;
      do {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 0x51;
        pSVar10->raceId = bVar1;
        pSVar10 = pSVar10 + 1;
      } while ((int)pbVar6 < 0x808a70);
      PTR_007fa154 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,0,4,1,0x40307b);
      PTR_007fa158 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,0,4,1,0x40307b);
      PTR_007fa15c = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,0,4,1,0x40307b);
      PTR_007fa160 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,0,4,1,0x40307b);
      PTR_007fa164 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,0,4,1,0x40307b);
      PTR_007fa130 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,0,4,1,0x40307b);
      DAT_007fa134 = 0;
      if (g_cMf32_00806754 != (cMf32 *)0x0) {
        local_c = Library::Ourlib::MFAOBJ::mfAObjLoad(g_cMf32_00806754,s_allplsave_007a67d8,0,0);
      }
      if (local_c == (ushort *)0x0) {
        piVar16 = (int *)0x0;
        pcVar13 = &DAT_008087e9;
        ppDVar14 = &g_playerRuntime[0].groups;
        do {
          pDVar7 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,0xf,4,5,0x40307b);
          ppDVar14[1] = pDVar7;
          pDVar7 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,0xf,4,5,0x40307b);
          *ppDVar14 = pDVar7;
          if (*pcVar13 != -1) {
            thunk_FUN_004e5140((int)piVar16);
            thunk_FUN_004eb010(local_10,(int)piVar16);
            cVar17 = (char)piVar16;
            thunk_FUN_004d73b0(cVar17);
            thunk_FUN_004b6fc0(cVar17);
            thunk_FUN_004e51b0(piVar16,(uint *)(DAT_00808a90 >> 0x10 & 0xff),
                               (uint *)(DAT_00808a90 >> 0x18));
            thunk_FUN_004d86a0((uint)piVar16,DAT_00808a90 >> 8 & 0xff);
            thunk_FUN_004d78e0(cVar17);
          }
          ppDVar14 = (DArrayTy **)((int)ppDVar14 + 0xa62);
          piVar16 = (int *)((int)piVar16 + 1);
          pcVar13 = pcVar13 + 0x51;
        } while ((int)ppDVar14 < 0x7fa135);
        thunk_FUN_004d8110(0);
        thunk_FUN_004d8760(DAT_00808a90 & 0xff);
        DAT_007fa168 = (undefined4 *)Library::DKW::LIB::FUN_006aac70((int)SHORT_007fb246);
        uVar11 = (uint)SHORT_007fb246;
        puVar15 = DAT_007fa168;
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar15 = 0x50505050;
          puVar15 = puVar15 + 1;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar15 = 0x50;
          puVar15 = (undefined4 *)((int)puVar15 + 1);
        }
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      cVar17 = '\0';
      ppDVar14 = &g_playerRuntime[0].groups;
      do {
        pDVar7 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,0xf,4,5,0x40307b);
        ppDVar14[1] = pDVar7;
        pDVar7 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,0xf,4,5,0x40307b);
        *ppDVar14 = pDVar7;
        thunk_FUN_004b6fc0(cVar17);
        ppDVar14 = (DArrayTy **)((int)ppDVar14 + 0xa62);
        cVar17 = cVar17 + '\x01';
      } while ((int)ppDVar14 < 0x7fa135);
      thunk_FUN_00444e70(this_00,(undefined4 *)local_c);
      cMf32::RecMemFree(g_cMf32_00806754,(uint *)&local_c);
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
  }
  else if (uVar12 == 0x10f) {
    local_c = (ushort *)SaveAllPlData(this_00,(int *)&local_1c);
    STPlaySystemC::SaveObjData(PTR_00802a38,s_allplsave_007a67d8,(byte *)local_c,local_1c,0xc);
    FUN_006ab060(&local_c);
  }
  else if (uVar12 == 0x111) {
    if (g_cMf32_00806754 == (cMf32 *)0x0) {
      iVar5 = 0;
      do {
        _MakeMDPairs(this_00,(char)iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 8);
    }
    else {
      local_c = Library::Ourlib::MFAOBJ::mfAObjLoad(g_cMf32_00806754,s_allplsave_007a67d8,0,0);
      if (local_c == (ushort *)0x0) {
        iVar5 = 0;
        do {
          _MakeMDPairs(this_00,(char)iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar5 < 8);
      }
      else {
        cMf32::RecMemFree(g_cMf32_00806754,(uint *)&local_c);
      }
    }
    thunk_FUN_004d8b70(*(char *)(*(int *)&this_00->field_0x10 + 0x112d));
    iVar5 = 0;
    do {
      thunk_FUN_004b7750(iVar5);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_6c.previous;
  return 0;
}

