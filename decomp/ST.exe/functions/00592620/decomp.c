
void __fastcall FUN_00592620(int param_1)

{
  int *piVar1;
  int local_8;
  
  local_8 = 0xd;
  *(undefined4 *)(param_1 + 0x1ff8) = 0;
  piVar1 = (int *)(param_1 + 0x66);
  do {
    if (*piVar1 != 0) {
      *(int *)(param_1 + 0x25) = *piVar1;
      *(undefined4 *)(param_1 + 0x29) = 2;
      *(undefined4 *)(param_1 + 0x2d) = 0x20;
      *(undefined4 *)(param_1 + 0x31) = 0;
      (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_1 + 0x1d);
    }
    piVar1 = piVar1 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

