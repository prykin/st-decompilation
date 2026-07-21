#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpRepare */

undefined4 __thiscall STGroupBoatC::GrpRepare(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *this_00;
  int iVar2;
  uint *puVar3;
  STGameObjC *pSVar4;
  STBoatC *this_01;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  InternalExceptionFrame local_58;
  STGroupBoatC *local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_14;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_58.previous;
    if (iVar2 == -0x5001fff7) {
      if ((DArrayTy *)local_14->field_0160 != (DArrayTy *)0x0) {
        DArrayDestroy((DArrayTy *)local_14->field_0160);
        this_00->field_0160 = (uint *)0x0;
      }
      if (*(DArrayTy **)&this_00->field_0x29f != (DArrayTy *)0x0) {
        DArrayDestroy(*(DArrayTy **)&this_00->field_0x29f);
        *(undefined4 *)&this_00->field_0x29f = 0;
      }
      return 0;
    }
    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x9ea,0,iVar2,"%s",
                               "STGroupBoatC::GrpRepare");
    if (iVar6 == 0) {
      RaiseInternalException(iVar2,0,"E:\\__titans\\wlad\\to_grpb.cpp",0x9eb);
      return local_10;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((param_1 == 1) || (param_1 == 0)) {
    puVar9 = &local_14->field_0089;
    for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    local_14->field_0065 = 0;
    if (*(DArrayTy **)&local_14->field_0x29f != (DArrayTy *)0x0) {
      DArrayDestroy(*(DArrayTy **)&local_14->field_0x29f);
    }
    this_00->field_029B = this_00->field_015C;
    *(uint **)&this_00->field_0x29f = this_00->field_0160;
    *(undefined4 *)&this_00->field_0x29f = 0;
    if (this_00->field_029B == 0) {
      if ((this_00->field_0160 == (uint *)0x0) ||
         (uVar8 = this_00->field_0160[3], local_c = uVar8, uVar8 == 0)) {
        uVar8 = local_c;
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x9b7);
      }
      puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
      uVar10 = 0;
      *(uint **)&this_00->field_0x29f = puVar3;
      if (0 < (int)uVar8) {
        do {
          DArrayGetElement((DArrayTy *)this_00->field_0160,uVar10,&local_8);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if ((((short)local_8 != -1) &&
              (pSVar4 = STAllPlayersC::GetObjPtr
                                  (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1),
              pSVar4 != (STGameObjC *)0x0)) &&
             (iVar2 = (**(code **)&pSVar4->vtable->field_0x2c)(), iVar2 == 0x33)) {
            Library::DKW::TBL::FUN_006ae1c0(*(uint **)&this_00->field_0x29f,&local_8);
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar8);
      }
      DArrayDestroy((DArrayTy *)this_00->field_0160);
      this_00->field_0160 = (uint *)0x0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(*(int *)&this_00->field_0x29f + 0xc) == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x9c8);
      }
    }
    if (this_00->field_029B == 1) {
      puVar3 = STAllPlayersC::GetTOBJList(g_sTAllPlayers_007FA174,this_00->field_0024,0x33,0,-1);
      *(uint **)&this_00->field_0x29f = puVar3;
      if (puVar3[3] == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x9cd);
      }
    }
    DistributeDock(this_00,1,*(DArrayTy **)&this_00->field_0x29f,(DArrayTy *)this_00->field_0029);
  }
  uVar8 = 0;
  local_10 = 2;
  if ((uint)PTR_00802a38->field_00E4 % 0x19 == 0) {
    if ((*(int *)&this_00->field_0x29f == 0) || (this_00->field_0027 == 0)) {
      local_10 = 0;
    }
    else {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar10 = *(uint *)(this_00->field_0029 + 0xc);
      local_c = uVar10;
      if (0 < (int)uVar10) {
        do {
          DArrayGetElement((DArrayTy *)this_00->field_0029,uVar8,&local_8);
          if ((short)local_8 != -1) {
            this_01 = (STBoatC *)
                      STAllPlayersC::GetObjPtr
                                (g_sTAllPlayers_007FA174,this_00->field_0024,local_8,CASE_1);
            iVar2 = thunk_FUN_0045ff10((int)this_01);
            uVar10 = local_c;
            if ((iVar2 == 4) ||
               (uVar5 = STBoatC::CheckPBoxCmd(this_01,CASE_4), uVar10 = local_c, uVar5 == 1)) break;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar10);
      }
      if (uVar8 == uVar10) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_58.previous;
  return local_10;
}

