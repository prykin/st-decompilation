#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 00790AA0 (store 004B7F47)
   Evidence: final_vptr=00790AA0; returns_this=true; calls_before=2; field_writes_after=3;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 004B7EF0 returns TLOBaseTy::TLOBaseTy this @ 004B7F63

   [STSwitchEnumApplier] Switch target field_0245 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_0245State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_34=52;CASE_35=53;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_41=65;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4F=79;CASE_50=80;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_73=115;CASE_FFFFFFFF=4294967295
    */

TLOBaseTy * __thiscall TLOBaseTy::TLOBaseTy(TLOBaseTy *this)

{
  /* ST_CALLSITE[004B7EF4]: CALL 0x00401933; direct=00401933 STGameObjC::STGameObjC */
  STGameObjC::STGameObjC((STGameObjC *)this);
  /* ST_CALLSITE[004B7F01]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
  STT3DSprC::STT3DSprC((STT3DSprC *)&this->field_01D5);
  this->field_01D5 = &VTable_00790C00;
  this->field_05EF = nullptr;
  this->field_05F3 = 0;
  this->field_05F7 = nullptr;
  this->field_05FF = nullptr;
  this->field_0603 = nullptr;
  this->field_0607 = nullptr;
  this->field_0251 = 0;
  this->field_061B = nullptr;
  this->field_061F = nullptr;
  this->vtable = &TLOBaseTyVTable;
  this->field_0245 = CASE_FFFFFFFF;
  this->field_0249 = 0xffffffff;
  this->field_024D = 0xffffffff;
  return this;
}

