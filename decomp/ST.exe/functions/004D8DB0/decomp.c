
undefined4 __fastcall FUN_004d8db0(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x245)) {
  case 0:
  case 5:
    if (*(int *)(param_1 + 0x4f0) != 0) {
      if (99 < *(int *)(param_1 + 0x4ec)) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x261) = 0;
      return 0;
    }
    break;
  case 1:
  case 6:
    *(undefined4 *)(param_1 + 0x4d0) = 0;
    break;
  default:
    goto switchD_004d8dbb_caseD_2;
  }
  *(undefined4 *)(param_1 + 0x261) = 0;
switchD_004d8dbb_caseD_2:
  return 0;
}

