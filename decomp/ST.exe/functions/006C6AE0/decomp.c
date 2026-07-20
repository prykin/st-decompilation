
int FUN_006c6ae0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  short local_14;
  short local_12;
  byte local_10;
  undefined1 local_f;
  short local_c;
  short local_a;
  short local_8;
  
  iVar2 = (**(code **)(param_1 + 0x42))(param_1,&local_c,6);
  if (iVar2 == 6) {
    if (local_c != 0x4947) {
      return -5;
    }
    if (local_a != 0x3846) {
      return -5;
    }
    if ((local_8 != 0x6137) && (local_8 != 0x6139)) {
      return -5;
    }
    iVar2 = (**(code **)(param_1 + 0x42))(param_1,&local_14,7);
    if (iVar2 == 7) {
      *(int *)(param_1 + 0xc) = (int)local_12;
      *(int *)(param_1 + 8) = (int)local_14;
      iVar2 = 0;
      *(undefined1 *)(param_1 + 0x11) = local_f;
      *(byte *)(param_1 + 0x10) = local_10 & 7;
      if ((local_10 & 0x80) != 0) {
        iVar1 = (1 << (local_10 & 7) + 1) * 3;
        iVar2 = FUN_006bfb70(iVar1);
        *(int *)(param_1 + 0x12) = iVar2;
        if (iVar2 == 0) {
          return -2;
        }
        iVar2 = (**(code **)(param_1 + 0x42))(param_1,iVar2,iVar1);
        if (iVar2 == iVar1) {
          iVar2 = 0;
        }
        else {
          FUN_006ab060((LPVOID *)(param_1 + 0x12));
          if (-1 < iVar2) {
            iVar2 = -5;
          }
        }
      }
      uVar3 = (**(code **)(param_1 + 0x4a))(param_1);
      *(undefined4 *)(param_1 + 0x52) = uVar3;
      *(undefined4 *)(param_1 + 0x56) = 4;
      return iVar2;
    }
  }
  if (-1 < iVar2) {
    return -5;
  }
  return iVar2;
}

