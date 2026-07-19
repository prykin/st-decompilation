
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 00790728 (store 00497B05)
   Evidence: final_vptr=00790728; returns_this=true; calls_before=1; field_writes_after=47;
   table_confidence=high */

undefined4 * __thiscall STGroupBoatC::STGroupBoatC(STGroupBoatC *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  thunk_FUN_004232a0(&this->vtable);
  this->vtable = &STGroupBoatCVTable;
  this->field_0045 = 0;
  this->field_0041 = 0;
  this->field_003D = 0;
  this->field_0055 = 0;
  this->field_0051 = 0;
  this->field_004D = 0;
  this->field_0049 = 0;
  this->field_0059 = 0;
  puVar2 = &this->field_005D;
  for (iVar1 = 0x61; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  puVar2 = (undefined4 *)&this->field_0x1e2;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &this->field_020A;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &this->field_0226;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  this->field_0232 = 0xffffffff;
  this->field_0236 = 1;
  puVar2 = &this->field_024A;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)&this->field_0276;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  *(undefined4 *)&this->field_0x295 = 0;
  this->field_0299 = 0;
  this->field_029B = 0;
  this->field_029F = 0;
  *(undefined4 *)&this->field_0x2a3 = 0;
  *(undefined4 *)&this->field_0x2a7 = 0;
  *(undefined2 *)&this->field_0x2ab = 0;
  *(undefined4 *)&this->field_0x2b3 = 0;
  *(undefined4 *)&this->field_0x2b7 = 0;
  *(undefined2 *)&this->field_0x2bb = 0;
  *(undefined4 *)&this->field_0x2bd = 0;
  this->field_02C1 = 0;
  *(undefined4 *)&this->field_0x2c3 = 0;
  *(undefined4 *)&this->field_0x2c7 = 0;
  *(undefined2 *)&this->field_0x2cb = 0;
  this->field_0x2cd = 0;
  this->field_02CE = 0;
  *(undefined4 *)&this->field_0x2d2 = 0;
  this->field_02D6 = 0;
  this->field_02D8 = 0;
  *(undefined4 *)&this->field_0x2dc = 0;
  *(undefined4 *)&this->field_0x2e0 = 0;
  *(undefined4 *)&this->field_0x2e4 = 0;
  *(undefined4 *)&this->field_0x2e8 = 0;
  this->field_02EC = 0;
  *(undefined4 *)&this->field_0x2ee = 0;
  *(undefined4 *)&this->field_0x2f2 = 0;
  *(undefined2 *)&this->field_0x2f6 = 0;
  *(undefined4 *)&this->field_0x2f8 = 0;
  *(undefined4 *)&this->field_0x2fc = 0;
  *(undefined4 *)&this->field_0x300 = 0;
  this->field_0304 = 0;
  this->field_0308 = 0;
  this->field_030C = 0;
  this->field_030E = 0;
  this->field_01E6 = 3;
  this->field_0039 = 0;
  return &this->vtable;
}

