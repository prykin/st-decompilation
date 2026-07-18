
bool __fastcall thunk_FUN_0041caf0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    if (DAT_00802a88 != (void *)0x0) {
      iVar5 = (int)*(short *)(param_1 + 0x5d);
      iVar4 = (int)*(short *)(param_1 + 0x5b);
      if ((DAT_0080874d != -1) && (*(int *)((int)DAT_00802a88 + 0xf8) != 0)) {
        if (((-1 < iVar4) &&
            (((iVar4 < *(int *)((int)DAT_00802a88 + 0x20) && (-1 < iVar5)) &&
             (iVar5 < *(int *)((int)DAT_00802a88 + 0x24))))) &&
           (*(int *)((int)DAT_00802a88 + 0x38) != 0)) {
          iVar5 = *(int *)((int)DAT_00802a88 + 0x20) * iVar5;
          iVar1 = *(int *)((int)DAT_00802a88 + 0x38) + (iVar5 + iVar4) * 2;
          if ((iVar1 != 0) && (*(char *)(iVar1 + 1) != '\0')) {
            if (7 < *(uint *)(param_1 + 0x24)) {
              return true;
            }
            iVar1 = *(int *)((int)DAT_00802a88 + *(uint *)(param_1 + 0x24) * 4 + 0x54);
            if (iVar1 == 0) {
              return true;
            }
            if (*(char *)(iVar1 + iVar5 + iVar4) == '\0') {
              return true;
            }
          }
        }
        return false;
      }
    }
  }
  else if (DAT_00802a88 != (void *)0x0) {
    iVar5 = (int)*(short *)(param_1 + 0x5d);
    iVar4 = (int)*(short *)(param_1 + 0x5b);
    if ((DAT_0080874d != -1) && (*(int *)((int)DAT_00802a88 + 0xf8) != 0)) {
      if (((-1 < iVar4) &&
          (((iVar4 < *(int *)((int)DAT_00802a88 + 0x20) && (-1 < iVar5)) &&
           (iVar5 < *(int *)((int)DAT_00802a88 + 0x24))))) &&
         (*(int *)((int)DAT_00802a88 + 0x38) != 0)) {
        iVar2 = *(int *)((int)DAT_00802a88 + 0x20) * iVar5;
        iVar1 = *(int *)((int)DAT_00802a88 + 0x38) + (iVar2 + iVar4) * 2;
        if ((iVar1 != 0) && (*(char *)(iVar1 + 1) != '\0')) {
          if (7 < *(uint *)(param_1 + 0x24)) {
            return true;
          }
          iVar1 = *(int *)((int)DAT_00802a88 + *(uint *)(param_1 + 0x24) * 4 + 0x54);
          if (iVar1 == 0) {
            return true;
          }
          if (*(char *)(iVar1 + iVar2 + iVar4) == '\0') {
            return true;
          }
        }
      }
      iVar1 = iVar4 + 1;
      if (((-1 < iVar1) && (iVar1 < *(int *)((int)DAT_00802a88 + 0x20))) &&
         ((-1 < iVar5 &&
          ((iVar5 < *(int *)((int)DAT_00802a88 + 0x24) && (*(int *)((int)DAT_00802a88 + 0x38) != 0))
          )))) {
        iVar5 = *(int *)((int)DAT_00802a88 + 0x20) * iVar5;
        iVar2 = *(int *)((int)DAT_00802a88 + 0x38) + (iVar5 + iVar1) * 2;
        if ((iVar2 != 0) && (*(char *)(iVar2 + 1) != '\0')) {
          if (7 < *(uint *)(param_1 + 0x24)) {
            return true;
          }
          iVar2 = *(int *)((int)DAT_00802a88 + *(uint *)(param_1 + 0x24) * 4 + 0x54);
          if (iVar2 == 0) {
            return true;
          }
          if (*(char *)(iVar2 + iVar5 + iVar1) == '\0') {
            return true;
          }
        }
      }
      iVar5 = *(short *)(param_1 + 0x5d) + 1;
      if ((((-1 < iVar4) && (iVar4 < *(int *)((int)DAT_00802a88 + 0x20))) && (-1 < iVar5)) &&
         ((iVar5 < *(int *)((int)DAT_00802a88 + 0x24) && (*(int *)((int)DAT_00802a88 + 0x38) != 0)))
         ) {
        iVar3 = *(int *)((int)DAT_00802a88 + 0x20) * iVar5;
        iVar2 = *(int *)((int)DAT_00802a88 + 0x38) + (iVar3 + iVar4) * 2;
        if ((iVar2 != 0) && (*(char *)(iVar2 + 1) != '\0')) {
          if (7 < *(uint *)(param_1 + 0x24)) {
            return true;
          }
          iVar2 = *(int *)((int)DAT_00802a88 + *(uint *)(param_1 + 0x24) * 4 + 0x54);
          if (iVar2 == 0) {
            return true;
          }
          if (*(char *)(iVar2 + iVar3 + iVar4) == '\0') {
            return true;
          }
        }
      }
      iVar5 = thunk_FUN_0041cda0(DAT_00802a88,iVar1,iVar5,(int)*(short *)(param_1 + 0x5f),
                                 *(uint *)(param_1 + 0x24));
      return iVar5 != 0;
    }
  }
  return true;
}

