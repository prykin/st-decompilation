#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpPatrol

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

uint __thiscall STGroupBoatC::GrpPatrol(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  short *psVar4;
  STGameObjC *pSVar5;
  uint *puVar6;
  AnonPointee_STGroupBoatC_022E *pAVar7;
  STBoatC *this_00;
  int iVar8;
  int iVar9;
  uint uVar10;
  DArrayTy *pDVar11;
  uint uVar12;
  short *psVar13;
  Global_sub_006C8EC0_param_3Enum GVar14;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  undefined4 *puVar15;
  int iVar16;
  short *psVar17;
  undefined4 local_6c;
  uint local_68 [3];
  undefined4 local_5a;
  short local_54;
  short local_52;
  short local_50;
  undefined4 local_44;
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
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_1c = *(int *)(this->field_0029 + 0xc);
  if ((param_1 != 0) && (param_1 != 1)) {
    if (0 < (int)this->field_023E) {
      this->field_023E = this->field_023E + 1;
    }
    iVar3 = sub_004A7E30(this,0);
    return -(uint)(iVar3 != 2) & 2;
  }
  puVar15 = (undefined4 *)&this->field_0x89;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  this->field_0065 = 0;
  if ((DArrayTy *)this->field_0226 != (DArrayTy *)0x0) {
    DArrayDestroy((DArrayTy *)this->field_0226);
    this->field_0226 = 0;
  }
  if ((DArrayTy *)this->field_022A != (DArrayTy *)0x0) {
    DArrayDestroy((DArrayTy *)this->field_022A);
    this->field_022A = 0;
  }
  if ((DArrayTy *)this->field_022E != (DArrayTy *)0x0) {
    DArrayDestroy((DArrayTy *)this->field_022E);
    this->field_022E = (AnonPointee_STGroupBoatC_022E *)0x0;
  }
  this->field_0232 = 0xffffffff;
  this->field_0236 = 1;
  this->field_023E = 0;
  this->field_023A = 0;
  this->field_0242 = 0;
  this->field_0246 = this->field_0107;
  local_2c = ((DArrayTy *)this->field_0103)->count;
  local_28 = local_2c;
  if ((int)local_2c < 1) {
    DArrayDestroy((DArrayTy *)this->field_0103);
    this->field_0103 = 0;
    return 0;
  }
  uVar12 = 0;
  iVar3 = -30000;
  local_30 = (DArrayTy *)0x0;
  local_c = 30000;
  local_8 = 30000;
  local_24 = (short *)0xffff8ad0;
  if (0 < (int)local_2c) {
    do {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((uVar12 < local_2c) &&
         (psVar4 = (short *)(*(int *)(this->field_0103 + 8) * uVar12 +
                            *(int *)(this->field_0103 + 0x1c)), psVar4 != (short *)0x0)) {
        iVar8 = (int)*psVar4;
        if (iVar8 < local_c) {
          local_c = iVar8;
        }
        if ((int)local_24 < iVar8) {
          local_24 = (short *)iVar8;
        }
        iVar8 = (int)psVar4[1];
        if (iVar8 < local_8) {
          local_8 = iVar8;
        }
        if (iVar3 < iVar8) {
          iVar3 = iVar8;
        }
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)local_2c);
  }
  local_20 = 0;
  if (0 < local_1c) {
    do {
      DArrayGetElement((DArrayTy *)this->field_0029,local_20,&local_18);
      if ((short)local_18 != -1) {
        pSVar5 = STAllPlayersC::GetObjPtr(g_sTAllPlayers_007FA174,this->field_0024,local_18,CASE_1);
        if (pSVar5 == (STGameObjC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c
                     ,0x77d);
        }
        thunk_FUN_004162f0(pSVar5,(undefined2 *)((int)&param_1 + 2),(undefined2 *)&local_10,
                           (undefined2 *)&local_14);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        iVar8 = (int)param_1._2_2_;
        if (iVar8 < local_c) {
          local_c = iVar8;
        }
        if ((int)local_24 < iVar8) {
          local_24 = (short *)iVar8;
        }
        iVar8 = (int)(short)local_10;
        if (iVar8 < local_8) {
          local_8 = iVar8;
        }
        if (iVar3 < iVar8) {
          iVar3 = iVar8;
        }
      }
      local_20 = local_20 + 1;
    } while ((int)local_20 < local_1c);
  }
  local_c = local_c + -10;
  if (local_c < 0) {
    local_c = 0;
  }
  iVar8 = local_c;
  local_8 = local_8 + -10;
  if (local_8 < 0) {
    local_8 = 0;
  }
  iVar16 = (int)g_pathingGrid.sizeX;
  iVar9 = (int)local_24 + 10;
  if (iVar16 <= iVar9) {
    iVar9 = iVar16 + -1;
  }
  iVar3 = iVar3 + 10;
  if (g_pathingGrid.sizeY <= iVar3) {
    iVar3 = g_pathingGrid.sizeY + -1;
  }
  local_2c = (iVar9 - local_c) + 1;
  local_20 = (iVar3 - local_8) + CASE_1;
  local_34 = (AnonShape_00413AF0_B6B4EE9A *)(local_20 * local_2c);
  local_14 = 0;
  do {
    local_10 = 0;
    psVar4 = g_pathingGrid.cells +
             iVar16 * local_8 + local_c + (int)g_pathingGrid.planeStride * (int)(short)local_14;
    local_24 = g_pathingScratchGrid.cells + (int)(short)local_14 * (int)local_34;
    if (0 < (int)local_20) {
      do {
        psVar13 = psVar4;
        psVar17 = local_24;
        for (uVar12 = (local_2c & 0x7fffffff) >> 1; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)psVar17 = *(undefined4 *)psVar13;
          psVar13 = psVar13 + 2;
          psVar17 = psVar17 + 2;
        }
        for (uVar12 = local_2c * 2 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(char *)psVar17 = (char)*psVar13;
          psVar13 = (short *)((int)psVar13 + 1);
          psVar17 = (short *)((int)psVar17 + 1);
        }
        local_10 = local_10 + 1;
        iVar16 = (int)g_pathingGrid.sizeX;
        local_24 = local_24 + local_2c;
        psVar4 = psVar4 + iVar16;
      } while ((int)(short)local_10 < (int)local_20);
    }
    local_14 = local_14 + 1;
  } while ((short)local_14 < 5);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(this->field_0103 + 0xc) == 0) {
    psVar4 = (short *)0x0;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    psVar4 = *(short **)(this->field_0103 + 0x1c);
  }
  FUN_006ab090((int)g_pathingScratchGrid.cells,local_2c,local_20,5,*psVar4 - local_c,
               psVar4[1] - local_8,(int)psVar4[2],-1,-1,-1);
  uVar12 = 1;
  if (1 < (int)local_28) {
    local_34 = (AnonShape_00413AF0_B6B4EE9A *)this->field_0103;
    local_2c = local_34->field_000C;
    do {
      if (uVar12 < local_2c) {
        psVar4 = (short *)(local_34->field_0008 * uVar12 + local_34->field_001C);
      }
      else {
        psVar4 = (short *)0x0;
      }
      iVar8 = local_c;
      if (g_pathingScratchGrid.cells
          [((psVar4[1] - local_8) * (int)g_pathingGrid.sizeX +
            (int)psVar4[2] * (int)g_pathingGrid.planeStride + (int)*psVar4) - local_c] < 1) {
        local_30 = (DArrayTy *)0x1;
        break;
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)local_28);
  }
  local_20 = 0;
  if (0 < local_1c) {
    do {
      GVar14 = local_20;
      DArrayGetElement((DArrayTy *)this->field_0029,local_20,&local_18);
      if ((short)local_18 != -1) {
        pSVar5 = STAllPlayersC::GetObjPtr(g_sTAllPlayers_007FA174,this->field_0024,local_18,CASE_1);
        if (pSVar5 == (STGameObjC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c
                     ,0x7a7);
        }
        thunk_FUN_004162f0(pSVar5,(undefined2 *)((int)&param_1 + 2),(undefined2 *)&local_10,
                           (undefined2 *)&local_14);
        GVar14 = local_20;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        if (g_pathingScratchGrid.cells
            [(((short)local_10 - local_8) * (int)g_pathingGrid.sizeX +
              (int)g_pathingGrid.planeStride * (int)(short)local_14 + (int)param_1._2_2_) - iVar8]
            == 0) goto joined_r0x0049bc58;
      }
      local_20 = GVar14 + 1;
    } while ((int)local_20 < local_1c);
  }
  if (local_30 != (DArrayTy *)0x0) {
joined_r0x0049bc58:
    local_28 = local_28 - 1;
    if (-1 < (int)local_28) {
      DArrayGetElement((DArrayTy *)this->field_0103,local_28,&local_3c);
      uVar12 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
      psVar4 = g_pathingGrid.cells;
      psVar13 = g_pathingScratchGrid.cells;
      for (uVar10 = (uVar12 & 0x7fffffff) >> 1; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)psVar13 = *(undefined4 *)psVar4;
        psVar4 = psVar4 + 2;
        psVar13 = psVar13 + 2;
      }
      for (uVar12 = uVar12 * 2 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(char *)psVar13 = (char)*psVar4;
        psVar4 = (short *)((int)psVar4 + 1);
        psVar13 = (short *)((int)psVar13 + 1);
      }
      FUN_006ab090((int)g_pathingScratchGrid.cells,(int)g_pathingGrid.sizeX,(int)g_pathingGrid.sizeY
                   ,(int)g_pathingGrid.sizeZ,(int)local_3c,(int)local_3a,(int)local_38,-1,-1,-1);
      uVar12 = 0;
      if (0 < local_1c) {
        do {
          DArrayGetElement((DArrayTy *)this->field_0029,uVar12,&local_18);
          if ((short)local_18 != -1) {
            pSVar5 = STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,this->field_0024,local_18,CASE_1);
            if (pSVar5 == (STGameObjC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         s_E____titans_wlad_to_grpb_cpp_007abe3c,0x7bd);
            }
            thunk_FUN_004162f0(pSVar5,(undefined2 *)((int)&param_1 + 2),(undefined2 *)&local_10,
                               (undefined2 *)&local_14);
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            if (g_pathingScratchGrid.cells
                [(int)g_pathingGrid.planeStride * (int)(short)local_14 +
                 (int)g_pathingGrid.sizeX * (int)(short)local_10 + (int)param_1._2_2_] == 0) {
              FUN_006b0c70((DArrayTy *)this->field_0103,local_28);
              break;
            }
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < local_1c);
      }
      goto joined_r0x0049bc58;
    }
    if (((DArrayTy *)this->field_0103)->count == 0) {
      DArrayDestroy((DArrayTy *)this->field_0103);
      this->field_0103 = 0;
      return 0;
    }
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  puVar6 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,*(uint *)(this->field_0103 + 0xc),6,1);
  pDVar11 = (DArrayTy *)this->field_0103;
  this->field_0226 = puVar6;
  uVar12 = 0;
  if (0 < (int)pDVar11->count) {
    do {
      DArrayGetElement(pDVar11,uVar12,&local_3c);
      Library::DKW::TBL::FUN_006ae140((uint *)this->field_0226,uVar12,(undefined4 *)&local_3c);
      pDVar11 = (DArrayTy *)this->field_0103;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)pDVar11->count);
  }
  DArrayDestroy((DArrayTy *)this->field_0103);
  this->field_0103 = 0;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  ReMakePatrolPoints(this,unaff_EDI);
  pAVar7 = (AnonPointee_STGroupBoatC_022E *)
           Library::DKW::TBL::FUN_006ae290((uint *)0x0,(uint)(ushort)this->field_0027,0x16,1);
  this->field_022E = pAVar7;
  uVar12 = 0;
  local_6c = 0;
  local_5a = 0;
  if (0 < local_1c) {
    do {
      DArrayGetElement((DArrayTy *)this->field_0029,uVar12,&local_18);
      if ((short)local_18 != -1) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_68[0] = CONCAT22(local_68[0]._2_2_,(short)local_18);
        Library::DKW::TBL::FUN_006ae1c0((uint *)this->field_022E,&local_6c);
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < local_1c);
  }
  bVar2 = thunk_FUN_00430750(CASE_8);
  this->field_023A = ((this->field_0242 * 0xc9) / (int)(uint)bVar2) / 3;
  local_30 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
  uVar12 = 0;
  local_44 = PTR_00802a38->field_00E4;
  pDVar11 = (DArrayTy *)this->field_022E;
  if (0 < (int)pDVar11->count) {
    do {
      DArrayGetElement(pDVar11,uVar12,&local_6c);
      if ((short)local_68[0] != -1) {
        this_00 = (STBoatC *)
                  STAllPlayersC::GetObjPtr
                            (g_sTAllPlayers_007FA174,this->field_0024,local_68[0],CASE_1);
        if (this_00 == (STBoatC *)0x0) {
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x7ed,0,0,&DAT_007a4ccc
                                     ,s_STGroupBoatC__GrpPatrol_NULL_val_007abf94);
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c
                     ,0x7ee);
        }
        Library::DKW::TBL::FUN_006ae1c0(&local_30->flags,local_68);
        local_40 = uVar12;
        STBoatC::CmdToObj(this_00,CASE_6,&local_44);
      }
      pDVar11 = (DArrayTy *)this->field_022E;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)pDVar11->count);
  }
  pDVar11 = local_30;
  DArrayGetElement((DArrayTy *)this->field_022A,this->field_0232,&local_54);
  InitWay(this,pDVar11,(int)local_54,(int)local_52,(int)local_50);
  DArrayDestroy(pDVar11);
  return 2;
}

