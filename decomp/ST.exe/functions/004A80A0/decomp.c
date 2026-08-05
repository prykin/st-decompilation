#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::SetPatrolCmdToBoat
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall SetPatrolCmdToBoat(STGroupBoatC * this) Evidence: every machine RET purges exactly 0
   explicit stack bytes; current signature describes 4; removed trailing parameter slots have no
   listing references; ret_sites=004A81C6 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall STGroupBoatC::SetPatrolCmdToBoat(STGroupBoatC *this)

{
  code *pcVar1;
  DArrayTy *array;
  STGameObjC *pSVar2;
  int iVar3;
  uint index;
  dword dVar4;
  undefined4 local_34;
  short local_30 [7];
  undefined4 local_22;
  short local_1c;
  short local_1a;
  short local_18;
  dword local_c;
  DArrayTy *local_8;

  dVar4 = this->field_022E->count;
  local_c = dVar4;
  local_8 = Library::DKW::TBL::DArrayCreate(nullptr,0,2,1);
  index = 0;
  if (0 < (int)dVar4) {
    do {
      DArrayGetElement(this->field_022E,index,&local_34);
      if (local_30[0] != -1) {
        local_34 = 0;
        local_22 = 0;
        Library::DKW::TBL::DArrayPut(this->field_022E,index,&local_34);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        pSVar2 = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,this->field_0024,(ushort)local_30._0_4_,CASE_1);
        if (pSVar2 == nullptr) {
          iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x16c9,0,0,
                                     "%s","STGroupBoatC::SetPatrolCmdToBoat");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_grpb.cpp"
                     ,0x16ca);
        }
        Library::DKW::TBL::DArrayAppend(local_8,local_30);
        pSVar2->field_0493 = 1;
        dVar4 = local_c;
      }
      index = index + 1;
    } while ((int)index < (int)dVar4);
  }
  DArrayGetElement(this->field_022A,this->field_0232,&local_1c);
  array = local_8;
  if (local_8->count != 0) {
    InitWay(this,local_8,(int)local_1c,(int)local_1a,(int)local_18);
  }
  DArrayDestroy(array);
  return;
}

