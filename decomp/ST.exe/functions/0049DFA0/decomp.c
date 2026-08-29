#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpLoadObj
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497E00 @ 00498299 -> read as EAX on
   every CFG path | 00497E00 @ 004982A6 -> read as EAX on every CFG path | 00497E00 @ 004985C6 ->
   read as EAX on every CFG path */

int __thiscall STGroupBoatC::GrpLoadObj(STGroupBoatC *this,int param_1)

{
  STGroupBoatC *pSVar2;
  int iVar3;
  int iVar8_mg1;
  dword dVar3;
  DArrayTy *pDVar4;
  DArrayTy *array;
  uint uVar5;
  int iVar7;
  int iVar6;
  STBoatC *pSVar7;
  uint uVar9;
  InternalExceptionFrame local_84;
  uint local_40;
  ushort local_3c;
  ushort local_3a;
  ushort local_38;
  uint local_36;
  STGroupBoatC *local_30;
  int local_2c;
  int local_28;
  DArrayTy *local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  DArrayTy *local_14;
  STBoatC *local_10;
  byte local_c [4];
  STBoatC *local_8;

  local_10 = (STBoatC *)this->field_0029->count;
  local_14 = nullptr;
  local_24 = nullptr;
  local_28 = 0;
  local_2c = 0;
  local_18 = 2;
  local_84.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_84;
  local_30 = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_84.jumpBuffer,0);
  pSVar2 = local_30;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_84.previous;
    if (iVar3 == -0x5001fff7) {
      return local_18;
    }

    iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xaa0,0,iVar3,"%s",
                               "STGroupBoatC::GrpLoadObj");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0xaa1);
    return -1;
  }
  if ((param_1 != 1) && (param_1 != 0)) goto LAB_0049e26d;
  memset(&local_30->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
  local_30->field_0065 = 0;

  iVar8_mg1 = STPlaySystemC::sub_006E62D0
                        (g_playSystem_00802A38,local_30->field_0178,(int *)&local_8);
  if (iVar8_mg1 == -4) {
    return 0;
  }
  /* ST_CALLSITE[0049E058]: CALL 0x00405f0b; direct=00405F0B STFishC::sub_004162F0 */
  STFishC::sub_004162F0
            ((STFishC *)local_8,&pSVar2->field_02A3,&pSVar2->field_02A5,
             (short *)&pSVar2->field_0x2a7);
  local_20 = 0;
  *(int *)&pSVar2->field_0x2a9 = local_8->field_0018;
  local_40 = g_playSystem_00802A38->field_00E4;
  pSVar7 = local_8;
  array = local_24;
  local_1c = local_40;
  if (0 < (int)local_10) {
    do {

      DArrayGetElement(pSVar2->field_0029,local_20,local_c);
      if (STPiece<0,2>(local_c) != 0xffff) {
        local_8 = (STBoatC *)
                  /* ST_CALLSITE[0049E0B8]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                  STAllPlayersC::GetObjPtr
                            (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_c),CASE_1);
        if (local_8 == nullptr) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0xa5b);
        }
        /* ST_CALLSITE[0049E0E5]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STBoatC */
        iVar6 = local_8->sub_004838B0();
        if (iVar6 != 0) {

          iVar6 = thunk_FUN_00490d90((STGameObjC *)local_8);
          if (iVar6 == 0) {
            /* ST_CALLSITE[0049E108]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
            dVar3 = local_8->sub_0045EEE0();
            if ((((dVar3 != 7) && (dVar3 != 0x13)) && (dVar3 != 0x1b)) ||
               /* ST_CALLSITE[0049E11D]: CALL 0x00402608; direct=00402608 STGameObjC::sub_00492370 */
               (iVar6 = STGameObjC::sub_00492370((STGameObjC *)local_8), iVar6 != 0)) {
              /* ST_CALLSITE[0049E184]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
              STBoatC::CmdToObj(local_8,CASE_3,&local_1c);
              goto LAB_0049e1aa;
            }
            local_3c = pSVar2->field_02A3;
            local_3a = pSVar2->field_02A5;
            local_38 = *(undefined2 *)&pSVar2->field_0x2a7;
            local_36 = *(undefined4 *)&pSVar2->field_0x2a9;
            /* ST_CALLSITE[0049E155]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            STBoatC::CmdToObj(local_8,CASE_F,&local_40);
            pDVar4 = local_14;
            if (local_14 == nullptr) {
              pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              local_14 = pDVar4;
            }
          }
          else {
            pDVar4 = array;
            if (array == nullptr) {
              array = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              pDVar4 = array;
              local_24 = array;
            }
          }

          Library::DKW::TBL::DArrayAppend(pDVar4,local_c);
        }
      }
LAB_0049e1aa:
      local_20 = local_20 + 1;
      pSVar7 = local_10;
    } while ((int)local_20 < (int)local_10);
  }
  pDVar4 = local_14;
  if (local_14 == nullptr) {
LAB_0049e1de:
    if (array != nullptr) {
      local_10 = (STBoatC *)array->count;
      uVar9 = 0;
      if (0 < (int)local_10) {
        do {

          DArrayGetElement(array,uVar9,local_c);
          /* ST_CALLSITE[0049E20B]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
          local_8 = STAllPlayersC::GetObjPtr
                              (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_c),CASE_1);
          /* ST_CALLSITE[0049E21B]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          STBoatC::CmdToObj(local_8,CASE_3,&local_1c);
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)local_10);
      }
      local_18 = 0;
    }
    pDVar4 = local_14;
    if (local_14 != nullptr) goto LAB_0049e241;
    if (array == nullptr) {
      local_18 = 0;
    }
LAB_0049e23d:
    if (pDVar4 != nullptr) goto LAB_0049e241;
  }
  else {
    if (array != nullptr) {
      /* ST_CALLSITE[0049E1D3]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
      STAllPlayersC::RegisterPGPair
                (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(pSVar7), (uint8_t)(pSVar2->field_0024)),
                 &local_14->flags,&array->flags);
      goto LAB_0049e23d;
    }
    if (local_14 == nullptr) goto LAB_0049e1de;
LAB_0049e241:
    DArrayDestroy(pDVar4);
  }
  if (array != nullptr) {
    DArrayDestroy(array);
  }
  RaiseInternalException
            (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",0xa86);
LAB_0049e26d:
  if (g_playSystem_00802A38->field_00E4 % 0x14 == 0) {
    uVar9 = 0;
    if (0 < (int)local_10) {
      do {

        DArrayGetElement(pSVar2->field_0029,uVar9,local_c);
        if (STPiece<0,2>(local_c) != 0xffff) {
          local_8 = (STBoatC *)
                    /* ST_CALLSITE[0049E2BF]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                    STAllPlayersC::GetObjPtr
                              (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_c),CASE_1);
          if (local_8 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xa8e);
          }
          /* ST_CALLSITE[0049E2ED]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STBoatC */
          iVar6 = local_8->sub_004838B0();
          if ((iVar6 != 0) &&
             /* ST_CALLSITE[0049E2FC]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
             (((dVar3 = local_8->sub_0045EEE0(), dVar3 == 7 || (dVar3 == 0x13)) ||
              (dVar3 == 0x1b)))) {
            local_28 = 1;
            /* ST_CALLSITE[0049E318]: CALL 0x00402608; direct=00402608 STGameObjC::sub_00492370 */
            iVar6 = STGameObjC::sub_00492370((STGameObjC *)local_8);
            if (iVar6 == *(int *)&pSVar2->field_0x2a9) {
              local_18 = 0;
              RaiseInternalException
                        (-0x5001fff7,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0xa95);
            }
            /* ST_CALLSITE[0049E346]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
            iVar6 = STGameObjC::sub_0045FF10((STGameObjC *)local_8);
            /* ST_CALLSITE[0049E355]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
            if ((iVar6 == 0xf) || (uVar5 = STBoatC::CheckPBoxCmd(local_8,CASE_F), uVar5 == 1)) {
              local_2c = 1;
            }
          }
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)local_10);
    }
    if ((local_28 == 0) || (local_2c == 0)) {
      local_18 = 0;
    }
  }
  g_currentExceptionFrame = local_84.previous;
  return local_18;
}

