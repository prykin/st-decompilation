
undefined4 __fastcall thunk_FUN_004c91a0(void *param_1)

{
  int iVar1;
  
  if ((*(int *)((int)param_1 + 0x3d4) != 0) && (*(int *)((int)param_1 + 0x607) != 0)) {
    *(undefined4 *)((int)param_1 + 0x3d4) = 0;
  }
  if (*(int *)((int)param_1 + 0x361) != 0) {
    *(undefined4 *)((int)param_1 + 0x36d) = 1;
    *(int *)((int)param_1 + 0x365) = *(int *)((int)param_1 + 0x361);
    iVar1 = thunk_FUN_004c90c0((int)param_1);
    if (iVar1 != 0) {
      iVar1 = thunk_FUN_004406c0(*(char *)((int)param_1 + 0x24));
      if (((char)iVar1 != '\x03') && (*(int *)((int)param_1 + 0x398) != 0)) {
        thunk_FUN_004d87b0(*(char *)((int)param_1 + 0x24),
                           (*(int *)((int)param_1 + 0x394) * *(int *)((int)param_1 + 0x398)) / 100);
      }
      if (*(int *)((int)param_1 + 0x39c) != 0) {
        thunk_FUN_004d88f0(*(char *)((int)param_1 + 0x24),
                           (*(int *)((int)param_1 + 0x394) * *(int *)((int)param_1 + 0x39c)) / 100);
      }
      if (*(int *)((int)param_1 + 0x3a0) != 0) {
        thunk_FUN_004d8a30(*(char *)((int)param_1 + 0x24),
                           (*(int *)((int)param_1 + 0x394) * *(int *)((int)param_1 + 0x3a0)) / 100);
      }
      if (*(int *)((int)param_1 + 0x3a4) != 0) {
        thunk_FUN_004e4380(*(int *)((int)param_1 + 0x24),
                           (*(int *)((int)param_1 + 0x394) * *(int *)((int)param_1 + 0x3a4)) / 100);
      }
      thunk_FUN_004c7460(param_1);
      thunk_FUN_004d78e0(*(char *)((int)param_1 + 0x24));
      if (*(uint *)((int)param_1 + 0x24) == (uint)*(byte *)(*(int *)((int)param_1 + 0x10) + 0x112d))
      {
        thunk_FUN_004d8b70((char)*(uint *)((int)param_1 + 0x24));
      }
    }
  }
  return 0;
}

