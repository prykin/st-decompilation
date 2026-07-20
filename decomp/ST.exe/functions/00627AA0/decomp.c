
bool __thiscall FUN_00627aa0(void *this,uint param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  iVar4 = *(int *)((int)this + 0x2ae);
  if (iVar4 == 2) {
    return false;
  }
  if (iVar4 == 3) {
    return false;
  }
  if (iVar4 == 4) {
    return false;
  }
  if (iVar4 == 5) {
    return false;
  }
  if (7 < param_1) {
    return false;
  }
  if ((PTR_00802a38 != (STPlaySystemC *)0x0) && (7 < (byte)(&DAT_008087e9)[param_1 * 0x51])) {
    return false;
  }
  bVar1 = *(byte *)((int)this + 0x24);
  if (DAT_00808a8f == '\0') {
    if ((byte)param_1 == bVar1) {
LAB_00627bb8:
      iVar4 = 0;
    }
    else {
      uVar5 = param_1 & 0xff;
      uVar3 = (uint)bVar1;
      cVar2 = *(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar3);
      if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar5) == '\0')) {
        iVar4 = -2;
      }
      else if ((cVar2 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar5) == '\0')) {
        iVar4 = -1;
      }
      else if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar5) == '\x01')) {
        iVar4 = 1;
      }
      else {
        if ((cVar2 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar5) != '\x01'))
        goto LAB_00627bb8;
        iVar4 = 2;
      }
    }
    bVar6 = iVar4 < 0;
  }
  else {
    bVar6 = (&DAT_008087ea)[(uint)bVar1 * 0x51] != (&DAT_008087ea)[(param_1 & 0xff) * 0x51];
  }
  if (bVar6) goto LAB_00627c8a;
  if (DAT_00808a8f == '\0') {
    if (bVar1 == (byte)param_1) {
LAB_00627c7a:
      iVar4 = 0;
    }
    else {
      uVar3 = (uint)bVar1;
      uVar5 = param_1 & 0xff;
      cVar2 = *(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar5);
      if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar3) == '\0')) {
        iVar4 = -2;
      }
      else if ((cVar2 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar3) == '\0')) {
        iVar4 = -1;
      }
      else if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar3) == '\x01')) {
        iVar4 = 1;
      }
      else {
        if ((cVar2 != '\x01') || (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar3) != '\x01'))
        goto LAB_00627c7a;
        iVar4 = 2;
      }
    }
    bVar6 = iVar4 < 0;
  }
  else {
    bVar6 = (&DAT_008087ea)[(param_1 & 0xff) * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
  }
  if (!bVar6) {
switchD_00627c97_default:
    return false;
  }
LAB_00627c8a:
  switch(*(undefined1 *)((int)this + 0x2ad)) {
  case 0:
  case 2:
    bVar6 = thunk_FUN_0041d6c0(this,param_1);
    return bVar6;
  case 1:
    bVar6 = thunk_FUN_0041d620(this,param_1);
    return bVar6;
  case 3:
    goto switchD_00627c97_default;
  default:
    return true;
  }
}

