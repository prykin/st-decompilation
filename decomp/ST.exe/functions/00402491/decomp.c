
void __fastcall thunk_FUN_00492390(int *param_1)

{
  int iVar1;
  int *piStack_8;
  
  if (((*(int *)((int)param_1 + 0x45d) == 0xf) || (*(int *)((int)param_1 + 0x45d) == 0xe)) &&
     (*(int *)((int)param_1 + 0x7c6) == 0)) {
    *(undefined4 *)((int)param_1 + 0x7c6) = 1;
    piStack_8 = param_1;
    iVar1 = FUN_006e62d0(DAT_00802a38,*(int *)((int)param_1 + 0x58e),(int *)&piStack_8);
    if (iVar1 == -4) {
      RaiseInternalException
                (-0x5001fffd,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x5100);
    }
    (**(code **)(*piStack_8 + 0x9c))();
  }
  return;
}

