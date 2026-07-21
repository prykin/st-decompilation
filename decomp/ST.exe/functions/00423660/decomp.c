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
  int local_14;
  STGroupC *local_10;
  uint *local_c;
  uint local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  if (iVar3 == 0) {
    local_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    pSVar2 = local_10;
    index = 0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_14 = *(int *)(local_10->field_0029 + 0xc);
    if (0 < local_14) {
      do {
        DArrayGetElement((DArrayTy *)pSVar2->field_0029,index,&local_8);
        if ((short)local_8 != -1) {
          pSVar4 = STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,pSVar2->field_0024,local_8,CASE_1);
          if (pSVar4 == (STGameObjC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       s_E____titans_wlad_tc_grp_cpp_007a50a4,0x81);
          }
          iVar3 = (*pSVar4->vtable->vfunc_2C)();
          if (iVar3 == param_1) {
            Library::DKW::TBL::FUN_006ae1c0(local_c,&local_8);
          }
        }
        index = index + 1;
      } while ((int)index < local_14);
    }
    g_currentExceptionFrame = local_58.previous;
    return local_c;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar5 = ReportDebugMessage(s_E____titans_wlad_tc_grp_cpp_007a50a4,0x86,0,iVar3,&DAT_007a4ccc,
                             s_STGroupC__GetTOBJList_007a5104);
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,s_E____titans_wlad_tc_grp_cpp_007a50a4,0x87);
  return local_c;
}

