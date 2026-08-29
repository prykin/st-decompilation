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
  dword dVar3;
  DArrayOf_STGameObjCPtr **ppDVar5;
  STAllPlayersC *this_00;
  int iVar5;
  byte *pbVar6;
  DArrayOf_STGameObjCPtr *pDVar7;
  DArrayTy *pDVar8;
  int iVar11;
  PackedRecord_A62x8 *pPVar9;
  uint uVar10;
  uint uVar11;
  DArrayTy **ppDVar12;
  int iVar13;
  uint *puVar14;
  int *piVar15;
  char cVar16;
  InternalExceptionFrame local_6c;
  DArrayOf_STGameObjCPtr *local_28;
  dword local_24;
  int local_20;
  uint local_1c;
  int local_18;
  DArrayOf_STGameObjCPtr **local_14;
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
      thunk_FUN_00446a70(this_00);
      local_20 = 0;
      local_14 = &g_packedRecords_A62x8[0].field3_0x9;
      do {
        uVar11 = 0;
        pDVar8 = (DArrayTy *)local_14[-1];
        pDVar7 = *local_14;
        local_24 = pDVar8->count;
        local_28 = pDVar7;
        if (0 < (int)local_24) {
          do {

            DArrayGetElement(pDVar8,uVar11,&local_18);
            if (local_18 != 0) {
              /* ST_CALLSITE[00430E35]: CALL 0x0040432c; direct=0040432C STPlaySystemC::sub_0054CF70 */
              STPlaySystemC::sub_0054CF70(g_playSystem_00802A38,STField<uint>(local_18,0x8));
              local_18 = 0;

              Library::DKW::TBL::DArrayPut(pDVar8,uVar11,&local_18);
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < (int)local_24);
        }
        dVar3 = pDVar7->count;
        uVar11 = 0;
        if (0 < (int)dVar3) {
          do {

            DArrayGetElement((DArrayTy *)pDVar7,uVar11,&local_8);
            if (local_8 != 0) {
              /* ST_CALLSITE[00430E7B]: CALL 0x0040432c; direct=0040432C STPlaySystemC::sub_0054CF70 */
              STPlaySystemC::sub_0054CF70(g_playSystem_00802A38,STField<uint>(local_8,0x8));
              local_8 = 0;

              Library::DKW::TBL::DArrayPut((DArrayTy *)pDVar7,uVar11,&local_8);
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < (int)dVar3);
        }
        iVar13 = local_20;
        cVar16 = (char)local_20;

        thunk_FUN_004d7430(cVar16);

        thunk_FUN_004b7030(cVar16);
        local_20 = iVar13 + 1;
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        local_14 = (DArrayOf_STGameObjCPtr **)((int)local_14 + 0xa62);
      } while ((int)local_14 < 0x7fa139);
      uVar11 = 0;
      dVar3 = g_array_007FA154->count;
      if (0 < (int)dVar3) {
        do {

          DArrayGetElement((DArrayTy *)g_array_007FA154,uVar11,&local_8);
          if (local_8 != 0) {
            /* ST_CALLSITE[00430EF8]: CALL 0x0040432c; direct=0040432C STPlaySystemC::sub_0054CF70 */
            STPlaySystemC::sub_0054CF70(g_playSystem_00802A38,STField<uint>(local_8,0x8));
            local_8 = 0;

            Library::DKW::TBL::DArrayPut((DArrayTy *)pDVar7,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)dVar3);
      }
      uVar11 = 0;
      dVar3 = g_array_007FA158->count;
      if (0 < (int)dVar3) {
        do {

          DArrayGetElement((DArrayTy *)g_array_007FA158,uVar11,&local_8);
          if (local_8 != 0) {
            /* ST_CALLSITE[00430F44]: CALL 0x0040432c; direct=0040432C STPlaySystemC::sub_0054CF70 */
            STPlaySystemC::sub_0054CF70(g_playSystem_00802A38,STField<uint>(local_8,0x8));
            local_8 = 0;

            Library::DKW::TBL::DArrayPut((DArrayTy *)pDVar7,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)dVar3);
      }
      uVar11 = 0;
      dVar3 = g_array_007FA15C->count;
      if (0 < (int)dVar3) {
        do {

          DArrayGetElement((DArrayTy *)g_array_007FA15C,uVar11,&local_8);
          if (local_8 != 0) {
            /* ST_CALLSITE[00430F91]: CALL 0x0040432c; direct=0040432C STPlaySystemC::sub_0054CF70 */
            STPlaySystemC::sub_0054CF70(g_playSystem_00802A38,STField<uint>(local_8,0x8));
            local_8 = 0;

            Library::DKW::TBL::DArrayPut((DArrayTy *)pDVar7,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)dVar3);
      }
      uVar11 = 0;
      dVar3 = g_array_007FA160->count;
      if (0 < (int)dVar3) {
        do {

          DArrayGetElement((DArrayTy *)g_array_007FA160,uVar11,&local_8);
          if (local_8 != 0) {
            /* ST_CALLSITE[00430FDE]: CALL 0x0040432c; direct=0040432C STPlaySystemC::sub_0054CF70 */
            STPlaySystemC::sub_0054CF70(g_playSystem_00802A38,STField<uint>(local_8,0x8));
            local_8 = 0;

            Library::DKW::TBL::DArrayPut((DArrayTy *)pDVar7,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)dVar3);
      }
      uVar11 = 0;
      dVar3 = g_array_007FA164->count;
      if (0 < (int)dVar3) {
        do {

          DArrayGetElement((DArrayTy *)g_array_007FA164,uVar11,&local_8);
          if (local_8 != 0) {
            /* ST_CALLSITE[0043102A]: CALL 0x0040432c; direct=0040432C STPlaySystemC::sub_0054CF70 */
            STPlaySystemC::sub_0054CF70(g_playSystem_00802A38,STField<uint>(local_8,0x8));
            local_8 = 0;

            Library::DKW::TBL::DArrayPut((DArrayTy *)pDVar7,uVar11,&local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)dVar3);
      }
      local_14 = (DArrayOf_STGameObjCPtr **)&g_packedRecords_A62x8[0].field2_0x5;
      do {
        ppDVar5 = local_14;
        DArrayDestroy((DArrayTy *)local_14[1]);
        DArrayDestroy((DArrayTy *)*ppDVar5);
        DArrayDestroy(STField<DArrayTy *>(ppDVar5,0x2e2));
        puVar14 = (undefined4 *)((int)ppDVar5 + 10);
        iVar13 = 4;
        do {
          DArrayDestroy((DArrayTy *)*puVar14);
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        iVar13 = 5;
        puVar14 = local_14 + 0x5a;
        do {
          if ((DArrayTy *)*puVar14 != nullptr) {
            DArrayDestroy((DArrayTy *)*puVar14);
            *puVar14 = 0;
            *(undefined4 *)((int)puVar14 + -10) = 0;
          }
          if ((DArrayTy *)puVar14[0x14] != nullptr) {
            DArrayDestroy((DArrayTy *)puVar14[0x14]);
            puVar14[0x14] = 0;
            STField<undefined4>(puVar14,0x46) = 0;
          }
          puVar14 = puVar14 + 4;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        iVar13 = 10;
        puVar14 = local_14 + 0x83;
        do {
          if ((DArrayTy *)*puVar14 != nullptr) {
            DArrayDestroy((DArrayTy *)*puVar14);
            *puVar14 = 0;
            *(undefined4 *)((int)puVar14 + -10) = 0;
          }
          puVar14 = puVar14 + 4;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        local_14 = (DArrayOf_STGameObjCPtr **)((int)local_14 + 0xa62);
      } while ((int)local_14 < 0x7fa135);
      DArrayDestroy((DArrayTy *)g_array_007FA130);
      g_array_007FA130 = nullptr;
      DArrayDestroy((DArrayTy *)g_array_007FA154);
      g_array_007FA154 = nullptr;
      DArrayDestroy((DArrayTy *)g_array_007FA158);
      g_array_007FA158 = nullptr;
      DArrayDestroy((DArrayTy *)g_array_007FA15C);
      g_array_007FA15C = nullptr;
      DArrayDestroy((DArrayTy *)g_array_007FA160);
      g_array_007FA160 = nullptr;
      DArrayDestroy((DArrayTy *)g_array_007FA164);
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
      iVar13 = 0;
      local_14 = (DArrayOf_STGameObjCPtr **)&g_bulkInitializedRecords_008087C7[0].field_0022;
      piVar15 = &g_packedRecords_A62x8[0].field1981_0xa0a;
      do {
        cVar16 = (char)iVar13;
        if (0x18 < g_playSystem_00802A38->field_00E4 - *piVar15) {
          /* ST_CALLSITE[00430D78]: CALL 0x004017fd; direct=004017FD STAllPlayersC::OptimizeGuardBoats */
          OptimizeGuardBoats(this_00,cVar16);
          /* ST_CALLSITE[00430D80]: CALL 0x0040100a; direct=0040100A STAllPlayersC::DistributeGuardBoats */
          DistributeGuardBoats(this_00,cVar16);
        }
        if ((*(byte *)local_14 != 0xff) &&

           (thunk_FUN_004eb150(this_00,iVar13), g_playSystem_00802A38->field_00E4 % 10 == 0)) {

          thunk_FUN_004d78e0(cVar16);
        }
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        piVar15 = (int *)((int)piVar15 + 0xa62);
        iVar13 = iVar13 + 1;
        local_14 = (DArrayOf_STGameObjCPtr **)((int)local_14 + 0x51);
      } while ((int)piVar15 < 0x7fab3a);

      thunk_FUN_004da9c0(this_00);

      thunk_FUN_004d8360();
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    if (SVar2 == MESS_ID_CREATE) {
      pPVar9 = g_packedRecords_A62x8;
      pbVar6 = &g_bulkInitializedRecords_008087C7[0].field_0021;
      do {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 0x51;
        pPVar9->field0_0x0 = bVar1;
        pPVar9 = pPVar9 + 1;
      } while ((int)pbVar6 < 0x808a70);
      /* ST_CALLSITE[00430B25]: CALL 0x006ae310; direct=006AE310 Library::DKW::TBL::DArrayCreateTracked; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/DArrayOf_STGameObjCPtr; signature=__stdcall;pointer:/SubmarineTitans/Recovered/DArraySpecializations/DArrayOf_STGameObjCPtr;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;/uint;/uint;/uint */
      g_array_007FA154 = Library::DKW::TBL::DArrayCreateTracked(nullptr,0,4,1,0x40307b);
      /* ST_CALLSITE[00430B3C]: CALL 0x006ae310; direct=006AE310 Library::DKW::TBL::DArrayCreateTracked; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/DArrayOf_STGameObjCPtr; signature=__stdcall;pointer:/SubmarineTitans/Recovered/DArraySpecializations/DArrayOf_STGameObjCPtr;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;/uint;/uint;/uint */
      g_array_007FA158 = Library::DKW::TBL::DArrayCreateTracked(nullptr,0,4,1,0x40307b);
      /* ST_CALLSITE[00430B53]: CALL 0x006ae310; direct=006AE310 Library::DKW::TBL::DArrayCreateTracked; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/DArrayOf_STGameObjCPtr; signature=__stdcall;pointer:/SubmarineTitans/Recovered/DArraySpecializations/DArrayOf_STGameObjCPtr;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;/uint;/uint;/uint */
      g_array_007FA15C = Library::DKW::TBL::DArrayCreateTracked(nullptr,0,4,1,0x40307b);
      /* ST_CALLSITE[00430B6A]: CALL 0x006ae310; direct=006AE310 Library::DKW::TBL::DArrayCreateTracked; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/DArrayOf_STGameObjCPtr; signature=__stdcall;pointer:/SubmarineTitans/Recovered/DArraySpecializations/DArrayOf_STGameObjCPtr;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;/uint;/uint;/uint */
      g_array_007FA160 = Library::DKW::TBL::DArrayCreateTracked(nullptr,0,4,1,0x40307b);
      /* ST_CALLSITE[00430B81]: CALL 0x006ae310; direct=006AE310 Library::DKW::TBL::DArrayCreateTracked; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/DArrayOf_STGameObjCPtr; signature=__stdcall;pointer:/SubmarineTitans/Recovered/DArraySpecializations/DArrayOf_STGameObjCPtr;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;/uint;/uint;/uint */
      g_array_007FA164 = Library::DKW::TBL::DArrayCreateTracked(nullptr,0,4,1,0x40307b);
      /* ST_CALLSITE[00430B98]: CALL 0x006ae310; direct=006AE310 Library::DKW::TBL::DArrayCreateTracked; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/DArrayOf_STTorpCPtr; signature=__stdcall;pointer:/SubmarineTitans/Recovered/DArraySpecializations/DArrayOf_STTorpCPtr;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;/uint;/uint;/uint */
      g_array_007FA130 = Library::DKW::TBL::DArrayCreateTracked(nullptr,0,4,1,0x40307b);
      DAT_007fa134 = 0;
      if (g_cMf32_00806754 != nullptr) {
        local_c = Library::Ourlib::MFAOBJ::mfAObjLoad(g_cMf32_00806754,"allplsave",0,0);
      }
      if (local_c == nullptr) {
        piVar15 = nullptr;
        pbVar6 = &g_bulkInitializedRecords_008087C7[0].field_0022;
        ppDVar12 = &g_packedRecords_A62x8[0].field2_0x5;
        do {
          /* ST_CALLSITE[00430C5F]: CALL 0x006ae310; direct=006AE310 Library::DKW::TBL::DArrayCreateTracked; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/DArrayOf_STGameObjCPtr; signature=__stdcall;pointer:/SubmarineTitans/Recovered/DArraySpecializations/DArrayOf_STGameObjCPtr;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;/uint;/uint;/uint */
          pDVar7 = Library::DKW::TBL::DArrayCreateTracked(nullptr,0xf,4,5,0x40307b);
          ppDVar12[1] = (DArrayTy *)pDVar7;
          pDVar8 = Library::DKW::TBL::DArrayCreateTracked(nullptr,0xf,4,5,0x40307b);
          *ppDVar12 = pDVar8;
          if (*pbVar6 != 0xff) {
            thunk_FUN_004e5140((int)piVar15);
            /* ST_CALLSITE[00430C8E]: CALL 0x00401fc8; direct=00401FC8 STAllPlayersC::sub_004EB010 */
            sub_004EB010(local_10,(int)piVar15);
            cVar16 = (char)piVar15;

            thunk_FUN_004d73b0(cVar16);

            thunk_FUN_004b6fc0(cVar16);

            thunk_FUN_004e51b0(piVar15,(uint *)(DAT_00808a90 >> 0x10 & 0xff),
                               (uint *)(DAT_00808a90 >> 0x18));

            thunk_FUN_004d86a0(local_10,(uint)piVar15,DAT_00808a90 >> 8 & 0xff);

            thunk_FUN_004d78e0(cVar16);
          }
          /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
          ppDVar12 = (DArrayTy **)((int)ppDVar12 + 0xa62);
          piVar15 = (int *)((int)piVar15 + 1);
          pbVar6 = pbVar6 + 0x51;
        } while ((int)ppDVar12 < 0x7fa135);

        thunk_FUN_004d8110(0);

        thunk_FUN_004d8760(DAT_00808a90 & 0xff);

        DAT_007fa168 = Library::DKW::LIB::MemAlloc((int)g_worldGrid.planeStride);
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
      ppDVar12 = &g_packedRecords_A62x8[0].field2_0x5;
      do {
        /* ST_CALLSITE[00430BE5]: CALL 0x006ae310; direct=006AE310 Library::DKW::TBL::DArrayCreateTracked; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/DArrayOf_STGameObjCPtr; signature=__stdcall;pointer:/SubmarineTitans/Recovered/DArraySpecializations/DArrayOf_STGameObjCPtr;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;/uint;/uint;/uint */
        pDVar7 = Library::DKW::TBL::DArrayCreateTracked(nullptr,0xf,4,5,0x40307b);
        ppDVar12[1] = (DArrayTy *)pDVar7;
        pDVar8 = Library::DKW::TBL::DArrayCreateTracked(nullptr,0xf,4,5,0x40307b);
        *ppDVar12 = pDVar8;

        thunk_FUN_004b6fc0(cVar16);
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        ppDVar12 = (DArrayTy **)((int)ppDVar12 + 0xa62);
        cVar16 = cVar16 + '\x01';
      } while ((int)ppDVar12 < 0x7fa135);
      thunk_FUN_00444e70(this_00,local_c);
      cMf32::RecMemFree(g_cMf32_00806754,(uint *)&local_c);
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
  }
  else if (SVar2 == MESS_SHARED_010F) {
    /* ST_CALLSITE[00431247]: CALL 0x004058ad; direct=004058AD STAllPlayersC::SaveAllPlData; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/char; signature=__thiscall;pointer:/char;pointer:/STAllPlayersC;pointer:/int */
    local_c = (ushort *)SaveAllPlData(this_00,(int *)&local_1c);
    /* ST_CALLSITE[00431261]: CALL 0x00401078; direct=00401078 STPlaySystemC::SaveObjData */
    STPlaySystemC::SaveObjData
              (g_playSystem_00802A38,"allplsave",(byte *)local_c,local_1c,0xc);
    FreeAndNull(&local_c);
  }
  else if (SVar2 == MESS_ID_ALLCREATE) {
    if (g_cMf32_00806754 == nullptr) {
      iVar13 = 0;
      do {
        /* ST_CALLSITE[00431201]: CALL 0x00405cc2; direct=00405CC2 STAllPlayersC::_MakeMDPairs; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STAllPlayersC; signature=__thiscall;pointer:/STAllPlayersC;pointer:/STAllPlayersC;/char */
        _MakeMDPairs(this_00,(char)iVar13);
        iVar13 = iVar13 + 1;
      } while (iVar13 < 8);
    }
    else {
      local_c = Library::Ourlib::MFAOBJ::mfAObjLoad(g_cMf32_00806754,"allplsave",0,0);
      if (local_c == nullptr) {
        iVar13 = 0;
        do {
          /* ST_CALLSITE[004311EF]: CALL 0x00405cc2; direct=00405CC2 STAllPlayersC::_MakeMDPairs */
          _MakeMDPairs(this_00,(char)iVar13);
          iVar13 = iVar13 + 1;
        } while (iVar13 < 8);
      }
      else {
        cMf32::RecMemFree(g_cMf32_00806754,(uint *)&local_c);
      }
    }
    /* ST_CALLSITE[00431218]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    sub_004D8B70(this_00,*(char *)(this_00->field_0010 + 0x112d));
    uVar11 = 0;
    do {
      /* ST_CALLSITE[00431222]: CALL 0x00401893; direct=00401893 STAllPlayersC::sub_004B7750 */
      sub_004B7750(this_00,uVar11);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < 8);
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_6c.previous;
  return 0;
}

