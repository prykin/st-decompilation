
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA77C>00405353

   [STObjectFactoryApplier] Central object factory for 0x0101 (ST_OBJECT_TYPE_0101).
   Evidence: registry[11] at 007CA778 stores type 0x0101 and executable pointer 00405353; allocation
   size 1275 has no unique current class-layout match */

void * __cdecl FUN_00543450(void)

{
  CursorClassTy *this;
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  CursorClassTy_field_00DEState *pCVar5;

  this = (CursorClassTy *)FUN_006b04d0(0x4fb);
  if (this != (CursorClassTy *)0x0) {
    sub_006E5FB0(this);
    SpriteClassTy::SpriteClassTy((SpriteClassTy *)&this->field_0018);
    this->field_0000 = &UNK_0079ae04;
    this->field_0018 = &UNK_0079adf4;
    this->field_00AD = 0;
    this->field_00CD = 0;
    this->field_00D2 = 0;
    *(undefined4 *)&this->field_0xd3 = 0;
    this->field_00D7 = 0;
    this->field_00DB = 0;
    this->field_00DD = 0;
    pCVar5 = &this->field_00DE;
    for (iVar3 = 0xed; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pCVar5 = 0;
      pCVar5 = pCVar5 + 4;
    }
    *pCVar5 = CASE_0;
    this->field_0496 = 0;
    this->field_00C1 = 0;
    this->field_0493 = 0;
    this->field_0494 = 0;
    this->field_049A = (STFishC *)0x0;
    this->field_049E = 0;
    this->field_04A2 = 0;
    this->field_04A6 = 0;
    this->field_04AE = 0;
    this->field_010B = -1;
    iVar3 = 0;
    puVar1 = (uint *)&this->field_0x11b;
    do {
      puVar1[-1] = 0xffffffff;
      bVar2 = (byte)iVar3;
      *puVar1 = -0xf000f01 << (bVar2 & 0x1f) | 0xf0fff0ffU >> 0x20 - (bVar2 & 0x1f);
      uVar4 = -0xf0010 << (bVar2 & 0x1f) | 0xfff0fff0U >> 0x20 - (bVar2 & 0x1f);
      puVar1[1] = uVar4;
      puVar1[2] = uVar4;
      iVar3 = iVar3 + 1;
      puVar1[3] = 0xfff0fff0U >> (bVar2 & 0x1f) | -0xf0010 << 0x20 - (bVar2 & 0x1f);
      puVar1[4] = 2;
      puVar1 = puVar1 + 7;
    } while (iVar3 < 0x20);
    this->field_04D6 = -1;
    this->field_04CE = 0;
    this->field_04CA = 0;
    this->field_04C6 = 0;
    this->field_04C2 = 0;
    this->field_04D2 = (ushort *)0x0;
    this->field_04DA = 0;
    this->field_04DE = 0;
    this->field_04E7 = (ushort *)0x0;
    this->field_04EB = (SpriteClassTy *)0x0;
    this->field_04F7 = 0;
    this->field_04F3 = 0;
    this->field_04EF = 0;
    g_cursorClass_00802A30 = this;
    return this;
  }
  g_cursorClass_00802A30 = (CursorClassTy *)0x0;
  return (void *)0x0;
}

