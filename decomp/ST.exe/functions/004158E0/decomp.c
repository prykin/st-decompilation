#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 007900A0 (store 004158EC)
   Evidence: final_vptr=007900A0; returns_this=true; calls_before=1; field_writes_after=67;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

STGameObjC * __thiscall STGameObjC::STGameObjC(STGameObjC *this)

{
  int iVar1;
  uint *puVar2;
  sub_006E60E0(this);
  this->vtable = &STGameObjCVTable;
  this->field_0020 = 0;
  this->field_0024 = 0xff;
  this->field_0028 = 1;
  this->field_002C = 0;
  this->field_0030 = 0xffff;
  this->field_0032 = 0xffff;
  puVar2 = (undefined4 *)&this->field_0x34;
  memset(puVar2, 0, 0x5f); /* compiler bulk-zero initialization */
  puVar2 = (undefined4 *)((byte *)puVar2 + 0x5c);
  iVar1 = 0;
  this->field_005F = -1;
  this->field_005D = -1;
  this->field_005B = -1;
  this->field_006E = 0x2f;
  this->field_0062 = 1;
  this->field_0061 = 1;
  memset(&this->field_0x93, 0, 0x6e); /* compiler bulk-zero initialization */
  this->field_00FD = 1;
  this->field_00CF = -1;
  this->field_00CB = -1;
  this->field_00C7 = -1;
  this->field_0111 = 0xffffffff;
  this->field_010D = 0xffffffff;
  this->field_0109 = 0xffffffff;
  this->field_0105 = 0xffffffff;
  this->field_0101 = 0xffffffff;
  this->field_0121 = nullptr;
  this->field_011D = nullptr;
  this->field_0129 = nullptr;
  this->field_0125 = nullptr;
  this->field_012D = 0;
  this->field_0131 = 0;
  this->field_0135 = 0;
  this->field_0139 = 0;
  this->field_013D = 0;
  this->field_0141 = 0;
  this->field_0145 = 0;
  this->field_0149 = 0;
  this->field_014D = 0;
  this->field_0151 = 0;
  this->field_0155 = 0;
  this->field_0159 = 0;
  this->field_015D = nullptr;
  this->field_0161 = nullptr;
  this->field_0165 = nullptr;
  this->field_0169 = nullptr;
  this->field_016D = nullptr;
  this->field_0171 = nullptr;
  this->field_0175 = nullptr;
  this->field_0179 = nullptr;
  this->field_017D = nullptr;
  this->field_0181 = nullptr;
  this->field_0189 = nullptr;
  this->field_0185 = nullptr;
  this->field_0191 = nullptr;
  this->field_018D = nullptr;
  this->field_0199 = nullptr;
  this->field_0195 = nullptr;
  this->field_01A1 = 0;
  this->field_019D = 0;
  this->field_01A9 = nullptr;
  this->field_01A5 = nullptr;
  this->field_01B1 = nullptr;
  this->field_01AD = nullptr;
  this->field_01B9 = nullptr;
  this->field_01B5 = nullptr;
  this->field_01C1 = nullptr;
  this->field_01BD = nullptr;
  this->field_01C9 = nullptr;
  this->field_01C5 = nullptr;
  this->field_01CD = 0;
  this->field_01D1 = 0;
  return this;
}

