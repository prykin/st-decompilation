
void __cdecl FUN_0070b600(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    cMf32::RecMemFree(*(cMf32 **)(iVar1 + 2),(uint *)(iVar1 + 0xd));
    FUN_006ab060(param_1);
  }
  return;
}

