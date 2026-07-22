
/* [STObjectFactoryApplier] Central object factory for 0x0004 (ST_OBJECT_TYPE_0004).
   Evidence: exact registry pointer; create function first */

SliderClassTy * __cdecl CreateSlider(void)

{
  SliderClassTy *this;

  this = (SliderClassTy *)FUN_006b04d0(100);
  if (this != (SliderClassTy *)0x0) {
    sub_006E5FB0(this);
    this->field_0000 = &VTable_0079E2C8;
    this->field_001C = 0;
    this->field_0020 = 0;
    this->field_0024 = 0;
    this->field_0050 = 0;
    return this;
  }
  return (SliderClassTy *)0x0;
}

