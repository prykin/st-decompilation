
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006dd800(void *this,float param_1)

{
  longlong lVar1;

  *(double *)((int)this + 0x11c) = (double)param_1;
  if ((float)*(double *)((int)this + 0x114) < param_1) {
    *(double *)((int)this + 0x10c) =
         (double)((float)_DAT_0079df78 / (param_1 - (float)*(double *)((int)this + 0x114)));
    lVar1 = Library::MSVCRT::__ftol();
    *(int *)((int)this + 0x2e4) = (int)lVar1;
    FUN_006dd870(this);
    return;
  }
  return;
}

