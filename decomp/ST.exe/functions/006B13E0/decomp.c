
void FUN_006b13e0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if ((param_1 != (int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) {
    if ((*(uint *)(iVar1 + 8) & 0x4000000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x4f0));
    }
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x4b0) != 0) {
      uVar2 = *(undefined4 *)(iVar1 + 0x40);
      *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x44);
      *(undefined4 *)(*param_1 + 0x44) = uVar2;
      *(undefined4 *)(*param_1 + 0x4b0) = 0;
    }
    piVar3 = *(int **)(*param_1 + 0x44);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      *(undefined4 *)(*param_1 + 0x44) = 0;
    }
    if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
    }
  }
  return;
}

