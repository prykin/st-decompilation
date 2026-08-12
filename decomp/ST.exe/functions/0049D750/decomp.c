#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpRepare */

undefined4 __thiscall STGroupBoatC::GrpRepare(STGroupBoatC *this,int param_1)

{
  STGroupBoatC *this_00;
  int iVar2;
  DArrayTy *pDVar2;
  STGameObjC *pSVar3;
  uint *puVar4;
  STBoatC *this_01;
  uint uVar5;
  int iVar7;
  undefined4 uVar6;
  int iVar8;
  dword dVar9;
  uint uVar11;
  uint uVar12;
  InternalExceptionFrame local_58;
  STGroupBoatC *local_14;
  undefined4 local_10;
  dword local_c;
  undefined1 local_8 [4];

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_14;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_58.previous;
    if (iVar2 == -0x5001fff7) {
      if (local_14->field_0160 != nullptr) {
        DArrayDestroy(local_14->field_0160);
        this_00->field_0160 = nullptr;
      }
      if ((DArrayTy *)this_00->field_029F != nullptr) {
        DArrayDestroy((DArrayTy *)this_00->field_029F);
        this_00->field_029F = 0;
      }
      return 0;
    }
    iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x9ea,0,iVar2,"%s",
                               "STGroupBoatC::GrpRepare");
    if (iVar7 == 0) {
      RaiseInternalException(iVar2,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x9eb);
      return local_10;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((param_1 == 1) || (param_1 == 0)) {
    memset(&local_14->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
    iVar8 = 0;
    local_14->field_0065 = 0;
    if ((DArrayTy *)local_14->field_029F != nullptr) {
      DArrayDestroy((DArrayTy *)local_14->field_029F);
    }
    this_00->field_029B = this_00->field_015C;
    this_00->field_029F = this_00->field_0160;
    this_00->field_029F = 0;
    if (this_00->field_029B == 0) {
      if ((this_00->field_0160 == nullptr) ||
         (dVar9 = this_00->field_0160->count, local_c = dVar9, dVar9 == 0)) {
        dVar9 = local_c;
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x9b7);
      }
      pDVar2 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
      uVar11 = 0;
      this_00->field_029F = pDVar2;
      if (0 < (int)dVar9) {
        do {
          DArrayGetElement(this_00->field_0160,uVar11,local_8);
          if (((STPiece<0,2>(local_8) != 0xffff) &&
              (pSVar3 = STAllPlayersC::GetObjPtr
                                  (g_allPlayers_007FA174,this_00->field_0024,STPiece<0,2>(local_8),CASE_1),
              pSVar3 != nullptr)) &&
             (iVar8 = (*pSVar3->vtable->vfunc_2C)(), iVar8 == 0x33)) {
            Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_029F,local_8);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)dVar9);
      }
      DArrayDestroy(this_00->field_0160);
      this_00->field_0160 = nullptr;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(this_00->field_029F + 0xc) == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x9c8);
      }
    }
    if (this_00->field_029B == 1) {
      puVar4 = STAllPlayersC::GetTOBJList(g_allPlayers_007FA174,this_00->field_0024,0x33,0,-1);
      this_00->field_029F = puVar4;
      if (puVar4[3] == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x9cd);
      }
    }
    DistributeDock(this_00,1,(DArrayTy *)this_00->field_029F,(DArrayTy *)this_00->field_0029);
  }
  uVar11 = 0;
  local_10 = 2;
  if (g_playSystem_00802A38->field_00E4 % 0x19 == 0) {
    if ((this_00->field_029F == 0) || (this_00->field_0027 == 0)) {
      local_10 = 0;
    }
    else {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar12 = *(uint *)(this_00->field_0029 + 0xc);
      local_c = uVar12;
      if (0 < (int)uVar12) {
        do {
          DArrayGetElement((DArrayTy *)this_00->field_0029,uVar11,local_8);
          if (STPiece<0,2>(local_8) != 0xffff) {
            this_01 = (STBoatC *)
                      STAllPlayersC::GetObjPtr
                                (g_allPlayers_007FA174,this_00->field_0024,STPiece<0,2>(local_8),CASE_1);
            iVar8 = thunk_FUN_0045ff10((STGameObjC *)this_01);
            uVar12 = local_c;
            if ((iVar8 == 4) ||
               (uVar5 = STBoatC::CheckPBoxCmd(this_01,CASE_4), uVar12 = local_c, uVar5 == 1)) break;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uVar12);
      }
      if (uVar11 == uVar12) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_58.previous;
  return local_10;
}

