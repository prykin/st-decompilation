
undefined4 __thiscall FUN_004e8b10(void *this,uint param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = param_1;
  if ((7 < param_1) ||
     ((PTR_00802a38 != (STPlaySystemC *)0x0 && (7 < (byte)(&DAT_008087e9)[param_1 * 0x51])))) {
    return 0;
  }
  iVar2 = (**(code **)(*(int *)this + 0x2c))();
  if (iVar2 == 0x37) {
    if (param_1 == *(uint *)((int)this + 0x24)) {
      return 1;
    }
    return 0;
  }
  iVar2 = (**(code **)(*(int *)this + 0x2c))();
  if (iVar2 != 0x6c) {
    return 0;
  }
  iVar2 = thunk_FUN_004e9930((int)this);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),0x62);
  if (iVar2 == 0) {
    return 1;
  }
  param_1 = (uint)*(byte *)((int)this + 0x24);
  if (DAT_00808a8f != '\0') {
    bVar4 = (&DAT_008087ea)[param_1 * 0x51] != (&DAT_008087ea)[(uVar3 & 0xff) * 0x51];
    goto LAB_004e8c3b;
  }
  if ((byte)uVar3 == *(byte *)((int)this + 0x24)) {
LAB_004e8c30:
    iVar2 = 0;
  }
  else {
    uVar3 = uVar3 & 0xff;
    cVar1 = *(char *)((int)&DAT_00808a4f + uVar3 * 8 + param_1);
    if ((cVar1 == '\0') && (*(char *)((int)&DAT_00808a4f + param_1 * 8 + uVar3) == '\0')) {
      iVar2 = -2;
    }
    else if ((cVar1 == '\x01') && (*(char *)((int)&DAT_00808a4f + param_1 * 8 + uVar3) == '\0')) {
      iVar2 = -1;
    }
    else if ((cVar1 == '\0') && (*(char *)((int)&DAT_00808a4f + param_1 * 8 + uVar3) == '\x01')) {
      iVar2 = 1;
    }
    else {
      if ((cVar1 != '\x01') || (*(char *)((int)&DAT_00808a4f + param_1 * 8 + uVar3) != '\x01'))
      goto LAB_004e8c30;
      iVar2 = 2;
    }
  }
  bVar4 = iVar2 < 0;
LAB_004e8c3b:
  if (!bVar4) {
    return 1;
  }
  return 0;
}

