
void __thiscall FUN_00571320(void *this,undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = DAT_00807300 & 0xff;
  if (uVar2 == 2) {
    thunk_FUN_00566e70((void *)((int)this + 0x38),param_1);
  }
  else if (((uVar2 == 4) || (uVar2 == 8)) && (DAT_008033f0 != 0)) {
    cVar1 = *(char *)((int)this + 0x112e);
    if (cVar1 == '\x01') {
      thunk_FUN_00566600(2);
      return;
    }
    if (cVar1 == '\x02') {
      thunk_FUN_00566600(1);
      return;
    }
    if (cVar1 == '\x03') {
      thunk_FUN_00566600(3);
      return;
    }
  }
  return;
}

