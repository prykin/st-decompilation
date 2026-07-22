
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA814>004048BD

   [STObjectFactoryApplier] Central object factory for 0x011F (ST_OBJECT_MONEY).
   Evidence: registry[30] at 007CA810 stores type 0x011F and executable pointer 004048BD; allocation
   size 166 uniquely matches /MoneyTy */

MoneyTy * __cdecl CreateMoney(void)

{
  MoneyTy *this;

  this = (MoneyTy *)FUN_006b04d0(0xa6);
  if (this != (MoneyTy *)0x0) {
    sub_006E5FB0(this);
    *(undefined **)this = &UNK_0079ace4;
    this->field_0048 = 0x24;
    this->field_0050 = 0x24;
    this->field_0034 = 0xf;
    this->field_0054 = 0xb;
    this->field_004C = 0xb;
    this->field_0044 = 0xb;
    this->field_005C = 8;
    this->field_0060 = 0x1e;
    this->field_0064 = 0xc;
    this->field_0068 = 0;
    this->field_007E = (ushort *)0x0;
    this->field_007A = (ushort *)0x0;
    this->field_0076 = (ushort *)0x0;
    this->field_0072 = (ushort *)0x0;
    this->field_0082 = (ushort *)0x0;
    this->field_006E = (ccFntTy *)0x0;
    this->field_006A = (ccFntTy *)0x0;
    this->field_009E = 0;
    this->field_00A3 = 0;
    this->field_009A = 0;
    this->field_0096 = 0;
    this->field_0092 = 0;
    this->field_008E = 0;
    this->field_008A = 0;
    this->field_0086 = 0;
    this->field_00A2 = 1;
    return this;
  }
  return (MoneyTy *)0x0;
}

