
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079E188 (store 006E51D0)
   Evidence: final_vptr=0079E188; returns_this=true; calls_before=0; field_writes_after=5;
   table_confidence=high */

void __thiscall SystemClassTy::SystemClassTy(SystemClassTy *this,AppClassTy *param_1,int param_2)

{
  this->systemId = param_2;
  this->vtable = &SystemClassTyVTable.InitSystem;
  this->app = param_1;
  this->objects = (void *)0x0;
  this->objectLock = (void *)0x0;
  this->messages = (void *)0x0;
  this->nextMessages = (void *)0x0;
  return;
}

