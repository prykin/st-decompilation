#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] x87_double_parameter_slots target=function:-1: prototype=int *
   __thiscall FUN_00750080(void * this, undefined4 * param_1, int param_2, double param_3, int
   param_4, int param_5, short param_6, int param_7, int param_8, int param_9, undefined4 param_10,
   int param_11) Evidence: x87 double-width accesses or exact split stores into an independently
   typed double field prove physical EBP slot boundaries; merged_slots={2=1}; sites=007500AF FLD
   double ptr [EBP + 0x10] */

int * __thiscall
FUN_00750080(void *this,undefined4 *param_1,int param_2,double param_3,int param_4,int param_5,
            short param_6,int param_7,int param_8,int param_9,undefined4 param_10,int param_11)

{
  void *this_00;
  int *piVar1;
  int *local_8;

  local_8 = this;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  local_8 = nullptr;
  *param_1 = 0;
  this_00 = (void *)Library::MSVCRT::FUN_0072e530(0x50);
  if (this_00 == nullptr) {
    piVar1 = nullptr;
  }
  else {
    piVar1 = FUN_0074fc49(this_00,this,nullptr,(uint *)&local_8,param_2,param_3,param_4,param_5,
                          param_6,param_7,param_8,param_9,param_10,param_11);
  }
  if (piVar1 == nullptr) {
    local_8 = (int *)0x8007000e;
  }
  else {
    *param_1 = piVar1;
  }
  piVar1 = local_8;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return piVar1;
}

