#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00405CA4|00430A90; family_names=STAllPlayersC::GetMessage; ret4=7;
   direct_offsets={10:2,14:0,18:0,1c:0} */

int __thiscall STAllPlayersC::GetMessage(STAllPlayersC *this,STMessage *message)

{
  undefined1 uVar1;
  STMessageId SVar2;
  DArrayTy *array;
  DArrayTy *array_00;
  dword dVar3;
  code *pcVar4;
  STAllPlayersC *this_00;
  int iVar5;
  undefined1 *puVar6;
  uint *puVar7;
  int iVar8;
  PackedRecord_A62x8 *pPVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 *puVar13;
  int *piVar14;
  char cVar15;
  InternalExceptionFrame local_6c;
  DArrayTy *local_28;
  dword local_24;
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
  iVar5 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  this_00 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xa05,0,iVar5,"%s",
                               "STAllPlayersC::GetMessage");
    if (iVar8 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\wlad\\to_allpl.cpp",0xa06);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  FUN_006e5fd0(local_10,message);
  SVar2 = message->id;
  if (SVar2 < 4) {
    if (SVar2 == MESS_SHARED_0003) {
      thunk_FUN_00446a70();
      local_20 = 0;
      local_14 = (char *)&g_packedRecords_A62x8[0].field6_0x9;
      do {
        uVar11 = 0;
        array = *(DArrayTy **)((int)local_14 + -4);
        array_00 = *(DArrayTy **)local_14;
        local_24 = array->count;
        local_28 = array_00;
        if (0 < (int)local_24) {
          do {
            DArrayGetElement(array,uVar11,&local_18);
            if (local_18 != 0) {
              thunk_FUN_0054cf70(g_playSystem_00802A38,*(uint *)(local_18 + 8));
              local_18 = 0;
              Library::DKW::TBL::DArrayPut(array,uVar11,&local_18);
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < (int)local_24);
        }
        dVar3 = array_00->count;
        uVar11 = 0;
        if (0 < (int)dVar3) {
          do {
            DArrayGetElement(array_00,uVar11,&local_8);
            if (local_8 != 0) {
              thunk_FUN_0054cf70(g_playSystem_00802A38,*(uint *)(local_8 + 8));
              local_8 = 0;
              Library::DKW::TBL::DArrayPut(array_00,uVar11,&local_8);
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < (int)dVar3);
        }
        iVar5 = local_20;
        cVar15 = (char)local_20;
        thunk_FUN_004d7430(cVar15);
        thunk_FUN_004b7030(cVar15);
        local_20 = iVar5 + 1;
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        local_14 = (char *)((int)local_14 + 0xa62);
      } while ((int)local_14 < 0x7fa139);
      uVar11 = 0;
      dVar3 = g_array_007FA154->count;
      if (0 < (int)dVar3) {
        do {
          DArrayGetElement(g_array_007FA154,uVar11,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(g_playSystem_00802A38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::DArrayPut(array_00,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)dVar3);
      }
      uVar11 = 0;
      dVar3 = g_array_007FA158->count;
      if (0 < (int)dVar3) {
        do {
          DArrayGetElement(g_array_007FA158,uVar11,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(g_playSystem_00802A38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::DArrayPut(array_00,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)dVar3);
      }
      uVar11 = 0;
      dVar3 = g_array_007FA15C->count;
      if (0 < (int)dVar3) {
        do {
          DArrayGetElement(g_array_007FA15C,uVar11,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(g_playSystem_00802A38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::DArrayPut(array_00,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)dVar3);
      }
      uVar11 = 0;
      dVar3 = g_array_007FA160->count;
      if (0 < (int)dVar3) {
        do {
          DArrayGetElement(g_array_007FA160,uVar11,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(g_playSystem_00802A38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::DArrayPut(array_00,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)dVar3);
      }
      uVar11 = 0;
      dVar3 = g_array_007FA164->count;
      if (0 < (int)dVar3) {
        do {
          DArrayGetElement(g_array_007FA164,uVar11,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(g_playSystem_00802A38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::DArrayPut(array_00,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)dVar3);
      }
      local_14 = (char *)&g_packedRecords_A62x8[0].field5_0x5;
      do {
        pcVar12 = local_14;
        DArrayDestroy(*(DArrayTy **)((int)local_14 + 4));
        DArrayDestroy(*(DArrayTy **)pcVar12);
        DArrayDestroy(*(DArrayTy **)((int)pcVar12 + 0x2e2));
        puVar13 = (undefined4 *)((int)pcVar12 + 10);
        iVar5 = 4;
        do {
          DArrayDestroy((DArrayTy *)*puVar13);
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar5 = 5;
        puVar13 = (undefined4 *)((int)local_14 + 0x168);
        do {
          if ((DArrayTy *)*puVar13 != (DArrayTy *)0x0) {
            DArrayDestroy((DArrayTy *)*puVar13);
            *puVar13 = 0;
            *(undefined4 *)((int)puVar13 + -10) = 0;
          }
          if ((DArrayTy *)puVar13[0x14] != (DArrayTy *)0x0) {
            DArrayDestroy((DArrayTy *)puVar13[0x14]);
            puVar13[0x14] = 0;
            *(undefined4 *)((int)puVar13 + 0x46) = 0;
          }
          puVar13 = puVar13 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar5 = 10;
        puVar13 = (undefined4 *)((int)local_14 + 0x20c);
        do {
          if ((DArrayTy *)*puVar13 != (DArrayTy *)0x0) {
            DArrayDestroy((DArrayTy *)*puVar13);
            *puVar13 = 0;
            *(undefined4 *)((int)puVar13 + -10) = 0;
          }
          puVar13 = puVar13 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        local_14 = (char *)((int)local_14 + 0xa62);
      } while ((int)local_14 < 0x7fa135);
      DArrayDestroy(g_array_007FA130);
      g_array_007FA130 = (DArrayTy *)0x0;
      DArrayDestroy(g_array_007FA154);
      g_array_007FA154 = (DArrayTy *)0x0;
      DArrayDestroy(g_array_007FA158);
      g_array_007FA158 = (DArrayTy *)0x0;
      DArrayDestroy(g_array_007FA15C);
      g_array_007FA15C = (DArrayTy *)0x0;
      DArrayDestroy(g_array_007FA160);
      g_array_007FA160 = (DArrayTy *)0x0;
      DArrayDestroy(g_array_007FA164);
      g_array_007FA164 = (DArrayTy *)0x0;
      if (g_array_007FA150 != (DArrayTy *)0x0) {
        DArrayDestroy(g_array_007FA150);
        g_array_007FA150 = (DArrayTy *)0x0;
      }
      if (DAT_007fa168 != (undefined4 *)0x0) {
        FreeAndNull(&DAT_007fa168);
      }
      g_allPlayers_007FA174 = (STAllPlayersC *)0x0;
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    if (SVar2 == MESS_ID_NONE) {
      iVar5 = 0;
      local_14 = &DAT_008087e9;
      piVar14 = &g_packedRecords_A62x8[0].field2382_0xa0a;
      do {
        cVar15 = (char)iVar5;
        if (0x18 < g_playSystem_00802A38->field_00E4 - *piVar14) {
          OptimizeGuardBoats(this_00,cVar15);
          DistributeGuardBoats(this_00,cVar15);
        }
        if ((*local_14 != -1) &&
           (thunk_FUN_004eb150(this_00,iVar5), g_playSystem_00802A38->field_00E4 % 10 == 0)) {
          thunk_FUN_004d78e0(cVar15);
        }
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        piVar14 = (int *)((int)piVar14 + 0xa62);
        iVar5 = iVar5 + 1;
        local_14 = local_14 + 0x51;
      } while ((int)piVar14 < 0x7fab3a);
      thunk_FUN_004da9c0(this_00);
      thunk_FUN_004d8360();
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    if (SVar2 == MESS_ID_CREATE) {
      pPVar9 = g_packedRecords_A62x8;
      puVar6 = &DAT_008087e8;
      do {
        uVar1 = *puVar6;
        puVar6 = puVar6 + 0x51;
        pPVar9->field0_0x0 = uVar1;
        pPVar9 = pPVar9 + 1;
      } while ((int)puVar6 < 0x808a70);
      g_array_007FA154 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,0,4,1,0x40307b);
      g_array_007FA158 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,0,4,1,0x40307b);
      g_array_007FA15C = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,0,4,1,0x40307b);
      g_array_007FA160 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,0,4,1,0x40307b);
      g_array_007FA164 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,0,4,1,0x40307b);
      g_array_007FA130 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,0,4,1,0x40307b);
      DAT_007fa134 = 0;
      if (g_cMf32_00806754 != (cMf32 *)0x0) {
        local_c = Library::Ourlib::MFAOBJ::mfAObjLoad(g_cMf32_00806754,"allplsave",0,0);
      }
      if (local_c == (ushort *)0x0) {
        piVar14 = (int *)0x0;
        pcVar12 = &DAT_008087e9;
        puVar13 = &g_packedRecords_A62x8[0].field5_0x5;
        do {
          puVar7 = Library::DKW::TBL::FUN_006ae310((uint *)0x0,0xf,4,5,0x40307b);
          puVar13[1] = puVar7;
          puVar7 = Library::DKW::TBL::FUN_006ae310((uint *)0x0,0xf,4,5,0x40307b);
          *puVar13 = puVar7;
          if (*pcVar12 != -1) {
            thunk_FUN_004e5140((int)piVar14);
            sub_004EB010(local_10,(int)piVar14);
            cVar15 = (char)piVar14;
            thunk_FUN_004d73b0(cVar15);
            thunk_FUN_004b6fc0(cVar15);
            thunk_FUN_004e51b0(piVar14,(uint *)(DAT_00808a90 >> 0x10 & 0xff),
                               (uint *)(DAT_00808a90 >> 0x18));
            thunk_FUN_004d86a0((uint)piVar14,DAT_00808a90 >> 8 & 0xff);
            thunk_FUN_004d78e0(cVar15);
          }
          /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
          puVar13 = (undefined4 *)((int)puVar13 + 0xa62);
          piVar14 = (int *)((int)piVar14 + 1);
          pcVar12 = pcVar12 + 0x51;
        } while ((int)puVar13 < 0x7fa135);
        thunk_FUN_004d8110(0);
        thunk_FUN_004d8760(DAT_00808a90 & 0xff);
        DAT_007fa168 = Library::DKW::LIB::MemAlloc((int)g_worldGrid.planeStride);
        uVar10 = (uint)g_worldGrid.planeStride;
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
      puVar13 = &g_packedRecords_A62x8[0].field5_0x5;
      do {
        puVar7 = Library::DKW::TBL::FUN_006ae310((uint *)0x0,0xf,4,5,0x40307b);
        puVar13[1] = puVar7;
        puVar7 = Library::DKW::TBL::FUN_006ae310((uint *)0x0,0xf,4,5,0x40307b);
        *puVar13 = puVar7;
        thunk_FUN_004b6fc0(cVar15);
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        puVar13 = (undefined4 *)((int)puVar13 + 0xa62);
        cVar15 = cVar15 + '\x01';
      } while ((int)puVar13 < 0x7fa135);
      thunk_FUN_00444e70(this_00,local_c);
      cMf32::RecMemFree(g_cMf32_00806754,(uint *)&local_c);
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
  }
  else if (SVar2 == MESS_SHARED_010F) {
    local_c = (ushort *)SaveAllPlData(this_00,(int *)&local_1c);
    STPlaySystemC::SaveObjData
              (g_playSystem_00802A38,"allplsave",(byte *)local_c,local_1c,0xc);
    FreeAndNull(&local_c);
  }
  else if (SVar2 == MESS_ID_ALLCREATE) {
    if (g_cMf32_00806754 == (cMf32 *)0x0) {
      iVar5 = 0;
      do {
        _MakeMDPairs(this_00,(char)iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 8);
    }
    else {
      local_c = Library::Ourlib::MFAOBJ::mfAObjLoad(g_cMf32_00806754,"allplsave",0,0);
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
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    thunk_FUN_004d8b70(*(char *)(this_00->field_0010 + 0x112d));
    uVar11 = 0;
    do {
      thunk_FUN_004b7750(uVar11);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < 8);
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_6c.previous;
  return 0;
}

