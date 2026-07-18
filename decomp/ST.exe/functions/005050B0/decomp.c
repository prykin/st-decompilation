
int __thiscall FUN_005050b0(void *this,byte param_1)

{
  char cVar1;
  bool bVar2;
  
  if (DAT_0080874e == '\x01') {
    bVar2 = *(char *)((int)this + 0x9d4) != '\x01';
  }
  else {
    cVar1 = *(char *)((int)this + 0x9d4);
    bVar2 = cVar1 == '\x01';
    if (DAT_0080874e == '\x03') {
      if ((param_1 == 3) && (cVar1 == '\x01')) {
        return -1;
      }
      return (-(uint)(cVar1 != '\x01') & 0xfffffffc) + 4 + (uint)param_1;
    }
  }
  if (bVar2) {
    switch(param_1) {
    case 0:
      goto switchD_005050fb_caseD_0;
    case 1:
      return 3;
    case 2:
      return 9;
    case 3:
      return 7;
    case 4:
      return 4;
    case 5:
      return 8;
    default:
switchD_005050fb_default:
      return -1;
    }
  }
  switch(param_1) {
  case 0:
switchD_005050fb_caseD_0:
    return 0;
  case 1:
    return 1;
  case 2:
    return 2;
  case 3:
    return 5;
  case 4:
    return 6;
  default:
    goto switchD_005050fb_default;
  }
}

