#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00405CA4|00430A90; family_names=STAllPlayersC::GetMessage; ret4=7;
   direct_offsets={10:2,14:0,18:0,1c:0} */

int __thiscall STAllPlayersC::GetMessage(STAllPlayersC *this,STMessage *message)

{
  byte bVar1;
  STMessageId SVar2;
  DArrayTy *array;
  DArrayTy *array_00;
  dword dVar3;
  STAllPlayersC *this_00;
  int iVar5;
  byte *pbVar5;
  uint *puVar6;
  int iVar11;
  PackedRecord_A62x8 *pPVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar12;
  int *piVar13;
  char cVar14;
  InternalExceptionFrame local_6c;
  DArrayTy *local_28;
  dword local_24;
  int local_20;
  uint local_1c;
  int local_18;
  byte *local_14;
  STAllPlayersC *local_10;
  ushort *local_c;
  int local_8;

  local_c = nullptr;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  this_00 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0xa05,0,iVar5,"%s"
                                ,"STAllPlayersC::GetMessage");
    if (iVar11 == 0) {
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
      local_14 = (byte *)&g_packedRecords_A62x8[0].field3_0x9;
      do {
        uVar9 = 0;
        array = *(DArrayTy **)((int)local_14 + -4);
        array_00 = *(DArrayTy **)local_14;
        local_24 = array->count;
        local_28 = array_00;
        if (0 < (int)local_24) {
          do {
            DArrayGetElement(array,uVar9,&local_18);
            if (local_18 != 0) {
              thunk_FUN_0054cf70(g_playSystem_00802A38,*(uint *)(local_18 + 8));
              local_18 = 0;
              Library::DKW::TBL::DArrayPut(array,uVar9,&local_18);
            }
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)local_24);
        }
        dVar3 = array_00->count;
        uVar9 = 0;
        if (0 < (int)dVar3) {
          do {
            DArrayGetElement(array_00,uVar9,&local_8);
            if (local_8 != 0) {
              thunk_FUN_0054cf70(g_playSystem_00802A38,*(uint *)(local_8 + 8));
              local_8 = 0;
              Library::DKW::TBL::DArrayPut(array_00,uVar9,&local_8);
            }
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)dVar3);
        }
        iVar12 = local_20;
        cVar14 = (char)local_20;
        thunk_FUN_004d7430(cVar14);
        thunk_FUN_004b7030(cVar14);
        local_20 = iVar12 + 1;
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        local_14 = (byte *)((int)local_14 + 0xa62);
      } while ((int)local_14 < 0x7fa139);
      uVar9 = 0;
      dVar3 = g_array_007FA154->count;
      if (0 < (int)dVar3) {
        do {
          DArrayGetElement(g_array_007FA154,uVar9,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(g_playSystem_00802A38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::DArrayPut(array_00,uVar9,&local_8);
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)dVar3);
      }
      uVar9 = 0;
      dVar3 = g_array_007FA158->count;
      if (0 < (int)dVar3) {
        do {
          DArrayGetElement(g_array_007FA158,uVar9,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(g_playSystem_00802A38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::DArrayPut(array_00,uVar9,&local_8);
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)dVar3);
      }
      uVar9 = 0;
      dVar3 = g_array_007FA15C->count;
      if (0 < (int)dVar3) {
        do {
          DArrayGetElement(g_array_007FA15C,uVar9,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(g_playSystem_00802A38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::DArrayPut(array_00,uVar9,&local_8);
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)dVar3);
      }
      uVar9 = 0;
      dVar3 = g_array_007FA160->count;
      if (0 < (int)dVar3) {
        do {
          DArrayGetElement(g_array_007FA160,uVar9,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(g_playSystem_00802A38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::DArrayPut(array_00,uVar9,&local_8);
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)dVar3);
      }
      uVar9 = 0;
      dVar3 = g_array_007FA164->count;
      if (0 < (int)dVar3) {
        do {
          DArrayGetElement(g_array_007FA164,uVar9,&local_8);
          if (local_8 != 0) {
            thunk_FUN_0054cf70(g_playSystem_00802A38,*(uint *)(local_8 + 8));
            local_8 = 0;
            Library::DKW::TBL::DArrayPut(array_00,uVar9,&local_8);
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)dVar3);
      }
      local_14 = (byte *)&g_packedRecords_A62x8[0].field2_0x5;
      do {
        pbVar5 = local_14;
        DArrayDestroy(STField<DArrayTy *>(local_14,4));
        DArrayDestroy(*(DArrayTy **)pbVar5);
        DArrayDestroy(STField<DArrayTy *>(pbVar5,0x2e2));
        puVar10 = (undefined4 *)((int)pbVar5 + 10);
        iVar12 = 4;
        do {
          DArrayDestroy((DArrayTy *)*puVar10);
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        iVar12 = 5;
        puVar10 = (undefined4 *)((int)local_14 + 0x168);
        do {
          if ((DArrayTy *)*puVar10 != nullptr) {
            DArrayDestroy((DArrayTy *)*puVar10);
            *puVar10 = 0;
            *(undefined4 *)((int)puVar10 + -10) = 0;
          }
          if ((DArrayTy *)puVar10[0x14] != nullptr) {
            DArrayDestroy((DArrayTy *)puVar10[0x14]);
            puVar10[0x14] = 0;
            STField<undefined4>(puVar10,0x46) = 0;
          }
          puVar10 = puVar10 + 4;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        iVar12 = 10;
        puVar10 = (undefined4 *)((int)local_14 + 0x20c);
        do {
          if ((DArrayTy *)*puVar10 != nullptr) {
            DArrayDestroy((DArrayTy *)*puVar10);
            *puVar10 = 0;
            *(undefined4 *)((int)puVar10 + -10) = 0;
          }
          puVar10 = puVar10 + 4;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        local_14 = (byte *)((int)local_14 + 0xa62);
      } while ((int)local_14 < 0x7fa135);
      DArrayDestroy(g_array_007FA130);
      g_array_007FA130 = nullptr;
      DArrayDestroy(g_array_007FA154);
      g_array_007FA154 = nullptr;
      DArrayDestroy(g_array_007FA158);
      g_array_007FA158 = nullptr;
      DArrayDestroy(g_array_007FA15C);
      g_array_007FA15C = nullptr;
      DArrayDestroy(g_array_007FA160);
      g_array_007FA160 = nullptr;
      DArrayDestroy(g_array_007FA164);
      g_array_007FA164 = nullptr;
      if (g_array_007FA150 != nullptr) {
        DArrayDestroy(g_array_007FA150);
        g_array_007FA150 = nullptr;
      }
      if (DAT_007fa168 != nullptr) {
        FreeAndNull(&DAT_007fa168);
      }
      g_allPlayers_007FA174 = nullptr;
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    if (SVar2 == MESS_ID_NONE) {
      iVar12 = 0;
      local_14 = &g_bulkInitializedRecords_008087C7[0].field_0022;
      piVar13 = &g_packedRecords_A62x8[0].field1981_0xa0a;
      do {
        cVar14 = (char)iVar12;
        if (0x18 < g_playSystem_00802A38->field_00E4 - *piVar13) {
          OptimizeGuardBoats(this_00,cVar14);
          DistributeGuardBoats(this_00,cVar14);
        }
        if ((*local_14 != 0xff) &&
           (thunk_FUN_004eb150(this_00,iVar12), g_playSystem_00802A38->field_00E4 % 10 == 0)) {
          thunk_FUN_004d78e0(cVar14);
        }
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        piVar13 = (int *)((int)piVar13 + 0xa62);
        iVar12 = iVar12 + 1;
        local_14 = local_14 + 0x51;
      } while ((int)piVar13 < 0x7fab3a);
      thunk_FUN_004da9c0(this_00);
      thunk_FUN_004d8360();
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    if (SVar2 == MESS_ID_CREATE) {
      pPVar7 = g_packedRecords_A62x8;
      pbVar5 = &g_bulkInitializedRecords_008087C7[0].field_0021;
      do {
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 0x51;
        pPVar7->field0_0x0 = bVar1;
        pPVar7 = pPVar7 + 1;
      } while ((int)pbVar5 < 0x808a70);
      g_array_007FA154 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310(nullptr,0,4,1,0x40307b);
      g_array_007FA158 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310(nullptr,0,4,1,0x40307b);
      g_array_007FA15C = (DArrayTy *)Library::DKW::TBL::FUN_006ae310(nullptr,0,4,1,0x40307b);
      g_array_007FA160 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310(nullptr,0,4,1,0x40307b);
      g_array_007FA164 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310(nullptr,0,4,1,0x40307b);
      g_array_007FA130 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310(nullptr,0,4,1,0x40307b);
      DAT_007fa134 = 0;
      if (g_cMf32_00806754 != nullptr) {
        local_c = Library::Ourlib::MFAOBJ::mfAObjLoad(g_cMf32_00806754,"allplsave",0,0);
      }
      if (local_c == nullptr) {
        piVar13 = nullptr;
        pbVar5 = &g_bulkInitializedRecords_008087C7[0].field_0022;
        puVar10 = &g_packedRecords_A62x8[0].field2_0x5;
        do {
          puVar6 = Library::DKW::TBL::FUN_006ae310(nullptr,0xf,4,5,0x40307b);
          puVar10[1] = puVar6;
          puVar6 = Library::DKW::TBL::FUN_006ae310(nullptr,0xf,4,5,0x40307b);
          *puVar10 = puVar6;
          if (*pbVar5 != 0xff) {
            thunk_FUN_004e5140((int)piVar13);
            sub_004EB010(local_10,(int)piVar13);
            cVar14 = (char)piVar13;
            thunk_FUN_004d73b0(cVar14);
            thunk_FUN_004b6fc0(cVar14);
            thunk_FUN_004e51b0(piVar13,(uint *)(DAT_00808a90 >> 0x10 & 0xff),
                               (uint *)(DAT_00808a90 >> 0x18));
            thunk_FUN_004d86a0((uint)piVar13,DAT_00808a90 >> 8 & 0xff);
            thunk_FUN_004d78e0(cVar14);
          }
          /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
          puVar10 = (undefined4 *)((int)puVar10 + 0xa62);
          piVar13 = (int *)((int)piVar13 + 1);
          pbVar5 = pbVar5 + 0x51;
        } while ((int)puVar10 < 0x7fa135);
        thunk_FUN_004d8110(0);
        thunk_FUN_004d8760(DAT_00808a90 & 0xff);
        DAT_007fa168 = Library::DKW::LIB::MemAlloc((int)g_worldGrid.planeStride);
        uVar8 = (uint)g_worldGrid.planeStride;
        puVar10 = DAT_007fa168;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar10 = 0x50505050;
          puVar10 = puVar10 + 1;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar10 = 0x50;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      cVar14 = '\0';
      puVar10 = &g_packedRecords_A62x8[0].field2_0x5;
      do {
        puVar6 = Library::DKW::TBL::FUN_006ae310(nullptr,0xf,4,5,0x40307b);
        puVar10[1] = puVar6;
        puVar6 = Library::DKW::TBL::FUN_006ae310(nullptr,0xf,4,5,0x40307b);
        *puVar10 = puVar6;
        thunk_FUN_004b6fc0(cVar14);
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        puVar10 = (undefined4 *)((int)puVar10 + 0xa62);
        cVar14 = cVar14 + '\x01';
      } while ((int)puVar10 < 0x7fa135);
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
    if (g_cMf32_00806754 == nullptr) {
      iVar12 = 0;
      do {
        _MakeMDPairs(this_00,(char)iVar12);
        iVar12 = iVar12 + 1;
      } while (iVar12 < 8);
    }
    else {
      local_c = Library::Ourlib::MFAOBJ::mfAObjLoad(g_cMf32_00806754,"allplsave",0,0);
      if (local_c == nullptr) {
        iVar12 = 0;
        do {
          _MakeMDPairs(this_00,(char)iVar12);
          iVar12 = iVar12 + 1;
        } while (iVar12 < 8);
      }
      else {
        cMf32::RecMemFree(g_cMf32_00806754,(uint *)&local_c);
      }
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    thunk_FUN_004d8b70(*(char *)(this_00->field_0010 + 0x112d));
    uVar9 = 0;
    do {
      thunk_FUN_004b7750(uVar9);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < 8);
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_6c.previous;
  return 0;
}

