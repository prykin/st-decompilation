
void FUN_00754068(void)

{
  ushort uVar1;
  int iVar2;
  int unaff_EBP;
  int unaff_EDI;
  int iVar3;
  
  iVar2 = (*(uint *)(unaff_EBP + 0xd0 + unaff_EDI) & 0xfff) * 2 + 0x4002;
  iVar3 = unaff_EDI * 2;
  uVar1 = *(ushort *)(unaff_EBP + 0x21ce + iVar2);
  *(ushort *)(unaff_EBP + 0x21ce + iVar3) = uVar1;
  *(short *)(unaff_EBP + 0x81d0 + (uint)uVar1) = (short)iVar3;
  *(short *)(unaff_EBP + 0x21ce + iVar2) = (short)iVar3;
  *(short *)(unaff_EBP + 0x81d0 + iVar3) = (short)iVar2;
  return;
}

