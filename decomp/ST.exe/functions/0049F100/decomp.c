#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Capture */

undefined4 __thiscall STGroupBoatC::Capture(STGroupBoatC *this,int param_1)

{
  STGroupBoatC *pSVar2;
  DArrayTy *array;
  int iVar3;
  STBoatC *pSVar3;
  dword dVar4;
  DArrayTy *array_00;
  STGameObjC *this_00;
  int iVar7;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *puVar9;
  byte *puVar10;
  STBoatC_CmdToObj_param_1Enum SVar11;
  uint *puVar12;
  undefined4 local_9c [5];
  int local_87;
  InternalExceptionFrame local_7c;
  STGroupBoatC *local_38;
  STBoatC *local_34;
  uint local_30;
  undefined1 local_2c;
  undefined2 local_2b;
  undefined4 local_29;
  undefined4 local_24;
  DArrayTy *local_20;
  int local_1c;
  DArrayTy *local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  undefined1 local_8 [4];

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_c = *(uint *)(this->field_0029 + 0xc);
  local_18 = nullptr;
  local_20 = nullptr;
  local_1c = 0;
  local_24 = 2;
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_38 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0);
  pSVar2 = local_38;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xbf4,0,iVar3,"%s",
                               "STGroupBoatC::Capture");
    if (iVar7 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0xbf5);
      return 0xffffffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&local_38->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    local_38->field_0065 = 0;
    local_10 = 0;
    *(undefined4 *)&local_38->field_0x2c3 = *(undefined4 *)&local_38->field_0x192;
    *(undefined2 *)&local_38->field_0x2c7 = local_38->field_0196;
    local_38->field_0x2c9 = local_38->field_0198;
    local_2c = local_38->field_0x192;
    local_2b = *(undefined2 *)&local_38->field_0x193;
    *(undefined4 *)&local_38->field_0x2ca = 0;
    local_30 = g_playSystem_00802A38->field_00E4;
    local_29 = *(undefined4 *)&local_38->field_0x195;
    array_00 = local_20;
    local_14 = local_30;
    if (local_c != 0) {
      uVar7 = 0;
      do {
        DArrayGetElement((DArrayTy *)pSVar2->field_0029,uVar7,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          pSVar3 = (STBoatC *)
                   /* ST_CALLSITE[0049F203]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_8),CASE_1);
          if (pSVar3 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xbb4);
          }
          /* ST_CALLSITE[0049F22D]: CALL dword ptr [EAX + 0x2c] */
          dVar4 = pSVar3->sub_0045EEE0();
          /* ST_CALLSITE[0049F239]: CALL dword ptr [EDX + 0x2c] */
          if (((dVar4 == 6) || (dVar4 = pSVar3->sub_0045EEE0(), dVar4 == 0x12)) ||
             /* ST_CALLSITE[0049F245]: CALL dword ptr [EAX + 0x2c] */
             (dVar4 = pSVar3->sub_0045EEE0(), dVar4 == 0x22)) {
            if (array_00 == nullptr) {
              array_00 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              local_20 = array_00;
            }
            Library::DKW::TBL::DArrayAppend(array_00,local_8);
            puVar12 = &local_30;
            SVar11 = CASE_9;
          }
          else {
            iVar6 = thunk_FUN_00490d90((STGameObjC *)pSVar3);
            if (iVar6 != 0) {
              if (local_18 == nullptr) {
                local_18 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              }
              Library::DKW::TBL::DArrayAppend(local_18,local_8);
              goto LAB_0049f2b2;
            }
            puVar12 = &local_14;
            SVar11 = CASE_3;
          }
          /* ST_CALLSITE[0049F2AD]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          STBoatC::CmdToObj(pSVar3,SVar11,puVar12);
        }
LAB_0049f2b2:
        local_10 = local_10 + 1;
        uVar7 = local_10 & 0xffff;
      } while (uVar7 < local_c);
    }
    array = local_18;
    /* ST_CALLSITE[0049F2DE]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
    STAllPlayersC::RegisterPGPair
              (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(local_c), (uint8_t)(pSVar2->field_0024)),
               &array_00->flags,&local_18->flags);
    if (array_00 != nullptr) {
      DArrayDestroy(array_00);
    }
    if (array != nullptr) {
      DArrayDestroy(array);
    }
  }
  uVar7 = 0;
  if (*(int *)&pSVar2->field_0x2ca == 0) {
    /* ST_CALLSITE[0049F31C]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
    this_00 = STAllPlayersC::GetObjPtr
                        (g_allPlayers_007FA174,pSVar2->field_0x2c3,*(ushort *)&pSVar2->field_0x2c4,
                         CASE_1);
    if (((this_00 == nullptr) || (this_00->field_0018 != *(int *)&pSVar2->field_0x2c6)) ||
       /* ST_CALLSITE[0049F33B]: CALL dword ptr [EDX + 0x108]; [STIndirectCallsiteApplier] exact slot 0x108; mode=machine-word; signature=__thiscall;/undefined4;pointer:/STGameObjC;/undefined4 */
       (iVar6 = (*this_00->vtable[1].vfunc_34)(this_00,(int)pSVar2->field_0024), iVar6 == 0)) {
      *(undefined4 *)&pSVar2->field_0x2ca = 1;
      local_10 = 0;
      local_14 = g_playSystem_00802A38->field_00E4;
      if (0 < (int)local_c) {
        uVar7 = 0;
        do {
          DArrayGetElement((DArrayTy *)pSVar2->field_0029,uVar7,local_8);
          if (STPiece<0,2>(local_8) != 0xffff) {
            pSVar3 = (STBoatC *)
                     /* ST_CALLSITE[0049F394]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                     STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_8),CASE_1);
            local_34 = pSVar3;
            if (pSVar3 == nullptr) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0xbda);
            }
            iVar6 = thunk_FUN_0045ff10((STGameObjC *)pSVar3);
            if (iVar6 == 9) {
              puVar9 = (byte *)&pSVar3->field_05FC;
              puVar10 = (byte *)(local_9c);
              memmove(puVar10, puVar9, 0x1d); /* compiler REP MOVS byte copy */
              pSVar3 = local_34;
              if (3 < local_87) goto LAB_0049f3f5;
            }
            /* ST_CALLSITE[0049F3F0]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            STBoatC::CmdToObj(pSVar3,CASE_3,&local_14);
          }
LAB_0049f3f5:
          local_10 = local_10 + 1;
          uVar7 = local_10 & 0xffff;
          if ((int)local_c <= (int)uVar7) {
            g_currentExceptionFrame = local_7c.previous;
            return local_24;
          }
        } while( true );
      }
    }
  }
  else if (g_playSystem_00802A38->field_00E4 % 0x14 == 5) {
    if (0 < (int)local_c) {
      uVar8 = 0;
      do {
        DArrayGetElement((DArrayTy *)pSVar2->field_0029,uVar8,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          pSVar3 = (STBoatC *)
                   /* ST_CALLSITE[0049F46A]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_8),CASE_1);
          if (pSVar3 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xbeb);
          }
          iVar6 = thunk_FUN_0045ff10((STGameObjC *)pSVar3);
          /* ST_CALLSITE[0049F4A0]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
          if ((iVar6 == 9) || (uVar8 = STBoatC::CheckPBoxCmd(pSVar3,CASE_9), uVar8 == 1)) {
            local_1c = local_1c + 1;
            break;
          }
        }
        uVar7 = uVar7 + 1;
        uVar8 = uVar7 & 0xffff;
      } while ((int)uVar8 < (int)local_c);
    }
    if (local_1c == 0) {
      local_24 = 0;
    }
  }
  g_currentExceptionFrame = local_7c.previous;
  return local_24;
}

