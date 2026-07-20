
void FUN_006bc8f0(void)

{
  while ((DAT_00854f98 == 0 && (DAT_00854f28 < *(int *)g_int_00854FD4[0x70]))) {
    DAT_00854edc = FUN_006bc970(g_int_00854FD4,DAT_00854f28,DAT_00854fdc,DAT_00854fc8);
    if (DAT_00854edc == 0xffffffff) {
      DAT_00854f98 = 1;
      DAT_00854f28 = -2;
    }
    else if ((DAT_00854edc == 0) || (DAT_00854f28 < (int)(DAT_00854edc - 1))) {
      DAT_00854f28 = DAT_00854f28 + 1;
    }
    else {
      DAT_00854f28 = DAT_00854edc - 1;
    }
  }
  return;
}

