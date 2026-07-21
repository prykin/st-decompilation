
undefined4 __fastcall FUN_005f0ba0(AnonShape_005F0BA0_C8D654C5 *param_1)

{
  undefined1 *this;
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;

  if ((uint)PTR_00802a38->field_00E4 % 5 == 0) {
    this = &param_1->field_0x1d5;
    uVar1 = *(uint *)(DAT_00806724 + 0x30 + param_1->field_02D2 * 4);
    if (param_1->field_02B5 == 1) {
      thunk_FUN_004ace30(this,uVar1,(int)*(short *)(DAT_00806724 + 0x2c));
      iVar3 = param_1->field_02D2 + -1;
      param_1->field_02D2 = iVar3;
      if (iVar3 == (int)*(short *)(DAT_00806724 + 0x23) / 2) {
        cVar2 = thunk_FUN_004ad610((int)this);
        if (cVar2 != '\0') {
          thunk_FUN_005ef5f0((int)param_1);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)**(undefined4 **)this)();
        }
      }
      if ((int)param_1->field_02D2 < 0) {
        param_1->field_02D2 = 0;
        thunk_FUN_004ace30(this,0,(int)*(short *)(DAT_00806724 + 0x2c));
        return 1;
      }
    }
    else {
      thunk_FUN_004ace30(this,uVar1,(int)*(short *)(DAT_00806724 + 0x2c));
      iVar3 = param_1->field_02D2;
      iVar4 = iVar3 + 1;
      param_1->field_02D2 = iVar4;
      if (*(short *)(DAT_00806724 + 0x23) <= iVar4) {
        param_1->field_02D2 = iVar3;
        thunk_FUN_004ad430((int)this);
        return 1;
      }
      if (iVar4 == (int)*(short *)(DAT_00806724 + 0x23) / 2) {
        thunk_FUN_004ad5e0((int)this);
      }
    }
  }
  return 0;
}

