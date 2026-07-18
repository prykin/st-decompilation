
undefined4 FUN_00756800(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0xc) != 0xcc) {
    (*(code *)**(undefined4 **)(param_1 + 0x192))(param_1);
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0xcc;
  }
  if (*(int *)(*(int *)(param_1 + 0x192) + 8) != 0) {
    puVar1 = (uint *)(param_1 + 0x84);
    do {
      uVar3 = *puVar1;
      if (uVar3 < *(uint *)(param_1 + 0x6c)) {
        do {
          if (*(int *)(param_1 + 4) != 0) {
            *(uint *)(*(int *)(param_1 + 4) + 4) = uVar3;
            *(undefined4 *)(*(int *)(param_1 + 4) + 8) = *(undefined4 *)(param_1 + 0x6c);
            (*(code *)**(undefined4 **)(param_1 + 4))(param_1);
          }
          uVar2 = *puVar1;
          (**(code **)(*(int *)(param_1 + 0x196) + 4))(param_1,0,puVar1,0);
          uVar3 = *puVar1;
          if (uVar3 == uVar2) {
            return 0;
          }
        } while (uVar3 < *(uint *)(param_1 + 0x6c));
      }
      (**(code **)(*(int *)(param_1 + 0x192) + 4))(param_1);
      (*(code *)**(undefined4 **)(param_1 + 0x192))(param_1);
      *puVar1 = 0;
    } while (*(int *)(*(int *)(param_1 + 0x192) + 8) != 0);
  }
  *(uint *)(param_1 + 0xc) = (*(int *)(param_1 + 0x3c) != 0) + 0xcd;
  return 1;
}

