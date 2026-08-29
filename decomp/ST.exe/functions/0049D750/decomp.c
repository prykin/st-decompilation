#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpRepare
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497E00 @ 0049822B -> read as EAX on
   every CFG path | 00497E00 @ 00498238 -> read as EAX on every CFG path | 00497E00 @ 004985AA ->
   read as EAX on every CFG path */

int __thiscall STGroupBoatC::GrpRepare(STGroupBoatC *this,int param_1)

{
  STGroupBoatC *this_00;
  int iVar2;
  DArrayTy *pDVar2;
  STGameObjC *this_01;
  uint *puVar3;
  STBoatC *this_02;
  uint uVar4;
  int iVar7;
  int iVar5;
  dword dVar6;
  uint uVar8;
  uint uVar9;
  InternalExceptionFrame local_58;
  STGroupBoatC *local_14;
  int local_10;
  dword local_c;
  byte local_8 [4];
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
    iVar5 = 0;
    local_14->field_0065 = 0;
    if ((DArrayTy *)local_14->field_029F != nullptr) {
      DArrayDestroy((DArrayTy *)local_14->field_029F);
    }
    this_00->field_029B = this_00->field_015C;
    this_00->field_029F = this_00->field_0160;
    this_00->field_029F = 0;
    if (this_00->field_029B == 0) {
      if ((this_00->field_0160 == nullptr) ||
         (dVar6 = this_00->field_0160->count, local_c = dVar6, dVar6 == 0)) {
        dVar6 = local_c;
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x9b7);
      }
      pDVar2 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
      uVar8 = 0;
      this_00->field_029F = pDVar2;
      if (0 < (int)dVar6) {
        do {

          DArrayGetElement(this_00->field_0160,uVar8,local_8);
          if (((STPiece<0,2>(local_8) != 0xffff) &&
              /* ST_CALLSITE[0049D857]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
              (this_01 = STAllPlayersC::GetObjPtr
                                   (g_allPlayers_007FA174,this_00->field_0024,STPiece<0,2>(local_8),CASE_1),
              this_01 != nullptr)) &&
             /* ST_CALLSITE[0049D864]: CALL dword ptr [EDX + 0x2c] */
             (iVar5 = this_01->vfunc_2C(), iVar5 == 0x33)) {

            Library::DKW::TBL::DArrayAppend((DArrayTy *)this_00->field_029F,local_8);
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)dVar6);
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
      /* ST_CALLSITE[0049D8D9]: CALL 0x00401415; direct=00401415 STAllPlayersC::GetTOBJList */
      puVar3 = STAllPlayersC::GetTOBJList(g_allPlayers_007FA174,this_00->field_0024,0x33,0,-1);
      this_00->field_029F = puVar3;
      if (puVar3[3] == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp",
                   0x9cd);
      }
    }
    /* ST_CALLSITE[0049D914]: CALL 0x00403251; direct=00403251 STGroupBoatC::DistributeDock */
    DistributeDock(this_00,1,(DArrayTy *)this_00->field_029F,this_00->field_0029);
  }
  uVar8 = 0;
  local_10 = 2;
  if (g_playSystem_00802A38->field_00E4 % 0x19 == 0) {
    if ((this_00->field_029F == 0) || (this_00->field_0027 == 0)) {
      local_10 = 0;
    }
    else {
      uVar9 = this_00->field_0029->count;
      local_c = uVar9;
      if (0 < (int)uVar9) {
        do {

          DArrayGetElement(this_00->field_0029,uVar8,local_8);
          if (STPiece<0,2>(local_8) != 0xffff) {
            this_02 = (STBoatC *)
                      /* ST_CALLSITE[0049D97F]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
                      STAllPlayersC::GetObjPtr
                                (g_allPlayers_007FA174,this_00->field_0024,STPiece<0,2>(local_8),CASE_1);
            /* ST_CALLSITE[0049D988]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
            iVar5 = STGameObjC::sub_0045FF10((STGameObjC *)this_02);
            uVar9 = local_c;
            if ((iVar5 == 4) ||
               /* ST_CALLSITE[0049D996]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
               (uVar4 = STBoatC::CheckPBoxCmd(this_02,CASE_4), uVar9 = local_c, uVar4 == 1)) break;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar9);
      }
      if (uVar8 == uVar9) {
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
  }
  g_currentExceptionFrame = local_58.previous;
  return local_10;
}

