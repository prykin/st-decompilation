
undefined4 __fastcall FUN_006604b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined2 extraout_var;
  int *piVar2;
  undefined4 extraout_EDX;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  uVar1 = thunk_FUN_0065d9c0(param_1,param_2);
  if (CONCAT22(extraout_var,uVar1) != 0) {
    local_c = param_3;
    if ((*(short *)(param_1 + 0x7d) != -2) && (DAT_007fa174 != 0)) {
      piVar2 = (int *)thunk_FUN_0042b760(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                  *(undefined1 *)(param_1 + 0x24)),
                                         CONCAT22(extraout_var,*(short *)(param_1 + 0x7d)));
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(6,&local_c);
        return 0;
      }
    }
  }
  return 0xffffffff;
}

