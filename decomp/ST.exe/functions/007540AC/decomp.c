
void FUN_007540ac(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBP;
  char *pcVar6;
  int unaff_EDI;
  char *pcVar7;
  int iVar8;
  bool bVar9;
  
  uVar4 = (*(ushort *)(unaff_EBP + unaff_EDI + 0xd0) & 0xfff) * 2 + 0x4002;
  uVar2 = 0xfc;
  uVar5 = uVar4;
  do {
    uVar1 = *(ushort *)(unaff_EBP + 0x21ce + uVar5);
    uVar5 = (uint)uVar1;
    if (uVar5 == 0x4000) {
LAB_0075410d:
      iVar8 = unaff_EDI * 2;
      *(uint *)(unaff_EBP + 0x2c) = 0xfc - uVar2;
      uVar2 = (uint)(iVar8 - *(int *)(unaff_EBP + 0x44)) >> 1 & 0x1fff;
      *(uint *)(unaff_EBP + 0x34) = uVar2;
      *(uint *)(unaff_EBP + 0x38) = ~uVar2 + 1;
      uVar1 = *(ushort *)(unaff_EBP + 0x21ce + uVar4);
      *(ushort *)(unaff_EBP + 0x21ce + iVar8) = uVar1;
      *(short *)(unaff_EBP + 0x81d0 + (uint)uVar1) = (short)iVar8;
      *(short *)(unaff_EBP + 0x21ce + uVar4) = (short)iVar8;
      *(short *)(unaff_EBP + 0x81d0 + iVar8) = (short)uVar4;
      return;
    }
    uVar3 = 0xfc;
    pcVar7 = (char *)(unaff_EDI + 0xd1 + unaff_EBP);
    bVar9 = pcVar7 == (char *)0x0;
    pcVar6 = (char *)((uVar1 >> 1) + 0xd1 + unaff_EBP);
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      bVar9 = *pcVar6 == *pcVar7;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar9);
    if (bVar9) {
      *(uint *)(unaff_EBP + 0x44) = uVar5;
      uVar2 = 0xffffffff;
      goto LAB_0075410d;
    }
    if (uVar3 < uVar2) {
      *(uint *)(unaff_EBP + 0x44) = uVar5;
      uVar2 = uVar3;
    }
  } while( true );
}

