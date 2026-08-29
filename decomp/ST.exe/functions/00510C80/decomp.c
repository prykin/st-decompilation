#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] typed_pointer_return.
   Evidence: all 1 value-return path(s) forward Listing variable param_1 with evidence-backed
   structure /SubmarineTitans/Recovered/PointerShapes/AnonShape_00510C80_2C2DC38C (current recovered
   extent=592)

   [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079AC48 (store 00510CB9)
   Evidence: final_vptr=0079AC48; returns_this=true; calls_before=1; field_writes_after=38;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=medium;
   exact_factory_tail=00510C50->00403035->00510C80; allocation_size=596

   [STSwitchEnumApplier] Switch target field_0172 uses
   /SubmarineTitans/Recovered/Enums/HelpPanelTy_field_0172State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

HelpPanelTy * __thiscall HelpPanelTy::HelpPanelTy(HelpPanelTy *this)

{
  byte *pbVar1;
  int iVar2;


  sub_006E5FB0(this);
  this->field_005C = 0;
  this->field_0044 = 0;
  this->field_003C = 0;
  this->field_0060 = 0xffffffff;
  this->field_0064 = 3;
  this->field_0068 = nullptr;
  this->field_0172 = CASE_2;
  this->field_0178 = 0;
  this->field_017A = 0;
  this->vtable = &HelpPanelTyVTable;
  this->field_0040 = 500;
  this->field_0048 = 400;
  this->field_01A0 = 0;
  this->field_01A2 = 0;
  this->field_01A1 = 0;
  this->field_01A7 = 0;
  this->field_01A3 = nullptr;
  this->field_01DC = nullptr;
  this->field_01E8 = nullptr;
  this->field_01E4 = nullptr;
  this->field_01E0 = nullptr;
  this->field_0218 = nullptr;
  this->field_01EC = nullptr;
  memset(this->field_01F0, 0, 0x28); /* compiler bulk-zero initialization */
  iVar2 = 0;
  this->field_017C = 0;
  memset(this->field_0180, 0, 0x1c); /* compiler bulk-zero initialization */
  this->field_019C = 0;
  this->field_01CB = nullptr;
  this->field_01BB = nullptr;
  this->field_01B3 = nullptr;
  pbVar1 = *(byte **)structHelp_exref;
  this->field_01CF = 0xffffffff;
  this->field_01C7 = pbVar1;
  this->field_01BF = 0;
  this->field_01B7 = 0;
  this->field_01D7 = nullptr;
  this->field_01DB = 0;
  this->field_024C = nullptr;
  this->field_021C = nullptr;
  this->field_0238 = nullptr;
  this->field_0248 = nullptr;
  this->field_022C = nullptr;
  this->field_0228 = nullptr;
  this->field_0234 = nullptr;
  this->field_0230 = nullptr;
  this->field_0220 = nullptr;
  this->field_0224 = nullptr;
  this->field_0244 = nullptr;
  this->field_0240 = 0;
  this->field_023C = 0;
  this->field_01D3 = nullptr;
  return this;
}

