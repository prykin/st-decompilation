
undefined4 __thiscall FUN_005f09b0(void *this,AnonShape_005EFAE0_B406B78B *param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  if ((*(char *)((int)this + 0x24f) == '\0') && (param_1 != (AnonShape_005EFAE0_B406B78B *)0x0)) {
    *(undefined4 *)((int)this + 0x2a7) = param_1->field_0018;
    *(undefined2 *)((int)this + 0x2ab) = param_1->field_0032;
    *(undefined4 *)((int)this + 0x2a3) = param_1->field_0024;
    uVar1 = 1;
    *(undefined1 *)((int)this + 0x24f) = 1;
    if (*(char *)((int)this + 800) != '\0') {
      *(undefined1 *)((int)this + 800) = 0;
    }
  }
  return uVar1;
}

