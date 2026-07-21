#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpAttack */

undefined4 __thiscall STGroupBoatC::GrpAttack(STGroupBoatC *this,int param_1)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  DArrayTy *pDVar7;
  STGameObjC *pSVar8;
  int iVar9;
  undefined4 uVar10;
  STWorldObject *pSVar11;
  STGroupBoatC *pSVar12;
  uint uVar14;
  STGroupBoatC *pSVar15;
  bool bVar16;
  InternalExceptionFrame local_70;
  byte local_2c;
  char cStack_2b;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined4 local_24;
  byte local_20;
  undefined3 uStack_1f;
  byte local_1c;
  undefined3 uStack_1b;
  int local_18;
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
      return 0xffffffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_1 == 1) {
    DArrayDestroy((DArrayTy *)local_8->field_020E);
    pSVar12->field_020E = (uint *)0x0;
    pSVar12->field_0212 = 0;
    FreeAndNull(&pSVar12->field_021E);
    param_1 = 0;
  }
  pSVar15 = local_8;
  if (param_1 == 0) {
    memset(&pSVar12->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    iVar6 = 0;
    pSVar12->field_0065 = 0;
    if (pSVar12->field_00E7 == 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_18 = *(int *)(local_8->field_00EF + 0xc);
      if (local_18 == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x68f);
      }
      if ((DArrayTy *)pSVar15->field_020E != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)pSVar15->field_020E);
        pSVar15->field_020E = (uint *)0x0;
        pSVar15->field_0212 = 0;
      }
      pDVar7 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0,4,1);
      sVar5 = 0;
      local_8->field_020E = &pDVar7->flags;
      pSVar12 = local_8;
      if (0 < local_18) {
        uVar14 = 0;
        do {
          DArrayGetElement((DArrayTy *)pSVar12->field_00EF,uVar14,&local_2c);
          /* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable/callback call with explicit __thiscall receiver; expected named packed member, bit extract/compose, or unaligned load */
          if ((local_2c < 8) &&
             ((((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                ((byte)(&DAT_008087e9)[(char)local_2c * 0x51] < 8)) &&
               (pSVar8 = STAllPlayersC::GetObjPtr
                                   (g_sTAllPlayers_007FA174,local_2c,CONCAT22(uStack_28,uStack_2a),
                                    (int)cStack_2b), pSVar12 = local_8, pSVar8 != (STGameObjC *)0x0)
               ) && ((iVar6 = (**(code **)&pSVar8->vtable[1].field_0x28)(), pSVar12 = local_8,
                     iVar6 == 1 &&
                     (iVar6 = (**(code **)&pSVar8->vtable[1].field_0x24)((int)local_8->field_0024),
                     pSVar12 = local_8, iVar6 == 1)))))) {
            Library::DKW::TBL::FUN_006ae140(local_8->field_020E,uVar14,(undefined4 *)&local_2c);
            pSVar12 = local_8;
          }
          sVar5 = sVar5 + 1;
          uVar14 = (uint)sVar5;
        } while ((int)uVar14 < local_18);
      }
      DArrayDestroy((DArrayTy *)pSVar12->field_00EF);
      pSVar12->field_00EF = 0;
      if (pSVar12->field_020E[3] == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x69d);
      }
    }
    pSVar12 = local_8;
    if (local_8->field_00E7 == 1) {
      if ((DArrayTy *)local_8->field_020E != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)local_8->field_020E);
        pSVar12->field_020E = (uint *)0x0;
        pSVar12->field_0212 = 0;
      }
      pDVar7 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,4,1);
      pSVar12->field_020E = &pDVar7->flags;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_c = CONCAT22((short)((uint)pDVar7 >> 0x10),pSVar12->field_00F3);
      iVar6 = (int)pSVar12->field_00F3;
      local_18 = 0;
      if (iVar6 < pSVar12->field_00F9 + iVar6) {
        do {
          sVar5 = pSVar12->field_00F5;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_14 = CONCAT22((short)((uint)iVar6 >> 0x10),sVar5);
          iVar6 = local_c;
          if ((int)sVar5 < (int)pSVar12->field_00FB + (int)sVar5) {
            do {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_10 = CONCAT22((short)((uint)iVar6 >> 0x10),pSVar12->field_00F7);
              iVar6 = (int)pSVar12->field_00F7;
              if (iVar6 < pSVar12->field_00FD + iVar6) {
                do {
                  sVar5 = (short)local_c;
                  if (((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
                     ((sVar4 = (short)local_14, sVar4 < 0 ||
                      (((g_worldGrid.sizeY <= sVar4 || ((short)local_10 < 0)) ||
                       (g_worldGrid.sizeZ <= (short)local_10)))))) {
                    pSVar11 = (STWorldObject *)0x0;
                  }
                  else {
                    pSVar11 = g_worldGrid.cells
                              [(int)g_worldGrid.sizeX * (int)sVar4 +
                               (int)sVar5 + g_worldGrid.planeStride * iVar6].objects[0];
                  }
                  if ((pSVar11 == (STWorldObject *)0x0) ||
                     (((iVar9 = pSVar11->value_20, iVar9 != 0x14 && (iVar9 != 1000)) &&
                      (iVar9 != 0x3e9)))) {
LAB_0049af27:
                    pSVar12 = local_8;
                    if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
                        (sVar5 = (short)local_14, sVar5 < 0)) ||
                       (((g_worldGrid.sizeY <= sVar5 || ((short)local_10 < 0)) ||
                        (g_worldGrid.sizeZ <= (short)local_10)))) {
                      pSVar11 = (STWorldObject *)0x0;
                    }
                    else {
                      pSVar11 = g_worldGrid.cells
                                [(int)g_worldGrid.sizeX * (int)sVar5 +
                                 (int)(short)local_c + g_worldGrid.planeStride * iVar6].objects[1];
                    }
                    if (((pSVar11 != (STWorldObject *)0x0) && (pSVar11->value_20 == 0x1ae)) &&
                       ((local_2c = *(byte *)&pSVar11[1].vtable, local_2c < 8 &&
                        ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                         ((byte)(&DAT_008087e9)[(char)local_2c * 0x51] < 8)))))) {
                      bVar1 = local_8->field_0024;
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      _local_20 = CONCAT31(uStack_1f,bVar1);
                      if (DAT_00808a8f == '\0') {
                        if (local_2c == bVar1) {
LAB_0049b073:
                          iVar6 = 0;
                        }
                        else {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          uVar14 = CONCAT11(cStack_2b,local_2c) & 0xff;
                          bVar2 = g_playerRelationMatrix[uVar14][bVar1];
                          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar14] == 0)) {
                            iVar6 = -2;
                          }
                          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][uVar14] == 0)) {
                            iVar6 = -1;
                          }
                          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar14] == 1)) {
                            iVar6 = 1;
                          }
                          else {
                            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][uVar14] != 1))
                            goto LAB_0049b073;
                            iVar6 = 2;
                          }
                        }
                        bVar16 = iVar6 < 0;
                      }
                      else {
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        bVar16 = (&DAT_008087ea)[(uint)bVar1 * 0x51] !=
                                 (&DAT_008087ea)[(CONCAT11(cStack_2b,local_2c) & 0xff) * 0x51];
                      }
                      if (bVar16) {
                        uStack_2a = *(undefined2 *)&pSVar11[1].field_0xe;
                        cStack_2b = '\x03';
                        iVar6 = (*pSVar11->vtable[5].slots_00_28[2])();
                        if ((iVar6 == 1) &&
                           (iVar6 = (*pSVar11->vtable[5].slots_00_28[1])((int)pSVar12->field_0024),
                           iVar6 == 1)) {
                          local_18 = iVar6;
                          Library::DKW::TBL::FUN_006ae1c0
                                    (pSVar12->field_020E,(undefined4 *)&local_2c);
                        }
                      }
                    }
                  }
                  else {
                    local_2c = *(byte *)&pSVar11[1].vtable;
                    if ((local_2c < 8) &&
                       ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                        ((byte)(&DAT_008087e9)[(char)local_2c * 0x51] < 8)))) {
                      bVar1 = local_8->field_0024;
                      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                      _local_1c = CONCAT31(uStack_1b,bVar1);
                      if (DAT_00808a8f == '\0') {
                        if (local_2c == bVar1) {
LAB_0049aec9:
                          iVar9 = 0;
                        }
                        else {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          uVar14 = CONCAT11(cStack_2b,local_2c) & 0xff;
                          bVar2 = g_playerRelationMatrix[uVar14][bVar1];
                          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar14] == 0)) {
                            iVar9 = -2;
                          }
                          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][uVar14] == 0)) {
                            iVar9 = -1;
                          }
                          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][uVar14] == 1)) {
                            iVar9 = 1;
                          }
                          else {
                            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][uVar14] != 1))
                            goto LAB_0049aec9;
                            iVar9 = 2;
                          }
                        }
                        bVar16 = iVar9 < 0;
                      }
                      else {
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        bVar16 = (&DAT_008087ea)[(uint)bVar1 * 0x51] !=
                                 (&DAT_008087ea)[(CONCAT11(cStack_2b,local_2c) & 0xff) * 0x51];
                      }
                      if (bVar16) {
                        uStack_2a = *(undefined2 *)&pSVar11[1].field_0xe;
                        cStack_2b = '\x01';
                        iVar9 = (*pSVar11->vtable[5].slots_00_28[2])();
                        pSVar12 = local_8;
                        if ((iVar9 == 1) &&
                           (iVar9 = (*pSVar11->vtable[5].slots_00_28[1])((int)local_8->field_0024),
                           iVar9 == 1)) {
                          local_18 = iVar9;
                          Library::DKW::TBL::FUN_006ae1c0
                                    (pSVar12->field_020E,(undefined4 *)&local_2c);
                        }
                        sVar5 = (short)local_c;
                        goto LAB_0049af27;
                      }
                    }
                  }
                  local_10 = local_10 + 1;
                  iVar6 = (int)(short)local_10;
                  pSVar12 = local_8;
                } while (iVar6 < (int)local_8->field_00F7 + (int)local_8->field_00FD);
              }
              local_14 = local_14 + 1;
              iVar6 = (int)(short)local_14;
            } while (iVar6 < (int)pSVar12->field_00FB + (int)pSVar12->field_00F5);
          }
          local_c = local_c + 1;
          iVar6 = (int)(short)local_c;
        } while (iVar6 < (int)pSVar12->field_00F3 + (int)pSVar12->field_00F9);
      }
      if (local_18 == 0) {
        DArrayDestroy((DArrayTy *)pSVar12->field_020E);
        pSVar12->field_020E = (uint *)0x0;
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x6ce);
      }
    }
    pSVar12->field_020A = pSVar12->field_00EB;
    pSVar15 = local_8;
    if (pSVar12->field_00EB == 1) {
      sVar5 = 0;
      uVar14 = local_8->field_020E[3];
      if (0 < (int)uVar14) {
        do {
          DArrayGetElement((DArrayTy *)local_8->field_020E,(int)sVar5,&local_2c);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if ((cStack_2b != '\x01') ||
             (pSVar8 = STAllPlayersC::GetObjPtr
                                 (g_sTAllPlayers_007FA174,local_2c,CONCAT22(uStack_28,uStack_2a),
                                  CASE_1), pSVar8->field_0020 != 0x14)) {
            FUN_006b0c70((DArrayTy *)local_8->field_020E,(int)sVar5);
            uVar14 = uVar14 - 1;
            sVar5 = sVar5 + -1;
          }
          sVar5 = sVar5 + 1;
        } while ((int)sVar5 < (int)uVar14);
      }
      pSVar15 = local_8;
      if (local_8->field_020E[3] == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x6e3);
      }
    }
    MakePVec(pSVar15);
    DistributeTargets(pSVar15,(uint *)pSVar15->field_0029);
    pSVar12 = local_8;
  }
  if ((param_1 == 2) && (pSVar12->field_0212 == 0)) {
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  g_currentExceptionFrame = local_70.previous;
  return local_24;
}

