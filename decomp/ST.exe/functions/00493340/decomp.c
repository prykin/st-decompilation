#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::CheckForReplenisher
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined4
   __thiscall CheckForReplenisher(STBoatC * this) Evidence: every machine RET purges exactly 0
   explicit stack bytes; current signature describes 4; removed trailing parameter slots have no
   listing references; ret_sites=0049344B RET | 00493457 RET */

undefined4 __thiscall STBoatC::CheckForReplenisher(STBoatC *this)

{
  DArrayTy *array;
  DArrayTy *array_00;
  dword dVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint index;
  uint local_14;
  STFishC *local_10;
  short local_a;
  short local_8;
  short local_6;

  array = (DArrayTy *)g_packedRecords_A62x8[this->field_0024].field603_0x2e7;
  array_00 = (DArrayTy *)g_packedRecords_A62x8[this->field_0024].field6_0x9;
  if (array != nullptr) {
    dVar1 = array->count;
    index = 0;
    if (0 < (int)dVar1) {
      do {
        DArrayGetElement(array,index,&local_14);
        if ((short)local_14 != -1) {
          DArrayGetElement(array_00,local_14 & 0xffff,&local_10);
          if (local_10 == nullptr) {
            iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x5221,0,0,
                                       "%s","STBoatC::CheckForReplenisher NULL");
            if (iVar3 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       "E:\\__titans\\wlad\\To_boat.cpp",0x5222);
          }
          STFishC::sub_004162B0(local_10,&local_a,&local_8,&local_6);
          iVar3 = FUN_006aadd0((int)this->field_0047,(int)this->field_0049,(int)this->field_004B,
                               (int)local_a,(int)local_8,(int)local_6);
          if (iVar3 < 7) {
            return 1;
          }
        }
        index = index + 1;
        if ((int)dVar1 <= (int)index) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

