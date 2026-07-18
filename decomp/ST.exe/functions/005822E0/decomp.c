
undefined4 __thiscall FUN_005822e0(void *this,byte param_1,byte param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != param_2) {
    uVar2 = (uint)param_1;
    uVar3 = (uint)param_2;
    cVar1 = *(char *)(uVar3 + uVar2 * 8 + 0x142f + (int)this);
    if ((cVar1 == '\0') && (*(char *)(uVar2 + uVar3 * 8 + 0x142f + (int)this) == '\0')) {
      return 0xfffffffe;
    }
    if ((cVar1 == '\x01') && (*(char *)(uVar2 + uVar3 * 8 + 0x142f + (int)this) == '\0')) {
      return 0xffffffff;
    }
    if ((cVar1 == '\0') && (*(char *)(uVar2 + uVar3 * 8 + 0x142f + (int)this) == '\x01')) {
      return 1;
    }
    if ((cVar1 == '\x01') && (*(char *)(uVar2 + uVar3 * 8 + 0x142f + (int)this) == '\x01')) {
      return 2;
    }
  }
  return 0;
}

