#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079C1E8 (store 005DA668)
   Evidence: final_vptr=0079C1E8; returns_this=true; calls_before=7; field_writes_after=31;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005DA610 returns StartSystemTy::StartSystemTy this @ 005DA74D */

StartSystemTy * __thiscall StartSystemTy::StartSystemTy(StartSystemTy *this,undefined4 param_1)

{
  int iVar1;

  SystemClassTy::SystemClassTy((SystemClassTy *)this,param_1,0x200);
  SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_02F8);
  SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_038D);
  SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_041E);
  SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_04AF);
  SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_055C);
  SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_05ED);
  this->vtable = &StartSystemTyVTable;
  g_startSystem_0081176C = this;
  this->field_0028 = DAT_00807332;
  this->field_02EA = 1;
  this->field_02EB = 1;
  this->field_02E6 = (MMsgTy *)0x0;
  this->field_0020 = 0;
  this->field_002C = (ushort *)0x0;
  this->field_0038 = (ccFntTy *)0x0;
  this->field_0034 = (ccFntTy *)0x0;
  this->field_0030 = (ccFntTy *)0x0;
  this->field_02F4 = (ushort *)0x0;
  this->field_02EC = -1;
  this->field_02F0 = (ushort *)0x0;
  this->field_0389 = 0;
  this->field_0540 = -1;
  this->field_0544 = (AnonPointee_StartSystemTy_0544 *)0x0;
  this->field_0548 = (uint *)0x0;
  this->field_0550 = 0;
  this->field_054C = 0;
  this->field_0558 = -1;
  this->field_0554 = -1;
  this->field_0682 = (ushort *)0x0;
  this->field_067E = (ushort *)0x0;
  this->field_0686 = (DArrayTy *)0x0;
  memset(&this->field_0x244, 0, 0x18); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&this->field_025C, 0, 0x8a); /* compiler bulk-zero initialization */
  this->field_068A = 0;
  this->field_068E = 0;
  this->field_0692 = 0xffffffff;
  this->field_0696 = (DArrayTy *)0x0;
  this->field_069A = 0;
  this->field_06B2 = 0;
  this->field_06AE = 0;
  this->field_069E = 0;
  return this;
}

