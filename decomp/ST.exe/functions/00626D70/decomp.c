
void __thiscall FUN_00626d70(void *this,undefined4 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = (**(code **)(*(int *)this + 0x2c))();
  *param_1 = uVar2;
  iVar3 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
  *(char *)(param_1 + 1) = (char)iVar3;
  if (*(char *)((int)this + 0x2ad) == '\x02') {
    if (*(uint *)((int)this + 0x262) == (uint)DAT_0080874d) {
      *(undefined1 *)((int)param_1 + 5) = 1;
    }
    else {
      *(undefined1 *)((int)param_1 + 5) = 3;
    }
    *(undefined1 *)((int)param_1 + 9) = 0x4c;
    *(bool *)((int)param_1 + 0xf) = *(int *)((int)this + 0x2ae) != 4;
  }
  else {
    *(undefined1 *)((int)param_1 + 5) = 4;
  }
  if (*(char *)((int)this + 0x2ad) == '\x03') {
    iVar3 = ((*(int *)((int)this + 0x35f) - *(int *)(DAT_00802a38 + 0xe4)) + 0x1194) * 0x28;
    *(char *)(param_1 + 0xd) =
         ((char)(iVar3 / 0x1194) + (char)(iVar3 >> 0x1f)) -
         (char)((longlong)iVar3 * 0x7482296b >> 0x3f);
  }
  uVar1 = *(undefined1 *)((int)this + 0x21d);
  *(undefined1 *)((int)param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 2) = uVar1;
  if (*(int *)((int)this + 0x2ae) != 4) {
    *(undefined1 *)((int)param_1 + 7) = 1;
  }
  return;
}

