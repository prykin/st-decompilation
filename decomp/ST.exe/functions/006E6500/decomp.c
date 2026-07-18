
void __thiscall FUN_006e6500(void *this,undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x456) = 0;
    *(undefined4 *)((int)this + 0x45a) = 0;
    *(undefined4 *)((int)this + 0x45e) = 0;
    *(undefined4 *)((int)this + 0x462) = 0;
    return;
  }
  *(undefined4 *)((int)this + 0x456) = *param_1;
  *(undefined4 *)((int)this + 0x45a) = param_1[1];
  *(undefined4 *)((int)this + 0x45e) = param_1[2];
  *(undefined4 *)((int)this + 0x462) = param_1[3];
  return;
}

