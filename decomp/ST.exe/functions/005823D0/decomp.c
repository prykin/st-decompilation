
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B78C (store 005823F9)
   Evidence: final_vptr=0079B78C; returns_this=true; calls_before=2; field_writes_after=8;
   table_confidence=high
   
   [STPrototypeApplier] Propagated return.
   Evidence: 005823D0 returns STJellyGunC::STJellyGunC this @ 0058243D */

STJellyGunC * __thiscall STJellyGunC::STJellyGunC(STJellyGunC *this)

{
  int iVar1;
  undefined4 *puVar2;
  
  thunk_FUN_004158e0(&this->vtable);
  thunk_FUN_004ab810(&this->field_01D5);
  this->field_01D5 = &PTR_LAB_0079b8ec;
  this->vtable = &STJellyGunCVTable;
  puVar2 = (undefined4 *)&this->field_0x256;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined4 *)&this->field_0x241 = 0xff;
  this->field_0231 = 0;
  this->field_0235 = 0;
  this->field_0239 = 0;
  this->field_023D = 0;
  this->field_0247 = 0;
  this->field_024B = 0;
  this->field_0252 = 0;
  return this;
}

