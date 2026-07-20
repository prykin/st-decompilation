
void FUN_00497000(void)

{
  LPVOID *ppvVar1;
  
  ppvVar1 = (LPVOID *)&DAT_007fb24c;
  do {
    if (*ppvVar1 != (LPVOID)0x0) {
      FUN_006ab060(ppvVar1);
    }
    ppvVar1 = ppvVar1 + 1;
  } while ((int)ppvVar1 < 0x7fb270);
  return;
}

