
void FUN_006d00d0(int *param_1,uint param_2)

{
  uint *puVar1;
  
  if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
  }
  if ((param_2 < (uint)param_1[0x68]) &&
     (puVar1 = *(uint **)(param_1[0x6c] + param_2 * 4), (*puVar1 & 0xc000) == 0xc000)) {
    FUN_006ab060((LPVOID *)(puVar1 + 0x30));
    FUN_006b3bb0(param_1,param_2);
  }
  if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
  }
  return;
}

