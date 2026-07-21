#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::SetPatrolCmdToBoat */

void __thiscall STGroupBoatC::SetPatrolCmdToBoat(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  DArrayTy *array;
  STGameObjC *pSVar2;
  int iVar3;
  uint index;
  undefined4 local_34;
  uint local_30 [3];
  undefined4 local_22;
  short local_1c;
  short local_1a;
  short local_18;
  int local_c;
  DArrayTy *local_8;

  iVar3 = this->field_022E->field_000C;
  local_c = iVar3;
  local_8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
  index = 0;
  if (0 < iVar3) {
    do {
      DArrayGetElement((DArrayTy *)this->field_022E,index,&local_34);
      if ((short)local_30[0] != -1) {
        local_34 = 0;
        local_22 = 0;
        Library::DKW::TBL::FUN_006ae140((uint *)this->field_022E,index,&local_34);
        pSVar2 = STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,this->field_0024,local_30[0],CASE_1);
        if (pSVar2 == (STGameObjC *)0x0) {
          iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x16c9,0,0,
                                     "%s","STGroupBoatC::SetPatrolCmdToBoat");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0x16ca);
        }
        Library::DKW::TBL::FUN_006ae1c0(&local_8->flags,local_30);
        pSVar2->field_0493 = 1;
        iVar3 = local_c;
      }
      index = index + 1;
    } while ((int)index < iVar3);
  }
  DArrayGetElement((DArrayTy *)this->field_022A,this->field_0232,&local_1c);
  array = local_8;
  if (local_8->count != 0) {
    InitWay(this,local_8,(int)local_1c,(int)local_1a,(int)local_18);
  }
  DArrayDestroy(array);
  return;
}

