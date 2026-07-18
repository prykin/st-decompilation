
undefined4 __thiscall
thunk_FUN_004c7260(void *this,undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4
                  ,int *param_5,undefined4 *param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
  *param_6 = 0;
  *param_5 = 0;
  *param_4 = 0;
  *param_3 = 0;
  switch(param_1) {
  case 1:
    *param_3 = *(undefined4 *)(&DAT_00854428 + param_2 * 4);
    *param_4 = *(undefined4 *)(&DAT_007e055c + param_2 * 4);
    *param_5 = *(int *)(&DAT_007e079c + param_2 * 4);
    *param_6 = *(undefined4 *)(&DAT_007e09dc + param_2 * 4);
    return 0;
  case 2:
    iVar3 = thunk_FUN_004e60d0(*(int *)((int)this + 0x24),param_2);
    *param_3 = *(undefined4 *)(&DAT_007e481c + (iVar3 + param_2 * 4) * 4);
    return 0;
  case 4:
    *param_4 = DAT_007e6128;
    return 0;
  case 5:
    *param_3 = 0;
    *param_4 = 0;
    iVar3 = *(int *)((int)this + 0x235) * 3;
    iVar3 = *(int *)(&DAT_007e29f0 + (iVar3 + *(int *)((int)this + 0x239)) * 4) -
            (*(int *)((int)this + 0x241) *
            *(int *)(&DAT_007e29f0 + (iVar3 + *(int *)((int)this + 0x239)) * 4)) /
            *(int *)(&DAT_007e417c + (iVar3 + ((uVar2 & 0xff) - 1)) * 4);
    *param_5 = iVar3;
    if ((*(int *)(&DAT_007e29f0 +
                 (*(int *)((int)this + 0x235) * 3 + *(int *)((int)this + 0x239)) * 4) != 0) &&
       (iVar1 = *(int *)(&DAT_007e29f0 +
                        (*(int *)((int)this + 0x235) * 3 + *(int *)((int)this + 0x239)) * 4) / 100,
       iVar3 < iVar1)) {
      *param_5 = iVar1;
      return 0;
    }
    break;
  case 6:
    *param_4 = DAT_007e618c;
    return 0;
  case 8:
    *param_4 = DAT_007e6344;
  }
  return 0;
}

