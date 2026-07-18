
int FUN_007563c0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 200:
    (**(code **)(*(int *)(param_1 + 0x1a2) + 4))(param_1);
    (**(code **)(*(int *)(param_1 + 0x10) + 8))(param_1);
    *(undefined4 *)(param_1 + 0xc) = 0xc9;
  case 0xc9:
    iVar1 = (*(code *)**(undefined4 **)(param_1 + 0x1a2))(param_1);
    if (iVar1 == 1) {
      FUN_00756480(param_1);
      *(undefined4 *)(param_1 + 0xc) = 0xca;
      return 1;
    }
    break;
  case 0xca:
    return 1;
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd2:
    iVar1 = (*(code *)**(undefined4 **)(param_1 + 0x1a2))(param_1);
    return iVar1;
  default:
    FUN_006a5e40(0x12,DAT_007ed77c,0x7f2d38,0x14e);
  }
  return iVar1;
}

