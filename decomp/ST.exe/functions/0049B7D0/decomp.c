#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpPatrol

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

uint __thiscall STGroupBoatC::GrpPatrol(STGroupBoatC *this,int param_1)

{
  byte bVar2;
  int iVar4;
  short *psVar6;
  STGameObjC *pSVar7;
  DArrayTy *pDVar8;
  DArrayTy *pDVar9;
  STBoatC *this_00;
  int iVar3;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  short *psVar14;
  Global_sub_006C8EC0_param_3Enum GVar15;
  int iVar17;
  short *psVar18;
  undefined4 local_6c;
  undefined4 local_68 [3];
  undefined4 local_5a;
  short local_54;
  short local_52;
  short local_50;
  uint local_44;
  uint local_40;
  short local_3c;
  short local_3a;
  short local_38;
  AnonShape_00413AF0_B6B4EE9A *local_34;
  DArrayTy *local_30;
  uint local_2c;
  uint local_28;
  short *local_24;
  Global_sub_006C8EC0_param_3Enum local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  short *psVar5;
  short *psVar4;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_1c = *(int *)(this->field_0029 + 0xc);
  if ((param_1 != 0) && (param_1 != 1)) {
    if (0 < this->field_023E) {
      this->field_023E = this->field_023E + 1;
    }
    iVar4 = sub_004A7E30(this,0);
    return -(uint)(iVar4 != 2) & 2;
  }
  memset(&this->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
  this->field_0065 = 0;
  if (this->field_0226 != nullptr) {
    DArrayDestroy(this->field_0226);
    this->field_0226 = nullptr;
  }
  if (this->field_022A != nullptr) {
    DArrayDestroy(this->field_022A);
    this->field_022A = nullptr;
  }
  if (this->field_022E != nullptr) {
    DArrayDestroy(this->field_022E);
    this->field_022E = nullptr;
  }
  this->field_0232 = -1;
  this->field_0236 = 1;
  this->field_023E = 0;
  this->field_023A = 0;
  this->field_0242 = 0;
  this->field_0246 = this->field_0107;
  local_2c = this->field_0103->count;
  local_28 = local_2c;
  if ((int)local_2c < 1) {
    DArrayDestroy(this->field_0103);
    this->field_0103 = nullptr;
    return 0;
  }
  uVar13 = 0;
  iVar4 = -30000;
  local_30 = nullptr;
  local_c = 30000;
  local_8 = 30000;
  local_24 = (short *)0xffff8ad0;
  if (0 < (int)local_2c) {
    do {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      if ((uVar13 < local_2c) &&
         (psVar6 = (short *)(this->field_0103->elementSize * uVar13 + (int)this->field_0103->data),
         psVar6 != nullptr)) {
        iVar10 = (int)*psVar6;
        if (iVar10 < local_c) {
          local_c = iVar10;
        }
        if ((int)local_24 < iVar10) {
          local_24 = (short *)iVar10;
        }
        iVar10 = (int)psVar6[1];
        if (iVar10 < local_8) {
          local_8 = iVar10;
        }
        if (iVar4 < iVar10) {
          iVar4 = iVar10;
        }
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)local_2c);
  }
  local_20 = 0;
  if (0 < local_1c) {
    do {
      DArrayGetElement((DArrayTy *)this->field_0029,local_20,&local_18);
      if ((ushort)local_18 != 0xffff) {
        pSVar7 = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,this->field_0024,(ushort)local_18,CASE_1);
        if (pSVar7 == nullptr) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0x77d);
        }
        STFishC::sub_004162F0
                  ((STFishC *)pSVar7,(short *)((int)&param_1 + 2),(short *)&local_10,
                   (short *)&local_14);
        iVar10 = (int)STPiece<2,2>(param_1);
        if (iVar10 < local_c) {
          local_c = iVar10;
        }
        if ((int)local_24 < iVar10) {
          local_24 = (short *)iVar10;
        }
        iVar10 = (int)(short)local_10;
        if (iVar10 < local_8) {
          local_8 = iVar10;
        }
        if (iVar4 < iVar10) {
          iVar4 = iVar10;
        }
      }
      local_20 = local_20 + 1;
    } while ((int)local_20 < local_1c);
  }
  local_c = local_c + -10;
  if (local_c < 0) {
    local_c = 0;
  }
  iVar10 = local_c;
  local_8 = local_8 + -10;
  if (local_8 < 0) {
    local_8 = 0;
  }
  iVar17 = (int)g_pathingGrid.sizeX;
  iVar11 = (int)local_24 + 10;
  if (iVar17 <= iVar11) {
    iVar11 = iVar17 + -1;
  }
  iVar4 = iVar4 + 10;
  if (g_pathingGrid.sizeY <= iVar4) {
    iVar4 = g_pathingGrid.sizeY + -1;
  }
  local_2c = (iVar11 - local_c) + 1;
  local_20 = (iVar4 - local_8) + CASE_1;
  int scalar_local_34 = local_20 * local_2c; /* split integer lifetime from pointer-typed SSA storage */
  local_14 = 0;
  do {
    local_10 = 0;
    psVar6 = g_pathingGrid.cells +
             iVar17 * local_8 + local_c + (int)g_pathingGrid.planeStride * (int)(short)local_14;
    local_24 = g_pathingScratchGrid.cells + (int)(short)local_14 * scalar_local_34;
    if (0 < (int)local_20) {
      do {
        psVar14 = psVar6;
        psVar18 = local_24;
        for (uVar13 = (local_2c & 0x7fffffff) >> 1; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)psVar18 = *(undefined4 *)psVar14;
          psVar14 = psVar14 + 2;
          psVar18 = psVar18 + 2;
        }
        for (uVar13 = local_2c * 2 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(char *)psVar18 = (char)*psVar14;
          psVar14 = (short *)((int)psVar14 + 1);
          psVar18 = (short *)((int)psVar18 + 1);
        }
        local_10 = local_10 + 1;
        iVar17 = (int)g_pathingGrid.sizeX;
        local_24 = local_24 + local_2c;
        psVar6 = psVar6 + iVar17;
      } while ((int)(short)local_10 < (int)local_20);
    }
    local_14 = local_14 + 1;
  } while ((short)local_14 < 5);
  if (this->field_0103->count == 0) {
    psVar6 = nullptr;
  }
  else {
    psVar6 = this->field_0103->data;
  }
  FUN_006ab090((int)g_pathingScratchGrid.cells,local_2c,local_20,5,*psVar6 - local_c,
               psVar6[1] - local_8,(int)psVar6[2],-1,-1,-1);
  uVar13 = 1;
  if (1 < (int)local_28) {
    local_34 = (AnonShape_00413AF0_B6B4EE9A *)this->field_0103;
    local_2c = ((DArrayTy *)local_34)->count;
    do {
      if (uVar13 < local_2c) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        psVar6 = (short *)(((DArrayTy *)local_34)->elementSize * uVar13 +
                          (int)((DArrayTy *)local_34)->data);
      }
      else {
        psVar6 = nullptr;
      }
      iVar10 = local_c;
      if (g_pathingScratchGrid.cells
          [((psVar6[1] - local_8) * (int)g_pathingGrid.sizeX +
            (int)psVar6[2] * (int)g_pathingGrid.planeStride + (int)*psVar6) - local_c] < 1) {
        local_30 = (DArrayTy *)0x1;
        break;
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)local_28);
  }
  local_20 = 0;
  if (0 < local_1c) {
    do {
      GVar15 = local_20;
      DArrayGetElement((DArrayTy *)this->field_0029,local_20,&local_18);
      if ((ushort)local_18 != 0xffff) {
        pSVar7 = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,this->field_0024,(ushort)local_18,CASE_1);
        if (pSVar7 == nullptr) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0x7a7);
        }
        STFishC::sub_004162F0
                  ((STFishC *)pSVar7,(short *)((int)&param_1 + 2),(short *)&local_10,
                   (short *)&local_14);
        GVar15 = local_20;
        if (g_pathingScratchGrid.cells
            [(((short)local_10 - local_8) * (int)g_pathingGrid.sizeX +
              (int)g_pathingGrid.planeStride * (int)(short)local_14 + (int)STPiece<2,2>(param_1)) - iVar10]
            == 0) goto joined_r0x0049bc58;
      }
      local_20 = GVar15 + 1;
    } while ((int)local_20 < local_1c);
  }
  if (local_30 != nullptr) {
joined_r0x0049bc58:
    local_28 = local_28 - 1;
    if (-1 < (int)local_28) {
      DArrayGetElement(this->field_0103,local_28,&local_3c);
      uVar13 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
      psVar4 = g_pathingGrid.cells;
      psVar5 = g_pathingScratchGrid.cells;
      for (uVar12 = (uVar13 & 0x7fffffff) >> 1; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)psVar5 = *(undefined4 *)psVar4;
        psVar4 = psVar4 + 2;
        psVar5 = psVar5 + 2;
      }
      for (uVar13 = uVar13 * 2 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(char *)psVar5 = (char)*psVar4;
        psVar4 = (short *)((int)psVar4 + 1);
        psVar5 = (short *)((int)psVar5 + 1);
      }
      FUN_006ab090((int)g_pathingScratchGrid.cells,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY
                   ,(int)g_pathingGrid.sizeZ,(int)local_3c,(int)local_3a,(int)local_38,-1,-1,-1);
      uVar13 = 0;
      if (0 < local_1c) {
        do {
          DArrayGetElement((DArrayTy *)this->field_0029,uVar13,&local_18);
          if ((ushort)local_18 != 0xffff) {
            pSVar7 = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,this->field_0024,(ushort)local_18,CASE_1);
            if (pSVar7 == nullptr) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0x7bd);
            }
            STFishC::sub_004162F0
                      ((STFishC *)pSVar7,(short *)((int)&param_1 + 2),(short *)&local_10,
                       (short *)&local_14);
            if (g_pathingScratchGrid.cells
                [(int)g_pathingGrid.planeStride * (int)(short)local_14 +
                 (int)g_pathingGrid.sizeX * (int)(short)local_10 + (int)STPiece<2,2>(param_1)] == 0) {
              DArrayRemoveAt(this->field_0103,local_28);
              break;
            }
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < local_1c);
      }
      goto joined_r0x0049bc58;
    }
    if (this->field_0103->count == 0) {
      DArrayDestroy(this->field_0103);
      this->field_0103 = nullptr;
      return 0;
    }
  }
  pDVar8 = Library::DKW::TBL::DArrayCreate(nullptr,this->field_0103->count,6,1);
  pDVar9 = this->field_0103;
  this->field_0226 = pDVar8;
  uVar13 = 0;
  if (0 < (int)pDVar9->count) {
    do {
      DArrayGetElement(pDVar9,uVar13,&local_3c);
      Library::DKW::TBL::DArrayPut(this->field_0226,uVar13,&local_3c);
      pDVar9 = this->field_0103;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)pDVar9->count);
  }
  DArrayDestroy(this->field_0103);
  this->field_0103 = nullptr;
  ReMakePatrolPoints(this);
  pDVar9 = Library::DKW::TBL::DArrayCreate(nullptr,(uint)(ushort)this->field_0027,0x16,1);
  this->field_022E = pDVar9;
  uVar13 = 0;
  local_6c = 0;
  local_5a = 0;
  if (0 < local_1c) {
    do {
      DArrayGetElement((DArrayTy *)this->field_0029,uVar13,&local_18);
      if ((short)local_18 != -1) {
        local_68[0] = STReplaceLowWord((uint32_t)(local_68[0]), (uint16_t)((short)local_18));
        Library::DKW::TBL::DArrayAppend(this->field_022E,&local_6c);
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < local_1c);
  }
  bVar2 = thunk_FUN_00430750(CASE_8);
  this->field_023A = ((this->field_0242 * 0xc9) / (int)(uint)bVar2) / 3;
  local_30 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
  uVar13 = 0;
  local_44 = g_playSystem_00802A38->field_00E4;
  pDVar9 = this->field_022E;
  if (0 < (int)pDVar9->count) {
    do {
      DArrayGetElement(pDVar9,uVar13,&local_6c);
      if ((ushort)local_68[0] != 0xffff) {
        this_00 = (STBoatC *)
                  STAllPlayersC::GetObjPtr
                            (g_allPlayers_007FA174,this->field_0024,(ushort)local_68[0],CASE_1);
        if (this_00 == nullptr) {
          iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x7ed,0,0,"%s"
                                     ,"STGroupBoatC::GrpPatrol NULL value");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0x7ee);
        }
        Library::DKW::TBL::DArrayAppend(local_30,local_68);
        local_40 = uVar13;
        STBoatC::CmdToObj(this_00,CASE_6,&local_44);
      }
      pDVar9 = this->field_022E;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)pDVar9->count);
  }
  pDVar9 = local_30;
  DArrayGetElement(this->field_022A,this->field_0232,&local_54);
  InitWay(this,pDVar9,(int)local_54,(int)local_52,(int)local_50);
  DArrayDestroy(pDVar9);
  return 2;
}

