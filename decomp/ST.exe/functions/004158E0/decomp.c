
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 007900A0 (store 004158EC)
   Evidence: final_vptr=007900A0; returns_this=true; calls_before=1; field_writes_after=67;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

undefined4 * __thiscall STGameObjC::STGameObjC(STGameObjC *this)

{
  int iVar1;
  undefined4 *puVar2;

  STGroupBoatC::sub_006E60E0((STGroupBoatC *)this);
  this->vtable = &STGameObjCVTable;
  this->field_0020 = 0;
  this->field_0024 = 0xff;
  this->field_0028 = 1;
  this->field_002C = 0;
  *(undefined2 *)&this->field_0x30 = 0xffff;
  *(undefined2 *)&this->field_0x32 = 0xffff;
  puVar2 = (undefined4 *)&this->field_0x34;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  *(undefined2 *)&this->field_0x5f = 0xffff;
  *(undefined2 *)&this->field_0x5d = 0xffff;
  *(undefined2 *)&this->field_0x5b = 0xffff;
  *(undefined2 *)&this->field_0x6e = 0x2f;
  this->field_0x62 = 1;
  this->field_0x61 = 1;
  puVar2 = (undefined4 *)&this->field_0x93;
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined4 *)&this->field_0xfd = 1;
  *(undefined4 *)&this->field_0xcf = 0xffffffff;
  *(undefined4 *)&this->field_0xcb = 0xffffffff;
  *(undefined4 *)&this->field_0xc7 = 0xffffffff;
  *(undefined4 *)&this->field_0x111 = 0xffffffff;
  *(undefined4 *)&this->field_0x10d = 0xffffffff;
  *(undefined4 *)&this->field_0x109 = 0xffffffff;
  *(undefined4 *)&this->field_0x105 = 0xffffffff;
  *(undefined4 *)&this->field_0x101 = 0xffffffff;
  this->field_0121 = 0;
  this->field_011D = 0;
  this->field_0129 = 0;
  this->field_0125 = 0;
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
  this->field_015D = 0;
  this->field_0161 = 0;
  this->field_0165 = 0;
  this->field_0169 = 0;
  this->field_016D = 0;
  this->field_0171 = 0;
  this->field_0175 = 0;
  this->field_0179 = 0;
  this->field_017D = 0;
  this->field_0181 = 0;
  this->field_0189 = 0;
  this->field_0185 = 0;
  this->field_0191 = 0;
  this->field_018D = 0;
  this->field_0199 = (AnonPointee_STGameObjC_0199 *)0x0;
  this->field_0195 = (AnonPointee_STGameObjC_0195 *)0x0;
  this->field_01A1 = 0;
  this->field_019D = 0;
  this->field_01A9 = 0;
  this->field_01A5 = 0;
  this->field_01B1 = (AnonPointee_STGameObjC_01B1 *)0x0;
  this->field_01AD = (AnonPointee_STGameObjC_01AD *)0x0;
  this->field_01B9 = 0;
  this->field_01B5 = 0;
  this->field_01C1 = 0;
  this->field_01BD = 0;
  this->field_01C9 = 0;
  this->field_01C5 = 0;
  this->field_01CD = 0;
  this[1].vtable = (STGameObjCVTable *)0x0;
  return &this->vtable;
}

