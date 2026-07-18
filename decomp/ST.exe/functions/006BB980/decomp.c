
void FUN_006bb980(int param_1)

{
  if (*(int *)(param_1 + 0x474) != 0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x80))(*(int **)(param_1 + 0x40),0);
    *(undefined4 *)(param_1 + 0x474) = 0;
    *(undefined4 *)(param_1 + 0x478) = 0;
    if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
    }
  }
  return;
}

