
void FUN_00753fa7(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + 0x14) - *(int *)(unaff_EBP + 0x24);
  *(int *)(unaff_EBP + 0x3c) = *(int *)(unaff_EBP + 0x3c) + iVar1;
  *(undefined4 *)(unaff_EBP + 0x1c) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + 0x24) = *(undefined4 *)(unaff_EBP + 0x14);
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    (**(code **)(unaff_EBP + 0xc))(iVar1);
  }
  return;
}

