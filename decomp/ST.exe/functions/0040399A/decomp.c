
int __fastcall thunk_FUN_00476120(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)param_1 + 0x5d6);
  if ((iVar2 == 0) || (iVar2 == 1)) {
    iVar2 = (**(code **)(*param_1 + 0xd8))();
    return -(uint)(iVar2 != 0);
  }
  if (iVar2 == 2) {
    iVar2 = thunk_FUN_004758e0(param_1,(undefined4 *)0x2);
    return iVar2;
  }
  if (iVar2 == 5) {
    iVar2 = (**(code **)(*param_1 + 0x20))();
    return iVar2;
  }
  iVar2 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x30fa,0,0,&DAT_007a4ccc);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  return 2;
}

