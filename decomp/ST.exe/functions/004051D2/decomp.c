
undefined4 __fastcall thunk_FUN_004dd260(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x4d0) == 1) &&
     (iVar1 = thunk_FUN_004ac910((void *)(param_1 + 0x1d5),'\x0e'),
     iVar1 == *(int *)(*(int *)(param_1 + 0x1f5) + 0x20c))) {
    return 1;
  }
  return 0;
}

