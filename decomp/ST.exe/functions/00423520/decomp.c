#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::GetTOBJQty */

uint __thiscall STGroupC::GetTOBJQty(STGroupC *this,int param_1)

{
  code *pcVar1;
  STGroupC *pSVar2;
  int iVar3;
  STGameObjC *pSVar4;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  uint uVar6;
  InternalExceptionFrame local_58;
  uint local_14;
  STGroupC *local_10;
  uint local_c;
  int local_8;

  uVar6 = 0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  pSVar2 = local_10;
  if (iVar3 == 0) {
    local_8 = 0;
    local_14 = local_10->field_0029[3];
    if (0 < (int)local_14) {
      do {
        DArrayGetElement((DArrayTy *)pSVar2->field_0029,uVar6,&local_c);
        if ((short)local_c != -1) {
          pSVar4 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,pSVar2->field_0024,local_c,CASE_1)
          ;
          if (pSVar4 == (STGameObjC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\tc_grp.cpp",0x66);
          }
          iVar3 = (*pSVar4->vtable->vfunc_2C)();
          if (iVar3 == param_1) {
            local_8 = local_8 + 1;
          }
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)local_14);
    }
    g_currentExceptionFrame = local_58.previous;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    return CONCAT22((short)((uint)local_58.previous >> 0x10),(undefined2)local_8);
  }
  g_currentExceptionFrame = local_58.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\tc_grp.cpp",0x6b,0,iVar3,"%s",
                             "STGroupC::GetTOBJQty");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\tc_grp.cpp",0x6c);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  return CONCAT22(extraout_var,(undefined2)local_8);
}

