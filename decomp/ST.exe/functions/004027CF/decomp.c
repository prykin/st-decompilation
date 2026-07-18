
void __fastcall thunk_FUN_0060c2d0(void *param_1)

{
  int iVar1;
  void *pvStack_8;
  
  pvStack_8 = param_1;
  iVar1 = FUN_006e62d0(DAT_00802a38,*(int *)((int)param_1 + 0x201),(int *)&pvStack_8);
  if ((iVar1 != -4) && (pvStack_8 != (void *)0x0)) {
    *(void **)((int)param_1 + 0x221) = pvStack_8;
    return;
  }
  thunk_FUN_006099a0(param_1);
  return;
}

