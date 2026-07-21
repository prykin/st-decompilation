#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::RegisterTorpedo */

undefined4 __thiscall STAllPlayersC::RegisterTorpedo(STAllPlayersC *this,int param_1,short param_2)

{
  code *pcVar1;
  uint index;
  int errorCode;
  int iVar2;
  undefined4 uVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  uint index_00;
  InternalExceptionFrame local_4c;
  int local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    if (param_2 == -1) {
      if (param_1 == 0) {
        RaiseInternalException
                  (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                   0x7e2);
      }
      index_00 = PTR_007fa130->count;
      index = index_00;
      if (index_00 != 0) {
        while (index = index - 1, -1 < (int)index) {
          DArrayGetElement(PTR_007fa130,index,&local_8);
          if (local_8 == 0) {
            index_00 = index;
          }
        }
      }
    }
    else {
      index_00 = (uint)param_2;
      if ((index_00 < PTR_007fa130->count) &&
         (DArrayGetElement(PTR_007fa130,index_00,&local_8), local_8 != 0)) {
        RaiseInternalException
                  (-0x5001fffa,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                   0x7f0);
      }
    }
    Library::DKW::TBL::FUN_006ae140(&PTR_007fa130->flags,index_00,&param_1);
    DAT_007fa134 = DAT_007fa134 + 1;
    g_currentExceptionFrame = local_4c.previous;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    return CONCAT22((short)((uint)DAT_007fa134 >> 0x10),(short)index_00);
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x7f6,0,errorCode,
                             &DAT_007a4ccc,s_STAllPlayersC__RegisterTorpedo_007a6718);
  if (iVar2 == 0) {
    RaiseInternalException(errorCode,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x7f7);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    return CONCAT22(extraout_var,0xffff);
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

