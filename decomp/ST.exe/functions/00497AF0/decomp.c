#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 00790728 (store 00497B05)
   Evidence: final_vptr=00790728; returns_this=true; calls_before=1; field_writes_after=47;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00497AF0 returns STGroupBoatC::STGroupBoatC this @ 00497C6C */

STGroupBoatC * __thiscall STGroupBoatC::STGroupBoatC(STGroupBoatC *this)

{
  int iVar1;
  DArrayTy **ppDVar2;
  undefined4 *puVar3;

  sub_004232A0(this);
  this->vtable = &STGroupBoatCVTable;
  this->field_0045 = 0;
  this->field_0041 = 0;
  this->field_003D = 0;
  this->field_0055 = 0;
  this->field_0051 = 0;
  this->field_004D = 0;
  this->field_0049 = 0;
  this->field_0059 = 0;
  memset(&this->field_005D, 0, 0x185); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&this->field_0x1e2, 0, 0x28); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&this->field_020A, 0, 0x18); /* compiler bulk-zero initialization */
  iVar1 = 0;
  ppDVar2 = &this->field_0226;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppDVar2 = (DArrayTy *)0x0;
    ppDVar2 = ppDVar2 + 1;
  }
  this->field_0232 = -1;
  this->field_0236 = 1;
  memset(&this->field_024A, 0, 0x2c); /* compiler bulk-zero initialization */
  iVar1 = 0;
  puVar3 = (undefined4 *)&this->field_0276;
  memset(puVar3, 0, 0x1e); /* compiler bulk-zero initialization */
  puVar3 = (undefined4 *)((byte *)puVar3 + 0x1c);
  *(undefined1 *)((int)puVar3 + 2) = 0;
  *(undefined4 *)&this->field_0x295 = 0;
  this->field_0299 = 0;
  this->field_029B = 0;
  *(undefined4 *)&this->field_0x29f = 0;
  *(undefined4 *)&this->field_0x2a3 = 0;
  *(undefined4 *)&this->field_0x2a7 = 0;
  this->field_02AB = 0;
  *(undefined4 *)&this->field_0x2b3 = 0;
  *(undefined4 *)&this->field_0x2b7 = 0;
  *(undefined2 *)&this->field_0x2bb = 0;
  *(undefined4 *)&this->field_0x2bd = 0;
  this->field_02C1 = 0;
  *(undefined4 *)&this->field_0x2c3 = 0;
  *(undefined4 *)&this->field_0x2c7 = 0;
  this->field_02CB = 0;
  this->field_02CD = 0;
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
  this->field_02F6 = 0;
  *(undefined4 *)&this->field_0x2f8 = 0;
  *(undefined4 *)&this->field_0x2fc = 0;
  *(undefined4 *)&this->field_0x300 = 0;
  *(undefined4 *)&this->field_0x304 = 0;
  *(undefined4 *)&this->field_0x308 = 0;
  this->field_030C = 0;
  this->field_030E = 0;
  this->field_01E6 = CASE_3;
  this->field_0039 = 0;
  return this;
}

