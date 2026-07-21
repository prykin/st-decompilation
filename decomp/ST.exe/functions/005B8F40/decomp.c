
void __thiscall MMsgTy::FUN_005b8f40(MMsgTy *this,undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    this->field_1C9C = *param_1;
    this->field_1CA0 = param_1[1];
    this->field_1CA4 = param_1[2];
    this->field_1CA8 = *(undefined1 *)(param_1 + 3);
    HidePanel(this,1,0,0);
  }
  return;
}

