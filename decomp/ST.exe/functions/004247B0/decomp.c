#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::SetAVPar */

void __thiscall STGroupC::SetAVPar(STGroupC *this,uint param_1)

{
  uint uVar1;
  STGameObjC *this_00;
  int iVar3;
  uint index;
  uint uVar4;

  uVar4 = 0;
  uVar1 = this->field_0029[3];
  this->field_0039 = param_1;
  if (uVar1 != 0) {
    index = 0;
    do {
      DArrayGetElement((DArrayTy *)this->field_0029,index,&param_1);
      if ((ushort)param_1 != 0xffff) {
        /* ST_CALLSITE[004247F6]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
        this_00 = STAllPlayersC::GetObjPtr
                            (g_allPlayers_007FA174,this->field_0024,(ushort)param_1,CASE_1);
        if (this_00 == nullptr) {
          iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\tc_grp.cpp",0x256,0,0,"%s",
                                     "STGroupC::SetAVPar");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\tc_grp.cpp",
                     599);
        }
        if (this_00->field_0020 == 0x14) {
          /* ST_CALLSITE[0042484B]: CALL 0x00401c26; direct=00401C26 STGameObjC::sub_004956C0 */
          STGameObjC::sub_004956C0(this_00,this->field_0039);
        }
      }
      uVar4 = uVar4 + 1;
      index = uVar4 & 0xffff;
    } while (index < uVar1);
  }
  return;
}

