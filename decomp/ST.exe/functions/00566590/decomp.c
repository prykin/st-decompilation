
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA924>00403C97

   [STObjectFactoryApplier] Central object factory for 0x012E (ST_OBJECT_SOUND_MANAGER).
   Evidence: registry[64] at 007CA920 stores type 0x012E and executable pointer 00403C97; allocation
   size 65 uniquely matches /SoundManagerTy */

SoundManagerTy * __cdecl CreateSoundManager(void)

{
  SoundManagerTy *this;

  this = (SoundManagerTy *)FUN_006b04d0(0x41);
  if (this != (SoundManagerTy *)0x0) {
    sub_006E5FB0(this);
    *(undefined **)this = &UNK_0079b024;
    this->field_0038 = 0;
    this->field_0024 = 0;
    this->field_0020 = 0;
    this->field_0039 = -1;
    this->field_003D = 0;
    this->field_0028 = 0;
    this->field_002C = 0;
    this->field_0030 = 0;
    this->field_0034 = 0;
    this->field_0018 = 0;
    return this;
  }
  return (SoundManagerTy *)0x0;
}

