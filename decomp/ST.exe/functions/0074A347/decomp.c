
bool __fastcall FUN_0074a347(int param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x94));
  iVar1 = *(int *)(param_1 + 0x6c);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x94));
  return iVar1 != 0;
}

