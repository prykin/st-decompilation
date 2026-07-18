
int FUN_00757450(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x34) + *(int *)(param_1 + 0x10);
  if (param_2 == -1) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x44 + *(int *)(*(int *)(param_1 + 0xc) + 0x1c) * 8) =
         0;
    return 0;
  }
  if (param_2 < *(short *)(iVar2 + 8)) {
    sVar1 = *(short *)(*(int *)(param_1 + 0xc) + 0x34);
    if (sVar1 == 0) {
      iVar2 = (**(code **)(*(int *)(param_1 + 0xc) + 8))(iVar2 + 0x18 + param_2);
    }
    else {
      iVar2 = (int)sVar1;
    }
    param_2 = param_2 + 8 + iVar2;
  }
  *(int *)(*(int *)(param_1 + 0xc) + 0x44 + *(int *)(*(int *)(param_1 + 0xc) + 0x1c) * 8) = param_2;
  return param_2;
}

