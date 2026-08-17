#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 007905A0 (store 0044E6B9)
   Evidence: final_vptr=007905A0; returns_this=true; calls_before=2; field_writes_after=40;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 0044E690 returns STBoatC::STBoatC this @ 0044E8C3

   [STSwitchEnumApplier] Switch target field_045D uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_045DState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23
    */

STBoatC * __thiscall STBoatC::STBoatC(STBoatC *this)

{
  int iVar1;
  undefined4 *puVar2;
  short *psVar3;
  STBoatC_field_06F3State *pSVar4;

  /* ST_CALLSITE[0044E694]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  STGameObjC::STGameObjC((STGameObjC *)this);
  /* ST_CALLSITE[0044E6A1]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
  STT3DSprC::STT3DSprC((STT3DSprC *)&this->field_01D5);
  this->field_01D5 = &VTable_00790700;
  this->vtable = &STBoatCVTable;
  puVar2 = (undefined4 *)&this->field_0x231;
  memset(puVar2, 0, 0x8f); /* compiler bulk-zero initialization */
  puVar2 = (undefined4 *)((byte *)puVar2 + 0x8c);
  iVar1 = 0;
  memset(&this->field_02C0, 0, 0x195); /* compiler bulk-zero initialization */
  iVar1 = 0;
  this->field_0455 = 0;
  this->field_0459 = 0;
  this->field_045D = 0;
  this->field_0461 = 0;
  this->field_0465 = nullptr;
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
  ((undefined1 *)psVar3)[1] = 0;
  memset(&this->field_0510, 0, 0x1c); /* compiler bulk-zero initialization */
  iVar1 = 0;
  psVar3 = &this->field_052C;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)psVar3 = 0;
    psVar3 = psVar3 + 2;
  }
  psVar3 = &this->field_0588;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)psVar3 = 0;
    psVar3 = psVar3 + 2;
  }
  memset(&this->field_05A0, 0, 0x2a); /* compiler bulk-zero initialization */
  iVar1 = 0;
  this->field_05CA = 0;
  this->field_05CC = 0;
  this->field_05CE = 0;
  this->field_05D0 = 0;
  this->field_05D2 = 0;
  this->field_05D4 = 0;
  this->field_05D6 = 0;
  this->field_05DA = 0;
  this->field_05DC = 0;
  this->field_05DE = 0;
  this->field_05E0 = 0;
  this->field_05E2 = 0;
  this->field_05E4 = 0;
  this->field_05E6 = 0;
  this->field_05E8 = 0;
  this->field_05EC = 0;
  this->field_05EE = 0;
  this->field_05F0 = 0;
  this->field_05F2 = 0;
  this->field_05F4 = 0;
  this->field_05F6 = 0;
  this->field_05F8 = 0;
  memset(&this->field_05FC, 0, 0x1d); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&this->field_0619, 0, 0x1c); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&this->field_0635, 0, 0x36); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&this->field_066B, 0, 0x20); /* compiler bulk-zero initialization */
  iVar1 = 0;
  psVar3 = &this->field_068B;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)psVar3 = 0;
    psVar3 = psVar3 + 2;
  }
  *psVar3 = 0;
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
  *(undefined4 *)&this->field_0x6eb = 0;
  this->field_06EF = 0;
  this->field_045D = CASE_3;
  pSVar4 = &this->field_06F3;
  for (iVar1 = 0x5a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pSVar4 = CASE_0;
    pSVar4 = pSVar4 + 1;
  }
  *(undefined2 *)pSVar4 = CASE_0;
  STField<byte>(pSVar4,2) = 0;
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

