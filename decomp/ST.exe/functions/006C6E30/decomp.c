
int FUN_006c6e30(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  byte local_8;
  
  piVar1 = (int *)(param_1 + 0x2a);
  FUN_006ab060(piVar1);
  iVar2 = (**(code **)(param_1 + 0x42))(param_1,&local_10,9);
  if (iVar2 == 9) {
    *(int *)(param_1 + 0x1a) = (int)local_10;
    *(int *)(param_1 + 0x1e) = (int)local_e;
    *(int *)(param_1 + 0x26) = (int)local_a;
    *(int *)(param_1 + 0x22) = (int)local_c;
    if ((local_8 & 0x80) == 0) {
      *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_1 + 0x10);
    }
    else {
      *(byte *)(param_1 + 0x19) = local_8 & 7;
      iVar2 = (1 << (local_8 & 7) + 1) * 3;
      iVar3 = FUN_006bfb70(iVar2);
      *piVar1 = iVar3;
      if (iVar3 == 0) {
        return -2;
      }
      iVar3 = (**(code **)(param_1 + 0x42))(param_1,iVar3,iVar2);
      if (iVar3 != iVar2) {
        FUN_006ab060(piVar1);
        param_1 = iVar3;
        if (-1 < iVar3) {
          param_1 = -5;
        }
        return param_1;
      }
    }
    *(bool *)(param_1 + 0x18) = (local_8 & 0x40) == 0x40;
    iVar2 = 0;
  }
  else if (-1 < iVar2) {
    return -5;
  }
  return iVar2;
}

