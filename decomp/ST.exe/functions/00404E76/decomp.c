
undefined4 __fastcall thunk_FUN_004df3b0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[0x134];
  if (iVar1 == 0) {
    if ((param_1[0x138] != 0) || (param_1[0x135] == 1)) {
      param_1[0x134] = 1;
      param_1[0x135] = 0;
      TLOBaseTy::RotateSpr((TLOBaseTy *)param_1,0);
      thunk_FUN_004c2c10((int)param_1);
    }
  }
  else if (iVar1 == 1) {
    if ((param_1[0x136] == 0) || (param_1[0x135] == 2)) {
      iVar1 = thunk_FUN_004ac910((void *)((int)param_1 + 0x1d5),'\x0e');
      if (iVar1 == *(int *)(*(int *)((int)param_1 + 0x1f5) + 0x20c)) {
        param_1[0x134] = 2;
        iVar1 = *(int *)(DAT_00802a38 + 0xe4);
        param_1[0x135] = 0;
        param_1[0x137] = iVar1;
        TLOBaseTy::RotateSpr((TLOBaseTy *)param_1,0);
        iVar1 = (**(code **)(*param_1 + 0x2c))();
        thunk_FUN_004b76d0(CONCAT31((int3)((uint)iVar1 >> 8),(char)param_1[9]),iVar1);
        if (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d)) {
          thunk_FUN_004d8b70((char)param_1[9]);
        }
        thunk_FUN_004c2d40((int)param_1);
        (**(code **)(*param_1 + 0x90))(3,0x26c);
        return 0;
      }
    }
    else {
      if (param_1[0x102] == 0) {
        thunk_FUN_004c2c10((int)param_1);
        (**(code **)(*param_1 + 0x90))(3,0x26b);
      }
      if (param_1[0x137] + 7U <= *(uint *)(DAT_00802a38 + 0xe4)) {
        param_1[0x137] = *(uint *)(DAT_00802a38 + 0xe4);
        thunk_FUN_004df370(param_1,param_1[0x136] + -100);
        return 0;
      }
    }
  }
  else if (iVar1 == 2) {
    iVar2 = 0xf;
    iVar1 = thunk_FUN_004b79c0((char)param_1[9],param_1[6]);
    if (iVar1 == 0) {
      iVar2 = 0x3c;
    }
    if ((uint)(param_1[0x137] + iVar2) <= *(uint *)(DAT_00802a38 + 0xe4)) {
      iVar1 = param_1[0x136];
      param_1[0x136] = iVar1 + 100;
      if (9999 < iVar1 + 100) {
        param_1[0x136] = 10000;
        param_1[0x134] = 0;
        TLOBaseTy::RotateSpr((TLOBaseTy *)param_1,0);
        iVar1 = (**(code **)(*param_1 + 0x2c))();
        thunk_FUN_004b7710(CONCAT31((int3)((uint)iVar1 >> 8),(char)param_1[9]),iVar1);
        if (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d)) {
          thunk_FUN_004d8b70((char)param_1[9]);
        }
      }
      param_1[0x137] = *(int *)(DAT_00802a38 + 0xe4);
    }
    if (param_1[0x135] == 1) {
      param_1[0x134] = 1;
      param_1[0x135] = 0;
      TLOBaseTy::RotateSpr((TLOBaseTy *)param_1,0);
      thunk_FUN_004c2c10((int)param_1);
      (**(code **)(*param_1 + 0x90))(3,0x26b);
      iVar1 = (**(code **)(*param_1 + 0x2c))();
      thunk_FUN_004b7710(CONCAT31((int3)((uint)iVar1 >> 8),(char)param_1[9]),iVar1);
      if (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d)) {
        thunk_FUN_004d8b70((char)param_1[9]);
        return 0;
      }
    }
  }
  return 0;
}

