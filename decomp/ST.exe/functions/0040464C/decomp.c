
void __fastcall thunk_FUN_0041c5a0(int *param_1)

{
  undefined4 uVar1;
  
  if ((DAT_00802a88 != (void *)0x0) && ((*(byte *)((int)param_1 + 0x1d1) & 1) == 0)) {
    thunk_FUN_00559110(DAT_00802a88,(int)*(short *)((int)param_1 + 0x5b),
                       (undefined *)(int)*(short *)((int)param_1 + 0x5d),
                       (int)*(short *)((int)param_1 + 0x5f),param_1[9],
                       *(int *)((int)param_1 + 0x101),param_1[6],0xffffffff);
    if (param_1[8] == 0x14) {
      thunk_FUN_00559620(DAT_00802a88,(int)*(short *)((int)param_1 + 0x5b),
                         (int)*(short *)((int)param_1 + 0x5d),
                         (char)*(undefined2 *)((int)param_1 + 0x5f),(undefined *)param_1[9],
                         *(int *)((int)param_1 + 0x105),param_1[6],0xffffffff);
    }
    uVar1 = (**(code **)(*param_1 + 0x2c))();
    switch(uVar1) {
    case 5:
    case 0x11:
    case 0x21:
      (**(code **)(*param_1 + 0x98))();
      break;
    case 0xb:
    case 0x23:
      thunk_FUN_00559d60(DAT_00802a88,(int)*(short *)((int)param_1 + 0x5b),
                         (int)*(short *)((int)param_1 + 0x5d),
                         (char)*(undefined2 *)((int)param_1 + 0x5f),param_1[9],
                         *(undefined **)((int)param_1 + 0x10d),param_1[6]);
      return;
    }
  }
  return;
}

