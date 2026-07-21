#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::CheckForReplenisher */

undefined4 __thiscall STBoatC::CheckForReplenisher(STBoatC *this,int param_1)

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

  array = (DArrayTy *)g_playerRuntime[*(int *)&this->field_0x24].field479_0x2e7;
  array_00 = g_playerRuntime[*(int *)&this->field_0x24].objects;
  if (array != (DArrayTy *)0x0) {
    dVar1 = array->count;
    index = 0;
    if (0 < (int)dVar1) {
      do {
        DArrayGetElement(array,index,&local_14);
        if ((short)local_14 != -1) {
          DArrayGetElement(array_00,local_14 & 0xffff,&local_10);
          if (local_10 == (STFishC *)0x0) {
            iVar3 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x5221,0,0,
                                       &DAT_007a4ccc,s_STBoatC__CheckForReplenisher_NUL_007abbf4);
            if (iVar3 != 0) {
              STDebugBreak(); /* noreturn in standalone pseudocode */
            }
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       s_E____titans_wlad_To_boat_cpp_007a9d3c,0x5222);
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

