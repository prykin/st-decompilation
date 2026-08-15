#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpAttack

   [STSwitchEnumApplier] Switch target field_0020 uses
   /SubmarineTitans/Recovered/Enums/STGroupBoatC_field_0020State. Cases:
   CASE_0=0;CASE_14=20;CASE_1AE=430 */

undefined4 __thiscall STGroupBoatC::GrpAttack(STGroupBoatC *this,int param_1)

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
  undefined4 uVar10;
  int iVar11;
  STWorldObject *pSVar12;
  STGroupBoatC *pSVar13;
  uint uVar15;
  STGroupBoatC *pSVar16;
  bool bVar17;
  InternalExceptionFrame local_70;
  byte local_2c;
  char cStack_2b;
  ushort uStack_2a;
  undefined4 local_24;
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
  pSVar13 = local_8;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_70.previous;
    if (iVar6 == -0x5001fff7) {
      return 0;
    }
    iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x701,0,iVar6,"%s",
                               "STGroupBoatC::GrpAttack");
    if (iVar9 == 0) {
      RaiseInternalException(iVar6,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x702);
      return 0xffffffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_1 == 1) {
    DArrayDestroy(local_8->field_020E);
    pSVar13->field_020E = nullptr;
    pSVar13->field_0212 = 0;
    FreeAndNull(&pSVar13->field_021E);
    param_1 = 0;
  }
  pSVar16 = local_8;
  if (param_1 == 0) {
    memset(&pSVar13->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    iVar11 = 0;
    pSVar13->field_0065 = 0;
    if (pSVar13->field_00E7 == 0) {
      local_18 = local_8->field_00EF->count;
      if (local_18 == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x68f);
      }
      if (pSVar16->field_020E != nullptr) {
        DArrayDestroy(pSVar16->field_020E);
        pSVar16->field_020E = nullptr;
        pSVar16->field_0212 = 0;
      }
      pDVar6 = Library::DKW::TBL::DArrayCreate(nullptr,0,4,1);
      sVar5 = 0;
      local_8->field_020E = pDVar6;
      pSVar13 = local_8;
      if (0 < (int)local_18) {
        uVar15 = 0;
        do {
          DArrayGetElement(pSVar13->field_00EF,uVar15,&local_2c);
          if ((local_2c < 8) &&
             ((((g_playSystem_00802A38 == nullptr ||
                (g_bulkInitializedRecords_008087C7[(char)local_2c].field_0022 < 8)) &&
               (pSVar7 = STAllPlayersC::GetObjPtr
                                   (g_allPlayers_007FA174,local_2c,uStack_2a,(int)cStack_2b),
               pSVar13 = local_8, pSVar7 != nullptr)) &&
              ((iVar11 = pSVar7->vfunc_F8(), pSVar13 = local_8, iVar11 == 1 &&
               (iVar11 = (*pSVar7->vtable->vfunc_F4)((int)local_8->field_0024), pSVar13 = local_8,
               iVar11 == 1)))))) {
            Library::DKW::TBL::DArrayPut(local_8->field_020E,uVar15,&local_2c);
            pSVar13 = local_8;
          }
          sVar5 = sVar5 + 1;
          uVar15 = (uint)sVar5;
        } while ((int)uVar15 < (int)local_18);
      }
      DArrayDestroy(pSVar13->field_00EF);
      pSVar13->field_00EF = nullptr;
      if (pSVar13->field_020E->count == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x69d);
      }
    }
    pSVar13 = local_8;
    if (local_8->field_00E7 == 1) {
      if (local_8->field_020E != nullptr) {
        DArrayDestroy(local_8->field_020E);
        pSVar13->field_020E = nullptr;
        pSVar13->field_0212 = 0;
      }
      pDVar6 = Library::DKW::TBL::DArrayCreate(nullptr,1,4,1);
      pSVar13->field_020E = pDVar6;
      local_c = STReplaceLowWord((uint32_t)(pDVar6), (uint16_t)(pSVar13->field_00F3));
      iVar11 = (int)pSVar13->field_00F3;
      local_18 = 0;
      if (iVar11 < pSVar13->field_00F9 + iVar11) {
        do {
          sVar5 = pSVar13->field_00F5;
          local_14 = STReplaceLowWord((uint32_t)(iVar11), (uint16_t)(sVar5));
          iVar11 = local_c;
          if ((int)sVar5 < (int)pSVar13->field_00FB + (int)sVar5) {
            do {
              local_10 = STReplaceLowWord((uint32_t)(iVar11), (uint16_t)(pSVar13->field_00F7));
              iVar11 = (int)pSVar13->field_00F7;
              if (iVar11 < pSVar13->field_00FD + iVar11) {
                do {
                  sVar5 = (short)local_c;
                  if (((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
                     ((sVar4 = (short)local_14, sVar4 < 0 ||
                      (((g_worldGrid.sizeY <= sVar4 || ((short)local_10 < 0)) ||
                       (g_worldGrid.sizeZ <= (short)local_10)))))) {
                    pSVar12 = nullptr;
                  }
                  else {
                    pSVar12 = STGridAt3D(g_worldGrid, sVar5, sVar4, iVar11).objects[0];
                  }
                  if ((pSVar12 == nullptr) ||
                     (((iVar8 = pSVar12->value_20, iVar8 != 0x14 && (iVar8 != 1000)) &&
                      (iVar8 != 0x3e9)))) {
LAB_0049af27:
                    pSVar13 = local_8;
                    if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
                        (sVar5 = (short)local_14, sVar5 < 0)) ||
                       (((g_worldGrid.sizeY <= sVar5 || ((short)local_10 < 0)) ||
                        (g_worldGrid.sizeZ <= (short)local_10)))) {
                      pSVar12 = nullptr;
                    }
                    else {
                      pSVar12 = STGridAt3D(g_worldGrid, local_c, sVar5, iVar11).objects[1];
                    }
                    if (((pSVar12 != nullptr) && (pSVar12->value_20 == 0x1ae)) &&
                       ((local_2c = *(byte *)&pSVar12[1].vtable, local_2c < 8 &&
                        ((g_playSystem_00802A38 == nullptr ||
                         (g_bulkInitializedRecords_008087C7[(char)local_2c].field_0022 < 8)))))) {
                      bVar1 = local_8->field_0024;
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      _local_20 = CONCAT31(uStack_1f,bVar1);
                      if (DAT_00808a8f == '\0') {
                        if (local_2c == bVar1) {
LAB_0049b073:
                          iVar11 = 0;
                        }
                        else {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          uVar15 = CONCAT11(cStack_2b,local_2c) & 0xff;
                          bVar2 = g_playerRelationMatrix[uVar15][bVar1];
                          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar15] == 0)) {
                            iVar11 = -2;
                          }
                          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][uVar15] == 0)) {
                            iVar11 = -1;
                          }
                          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar15] == 1)) {
                            iVar11 = 1;
                          }
                          else {
                            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][uVar15] != 1))
                            goto LAB_0049b073;
                            iVar11 = 2;
                          }
                        }
                        bVar17 = iVar11 < 0;
                      }
                      else {
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        bVar17 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                                 g_bulkInitializedRecords_008087C7
                                 [CONCAT11(cStack_2b,local_2c) & 0xff].field_0023;
                      }
                      if (bVar17) {
                        uStack_2a = *(ushort *)&pSVar12[1].field_0xe;
                        cStack_2b = '\x03';
                        iVar11 = (*pSVar12->vtable[5].slots_00_28[2])();
                        if ((iVar11 == 1) &&
                           (dVar9 = (*pSVar12->vtable[5].slots_00_28[1])((int)pSVar13->field_0024),
                           dVar9 == 1)) {
                          local_18 = dVar9;
                          Library::DKW::TBL::DArrayAppend(pSVar13->field_020E,&local_2c);
                        }
                      }
                    }
                  }
                  else {
                    local_2c = *(byte *)&pSVar12[1].vtable;
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
                          uVar15 = CONCAT11(cStack_2b,local_2c) & 0xff;
                          bVar2 = g_playerRelationMatrix[uVar15][bVar1];
                          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar15] == 0)) {
                            iVar8 = -2;
                          }
                          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][uVar15] == 0)) {
                            iVar8 = -1;
                          }
                          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar15] == 1)) {
                            iVar8 = 1;
                          }
                          else {
                            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][uVar15] != 1))
                            goto LAB_0049aec9;
                            iVar8 = 2;
                          }
                        }
                        bVar17 = iVar8 < 0;
                      }
                      else {
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        bVar17 = g_bulkInitializedRecords_008087C7[bVar1].field_0023 !=
                                 g_bulkInitializedRecords_008087C7
                                 [CONCAT11(cStack_2b,local_2c) & 0xff].field_0023;
                      }
                      if (bVar17) {
                        uStack_2a = *(ushort *)&pSVar12[1].field_0xe;
                        cStack_2b = '\x01';
                        iVar8 = (*pSVar12->vtable[5].slots_00_28[2])();
                        pSVar13 = local_8;
                        if ((iVar8 == 1) &&
                           (dVar9 = (*pSVar12->vtable[5].slots_00_28[1])((int)local_8->field_0024),
                           dVar9 == 1)) {
                          local_18 = dVar9;
                          Library::DKW::TBL::DArrayAppend(pSVar13->field_020E,&local_2c);
                        }
                        sVar5 = (short)local_c;
                        goto LAB_0049af27;
                      }
                    }
                  }
                  local_10 = local_10 + 1;
                  iVar11 = (int)(short)local_10;
                  pSVar13 = local_8;
                } while (iVar11 < (int)local_8->field_00F7 + (int)local_8->field_00FD);
              }
              local_14 = local_14 + 1;
              iVar11 = (int)(short)local_14;
            } while (iVar11 < (int)pSVar13->field_00FB + (int)pSVar13->field_00F5);
          }
          local_c = local_c + 1;
          iVar11 = (int)(short)local_c;
        } while (iVar11 < (int)pSVar13->field_00F3 + (int)pSVar13->field_00F9);
      }
      if (local_18 == 0) {
        DArrayDestroy(pSVar13->field_020E);
        pSVar13->field_020E = nullptr;
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x6ce);
      }
    }
    pSVar13->field_020A = pSVar13->field_00EB;
    pSVar16 = local_8;
    if (pSVar13->field_00EB == 1) {
      sVar5 = 0;
      dVar9 = local_8->field_020E->count;
      if (0 < (int)dVar9) {
        do {
          DArrayGetElement(local_8->field_020E,(int)sVar5,&local_2c);
          if ((cStack_2b != '\x01') ||
             (pSVar7 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,local_2c,uStack_2a,CASE_1),
             pSVar7->field_0020 != 0x14)) {
            DArrayRemoveAt(local_8->field_020E,(int)sVar5);
            dVar9 = dVar9 - 1;
            sVar5 = sVar5 + -1;
          }
          sVar5 = sVar5 + 1;
        } while ((int)sVar5 < (int)dVar9);
      }
      pSVar16 = local_8;
      if (local_8->field_020E->count == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x6e3);
      }
    }
    MakePVec(pSVar16);
    DistributeTargets(pSVar16,(uint *)pSVar16->field_0029);
    pSVar13 = local_8;
  }
  if ((param_1 == 2) && (pSVar13->field_0212 == 0)) {
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  g_currentExceptionFrame = local_70.previous;
  return local_24;
}

