#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetMessage */

undefined4 __thiscall STAllPlayersC::GetMessage(STAllPlayersC *this,int param_1)

{
  byte bVar1;
  DArrayTy *array;
  dword dVar2;
  code *pcVar3;
  STAllPlayersC *this_00;
  int iVar4;
  byte *pbVar5;
  DArrayTy *pDVar6;
  int iVar7;
  undefined4 uVar8;
  STPlayerRuntimeRecord *pSVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  DArrayTy **ppDVar13;
  undefined4 *puVar14;
  int *piVar15;
  char cVar16;
  InternalExceptionFrame local_6c;
  DArrayTy *local_28;
  dword local_24;
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
  iVar4 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar7 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0xa05,0,iVar4,&DAT_007a4ccc,
                               s_STAllPlayersC__GetMessage_007a67b8);
    if (iVar7 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0xa06);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  FUN_006e5fd0();
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar11 = *(uint *)(param_1 + 0x10);
  if (uVar11 < 4) {
    if (uVar11 == 3) {
      thunk_FUN_00446a70();
      local_20 = 0;
      local_14 = &g_playerRuntime[0].objects;
      do {
        uVar11 = 0;
        pDVar6 = local_14[-1];
        array = *local_14;
        local_24 = pDVar6->count;
        local_28 = array;
        if (0 < (int)local_24) {
          do {
            DArrayGetElement(pDVar6,uVar11,&local_18);
            if (local_18 != 0) {
              thunk_FUN_0054cf70(PTR_00802a38,*(uint *)(local_18 + 8));
              local_18 = 0;
              Library::DKW::TBL::FUN_006ae140(&pDVar6->flags,uVar11,&local_18);
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < (int)local_24);
        }
        dVar2 = array->count;
        uVar11 = 0;
        if (0 < (int)dVar2) {
          do {
            DArrayGetElement(array,uVar11,&local_8);
            if (local_8 != 0) {
              thunk_FUN_0054cf70(PTR_00802a38,*(uint *)(local_8 + 8));
              local_8 = 0;
              Library::DKW::TBL::FUN_006ae140(&array->flags,uVar11,&local_8);
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < (int)dVar2);
        }
        iVar4 = local_20;
        cVar16 = (char)local_20;
        thunk_FUN_004d7430(cVar16);
        thunk_FUN_004b7030(cVar16);
        local_20 = iVar4 + 1;
        /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
        local_14 = (DArrayTy **)((int)local_14 + 0xa62);
      } while ((int)local_14 < 0x7fa139);
      uVar11 = 0;
      dVar2 = PTR_007fa154->count;
      if (0 < (int)dVar2) {
        do {
          DArrayGetElement(PTR_007fa154,uVar11,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(PTR_00802a38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::FUN_006ae140(&array->flags,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)dVar2);
      }
      uVar11 = 0;
      dVar2 = PTR_007fa158->count;
      if (0 < (int)dVar2) {
        do {
          DArrayGetElement(PTR_007fa158,uVar11,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(PTR_00802a38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::FUN_006ae140(&array->flags,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)dVar2);
      }
      uVar11 = 0;
      dVar2 = PTR_007fa15c->count;
      if (0 < (int)dVar2) {
        do {
          DArrayGetElement(PTR_007fa15c,uVar11,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(PTR_00802a38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::FUN_006ae140(&array->flags,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)dVar2);
      }
      uVar11 = 0;
      dVar2 = PTR_007fa160->count;
      if (0 < (int)dVar2) {
        do {
          DArrayGetElement(PTR_007fa160,uVar11,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(PTR_00802a38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::FUN_006ae140(&array->flags,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)dVar2);
      }
      uVar11 = 0;
      dVar2 = PTR_007fa164->count;
      if (0 < (int)dVar2) {
        do {
          DArrayGetElement(PTR_007fa164,uVar11,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(PTR_00802a38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::FUN_006ae140(&array->flags,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)dVar2);
      }
      local_14 = &g_playerRuntime[0].groups;
      do {
        ppDVar13 = local_14;
        DArrayDestroy(local_14[1]);
        DArrayDestroy(*ppDVar13);
        DArrayDestroy(*(DArrayTy **)((int)ppDVar13 + 0x2e2));
        puVar14 = (undefined4 *)((int)ppDVar13 + 10);
        iVar4 = 4;
        do {
          DArrayDestroy((DArrayTy *)*puVar14);
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        iVar4 = 5;
        ppDVar13 = local_14 + 0x5a;
        do {
          if (*ppDVar13 != (DArrayTy *)0x0) {
            DArrayDestroy(*ppDVar13);
            *ppDVar13 = (DArrayTy *)0x0;
            ((STPlayerTempSlot *)((int)ppDVar13 + -10))->objectType = 0;
          }
          if (ppDVar13[0x14] != (DArrayTy *)0x0) {
            DArrayDestroy(ppDVar13[0x14]);
            ppDVar13[0x14] = (DArrayTy *)0x0;
            *(undefined4 *)((int)ppDVar13 + 0x46) = 0;
          }
          ppDVar13 = ppDVar13 + 4;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        iVar4 = 10;
        puVar14 = local_14 + 0x83;
        do {
          if ((DArrayTy *)*puVar14 != (DArrayTy *)0x0) {
            DArrayDestroy((DArrayTy *)*puVar14);
            *puVar14 = 0;
            *(undefined4 *)((int)puVar14 + -10) = 0;
          }
          puVar14 = puVar14 + 4;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
        local_14 = (DArrayTy **)((int)local_14 + 0xa62);
      } while ((int)local_14 < 0x7fa135);
      DArrayDestroy(PTR_007fa130);
      PTR_007fa130 = (DArrayTy *)0x0;
      DArrayDestroy(PTR_007fa154);
      PTR_007fa154 = (DArrayTy *)0x0;
      DArrayDestroy(PTR_007fa158);
      PTR_007fa158 = (DArrayTy *)0x0;
      DArrayDestroy(PTR_007fa15c);
      PTR_007fa15c = (DArrayTy *)0x0;
      DArrayDestroy(PTR_007fa160);
      PTR_007fa160 = (DArrayTy *)0x0;
      DArrayDestroy(PTR_007fa164);
      PTR_007fa164 = (DArrayTy *)0x0;
      if (PTR_007fa150 != (DArrayTy *)0x0) {
        DArrayDestroy(PTR_007fa150);
        PTR_007fa150 = (DArrayTy *)0x0;
      }
      if (DAT_007fa168 != (undefined4 *)0x0) {
        FreeAndNull(&DAT_007fa168);
      }
      g_sTAllPlayers_007FA174 = (STAllPlayersC *)0x0;
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    if (uVar11 == 0) {
      iVar4 = 0;
      local_14 = (DArrayTy **)&DAT_008087e9;
      piVar15 = &g_playerRuntime[0].field2179_0xa0a;
      do {
        cVar16 = (char)iVar4;
        if (0x18 < (uint)(PTR_00802a38->field_00E4 - *piVar15)) {
          OptimizeGuardBoats(this_00,cVar16);
          DistributeGuardBoats(this_00,cVar16);
        }
        if ((*(char *)local_14 != -1) &&
           (thunk_FUN_004eb150(this_00,iVar4), (uint)PTR_00802a38->field_00E4 % 10 == 0)) {
          thunk_FUN_004d78e0(cVar16);
        }
        /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
        piVar15 = (int *)((int)piVar15 + 0xa62);
        iVar4 = iVar4 + 1;
        local_14 = (DArrayTy **)((int)local_14 + 0x51);
      } while ((int)piVar15 < 0x7fab3a);
      thunk_FUN_004da9c0(this_00);
      thunk_FUN_004d8360();
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    if (uVar11 == 2) {
      pSVar9 = g_playerRuntime;
      pbVar5 = &DAT_008087e8;
      do {
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 0x51;
        pSVar9->raceId = bVar1;
        pSVar9 = pSVar9 + 1;
      } while ((int)pbVar5 < 0x808a70);
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
        piVar15 = (int *)0x0;
        pcVar12 = &DAT_008087e9;
        ppDVar13 = &g_playerRuntime[0].groups;
        do {
          pDVar6 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,0xf,4,5,0x40307b);
          ppDVar13[1] = pDVar6;
          pDVar6 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,0xf,4,5,0x40307b);
          *ppDVar13 = pDVar6;
          if (*pcVar12 != -1) {
            thunk_FUN_004e5140((int)piVar15);
            thunk_FUN_004eb010(local_10,(int)piVar15);
            cVar16 = (char)piVar15;
            thunk_FUN_004d73b0(cVar16);
            thunk_FUN_004b6fc0(cVar16);
            thunk_FUN_004e51b0(piVar15,(uint *)(DAT_00808a90 >> 0x10 & 0xff),
                               (uint *)(DAT_00808a90 >> 0x18));
            thunk_FUN_004d86a0((uint)piVar15,DAT_00808a90 >> 8 & 0xff);
            thunk_FUN_004d78e0(cVar16);
          }
          /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
          ppDVar13 = (DArrayTy **)((int)ppDVar13 + 0xa62);
          piVar15 = (int *)((int)piVar15 + 1);
          pcVar12 = pcVar12 + 0x51;
        } while ((int)ppDVar13 < 0x7fa135);
        thunk_FUN_004d8110(0);
        thunk_FUN_004d8760(DAT_00808a90 & 0xff);
        DAT_007fa168 = (undefined4 *)Library::DKW::LIB::FUN_006aac70((int)g_worldGrid.planeStride);
        uVar10 = (uint)g_worldGrid.planeStride;
        puVar14 = DAT_007fa168;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar14 = 0x50505050;
          puVar14 = puVar14 + 1;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar14 = 0x50;
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      cVar16 = '\0';
      ppDVar13 = &g_playerRuntime[0].groups;
      do {
        pDVar6 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,0xf,4,5,0x40307b);
        ppDVar13[1] = pDVar6;
        pDVar6 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,0xf,4,5,0x40307b);
        *ppDVar13 = pDVar6;
        thunk_FUN_004b6fc0(cVar16);
        /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
        ppDVar13 = (DArrayTy **)((int)ppDVar13 + 0xa62);
        cVar16 = cVar16 + '\x01';
      } while ((int)ppDVar13 < 0x7fa135);
      thunk_FUN_00444e70(this_00,(undefined4 *)local_c);
      cMf32::RecMemFree(g_cMf32_00806754,(uint *)&local_c);
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
  }
  else if (uVar11 == 0x10f) {
    local_c = (ushort *)SaveAllPlData(this_00,(int *)&local_1c);
    STPlaySystemC::SaveObjData(PTR_00802a38,s_allplsave_007a67d8,(byte *)local_c,local_1c,0xc);
    FreeAndNull(&local_c);
  }
  else if (uVar11 == 0x111) {
    if (g_cMf32_00806754 == (cMf32 *)0x0) {
      iVar4 = 0;
      do {
        _MakeMDPairs(this_00,(char)iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 8);
    }
    else {
      local_c = Library::Ourlib::MFAOBJ::mfAObjLoad(g_cMf32_00806754,s_allplsave_007a67d8,0,0);
      if (local_c == (ushort *)0x0) {
        iVar4 = 0;
        do {
          _MakeMDPairs(this_00,(char)iVar4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < 8);
      }
      else {
        cMf32::RecMemFree(g_cMf32_00806754,(uint *)&local_c);
      }
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    thunk_FUN_004d8b70(*(char *)(*(int *)&this_00->field_0x10 + 0x112d));
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

