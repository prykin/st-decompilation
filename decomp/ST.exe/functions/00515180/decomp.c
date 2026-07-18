
void __thiscall FUN_00515180(void *this,char param_1)

{
  if ((*(char *)((int)this + 0x1a1) == param_1) || (param_1 == '\a')) {
    switch(param_1) {
    case '\x01':
      thunk_FUN_00517a50(this,*(int *)((int)this + 0x1a3),*(uint *)((int)this + 0x1a7),'\x01');
      return;
    case '\x02':
      thunk_FUN_0051a100(*(int *)((int)this + 0x1a3),*(uint *)((int)this + 0x1a7),'\x01');
      return;
    case '\x03':
      thunk_FUN_00518c20(*(int *)((int)this + 0x1a3),'\x01');
      return;
    case '\x04':
      thunk_FUN_0051b5a0(this,*(int *)((int)this + 0x1a3),*(int *)((int)this + 0x1a7),'\x01');
      return;
    case '\x05':
      thunk_FUN_00516a40(this,*(uint *)((int)this + 0x1a3),*(byte *)((int)this + 0x1a7),'\x01');
      return;
    case '\x06':
      thunk_FUN_00516480(*(uint *)((int)this + 0x1a3),'\x01');
      return;
    case '\a':
      thunk_FUN_00514f10();
      return;
    case '\b':
      thunk_FUN_0051d540(*(void **)((int)this + 0x1a3),*(int *)((int)this + 0x1a7),'\x01');
      break;
    case '\v':
      thunk_FUN_0051c980(this,*(int *)((int)this + 0x1a3),*(int *)((int)this + 0x1a7),'\x01');
      return;
    case '\f':
      thunk_FUN_0051d360(*(int *)((int)this + 0x1a3),'\x01');
      return;
    }
  }
  return;
}

