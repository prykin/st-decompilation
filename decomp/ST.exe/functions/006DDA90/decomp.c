
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006dda90(void *this,float param_1,float param_2)

{
  if (param_1 < _DAT_0079034c) {
    param_1 = 0.0;
  }
  if (_DAT_0079dfd0 < param_2) {
    param_2 = _DAT_0079dfd0;
  }
  *(double *)((int)this + 0x15c) = (double)param_1;
  *(double *)((int)this + 0x164) = (double)param_2;
  FUN_006dd870(this);
  return;
}

