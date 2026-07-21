#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpLoadRC */

undefined4 __thiscall STGroupBoatC::GrpLoadRC(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *this_00;
  int iVar2;
  uint *puVar3;
  STGameObjC *pSVar4;
  DArrayTy *pDVar5;
  short *psVar6;
  undefined4 uVar7;
  int iVar8;
  STWorldObject *pSVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  dword dVar14;
  short *psVar15;
  char cVar16;
  Global_sub_0043EC20_param_2Enum GVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  STAllPlayersC_GetTOBJList_param_2Enum SVar24;
  undefined4 local_100 [17];
  InternalExceptionFrame local_bc;
  short local_78 [3];
  int local_72;
  short local_6e;
  short local_6c;
  short local_6a;
  int local_68;
  int local_3e;
  int local_34 [5];
  STGroupBoatC *local_20;
  int local_1c;
  undefined1 local_18 [4];
  int local_14;
  uint local_10;
  dword local_c;
  uint local_8;

  local_14 = 4;
  local_34[0] = 0x38;
  local_34[1] = 0x39;
  local_34[2] = 0x4f;
  local_34[3] = 0x5e;
  local_bc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_bc;
  local_20 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_bc.jumpBuffer,0);
  this_00 = local_20;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_bc.previous;
    if (iVar2 == -0x5001fff7) {
      if ((DArrayTy *)local_20->field_010F != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)local_20->field_010F);
        this_00->field_010F = 0;
      }
      if ((DArrayTy *)this_00->field_0127 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this_00->field_0127);
        this_00->field_0127 = 0;
      }
      if ((DArrayTy *)this_00->field_024E != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this_00->field_024E);
        this_00->field_024E = 0;
      }
      if ((DArrayTy *)this_00->field_0266 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)this_00->field_0266);
        this_00->field_0266 = 0;
      }
      return 0;
    }
    iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x8ee,0,iVar2,"%s",
                               "STGroupBoatC::GrpLoadRC");
    if (iVar8 == 0) {
      RaiseInternalException(iVar2,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x8ef);
      return local_34[4];
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((param_1 == 1) || (param_1 == 0)) {
    puVar11 = &local_20->field_0089;
    for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    local_20->field_0065 = 0;
    if ((DArrayTy *)local_20->field_024E != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)local_20->field_024E);
    }
    if ((DArrayTy *)this_00->field_0266 != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)this_00->field_0266);
    }
    puVar11 = &this_00->field_010B;
    puVar12 = &this_00->field_024A;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    this_00->field_024E = 0;
    this_00->field_0266 = 0;
    if (this_00->field_010B == 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((this_00->field_010F == 0) ||
         (local_c = *(dword *)(this_00->field_010F + 0xc), local_c == 0)) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x81d);
      }
      puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
      this_00->field_024E = puVar3;
      uVar13 = 0;
      if (0 < (int)local_c) {
        do {
          DArrayGetElement((DArrayTy *)this_00->field_010F,uVar13,&local_8);
          if (((short)local_8 != -1) &&
             (pSVar4 = STAllPlayersC::GetObjPtr
                                 (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1),
             pSVar4 != (STGameObjC *)0x0)) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar2 = (**(code **)&pSVar4->vtable->field_0x2c)();
            iVar8 = 0;
            if (0 < local_14) {
              piVar10 = local_34;
              do {
                if (iVar2 == *piVar10) break;
                iVar8 = iVar8 + 1;
                piVar10 = piVar10 + 1;
              } while (iVar8 < local_14);
            }
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            if (((iVar8 != local_14) && (iVar2 == this_00->field_025E)) &&
               (iVar2 = (**(code **)&pSVar4->vtable->field_0x88)(local_18), 0 < iVar2)) {
              Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_024E,&local_8);
            }
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)local_c);
      }
      DArrayDestroy((DArrayTy *)this_00->field_010F);
      this_00->field_010F = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(this_00->field_024E + 0xc) == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x834);
      }
    }
    else {
      pDVar5 = (DArrayTy *)
               thunk_FUN_0043ec20(this_00->field_0024,this_00->field_025E,this_00->field_0252,
                                  this_00->field_0254,this_00->field_0256,this_00->field_0258,
                                  this_00->field_025A,this_00->field_025C,1,-1);
      if (pDVar5 == (DArrayTy *)0x0) {
        puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        this_00->field_024E = puVar3;
        local_8 = 0xffff;
        Library::DKW::TBL::FUN_006ae1c0(puVar3,&local_8);
      }
      else {
        puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        this_00->field_024E = puVar3;
        local_c = pDVar5->count;
        uVar13 = 0;
        if (0 < (int)local_c) {
          do {
            DArrayGetElement(pDVar5,uVar13,&local_8);
            pSVar4 = STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            if ((pSVar4 != (STGameObjC *)0x0) &&
               (iVar2 = (**(code **)&pSVar4->vtable->field_0x88)(local_18), 0 < iVar2)) {
              Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_024E,&local_8);
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)local_c);
        }
        if (((uint *)this_00->field_024E)[3] == 0) {
          local_8 = 0xffff;
          Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_024E,&local_8);
        }
        DArrayDestroy(pDVar5);
      }
    }
    if (this_00->field_0262 == 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((this_00->field_0127 == 0) ||
         (dVar14 = *(dword *)(this_00->field_0127 + 0xc), local_c = dVar14, dVar14 == 0)) {
        dVar14 = local_c;
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x855);
      }
      puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
      uVar13 = 0;
      this_00->field_0266 = puVar3;
      if (0 < (int)dVar14) {
        do {
          DArrayGetElement((DArrayTy *)this_00->field_0127,uVar13,&local_8);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if ((((short)local_8 != -1) &&
              (pSVar4 = STAllPlayersC::GetObjPtr
                                  (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1),
              pSVar4 != (STGameObjC *)0x0)) &&
             ((iVar2 = (**(code **)&pSVar4->vtable->field_0x2c)(), iVar2 == 0x3b || (iVar2 == 0x60))
             )) {
            Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_0266,&local_8);
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)dVar14);
      }
      DArrayDestroy((DArrayTy *)this_00->field_0127);
      this_00->field_0127 = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(this_00->field_0266 + 0xc) == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x866);
      }
    }
    if (this_00->field_0262 == 2) {
      iVar2 = GetPlayerRaceId(this_00->field_0024);
      if ((char)iVar2 == '\x03') {
        sVar23 = this_00->field_0274;
        sVar22 = this_00->field_0272;
        sVar21 = this_00->field_0270;
        sVar20 = this_00->field_026E;
        sVar19 = this_00->field_026C;
        sVar18 = this_00->field_026A;
        cVar16 = this_00->field_0024;
        GVar17 = 0x60;
      }
      else {
        sVar23 = this_00->field_0274;
        sVar22 = this_00->field_0272;
        sVar21 = this_00->field_0270;
        sVar20 = this_00->field_026E;
        sVar19 = this_00->field_026C;
        sVar18 = this_00->field_026A;
        cVar16 = this_00->field_0024;
        GVar17 = 0x3b;
      }
      pDVar5 = (DArrayTy *)
               thunk_FUN_0043ec20(cVar16,GVar17,sVar18,sVar19,sVar20,sVar21,sVar22,sVar23,0,-1);
      if (pDVar5 == (DArrayTy *)0x0) {
        puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        this_00->field_0266 = puVar3;
        local_8 = 0xffff;
        Library::DKW::TBL::FUN_006ae1c0(puVar3,&local_8);
      }
      else {
        puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        this_00->field_0266 = puVar3;
        local_c = pDVar5->count;
        uVar13 = 0;
        if (0 < (int)local_c) {
          do {
            DArrayGetElement(pDVar5,uVar13,&local_8);
            pSVar4 = STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
            if (pSVar4 != (STGameObjC *)0x0) {
              Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_0266,&local_8);
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)local_c);
        }
        DArrayDestroy(pDVar5);
      }
    }
    if (this_00->field_0262 == 1) {
      iVar2 = GetPlayerRaceId(this_00->field_0024);
      if ((char)iVar2 == '\x03') {
        cVar16 = this_00->field_0024;
        SVar24 = 0x60;
      }
      else {
        cVar16 = this_00->field_0024;
        SVar24 = 0x3b;
      }
      pDVar5 = (DArrayTy *)STAllPlayersC::GetTOBJList(g_sTAllPlayers_007FA174,cVar16,SVar24,0,-1);
      if (pDVar5->count == 0) {
        puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        this_00->field_0266 = puVar3;
        local_8 = 0xffff;
        Library::DKW::TBL::FUN_006ae1c0(puVar3,&local_8);
      }
      else {
        puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
        this_00->field_0266 = puVar3;
        local_c = pDVar5->count;
        uVar13 = 0;
        if (0 < (int)local_c) {
          do {
            DArrayGetElement(pDVar5,uVar13,&local_8);
            pSVar4 = STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
            if (pSVar4 != (STGameObjC *)0x0) {
              Library::DKW::TBL::FUN_006ae1c0((uint *)this_00->field_0266,&local_8);
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)local_c);
        }
      }
      DArrayDestroy(pDVar5);
    }
    DistributeMD(this_00,1,(DArrayTy *)this_00->field_024E,(DArrayTy *)this_00->field_0266,
                 (DArrayTy *)this_00->field_0029);
  }
  local_34[4] = 2;
  if (((uint)PTR_00802a38->field_00E4 % 100 == 0) &&
     ((this_00->field_024A == 0 || (this_00->field_0262 == 0)))) {
    local_10 = 0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_c = *(uint *)(this_00->field_0029 + 0xc);
    if (0 < (int)local_c) {
      do {
        DArrayGetElement((DArrayTy *)this_00->field_0029,local_10,&local_8);
        pSVar4 = STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
        if (((pSVar4 != (STGameObjC *)0x0) &&
            (iVar2 = thunk_FUN_0045ff10((int)pSVar4), iVar2 == 0xc)) &&
           (local_1c = thunk_FUN_0048d440((AnonShape_0048D440_9DC42AE7 *)pSVar4), local_1c != 0)) {
          psVar6 = (short *)thunk_FUN_0048dc90(pSVar4,local_100);
          psVar15 = local_78;
          for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(undefined4 *)psVar15 = *(undefined4 *)psVar6;
            psVar6 = psVar6 + 2;
            psVar15 = psVar15 + 2;
          }
          *psVar15 = *psVar6;
          if ((local_3e == 6) || (local_3e == 0xe)) break;
          if (local_1c == 1) {
            if (local_72 != -1) {
              if (((local_78[0] < 0) || (g_worldGrid.sizeX <= local_78[0])) ||
                 ((local_78[1] < 0 ||
                  (((g_worldGrid.sizeY <= local_78[1] || (local_78[2] < 0)) ||
                   (g_worldGrid.sizeZ <= local_78[2])))))) {
                pSVar9 = (STWorldObject *)0x0;
              }
              else {
                pSVar9 = g_worldGrid.cells
                         [(int)local_78[2] * (int)g_worldGrid.planeStride +
                          (int)local_78[1] * (int)g_worldGrid.sizeX + (int)local_78[0]].objects[0];
              }
              if (((pSVar9 != (STWorldObject *)0x0) && (*(int *)&pSVar9->field_0x18 == local_72)) &&
                 (iVar2 = (*pSVar9->vtable[2].slots_00_28[10])(&local_1c), 0 < iVar2)) break;
            }
          }
          else if (local_68 != -1) {
            if (((local_6e < 0) || (g_worldGrid.sizeX <= local_6e)) ||
               ((local_6c < 0 ||
                (((g_worldGrid.sizeY <= local_6c || (local_6a < 0)) ||
                 (g_worldGrid.sizeZ <= local_6a)))))) {
              pSVar9 = (STWorldObject *)0x0;
            }
            else {
              pSVar9 = g_worldGrid.cells
                       [(int)local_6a * (int)g_worldGrid.planeStride +
                        (int)local_6c * (int)g_worldGrid.sizeX + (int)local_6e].objects[0];
            }
            if ((pSVar9 != (STWorldObject *)0x0) && (*(int *)&pSVar9->field_0x18 == local_68))
            break;
          }
        }
        local_10 = local_10 + 1;
      } while ((int)local_10 < (int)local_c);
    }
    if (local_10 == local_c) {
      local_34[4] = 0;
    }
  }
  g_currentExceptionFrame = local_bc.previous;
  return local_34[4];
}

