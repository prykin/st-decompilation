#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpBuild
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497E00 @ 004981C3 -> read as EAX on
   every CFG path | 00497E00 @ 004981D0 -> read as EAX on every CFG path | 00497E00 @ 0049857A ->
   read as EAX on every CFG path */

int __thiscall STGroupBoatC::GrpBuild(STGroupBoatC *this,int param_1)

{
  short sVar1;
  short sVar2;
  STGroupBoatC *pSVar4;
  DArrayTy *array;
  short sVar5;
  int iVar6;
  STBoatC *pSVar6;
  dword dVar7;
  DArrayTy *array_00;
  int iVar9;
  int iVar8;
  uint uVar9;
  uint uVar10;
  short *psVar11;
  short *psVar13;
  STBoatC_CmdToObj_param_1Enum SVar14;
  uint *puVar15;
  InternalExceptionFrame local_8c;
  uint local_48;
  ushort local_44;
  ushort local_42;
  ushort local_40;
  uint local_3e;
  uint local_3a;
  char local_36 [14];
  byte local_28;
  ushort local_27;
  STGroupBoatC *local_24;
  uint local_20;
  DArrayTy *local_1c;
  int local_18;
  dword local_14;
  DArrayTy *local_10;
  uint local_c;
  byte local_8 [4];
  local_14 = this->field_0029->count;
  local_10 = nullptr;
  local_1c = nullptr;
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_24 = this;

  iVar6 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0);
  pSVar4 = local_24;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_8c.previous;

    iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x944,0,iVar6,"%s",
                               "STGroupBoatC::GrpBuild");
    if (iVar9 == 0) {
      RaiseInternalException(iVar6,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x945);
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    memset(&local_24->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    iVar8 = 0;
    local_24->field_0065 = 0;
    psVar11 = &local_24->field_0137;
    psVar13 = &local_24->field_0276;
    for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined4 *)psVar13 = *(undefined4 *)psVar11;
      psVar11 = psVar11 + 2;
      psVar13 = psVar13 + 2;
    }
    *psVar13 = *psVar11;
    ((char *)psVar13)[1] = (char)psVar11[1];
    local_20 = g_playSystem_00802A38->field_00E4;
    local_44 = local_24->field_0137;
    local_48 = g_playSystem_00802A38->field_00E4;
    local_42 = local_24->field_0139;
    local_3e = local_24->field_013D;
    local_27 = local_24->field_0154;
    local_40 = local_24->field_013B;
    local_3a = *(undefined4 *)&local_24->field_0x141;
    Library::MSVCRT::_strncpy(local_36,&local_24->field_0145,0xe);
    uVar9 = 0;
    local_28 = 0;
    local_c = 0;
    array_00 = local_1c;
    if (local_14 != 0) {
      do {

        DArrayGetElement(pSVar4->field_0029,uVar9,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          pSVar6 = (STBoatC *)
                   /* ST_CALLSITE[0049CE62]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar4->field_0024,STPiece<0,2>(local_8),CASE_1);
          if (pSVar6 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x90f);
          }
          /* ST_CALLSITE[0049CE8B]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          dVar7 = pSVar6->sub_0045EEE0();
          /* ST_CALLSITE[0049CE97]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          if (((dVar7 == 0xc) || (dVar7 = pSVar6->sub_0045EEE0(), dVar7 == 0x18))
             /* ST_CALLSITE[0049CEA3]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
             || (dVar7 = pSVar6->sub_0045EEE0(), dVar7 == 0x19)) {
            if (array_00 == nullptr) {
              array_00 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              local_1c = array_00;
            }

            Library::DKW::TBL::DArrayAppend(array_00,local_8);
            puVar15 = &local_48;
            SVar14 = CASE_11;
          }
          else {

            iVar8 = thunk_FUN_00490d90((STGameObjC *)pSVar6);
            if (iVar8 != 0) {
              if (local_10 == nullptr) {
                local_10 = Library::DKW::TBL::DArrayCreate(nullptr,1,2,1);
              }

              Library::DKW::TBL::DArrayAppend(local_10,local_8);
              goto LAB_0049cf10;
            }
            puVar15 = &local_20;
            SVar14 = CASE_3;
          }
          /* ST_CALLSITE[0049CF0B]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
          STBoatC::CmdToObj(pSVar6,SVar14,puVar15);
        }
LAB_0049cf10:
        local_c = local_c + 1;
        uVar9 = local_c & 0xffff;
      } while (uVar9 < local_14);
    }
    array = local_10;
    /* ST_CALLSITE[0049CF37]: CALL 0x00403d9b; direct=00403D9B STAllPlayersC::RegisterPGPair */
    STAllPlayersC::RegisterPGPair
              (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(uVar9), (uint8_t)(pSVar4->field_0024)),
               &array_00->flags,&local_10->flags);
    if (array_00 != nullptr) {
      DArrayDestroy(array_00);
    }
    if (array != nullptr) {
      DArrayDestroy(array);
    }
  }
  uVar9 = 0;
  local_c = 2;
  if (g_playSystem_00802A38->field_00E4 % 0x32 == 0) {
    sVar5 = pSVar4->field_0276;
    sVar1 = pSVar4->field_027A;
    sVar2 = pSVar4->field_0278;
    if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
        ((sVar2 < 0 || ((g_worldGrid.sizeY <= sVar2 || (sVar1 < 0)))))) ||
       (g_worldGrid.sizeZ <= sVar1)) {
      sVar5 = -1;
    }
    else {
      sVar5 = STGridAt3D(g_pathingGrid, sVar5, sVar2, sVar1);
    }
    if (sVar5 != 0) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    local_18 = 0;
    if (local_14 != 0) {
      uVar10 = 0;
      do {

        DArrayGetElement(pSVar4->field_0029,uVar10,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          pSVar6 = (STBoatC *)
                   /* ST_CALLSITE[0049D034]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                   STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar4->field_0024,STPiece<0,2>(local_8),CASE_1);
          if (pSVar6 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\to_grpb.cpp",0x938);
          }
          /* ST_CALLSITE[0049D05E]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          dVar7 = pSVar6->sub_0045EEE0();
          /* ST_CALLSITE[0049D06A]: CALL dword ptr [EDX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
          if (((((dVar7 == 0xc) || (dVar7 = pSVar6->sub_0045EEE0(), dVar7 == 0x18))
               /* ST_CALLSITE[0049D076]: CALL dword ptr [EAX + 0x2c]; [STIndirectCallsiteApplier] exact slot 0x2C; mode=structural-presentation; signature=__thiscall;/dword;pointer:/STBoatC */
               || (dVar7 = pSVar6->sub_0045EEE0(), dVar7 == 0x19)) &&
              /* ST_CALLSITE[0049D080]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
              (iVar8 = STGameObjC::sub_0045FF10((STGameObjC *)pSVar6), iVar8 == 0x11)) ||
             /* ST_CALLSITE[0049D08E]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
             (uVar10 = STBoatC::CheckPBoxCmd(pSVar6,CASE_11), uVar10 == 1)) {
            local_18 = local_18 + 1;
          }
        }
        uVar9 = uVar9 + 1;
        uVar10 = uVar9 & 0xffff;
      } while (uVar10 < local_14);
    }
    if (local_18 == 0) {
      local_c = 0;
    }
  }
  g_currentExceptionFrame = local_8c.previous;
  return local_c;
}

