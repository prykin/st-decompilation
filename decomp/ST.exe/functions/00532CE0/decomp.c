
void __fastcall FUN_00532ce0(void *param_1)

{
  int iVar1;
  
  if (*(char *)((int)param_1 + 0x1a4) == '\x0e') {
    *(undefined4 *)((int)param_1 + 0x28) = 0x20;
    iVar1 = thunk_FUN_00648a30((uint)DAT_0080874d,(char *)0x0);
    *(uint *)((int)param_1 + 0x2c) = (uint)(iVar1 != 0);
    FUN_006e6080(param_1,2,*(undefined4 *)((int)param_1 + 0x1c1),(undefined4 *)((int)param_1 + 0x18)
                );
  }
  return;
}

