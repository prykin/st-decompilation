
undefined4 __thiscall FUN_004b7e30(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar1 = 0;
  iVar4 = 0;
  iVar2 = iVar1;
  iVar5 = iVar4;
  if (param_1 == 0xfe) {
    iVar2 = param_3;
    if (((param_2 != 0xdd) && (iVar2 = iVar1, iVar5 = param_3, param_2 != 0xde)) &&
       (iVar5 = iVar4, param_2 == 0xe2)) {
      iVar3 = param_3;
    }
  }
  else if (param_1 == 0xfd) {
    iVar3 = 1000;
  }
  else if ((0 < param_1) && (param_1 < 0x29)) {
    iVar3 = *(int *)(&DAT_007e09dc + param_1 * 4);
    iVar2 = *(int *)(&DAT_007e055c + param_1 * 4);
    iVar5 = *(int *)(&DAT_007e079c + param_1 * 4);
  }
  thunk_FUN_004e4230(*(int *)((int)this + 0x24),iVar2 * 3 + iVar3 + iVar5 * 2);
  return 0;
}

