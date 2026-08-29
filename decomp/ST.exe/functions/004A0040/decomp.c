#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpDismant
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497E00 @ 00498451 -> read as EAX on
   every CFG path | 00497E00 @ 0049845E -> read as EAX on every CFG path | 00497E00 @ 00498636 ->
   read as EAX on every CFG path */

int __thiscall STGroupBoatC::GrpDismant(STGroupBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar5;
  STGroupBoatC *pSVar6;
  DArrayTy *array;
  int iVar7;
  STBoatC *pSVar7;
  dword dVar8;
  DArrayTy *array_00;
  int iVar10;
  int iVar9;
  uint uVar10;
  uint uVar11;
  RecoveredRecordView_004B9D90_09AED060 *pRVar13;
  STBoatC_CmdToObj_param_1Enum SVar14;
  uint *puVar15;
  InternalExceptionFrame local_78;
  uint local_34;
  short local_30;
  short local_2e;
  ushort local_2c;
  uint local_2a;
  STGroupBoatC *local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  DArrayTy *local_14;
  dword local_10;
  DArrayTy *local_c;
  byte local_8 [4];
  local_10 = this->field_0029->count;
  local_c = nullptr;
  local_14 = nullptr;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_24 = this;

  iVar7 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
  pSVar6 = local_24;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_78.previous;
    if (iVar7 == -0x5001fff7) {
      return 0;
    }

    iVar10 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xd02,0,iVar7,"%s",
                                "STGroupBoatC::GrpDismant");
    if (iVar10 == 0) {
      RaiseInternalException(iVar7,0,"E:\\__titans\\wlad\\to_grpb.cpp",0xd03);
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&local_24->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    iVar9 = 0;
    local_24->field_02F0 = local_24->field_01BB;
    local_24->field_0065 = 0;
    local_24->field_02EE = local_24->field_01B9;
    *(short *)&local_24->field_0x2f2 = local_24->field_01BD;
    if (g_worldGrid.sizeZ + -2 < (int)local_24->field_01BD) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0xcc7);
    }
    sVar1 = pSVar6->field_02EE;
    sVar2 = *(short *)&pSVar6->field_0x2f2;
    sVar3 = pSVar6->field_02F0;
    if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
       (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))) {
      pRVar13 = nullptr;
    }
    else {
      pRVar13 = (RecoveredRecordView_004B9D90_09AED060 *)
                STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
    }
    if (((pRVar13 == nullptr) ||
        (*(int *)&pRVar13->field_0x20 != 1000)) ||
       ((*(int *)&pRVar13->field_0x24 != (int)pSVar6->field_0024 ||

        (iVar9 = thunk_FUN_004b9d90(pRVar13), iVar9 == 0)))) {
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                 0xccc);
    }
    uVar5 = *(undefined2 *)&pRVar13->field_0x1a;
    local_1c = 0;
    *(undefined2 *)&pSVar6->field_0x2f4 = *(undefined2 *)&pRVar13->field_0x18;
    pSVar6->field_02F6 = uVar5;
    local_2e = pSVar6->field_02F0;
    local_34 = g_playSystem_00802A38->field_00E4;
    local_2c = *(undefined2 *)&pSVar6->field_0x2f2;
    uVar10 = STReplaceLowWord((uint32_t)(g_playSystem_00802A38), (uint16_t)(local_2c));
    local_30 = pSVar6->field_02EE;
    local_2a = *(undefined4 *)&pSVar6->field_0x2f4;
    array_00 = local_14;
    local_18 = local_34;
    if (local_10 != 0) {
      uVar10 = 0;
      do {

        DArrayGetElement(pSVar6->field_0029,uVar10,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          pSVar7 = (STBoatC *)
                   /* ST_CALLSITE[004A0228]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar6->field_0024,STPiece<0,2>(local_8),CASE_1);
          if (pSVar7 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xcd4);
          }
          /* ST_CALLSITE[004A0251]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          dVar8 = pSVar7->sub_0045EEE0();
          /* ST_CALLSITE[004A025D]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          if (((dVar8 == 0xc) || (dVar8 = pSVar7->sub_0045EEE0(), dVar8 == 0x18))
             /* ST_CALLSITE[004A0269]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
             || (dVar8 = pSVar7->sub_0045EEE0(), dVar8 == 0x1d)) {
            if (array_00 == nullptr) {
              array_00 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              local_14 = array_00;
            }

            Library::DKW::TBL::DArrayAppend(array_00,local_8);
            puVar15 = &local_34;
            SVar14 = CASE_12;
          }
          else {

            iVar9 = thunk_FUN_00490d90((STGameObjC *)pSVar7);
            if (iVar9 != 0) {
              if (local_c == nullptr) {
                local_c = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              }

              Library::DKW::TBL::DArrayAppend(local_c,local_8);
              goto LAB_004a02d6;
            }
            puVar15 = &local_18;
            SVar14 = CASE_3;
          }
          /* ST_CALLSITE[004A02D1]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          STBoatC::CmdToObj(pSVar7,SVar14,puVar15);
        }
LAB_004a02d6:
        local_1c = local_1c + 1;
        uVar10 = local_1c & 0xffff;
      } while (uVar10 < local_10);
    }
    array = local_c;
    /* ST_CALLSITE[004A0302]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
    STAllPlayersC::RegisterPGPair
              (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(uVar10), (uint8_t)(pSVar6->field_0024)),
               &array_00->flags,&local_c->flags);
    if (array_00 != nullptr) {
      DArrayDestroy(array_00);
    }
    if (array != nullptr) {
      DArrayDestroy(array);
    }
  }
  uVar10 = 0;
  local_1c = 2;
  if (g_playSystem_00802A38->field_00E4 % 0x1e == 0xc) {
    local_20 = 0;
    if (local_10 != 0) {
      uVar11 = 0;
      do {

        DArrayGetElement(pSVar6->field_0029,uVar11,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          pSVar7 = (STBoatC *)
                   /* ST_CALLSITE[004A0373]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar6->field_0024,STPiece<0,2>(local_8),CASE_1);
          if (pSVar7 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0xcf6);
          }
          /* ST_CALLSITE[004A039D]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          dVar8 = pSVar7->sub_0045EEE0();
          /* ST_CALLSITE[004A03A9]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          if (((((dVar8 == 0xc) || (dVar8 = pSVar7->sub_0045EEE0(), dVar8 == 0x18))
               /* ST_CALLSITE[004A03B5]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
               || (dVar8 = pSVar7->sub_0045EEE0(), dVar8 == 0x1d)) &&
              /* ST_CALLSITE[004A03BF]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
              (iVar9 = STGameObjC::sub_0045FF10((STGameObjC *)pSVar7), iVar9 == 0x12)) ||
             /* ST_CALLSITE[004A03CD]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
             (uVar11 = STBoatC::CheckPBoxCmd(pSVar7,CASE_12), uVar11 == 1)) {
            local_20 = 1;
            break;
          }
        }
        uVar10 = uVar10 + 1;
        uVar11 = uVar10 & 0xffff;
      } while (uVar11 < local_10);
    }
    if (local_20 == 0) {
      local_1c = 0;
    }
  }
  g_currentExceptionFrame = local_78.previous;
  return local_1c;
}

