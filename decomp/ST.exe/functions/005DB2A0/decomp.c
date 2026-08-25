#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as StartSystemTy.
   Evidence: this_call_owners=[StartSystemTy]; agreed_this_calls=1; incoming_this_accesses=22;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall StartSystemTy::sub_005DB2A0(StartSystemTy *this)

{
  int iVar1;
  uint *puVar2;

  thunk_FUN_0055db70();
  if (this->field_002C != nullptr) {
    cMf32::RecMemFree(g_cMf32_00806780,(uint *)&this->field_002C);
  }
  if (this->field_0030 != nullptr) {
    ccFntTy::operator_delete((uint *)this->field_0030);
    this->field_0030 = nullptr;
  }
  if (this->field_0034 != nullptr) {
    ccFntTy::operator_delete((uint *)this->field_0034);
    this->field_0034 = nullptr;
  }
  puVar2 = this->array_0244;
  iVar1 = 6;
  do {
    FUN_0070b1d0((int *)puVar2);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this->field_038D);
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this->field_041E);
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this->field_04AF);
  if (-1 < (int)this->field_02EC) {
    FUN_006b3bb0((int *)g_ddxContext_008075A8,this->field_02EC);
    this->field_02EC = 0xffffffff;
  }
  if (this->field_02F0 != nullptr) {
    FreeAndNull(&this->field_02F0);
  }
  if (this->field_02F4 != nullptr) {
    FreeAndNull(&this->field_02F4);
  }
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this->field_02F8);
  if ((DArrayTy *)this->field_0548 != nullptr) {
    FUN_006b5570((DArrayTy *)this->field_0548);
  }
  this->field_0548 = nullptr;
  if (-1 < this->field_0540) {
    FUN_006b3bb0((int *)g_ddxContext_008075A8,this->field_0540);
    this->field_0540 = -1;
  }
  if (this->field_0544 != nullptr) {
    FreeAndNull(&this->field_0544);
  }
  if (this->field_067E != nullptr) {
    FreeAndNull(&this->field_067E);
  }
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this->field_055C);
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this->field_05ED);
  if (-1 < (int)this->field_0558) {
    FUN_006b3bb0((int *)g_ddxContext_008075A8,this->field_0558);
    this->field_0558 = 0xffffffff;
  }
  if (this->field_0682 != nullptr) {
    FreeAndNull(&this->field_0682);
  }
  if (-1 < (int)this->field_0554) {
    FUN_006b3bb0((int *)g_ddxContext_008075A8,this->field_0554);
    this->field_0554 = 0xffffffff;
  }
  if (this->field_0686 != nullptr) {
    FUN_006b5570(this->field_0686);
  }
  this->field_0686 = nullptr;
  return;
}

