
void FUN_006c4480(int param_1,undefined4 *param_2)

{
  if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
  }
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  param_2[2] = *(undefined4 *)(param_1 + 0x10);
  param_2[3] = *(undefined4 *)(param_1 + 0x14);
  param_2[1] = *(undefined4 *)(param_1 + 0x4c0);
  if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
  }
  return;
}

