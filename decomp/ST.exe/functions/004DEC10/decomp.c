
undefined4 __fastcall FUN_004dec10(int *param_1)

{
  int iVar1;
  int iVar2;
  
  switch(param_1[0x134]) {
  case 0:
    iVar1 = thunk_FUN_004ac910((void *)((int)param_1 + 0x1d5),'\x0e');
    if (iVar1 == *(int *)(*(int *)((int)param_1 + 0x1f5) + 0x20c)) {
      param_1[0x134] = 1;
      thunk_FUN_004cabb0(0);
      thunk_FUN_004c2c10((int)param_1);
      (**(code **)(*param_1 + 0x90))(4,0x340);
      return 0;
    }
    break;
  case 1:
    if ((param_1[0x135] == 0) &&
       (iVar1 = thunk_FUN_004ac910((void *)((int)param_1 + 0x1d5),'\x0e'),
       iVar1 == *(int *)(*(int *)((int)param_1 + 0x1f5) + 0x20c))) {
      param_1[0x134] = 3;
      thunk_FUN_004cabb0(0);
      thunk_FUN_004c2d40((int)param_1);
      (**(code **)(*param_1 + 0x90))(4,0x341);
      return 0;
    }
    break;
  case 2:
    iVar2 = 0x2d;
    iVar1 = thunk_FUN_004b79c0((char)param_1[9],param_1[6]);
    if (iVar1 == 0) {
      iVar2 = 0xb4;
    }
    if ((uint)(param_1[0x136] + iVar2) <= *(uint *)(DAT_00802a38 + 0xe4)) {
      iVar1 = param_1[0x135];
      param_1[0x135] = iVar1 + 0x32;
      if (4999 < iVar1 + 0x32) {
        param_1[0x135] = 5000;
        param_1[0x134] = 0;
        thunk_FUN_004cabb0(0);
        iVar1 = (**(code **)(*param_1 + 0x2c))();
        thunk_FUN_004b7710(CONCAT31((int3)((uint)iVar1 >> 8),(char)param_1[9]),iVar1);
        if (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d)) {
          thunk_FUN_004d8b70((char)param_1[9]);
        }
      }
      param_1[0x136] = *(int *)(DAT_00802a38 + 0xe4);
      return 0;
    }
    break;
  case 3:
    iVar1 = thunk_FUN_004ac910((void *)((int)param_1 + 0x1d5),'\x0e');
    if (iVar1 == *(int *)(*(int *)((int)param_1 + 0x1f5) + 0x20c)) {
      param_1[0x134] = 2;
      thunk_FUN_004cabb0(0);
      param_1[0x136] = *(int *)(DAT_00802a38 + 0xe4);
      iVar1 = (**(code **)(*param_1 + 0x2c))();
      thunk_FUN_004b76d0(CONCAT31((int3)((uint)iVar1 >> 8),(char)param_1[9]),iVar1);
      if (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d)) {
        thunk_FUN_004d8b70((char)param_1[9]);
      }
    }
  }
  return 0;
}

