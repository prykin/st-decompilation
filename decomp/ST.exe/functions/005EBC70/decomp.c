
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9E4>0040228E

   [STObjectFactoryApplier] Central object factory for 0x014F (ST_OBJECT_ST_ARTIAFACT).
   Evidence: registry[88] at 007CA9E0 stores type 0x014F and executable pointer 0040228E; allocation
   size 1143 uniquely matches /STArtiafactC; calls base/helper constructor(s) STSprGameObjC; exact
   derived allocation size wins */

STArtiafactC * __cdecl CreateSTArtiafact(void)

{
  STArtiafactC *this;

  this = (STArtiafactC *)FUN_006b04d0(0x477);
  if (this != (STArtiafactC *)0x0) {
    STSprGameObjC::STSprGameObjC((STSprGameObjC *)this);
    this->field_0000 = (AnonPointee_STArtiafactC_0000 *)&PTR_GetMessage_0079c260;
    this->field_01D5 = &PTR_thunk_FUN_004210a0_0079c25c;
    return this;
  }
  return (STArtiafactC *)0x0;
}

