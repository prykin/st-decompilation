#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SystemWithNamedObjClassTy.cpp

// 006E6100 SystemWithNamedObjClassTy::SystemWithNamedObjClassTy
#line 4 "decomp/ST.exe/functions/006E6100/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079E1B4 (store 006E6115)
   Evidence: final_vptr=0079E1B4; returns_this=true; calls_before=1; field_writes_after=1;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 006E6100 returns SystemWithNamedObjClassTy::SystemWithNamedObjClassTy this @ 006E6126

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0054CB40 -> 006E6100 @ 0054CB4C; STPlaySystemC::STPlaySystemC parameter param_1 |
   006E6100 -> 006E51C0 @ 006E6110 */

SystemWithNamedObjClassTy * __thiscall
st::fn_006E6100
          (SystemWithNamedObjClassTy *this,AppClassTy *param_1,undefined4 param_2)

{
  st::fn_006E51C0((SystemClassTy *)this,param_1,param_2);
  this->vtable = &st_global_0079E1B4;
  this->field_0020 = 1;
  return this;
}

