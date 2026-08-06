#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/DebugSystemC.cpp

// 005781C0 DebugSystemC::DebugSystemC
#line 4 "decomp/ST.exe/functions/005781C0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B20C (store 005781D4)
   Evidence: final_vptr=0079B20C; returns_this=true; calls_before=1; field_writes_after=0;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005781C0 returns DebugSystemC::DebugSystemC this @ 005781DE

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005782D0 -> 005781C0 @ 005782E7 */

DebugSystemC * __thiscall st::fn_005781C0(DebugSystemC *this,AppClassTy *param_1)

{
  st::fn_006E51C0((SystemClassTy *)this,param_1,0x8000);
  this->vtable = &st_global_0079B20C;
  return this;
}

