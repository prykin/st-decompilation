#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/SystemClassTy.cpp

// 006E51C0 SystemClassTy::SystemClassTy
#line 4 "decomp/ST.exe/functions/006E51C0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079E188 (store 006E51D0)
   Evidence: final_vptr=0079E188; returns_this=true; calls_before=0; field_writes_after=5;
   table_confidence=high */

SystemClassTy * __thiscall
st::fn_006E51C0(SystemClassTy *this,AppClassTy *param_1,int param_2)

{
  this->systemId = param_2;
  this->vtable = &st_global_0079E188.InitSystem;
  this->app = param_1;
  this->objects = nullptr;
  this->objectLock = nullptr;
  this->messages = nullptr;
  this->nextMessages = nullptr;
  return this;
}

