
undefined4 __thiscall
thunk_FUN_006141b0(void *this,int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  switch(param_2) {
  case 1:
    *param_3 = (int)*(short *)(&DAT_007cf8e0 + param_1 * 4) / 0x1c2;
    iVar2 = (int)*(short *)(&DAT_007cf8e2 + param_1 * 4);
    break;
  case 2:
    *param_3 = (int)*(short *)(&DAT_007cf9ac + param_1 * 4) / 0x1c2;
    iVar2 = (int)*(short *)(&DAT_007cf9ae + param_1 * 4);
    break;
  case 3:
    *param_3 = (int)*(short *)(&DAT_007cfa78 + param_1 * 4) / 0x1c2;
    iVar2 = (int)*(short *)(&DAT_007cfa7a + param_1 * 4);
    break;
  case 4:
    *param_3 = (int)*(short *)(&DAT_007cfb44 + param_1 * 4) / 0x1c2;
    iVar2 = (int)*(short *)(&DAT_007cfb46 + param_1 * 4);
    break;
  case 5:
    *param_3 = (int)*(short *)(&DAT_007cfc10 + param_1 * 4) / 0x1c2;
    iVar2 = (int)*(short *)(&DAT_007cfc12 + param_1 * 4);
    break;
  case 6:
    *param_3 = (int)*(short *)(&DAT_007cfcdc + param_1 * 4) / 0x1c2;
    iVar2 = (int)*(short *)(&DAT_007cfcde + param_1 * 4);
    break;
  case 7:
    *param_3 = (int)*(short *)(&DAT_007cfda8 + param_1 * 4) / 0x1c2;
    iVar2 = (int)*(short *)(&DAT_007cfdaa + param_1 * 4);
    break;
  case 8:
    *param_3 = (int)*(short *)(*(int *)((int)this + 0x2e5) + param_1 * 4);
    *param_4 = (int)*(short *)(*(int *)((int)this + 0x2e5) + 2 + param_1 * 4);
    uVar1 = 1;
  default:
    return uVar1;
  }
  *param_4 = iVar2 / 0x1c2;
  return 1;
}

