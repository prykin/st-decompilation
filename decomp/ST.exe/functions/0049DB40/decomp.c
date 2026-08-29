#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpGuard
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497E00 @ 00498262 -> read as EAX on
   every CFG path | 00497E00 @ 0049826F -> read as EAX on every CFG path | 00497E00 @ 004985B8 ->
   read as EAX on every CFG path */

int __thiscall STGroupBoatC::GrpGuard(STGroupBoatC *this,int param_1)

{
  STGroupBoatC *pSVar2;
  int local_EAX_64;
  DArrayTy *array;
  STBoatC *pSVar3;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar5;
  dword index;
  InternalExceptionFrame local_78;
  int local_34;
  STGroupBoatC *local_30;
  uint local_2c;
  DArrayTy *local_28;
  uint local_24;
  dword local_20;
  uint *local_1c;
  int local_18;
  int local_14;
  DArrayTy *local_10;
  byte local_c [4];
  DArrayTy *local_8;

  local_8 = nullptr;
  local_1c = nullptr;
  local_10 = nullptr;
  local_20 = this->field_0029->count;
  local_28 = nullptr;
  local_34 = 2;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_30 = this;

  local_EAX_64 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
  pSVar2 = local_30;
  if (local_EAX_64 != 0) {
    g_currentExceptionFrame = local_78.previous;

    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xa3e,0,local_EAX_64,
                               "%s","STGroupBoatC::GrpGuard");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_64,0,"E:\\__titans\\wlad\\to_grpb.cpp",0xa3f);
    return -1;
  }
  if ((param_1 == 1) || (param_1 == 0)) {
    memset(&local_30->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    local_30->field_0065 = 0;
    local_8 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
    if (pSVar2->field_0164 == 0) {

      Library::DKW::TBL::FUN_006afe40((int *)&local_8,&pSVar2->field_0168->flags);
    }
    if (pSVar2->field_0164 == 1) {
      /* ST_CALLSITE[0049DC52]: CALL 0x00403869; direct=00403869 STAllPlayersC::GetGObjFromBox */
      STAllPlayersC::GetGObjFromBox
                (g_allPlayers_007FA174,pSVar2->field_0024,pSVar2->field_016C,pSVar2->field_016E,
                 pSVar2->field_0170,pSVar2->field_0172,pSVar2->field_0174,pSVar2->field_0176,
                 (int *)&local_1c,(int *)&local_10,&local_14,&local_18);
      if (0 < local_14) {

        Library::DKW::TBL::FUN_006afe40((int *)&local_8,local_1c);
      }
      if (0 < local_18) {
        if (local_14 == 0) {

          Library::DKW::TBL::FUN_006afe40((int *)&local_8,&local_10->flags);
        }
        else {
          uVar5 = 0;
          if (0 < local_18) {
            do {

              DArrayGetElement(local_10,uVar5,local_c);

              Library::DKW::TBL::DArrayAppend(local_8,local_c);
              uVar5 = uVar5 + 1;
            } while ((int)uVar5 < local_18);
          }
        }
      }
    }
    local_2c = 0;
    array = local_28;
    if (0 < (int)local_20) {
      do {

        DArrayGetElement(pSVar2->field_0029,local_2c,local_c);
        if (STPiece<0,2>(local_c) != 0xffff) {
          /* ST_CALLSITE[0049DCDE]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          pSVar3 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_c),CASE_1);
          if (pSVar3 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xa1a);
          }

          iVar4 = thunk_FUN_00490d90((STGameObjC *)pSVar3);
          if (iVar4 == 0) {
            local_24 = g_playSystem_00802A38->field_00E4;
            /* ST_CALLSITE[0049DD25]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            STBoatC::CmdToObj(pSVar3,CASE_3,&local_24);
          }
          else {
            if (array == nullptr) {
              array = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              local_28 = array;
            }

            Library::DKW::TBL::DArrayAppend(array,local_c);
          }
        }
        local_2c = local_2c + 1;
      } while ((int)local_2c < (int)local_20);
    }
    /* ST_CALLSITE[0049DD6C]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
    STAllPlayersC::RegisterPGPair
              (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(local_20), (uint8_t)(pSVar2->field_0024)),
               &local_8->flags,&array->flags);
    DArrayDestroy(local_8);
    if (array != nullptr) {
      DArrayDestroy(array);
    }
    if (pSVar2->field_0168 != nullptr) {
      DArrayDestroy(pSVar2->field_0168);
      pSVar2->field_0168 = nullptr;
    }
  }
  else if (g_playSystem_00802A38->field_00E4 % 5 != 0) {
    g_currentExceptionFrame = local_78.previous;
    return local_34;
  }
  index = 0;
  if (0 < (int)local_20) {
    do {

      DArrayGetElement(pSVar2->field_0029,index,local_c);
      if (STPiece<0,2>(local_c) != 0xffff) {
        /* ST_CALLSITE[0049DDCF]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
        pSVar3 = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_c),CASE_1);
        if (pSVar3 == nullptr) {

          iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xa34,0,0,"%s"
                                     ,"STGroupBoatC::GrpGuard NULL");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0xa35);
        }
        /* ST_CALLSITE[0049DE1A]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
        iVar4 = STGameObjC::sub_0045FF10((STGameObjC *)pSVar3);
        /* ST_CALLSITE[0049DE28]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
        if ((iVar4 == 5) || (uVar5 = STBoatC::CheckPBoxCmd(pSVar3,CASE_5), uVar5 == 1)) break;
      }
      index = index + 1;
    } while ((int)index < (int)local_20);
  }
  if ((local_20 != 0) && (index != local_20)) {
    g_currentExceptionFrame = local_78.previous;
    return local_34;
  }
  g_currentExceptionFrame = local_78.previous;
  return 0;
}

