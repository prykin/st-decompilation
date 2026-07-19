
bool __thiscall FUN_00494870(void *this,uint param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  bVar6 = true;
  if (((*(int *)((int)this + 0x732) != 1) || (7 < param_1)) ||
     ((DAT_00802a38 != 0 && (7 < (byte)(&DAT_008087e9)[param_1 * 0x51]))))
  goto cf_common_exit_00494A35;
  bVar1 = *(byte *)((int)this + 0x24);
  if (DAT_00808a8f == '\0') {
    if ((byte)param_1 == bVar1) {
LAB_0049495d:
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
        goto LAB_0049495d;
        iVar4 = 2;
      }
    }
    bVar6 = iVar4 < 0;
  }
  else {
    bVar6 = (&DAT_008087ea)[(uint)bVar1 * 0x51] != (&DAT_008087ea)[(param_1 & 0xff) * 0x51];
  }
  if (!bVar6) {
    if (DAT_00808a8f == '\0') {
      if (bVar1 == (byte)param_1) {
LAB_00494a19:
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
          goto LAB_00494a19;
          iVar4 = 2;
        }
      }
      bVar6 = iVar4 < 0;
    }
    else {
      bVar6 = (&DAT_008087ea)[(param_1 & 0xff) * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
    }
    if (!bVar6) {
      bVar6 = false;
      goto cf_common_exit_00494A35;
    }
  }
  bVar6 = thunk_FUN_0041d350(this,param_1);
cf_common_exit_00494A35:
  if ((*(int *)((int)this + 0x45d) == 0x14) && (*(int *)((int)this + 0x5c0) == 3)) {
    bVar6 = false;
  }
  return bVar6;
}

