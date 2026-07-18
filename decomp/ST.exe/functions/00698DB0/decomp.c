
uint __cdecl FUN_00698db0(int param_1,int param_2)

{
  if (*(uint *)(param_1 + 6) < *(uint *)(param_2 + 6)) {
    return 0xffffffff;
  }
  return (uint)(*(uint *)(param_2 + 6) < *(uint *)(param_1 + 6));
}

