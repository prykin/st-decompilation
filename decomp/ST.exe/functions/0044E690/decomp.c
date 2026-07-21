
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 007905A0 (store 0044E6B9)
   Evidence: final_vptr=007905A0; returns_this=true; calls_before=2; field_writes_after=40;
   table_confidence=high
   
   [STPrototypeApplier] Propagated return.
   Evidence: 0044E690 returns STBoatC::STBoatC this @ 0044E8C3 */

STBoatC * __thiscall STBoatC::STBoatC(STBoatC *this)

{
  int iVar1;
  undefined4 *puVar2;
  STBoatC_field_06F3State *pSVar3;
  
  STGameObjC::STGameObjC((STGameObjC *)this);
  thunk_FUN_004ab810((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &VTable_00790700;
  this->vtable = &STBoatCVTable;
  puVar2 = (undefined4 *)&this->field_0x231;
  for (iVar1 = 0x23; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  puVar2 = (undefined4 *)&this->field_0x2c0;
  for (iVar1 = 0x65; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  this->field_0455 = 0;
  this->field_0459 = 0;
  this->field_045D = 0;
  this->field_0461 = 0;
  this->field_0465 = 0;
  puVar2 = (undefined4 *)&this->field_0469;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  this->field_048F = 0;
  this->field_0493 = 0;
  this->field_0497 = 0;
  puVar2 = (undefined4 *)&this->field_049B;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  puVar2 = (undefined4 *)&this->field_0x4dd;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  puVar2 = (undefined4 *)&this->field_0510;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)&this->field_052C;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)&this->field_0x588;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)&this->field_05A0;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined4 *)&this->field_0x5ca = 0;
  *(undefined4 *)&this->field_0x5ce = 0;
  *(undefined4 *)&this->field_0x5d2 = 0;
  this->field_05D6 = 0;
  this->field_05DA = 0;
  this->field_05DC = 0;
  this->field_05E0 = 0;
  this->field_05E4 = 0;
  this->field_05E8 = 0;
  *(undefined4 *)&this->field_0x5ec = 0;
  *(undefined4 *)&this->field_0x5f0 = 0;
  *(undefined4 *)&this->field_0x5f4 = 0;
  this->field_05F8 = 0;
  puVar2 = (undefined4 *)&this->field_0x5fc;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  puVar2 = (undefined4 *)&this->field_0x619;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &this->field_0635;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  puVar2 = (undefined4 *)&this->field_0x66b;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)&this->field_068B;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  puVar2 = (undefined4 *)&this->field_06A9;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  puVar2 = (undefined4 *)&this->field_0x6cb;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  this->field_06EB = 0;
  this->field_06EF = 0;
  this->field_045D = CASE_3;
  pSVar3 = &this->field_06F3;
  for (iVar1 = 0x5a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pSVar3 = CASE_0;
    pSVar3 = pSVar3 + 1;
  }
  *(undefined2 *)pSVar3 = CASE_0;
  *(byte *)((int)pSVar3 + 2) = 0;
  this->field_0716 = 100;
  this->field_0712 = 100;
  this->field_071A = 100;
  this->field_073E = 1;
  this->field_0776 = 1;
  this->field_074A = 0xffffffff;
  this->field_076E = 0xffffffff;
  this->field_07F2 = 0xffff;
  this->field_07AA = 200;
  this->field_07A6 = 200;
  this->field_080C = 0x324;
  this->field_0810 = 0xc9;
  this->field_0816 = 5;
  this->field_0814 = 0x3ed;
  this->field_081C = 0xffff;
  this->field_0826 = 0xfe;
  return this;
}

