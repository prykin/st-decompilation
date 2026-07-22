#include "../../pseudocode_runtime.h"


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
  short *psVar3;
  STBoatC_field_06F3State *pSVar4;

  STGameObjC::STGameObjC((STGameObjC *)this);
  thunk_FUN_004ab810((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = &VTable_00790700;
  this->vtable = &STBoatCVTable;
  puVar2 = (undefined4 *)&this->field_0x231;
  memset(puVar2, 0, 0x8e); /* compiler bulk-zero initialization */
  puVar2 = (undefined4 *)((byte *)puVar2 + 0x8c);
  iVar1 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  memset(&this->field_02C0, 0, 0x195); /* compiler bulk-zero initialization */
  iVar1 = 0;
  this->field_0455 = 0;
  this->field_0459 = 0;
  this->field_045D = 0;
  this->field_0461 = 0;
  this->field_0465 = (void *)0x0;
  psVar3 = &this->field_0469;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)psVar3 = 0;
    psVar3 = psVar3 + 2;
  }
  *psVar3 = 0;
  this->field_048F = 0;
  this->field_0493 = 0;
  this->field_0497 = 0;
  psVar3 = &this->field_049B;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)psVar3 = 0;
    psVar3 = psVar3 + 2;
  }
  *psVar3 = 0;
  psVar3 = &this->field_04DD;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)psVar3 = 0;
    psVar3 = psVar3 + 2;
  }
  *psVar3 = 0;
  *(undefined1 *)(psVar3 + 1) = 0;
  memset(&this->field_0510, 0, 0x1c); /* compiler bulk-zero initialization */
  iVar1 = 0;
  psVar3 = &this->field_052C;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)psVar3 = 0;
    psVar3 = psVar3 + 2;
  }
  memset(&this->field_0588, 0, 0x18); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&this->field_05A0, 0, 0x2a); /* compiler bulk-zero initialization */
  iVar1 = 0;
  *(undefined4 *)&this->field_0x5ca = 0;
  *(undefined4 *)&this->field_0x5ce = 0;
  *(undefined4 *)&this->field_0x5d2 = 0;
  this->field_05D6 = 0;
  this->field_05DA = 0;
  *(undefined4 *)&this->field_0x5dc = 0;
  *(undefined4 *)&this->field_0x5e0 = 0;
  *(undefined4 *)&this->field_0x5e4 = 0;
  this->field_05E8 = 0;
  *(undefined4 *)&this->field_0x5ec = 0;
  *(undefined4 *)&this->field_0x5f0 = 0;
  *(undefined4 *)&this->field_0x5f4 = 0;
  this->field_05F8 = 0;
  memset(&this->field_05FC, 0, 0x1d); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&this->field_0619, 0, 0x1c); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&this->field_0635, 0, 0x36); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&this->field_066B, 0, 0x20); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&this->field_068B, 0, 0x1e); /* compiler bulk-zero initialization */
  iVar1 = 0;
  psVar3 = &this->field_06A9;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)psVar3 = 0;
    psVar3 = psVar3 + 2;
  }
  *psVar3 = 0;
  psVar3 = &this->field_06CB;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)psVar3 = 0;
    psVar3 = psVar3 + 2;
  }
  this->field_06EB = 0;
  this->field_06EF = 0;
  this->field_045D = CASE_3;
  pSVar4 = &this->field_06F3;
  for (iVar1 = 0x5a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pSVar4 = CASE_0;
    pSVar4 = pSVar4 + 1;
  }
  *(undefined2 *)pSVar4 = CASE_0;
  *(byte *)((int)pSVar4 + 2) = 0;
  this->field_0716 = 100;
  this->field_0712 = 100;
  this->field_071A = 100;
  this->field_073E = 1;
  this->field_0776 = 1;
  this->field_074A = -1;
  this->field_076E = -1;
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

