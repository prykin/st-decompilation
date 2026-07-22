
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA8CC>00402EE1

   [STObjectFactoryApplier] Central object factory for 0x0125 (ST_OBJECT_POP_UP).
   Evidence: registry[53] at 007CA8C8 stores type 0x0125 and executable pointer 00402EE1; allocation
   size 161 uniquely matches /PopUpTy */

PopUpTy * __cdecl CreatePopUp(void)

{
  PopUpTy *this;
  undefined4 *puVar1;
  int iVar2;

  this = (PopUpTy *)FUN_006b04d0(0xa1);
  if (this != (PopUpTy *)0x0) {
    sub_006E5FB0(this);
    *(undefined **)this = &UNK_0079ace8;
    this->field_0090 = (ushort *)0x0;
    this->field_0094 = (ccFntTy *)0x0;
    this->field_0098 = (uint *)0x0;
    puVar1 = &this->field_0054;
    iVar2 = 0xf;
    do {
      puVar1[-0xf] = 0xffffffff;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    this->field_009C = 0;
    return this;
  }
  return (PopUpTy *)0x0;
}

