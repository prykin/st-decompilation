
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetMessage */

undefined4 __thiscall STAllPlayersC::GetMessage(STAllPlayersC *this,int param_1)

{
  undefined1 uVar1;
  uint *puVar2;
  code *pcVar3;
  STAllPlayersC *this_00;
  int iVar4;
  undefined1 *puVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 unaff_ESI;
  undefined4 *puVar13;
  void *unaff_EDI;
  int *piVar14;
  char cVar15;
  InternalExceptionFrame local_6c;
  uint *local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  char *local_14;
  STAllPlayersC *local_10;
  ushort *local_c;
  int local_8;
  
  local_c = (ushort *)0x0;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_10 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar7 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xa05,0,iVar4,&DAT_007a4ccc,
                               s_STAllPlayersC__GetMessage_007a67b8);
    if (iVar7 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0xa06);
      return 0xffff;
    }
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return uVar8;
  }
  FUN_006e5fd0();
  uVar11 = *(uint *)(param_1 + 0x10);
  if (uVar11 < 4) {
    if (uVar11 == 3) {
      thunk_FUN_00446a70();
      local_20 = 0;
      local_14 = (char *)&DAT_007f4e29;
      do {
        uVar11 = 0;
        puVar6 = *(uint **)((int)local_14 + -4);
        puVar2 = *(uint **)local_14;
        local_24 = puVar6[3];
        local_28 = puVar2;
        if (0 < (int)local_24) {
          do {
            FUN_006acc70((int)puVar6,uVar11,&local_18);
            if (local_18 != 0) {
              thunk_FUN_0054cf70(DAT_00802a38,*(uint *)(local_18 + 8));
              local_18 = 0;
              Library::DKW::TBL::FUN_006ae140(puVar6,uVar11,&local_18);
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < (int)local_24);
        }
        uVar11 = puVar2[3];
        uVar10 = 0;
        if (0 < (int)uVar11) {
          do {
            FUN_006acc70((int)puVar2,uVar10,&local_8);
            if (local_8 != 0) {
              thunk_FUN_0054cf70(DAT_00802a38,*(uint *)(local_8 + 8));
              local_8 = 0;
              Library::DKW::TBL::FUN_006ae140(puVar2,uVar10,&local_8);
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)uVar11);
        }
        iVar4 = local_20;
        cVar15 = (char)local_20;
        thunk_FUN_004d7430(cVar15);
        thunk_FUN_004b7030(cVar15);
        local_20 = iVar4 + 1;
        local_14 = (char *)((int)local_14 + 0xa62);
      } while ((int)local_14 < 0x7fa139);
      uVar11 = 0;
      iVar4 = *(int *)((int)DAT_007fa154 + 0xc);
      if (0 < iVar4) {
        do {
          FUN_006acc70((int)DAT_007fa154,uVar11,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(DAT_00802a38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::FUN_006ae140(puVar2,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < iVar4);
      }
      uVar11 = 0;
      iVar4 = *(int *)((int)DAT_007fa158 + 0xc);
      if (0 < iVar4) {
        do {
          FUN_006acc70((int)DAT_007fa158,uVar11,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(DAT_00802a38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::FUN_006ae140(puVar2,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < iVar4);
      }
      uVar11 = 0;
      iVar4 = *(int *)((int)DAT_007fa15c + 0xc);
      if (0 < iVar4) {
        do {
          FUN_006acc70((int)DAT_007fa15c,uVar11,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(DAT_00802a38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::FUN_006ae140(puVar2,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < iVar4);
      }
      uVar11 = 0;
      iVar4 = *(int *)((int)DAT_007fa160 + 0xc);
      if (0 < iVar4) {
        do {
          FUN_006acc70((int)DAT_007fa160,uVar11,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(DAT_00802a38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::FUN_006ae140(puVar2,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < iVar4);
      }
      uVar11 = 0;
      iVar4 = *(int *)((int)DAT_007fa164 + 0xc);
      if (0 < iVar4) {
        do {
          FUN_006acc70((int)DAT_007fa164,uVar11,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(DAT_00802a38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::FUN_006ae140(puVar2,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < iVar4);
      }
      local_14 = (char *)((int)&DAT_007f4e24 + 1);
      do {
        pcVar12 = local_14;
        FUN_006ae110(*(byte **)((int)local_14 + 4));
        FUN_006ae110(*(byte **)pcVar12);
        FUN_006ae110(*(byte **)((int)pcVar12 + 0x2e2));
        puVar13 = (undefined4 *)((int)pcVar12 + 10);
        iVar4 = 4;
        do {
          FUN_006ae110((byte *)*puVar13);
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        iVar4 = 5;
        puVar13 = (undefined4 *)((int)local_14 + 0x168);
        do {
          if ((byte *)*puVar13 != (byte *)0x0) {
            FUN_006ae110((byte *)*puVar13);
            *puVar13 = 0;
            *(undefined4 *)((int)puVar13 + -10) = 0;
          }
          if ((byte *)puVar13[0x14] != (byte *)0x0) {
            FUN_006ae110((byte *)puVar13[0x14]);
            puVar13[0x14] = 0;
            *(undefined4 *)((int)puVar13 + 0x46) = 0;
          }
          puVar13 = puVar13 + 4;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        iVar4 = 10;
        puVar13 = (undefined4 *)((int)local_14 + 0x20c);
        do {
          if ((byte *)*puVar13 != (byte *)0x0) {
            FUN_006ae110((byte *)*puVar13);
            *puVar13 = 0;
            *(undefined4 *)((int)puVar13 + -10) = 0;
          }
          puVar13 = puVar13 + 4;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        local_14 = (char *)((int)local_14 + 0xa62);
      } while ((int)local_14 < 0x7fa135);
      FUN_006ae110((byte *)DAT_007fa130);
      DAT_007fa130 = (uint *)0x0;
      FUN_006ae110((byte *)DAT_007fa154);
      DAT_007fa154 = (uint *)0x0;
      FUN_006ae110((byte *)DAT_007fa158);
      DAT_007fa158 = (uint *)0x0;
      FUN_006ae110((byte *)DAT_007fa15c);
      DAT_007fa15c = (uint *)0x0;
      FUN_006ae110((byte *)DAT_007fa160);
      DAT_007fa160 = (uint *)0x0;
      FUN_006ae110((byte *)DAT_007fa164);
      DAT_007fa164 = (uint *)0x0;
      if (DAT_007fa150 != (byte *)0x0) {
        FUN_006ae110(DAT_007fa150);
        DAT_007fa150 = (byte *)0x0;
      }
      if (DAT_007fa168 != (undefined4 *)0x0) {
        FUN_006ab060(&DAT_007fa168);
      }
      DAT_007fa174 = 0;
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    if (uVar11 == 0) {
      uVar11 = 0;
      local_14 = &DAT_008087e9;
      piVar14 = &DAT_007f582a;
      do {
        if (0x18 < (uint)(DAT_00802a38->field_00E4 - *piVar14)) {
          OptimizeGuardBoats(this_00,(char)uVar11);
          DistributeGuardBoats(this_00,uVar11);
        }
        if ((*local_14 != -1) &&
           (thunk_FUN_004eb150(this_00,uVar11), (uint)DAT_00802a38->field_00E4 % 10 == 0)) {
          thunk_FUN_004d78e0((char)uVar11);
        }
        piVar14 = (int *)((int)piVar14 + 0xa62);
        uVar11 = uVar11 + 1;
        local_14 = local_14 + 0x51;
      } while ((int)piVar14 < 0x7fab3a);
      thunk_FUN_004da9c0(this_00);
      thunk_FUN_004d8360();
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    if (uVar11 == 2) {
      puVar9 = &DAT_007f4e20;
      puVar5 = &DAT_008087e8;
      do {
        uVar1 = *puVar5;
        puVar5 = puVar5 + 0x51;
        *puVar9 = uVar1;
        puVar9 = puVar9 + 0xa62;
      } while ((int)puVar5 < 0x808a70);
      DAT_007fa154 = Library::DKW::TBL::FUN_006ae310((uint *)0x0,0,4,1,0x40307b);
      DAT_007fa158 = Library::DKW::TBL::FUN_006ae310((uint *)0x0,0,4,1,0x40307b);
      DAT_007fa15c = Library::DKW::TBL::FUN_006ae310((uint *)0x0,0,4,1,0x40307b);
      DAT_007fa160 = Library::DKW::TBL::FUN_006ae310((uint *)0x0,0,4,1,0x40307b);
      DAT_007fa164 = Library::DKW::TBL::FUN_006ae310((uint *)0x0,0,4,1,0x40307b);
      DAT_007fa130 = Library::DKW::TBL::FUN_006ae310((uint *)0x0,0,4,1,0x40307b);
      DAT_007fa134 = 0;
      if (DAT_00806754 != (cMf32 *)0x0) {
        local_c = FUN_006f2d90(DAT_00806754,s_allplsave_007a67d8,0,0);
      }
      if (local_c == (ushort *)0x0) {
        piVar14 = (int *)0x0;
        pcVar12 = &DAT_008087e9;
        puVar13 = (undefined4 *)((int)&DAT_007f4e24 + 1);
        do {
          puVar6 = Library::DKW::TBL::FUN_006ae310((uint *)0x0,0xf,4,5,0x40307b);
          puVar13[1] = puVar6;
          puVar6 = Library::DKW::TBL::FUN_006ae310((uint *)0x0,0xf,4,5,0x40307b);
          *puVar13 = puVar6;
          if (*pcVar12 != -1) {
            thunk_FUN_004e5140((int)piVar14);
            thunk_FUN_004eb010(local_10,(int)piVar14);
            cVar15 = (char)piVar14;
            thunk_FUN_004d73b0(cVar15);
            thunk_FUN_004b6fc0(cVar15);
            thunk_FUN_004e51b0(piVar14,(uint *)(DAT_00808a90 >> 0x10 & 0xff),
                               (uint *)(DAT_00808a90 >> 0x18));
            thunk_FUN_004d86a0((uint)piVar14,DAT_00808a90 >> 8 & 0xff);
            thunk_FUN_004d78e0(cVar15);
          }
          puVar13 = (undefined4 *)((int)puVar13 + 0xa62);
          piVar14 = (int *)((int)piVar14 + 1);
          pcVar12 = pcVar12 + 0x51;
        } while ((int)puVar13 < 0x7fa135);
        thunk_FUN_004d8110(0);
        thunk_FUN_004d8760(DAT_00808a90 & 0xff);
        DAT_007fa168 = (undefined4 *)Library::DKW::LIB::FUN_006aac70((int)DAT_007fb246);
        uVar10 = (uint)DAT_007fb246;
        puVar13 = DAT_007fa168;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar13 = 0x50505050;
          puVar13 = puVar13 + 1;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar13 = 0x50;
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      cVar15 = '\0';
      puVar13 = (undefined4 *)((int)&DAT_007f4e24 + 1);
      do {
        puVar6 = Library::DKW::TBL::FUN_006ae310((uint *)0x0,0xf,4,5,0x40307b);
        puVar13[1] = puVar6;
        puVar6 = Library::DKW::TBL::FUN_006ae310((uint *)0x0,0xf,4,5,0x40307b);
        *puVar13 = puVar6;
        thunk_FUN_004b6fc0(cVar15);
        puVar13 = (undefined4 *)((int)puVar13 + 0xa62);
        cVar15 = cVar15 + '\x01';
      } while ((int)puVar13 < 0x7fa135);
      thunk_FUN_00444e70(this_00,(undefined4 *)local_c);
      cMf32::RecMemFree(DAT_00806754,(uint *)&local_c);
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
  }
  else if (uVar11 == 0x10f) {
    local_c = (ushort *)SaveAllPlData(this_00,(int *)&local_1c);
    STPlaySystemC::SaveObjData(DAT_00802a38,s_allplsave_007a67d8,(byte *)local_c,local_1c,0xc);
    FUN_006ab060(&local_c);
  }
  else if (uVar11 == 0x111) {
    if (DAT_00806754 == (cMf32 *)0x0) {
      iVar4 = 0;
      do {
        _MakeMDPairs(this_00,(char)iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 8);
    }
    else {
      local_c = FUN_006f2d90(DAT_00806754,s_allplsave_007a67d8,0,0);
      if (local_c == (ushort *)0x0) {
        iVar4 = 0;
        do {
          _MakeMDPairs(this_00,(char)iVar4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < 8);
      }
      else {
        cMf32::RecMemFree(DAT_00806754,(uint *)&local_c);
      }
    }
    thunk_FUN_004d8b70(*(char *)(*(int *)(this_00 + 0x10) + 0x112d));
    iVar4 = 0;
    do {
      thunk_FUN_004b7750(iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_6c.previous;
  return 0;
}

