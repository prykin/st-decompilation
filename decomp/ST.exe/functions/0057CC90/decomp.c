
undefined4 __thiscall FUN_0057cc90(void *this,undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0xffffffff;
  iVar3 = 0;
  if (8 < param_2) {
    return 0xffffffff;
  }
  switch(param_1) {
  case 0xe7:
  case 0xe8:
  case 0xe9:
    uVar1 = thunk_FUN_004abce0((void *)((int)this + 0x1d5),0xe,0,0xb,'\0');
    return uVar1;
  case 0xea:
    if (param_2 != 0) {
      iVar3 = (8 - param_2 >> 1) * 0xf;
    }
    iVar2 = iVar3 + 0xe;
    break;
  case 0xeb:
    if (param_2 != 0) {
      iVar3 = (8 - param_2 >> 1) * 0x14;
    }
    iVar2 = iVar3 + 0x13;
    break;
  default:
    goto switchD_0057ccb8_default;
  }
  uVar1 = thunk_FUN_004abce0((void *)((int)this + 0x1d5),0xe,iVar3,iVar2,'\0');
switchD_0057ccb8_default:
  return uVar1;
}

