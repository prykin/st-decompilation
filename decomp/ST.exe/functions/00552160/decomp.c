
undefined4 __thiscall FUN_00552160(void *this,char param_1,char param_2)

{
  undefined4 uVar1;

  uVar1 = 0;
  if ((*(char *)((int)this + 0x184) != param_1) &&
     (uVar1 = SpecPanelTy::SetPanel(this,param_1), param_1 != '\0')) {
    TradePanelTy::SetModeControls(this,param_2);
    TradePanelTy::PaintPanel(this);
  }
  return uVar1;
}

