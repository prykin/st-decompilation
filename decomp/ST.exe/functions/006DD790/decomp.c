
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006dd790(void *this,float param_1)

{
  longlong lVar1;
  
  *(double *)((int)this + 0x114) = (double)param_1;
  if (param_1 < (float)*(double *)((int)this + 0x11c)) {
    *(double *)((int)this + 0x10c) =
         (double)((float)_DAT_0079df78 / ((float)*(double *)((int)this + 0x11c) - param_1));
    lVar1 = __ftol();
    *(int *)((int)this + 0x2e4) = (int)lVar1;
    FUN_006dd870((int)this);
    return;
  }
  return;
}

