
void __fastcall
thunk_FUN_0065fa10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  
  if ((*(short *)(param_1 + 0x7d) != -2) && (DAT_007fa174 != 0)) {
    piVar1 = (int *)thunk_FUN_0042b760(CONCAT31((int3)((uint)param_1 >> 8),
                                                *(undefined1 *)(param_1 + 0x24)),
                                       CONCAT22((short)((uint)param_2 >> 0x10),
                                                *(short *)(param_1 + 0x7d)));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x18))(piVar1,param_3,param_4,param_5);
    }
  }
  return;
}

