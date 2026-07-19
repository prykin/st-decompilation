
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_006e25d0(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)((int)this + 0xa8);
  if ((uVar1 & 8) == 0) {
    switch(uVar1) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    default:
      param_1[3] = 0;
      return 0;
    }
  }
  else {
    switch(uVar1 & 0xfffffff7) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
    }
  }
  iVar3 = 1;
  lVar4 = Library::MSVCRT::__ftol();
  iVar2 = (int)lVar4 + *(int *)((int)this + 0x30) * 0x10000;
  *param_1 = iVar2;
  if ((iVar2 < *(int *)((int)this + 0x30) * 0x10000) ||
     (*(int *)((int)this + 0x38) * 0x10000 <= iVar2)) {
    iVar3 = 0;
  }
  lVar4 = Library::MSVCRT::__ftol();
  iVar2 = (int)lVar4 + *(int *)((int)this + 0x34) * 0x10000;
  param_1[1] = iVar2;
  if ((iVar2 < *(int *)((int)this + 0x34) * 0x10000) ||
     (*(int *)((int)this + 0x3c) * 0x10000 <= iVar2)) {
    iVar3 = 0;
  }
  lVar4 = Library::MSVCRT::__ftol();
  param_1[2] = (int)lVar4;
  param_1[3] = iVar3;
  return iVar3;
}

