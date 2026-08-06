#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/BaseSystemC.cpp

// 00576AA0 BaseSystemC::BaseSystemC
#line 1 "decomp/ST.exe/functions/00576AA0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B1B4 (store 00576AB1)
   Evidence: final_vptr=0079B1B4; returns_this=true; calls_before=1; field_writes_after=0;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00576AA0 returns BaseSystemC::BaseSystemC this @ 00576ABB

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00576BB0 -> 00576AA0 @ 00576BF7 */

BaseSystemC * __thiscall st::fn_00576AA0(BaseSystemC *this,AppClassTy *param_1)

{
  st::fn_006E51C0((SystemClassTy *)this,param_1,0);
  this->vtable = &BaseSystemCVTable;
  return this;
}

