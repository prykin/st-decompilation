#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpAttack

   [STSwitchEnumApplier] Switch target field_0020 uses
   /SubmarineTitans/Recovered/Enums/STGroupBoatC_field_0020State. Cases:
   CASE_0=0;CASE_14=20;CASE_1AE=430
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497E00 @ 004980DF -> read as EAX on
   every CFG path | 00497E00 @ 004980EC -> read as EAX on every CFG path | 00497E00 @ 0049854B ->
   read as EAX on every CFG path */

int __thiscall STGroupBoatC::GrpAttack(STGroupBoatC *this,int param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar4;
  int iVar6;
  short sVar5;
  DArrayTy *pDVar6;
  STGameObjC *pSVar7;
  int iVar8;
  dword dVar9;
  int iVar9;
  int iVar10;
  STWorldObject *pSVar11;
  STGroupBoatC *pSVar12;
  uint uVar14;
  STGroupBoatC *pSVar15;
  bool bVar16;
  InternalExceptionFrame local_70;
  byte local_2c;
  char cStack_2b;
  ushort uStack_2a;
  int local_24;
  byte local_20;
  undefined3 uStack_1f;
  byte local_1c;
  undefined3 uStack_1b;
  dword local_18;
  int local_14;
  int local_10;
  int local_c;
  STGroupBoatC *local_8;

  local_24 = 2;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_8 = this;

  iVar6 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
  pSVar12 = local_8;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_70.previous;
    if (iVar6 == -0x5001fff7) {
      return 0;
    }

    iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x701,0,iVar6,"%s",
                               "STGroupBoatC::GrpAttack");
    if (iVar9 == 0) {
      RaiseInternalException(iVar6,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x702);
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == 1) {
    DArrayDestroy(local_8->field_020E);
    pSVar12->field_020E = nullptr;
    pSVar12->field_0212 = 0;
    FreeAndNull(&pSVar12->field_021E);
    param_1 = 0;
  }
  pSVar15 = local_8;
  if (param_1 == 0) {
    memset(&pSVar12->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    iVar10 = 0;
    pSVar12->field_0065 = 0;
    if (pSVar12->field_00E7 == 0) {
      local_18 = local_8->field_00EF->count;
      if (local_18 == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x68f);
      }
      if (pSVar15->field_020E != nullptr) {
        DArrayDestroy(pSVar15->field_020E);
        pSVar15->field_020E = nullptr;
        pSVar15->field_0212 = 0;
      }
      pDVar6 = Library::DKW::TBL::DArrayCreate(nullptr,0,4,1);
      sVar5 = 0;
      local_8->field_020E = pDVar6;
      pSVar12 = local_8;
      if (0 < (int)local_18) {
        uVar14 = 0;
        do {

          DArrayGetElement(pSVar12->field_00EF,uVar14,&local_2c);
          if ((local_2c < 8) &&
             ((((g_playSystem_00802A38 == nullptr ||
                (g_bulkInitializedRecords_008087C7[(char)local_2c].field_0022 < 8)) &&
               /* ST_CALLSITE[0049AC3E]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
               (pSVar7 = STAllPlayersC::GetObjPtr
                                   (g_allPlayers_007FA174,local_2c,uStack_2a,(int)cStack_2b),
               pSVar12 = local_8, pSVar7 != nullptr)) &&
              /* ST_CALLSITE[0049AC4D]: CALL dword ptr [EDX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; signature=__thiscall;/undefined4;pointer:/STGameObjC */
              ((iVar10 = (*pSVar7->vtable[1].vfunc_24)(pSVar7), pSVar12 = local_8, iVar10 == 1 &&
               /* ST_CALLSITE[0049AC64]: CALL dword ptr [EAX + 0xf4]; [STIndirectCallsiteApplier] exact slot 0xF4; mode=machine-word; signature=__thiscall;/undefined4;pointer:/STGameObjC;/undefined4 */
               (iVar10 = pSVar7->vfunc_F4((int)local_8->field_0024),
               pSVar12 = local_8, iVar10 == 1)))))) {

            Library::DKW::TBL::DArrayPut(local_8->field_020E,uVar14,&local_2c);
            pSVar12 = local_8;
          }
          sVar5 = sVar5 + 1;
          uVar14 = (uint)sVar5;
        } while ((int)uVar14 < (int)local_18);
      }
      DArrayDestroy(pSVar12->field_00EF);
      pSVar12->field_00EF = nullptr;
      if (pSVar12->field_020E->count == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x69d);
      }
    }
    pSVar12 = local_8;
    if (local_8->field_00E7 == 1) {
      if (local_8->field_020E != nullptr) {
        DArrayDestroy(local_8->field_020E);
        pSVar12->field_020E = nullptr;
        pSVar12->field_0212 = 0;
      }
      pDVar6 = Library::DKW::TBL::DArrayCreate(nullptr,1,4,1);
      pSVar12->field_020E = pDVar6;
      local_c = STReplaceLowWord((uint32_t)(pDVar6), (uint16_t)(pSVar12->field_00F3));
      iVar10 = (int)pSVar12->field_00F3;
      local_18 = 0;
      if (iVar10 < pSVar12->field_00F9 + iVar10) {
        do {
          sVar5 = pSVar12->field_00F5;
          local_14 = STReplaceLowWord((uint32_t)(iVar10), (uint16_t)(sVar5));
          iVar10 = local_c;
          if ((int)sVar5 < (int)pSVar12->field_00FB + (int)sVar5) {
            do {
              local_10 = STReplaceLowWord((uint32_t)(iVar10), (uint16_t)(pSVar12->field_00F7));
              iVar10 = (int)pSVar12->field_00F7;
              if (iVar10 < pSVar12->field_00FD + iVar10) {
                do {
                  sVar5 = (short)local_c;
                  if (((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
                     ((sVar4 = (short)local_14, sVar4 < 0 ||
                      (((g_worldGrid.sizeY <= sVar4 || ((short)local_10 < 0)) ||
                       (g_worldGrid.sizeZ <= (short)local_10)))))) {
                    pSVar11 = nullptr;
                  }
                  else {
                    pSVar11 = STGridAt3D(g_worldGrid, sVar5, sVar4, iVar10).objects[0];
                  }
                  if ((pSVar11 == nullptr) ||
                     (((iVar8 = pSVar11->value_20, iVar8 != 0x14 && (iVar8 != 1000)) &&
                      (iVar8 != 0x3e9)))) {
LAB_0049af27:
                    pSVar12 = local_8;
                    if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
                        (sVar5 = (short)local_14, sVar5 < 0)) ||
                       (((g_worldGrid.sizeY <= sVar5 || ((short)local_10 < 0)) ||
                        (g_worldGrid.sizeZ <= (short)local_10)))) {
                      pSVar11 = nullptr;
                    }
                    else {
                      pSVar11 = STGridAt3D(g_worldGrid, local_c, sVar5, iVar10).objects[1];
                    }
                    if (((pSVar11 != nullptr) && (pSVar11->value_20 == 0x1ae)) &&
                       ((local_2c = *(byte *)&pSVar11[1].vtable, local_2c < 8 &&
                        ((g_playSystem_00802A38 == nullptr ||
                         (g_bulkInitializedRecords_008087C7[(char)local_2c].field_0022 < 8)))))) {
                      bVar1 = local_8->field_0024;
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      _local_20 = CONCAT31(uStack_1f,bVar1);
                      if (DAT_00808a8f == '\0') {
                        if (local_2c == bVar1) {
LAB_0049b073:
                          iVar10 = 0;
                        }
                        else {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          uVar14 = CONCAT11(cStack_2b,local_2c) & 0xff;
                          bVar2 = g_playerRelationMatrix[uVar14][bVar1];
                          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar14] == 0)) {
                            iVar10 = -2;
                          }
                          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][uVar14] == 0)) {
                            iVar10 = -1;
                          }
                          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar14] == 1)) {
                            iVar10 = 1;
                          }
                          else {
                            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][uVar14] != 1))
                            goto LAB_0049b073;
                            iVar10 = 2;
                          }
                        }
                        bVar16 = iVar10 < 0;
                      }
                      else {
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        bVar16 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                                 g_bulkInitializedRecords_008087C7
                                 [CONCAT11(cStack_2b,local_2c) & 0xff].field_0023;
                      }
                      if (bVar16) {
                        uStack_2a = *(ushort *)&pSVar11[1].field_0xe;
                        cStack_2b = '\x03';
                        /* ST_CALLSITE[0049B092]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
                        iVar10 = (*pSVar11->vtable[5].slots_00_28[2])(pSVar11);
                        if ((iVar10 == 1) &&
                           /* ST_CALLSITE[0049B0A6]: CALL dword ptr [EDX + 0xf4]; [STIndirectCallsiteApplier] exact slot 0xF4; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject;/undefined4 */
                           (dVar9 = (*pSVar11->vtable[5].slots_00_28[1])
                                              (pSVar11,(int)pSVar12->field_0024), dVar9 == 1)) {
                          local_18 = dVar9;

                          Library::DKW::TBL::DArrayAppend(pSVar12->field_020E,&local_2c);
                        }
                      }
                    }
                  }
                  else {
                    local_2c = *(byte *)&pSVar11[1].vtable;
                    if ((local_2c < 8) &&
                       ((g_playSystem_00802A38 == nullptr ||
                        (g_bulkInitializedRecords_008087C7[(char)local_2c].field_0022 < 8)))) {
                      bVar1 = local_8->field_0024;
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      _local_1c = CONCAT31(uStack_1b,bVar1);
                      if (DAT_00808a8f == '\0') {
                        if (local_2c == bVar1) {
LAB_0049aec9:
                          iVar8 = 0;
                        }
                        else {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          uVar14 = CONCAT11(cStack_2b,local_2c) & 0xff;
                          bVar2 = g_playerRelationMatrix[uVar14][bVar1];
                          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar14] == 0)) {
                            iVar8 = -2;
                          }
                          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][uVar14] == 0)) {
                            iVar8 = -1;
                          }
                          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar14] == 1)) {
                            iVar8 = 1;
                          }
                          else {
                            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][uVar14] != 1))
                            goto LAB_0049aec9;
                            iVar8 = 2;
                          }
                        }
                        bVar16 = iVar8 < 0;
                      }
                      else {
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        bVar16 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                                 g_bulkInitializedRecords_008087C7
                                 [CONCAT11(cStack_2b,local_2c) & 0xff].field_0023;
                      }
                      if (bVar16) {
                        uStack_2a = *(ushort *)&pSVar11[1].field_0xe;
                        cStack_2b = '\x01';
                        /* ST_CALLSITE[0049AEEC]: CALL dword ptr [EAX + 0xf8]; [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
                        iVar8 = (*pSVar11->vtable[5].slots_00_28[2])(pSVar11);
                        pSVar12 = local_8;
                        if ((iVar8 == 1) &&
                           /* ST_CALLSITE[0049AF03]: CALL dword ptr [EDX + 0xf4]; [STIndirectCallsiteApplier] exact slot 0xF4; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject;/undefined4 */
                           (dVar9 = (*pSVar11->vtable[5].slots_00_28[1])
                                              (pSVar11,(int)local_8->field_0024), dVar9 == 1)) {
                          local_18 = dVar9;

                          Library::DKW::TBL::DArrayAppend(pSVar12->field_020E,&local_2c);
                        }
                        sVar5 = (short)local_c;
                        goto LAB_0049af27;
                      }
                    }
                  }
                  local_10 = local_10 + 1;
                  iVar10 = (short)local_10;
                  pSVar12 = local_8;
                } while (iVar10 < (int)local_8->field_00F7 + (int)local_8->field_00FD);
              }
              local_14 = local_14 + 1;
              iVar10 = (short)local_14;
            } while (iVar10 < (int)pSVar12->field_00FB + (int)pSVar12->field_00F5);
          }
          local_c = local_c + 1;
          iVar10 = (short)local_c;
        } while (iVar10 < (int)pSVar12->field_00F3 + (int)pSVar12->field_00F9);
      }
      if (local_18 == 0) {
        DArrayDestroy(pSVar12->field_020E);
        pSVar12->field_020E = nullptr;
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x6ce);
      }
    }
    pSVar12->field_020A = pSVar12->field_00EB;
    pSVar15 = local_8;
    if (pSVar12->field_00EB == 1) {
      sVar5 = 0;
      dVar9 = local_8->field_020E->count;
      if (0 < (int)dVar9) {
        do {

          DArrayGetElement(local_8->field_020E,(int)sVar5,&local_2c);
          if ((cStack_2b != '\x01') ||
             /* ST_CALLSITE[0049B1B9]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
             (pSVar7 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,local_2c,uStack_2a,CASE_1),
             pSVar7->field_0020 != 0x14)) {

            DArrayRemoveAt(local_8->field_020E,(int)sVar5);
            dVar9 = dVar9 - 1;
            sVar5 = sVar5 + -1;
          }
          sVar5 = sVar5 + 1;
        } while ((int)sVar5 < (int)dVar9);
      }
      pSVar15 = local_8;
      if (local_8->field_020E->count == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x6e3);
      }
    }
    /* ST_CALLSITE[0049B20B]: CALL 0x00402603; direct=00402603 STGroupBoatC::MakePVec */
    MakePVec(pSVar15);
    /* ST_CALLSITE[0049B216]: CALL 0x00405146; direct=00405146 STGroupBoatC::DistributeTargets */
    DistributeTargets(pSVar15,&pSVar15->field_0029->flags);
    pSVar12 = local_8;
  }
  if ((param_1 == 2) && (pSVar12->field_0212 == 0)) {
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  g_currentExceptionFrame = local_70.previous;
  return local_24;
}

