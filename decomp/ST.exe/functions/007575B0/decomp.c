
uint FUN_007575b0(int param_1,ushort *param_2,ushort *param_3)

{
  int iVar1;
  uint uVar2;
  
  switch(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x30)) {
  case 1:
    return (int)(char)*param_2 - (int)(char)*param_3;
  case 2:
    return (uint)(byte)*param_2 - (uint)(byte)*param_3;
  case 3:
    return (int)(short)*param_2 - (int)(short)*param_3;
  case 4:
    return (uint)*param_2 - (uint)*param_3;
  case 5:
    iVar1 = *(int *)param_2;
    break;
  case 6:
    iVar1 = *(int *)param_2;
    break;
  default:
    uVar2 = (**(code **)(*(int *)(param_1 + 0xc) + 4))(param_2,param_3);
    return uVar2;
  }
  if (-1 < iVar1 - *(int *)param_3) {
    return (uint)(iVar1 != *(int *)param_3);
  }
  return 0xffffffff;
}

