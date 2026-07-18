
undefined4 __thiscall thunk_FUN_004b6e30(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  switch(param_2) {
  case 0:
    iVar4 = 0;
    break;
  case 1:
    iVar4 = 1;
    break;
  case 2:
    iVar4 = 2;
    break;
  case 3:
    iVar4 = 3;
    break;
  case 4:
    iVar4 = 4;
    break;
  case 5:
    iVar4 = 5;
    break;
  default:
    iVar4 = -1;
  }
  if (param_1 != 1) {
    return 0;
  }
  iVar4 = iVar4 * 4;
  iVar3 = *(int *)((int)this + 0x24) * 0xa62;
  if (*(int *)((int)&DAT_007f579a + iVar3 + iVar4) == 0) {
    iVar2 = 0;
    piVar5 = (int *)((int)&DAT_007f579a + iVar3);
    iVar1 = 6;
    do {
      if (iVar2 < *piVar5) {
        iVar2 = *piVar5;
      }
      piVar5 = piVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if ((-1 < iVar2) && (iVar2 < 6)) {
      iVar2 = iVar2 + 1;
      *(int *)((int)&DAT_007f579a + iVar3 + iVar4) = iVar2;
    }
  }
  else {
    iVar3 = 0;
    do {
      iVar1 = *(int *)((int)this + 0x24) * 0xa62;
      iVar2 = *(int *)((int)&DAT_007f579a + iVar1 + iVar3);
      if (*(int *)((int)&DAT_007f579a + iVar1 + iVar4) < iVar2) {
        *(int *)((int)&DAT_007f579a + iVar1 + iVar3) = iVar2 + -1;
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x18);
    iVar2 = *(int *)((int)this + 0x24);
    *(undefined4 *)((int)&DAT_007f579a + iVar2 * 0xa62 + iVar4) = 0;
  }
  thunk_FUN_004b7750(CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)((int)this + 0x24)));
  return 0;
}

