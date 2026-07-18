
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d61e0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[6];
  iVar2 = *(int *)(iVar1 + 0x68) + -1;
  *(int *)(iVar1 + 0x68) = iVar2;
  if ((iVar2 < 1) && (*(int *)(iVar1 + 0x6c) != 0)) {
    (**(code **)(**(int **)(iVar1 + 100) + 0x80))(*(int **)(iVar1 + 100),0);
    if ((*(int *)(*(int *)(iVar1 + 0x5c) + 0x310) != 0) &&
       (iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + 0x5c) + 0x288) + 0x28),
       (*(uint *)(iVar2 + 8) & 0x4000000) != 0)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x4f0));
    }
    *(undefined4 *)(iVar1 + 0x6c) = 0;
  }
  _DAT_008568fc = FUN_00748b48(param_1);
  return;
}

