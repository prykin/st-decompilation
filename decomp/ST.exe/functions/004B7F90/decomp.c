
undefined4 __thiscall FUN_004b7f90(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  switch(*(undefined4 *)((int)this + 0x245)) {
  case 0:
    if (((*(int *)((int)this + 0x255) != 0) && (param_1 == 2)) && (*(int *)((int)this + 0x259) != 0)
       ) {
      return 0;
    }
    break;
  case 4:
    if ((*(int *)((int)this + 0x3dc) != 0) ||
       (((iVar1 = *(int *)((int)this + 0x46c), iVar1 != 0 && (iVar1 != 1)) && (iVar1 != 2)))) {
      uVar2 = 0;
      goto LAB_004b8058;
    }
    break;
  case 5:
    if (((param_1 != 0) && (param_1 != 1)) && (param_1 != 6)) goto LAB_004b8058;
    break;
  case 0xffffffff:
    goto switchD_004b7fa6_caseD_ffffffff;
  }
  iVar1 = thunk_FUN_004ac910((void *)((int)this + 0x1d5),'\x0e');
  if ((iVar1 == *(int *)(*(int *)((int)this + 0x1f5) + 0x208)) ||
     (iVar1 = thunk_FUN_004ac910((void *)((int)this + 0x1d5),'\x0e'),
     iVar1 == *(int *)(*(int *)((int)this + 0x1f5) + 0x20c))) {
    if (*(int *)(&DAT_00791a10 + *(int *)((int)this + 0x235) * 4) == 0) {
switchD_004b7fa6_caseD_ffffffff:
      uVar2 = 1;
    }
    else {
      uVar2 = thunk_FUN_004cc040((int)this);
    }
  }
LAB_004b8058:
  if (param_1 != 3) {
    return uVar2;
  }
  uVar2 = thunk_FUN_004c7070(this,1);
  return uVar2;
}

