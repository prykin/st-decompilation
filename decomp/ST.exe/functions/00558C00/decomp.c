
void __thiscall
FUN_00558c00(void *this,undefined4 param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  
  switch(param_1) {
  case 0:
    *param_4 = (param_2 - param_3) * 0xb505 + *(int *)((int)this + 0x30) * 0x8000 >> 0x10;
    *param_5 = (param_2 + param_3) * 0xb505 + 0x8fc3c >> 0x10;
    return;
  case 1:
    *param_4 = (param_2 + param_3) * 0xb505 + 0x8fc3c >> 0x10;
    iVar1 = param_3;
    param_3 = param_2;
    break;
  case 2:
    *param_4 = (param_3 - param_2) * 0xb505 + *(int *)((int)this + 0x30) * 0x8000 >> 0x10;
    *param_5 = ((param_2 + param_3) * -0xb505 + -0x8fc3c >> 0x10) + -1 + *(int *)((int)this + 0x34);
    return;
  case 3:
    *param_4 = ((param_2 + param_3) * -0xb505 + -0x8fc3c >> 0x10) + -1 + *(int *)((int)this + 0x30);
    iVar1 = param_2;
    break;
  default:
    goto switchD_00558c11_default;
  }
  *param_5 = (iVar1 - param_3) * 0xb505 + *(int *)((int)this + 0x34) * 0x8000 >> 0x10;
switchD_00558c11_default:
  return;
}

