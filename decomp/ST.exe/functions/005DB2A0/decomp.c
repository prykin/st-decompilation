
/* [STMethodOwnerApplier] Structural method owner recovered as StartSystemTy.
   Evidence: this_call_owners=[StartSystemTy]; agreed_this_calls=1; incoming_this_accesses=22;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0 */

void __thiscall StartSystemTy::sub_005DB2A0(StartSystemTy *this)

{
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_00;
  ccFntTy *this_00;
  int iVar1;
  int *piVar2;

  thunk_FUN_0055db70();
  this_00 = (ccFntTy *)0x0;
  if (this->field_002C != (ushort *)0x0) {
    cMf32::RecMemFree(g_cMf32_00806780,(uint *)&this->field_002C);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    this_00 = extraout_ECX;
  }
  if (this->field_0030 != (ccFntTy *)0x0) {
    ccFntTy::operator(this_00,(uint *)this->field_0030);
    this->field_0030 = (ccFntTy *)0x0;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    this_00 = extraout_ECX_00;
  }
  if (this->field_0034 != (ccFntTy *)0x0) {
    ccFntTy::operator(this_00,(uint *)this->field_0034);
    this->field_0034 = (ccFntTy *)0x0;
  }
  piVar2 = (int *)&this->field_0x244;
  iVar1 = 6;
  do {
    FUN_0070b1d0(piVar2);
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this->field_038D);
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this->field_041E);
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this->field_04AF);
  if (-1 < this->field_02EC) {
    FUN_006b3bb0((int *)PTR_008075a8,this->field_02EC);
    this->field_02EC = -1;
  }
  if (this->field_02F0 != (ushort *)0x0) {
    FreeAndNull(&this->field_02F0);
  }
  if (this->field_02F4 != (ushort *)0x0) {
    FreeAndNull(&this->field_02F4);
  }
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this->field_02F8);
  if ((AnonShape_006B5570_4D68B99C *)this->field_0548 != (AnonShape_006B5570_4D68B99C *)0x0) {
    FUN_006b5570((AnonShape_006B5570_4D68B99C *)this->field_0548);
  }
  this->field_0548 = (uint *)0x0;
  if (-1 < this->field_0540) {
    FUN_006b3bb0((int *)PTR_008075a8,this->field_0540);
    this->field_0540 = -1;
  }
  if (this->field_0544 != (AnonPointee_StartSystemTy_0544 *)0x0) {
    FreeAndNull(&this->field_0544);
  }
  if (this->field_067E != (ushort *)0x0) {
    FreeAndNull(&this->field_067E);
  }
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this->field_055C);
  SpriteClassTy::CloseSprite((SpriteClassTy *)&this->field_05ED);
  if (-1 < this->field_0558) {
    FUN_006b3bb0((int *)PTR_008075a8,this->field_0558);
    this->field_0558 = -1;
  }
  if (this->field_0682 != (ushort *)0x0) {
    FreeAndNull(&this->field_0682);
  }
  if (-1 < this->field_0554) {
    FUN_006b3bb0((int *)PTR_008075a8,this->field_0554);
    this->field_0554 = -1;
  }
  if ((AnonShape_006B5570_4D68B99C *)this->field_0686 != (AnonShape_006B5570_4D68B99C *)0x0) {
    FUN_006b5570((AnonShape_006B5570_4D68B99C *)this->field_0686);
  }
  this->field_0686 = (uint *)0x0;
  return;
}

