#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpLoadRC */

undefined4 __thiscall STGroupBoatC::GrpLoadRC(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *this_00;
  byte bVar2;
  int iVar3;
  DArrayTy *pDVar4;
  STGameObjC *pSVar5;
  DArrayTy *pDVar6;
  STBoatC *objPtr;
  short *psVar7;
  undefined4 uVar8;
  int iVar9;
  STWorldObject *pSVar10;
  int *piVar11;
  byte *puVar12;
  byte *puVar13;
  uint uVar14;
  dword dVar15;
  short *psVar16;
  char cVar17;
  Global_sub_0043EC20_param_2Enum GVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  STAllPlayersC_GetTOBJList_param_2Enum SVar25;
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
  undefined4 local_8;

  local_14 = 4;
  local_34[0] = 0x38;
  local_34[1] = 0x39;
  local_34[2] = 0x4f;
  local_34[3] = 0x5e;
  local_bc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_bc;
  local_20 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_bc.jumpBuffer,0);
  this_00 = local_20;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_bc.previous;
    if (iVar3 == -0x5001fff7) {
      if (local_20->field_010F != nullptr) {
        DArrayDestroy(local_20->field_010F);
        this_00->field_010F = nullptr;
      }
      if (this_00->field_0127 != nullptr) {
        DArrayDestroy(this_00->field_0127);
        this_00->field_0127 = nullptr;
      }
      if (this_00->field_024E != nullptr) {
        DArrayDestroy(this_00->field_024E);
        this_00->field_024E = nullptr;
      }
      if (this_00->field_0266 != nullptr) {
        DArrayDestroy(this_00->field_0266);
        this_00->field_0266 = nullptr;
      }
      return 0;
    }
    iVar9 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x8ee,0,iVar3,"%s",
                               "STGroupBoatC::GrpLoadRC");
    if (iVar9 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x8ef);
      return local_34[4];
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((param_1 == 1) || (param_1 == 0)) {
    memset(&local_20->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    iVar3 = 0;
    local_20->field_0065 = 0;
    if (local_20->field_024E != nullptr) {
      DArrayDestroy(local_20->field_024E);
    }
    if (this_00->field_0266 != nullptr) {
      DArrayDestroy(this_00->field_0266);
    }
    puVar12 = (byte *)(&this_00->field_010B);
    puVar13 = (byte *)(&this_00->field_024A);
    memmove(puVar13, puVar12, 0x2c); /* compiler REP MOVS byte copy */
    this_00->field_024E = nullptr;
    this_00->field_0266 = nullptr;
    if (this_00->field_010B == 0) {
      if ((this_00->field_010F == nullptr) ||
         (local_c = this_00->field_010F->count, local_c == 0)) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x81d);
      }
      pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
      this_00->field_024E = pDVar4;
      uVar14 = 0;
      if (0 < (int)local_c) {
        do {
          DArrayGetElement(this_00->field_010F,uVar14,&local_8);
          if (((ushort)local_8 != 0xffff) &&
             (pSVar5 = STAllPlayersC::GetObjPtr
                                 (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1),
             pSVar5 != nullptr)) {
            iVar3 = (*pSVar5->vtable->vfunc_2C)();
            iVar9 = 0;
            if (0 < local_14) {
              piVar11 = local_34;
              do {
                if (iVar3 == *piVar11) break;
                iVar9 = iVar9 + 1;
                piVar11 = piVar11 + 1;
              } while (iVar9 < local_14);
            }
            if (((iVar9 != local_14) && (iVar3 == this_00->field_025E)) &&
               (iVar3 = (*pSVar5->vtable->vfunc_88)(local_18), 0 < iVar3)) {
              Library::DKW::TBL::DArrayAppend(this_00->field_024E,&local_8);
            }
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)local_c);
      }
      DArrayDestroy(this_00->field_010F);
      this_00->field_010F = nullptr;
      if (this_00->field_024E->count == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x834);
      }
    }
    else {
      pDVar4 = (DArrayTy *)
               thunk_FUN_0043ec20(this_00->field_0024,this_00->field_025E,this_00->field_0252,
                                  this_00->field_0254,this_00->field_0256,this_00->field_0258,
                                  this_00->field_025A,this_00->field_025C,1,-1);
      if (pDVar4 == nullptr) {
        pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
        this_00->field_024E = pDVar4;
        local_8 = 0xffff;
        Library::DKW::TBL::DArrayAppend(pDVar4,&local_8);
      }
      else {
        pDVar6 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
        this_00->field_024E = pDVar6;
        local_c = pDVar4->count;
        uVar14 = 0;
        if (0 < (int)local_c) {
          do {
            DArrayGetElement(pDVar4,uVar14,&local_8);
            pSVar5 = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
            if ((pSVar5 != nullptr) &&
               (iVar3 = (*pSVar5->vtable->vfunc_88)(local_18), 0 < iVar3)) {
              Library::DKW::TBL::DArrayAppend(this_00->field_024E,&local_8);
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)local_c);
        }
        if (this_00->field_024E->count == 0) {
          local_8 = 0xffff;
          Library::DKW::TBL::DArrayAppend(this_00->field_024E,&local_8);
        }
        DArrayDestroy(pDVar4);
      }
    }
    if (this_00->field_0262 == 0) {
      if ((this_00->field_0127 == nullptr) ||
         (dVar15 = this_00->field_0127->count, local_c = dVar15, dVar15 == 0)) {
        dVar15 = local_c;
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x855);
      }
      pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
      uVar14 = 0;
      this_00->field_0266 = pDVar4;
      if (0 < (int)dVar15) {
        do {
          DArrayGetElement(this_00->field_0127,uVar14,&local_8);
          if ((((ushort)local_8 != 0xffff) &&
              (pSVar5 = STAllPlayersC::GetObjPtr
                                  (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1)
              , pSVar5 != nullptr)) &&
             ((iVar3 = (*pSVar5->vtable->vfunc_2C)(), iVar3 == 0x3b || (iVar3 == 0x60)))) {
            Library::DKW::TBL::DArrayAppend(this_00->field_0266,&local_8);
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)dVar15);
      }
      DArrayDestroy(this_00->field_0127);
      this_00->field_0127 = nullptr;
      if (this_00->field_0266->count == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x866);
      }
    }
    if (this_00->field_0262 == 2) {
      bVar2 = LookupRecordByte(this_00->field_0024);
      if (bVar2 == 3) {
        sVar24 = this_00->field_0274;
        sVar23 = this_00->field_0272;
        sVar22 = this_00->field_0270;
        sVar21 = this_00->field_026E;
        sVar20 = this_00->field_026C;
        sVar19 = this_00->field_026A;
        cVar17 = this_00->field_0024;
        GVar18 = 0x60;
      }
      else {
        sVar24 = this_00->field_0274;
        sVar23 = this_00->field_0272;
        sVar22 = this_00->field_0270;
        sVar21 = this_00->field_026E;
        sVar20 = this_00->field_026C;
        sVar19 = this_00->field_026A;
        cVar17 = this_00->field_0024;
        GVar18 = 0x3b;
      }
      pDVar4 = (DArrayTy *)
               thunk_FUN_0043ec20(cVar17,GVar18,sVar19,sVar20,sVar21,sVar22,sVar23,sVar24,0,-1);
      if (pDVar4 == nullptr) {
        pDVar4 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
        this_00->field_0266 = pDVar4;
        local_8 = 0xffff;
        Library::DKW::TBL::DArrayAppend(pDVar4,&local_8);
      }
      else {
        pDVar6 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
        this_00->field_0266 = pDVar6;
        local_c = pDVar4->count;
        uVar14 = 0;
        if (0 < (int)local_c) {
          do {
            DArrayGetElement(pDVar4,uVar14,&local_8);
            pSVar5 = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
            if (pSVar5 != nullptr) {
              Library::DKW::TBL::DArrayAppend(this_00->field_0266,&local_8);
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)local_c);
        }
        DArrayDestroy(pDVar4);
      }
    }
    if (this_00->field_0262 == 1) {
      bVar2 = LookupRecordByte(this_00->field_0024);
      if (bVar2 == 3) {
        cVar17 = this_00->field_0024;
        SVar25 = 0x60;
      }
      else {
        cVar17 = this_00->field_0024;
        SVar25 = 0x3b;
      }
      pDVar4 = (DArrayTy *)STAllPlayersC::GetTOBJList(g_allPlayers_007FA174,cVar17,SVar25,0,-1);
      if (pDVar4->count == 0) {
        pDVar6 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
        this_00->field_0266 = pDVar6;
        local_8 = 0xffff;
        Library::DKW::TBL::DArrayAppend(pDVar6,&local_8);
      }
      else {
        pDVar6 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
        this_00->field_0266 = pDVar6;
        local_c = pDVar4->count;
        uVar14 = 0;
        if (0 < (int)local_c) {
          do {
            DArrayGetElement(pDVar4,uVar14,&local_8);
            pSVar5 = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
            if (pSVar5 != nullptr) {
              Library::DKW::TBL::DArrayAppend(this_00->field_0266,&local_8);
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)local_c);
        }
      }
      DArrayDestroy(pDVar4);
    }
    DistributeMD(this_00,1,this_00->field_024E,this_00->field_0266,(DArrayTy *)this_00->field_0029);
  }
  local_34[4] = 2;
  if ((g_playSystem_00802A38->field_00E4 % 100 == 0) &&
     ((this_00->field_024A == 0 || (this_00->field_0262 == 0)))) {
    local_10 = 0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_c = *(uint *)(this_00->field_0029 + 0xc);
    if (0 < (int)local_c) {
      do {
        DArrayGetElement((DArrayTy *)this_00->field_0029,local_10,&local_8);
        objPtr = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,this_00->field_0024,(ushort)local_8,CASE_1);
        if (((objPtr != nullptr) &&
            (iVar3 = thunk_FUN_0045ff10((STGameObjC *)objPtr), iVar3 == 0xc)) &&
           (local_1c = thunk_FUN_0048d440(objPtr), local_1c != 0)) {
          psVar7 = (short *)thunk_FUN_0048dc90(objPtr,local_100);
          psVar16 = local_78;
          for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)psVar16 = *(undefined4 *)psVar7;
            psVar7 = psVar7 + 2;
            psVar16 = psVar16 + 2;
          }
          *psVar16 = *psVar7;
          if ((local_3e == 6) || (local_3e == 0xe)) break;
          if (local_1c == 1) {
            if (local_72 != -1) {
              if (((local_78[0] < 0) || (g_worldGrid.sizeX <= local_78[0])) ||
                 ((local_78[1] < 0 ||
                  (((g_worldGrid.sizeY <= local_78[1] || (local_78[2] < 0)) ||
                   (g_worldGrid.sizeZ <= local_78[2])))))) {
                pSVar10 = nullptr;
              }
              else {
                pSVar10 = STGridAt3D(g_worldGrid, local_78[0], local_78[1], local_78[2]).objects[0];
              }
              if (((pSVar10 != nullptr) && (*(int *)&pSVar10->field_0x18 == local_72))
                 && (iVar3 = (*pSVar10->vtable[2].slots_00_28[10])(&local_1c), 0 < iVar3)) break;
            }
          }
          else if (local_68 != -1) {
            if (((local_6e < 0) || (g_worldGrid.sizeX <= local_6e)) ||
               ((local_6c < 0 ||
                (((g_worldGrid.sizeY <= local_6c || (local_6a < 0)) ||
                 (g_worldGrid.sizeZ <= local_6a)))))) {
              pSVar10 = nullptr;
            }
            else {
              pSVar10 = STGridAt3D(g_worldGrid, local_6e, local_6c, local_6a).objects[0];
            }
            if ((pSVar10 != nullptr) && (*(int *)&pSVar10->field_0x18 == local_68))
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

