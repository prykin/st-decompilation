
void FUN_00497000(void)

{
  int *slotStorage;

  slotStorage = &DAT_007fb24c;
  do {
    if (*slotStorage != 0) {
      FreeAndNull(slotStorage);
    }
    slotStorage = slotStorage + 1;
  } while ((int)slotStorage < 0x7fb270);
  return;
}

