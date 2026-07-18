
void __thiscall thunk_FUN_004fa870(void *this,byte param_1)

{
  if (*(int *)((int)this + 300) != 0) {
    *(undefined1 *)(param_1 + 0xb4e + (int)this) = 1;
    return;
  }
  if ((((param_1 == 0) || (5 < param_1)) && (param_1 != 0xe)) && (param_1 != 0xf)) {
    if (param_1 == 6) {
      if (DAT_008016e8 != (int *)0x0) {
        (**(code **)(*DAT_008016e8 + 0x1c))();
        return;
      }
    }
    else if (param_1 == 7) {
      if (DAT_0080167c != (int *)0x0) {
        (**(code **)(*DAT_0080167c + 0x1c))();
        return;
      }
    }
    else if (param_1 == 8) {
      if (DAT_00801684 != (int *)0x0) {
        (**(code **)(*DAT_00801684 + 0x1c))();
        return;
      }
    }
    else if (param_1 == 9) {
      if (DAT_00801698 != (int *)0x0) {
        (**(code **)(*DAT_00801698 + 0x20))();
        return;
      }
    }
    else if (param_1 == 10) {
      if (DAT_00802a44 != (int *)0x0) {
        (**(code **)(*DAT_00802a44 + 0x20))();
        return;
      }
    }
    else if (param_1 == 0xb) {
      if (DAT_00801678 != (int *)0x0) {
        (**(code **)(*DAT_00801678 + 0x20))();
        return;
      }
    }
    else if (param_1 == 0xc) {
      if (DAT_00801680 != (int *)0x0) {
        (**(code **)(*DAT_00801680 + 0x1c))();
        return;
      }
    }
    else if (param_1 == 0x10) {
      if (DAT_00802a48 != (int *)0x0) {
        (**(code **)(*DAT_00802a48 + 0x20))();
        return;
      }
    }
    else if (param_1 == 0x11) {
      if (DAT_0080168c != (int *)0x0) {
        (**(code **)(*DAT_0080168c + 0x20))();
        return;
      }
    }
    else if (param_1 == 0x12) {
      if (DAT_008016ec != (int *)0x0) {
        (**(code **)(*DAT_008016ec + 0x20))();
        return;
      }
    }
    else if ((param_1 == 0x13) && (DAT_00801690 != (void *)0x0)) {
      thunk_FUN_00515180(DAT_00801690,'\x06');
      thunk_FUN_00515180(DAT_00801690,'\x05');
      return;
    }
  }
  else {
    switch(param_1) {
    case 1:
      thunk_FUN_004ff380();
      return;
    case 2:
      thunk_FUN_00502330();
      return;
    case 4:
      thunk_FUN_005097b0();
      return;
    case 5:
      thunk_FUN_004ffe90();
      return;
    case 0xe:
    case 0xf:
      thunk_FUN_00504210((uint)(byte)(param_1 - 0xe));
    }
  }
  return;
}

