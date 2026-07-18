
void __fastcall FUN_0041d100(int *param_1)

{
  int iVar1;
  
  if (DAT_00802a88 != (void *)0x0) {
    thunk_FUN_005599d0(DAT_00802a88,(int)*(short *)((int)param_1 + 0x5b),
                       (int)*(short *)((int)param_1 + 0x5d),
                       (char)*(undefined2 *)((int)param_1 + 0x5f),param_1[9],
                       *(undefined **)((int)param_1 + 0x109),param_1[6]);
  }
  iVar1 = (**(code **)(*param_1 + 8))();
  if ((iVar1 == 1) && (param_1[9] == (uint)DAT_0080874d)) {
    FUN_006e6780(DAT_00807598,
                 CONCAT22(CONCAT11(1,(char)((uint)param_1[6] >> 0x10)),(short)param_1[6]));
  }
  *(undefined4 *)((int)param_1 + 0x109) = 0xffffffff;
  return;
}

