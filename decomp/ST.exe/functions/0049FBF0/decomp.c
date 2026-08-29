#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Bring */

uint * __thiscall STGroupBoatC::Bring(STGroupBoatC *this,int param_1)

{
  ushort uVar2;
  STGroupBoatC *pSVar3;
  int iVar3;
  STBoatC *pSVar4;
  dword dVar5;
  DArrayTy *pDVar6;
  int iVar8;
  uint *puVar7;
  int iVar9;
  DArrayTy *array;
  uint uVar11;
  InternalExceptionFrame local_70;
  uint local_2c;
  ushort local_28;
  ushort local_26;
  ushort local_24;
  STGroupBoatC *local_20;
  DArrayTy *local_1c;
  uint local_18;
  DArrayTy *local_14;
  dword local_10;
  DArrayTy *local_c;
  byte local_8 [4];
  local_10 = this->field_0029->count;
  local_14 = nullptr;
  local_c = nullptr;
  local_1c = (DArrayTy *)0x2;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_20 = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
  pSVar3 = local_20;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    if (iVar3 == -0x5001fff7) {
      return &local_1c->flags;
    }

    iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xcb0,0,iVar3,"%s",
                               "STGroupBoatC::Bring");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0xcb1);
    return (uint *)0xffffffff;
  }
  if ((param_1 != 0) && (param_1 != 1)) goto LAB_0049fe51;
  memset(&local_20->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
  uVar11 = 0;
  local_20->field_0065 = 0;
  uVar2 = local_20->field_01B5;
  local_20->field_02E8 = local_20->field_01B3;
  local_20->field_02EA = uVar2;
  local_20->field_02EC = local_20->field_01B7;
  local_28 = local_20->field_02E8;
  local_26 = local_20->field_02EA;
  local_2c = g_playSystem_00802A38->field_00E4;
  local_24 = local_20->field_02EC;
  local_18 = local_2c;
  if (0 < (int)local_10) {
    do {

      DArrayGetElement(pSVar3->field_0029,uVar11,local_8);
      if (STPiece<0,2>(local_8) != 0xffff) {
        pSVar4 = (STBoatC *)
                 /* ST_CALLSITE[0049FCDF]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                 STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_8),CASE_1);
        if (pSVar4 == nullptr) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0xc79);
        }
        /* ST_CALLSITE[0049FD09]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
        dVar5 = pSVar4->sub_0045EEE0();
        /* ST_CALLSITE[0049FD15]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
        if (((dVar5 == 7) || (dVar5 = pSVar4->sub_0045EEE0(), dVar5 == 0x13)) ||
           /* ST_CALLSITE[0049FD21]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
           (dVar5 = pSVar4->sub_0045EEE0(), dVar5 == 0x1b)) {
          /* ST_CALLSITE[0049FD6B]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          STBoatC::CmdToObj(pSVar4,CASE_17,&local_2c);
          pDVar6 = local_14;
          if (local_14 == nullptr) {
            pDVar6 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
            local_14 = pDVar6;
          }
        }
        else {

          iVar9 = thunk_FUN_00490d90((STGameObjC *)pSVar4);
          if (iVar9 == 0) {
            /* ST_CALLSITE[0049FD3C]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            STBoatC::CmdToObj(pSVar4,CASE_3,&local_18);
            goto LAB_0049fd94;
          }
          pDVar6 = local_c;
          if (local_c == nullptr) {
            pDVar6 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
            local_c = pDVar6;
          }
        }

        Library::DKW::TBL::DArrayAppend(pDVar6,local_8);
      }
LAB_0049fd94:
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)local_10);
  }
  array = local_c;
  pDVar6 = local_14;
  if ((local_14 == nullptr) || (local_c == nullptr)) {
    if (local_14 == nullptr) {
      if (local_c != nullptr) {
        dVar5 = local_c->count;
        uVar11 = 0;
        local_10 = dVar5;
        if (0 < (int)dVar5) {
          do {
            /* ST_CALLSITE[0049FDDE]: CALL 0x006acc70; direct=006ACC70 DArrayGetElement; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STAllPlayersC; signature=__fastcall;pointer:/STAllPlayersC;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;pointer:/void */
            DArrayGetElement(local_c,uVar11,local_8);
            /* ST_CALLSITE[0049FDF3]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar4 = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_8),CASE_1);
            /* ST_CALLSITE[0049FE00]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            STBoatC::CmdToObj(pSVar4,CASE_3,&local_18);
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < (int)dVar5);
        }
        local_1c = nullptr;
      }
      array = local_c;
      pDVar6 = local_14;
      if (local_14 == nullptr) {
        if (local_c == nullptr) {
          local_1c = local_c;
        }
        goto LAB_0049fe22;
      }
    }
LAB_0049fe26:
    DArrayDestroy(pDVar6);
  }
  else {
    /* ST_CALLSITE[0049FDBA]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
    STAllPlayersC::RegisterPGPair
              (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(local_10), (uint8_t)(pSVar3->field_0024)),
               &local_14->flags,&local_c->flags);
LAB_0049fe22:
    if (pDVar6 != nullptr) goto LAB_0049fe26;
  }
  if (array != nullptr) {
    DArrayDestroy(array);
  }
  RaiseInternalException
            (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",0xca0);
LAB_0049fe51:
  if (g_playSystem_00802A38->field_00E4 % 0x19 == 7) {
    dVar5 = 0;
    if (0 < (int)local_10) {
      do {

        DArrayGetElement(pSVar3->field_0029,dVar5,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          /* ST_CALLSITE[0049FE9B]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar4 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_8),CASE_1);
          if (pSVar4 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xca7);
          }
          /* ST_CALLSITE[0049FEC3]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
          iVar9 = STGameObjC::sub_0045FF10((STGameObjC *)pSVar4);
          /* ST_CALLSITE[0049FED1]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
          if ((iVar9 == 0x17) || (uVar11 = STBoatC::CheckPBoxCmd(pSVar4,CASE_17), uVar11 == 1))
          break;
        }
        dVar5 = dVar5 + 1;
      } while ((int)dVar5 < (int)local_10);
    }
    if (dVar5 == local_10) {
      local_1c = nullptr;
    }
  }
  g_currentExceptionFrame = local_70.previous;
  return &local_1c->flags;
}

