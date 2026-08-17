#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 00790728 (store 00497B05)
   Evidence: final_vptr=00790728; returns_this=true; calls_before=1; field_writes_after=47;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00497AF0 returns STGroupBoatC::STGroupBoatC this @ 00497C6C

   [STSwitchEnumApplier] Switch target field_01E6 uses
   /SubmarineTitans/Recovered/Enums/STGroupBoatC_field_01E6State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21
    */

STGroupBoatC * __thiscall STGroupBoatC::STGroupBoatC(STGroupBoatC *this)

{
  int iVar1;
  DArrayTy **ppDVar2;
  short *psVar4;

  /* ST_CALLSITE[00497AF4]: CALL 0x004053b7; direct=004053B7 STGroupBoatC::sub_004232A0 */
  sub_004232A0(this);
  this->vtable = &STGroupBoatCVTable;
  this->field_0045 = 0;
  this->field_0041 = 0;
  this->field_003D = 0;
  this->field_0055 = 0;
  this->field_0051 = 0;
  this->field_004D = 0;
  this->field_0049 = 0;
  this->field_0059 = nullptr;
  memset(&this->field_005D, 0, 0x185); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&this->field_0x1e2, 0, 0x28); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&this->field_020A, 0, 0x18); /* compiler bulk-zero initialization */
  iVar1 = 0;
  ppDVar2 = &this->field_0226;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppDVar2 = nullptr;
    ppDVar2 = ppDVar2 + 1;
  }
  this->field_0232 = -1;
  this->field_0236 = 1;
  memset(&this->field_024A, 0, 0x2c); /* compiler bulk-zero initialization */
  iVar1 = 0;
  psVar4 = &this->field_0276;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)psVar4 = 0;
    psVar4 = psVar4 + 2;
  }
  *psVar4 = 0;
  ((undefined1 *)psVar4)[1] = 0;
  this->field_0295 = 0;
  this->field_0297 = 0;
  this->field_0299 = 0;
  this->field_029B = 0;
  this->field_029F = 0;
  this->field_02A3 = 0;
  this->field_02A5 = 0;
  *(undefined4 *)&this->field_0x2a7 = 0;
  this->field_02AB = 0;
  this->field_02B3 = 0;
  this->field_02B5 = 0;
  *(undefined4 *)&this->field_0x2b7 = 0;
  this->field_02BB = 0;
  this->field_02BD = 0;
  this->field_02BF = 0;
  this->field_02C1 = 0;
  *(undefined4 *)&this->field_0x2c3 = 0;
  *(undefined4 *)&this->field_0x2c7 = 0;
  this->field_02CB = 0;
  this->field_02CD = 0;
  this->field_02CE = 0;
  this->field_02D2 = 0;
  this->field_02D4 = 0;
  this->field_02D6 = 0;
  this->field_02D8 = 0;
  this->field_02DC = 0;
  this->field_02DE = 0;
  this->field_02E0 = 0;
  this->field_02E2 = 0;
  this->field_02E4 = 0;
  this->field_02E6 = 0;
  this->field_02E8 = 0;
  this->field_02EA = 0;
  this->field_02EC = 0;
  this->field_02EE = 0;
  this->field_02F0 = 0;
  *(undefined4 *)&this->field_0x2f2 = 0;
  this->field_02F6 = 0;
  this->field_02F8 = 0;
  this->field_02FA = 0;
  this->field_02FC = 0;
  this->field_02FE = 0;
  this->field_0300 = 0;
  this->field_0302 = 0;
  this->field_0304 = 0;
  this->field_0306 = 0;
  *(undefined4 *)&this->field_0x308 = 0;
  this->field_030C = 0;
  *(undefined4 *)&this->field_0x30e = 0;
  this->field_01E6 = CASE_3;
  this->field_0039 = 0;
  return this;
}

