
void __cdecl FUN_00726bd0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (*(cMf32 **)(iVar1 + 2) != (cMf32 *)0x0) {
      cMf32::RecMemFree(*(cMf32 **)(iVar1 + 2),(uint *)(iVar1 + 10));
    }
    FUN_006ab060(param_1);
  }
  return;
}

