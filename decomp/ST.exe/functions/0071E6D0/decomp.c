
/* [STObjectFactoryApplier] Central object factory for 0x0009 (ST_OBJECT_TYPE_0009).
   Evidence: exact registry pointer; create function first */

RadioClassTy * __cdecl CreateRadio(void)

{
  RadioClassTy *this;

  this = (RadioClassTy *)FUN_006b04d0(0x68);
  if (this != (RadioClassTy *)0x0) {
    sub_006E5FB0(this);
    *(VTable_0079E294 **)this = &VTable_0079E294;
    this->field_0020 = 0;
    this->field_0024 = 0xffffffff;
    return this;
  }
  return (RadioClassTy *)0x0;
}

