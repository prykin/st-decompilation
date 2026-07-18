
void __fastcall thunk_FUN_00492420(int *param_1)

{
  int iVar1;
  int *piStack_8;
  
  if ((*(int *)((int)param_1 + 0x7c6) == 1) && (*(int *)((int)param_1 + 0x7ca) == 0)) {
    *(undefined4 *)((int)param_1 + 0x7c6) = 0;
    piStack_8 = param_1;
    iVar1 = FUN_006e62d0(DAT_00802a38,*(int *)((int)param_1 + 0x58e),(int *)&piStack_8);
    if (iVar1 != -4) {
      (**(code **)(*piStack_8 + 0xa0))(param_1[6]);
    }
  }
  return;
}

