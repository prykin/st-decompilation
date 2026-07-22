
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9FC>00403558

   [STObjectFactoryApplier] Central object factory for 0x0157 (ST_OBJECT_ST_CONTAINER).
   Evidence: registry[91] at 007CA9F8 stores type 0x0157 and executable pointer 00403558; allocation
   size 1147 uniquely matches /STContainerC; calls base/helper constructor(s) STSprGameObjC; exact
   derived allocation size wins */

STContainerC * __cdecl CreateSTContainer(void)

{
  STContainerC *this;

  this = (STContainerC *)FUN_006b04d0(0x47b);
  if (this != (STContainerC *)0x0) {
    STSprGameObjC::STSprGameObjC((STSprGameObjC *)this);
    this->field_0000 = (AnonPointee_STContainerC_0000 *)&PTR_GetMessage_0079c714;
    this->field_01D5 = &PTR_thunk_FUN_004210a0_0079c710;
    return this;
  }
  return (STContainerC *)0x0;
}

