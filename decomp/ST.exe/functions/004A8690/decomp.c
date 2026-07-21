#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GenSwitch */

void __thiscall STGroupBoatC::GenSwitch(STGroupBoatC *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  STGameObjC *this_00;
  int iVar3;
  uint index;
  uint uVar4;
  uint local_8;

  uVar4 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar1 = *(uint *)(this->field_0029 + 0xc);
  if (uVar1 != 0) {
    index = 0;
    do {
      DArrayGetElement((DArrayTy *)this->field_0029,index,&local_8);
      if ((short)local_8 != -1) {
        this_00 = STAllPlayersC::GetObjPtr(g_sTAllPlayers_007FA174,this->field_0024,local_8,CASE_1);
        if (this_00 == (STGameObjC *)0x0) {
          iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x1742,0,0,
                                     "%s","STGroupBoatC::GenSwitch NULL");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0x1743);
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar3 = (**(code **)&this_00->vtable->field_0x2c)();
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if ((iVar3 == 0x16) || (iVar3 = (**(code **)&this_00->vtable->field_0x2c)(), iVar3 == 0x25))
        {
          thunk_FUN_00494160(this_00,param_1);
        }
      }
      uVar4 = uVar4 + 1;
      index = uVar4 & 0xffff;
    } while (index < uVar1);
  }
  return;
}

