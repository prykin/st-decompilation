
undefined4 __fastcall FUN_004ea620(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x245) == 4) {
    iVar1 = *(int *)(param_1 + 0x46c);
    if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x46c) = 0;
    *(undefined4 *)(param_1 + 0x470) = 0;
    if (*(int *)(param_1 + 0x494) != 0) {
      thunk_FUN_004d0a80(DAT_00800bcc,*(int *)(param_1 + 0x480),*(int *)(param_1 + 0x484),
                         *(int *)(param_1 + 0x488));
      *(undefined4 *)(param_1 + 0x494) = 0;
    }
  }
  return 1;
}

