
uint FUN_00756960(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xc) != 0xce) {
    FUN_006a5e40(0x12,DAT_007ed77c,0x7f2d50,0xc1);
  }
  if (*(uint *)(param_1 + 0x6c) <= *(uint *)(param_1 + 0x84)) {
    return 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(uint *)(*(int *)(param_1 + 4) + 4) = *(uint *)(param_1 + 0x84);
    *(undefined4 *)(*(int *)(param_1 + 4) + 8) = *(undefined4 *)(param_1 + 0x6c);
    (*(code *)**(undefined4 **)(param_1 + 4))(param_1);
  }
  uVar2 = *(int *)(param_1 + 0x12a) * *(int *)(param_1 + 0x126);
  if (param_3 < uVar2) {
    FUN_006a5e40(0x15,DAT_007ed77c,0x7f2d50,0xd1);
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0x19a) + 0xc))(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + uVar2;
  return uVar2;
}

