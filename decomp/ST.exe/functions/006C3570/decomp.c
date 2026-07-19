
void FUN_006c3570(int param_1)

{
  int *piVar1;
  
  if (param_1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x508));
    if ((*(uint *)(param_1 + 4) & 0x20000000) != 0) {
      Library::DKW::DV::FUN_006c4110(param_1);
    }
    if ((*(uint *)(param_1 + 4) & 0x40000000) != 0) {
      FUN_006c3f00(param_1);
    }
    if (*(HANDLE *)(param_1 + 0x84) != (HANDLE)0x0) {
      TerminateThread(*(HANDLE *)(param_1 + 0x84),0);
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x58);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x54);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    if (*(int **)(param_1 + 0x40) != (int *)0x0) {
      FUN_006d4f50(*(int **)(param_1 + 0x40));
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (*(int **)(param_1 + 0x44) != (int *)0x0) {
      FUN_006d4f50(*(int **)(param_1 + 0x44));
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0x7ffffffe;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x508));
  }
  return;
}

