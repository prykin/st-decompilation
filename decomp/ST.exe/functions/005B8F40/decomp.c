
void __thiscall FUN_005b8f40(void *this,undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x1c9c) = *param_1;
    *(undefined4 *)((int)this + 0x1ca0) = param_1[1];
    *(undefined4 *)((int)this + 0x1ca4) = param_1[2];
    *(undefined1 *)((int)this + 0x1ca8) = *(undefined1 *)(param_1 + 3);
    MMsgTy::HidePanel(this,1,0,0);
  }
  return;
}

