
uint __thiscall FUN_00505070(void *this,byte param_1)

{
  uint uVar1;

  uVar1 = CPanelTy::sub_005050B0(this,param_1);
  if (-1 < (int)uVar1) {
    uVar1 = (uint)*(byte *)((int)this + (uVar1 * 3 + 0x609) * 2);
  }
  return uVar1;
}

