
void __fastcall FUN_0074ae16(int param_1)

{
  DWORD dwMilliseconds;
  
  if (*(int *)(param_1 + 0xd8) < 1) {
    dwMilliseconds = 0;
  }
  else {
    dwMilliseconds = *(int *)(param_1 + 0xd8) / 10000;
  }
  Sleep(dwMilliseconds);
  return;
}

