
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA854>004021CB

   [STObjectFactoryApplier] Central object factory for 0x0123 (ST_OBJECT_PAUSE_PANEL).
   Evidence: registry[38] at 007CA850 stores type 0x0123 and executable pointer 004021CB; allocation
   size 392 uniquely matches /PausePanelTy */

PausePanelTy * __cdecl CreatePausePanel(void)

{
  PausePanelTy *this;

  this = (PausePanelTy *)FUN_006b04d0(0x188);
  if (this != (PausePanelTy *)0x0) {
    sub_006E5FB0(this);
    this->field_005C = 0;
    this->field_003C = 0;
    this->field_0068 = 0;
    *(undefined4 *)&this->field_0x178 = 0;
    this->field_017C = (ccFntTy *)0x0;
    this->field_0180 = (ushort *)0x0;
    this->field_0184 = 0;
    this->field_0060 = 0xffffffff;
    *(undefined4 *)&this->field_0x64 = 4;
    this->field_0172 = CASE_2;
    *(undefined ***)this = &PTR_GetMessage_0079ad2c;
    this->field_0044 = 0x9c;
    this->field_0040 = 0x174;
    *(undefined4 *)&this->field_0x48 = 0xa0;
    return this;
  }
  return (PausePanelTy *)0x0;
}

