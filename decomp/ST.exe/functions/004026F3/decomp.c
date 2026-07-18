
int __fastcall thunk_FUN_00465be0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (*(int *)((int)param_1 + 0x497) == 0) {
    iVar2 = thunk_FUN_00460360(param_1);
    return iVar2;
  }
  if (*(int *)((int)param_1 + 0x497) == 1) {
    iVar2 = thunk_FUN_004620f0(param_1);
    return iVar2;
  }
  iVar2 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1c52,0,0,&DAT_007a4ccc);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  return -1;
}

