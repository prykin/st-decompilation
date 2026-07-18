
void FUN_00754047(void)

{
  short *psVar1;
  char in_AL;
  int unaff_EBP;
  
  if (in_AL != '\0') {
    *(ushort *)(unaff_EBP + 0x4e) = *(ushort *)(unaff_EBP + 0x4e) | *(ushort *)(unaff_EBP + 0x4c);
  }
  psVar1 = (short *)(unaff_EBP + 0x4c);
  *psVar1 = *psVar1 << 1;
  if (*psVar1 == 0) {
    FUN_00753ff7();
  }
  return;
}

