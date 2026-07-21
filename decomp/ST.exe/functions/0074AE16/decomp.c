
void __fastcall FUN_0074ae16(int param_1)

{
  DWORD dwMilliseconds;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0xd8) < 1) {
    dwMilliseconds = 0;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    dwMilliseconds = *(int *)(param_1 + 0xd8) / 10000;
  }
  Sleep(dwMilliseconds);
  return;
}

