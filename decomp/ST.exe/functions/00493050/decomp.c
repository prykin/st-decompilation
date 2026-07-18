
undefined4 __thiscall FUN_00493050(void *this,int param_1)

{
  int iVar1;
  
  if ((*(int *)((int)this + 0x45d) == 3) &&
     ((*(int *)((int)this + 0x82e) == -1 || (*(int *)((int)this + 0x82e) == 0)))) {
    iVar1 = *(int *)((int)this + 0x6f7);
    if ((iVar1 == 7) || ((iVar1 == 0x13 || (iVar1 == 0x1b)))) {
      if (*(int *)((int)this + 0x7ca) == 0) {
        if (param_1 == 0xfd) {
          return 1;
        }
        if (param_1 == 0xfe) {
          return 1;
        }
        if ((((0 < param_1) && (param_1 < 0x29)) && (param_1 != 7)) &&
           ((param_1 != 0x13 && (param_1 != 0x1b)))) {
          return 1;
        }
      }
    }
    else if (((param_1 == 7) || (param_1 == 0x13)) || (param_1 == 0x1b)) {
      return 1;
    }
  }
  return 0;
}

