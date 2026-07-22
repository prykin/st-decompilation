
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA79C>00402419

   [STObjectFactoryApplier] Central object factory for 0x0106 (ST_OBJECT_ST_TORP).
   Evidence: registry[15] at 007CA798 stores type 0x0106 and executable pointer 00402419; allocation
   size 649 uniquely matches /STTorpC; calls base/helper constructor(s) STGameObjC; exact derived
   allocation size wins */

STTorpC * __cdecl CreateSTTorp(void)

{
  STGameObjC *this;

  this = (STGameObjC *)FUN_006b04d0(0x289);
  if (this != (STGameObjC *)0x0) {
    STGameObjC::STGameObjC(this);
    thunk_FUN_004ab810((AnonShape_004AB810_8E5693D5 *)&this->field_0x1d5);
    *(undefined **)&this->field_0x1d5 = &UNK_0079d60c;
    this->vtable = (STGameObjCVTable *)&PTR_GetMessage_0079d4ac;
    return (STTorpC *)this;
  }
  return (STTorpC *)0x0;
}

