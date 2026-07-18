
void __fastcall FUN_00690ab0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x89) == 0) ||
     ((uint)(*(int *)(param_1 + 0x8d) + *(int *)(param_1 + 0x89)) <= *(uint *)(param_1 + 300))) {
    *(undefined4 *)(param_1 + 0x8d) = *(undefined4 *)(param_1 + 300);
    iVar1 = thunk_FUN_006777d0(0xde,0,0,0,-1,-1);
    *(int *)(param_1 + 0x134) = iVar1;
    iVar1 = thunk_FUN_006777d0(0xdd,0,0,0,-1,-1);
    *(int *)(param_1 + 0x138) = iVar1;
    iVar1 = thunk_FUN_006777d0(0xe1,0,0,0,-1,-1);
    *(int *)(param_1 + 0x13c) = iVar1;
    iVar1 = thunk_FUN_006777d0(0xe2,0,0,0,-1,-1);
    *(int *)(param_1 + 0x140) = iVar1;
  }
  return;
}

