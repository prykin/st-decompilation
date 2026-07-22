
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA78C>00404B38

   [STObjectFactoryApplier] Central object factory for 0x0103 (ST_OBJECT_ST_ALGA).
   Evidence: registry[13] at 007CA788 stores type 0x0103 and executable pointer 00404B38; allocation
   size 76 uniquely matches /STAlgaC */

STAlgaC * __cdecl CreateSTAlga(void)

{
  STAlgaC *this;

  this = (STAlgaC *)FUN_006b04d0(0x4c);
  if (this != (STAlgaC *)0x0) {
    sub_006E60E0(this);
    *(undefined **)this = &UNK_0079b188;
    return this;
  }
  return (STAlgaC *)0x0;
}

