#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::SetAVPar */

void __thiscall STGroupC::SetAVPar(STGroupC *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  STGameObjC *this_00;
  int iVar3;
  uint index;
  uint uVar4;

  uVar4 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar1 = *(uint *)(this->field_0029 + 0xc);
  this->field_0039 = param_1;
  if (uVar1 != 0) {
    index = 0;
    do {
      DArrayGetElement((DArrayTy *)this->field_0029,index,&param_1);
      if ((short)param_1 != -1) {
        this_00 = STAllPlayersC::GetObjPtr(g_sTAllPlayers_007FA174,this->field_0024,param_1,CASE_1);
        if (this_00 == (STGameObjC *)0x0) {
          iVar3 = ReportDebugMessage(s_E____titans_wlad_tc_grp_cpp_007a50a4,0x256,0,0,&DAT_007a4ccc,
                                     s_STGroupC__SetAVPar_007a51a4);
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_tc_grp_cpp_007a50a4,
                     599);
        }
        if (this_00->field_0020 == 0x14) {
          thunk_FUN_004956c0(this_00,this->field_0039);
        }
      }
      uVar4 = uVar4 + 1;
      index = uVar4 & 0xffff;
    } while (index < uVar1);
  }
  return;
}

