#include "../../pseudocode_runtime.h"


/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079C1E8 (store 005DA668)
   Evidence: final_vptr=0079C1E8; returns_this=true; calls_before=7; field_writes_after=31;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005DA610 returns StartSystemTy::StartSystemTy this @ 005DA74D

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005DA610 -> 006E51C0 @ 005DA621 */

StartSystemTy * __thiscall StartSystemTy::StartSystemTy(StartSystemTy *this,AppClassTy *param_1)

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
  this->field_02E6 = nullptr;
  this->field_0020 = 0;
  this->field_002C = nullptr;
  this->field_0038 = nullptr;
  this->field_0034 = nullptr;
  this->field_0030 = nullptr;
  this->field_02F4 = nullptr;
  this->field_02EC = 0xffffffff;
  this->field_02F0 = nullptr;
  this->field_0389 = 0;
  this->field_0540 = -1;
  this->field_0544 = nullptr;
  this->field_0548 = nullptr;
  this->field_0550 = 0;
  this->field_054C = 0;
  this->field_0558 = 0xffffffff;
  this->field_0554 = 0xffffffff;
  this->field_0682 = nullptr;
  this->field_067E = nullptr;
  this->field_0686 = nullptr;
  memset(this->array_0244, 0, 0x18); /* compiler bulk-zero initialization */
  iVar1 = 0;
  memset(&this->field_025C, 0, 0x8a); /* compiler bulk-zero initialization */
  this->field_068A = 0;
  this->field_068E = 0;
  this->field_0692 = 0xffffffff;
  this->field_0696 = nullptr;
  this->field_069A = nullptr;
  this->field_06B2 = 0;
  this->field_06AE = 0;
  this->field_069E = 0;
  return this;
}

