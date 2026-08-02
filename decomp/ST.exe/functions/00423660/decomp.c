#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::GetTOBJList */

uint * __thiscall STGroupC::GetTOBJList(STGroupC *this,int param_1)

{
  code *pcVar1;
  STGroupC *pSVar2;
  int iVar3;
  STGameObjC *pSVar4;
  int iVar5;
  uint *puVar6;
  uint index;
  InternalExceptionFrame local_58;
  uint local_14;
  STGroupC *local_10;
  DArrayTy *local_c;
  undefined1 local_8 [4];

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  if (iVar3 == 0) {
    local_c = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
    pSVar2 = local_10;
    index = 0;
    local_14 = local_10->field_0029[3];
    if (0 < (int)local_14) {
      do {
        DArrayGetElement((DArrayTy *)pSVar2->field_0029,index,local_8);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        if (local_8._0_2_ != 0xffff) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          pSVar4 = STAllPlayersC::GetObjPtr
                             (g_allPlayers_007FA174,pSVar2->field_0024,local_8._0_2_,CASE_1);
          if (pSVar4 == nullptr) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\tc_grp.cpp",0x81);
          }
          iVar3 = (*pSVar4->vtable->vfunc_2C)();
          if (iVar3 == param_1) {
            Library::DKW::TBL::DArrayAppend(local_c,local_8);
          }
        }
        index = index + 1;
      } while ((int)index < (int)local_14);
    }
    g_currentExceptionFrame = local_58.previous;
    return &local_c->flags;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\tc_grp.cpp",0x86,0,iVar3,"%s",
                             "STGroupC::GetTOBJList");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\tc_grp.cpp",0x87);
  return &local_c->flags;
}

