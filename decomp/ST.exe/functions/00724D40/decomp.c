
/* [STVTableApplier] Virtual slot 0079E2C8+0xC */

undefined4 __fastcall FUN_00724d40(void *param_1)

{
  int iVar1;

  *(undefined2 *)((int)param_1 + 0x17e) = *(undefined2 *)((int)param_1 + 0x198);
  *(undefined2 *)((int)param_1 + 0x17c) = *(undefined2 *)((int)param_1 + 0x194);
  *(int *)((int)param_1 + 0x180) = (int)param_1 + 0x24;
  iVar1 = FUN_006e5fe0(param_1,(undefined4 *)((int)param_1 + 0x168));
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return 0;
}

