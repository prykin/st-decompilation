
uint FUN_006d7fda(void)

{
  uint uVar1;
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x2e) = *(int *)(unaff_EBP + -4) + 0x4000;
  uVar1 = (**(code **)(unaff_EBP + -0x46))(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x29,1);
  if ((uVar1 == 1) &&
     (uVar1 = (**(code **)(unaff_EBP + -0x46))
                        (*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x2e),
                         *(undefined1 *)(unaff_EBP + -0x29)), uVar1 == *(byte *)(unaff_EBP + -0x29))
     ) {
    return uVar1;
  }
  if (-1 < (int)uVar1) {
    uVar1 = 0xfffffffb;
  }
  return uVar1;
}

