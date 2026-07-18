
void __thiscall FUN_00488d10(void *this,undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  *param_1 = *(undefined4 *)((int)this + 0x6f7);
  *(undefined1 *)(param_1 + 1) = 0x2b;
  *(undefined1 *)((int)param_1 + 5) = 0x2c;
  *(undefined1 *)((int)param_1 + 6) = 5;
  *(undefined1 *)((int)param_1 + 7) = 6;
  *(undefined1 *)(param_1 + 2) = 0x4d;
  *(undefined1 *)((int)param_1 + 9) = 0x2d;
  if (*(int *)((int)this + 0x7e6) == 0) {
    *(undefined1 *)((int)param_1 + 0x11) = 3;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 4) = 3;
    *(undefined1 *)((int)param_1 + 0x11) = 1;
  }
  if (*(int *)((int)this + 0x7ea) == 0) {
    *(undefined1 *)((int)param_1 + 0x12) = 1;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x12) = 3;
  }
  switch(*(undefined4 *)((int)this + 0x6f7)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 10:
  case 0xb:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x1c:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x26:
  case 0x27:
  case 0x28:
    *(undefined1 *)((int)param_1 + 10) = 1;
    *(undefined1 *)((int)param_1 + 0xb) = 1;
    if (*(int *)((int)this + 0x45d) == 5) {
      *(undefined1 *)(param_1 + 3) = 3;
    }
    else {
      *(undefined1 *)(param_1 + 3) = 1;
    }
    if (*(int *)((int)this + 0x45d) == 6) {
      *(undefined1 *)((int)param_1 + 0xd) = 3;
    }
    else {
      *(undefined1 *)((int)param_1 + 0xd) = 1;
    }
    if ((*(int *)((int)this + 0x45d) == 0x15) && (*(int *)((int)this + 0x635) != 2)) {
      *(undefined1 *)((int)param_1 + 0xe) = 3;
    }
    else {
      *(undefined1 *)((int)param_1 + 0xe) = 1;
    }
    if (*(int *)((int)this + 0x45d) == 8) {
      *(undefined1 *)((int)param_1 + 0xf) = 3;
      return;
    }
    break;
  case 7:
  case 8:
  case 9:
  case 0xc:
  case 0x13:
  case 0x14:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1d:
  case 0x24:
  case 0x25:
    *(undefined1 *)((int)param_1 + 10) = 0;
    *(undefined1 *)((int)param_1 + 0xb) = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    if (*(int *)((int)this + 0x45d) == 6) {
      *(undefined1 *)((int)param_1 + 0xd) = 3;
    }
    else {
      *(undefined1 *)((int)param_1 + 0xd) = 1;
    }
    if (*(int *)((int)this + 0x45d) == 0x15) {
      *(undefined1 *)((int)param_1 + 0xe) = 3;
    }
    else {
      *(undefined1 *)((int)param_1 + 0xe) = 1;
    }
    if (*(int *)((int)this + 0x45d) == 8) {
      *(undefined1 *)((int)param_1 + 0xf) = 3;
      return;
    }
    break;
  default:
    goto switchD_00488d99_default;
  }
  *(undefined1 *)((int)param_1 + 0xf) = 1;
switchD_00488d99_default:
  return;
}

