
void FUN_00497000(void)

{
  void **value;

  value = (void **)&DAT_007fb24c;
  do {
    if (*value != nullptr) {
      FreeAndNull(value);
    }
    value = value + 1;
  } while ((int)value < 0x7fb270);
  return;
}

