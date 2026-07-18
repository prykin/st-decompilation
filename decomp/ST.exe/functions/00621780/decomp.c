
void __thiscall FUN_00621780(void *this,uint param_1)

{
  char *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int local_10 [3];
  
  iVar2 = *(int *)((int)this + 0x10a);
  if ((param_1 < *(uint *)(iVar2 + 0xc)) &&
     (puVar3 = (undefined1 *)(*(int *)(iVar2 + 8) * param_1 + *(int *)(iVar2 + 0x1c)),
     puVar3 != (undefined1 *)0x0)) {
    switch(*(undefined4 *)(puVar3 + 9)) {
    case 1:
      if (DAT_0080874e == '\x01') {
        iVar2 = 0x3e;
      }
      else if (DAT_0080874e == '\x02') {
        iVar2 = 0x3f;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        iVar2 = 0x40;
      }
      break;
    case 2:
      if (DAT_0080874e == '\x01') {
        iVar2 = 0x41;
      }
      else if (DAT_0080874e == '\x02') {
        iVar2 = 0x42;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        iVar2 = 0x43;
      }
      break;
    case 3:
      if (DAT_0080874e == '\x01') {
        iVar2 = 0x44;
      }
      else if (DAT_0080874e == '\x02') {
        iVar2 = 0x45;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        iVar2 = 0x46;
      }
      break;
    case 4:
      if (DAT_0080874e == '\x01') {
        iVar2 = 0x47;
      }
      else if (DAT_0080874e == '\x02') {
        iVar2 = 0x48;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        iVar2 = 0x49;
      }
      break;
    case 5:
      if (DAT_0080874e == '\x01') {
        iVar2 = 0x4a;
      }
      else if (DAT_0080874e == '\x02') {
        iVar2 = 0x4b;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        iVar2 = 0x4c;
      }
      break;
    case 6:
      if (DAT_0080874e == '\x01') {
        iVar2 = 0x4d;
      }
      else if (DAT_0080874e == '\x02') {
        iVar2 = 0x4e;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        iVar2 = 0x4f;
      }
      break;
    case 7:
      if (DAT_0080874e == '\x01') {
        iVar2 = 0x50;
      }
      else if (DAT_0080874e == '\x02') {
        iVar2 = 0x51;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        iVar2 = 0x52;
      }
      break;
    case 8:
      uVar4 = 8;
      pcVar1 = (char *)FUN_006b0140(0x274a,DAT_00807618);
      thunk_FUN_0052d320(DAT_008016d8,pcVar1,uVar4);
      if (DAT_0080874e == '\x01') {
        iVar2 = 0xba;
      }
      else if (DAT_0080874e == '\x02') {
        iVar2 = 0xbb;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        iVar2 = 0xbc;
      }
      break;
    default:
      goto switchD_006217ba_default;
    }
    local_10[2] = 0;
    local_10[0] = -1;
    local_10[1] = 0xffffffff;
    thunk_FUN_00568dd0(&DAT_00807658,6,(char *)0x0,iVar2,local_10,0);
    *puVar3 = 1;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(DAT_00802a38 + 0xe4);
    *(undefined4 *)((int)this + 0x106) = *(undefined4 *)(DAT_00802a38 + 0xe4);
  }
switchD_006217ba_default:
  return;
}

