
uint FUN_006d8036(void)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  uint in_EAX;
  byte bVar4;
  ushort uVar5;
  int unaff_EBP;
  bool bVar6;
  
  if (*(char *)(unaff_EBP + -0x28) == '\0') {
    bVar6 = false;
    if ((*(char *)(unaff_EBP + -0x29) == '\0') && (in_EAX = FUN_006d7fda(), bVar6)) {
      return in_EAX;
    }
    uVar1 = **(undefined1 **)(unaff_EBP + -0x2e);
    in_EAX = CONCAT31((int3)(in_EAX >> 8),uVar1);
    *(undefined1 *)(unaff_EBP + -0x2a) = uVar1;
    *(undefined1 **)(unaff_EBP + -0x2e) = *(undefined1 **)(unaff_EBP + -0x2e) + 1;
    *(char *)(unaff_EBP + -0x29) = *(char *)(unaff_EBP + -0x29) + -1;
    *(undefined1 *)(unaff_EBP + -0x28) = 8;
  }
  bVar2 = *(byte *)(unaff_EBP + -0xe);
  uVar5 = (ushort)(*(byte *)(unaff_EBP + -0x2a) >> (8U - *(char *)(unaff_EBP + -0x28) & 0x1f));
  bVar4 = *(byte *)(unaff_EBP + -0x28);
  while( true ) {
    if ((char)bVar2 <= (char)bVar4) {
      *(byte *)(unaff_EBP + -0x28) = bVar4 - bVar2;
      return (uint)(uVar5 & *(ushort *)(&DAT_006d801c + (uint)bVar2 * 2));
    }
    bVar6 = false;
    if ((*(char *)(unaff_EBP + -0x29) == '\0') && (in_EAX = FUN_006d7fda(), bVar6)) break;
    bVar3 = **(byte **)(unaff_EBP + -0x2e);
    *(byte *)(unaff_EBP + -0x2a) = bVar3;
    *(byte **)(unaff_EBP + -0x2e) = *(byte **)(unaff_EBP + -0x2e) + 1;
    *(char *)(unaff_EBP + -0x29) = *(char *)(unaff_EBP + -0x29) + -1;
    in_EAX = CONCAT22((short)(in_EAX >> 0x10),(ushort)bVar3) << (bVar4 & 0x1f);
    uVar5 = uVar5 | (ushort)in_EAX;
    bVar4 = bVar4 + 8;
  }
  return in_EAX;
}

