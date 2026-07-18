
void FUN_00497000(void)

{
  int *piVar1;
  
  piVar1 = &DAT_007fb24c;
  do {
    if (*piVar1 != 0) {
      FUN_006ab060(piVar1);
    }
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x7fb270);
  return;
}

