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
  DArrayOf_STGameObjCPtr *array;
  dword dVar3;
  DArrayOf_STGameObjCPtr **ppDVar5;
  STAllPlayersC *this_00;
  int iVar5;
  byte *pbVar6;
  DArrayOf_STGameObjCPtr *pDVar7_mg1;
  DArrayTy *pDVar7;
  DArrayOf_STGameObjCPtr *pDVar7_mg2;
  int iVar11;
  PackedRecord_A62x8 *pPVar8;
  uint uVar9;
  uint uVar10;
  DArrayTy **ppDVar11;
  int iVar12;
  uint *puVar13;
  int *piVar14;
  char cVar15;
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
        uVar10 = 0;
        pDVar7 = (DArrayTy *)local_14[-1];
        array = *local_14;
        local_24 = pDVar7->count;
        local_28 = array;
        if (0 < (int)local_24) {
          do {

            DArrayGetElement(pDVar7,uVar10,&local_18);
            if (local_18 != 0) {
              /* ST_CALLSITE[00430E35]: CALL 0x0040432c; direct=0040432C STPlaySystemC::sub_0054CF70 */
              STPlaySystemC::sub_0054CF70(g_playSystem_00802A38,STField<uint>(local_18,0x8));
              local_18 = 0;

              Library::DKW::TBL::DArrayPut(pDVar7,uVar10,&local_18);
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)local_24);
        }
        dVar3 = array->count;
        uVar10 = 0;
        if (0 < (int)dVar3) {
          do {

            DArrayGetElement((DArrayTy *)array,uVar10,&local_8);
            if (local_8 != 0) {
              /* ST_CALLSITE[00430E7B]: CALL 0x0040432c; direct=0040432C STPlaySystemC::sub_0054CF70 */
              STPlaySystemC::sub_0054CF70(g_playSystem_00802A38,STField<uint>(local_8,0x8));
              local_8 = 0;

              Library::DKW::TBL::DArrayPut((DArrayTy *)array,uVar10,&local_8);
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)dVar3);
        }
        iVar12 = local_20;
        cVar15 = (char)local_20;

        thunk_FUN_004d7430(cVar15);

        thunk_FUN_004b7030(cVar15);
        local_20 = iVar12 + 1;
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        local_14 = (DArrayOf_STGameObjCPtr **)((int)local_14 + 0xa62);
      } while ((int)local_14 < 0x7fa139);
      uVar10 = 0;
      dVar3 = g_array_007FA154->count;
      if (0 < (int)dVar3) {
        do {

          DArrayGetElement((DArrayTy *)g_array_007FA154,uVar10,&local_8);
          if (local_8 != 0) {
            /* ST_CALLSITE[00430EF8]: CALL 0x0040432c; direct=0040432C STPlaySystemC::sub_0054CF70 */
            STPlaySystemC::sub_0054CF70(g_playSystem_00802A38,STField<uint>(local_8,0x8));
            local_8 = 0;

            Library::DKW::TBL::DArrayPut((DArrayTy *)array,uVar10,&local_8);
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)dVar3);
      }
      uVar10 = 0;
      dVar3 = g_array_007FA158->count;
      if (0 < (int)dVar3) {
        do {

          DArrayGetElement((DArrayTy *)g_array_007FA158,uVar10,&local_8);
          if (local_8 != 0) {
            /* ST_CALLSITE[00430F44]: CALL 0x0040432c; direct=0040432C STPlaySystemC::sub_0054CF70 */
            STPlaySystemC::sub_0054CF70(g_playSystem_00802A38,STField<uint>(local_8,0x8));
            local_8 = 0;

            Library::DKW::TBL::DArrayPut((DArrayTy *)array,uVar10,&local_8);
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)dVar3);
      }
      uVar10 = 0;
      dVar3 = g_array_007FA15C->count;
      if (0 < (int)dVar3) {
        do {

          DArrayGetElement((DArrayTy *)g_array_007FA15C,uVar10,&local_8);
          if (local_8 != 0) {
            /* ST_CALLSITE[00430F91]: CALL 0x0040432c; direct=0040432C STPlaySystemC::sub_0054CF70 */
            STPlaySystemC::sub_0054CF70(g_playSystem_00802A38,STField<uint>(local_8,0x8));
            local_8 = 0;

            Library::DKW::TBL::DArrayPut((DArrayTy *)array,uVar10,&local_8);
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)dVar3);
      }
      uVar10 = 0;
      dVar3 = g_array_007FA160->count;
      if (0 < (int)dVar3) {
        do {

          DArrayGetElement((DArrayTy *)g_array_007FA160,uVar10,&local_8);
          if (local_8 != 0) {
            /* ST_CALLSITE[00430FDE]: CALL 0x0040432c; direct=0040432C STPlaySystemC::sub_0054CF70 */
            STPlaySystemC::sub_0054CF70(g_playSystem_00802A38,STField<uint>(local_8,0x8));
            local_8 = 0;

            Library::DKW::TBL::DArrayPut((DArrayTy *)array,uVar10,&local_8);
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)dVar3);
      }
      uVar10 = 0;
      dVar3 = g_array_007FA164->count;
      if (0 < (int)dVar3) {
        do {

          DArrayGetElement((DArrayTy *)g_array_007FA164,uVar10,&local_8);
          if (local_8 != 0) {
            /* ST_CALLSITE[0043102A]: CALL 0x0040432c; direct=0040432C STPlaySystemC::sub_0054CF70 */
            STPlaySystemC::sub_0054CF70(g_playSystem_00802A38,STField<uint>(local_8,0x8));
            local_8 = 0;

            Library::DKW::TBL::DArrayPut((DArrayTy *)array,uVar10,&local_8);
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)dVar3);
      }
      local_14 = (DArrayOf_STGameObjCPtr **)&g_packedRecords_A62x8[0].field2_0x5;
      do {
        ppDVar5 = local_14;
        DArrayDestroy((DArrayTy *)local_14[1]);
        DArrayDestroy((DArrayTy *)*ppDVar5);
        DArrayDestroy(STField<DArrayTy *>(ppDVar5,0x2e2));
        puVar13 = (undefined4 *)((int)ppDVar5 + 10);
        iVar12 = 4;
        do {
          DArrayDestroy((DArrayTy *)*puVar13);
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        iVar12 = 5;
        puVar13 = local_14 + 0x5a;
        do {
          if ((DArrayTy *)*puVar13 != nullptr) {
            DArrayDestroy((DArrayTy *)*puVar13);
            *puVar13 = 0;
            *(undefined4 *)((int)puVar13 + -10) = 0;
          }
          if ((DArrayTy *)puVar13[0x14] != nullptr) {
            DArrayDestroy((DArrayTy *)puVar13[0x14]);
            puVar13[0x14] = 0;
            STField<undefined4>(puVar13,0x46) = 0;
          }
          puVar13 = puVar13 + 4;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        iVar12 = 10;
        puVar13 = local_14 + 0x83;
        do {
          if ((DArrayTy *)*puVar13 != nullptr) {
            DArrayDestroy((DArrayTy *)*puVar13);
            *puVar13 = 0;
            *(undefined4 *)((int)puVar13 + -10) = 0;
          }
          puVar13 = puVar13 + 4;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
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
      iVar12 = 0;
      local_14 = (DArrayOf_STGameObjCPtr **)&g_bulkInitializedRecords_008087C7[0].field_0022;
      piVar14 = &g_packedRecords_A62x8[0].field1981_0xa0a;
      do {
        cVar15 = (char)iVar12;
        if (0x18 < g_playSystem_00802A38->field_00E4 - *piVar14) {
          /* ST_CALLSITE[00430D78]: CALL 0x004017fd; direct=004017FD STAllPlayersC::OptimizeGuardBoats */
          OptimizeGuardBoats(this_00,cVar15);
          /* ST_CALLSITE[00430D80]: CALL 0x0040100a; direct=0040100A STAllPlayersC::DistributeGuardBoats */
          DistributeGuardBoats(this_00,cVar15);
        }
        if ((*(byte *)local_14 != 0xff) &&

           (thunk_FUN_004eb150(this_00,iVar12), g_playSystem_00802A38->field_00E4 % 10 == 0)) {

          thunk_FUN_004d78e0(cVar15);
        }
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        piVar14 = (int *)((int)piVar14 + 0xa62);
        iVar12 = iVar12 + 1;
        local_14 = (DArrayOf_STGameObjCPtr **)((int)local_14 + 0x51);
      } while ((int)piVar14 < 0x7fab3a);

      thunk_FUN_004da9c0(this_00);

      thunk_FUN_004d8360();
      g_currentExceptionFrame = local_6c.previous;
      return 0;
    }
    if (SVar2 == MESS_ID_CREATE) {
      pPVar8 = g_packedRecords_A62x8;
      pbVar6 = &g_bulkInitializedRecords_008087C7[0].field_0021;
      do {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 0x51;
        pPVar8->field0_0x0 = bVar1;
        pPVar8 = pPVar8 + 1;
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
        piVar14 = nullptr;
        pbVar6 = &g_bulkInitializedRecords_008087C7[0].field_0022;
        ppDVar11 = &g_packedRecords_A62x8[0].field2_0x5;
        do {
          /* ST_CALLSITE[00430C5F]: CALL 0x006ae310; direct=006AE310 Library::DKW::TBL::DArrayCreateTracked; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/DArrayOf_STGameObjCPtr; signature=__stdcall;pointer:/SubmarineTitans/Recovered/DArraySpecializations/DArrayOf_STGameObjCPtr;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;/uint;/uint;/uint */
          pDVar7_mg2 = Library::DKW::TBL::DArrayCreateTracked(nullptr,0xf,4,5,0x40307b);
          ppDVar11[1] = (DArrayTy *)pDVar7_mg2;
          pDVar7 = Library::DKW::TBL::DArrayCreateTracked(nullptr,0xf,4,5,0x40307b);
          *ppDVar11 = pDVar7;
          if (*pbVar6 != 0xff) {
            thunk_FUN_004e5140((int)piVar14);
            /* ST_CALLSITE[00430C8E]: CALL 0x00401fc8; direct=00401FC8 STAllPlayersC::sub_004EB010 */
            sub_004EB010(local_10,(int)piVar14);
            cVar15 = (char)piVar14;

            thunk_FUN_004d73b0(cVar15);

            thunk_FUN_004b6fc0(cVar15);

            thunk_FUN_004e51b0(piVar14,(uint *)(DAT_00808a90 >> 0x10 & 0xff),
                               (uint *)(DAT_00808a90 >> 0x18));

            thunk_FUN_004d86a0(local_10,(uint)piVar14,DAT_00808a90 >> 8 & 0xff);

            thunk_FUN_004d78e0(cVar15);
          }
          /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
          ppDVar11 = (DArrayTy **)((int)ppDVar11 + 0xa62);
          piVar14 = (int *)((int)piVar14 + 1);
          pbVar6 = pbVar6 + 0x51;
        } while ((int)ppDVar11 < 0x7fa135);

        thunk_FUN_004d8110(0);

        thunk_FUN_004d8760(DAT_00808a90 & 0xff);

        DAT_007fa168 = Library::DKW::LIB::MemAlloc((int)g_worldGrid.planeStride);
        uVar9 = (uint)g_worldGrid.planeStride;
        puVar13 = DAT_007fa168;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar13 = 0x50505050;
          puVar13 = puVar13 + 1;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)puVar13 = 0x50;
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
        g_currentExceptionFrame = local_6c.previous;
        return 0;
      }
      cVar15 = '\0';
      ppDVar11 = &g_packedRecords_A62x8[0].field2_0x5;
      do {
        /* ST_CALLSITE[00430BE5]: CALL 0x006ae310; direct=006AE310 Library::DKW::TBL::DArrayCreateTracked; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/DArrayOf_STGameObjCPtr; signature=__stdcall;pointer:/SubmarineTitans/Recovered/DArraySpecializations/DArrayOf_STGameObjCPtr;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;/uint;/uint;/uint */
        pDVar7_mg1 = Library::DKW::TBL::DArrayCreateTracked(nullptr,0xf,4,5,0x40307b);
        ppDVar11[1] = (DArrayTy *)pDVar7_mg1;
        pDVar7 = Library::DKW::TBL::DArrayCreateTracked(nullptr,0xf,4,5,0x40307b);
        *ppDVar11 = pDVar7;

        thunk_FUN_004b6fc0(cVar15);
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        ppDVar11 = (DArrayTy **)((int)ppDVar11 + 0xa62);
        cVar15 = cVar15 + '\x01';
      } while ((int)ppDVar11 < 0x7fa135);
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
      iVar12 = 0;
      do {
        /* ST_CALLSITE[00431201]: CALL 0x00405cc2; direct=00405CC2 STAllPlayersC::_MakeMDPairs; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STAllPlayersC; signature=__thiscall;pointer:/STAllPlayersC;pointer:/STAllPlayersC;/char */
        _MakeMDPairs(this_00,(char)iVar12);
        iVar12 = iVar12 + 1;
      } while (iVar12 < 8);
    }
    else {
      local_c = Library::Ourlib::MFAOBJ::mfAObjLoad(g_cMf32_00806754,"allplsave",0,0);
      if (local_c == nullptr) {
        iVar12 = 0;
        do {
          /* ST_CALLSITE[004311EF]: CALL 0x00405cc2; direct=00405CC2 STAllPlayersC::_MakeMDPairs */
          _MakeMDPairs(this_00,(char)iVar12);
          iVar12 = iVar12 + 1;
        } while (iVar12 < 8);
      }
      else {
        cMf32::RecMemFree(g_cMf32_00806754,(uint *)&local_c);
      }
    }
    /* ST_CALLSITE[00431218]: CALL 0x00404b8d; direct=00404B8D STAllPlayersC::sub_004D8B70 */
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    sub_004D8B70(this_00,*(char *)(this_00->field_0010 + 0x112d));
    uVar10 = 0;
    do {
      /* ST_CALLSITE[00431222]: CALL 0x00401893; direct=00401893 STAllPlayersC::sub_004B7750 */
      sub_004B7750(this_00,uVar10);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < 8);
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_6c.previous;
  return 0;
}

