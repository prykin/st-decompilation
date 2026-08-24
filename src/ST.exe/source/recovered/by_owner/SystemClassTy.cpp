#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SystemClassTy.cpp

// 006E51C0 SystemClassTy::SystemClassTy
#line 4 "decomp/ST.exe/functions/006E51C0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079E188 (store 006E51D0)
   Evidence: final_vptr=0079E188; returns_this=true; calls_before=0; field_writes_after=5;
   table_confidence=high

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00542440 -> 006E51C0 @ 0054244C; InterSystemC::InterSystemC parameter param_1 |
   00576AA0 -> 006E51C0 @ 00576AAC; BaseSystemC::BaseSystemC parameter param_1 | 00576DD0 ->
   006E51C0 @ 00576DDC; GameSystemC::GameSystemC parameter param_1 | 005781C0 -> 006E51C0 @
   005781CF; DebugSystemC::DebugSystemC parameter param_1 | 005DA610 -> 006E51C0 @ 005DA621;
   StartSystemTy::StartSystemTy parameter param_1 | 006E6100 -> 006E51C0 @ 006E6110;
   SystemWithNamedObjClassTy::SystemWithNamedObjClassTy parameter param_1 */

SystemClassTy * __thiscall
st::fn_006E51C0(SystemClassTy *this,AppClassTy *param_1,int param_2)

{
  this->systemId = param_2;
  this->vtable = &st_global_0079E188;
  this->app = param_1;
  this->objects = nullptr;
  this->field_000C = nullptr;
  this->messages = nullptr;
  this->nextMessages = nullptr;
  return this;
}

