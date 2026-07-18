
undefined4 __fastcall FUN_004e9c20(void *param_1)

{
  int iVar1;
  void *local_8;
  
  if (*(int *)((int)param_1 + 0x46c) != 0) {
    local_8 = param_1;
    if (*(int *)((int)param_1 + 0x48c) != 0) {
      iVar1 = FUN_006e62d0(DAT_00802a38,*(int *)((int)param_1 + 0x470),(int *)&local_8);
      if (iVar1 == 0) {
        thunk_FUN_004e95c0(local_8,(int)param_1);
        *(undefined4 *)((int)param_1 + 0x48c) = 0;
      }
    }
    if (*(int *)((int)param_1 + 0x494) != 0) {
      thunk_FUN_004d0a80(DAT_00800bcc,*(int *)((int)param_1 + 0x480),*(int *)((int)param_1 + 0x484),
                         *(int *)((int)param_1 + 0x488));
      *(undefined4 *)((int)param_1 + 0x494) = 0;
    }
  }
  return 0;
}

