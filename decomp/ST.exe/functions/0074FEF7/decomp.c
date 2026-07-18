
uint __fastcall FUN_0074fef7(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 local_30 [32];
  undefined1 local_10 [4];
  int *local_c;
  int *local_8;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0x80040234;
  }
  else {
    uVar1 = FUN_0074e337((int *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x20),(int *)0x0,0,
                         (int *)&local_8);
    if (-1 < (int)uVar1) {
      uVar1 = (**(code **)**(undefined4 **)(param_1 + 0x14))
                        (*(undefined4 **)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x20),&local_c);
      if ((int)uVar1 < 0) {
        (**(code **)(*local_8 + 8))(local_8);
      }
      else {
        uVar2 = (**(code **)(*local_8 + 0x2c))
                          (local_8,local_c,*(undefined4 *)(param_1 + 0x24),
                           CONCAT22((short)((uint)(param_1 + 0x34) >> 0x10),
                                    *(undefined2 *)(param_1 + 0x28)),param_1 + 0x34,
                           *(undefined4 *)(param_1 + 0x2c),local_30,local_10);
        *(undefined4 *)(param_1 + 0x4c) = uVar2;
        (**(code **)(*local_c + 8))(local_c);
        (**(code **)(*local_8 + 8))(local_8);
        uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0xc))(param_1);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
  }
  return uVar1;
}

